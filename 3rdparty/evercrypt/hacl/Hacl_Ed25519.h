/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: /mnt/e/everest/verify/kremlin/krml -tmpdir ed25519-c -I /mnt/e/everest/verify/hacl-star/code/old/lib/kremlin -I /mnt/e/everest/verify/kremlin/kremlib/compat -I /mnt/e/everest/verify/hacl-star/specs -I /mnt/e/everest/verify/hacl-star/specs/old -I . -fparentheses -fcurly-braces -fno-shadow -ccopt -march=native -verbose -ldopt -flto -I ../bignum -I ../curve25519 -I ../hash -bundle Hacl.Ed25519=* -minimal -add-include "kremlib.h" -skip-compilation ed25519-c/out.krml -o ed25519-c/Hacl_Ed25519.c
 * F* version: ebf0a2cc
 * KreMLin version: e9a42a80
 */


#ifndef __Hacl_Ed25519_H
#define __Hacl_Ed25519_H


#include "kremlib.h"

typedef uint8_t *Hacl_Ed25519_uint8_p;

typedef uint8_t *Hacl_Ed25519_hint8_p;

void Hacl_Ed25519_sign(uint8_t *signature, uint8_t *secret, uint8_t *msg, uint32_t len1);

bool Hacl_Ed25519_verify(uint8_t *output, uint8_t *msg, uint32_t len1, uint8_t *signature);

void Hacl_Ed25519_secret_to_public(uint8_t *output, uint8_t *secret);

void Hacl_Ed25519_expand_keys(uint8_t *ks, uint8_t *secret);

void Hacl_Ed25519_sign_expanded(uint8_t *signature, uint8_t *ks, uint8_t *msg, uint32_t len1);

#define __Hacl_Ed25519_H_DEFINED
#endif