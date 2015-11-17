#pragma once

#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/crypto/HMAC.h>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {

            class MD5CommonCryptoImpl : public Hash
            {
            public:

                MD5CommonCryptoImpl() {}
                virtual ~MD5CommonCryptoImpl() {}

                virtual HashResult Calculate(const Aws::String& str) override;

                virtual HashResult Calculate(Aws::IStream& stream) override;

            };

            class Sha256CommonCryptoImpl : public Hash
            {
            public:

                Sha256CommonCryptoImpl() {}
                virtual ~Sha256CommonCryptoImpl() {}

                virtual HashResult Calculate(const Aws::String& str) override;

                virtual HashResult Calculate(Aws::IStream& stream) override;
            };

            class Sha256HMACCommonCryptoImpl : public HMAC
            {
            public:

                Sha256HMACCommonCryptoImpl() {}
                virtual ~Sha256HMACCommonCryptoImpl() {}

                virtual HashResult Calculate(const ByteBuffer& toSign, const ByteBuffer& secret) override;


            };

        } // namespace Crypto
    } // namespace Utils
} // namespace Aws
