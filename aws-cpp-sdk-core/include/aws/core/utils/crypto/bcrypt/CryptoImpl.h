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
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/crypto/HMAC.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <mutex>

#ifdef AWS_SDK_PLATFORM_WINDOWS
#define WIN32_NO_STATUS 
#include <windows.h> 
#undef WIN32_NO_STATUS 
#endif // AWS_SDK_PLATFORM_WINDOWS

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            class BCryptHashContext;

            /** RAII class for persistent data (can be reused across hash calculations) used in Windows cryptographic hash implementations
             *  If a mutex-free implementation is desired then this data won't be reusable like this
             */
            class BCryptHashImpl
            {
            public:
                /**
                 * Inititializes Windows Crypto APIs and gets the instance ready to perform crypto calculations.
                 * algorithmName is one of the values described here: https://msdn.microsoft.com/en-us/library/windows/desktop/aa375534(v=vs.85).aspx
                 */
                BCryptHashImpl(LPCWSTR algorithmName, bool isHMAC);
                ~BCryptHashImpl();

                /**
                 * Calculates a Hash on str.
                 */
                HashResult Calculate(const Aws::String& str);
                /**
                 * Calculates an HMAC on toHash using secret
                 */
                HashResult Calculate(const ByteBuffer& toHash, const ByteBuffer& secret);
                /**
                 * Calculates a Hash on the stream without loading the entire stream into memory at once.
                 */
                HashResult Calculate(Aws::IStream& stream);

            private:

                bool IsValid() const;

                HashResult HashData(const BCryptHashContext& context, PBYTE data, ULONG dataLength);
                bool HashStream(Aws::IStream& stream);

                void* m_algorithmHandle;

                DWORD m_hashBufferLength;
                PBYTE m_hashBuffer;

                DWORD m_hashObjectLength;
                PBYTE m_hashObject;

                //I'm 99% sure the algorithm handle for windows is not thread safe, but I can't 
                //prove or disprove that theory. Therefore, we have to lock to be safe.
                std::mutex m_algorithmMutex;
            };

            /**
             * Bcrypt based Md5 hash implementation.
             */
            class MD5BcryptImpl : public Hash
            {
            public:
                /**
                 * Initializes the algorithm handles and sets up state. You don't want to call this very often
                 */
                MD5BcryptImpl();
                virtual ~MD5BcryptImpl() {}

                /**
                 * Calculates md5 hash on str.
                 */
                virtual HashResult Calculate(const Aws::String& str) override;
                /**
                 * Calculates a md5 hash on the stream without loading the entire stream into memory at once.
                 */
                virtual HashResult Calculate(Aws::IStream& stream) override;

            private:
                BCryptHashImpl m_impl;
            };

            /**
            * Bcrypt based sha256 hash implementation.
            */
            class Sha256BcryptImpl : public Hash
            {
            public:
                /**
                 * Initializes the algorithm handles and sets up state. You don't want to call this very often
                 */
                Sha256BcryptImpl();
                virtual ~Sha256BcryptImpl() {}

                /**
                 * Calculates sha256 hash on str.
                 */
                virtual HashResult Calculate(const Aws::String& str) override;
                /**
                 * Calculates a sha256 hash on the stream without loading the entire stream into memory at once.
                 */
                virtual HashResult Calculate(Aws::IStream& stream) override;

            private:
                BCryptHashImpl m_impl;
            };

            /**
            * Bcrypt based sha256 hmac hash implementation.
            */
            class Sha256HMACBcryptImpl : public HMAC
            {
            public:

                /**
                 * Initializes the algorithm handles and sets up state. You don't want to call this very often
                 */
                Sha256HMACBcryptImpl();
                virtual ~Sha256HMACBcryptImpl() {}

                /**
                 * Calculates an sha256 HMAC on toSign using secret
                 */
                virtual HashResult Calculate(const ByteBuffer& toSign, const ByteBuffer& secret) override;

            private:
                BCryptHashImpl m_impl;
            };

            /** RAII class for persistent data (can be reused across cipher calculations) used in Windows cryptographic implementations
            *  If a mutex-free implementation is desired then this data won't be reusable like this
            */
            class BCryptCipherProvider
            {
            public:
                /**
                * Inititializes Windows Crypto APIs and gets the instance ready to perform crypto calculations.
                * algorithmName is one of the values described here: https://msdn.microsoft.com/en-us/library/windows/desktop/aa375534(v=vs.85).aspx
                */
                BCryptCipherProvider(LPCWSTR algorithmName, LPCWSTR chainingMode);
                virtual ~BCryptCipherProvider();                 
           
            private:
                BCRYPT_ALG_HANDLE m_algHandle;
                DWORD m_keyObjectSize;
                DWORD m_blockSize;
                bool m_isObjValid;

            friend class BCryptSymetricCipher;
            };

            /**
             * Encryptor/Decrypto for AES in CBC mode. Can be used with an initialization vector or without.
             */
            class BCryptSymetricCipher : public Cipher
            {
            public:                
                ~BCryptSymetricCipher();

                BCryptSymetricCipher(const BCryptSymetricCipher&) = delete;
                BCryptSymetricCipher& operator=(const BCryptSymetricCipher&) = delete;               

                ByteBuffer Encrypt(const ByteBuffer& unEncryptedData) override;
                ByteBuffer Decrypt(const ByteBuffer& encryptedData) override;

                /*
                 * This call is not cheap. Don't make it often. The intention is that a user call this once for the lifetime of the application needing and AES_CBC cipher
                 * then pass the pointer to the constructor for the constructor of this class.
                 */
                static std::shared_ptr<BCryptCipherProvider> CreateBCrypt_AES_CBC_CipherProvider();

                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key, const ByteBuffer& iv);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, const ByteBuffer& iv);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, ByteBuffer&& iv);

                /*
                * This call is not cheap. Don't make it often. The intention is that a user call this once for the lifetime of the application needing and AES_CBC cipher
                * then pass the pointer to the constructor for the constructor of this class.
                */
                static std::shared_ptr<BCryptCipherProvider> CreateBCrypt_AES_GCM_CipherProvider();

                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key, const ByteBuffer& iv);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, const ByteBuffer& iv);
                static std::shared_ptr<BCryptSymetricCipher> CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, ByteBuffer&& iv);
            
            private:
                std::shared_ptr<BCryptCipherProvider> m_cipherProvider;
                BCRYPT_KEY_HANDLE m_keyHandle;
                ByteBuffer m_symKey;
                ByteBuffer m_iv;
                unsigned long m_flags;

                BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, const ByteBuffer& key, unsigned long flags);
                BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, ByteBuffer&& key, unsigned long flags);
                BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, const ByteBuffer& key, const ByteBuffer& iv, unsigned long flags);
                BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, ByteBuffer&& key, const ByteBuffer& iv, unsigned long flags);
                BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, ByteBuffer&& key, ByteBuffer&& iv, unsigned long flags);
                void Init(const ByteBuffer& key);
            };           
        } // namespace Crypto
    } // namespace Utils
} // namespace Aws

