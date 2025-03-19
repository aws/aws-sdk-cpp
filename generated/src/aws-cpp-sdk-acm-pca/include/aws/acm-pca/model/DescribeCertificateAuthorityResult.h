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
    AWS_ACMPCA_API DescribeCertificateAuthorityResult() = default;
    AWS_ACMPCA_API DescribeCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API DescribeCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CertificateAuthority.html">CertificateAuthority</a>
     * structure that contains information about your private CA.</p>
     */
    inline const CertificateAuthority& GetCertificateAuthority() const { return m_certificateAuthority; }
    template<typename CertificateAuthorityT = CertificateAuthority>
    void SetCertificateAuthority(CertificateAuthorityT&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::forward<CertificateAuthorityT>(value); }
    template<typename CertificateAuthorityT = CertificateAuthority>
    DescribeCertificateAuthorityResult& WithCertificateAuthority(CertificateAuthorityT&& value) { SetCertificateAuthority(std::forward<CertificateAuthorityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCertificateAuthorityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CertificateAuthority m_certificateAuthority;
    bool m_certificateAuthorityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
