/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DomainValidationSummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {
class ListCertificateDomainValidationsResult {
 public:
  AWS_ACM_API ListCertificateDomainValidationsResult() = default;
  AWS_ACM_API ListCertificateDomainValidationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API ListCertificateDomainValidationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <a>DomainValidationSummary</a> objects, one for each domain on the
   * certificate. Each object contains the domain name and its active and requested
   * validation configurations.</p>
   */
  inline const Aws::Vector<DomainValidationSummary>& GetDomainValidationSummaryList() const { return m_domainValidationSummaryList; }
  template <typename DomainValidationSummaryListT = Aws::Vector<DomainValidationSummary>>
  void SetDomainValidationSummaryList(DomainValidationSummaryListT&& value) {
    m_domainValidationSummaryListHasBeenSet = true;
    m_domainValidationSummaryList = std::forward<DomainValidationSummaryListT>(value);
  }
  template <typename DomainValidationSummaryListT = Aws::Vector<DomainValidationSummary>>
  ListCertificateDomainValidationsResult& WithDomainValidationSummaryList(DomainValidationSummaryListT&& value) {
    SetDomainValidationSummaryList(std::forward<DomainValidationSummaryListT>(value));
    return *this;
  }
  template <typename DomainValidationSummaryListT = DomainValidationSummary>
  ListCertificateDomainValidationsResult& AddDomainValidationSummaryList(DomainValidationSummaryListT&& value) {
    m_domainValidationSummaryListHasBeenSet = true;
    m_domainValidationSummaryList.emplace_back(std::forward<DomainValidationSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the number of results exceeds <code>MaxItems</code>, this token is
   * included in the response. Use this token in a subsequent
   * <code>ListCertificateDomainValidations</code> request to retrieve the next page
   * of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCertificateDomainValidationsResult& WithNextToken(NextTokenT&& value) {
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
  ListCertificateDomainValidationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DomainValidationSummary> m_domainValidationSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainValidationSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
