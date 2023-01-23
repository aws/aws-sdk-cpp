/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ACM
{
namespace Model
{
  class GetCertificateResult
  {
  public:
    AWS_ACM_API GetCertificateResult();
    AWS_ACM_API GetCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API GetCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }

    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }

    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }

    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline GetCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline GetCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline GetCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }

    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }

    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }

    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline GetCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline GetCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline GetCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
