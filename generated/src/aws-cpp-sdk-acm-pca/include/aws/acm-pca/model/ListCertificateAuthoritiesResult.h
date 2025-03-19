/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/CertificateAuthority.h>
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
  class ListCertificateAuthoritiesResult
  {
  public:
    AWS_ACMPCA_API ListCertificateAuthoritiesResult() = default;
    AWS_ACMPCA_API ListCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API ListCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCertificateAuthoritiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline const Aws::Vector<CertificateAuthority>& GetCertificateAuthorities() const { return m_certificateAuthorities; }
    template<typename CertificateAuthoritiesT = Aws::Vector<CertificateAuthority>>
    void SetCertificateAuthorities(CertificateAuthoritiesT&& value) { m_certificateAuthoritiesHasBeenSet = true; m_certificateAuthorities = std::forward<CertificateAuthoritiesT>(value); }
    template<typename CertificateAuthoritiesT = Aws::Vector<CertificateAuthority>>
    ListCertificateAuthoritiesResult& WithCertificateAuthorities(CertificateAuthoritiesT&& value) { SetCertificateAuthorities(std::forward<CertificateAuthoritiesT>(value)); return *this;}
    template<typename CertificateAuthoritiesT = CertificateAuthority>
    ListCertificateAuthoritiesResult& AddCertificateAuthorities(CertificateAuthoritiesT&& value) { m_certificateAuthoritiesHasBeenSet = true; m_certificateAuthorities.emplace_back(std::forward<CertificateAuthoritiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCertificateAuthoritiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CertificateAuthority> m_certificateAuthorities;
    bool m_certificateAuthoritiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
