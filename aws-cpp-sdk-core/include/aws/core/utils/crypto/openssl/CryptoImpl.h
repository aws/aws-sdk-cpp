#pragma once

#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/crypto/HMAC.h>
#include <aws/core/utils/crypto/Cipher.h>
#include <openssl/ossl_typ.h>
#include <openssl/evp.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {

            class MD5OpenSSLImpl : public Hash
            {
            public:

                MD5OpenSSLImpl() {}
                virtual ~MD5OpenSSLImpl() {}

                virtual HashResult Calculate(const Aws::String& str) override;

                virtual HashResult Calculate(Aws::IStream& stream) override;

            };

            class Sha256OpenSSLImpl : public Hash
            {
            public:

                Sha256OpenSSLImpl() {}
                virtual ~Sha256OpenSSLImpl() {}

                virtual HashResult Calculate(const Aws::String& str) override;

                virtual HashResult Calculate(Aws::IStream& stream) override;
            };

            class Sha256HMACOpenSSLImpl : public HMAC
            {
            public:

                Sha256HMACOpenSSLImpl() {}
                virtual ~Sha256HMACOpenSSLImpl() {}

                virtual HashResult Calculate(const ByteBuffer& toSign, const ByteBuffer& secret) override;

            };

            class OpenSSLCipher : public SymmetricCipher
            {
            public:
                OpenSSLCipher(const ByteBuffer &key, size_t ivSize);

                OpenSSLCipher(ByteBuffer &&key, ByteBuffer &&initializationVector);

                OpenSSLCipher(const ByteBuffer &key, const ByteBuffer &initializationVector);

                OpenSSLCipher(const OpenSSLCipher& other) = delete;
                OpenSSLCipher& operator=(const OpenSSLCipher& other) = delete;

                /**
                 * Normally we don't work around VS 2013 not auto-generating these, but they are kind of expensive,
                 * so let's go ahead and optimize by defining default move operations. Implementors of this class
                 * need to be sure to define the move operations and call the base class.
                 */
                OpenSSLCipher(OpenSSLCipher &&toMove);

                /**
                 * Normally we don't work around VS 2013 not auto-generating these, but they are kind of expensive,
                 * so let's go ahead and optimize by defining default move operations. Implementors of this class
                 * need to be sure to define the move operations and call the base class.
                 */
                OpenSSLCipher& operator=(OpenSSLCipher&& toMove) = default;


                virtual ~OpenSSLCipher();

                /**
                 * Encrypt a buffer of data. Part of the contract for this interface is that intention that
                 * a user call this function multiple times for a large stream. As such, multiple calls to this function
                 * on the same instance should produce valid sequential output for an encrypted stream.
                 */
                ByteBuffer EncryptBuffer( const ByteBuffer& unEncryptedData) override;

                /**
                 * Finalize Encryption, returns anything remaining in the last block
                 */
                ByteBuffer FinalizeEncryption () override;

                /**
                * Decrypt a buffer of data. Part of the contract for this interface is that intention that
                * a user call this function multiple times for a large stream. As such, mutliple calls to this function
                * on the same instance should produce valid sequential output from an encrypted stream.
                */
                ByteBuffer Decrypt(const ByteBuffer& encryptedData) override;

                /**
                 * Finalize Decryption, returns anything remaining in the last block
                 */
                ByteBuffer FinalizeDecryption () override;

            protected:
                virtual void InitEncryptor_Internal() = 0;
                virtual void InitDecryptor_Internal() = 0;

                virtual size_t GetBlockSizeBytes() const = 0;
                virtual size_t GetKeyLengthBits() const = 0;

                EVP_CIPHER_CTX m_ctx;

            private:
                void Init();
                void CheckInitEncryptor();
                void CheckInitDecryptor();

                bool m_encDecInitialized;
                bool m_encryptionMode;
                bool m_decryptionMode;
            };

            class AES_CBC_Cipher_OpenSSL : public OpenSSLCipher
            {
            public:
                AES_CBC_Cipher_OpenSSL(const ByteBuffer &key);

                AES_CBC_Cipher_OpenSSL(ByteBuffer &&key, ByteBuffer &&initializationVector);

                AES_CBC_Cipher_OpenSSL(const ByteBuffer &key, const ByteBuffer &initializationVector);

                AES_CBC_Cipher_OpenSSL(const AES_CBC_Cipher_OpenSSL &other) = delete;

                AES_CBC_Cipher_OpenSSL(AES_CBC_Cipher_OpenSSL&& toMove) = default;

            protected:
                void InitEncryptor_Internal() override;
                void InitDecryptor_Internal() override;

                size_t GetBlockSizeBytes() const override;
                size_t GetKeyLengthBits() const override;

            private:
                static size_t BlockSizeBytes;
                static size_t KeyLengthBits;
            };

            class AES_CTR_Cipher_OpenSSL : public OpenSSLCipher
            {
            public:
                AES_CTR_Cipher_OpenSSL(const ByteBuffer &key);

                AES_CTR_Cipher_OpenSSL(ByteBuffer &&key, ByteBuffer &&initializationVector);

                AES_CTR_Cipher_OpenSSL(const ByteBuffer &key, const ByteBuffer &initializationVector);

                AES_CTR_Cipher_OpenSSL(const AES_CTR_Cipher_OpenSSL &other) = delete;

                AES_CTR_Cipher_OpenSSL(AES_CTR_Cipher_OpenSSL&& toMove) = default;

            protected:
                void InitEncryptor_Internal() override;
                void InitDecryptor_Internal() override;

                size_t GetBlockSizeBytes() const override;
                size_t GetKeyLengthBits() const override;

            private:
                static size_t BlockSizeBytes;
                static size_t KeyLengthBits;
            };

            class AES_GCM_Cipher_OpenSSL : public OpenSSLCipher
            {
            public:
                AES_GCM_Cipher_OpenSSL(const ByteBuffer &key);

                AES_GCM_Cipher_OpenSSL(ByteBuffer &&key, ByteBuffer &&initializationVector);

                AES_GCM_Cipher_OpenSSL(const ByteBuffer &key, const ByteBuffer &initializationVector);

                AES_GCM_Cipher_OpenSSL(const AES_GCM_Cipher_OpenSSL &other) = delete;

                AES_GCM_Cipher_OpenSSL(AES_GCM_Cipher_OpenSSL&& toMove) = default;

            protected:
                void InitEncryptor_Internal() override;
                void InitDecryptor_Internal() override;

                size_t GetBlockSizeBytes() const override;
                size_t GetKeyLengthBits() const override;

            private:
                static size_t BlockSizeBytes;
                static size_t IVLengthBytes;
                static size_t KeyLengthBits;
            };

        } // namespace Crypto
    } // namespace Utils
} // namespace Aws
