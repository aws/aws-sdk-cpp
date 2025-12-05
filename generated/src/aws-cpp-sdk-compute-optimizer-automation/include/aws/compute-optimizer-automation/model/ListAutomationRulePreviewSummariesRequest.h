/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/Criteria.h>
#include <aws/compute-optimizer-automation/model/OrganizationScope.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionType.h>
#include <aws/compute-optimizer-automation/model/RuleType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class ListAutomationRulePreviewSummariesRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListAutomationRulePreviewSummariesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAutomationRulePreviewSummaries"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of rule.</p>
   */
  inline RuleType GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline ListAutomationRulePreviewSummariesRequest& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational scope for the rule preview.</p>
   */
  inline const OrganizationScope& GetOrganizationScope() const { return m_organizationScope; }
  inline bool OrganizationScopeHasBeenSet() const { return m_organizationScopeHasBeenSet; }
  template <typename OrganizationScopeT = OrganizationScope>
  void SetOrganizationScope(OrganizationScopeT&& value) {
    m_organizationScopeHasBeenSet = true;
    m_organizationScope = std::forward<OrganizationScopeT>(value);
  }
  template <typename OrganizationScopeT = OrganizationScope>
  ListAutomationRulePreviewSummariesRequest& WithOrganizationScope(OrganizationScopeT&& value) {
    SetOrganizationScope(std::forward<OrganizationScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of recommended actions to include in the preview.</p>
   */
  inline const Aws::Vector<RecommendedActionType>& GetRecommendedActionTypes() const { return m_recommendedActionTypes; }
  inline bool RecommendedActionTypesHasBeenSet() const { return m_recommendedActionTypesHasBeenSet; }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  void SetRecommendedActionTypes(RecommendedActionTypesT&& value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes = std::forward<RecommendedActionTypesT>(value);
  }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  ListAutomationRulePreviewSummariesRequest& WithRecommendedActionTypes(RecommendedActionTypesT&& value) {
    SetRecommendedActionTypes(std::forward<RecommendedActionTypesT>(value));
    return *this;
  }
  inline ListAutomationRulePreviewSummariesRequest& AddRecommendedActionTypes(RecommendedActionType value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Criteria& GetCriteria() const { return m_criteria; }
  inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
  template <typename CriteriaT = Criteria>
  void SetCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria = std::forward<CriteriaT>(value);
  }
  template <typename CriteriaT = Criteria>
  ListAutomationRulePreviewSummariesRequest& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of automation rule preview summaries to return in a single
   * response. Valid range is 1-1000.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAutomationRulePreviewSummariesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination to retrieve the next set of results when the
   * response is truncated.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAutomationRulePreviewSummariesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  RuleType m_ruleType{RuleType::NOT_SET};

  OrganizationScope m_organizationScope;

  Aws::Vector<RecommendedActionType> m_recommendedActionTypes;

  Criteria m_criteria;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_ruleTypeHasBeenSet = false;
  bool m_organizationScopeHasBeenSet = false;
  bool m_recommendedActionTypesHasBeenSet = false;
  bool m_criteriaHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
