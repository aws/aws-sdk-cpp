/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AssociationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {
class ListCustomDetectionRuleAssociationsResult {
 public:
  AWS_GUARDDUTY_API ListCustomDetectionRuleAssociationsResult() = default;
  AWS_GUARDDUTY_API ListCustomDetectionRuleAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GUARDDUTY_API ListCustomDetectionRuleAssociationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of custom detection rule association summaries.</p>
   */
  inline const Aws::Vector<AssociationSummary>& GetRuleAssociations() const { return m_ruleAssociations; }
  template <typename RuleAssociationsT = Aws::Vector<AssociationSummary>>
  void SetRuleAssociations(RuleAssociationsT&& value) {
    m_ruleAssociationsHasBeenSet = true;
    m_ruleAssociations = std::forward<RuleAssociationsT>(value);
  }
  template <typename RuleAssociationsT = Aws::Vector<AssociationSummary>>
  ListCustomDetectionRuleAssociationsResult& WithRuleAssociations(RuleAssociationsT&& value) {
    SetRuleAssociations(std::forward<RuleAssociationsT>(value));
    return *this;
  }
  template <typename RuleAssociationsT = AssociationSummary>
  ListCustomDetectionRuleAssociationsResult& AddRuleAssociations(RuleAssociationsT&& value) {
    m_ruleAssociationsHasBeenSet = true;
    m_ruleAssociations.emplace_back(std::forward<RuleAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token to retrieve the next page of results. If this field is
   * empty, there are no additional results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCustomDetectionRuleAssociationsResult& WithNextToken(NextTokenT&& value) {
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
  ListCustomDetectionRuleAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AssociationSummary> m_ruleAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ruleAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
