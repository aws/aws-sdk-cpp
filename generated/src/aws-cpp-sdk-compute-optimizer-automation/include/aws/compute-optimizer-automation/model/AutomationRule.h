/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationConfiguration.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionType.h>
#include <aws/compute-optimizer-automation/model/RuleStatus.h>
#include <aws/compute-optimizer-automation/model/RuleType.h>
#include <aws/compute-optimizer-automation/model/Schedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Represents a complete automation rule configuration including criteria,
 * schedule, and execution settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/AutomationRule">AWS
 * API Reference</a></p>
 */
class AutomationRule {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationRule() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the automation rule.</p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  AutomationRule& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the automation rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  AutomationRule& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the automation rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AutomationRule& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the automation rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AutomationRule& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of automation rule (OrganizationRule or AccountRule).</p>
   */
  inline RuleType GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline AutomationRule& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number of the automation rule.</p>
   */
  inline long long GetRuleRevision() const { return m_ruleRevision; }
  inline bool RuleRevisionHasBeenSet() const { return m_ruleRevisionHasBeenSet; }
  inline void SetRuleRevision(long long value) {
    m_ruleRevisionHasBeenSet = true;
    m_ruleRevision = value;
  }
  inline AutomationRule& WithRuleRevision(long long value) {
    SetRuleRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account ID that owns this automation
   * rule.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AutomationRule& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for organization-wide rules.</p>
   */
  inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
  inline bool OrganizationConfigurationHasBeenSet() const { return m_organizationConfigurationHasBeenSet; }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  void SetOrganizationConfiguration(OrganizationConfigurationT&& value) {
    m_organizationConfigurationHasBeenSet = true;
    m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value);
  }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  AutomationRule& WithOrganizationConfiguration(OrganizationConfigurationT&& value) {
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
   * that rule is scheduled to run later than other matching rules.</p>
   */
  inline const Aws::String& GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  template <typename PriorityT = Aws::String>
  void SetPriority(PriorityT&& value) {
    m_priorityHasBeenSet = true;
    m_priority = std::forward<PriorityT>(value);
  }
  template <typename PriorityT = Aws::String>
  AutomationRule& WithPriority(PriorityT&& value) {
    SetPriority(std::forward<PriorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of recommended action types that this rule can execute.</p>
   */
  inline const Aws::Vector<RecommendedActionType>& GetRecommendedActionTypes() const { return m_recommendedActionTypes; }
  inline bool RecommendedActionTypesHasBeenSet() const { return m_recommendedActionTypesHasBeenSet; }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  void SetRecommendedActionTypes(RecommendedActionTypesT&& value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes = std::forward<RecommendedActionTypesT>(value);
  }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  AutomationRule& WithRecommendedActionTypes(RecommendedActionTypesT&& value) {
    SetRecommendedActionTypes(std::forward<RecommendedActionTypesT>(value));
    return *this;
  }
  inline AutomationRule& AddRecommendedActionTypes(RecommendedActionType value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration for when the automation rule should execute.</p>
   */
  inline const Schedule& GetSchedule() const { return m_schedule; }
  inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
  template <typename ScheduleT = Schedule>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = Schedule>
  AutomationRule& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the automation rule (Active or Inactive).</p>
   */
  inline RuleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AutomationRule& WithStatus(RuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation rule was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  AutomationRule& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
  inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    m_lastUpdatedTimestampHasBeenSet = true;
    m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value);
  }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  AutomationRule& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleArn;
  bool m_ruleArnHasBeenSet = false;

  Aws::String m_ruleId;
  bool m_ruleIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  RuleType m_ruleType{RuleType::NOT_SET};
  bool m_ruleTypeHasBeenSet = false;

  long long m_ruleRevision{0};
  bool m_ruleRevisionHasBeenSet = false;

  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  OrganizationConfiguration m_organizationConfiguration;
  bool m_organizationConfigurationHasBeenSet = false;

  Aws::String m_priority;
  bool m_priorityHasBeenSet = false;

  Aws::Vector<RecommendedActionType> m_recommendedActionTypes;
  bool m_recommendedActionTypesHasBeenSet = false;

  Schedule m_schedule;
  bool m_scheduleHasBeenSet = false;

  RuleStatus m_status{RuleStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdTimestamp{};
  bool m_createdTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTimestamp{};
  bool m_lastUpdatedTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
