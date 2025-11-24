/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>
#include <aws/compute-optimizer-automation/model/StepStatus.h>
#include <aws/compute-optimizer-automation/model/StepType.h>
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
 * <p> Contains information about a step in an automation event. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/AutomationEventStep">AWS
 * API Reference</a></p>
 */
class AutomationEventStep {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventStep() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The ID of the automation event this step belongs to. </p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  AutomationEventStep& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier for this step. </p>
   */
  inline const Aws::String& GetStepId() const { return m_stepId; }
  inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
  template <typename StepIdT = Aws::String>
  void SetStepId(StepIdT&& value) {
    m_stepIdHasBeenSet = true;
    m_stepId = std::forward<StepIdT>(value);
  }
  template <typename StepIdT = Aws::String>
  AutomationEventStep& WithStepId(StepIdT&& value) {
    SetStepId(std::forward<StepIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of step. </p>
   */
  inline StepType GetStepType() const { return m_stepType; }
  inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }
  inline void SetStepType(StepType value) {
    m_stepTypeHasBeenSet = true;
    m_stepType = value;
  }
  inline AutomationEventStep& WithStepType(StepType value) {
    SetStepType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the step. </p>
   */
  inline StepStatus GetStepStatus() const { return m_stepStatus; }
  inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }
  inline void SetStepStatus(StepStatus value) {
    m_stepStatusHasBeenSet = true;
    m_stepStatus = value;
  }
  inline AutomationEventStep& WithStepStatus(StepStatus value) {
    SetStepStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the resource being acted upon in this step.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  AutomationEventStep& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this automation event step started execution.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  AutomationEventStep& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this automation event step completed execution.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedTimestamp() const { return m_completedTimestamp; }
  inline bool CompletedTimestampHasBeenSet() const { return m_completedTimestampHasBeenSet; }
  template <typename CompletedTimestampT = Aws::Utils::DateTime>
  void SetCompletedTimestamp(CompletedTimestampT&& value) {
    m_completedTimestampHasBeenSet = true;
    m_completedTimestamp = std::forward<CompletedTimestampT>(value);
  }
  template <typename CompletedTimestampT = Aws::Utils::DateTime>
  AutomationEventStep& WithCompletedTimestamp(CompletedTimestampT&& value) {
    SetCompletedTimestamp(std::forward<CompletedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
  inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value);
  }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  AutomationEventStep& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;
  bool m_eventIdHasBeenSet = false;

  Aws::String m_stepId;
  bool m_stepIdHasBeenSet = false;

  StepType m_stepType{StepType::NOT_SET};
  bool m_stepTypeHasBeenSet = false;

  StepStatus m_stepStatus{StepStatus::NOT_SET};
  bool m_stepStatusHasBeenSet = false;

  Aws::String m_resourceId;
  bool m_resourceIdHasBeenSet = false;

  Aws::Utils::DateTime m_startTimestamp{};
  bool m_startTimestampHasBeenSet = false;

  Aws::Utils::DateTime m_completedTimestamp{};
  bool m_completedTimestampHasBeenSet = false;

  EstimatedMonthlySavings m_estimatedMonthlySavings;
  bool m_estimatedMonthlySavingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
