/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CertificateAuthoritySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {
class ListCertificateAuthoritiesResult {
 public:
  AWS_EKS_API ListCertificateAuthoritiesResult() = default;
  AWS_EKS_API ListCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EKS_API ListCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of certificate authority summary objects, each containing basic
   * information about a certificate authority, including its ID, signing status, and
   * distribution status.</p>
   */
  inline const Aws::Vector<CertificateAuthoritySummary>& GetCertificateAuthorities() const { return m_certificateAuthorities; }
  template <typename CertificateAuthoritiesT = Aws::Vector<CertificateAuthoritySummary>>
  void SetCertificateAuthorities(CertificateAuthoritiesT&& value) {
    m_certificateAuthoritiesHasBeenSet = true;
    m_certificateAuthorities = std::forward<CertificateAuthoritiesT>(value);
  }
  template <typename CertificateAuthoritiesT = Aws::Vector<CertificateAuthoritySummary>>
  ListCertificateAuthoritiesResult& WithCertificateAuthorities(CertificateAuthoritiesT&& value) {
    SetCertificateAuthorities(std::forward<CertificateAuthoritiesT>(value));
    return *this;
  }
  template <typename CertificateAuthoritiesT = CertificateAuthoritySummary>
  ListCertificateAuthoritiesResult& AddCertificateAuthorities(CertificateAuthoritiesT&& value) {
    m_certificateAuthoritiesHasBeenSet = true;
    m_certificateAuthorities.emplace_back(std::forward<CertificateAuthoritiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListCertificateAuthorities</code> request. When the results of a
   * <code>ListCertificateAuthorities</code> request exceed <code>maxResults</code>,
   * you can use this value to retrieve the next page of results. This value is null
   * when there are no more results to return.</p>  <p>This token should be
   * treated as an opaque identifier that is used only to retrieve the next items in
   * a list and not for other programmatic purposes.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCertificateAuthoritiesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListCertificateAuthoritiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CertificateAuthoritySummary> m_certificateAuthorities;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_certificateAuthoritiesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
