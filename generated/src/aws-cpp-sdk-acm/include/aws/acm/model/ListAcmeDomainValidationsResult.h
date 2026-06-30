/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeDomainValidationSummary.h>
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
class ListAcmeDomainValidationsResult {
 public:
  AWS_ACM_API ListAcmeDomainValidationsResult() = default;
  AWS_ACM_API ListAcmeDomainValidationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API ListAcmeDomainValidationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of domain validations.</p>
   */
  inline const Aws::Vector<AcmeDomainValidationSummary>& GetAcmeDomainValidations() const { return m_acmeDomainValidations; }
  template <typename AcmeDomainValidationsT = Aws::Vector<AcmeDomainValidationSummary>>
  void SetAcmeDomainValidations(AcmeDomainValidationsT&& value) {
    m_acmeDomainValidationsHasBeenSet = true;
    m_acmeDomainValidations = std::forward<AcmeDomainValidationsT>(value);
  }
  template <typename AcmeDomainValidationsT = Aws::Vector<AcmeDomainValidationSummary>>
  ListAcmeDomainValidationsResult& WithAcmeDomainValidations(AcmeDomainValidationsT&& value) {
    SetAcmeDomainValidations(std::forward<AcmeDomainValidationsT>(value));
    return *this;
  }
  template <typename AcmeDomainValidationsT = AcmeDomainValidationSummary>
  ListAcmeDomainValidationsResult& AddAcmeDomainValidations(AcmeDomainValidationsT&& value) {
    m_acmeDomainValidationsHasBeenSet = true;
    m_acmeDomainValidations.emplace_back(std::forward<AcmeDomainValidationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token for pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAcmeDomainValidationsResult& WithNextToken(NextTokenT&& value) {
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
  ListAcmeDomainValidationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AcmeDomainValidationSummary> m_acmeDomainValidations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeDomainValidationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
