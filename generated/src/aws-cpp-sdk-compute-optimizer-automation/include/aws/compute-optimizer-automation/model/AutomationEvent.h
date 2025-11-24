/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>
#include <aws/compute-optimizer-automation/model/EventStatus.h>
#include <aws/compute-optimizer-automation/model/EventType.h>
#include <aws/compute-optimizer-automation/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p> Contains information about an automation event. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/AutomationEvent">AWS
 * API Reference</a></p>
 */
class AutomationEvent {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEvent() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The unique identifier for the automation event. </p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  AutomationEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A description of the automation event. </p>
   */
  inline const Aws::String& GetEventDescription() const { return m_eventDescription; }
  inline bool EventDescriptionHasBeenSet() const { return m_eventDescriptionHasBeenSet; }
  template <typename EventDescriptionT = Aws::String>
  void SetEventDescription(EventDescriptionT&& value) {
    m_eventDescriptionHasBeenSet = true;
    m_eventDescription = std::forward<EventDescriptionT>(value);
  }
  template <typename EventDescriptionT = Aws::String>
  AutomationEvent& WithEventDescription(EventDescriptionT&& value) {
    SetEventDescription(std::forward<EventDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of automation event. </p>
   */
  inline EventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(EventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline AutomationEvent& WithEventType(EventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the automation event. </p>
   */
  inline EventStatus GetEventStatus() const { return m_eventStatus; }
  inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
  inline void SetEventStatus(EventStatus value) {
    m_eventStatusHasBeenSet = true;
    m_eventStatus = value;
  }
  inline AutomationEvent& WithEventStatus(EventStatus value) {
    SetEventStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The reason for the current event status. </p>
   */
  inline const Aws::String& GetEventStatusReason() const { return m_eventStatusReason; }
  inline bool EventStatusReasonHasBeenSet() const { return m_eventStatusReasonHasBeenSet; }
  template <typename EventStatusReasonT = Aws::String>
  void SetEventStatusReason(EventStatusReasonT&& value) {
    m_eventStatusReasonHasBeenSet = true;
    m_eventStatusReason = std::forward<EventStatusReasonT>(value);
  }
  template <typename EventStatusReasonT = Aws::String>
  AutomationEvent& WithEventStatusReason(EventStatusReasonT&& value) {
    SetEventStatusReason(std::forward<EventStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the resource affected by the automation
   * event. </p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  AutomationEvent& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the resource affected by the automation event. </p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  AutomationEvent& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the recommended action associated with this automation event. </p>
   */
  inline const Aws::String& GetRecommendedActionId() const { return m_recommendedActionId; }
  inline bool RecommendedActionIdHasBeenSet() const { return m_recommendedActionIdHasBeenSet; }
  template <typename RecommendedActionIdT = Aws::String>
  void SetRecommendedActionId(RecommendedActionIdT&& value) {
    m_recommendedActionIdHasBeenSet = true;
    m_recommendedActionId = std::forward<RecommendedActionIdT>(value);
  }
  template <typename RecommendedActionIdT = Aws::String>
  AutomationEvent& WithRecommendedActionId(RecommendedActionIdT&& value) {
    SetRecommendedActionId(std::forward<RecommendedActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Web Services account ID associated with the automation event.
   * </p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AutomationEvent& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Web Services Region where the automation event occurred. </p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AutomationEvent& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the automation rule that triggered this event. </p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  AutomationEvent& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of resource affected by the automation event. </p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline AutomationEvent& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation event was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  AutomationEvent& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the automation event completed. </p>
   */
  inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
  inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
  template <typename CompletedTimestampT = Aws::Utils::DateTime>
  void SetCompletedTimestamp(CompletedTimestampT&& value) {
    m_completedTimestampHasBeenSet = true;
    m_completedTimestamp = std::forward<CompletedTimestampT>(value);
  }
  template <typename CompletedTimestampT = Aws::Utils::DateTime>
  AutomationEvent& WithCompletedTimestamp(CompletedTimestampT&& value) {
    SetCompletedTimestamp(std::forward<CompletedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The estimated monthly cost savings associated with this automation event.
   * </p>
   */
  inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
  inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value);
  }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  AutomationEvent& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;
  bool m_eventIdHasBeenSet = false;

  Aws::String m_eventDescription;
  bool m_eventDescriptionHasBeenSet = false;

  EventType m_eventType{EventType::NOT_SET};
  bool m_eventTypeHasBeenSet = false;

  EventStatus m_eventStatus{EventStatus::NOT_SET};
  bool m_eventStatusHasBeenSet = false;

  Aws::String m_eventStatusReason;
  bool m_eventStatusReasonHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;

  Aws::String m_resourceId;
  bool m_resourceIdHasBeenSet = false;

  Aws::String m_recommendedActionId;
  bool m_recommendedActionIdHasBeenSet = false;

  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  Aws::String m_region;
  bool m_regionHasBeenSet = false;

  Aws::String m_ruleId;
  bool m_ruleIdHasBeenSet = false;

  ResourceType m_resourceType{ResourceType::NOT_SET};
  bool m_resourceTypeHasBeenSet = false;

  Aws::Utils::DateTime m_createdTimestamp{};
  bool m_createdTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_completedTimestamp{};
  bool m_completedTimestampHasBeenSet = false;

  EstimatedMonthlySavings m_estimatedMonthlySavings;
  bool m_estimatedMonthlySavingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
