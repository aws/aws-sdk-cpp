/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AssociationDetail.h>

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
class CreateCustomDetectionRuleAssociationResult {
 public:
  AWS_GUARDDUTY_API CreateCustomDetectionRuleAssociationResult() = default;
  AWS_GUARDDUTY_API CreateCustomDetectionRuleAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GUARDDUTY_API CreateCustomDetectionRuleAssociationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the newly created custom detection rule association.</p>
   */
  inline const AssociationDetail& GetRuleAssociation() const { return m_ruleAssociation; }
  template <typename RuleAssociationT = AssociationDetail>
  void SetRuleAssociation(RuleAssociationT&& value) {
    m_ruleAssociationHasBeenSet = true;
    m_ruleAssociation = std::forward<RuleAssociationT>(value);
  }
  template <typename RuleAssociationT = AssociationDetail>
  CreateCustomDetectionRuleAssociationResult& WithRuleAssociation(RuleAssociationT&& value) {
    SetRuleAssociation(std::forward<RuleAssociationT>(value));
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
  CreateCustomDetectionRuleAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AssociationDetail m_ruleAssociation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ruleAssociationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
