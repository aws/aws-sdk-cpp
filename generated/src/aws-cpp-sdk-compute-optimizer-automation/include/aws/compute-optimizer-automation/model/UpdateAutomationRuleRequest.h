/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/Criteria.h>
#include <aws/compute-optimizer-automation/model/OrganizationConfiguration.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionType.h>
#include <aws/compute-optimizer-automation/model/RuleStatus.h>
#include <aws/compute-optimizer-automation/model/RuleType.h>
#include <aws/compute-optimizer-automation/model/Schedule.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class UpdateAutomationRuleRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API UpdateAutomationRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomationRule"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The ARN of the rule to update. </p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  UpdateAutomationRuleRequest& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The revision number of the rule to update. </p>
   */
  inline long long GetRuleRevision() const { return m_ruleRevision; }
  inline bool RuleRevisionHasBeenSet() const { return m_ruleRevisionHasBeenSet; }
  inline void SetRuleRevision(long long value) {
    m_ruleRevisionHasBeenSet = true;
    m_ruleRevision = value;
  }
  inline UpdateAutomationRuleRequest& WithRuleRevision(long long value) {
    SetRuleRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the automation rule. Must be 1-128 characters long and
   * contain only alphanumeric characters, underscores, and hyphens.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAutomationRuleRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the automation rule. Can be up to 1024 characters
   * long and contain alphanumeric characters, underscores, hyphens, spaces, and
   * certain special characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAutomationRuleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated type of automation rule. Can be either OrganizationRule for
   * organization-wide rules or AccountRule for account-specific rules.</p>
   */
  inline RuleType GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline UpdateAutomationRuleRequest& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated configuration settings for organization-wide rules, including rule
   * application order and target account IDs.</p>
   */
  inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
  inline bool OrganizationConfigurationHasBeenSet() const { return m_organizationConfigurationHasBeenSet; }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  void SetOrganizationConfiguration(OrganizationConfigurationT&& value) {
    m_organizationConfigurationHasBeenSet = true;
    m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value);
  }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  UpdateAutomationRuleRequest& WithOrganizationConfiguration(OrganizationConfigurationT&& value) {
    SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated priority level of the automation rule, used to determine
   * execution order when multiple rules apply to the same resource.</p>
   */
  inline const Aws::String& GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  template <typename PriorityT = Aws::String>
  void SetPriority(PriorityT&& value) {
    m_priorityHasBeenSet = true;
    m_priority = std::forward<PriorityT>(value);
  }
  template <typename PriorityT = Aws::String>
  UpdateAutomationRuleRequest& WithPriority(PriorityT&& value) {
    SetPriority(std::forward<PriorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated list of recommended action types that this rule can execute, such as
   * SnapshotAndDeleteUnattachedEbsVolume or UpgradeEbsVolumeType.</p>
   */
  inline const Aws::Vector<RecommendedActionType>& GetRecommendedActionTypes() const { return m_recommendedActionTypes; }
  inline bool RecommendedActionTypesHasBeenSet() const { return m_recommendedActionTypesHasBeenSet; }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  void SetRecommendedActionTypes(RecommendedActionTypesT&& value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes = std::forward<RecommendedActionTypesT>(value);
  }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  UpdateAutomationRuleRequest& WithRecommendedActionTypes(RecommendedActionTypesT&& value) {
    SetRecommendedActionTypes(std::forward<RecommendedActionTypesT>(value));
    return *this;
  }
  inline UpdateAutomationRuleRequest& AddRecommendedActionTypes(RecommendedActionType value) {
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
  UpdateAutomationRuleRequest& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated schedule configuration for when the automation rule should
   * execute, including cron expression, timezone, and execution window.</p>
   */
  inline const Schedule& GetSchedule() const { return m_schedule; }
  inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
  template <typename ScheduleT = Schedule>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = Schedule>
  UpdateAutomationRuleRequest& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status of the automation rule. Can be Active or Inactive.</p>
   */
  inline RuleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAutomationRuleRequest& WithStatus(RuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Must be 1-64 characters long and contain only
   * alphanumeric characters, underscores, and hyphens.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateAutomationRuleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleArn;
  bool m_ruleArnHasBeenSet = false;

  long long m_ruleRevision{0};
  bool m_ruleRevisionHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  RuleType m_ruleType{RuleType::NOT_SET};
  bool m_ruleTypeHasBeenSet = false;

  OrganizationConfiguration m_organizationConfiguration;
  bool m_organizationConfigurationHasBeenSet = false;

  Aws::String m_priority;
  bool m_priorityHasBeenSet = false;

  Aws::Vector<RecommendedActionType> m_recommendedActionTypes;
  bool m_recommendedActionTypesHasBeenSet = false;

  Criteria m_criteria;
  bool m_criteriaHasBeenSet = false;

  Schedule m_schedule;
  bool m_scheduleHasBeenSet = false;

  RuleStatus m_status{RuleStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
