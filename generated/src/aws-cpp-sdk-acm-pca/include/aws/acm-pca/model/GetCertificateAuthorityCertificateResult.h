/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{
  class GetCertificateAuthorityCertificateResult
  {
  public:
    AWS_ACMPCA_API GetCertificateAuthorityCertificateResult();
    AWS_ACMPCA_API GetCertificateAuthorityCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API GetCertificateAuthorityCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Base64-encoded certificate authority (CA) certificate.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }
    inline GetCertificateAuthorityCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline GetCertificateAuthorityCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline GetCertificateAuthorityCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Base64-encoded certificate chain that includes any intermediate certificates
     * and chains up to root certificate that you used to sign your private CA
     * certificate. The chain does not include your private CA certificate. If this is
     * a root CA, the value will be null.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }
    inline GetCertificateAuthorityCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}
    inline GetCertificateAuthorityCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}
    inline GetCertificateAuthorityCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCertificateAuthorityCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCertificateAuthorityCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCertificateAuthorityCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
