/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/utils/crypto/Sha256HMAC.h>

#include <aws/core/utils/Outcome.h>

#include <cstring>
#include <openssl/hmac.h>
#include <openssl/sha.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

Sha256HMAC::Sha256HMAC() 
{
}

Sha256HMAC::~Sha256HMAC() 
{
}

HashResult Sha256HMAC::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret)
{
    unsigned int length = SHA256_DIGEST_LENGTH;
    ByteBuffer digest(length);
    std::memset(digest.GetUnderlyingData(), 0, length);

    HMAC_CTX ctx;
    HMAC_CTX_init(&ctx);

    HMAC_Init_ex(&ctx, secret.GetUnderlyingData(), secret.GetLength(),
                    EVP_sha256(), NULL);
    HMAC_Update(&ctx, toSign.GetUnderlyingData(), toSign.GetLength());
    HMAC_Final(&ctx, digest.GetUnderlyingData(), &length);
    HMAC_CTX_cleanup(&ctx);

    return HashResult(std::move(digest));
}
