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

#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            /**
             * Interface for encryption and decryption providers. An instance of this class is good for exactly one encryption or decryption run.
             * It should not be used to encrypt or decrypt multiple messages.
             */
            class Cipher
            {
            public:
                virtual ~Cipher() = default;
                /**
                 * Encrypt a buffer of data. Part of the contract for this interface is that intention that 
                 * a user call this function multiple times for a large stream. As such, it is expected that this function
                 * will mutate initialization vectors and other state involved in the encryption process, mutliple calls to this function
                 * on the same instance should produce valid sequential output for an encrypted stream.
                 */
                virtual ByteBuffer Encrypt( const ByteBuffer& unEncryptedData) = 0;

                /**
                * Decrypt a buffer of data. Part of the contract for this interface is that intention that
                * a user call this function multiple times for a large stream. As such, it is expected that this function
                * will mutate initialization vectors and other state involved in the decryption process, mutliple calls to this function
                * on the same instance should produce valid sequential output from an encrypted stream.
                */
                virtual ByteBuffer Decrypt(const ByteBuffer& encryptedData) = 0;               
            };
        }
    }
}