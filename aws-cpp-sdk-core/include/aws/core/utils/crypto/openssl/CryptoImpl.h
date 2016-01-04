#pragma once

#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/crypto/HMAC.h>

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

        } // namespace Crypto
    } // namespace Utils
} // namespace Aws
