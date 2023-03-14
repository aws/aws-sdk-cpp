/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/CertificateAuthority.h>
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
  class DescribeCertificateAuthorityResult
  {
  public:
    AWS_ACMPCA_API DescribeCertificateAuthorityResult();
    AWS_ACMPCA_API DescribeCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API DescribeCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CertificateAuthority.html">CertificateAuthority</a>
     * structure that contains information about your private CA.</p>
     */
    inline const CertificateAuthority& GetCertificateAuthority() const{ return m_certificateAuthority; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CertificateAuthority.html">CertificateAuthority</a>
     * structure that contains information about your private CA.</p>
     */
    inline void SetCertificateAuthority(const CertificateAuthority& value) { m_certificateAuthority = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CertificateAuthority.html">CertificateAuthority</a>
     * structure that contains information about your private CA.</p>
     */
    inline void SetCertificateAuthority(CertificateAuthority&& value) { m_certificateAuthority = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CertificateAuthority.html">CertificateAuthority</a>
     * structure that contains information about your private CA.</p>
     */
    inline DescribeCertificateAuthorityResult& WithCertificateAuthority(const CertificateAuthority& value) { SetCertificateAuthority(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CertificateAuthority.html">CertificateAuthority</a>
     * structure that contains information about your private CA.</p>
     */
    inline DescribeCertificateAuthorityResult& WithCertificateAuthority(CertificateAuthority&& value) { SetCertificateAuthority(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeCertificateAuthorityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeCertificateAuthorityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeCertificateAuthorityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CertificateAuthority m_certificateAuthority;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
