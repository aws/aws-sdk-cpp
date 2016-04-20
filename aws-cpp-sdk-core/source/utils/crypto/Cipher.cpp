/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/crypto/Cipher.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/crypto/Sha256.h>
#include <random>
#include <mutex>
#include <atomic>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;

static const unsigned long SEED_WARMUP = 70000;
static const unsigned int BIT_MASK = 0x000000FF;
static const unsigned int THREE_BYTES_SHIFT = 24;
static const unsigned int TWO_BYTES_SHIFT = 16;
static const unsigned int ONE_BYTES_SHIFT = 8;

static std::atomic<bool> isInit(false);
static std::mt19937 prng;
static std::mutex randLock;
static std::shared_ptr<Hash> sha256Hash(nullptr);

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            void InitCiphers()
            {
                if(!isInit)
                {
                    std::lock_guard<std::mutex> locker(randLock);

                    if(!isInit)
                    {
                        /**
                         * Seed Mersenne twister based on this paper:
                         * http://www.iro.umontreal.ca/~lecuyer/myftp/papers/lfsr04.pdf
                         * And the advice from the standards commitee found here:
                         * http://en.cppreference.com/w/cpp/numeric/random/random_device
                         * It is not cheap so only do it once, and lazily.
                         */
                        std::random_device secureRand;
                        prng = std::mt19937(secureRand());
                        prng.discard(SEED_WARMUP);

                        sha256Hash = CreateSha256Implementation();
                        isInit = true;
                    }
                }
            }

            void CleanupCiphers()
            {
                std::lock_guard<std::mutex> locker(randLock);
                sha256Hash = nullptr;
                isInit = false;
            }
        }
    }
}

/**
 * Generate random number per 4 bytes and use each byte for the byte in the iv
 */
ByteBuffer SymmetricCipher::GenerateIV(size_t ivLengthBytes, bool ctrMode)
{
    assert(isInit);

    ByteBuffer iv(ivLengthBytes);

    unsigned int randNumber = 0;

    for(size_t i = 0; i < iv.GetLength(); ++i)
    {
        unsigned char byteToAssign = 0;

        switch(i % 4)
        {
            case 0:
                {
                    std::lock_guard<std::mutex> locker(randLock);
                    randNumber = prng();
                }
                byteToAssign = static_cast<unsigned char>((randNumber >> THREE_BYTES_SHIFT) & BIT_MASK);
                break;
            case 1:
                byteToAssign = static_cast<unsigned char>((randNumber >> TWO_BYTES_SHIFT) & BIT_MASK);
                break;
            case 2:
                byteToAssign = static_cast<unsigned char>((randNumber >> ONE_BYTES_SHIFT) & BIT_MASK);
                break;
            case 3:
                byteToAssign = static_cast<unsigned char>(randNumber & BIT_MASK);
                break;
        }

        iv[i] = byteToAssign;
    }

    if(ctrMode)
    {
        //init the counter
        size_t length = iv.GetLength();
        //[ nonce 1/4] [ iv 1/2 ] [ ctr 1/4 ]
        size_t ctrStart = (length / 2) + (length / 4);
        for(; ctrStart < iv.GetLength() - 1; ++ ctrStart)
        {
            iv[ctrStart] = 0;
        }
        iv[length - 1] = 1;

        //init the nonce
        auto hashResult = sha256Hash->Calculate(HashingUtils::HexEncode(iv));

        //fill in the nonce
        if(hashResult.IsSuccess())
        {
            const ByteBuffer& hash = hashResult.GetResult();
            size_t nonceEnd = length / 4;
            for(size_t i = 0; i < nonceEnd && i < hash.GetLength(); ++i)
            {
                iv[i] = hash[i];
            }
        }
    }

    return iv;
}