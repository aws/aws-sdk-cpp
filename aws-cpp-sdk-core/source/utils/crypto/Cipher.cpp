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
#include <random>
#include <mutex>
#include <atomic>

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

/**
 * Seed Mersenne twister based on this paper:
 * http://www.iro.umontreal.ca/~lecuyer/myftp/papers/lfsr04.pdf
 * And the advice from the standards commitee found here:
 * http://en.cppreference.com/w/cpp/numeric/random/random_device
 * It is not cheap so only do it once, and lazily.
 */
void InitRandomNumberGenerator()
{
    if(!isInit)
    {
        std::lock_guard<std::mutex> locker(randLock);

        if(!isInit)
        {
            std::random_device secureRand;
            // Assert because this would mean that our random number generator is deterministic on the platform
            // we built against and that would be very bad. Make the developer aware of the problem to break the news
            // that they safely can't do crypto on their platform.
            assert(secureRand.entropy() > 0);
            prng = std::mt19937(secureRand());
            prng.discard(SEED_WARMUP);
            isInit = true;
        }
    }
}

/**
 * Generate random number per 4 bytes and use each byte for the byte in the iv
 */
ByteBuffer SymmetricCipher::GenerateIV(size_t ivLengthBytes)
{
    InitRandomNumberGenerator();

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

    return iv;
}