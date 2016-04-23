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
#include <aws/core/utils/crypto/SecureRandom.h>

using namespace Aws::Utils::Crypto;
using namespace Aws::Utils;

static const unsigned int BIT_MASK = 0x000000FF;
static const unsigned int SEVEN_BYTES_SHIFT = 56;
static const unsigned int SIX_BYTES_SHIFT = 48;
static const unsigned int FIVE_BYTES_SHIFT = 40;
static const unsigned int FOUR_BYTES_SHIFT = 32;
static const unsigned int THREE_BYTES_SHIFT = 24;
static const unsigned int TWO_BYTES_SHIFT = 16;
static const unsigned int ONE_BYTES_SHIFT = 8;

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            /**
             * Generate random number per 4 bytes and use each byte for the byte in the iv
             */
            ByteBuffer SymmetricCipher::GenerateIV(size_t ivLengthBytes, bool ctrMode)
            {
                std::shared_ptr<SecureRandom<uint64_t>> rng = Create64BitSecureRandomImplementation();

                ByteBuffer iv(ivLengthBytes);

                uint64_t randNumber = 0;
                size_t lengthToGenerate = ctrMode ? (3 * iv.GetLength())  / 4 : iv.GetLength();

                for(size_t i = 0; i < lengthToGenerate; ++i)
                {
                    unsigned char byteToAssign = 0;

                    switch(i % sizeof(uint64_t))
                    {
                    case 0:
                        randNumber = rng->operator()();
                        byteToAssign = static_cast<unsigned char>((randNumber >> SEVEN_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 1:
                        byteToAssign = static_cast<unsigned char>((randNumber >> SIX_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 2:
                        byteToAssign = static_cast<unsigned char>((randNumber >> FIVE_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 3:
                        byteToAssign = static_cast<unsigned char>((randNumber >> FOUR_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 4:
                        byteToAssign = static_cast<unsigned char>((randNumber >> THREE_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 5:
                        byteToAssign = static_cast<unsigned char>((randNumber >> TWO_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 6:
                        byteToAssign = static_cast<unsigned char>((randNumber >> ONE_BYTES_SHIFT) & BIT_MASK);
                        break;
                    case 7:
                        byteToAssign = static_cast<unsigned char>(randNumber & BIT_MASK);
                        break;
                    default:
                        //if uint64_t isn't 64bits, then something really bad has happened.
                        assert(0);
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
                }

                return iv;
            }
        }
    }
}

