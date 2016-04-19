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

#include <aws/core/Core_EXPORTS.h>
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
            class AWS_CORE_API SymmetricCipher
            {
            public:
                /**
                 * Initialize with key and an auto-generated initializationVector
                 */
                SymmetricCipher(const ByteBuffer& key, size_t ivSize) : m_key(key), m_initializationVector(GenerateIV(ivSize)) {}

                /**
                 * Initialize with key and initializationVector (makes copies of the buffers)
                 */
                SymmetricCipher(const ByteBuffer& key, const ByteBuffer& initializationVector) :
                        m_key(key), m_initializationVector(initializationVector) {}

                /**
                 * Initialize with key and initializationVector (move the buffers)
                 */
                SymmetricCipher(ByteBuffer&& key, ByteBuffer&& initializationVector) :
                        m_key(key), m_initializationVector(initializationVector) {}

                SymmetricCipher(const SymmetricCipher& other) = delete;
                SymmetricCipher& operator=(const SymmetricCipher& other) = delete;

                /**
                 * Normally we don't work around VS 2013 not auto-generating these, but they are kind of expensive,
                 * so let's go ahead and optimize by defining default move operations. Implementors of this class
                 * need to be sure to define the move operations and call the base class.
                 */
                SymmetricCipher(SymmetricCipher&& toMove) :
                        m_key(std::move(toMove.m_key)), m_initializationVector(std::move(toMove.m_initializationVector))
                {
                }

                /**
                 * Normally we don't work around VS 2013 not auto-generating these, but they are kind of expensive,
                 * so let's go ahead and optimize by defining default move operations. Implementors of this class
                 * need to be sure to define the move operations and call the base class.
                 */
                SymmetricCipher& operator=(SymmetricCipher&& toMove)
                {
                    m_key = std::move(toMove.m_key);
                    m_initializationVector = std::move(toMove.m_initializationVector);

                    return *this;
                }

                virtual ~SymmetricCipher() = default;

                /**
                 * Encrypt a buffer of data. Part of the contract for this interface is that intention that 
                 * a user call this function multiple times for a large stream. As such, multiple calls to this function
                 * on the same instance should produce valid sequential output for an encrypted stream.
                 */
                virtual ByteBuffer EncryptBuffer( const ByteBuffer& unEncryptedData) = 0;

                /**
                 * Finalize Encryption, returns anything remaining in the last block
                 */
                virtual ByteBuffer FinalizeEncryption () = 0;

                /**
                * Decrypt a buffer of data. Part of the contract for this interface is that intention that
                * a user call this function multiple times for a large stream. As such, mutliple calls to this function
                * on the same instance should produce valid sequential output from an encrypted stream.
                */
                virtual ByteBuffer Decrypt(const ByteBuffer& encryptedData) = 0;

                /**
                 * Finalize Decryption, returns anything remaining in the last block
                 */
                virtual ByteBuffer FinalizeDecryption () = 0;

                inline const ByteBuffer& GetKey() const { return m_key; }
                inline const ByteBuffer& GetIV() const { return m_initializationVector; }

                /**
                 * Generates a non-deterministic random IV. The first call is somewhat expensive but subsequent calls
                 * should be fast.
                 */
                static ByteBuffer GenerateIV(size_t ivLengthBytes);

            protected:
                ByteBuffer m_key;
                ByteBuffer m_initializationVector;
            };

            class SymmetricCipherFactory
            {
            public:
                virtual ~SymmetricCipherFactory() {}

                /**
                 * Factory method. Returns cipher implementation.
                 */
                virtual std::shared_ptr<SymmetricCipher> CreateImplementation(const ByteBuffer& key) const = 0;
                virtual std::shared_ptr<SymmetricCipher> CreateImplementation(const ByteBuffer& key, const ByteBuffer& iv) const = 0;
                virtual std::shared_ptr<SymmetricCipher> CreateImplementation(ByteBuffer&& key, ByteBuffer&& iv) const = 0;
            };
        }
    }
}