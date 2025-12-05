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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {
class GetAutomationEventResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API GetAutomationEventResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API GetAutomationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API GetAutomationEventResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the automation event to retrieve.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  GetAutomationEventResult& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the automation event.</p>
   */
  inline const Aws::String& GetEventDescription() const { return m_eventDescription; }
  template <typename EventDescriptionT = Aws::String>
  void SetEventDescription(EventDescriptionT&& value) {
    m_eventDescriptionHasBeenSet = true;
    m_eventDescription = std::forward<EventDescriptionT>(value);
  }
  template <typename EventDescriptionT = Aws::String>
  GetAutomationEventResult& WithEventDescription(EventDescriptionT&& value) {
    SetEventDescription(std::forward<EventDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of automation event.</p>
   */
  inline EventType GetEventType() const { return m_eventType; }
  inline void SetEventType(EventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline GetAutomationEventResult& WithEventType(EventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the automation event.</p>
   */
  inline EventStatus GetEventStatus() const { return m_eventStatus; }
  inline void SetEventStatus(EventStatus value) {
    m_eventStatusHasBeenSet = true;
    m_eventStatus = value;
  }
  inline GetAutomationEventResult& WithEventStatus(EventStatus value) {
    SetEventStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current event status.</p>
   */
  inline const Aws::String& GetEventStatusReason() const { return m_eventStatusReason; }
  template <typename EventStatusReasonT = Aws::String>
  void SetEventStatusReason(EventStatusReasonT&& value) {
    m_eventStatusReasonHasBeenSet = true;
    m_eventStatusReason = std::forward<EventStatusReasonT>(value);
  }
  template <typename EventStatusReasonT = Aws::String>
  GetAutomationEventResult& WithEventStatusReason(EventStatusReasonT&& value) {
    SetEventStatusReason(std::forward<EventStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource affected by the automation
   * event.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  GetAutomationEventResult& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource affected by the automation event.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  GetAutomationEventResult& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the recommended action associated with this automation event.</p>
   */
  inline const Aws::String& GetRecommendedActionId() const { return m_recommendedActionId; }
  template <typename RecommendedActionIdT = Aws::String>
  void SetRecommendedActionId(RecommendedActionIdT&& value) {
    m_recommendedActionIdHasBeenSet = true;
    m_recommendedActionId = std::forward<RecommendedActionIdT>(value);
  }
  template <typename RecommendedActionIdT = Aws::String>
  GetAutomationEventResult& WithRecommendedActionId(RecommendedActionIdT&& value) {
    SetRecommendedActionId(std::forward<RecommendedActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the automation event.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  GetAutomationEventResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the automation event occurred.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  GetAutomationEventResult& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation rule that triggered this event.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  GetAutomationEventResult& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource affected by the automation event.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline GetAutomationEventResult& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation event was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  GetAutomationEventResult& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the automation event completed.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
  template <typename CompletedTimestampT = Aws::Utils::DateTime>
  void SetCompletedTimestamp(CompletedTimestampT&& value) {
    m_completedTimestampHasBeenSet = true;
    m_completedTimestamp = std::forward<CompletedTimestampT>(value);
  }
  template <typename CompletedTimestampT = Aws::Utils::DateTime>
  GetAutomationEventResult& WithCompletedTimestamp(CompletedTimestampT&& value) {
    SetCompletedTimestamp(std::forward<CompletedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value);
  }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  GetAutomationEventResult& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
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
  GetAutomationEventResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::String m_eventDescription;

  EventType m_eventType{EventType::NOT_SET};

  EventStatus m_eventStatus{EventStatus::NOT_SET};

  Aws::String m_eventStatusReason;

  Aws::String m_resourceArn;

  Aws::String m_resourceId;

  Aws::String m_recommendedActionId;

  Aws::String m_accountId;

  Aws::String m_region;

  Aws::String m_ruleId;

  ResourceType m_resourceType{ResourceType::NOT_SET};

  Aws::Utils::DateTime m_createdTimestamp{};

  Aws::Utils::DateTime m_completedTimestamp{};

  EstimatedMonthlySavings m_estimatedMonthlySavings;

  Aws::String m_requestId;
  bool m_eventIdHasBeenSet = false;
  bool m_eventDescriptionHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_eventStatusHasBeenSet = false;
  bool m_eventStatusReasonHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_recommendedActionIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_ruleIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_createdTimestampHasBeenSet = false;
  bool m_completedTimestampHasBeenSet = false;
  bool m_estimatedMonthlySavingsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
