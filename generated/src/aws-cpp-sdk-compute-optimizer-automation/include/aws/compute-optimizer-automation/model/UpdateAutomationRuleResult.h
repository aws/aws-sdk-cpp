/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/Criteria.h>
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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {
class UpdateAutomationRuleResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API UpdateAutomationRuleResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API UpdateAutomationRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API UpdateAutomationRuleResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The ARN of the updated rule. </p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  UpdateAutomationRuleResult& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The new revision number of the updated rule. </p>
   */
  inline long long GetRuleRevision() const { return m_ruleRevision; }
  inline void SetRuleRevision(long long value) {
    m_ruleRevisionHasBeenSet = true;
    m_ruleRevision = value;
  }
  inline UpdateAutomationRuleResult& WithRuleRevision(long long value) {
    SetRuleRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the automation rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAutomationRuleResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the automation rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAutomationRuleResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated type of automation rule.</p>
   */
  inline RuleType GetRuleType() const { return m_ruleType; }
  inline void SetRuleType(RuleType value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = value;
  }
  inline UpdateAutomationRuleResult& WithRuleType(RuleType value) {
    SetRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated organization configuration settings.</p>
   */
  inline const OrganizationConfiguration& GetOrganizationConfiguration() const { return m_organizationConfiguration; }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  void SetOrganizationConfiguration(OrganizationConfigurationT&& value) {
    m_organizationConfigurationHasBeenSet = true;
    m_organizationConfiguration = std::forward<OrganizationConfigurationT>(value);
  }
  template <typename OrganizationConfigurationT = OrganizationConfiguration>
  UpdateAutomationRuleResult& WithOrganizationConfiguration(OrganizationConfigurationT&& value) {
    SetOrganizationConfiguration(std::forward<OrganizationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated priority level of the automation rule.</p>
   */
  inline const Aws::String& GetPriority() const { return m_priority; }
  template <typename PriorityT = Aws::String>
  void SetPriority(PriorityT&& value) {
    m_priorityHasBeenSet = true;
    m_priority = std::forward<PriorityT>(value);
  }
  template <typename PriorityT = Aws::String>
  UpdateAutomationRuleResult& WithPriority(PriorityT&& value) {
    SetPriority(std::forward<PriorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of recommended action types.</p>
   */
  inline const Aws::Vector<RecommendedActionType>& GetRecommendedActionTypes() const { return m_recommendedActionTypes; }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  void SetRecommendedActionTypes(RecommendedActionTypesT&& value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes = std::forward<RecommendedActionTypesT>(value);
  }
  template <typename RecommendedActionTypesT = Aws::Vector<RecommendedActionType>>
  UpdateAutomationRuleResult& WithRecommendedActionTypes(RecommendedActionTypesT&& value) {
    SetRecommendedActionTypes(std::forward<RecommendedActionTypesT>(value));
    return *this;
  }
  inline UpdateAutomationRuleResult& AddRecommendedActionTypes(RecommendedActionType value) {
    m_recommendedActionTypesHasBeenSet = true;
    m_recommendedActionTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Criteria& GetCriteria() const { return m_criteria; }
  template <typename CriteriaT = Criteria>
  void SetCriteria(CriteriaT&& value) {
    m_criteriaHasBeenSet = true;
    m_criteria = std::forward<CriteriaT>(value);
  }
  template <typename CriteriaT = Criteria>
  UpdateAutomationRuleResult& WithCriteria(CriteriaT&& value) {
    SetCriteria(std::forward<CriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated schedule configuration.</p>
   */
  inline const Schedule& GetSchedule() const { return m_schedule; }
  template <typename ScheduleT = Schedule>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = Schedule>
  UpdateAutomationRuleResult& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status of the automation rule.</p>
   */
  inline RuleStatus GetStatus() const { return m_status; }
  inline void SetStatus(RuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAutomationRuleResult& WithStatus(RuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation rule was originally created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  UpdateAutomationRuleResult& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    m_lastUpdatedTimestampHasBeenSet = true;
    m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value);
  }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  UpdateAutomationRuleResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value));
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
  UpdateAutomationRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  Aws::Utils::DateTime m_createdTimestamp{};
  bool m_createdTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTimestamp{};
  bool m_lastUpdatedTimestampHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
