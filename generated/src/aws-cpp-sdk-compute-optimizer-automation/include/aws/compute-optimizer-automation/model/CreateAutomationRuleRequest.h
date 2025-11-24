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
#include <aws/compute-optimizer-automation/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class CreateAutomationRuleRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API CreateAutomationRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAutomationRule"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The name of the automation rule. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAutomationRuleRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A description of the automation rule. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateAutomationRuleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of rule. </p>  <p>Only the management account or a delegated
   * administrator can set the ruleType to be OrganizationRule.</p>
   */
  inline RuleType GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline CreateAutomationRuleRequest& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Configuration for organization-level rules. Required for OrganizationRule
   * type. </p>
   */
  inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
  inline bool OrganizationConfigurationHasBeenSet() const { return m_organizationConfigurationHasBeenSet; }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  void SetOrganizationConfiguration(OrganizationConfigurationT&& value) {
    m_organizationConfigurationHasBeenSet = true;
    m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value);
  }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  CreateAutomationRuleRequest& WithOrganizationConfiguration(OrganizationConfigurationT&& value) {
    SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string representation of a decimal number between 0 and 1 (having up to 30
   * digits after the decimal point) that determines the priority of the rule. When
   * multiple rules match the same recommended action, Compute Optimizer assigns the
   * action to the rule with the lowest priority value (highest priority), even if
   * that rule is scheduled to run later than other matching rules. </p>
   */
  inline const Aws::String& GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  template <typename PriorityT = Aws::String>
  void SetPriority(PriorityT&& value) {
    m_priorityHasBeenSet = true;
    m_priority = std::forward<PriorityT>(value);
  }
  template <typename PriorityT = Aws::String>
  CreateAutomationRuleRequest& WithPriority(PriorityT&& value) {
    SetPriority(std::forward<PriorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The types of recommended actions this rule will automate. </p>
   */
  inline const Aws::Vector<RecommendedActionType>& GetRecommendedActionTypes() const { return m_recommendedActionTypes; }
  inline bool RecommendedActionTypesHasBeenSet() const { return m_recommendedActionTypesHasBeenSet; }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  void SetRecommendedActionTypes(RecommendedActionTypesT&& value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes = std::forward<RecommendedActionTypesT>(value);
  }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  CreateAutomationRuleRequest& WithRecommendedActionTypes(RecommendedActionTypesT&& value) {
    SetRecommendedActionTypes(std::forward<RecommendedActionTypesT>(value));
    return *this;
  }
  inline CreateAutomationRuleRequest& AddRecommendedActionTypes(RecommendedActionType value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of conditions that specify which recommended action qualify for
   * implementation. When a rule is active and a recommended action matches these
   * criteria, Compute Optimizer implements the action at the scheduled run time.
   * </p>
   */
  inline const Criteria& GetCriteria() const { return m_criteria; }
  inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
  template <typename CriteriaT = Criteria>
  void SetCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria = std::forward<CriteriaT>(value);
  }
  template <typename CriteriaT = Criteria>
  CreateAutomationRuleRequest& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The schedule for when the rule should run. </p>
   */
  inline const Schedule& GetSchedule() const { return m_schedule; }
  inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
  template <typename ScheduleT = Schedule>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = Schedule>
  CreateAutomationRuleRequest& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the rule </p>
   */
  inline RuleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateAutomationRuleRequest& WithStatus(RuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tags to associate with the rule. </p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAutomationRuleRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAutomationRuleRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A unique identifier to ensure idempotency of the request. </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAutomationRuleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
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

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
