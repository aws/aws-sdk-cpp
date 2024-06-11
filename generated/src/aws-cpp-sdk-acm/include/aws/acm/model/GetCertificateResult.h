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


    ///@{
    /**
     * <p>The ACM-issued certificate corresponding to the ARN specified as input.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }
    inline GetCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline GetCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline GetCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Certificates forming the requested certificate's chain of trust. The chain
     * consists of the certificate of the issuing CA and the intermediate certificates
     * of any other subordinate CAs. </p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }
    inline GetCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}
    inline GetCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}
    inline GetCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
