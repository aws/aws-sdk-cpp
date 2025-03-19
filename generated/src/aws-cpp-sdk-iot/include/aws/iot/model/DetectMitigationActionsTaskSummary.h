/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DetectMitigationActionsTaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/DetectMitigationActionsTaskTarget.h>
#include <aws/iot/model/ViolationEventOccurrenceRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/DetectMitigationActionsTaskStatistics.h>
#include <aws/iot/model/MitigationAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p> The summary of the mitigation action tasks. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetectMitigationActionsTaskSummary">AWS
   * API Reference</a></p>
   */
  class DetectMitigationActionsTaskSummary
  {
  public:
    AWS_IOT_API DetectMitigationActionsTaskSummary() = default;
    AWS_IOT_API DetectMitigationActionsTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionsTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    DetectMitigationActionsTaskSummary& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the task. </p>
     */
    inline DetectMitigationActionsTaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(DetectMitigationActionsTaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline DetectMitigationActionsTaskSummary& WithTaskStatus(DetectMitigationActionsTaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date the task started. </p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const { return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    void SetTaskStartTime(TaskStartTimeT&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::forward<TaskStartTimeT>(value); }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    DetectMitigationActionsTaskSummary& WithTaskStartTime(TaskStartTimeT&& value) { SetTaskStartTime(std::forward<TaskStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date the task ended. </p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const { return m_taskEndTime; }
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }
    template<typename TaskEndTimeT = Aws::Utils::DateTime>
    void SetTaskEndTime(TaskEndTimeT&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::forward<TaskEndTimeT>(value); }
    template<typename TaskEndTimeT = Aws::Utils::DateTime>
    DetectMitigationActionsTaskSummary& WithTaskEndTime(TaskEndTimeT&& value) { SetTaskEndTime(std::forward<TaskEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline const DetectMitigationActionsTaskTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = DetectMitigationActionsTaskTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = DetectMitigationActionsTaskTarget>
    DetectMitigationActionsTaskSummary& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline const ViolationEventOccurrenceRange& GetViolationEventOccurrenceRange() const { return m_violationEventOccurrenceRange; }
    inline bool ViolationEventOccurrenceRangeHasBeenSet() const { return m_violationEventOccurrenceRangeHasBeenSet; }
    template<typename ViolationEventOccurrenceRangeT = ViolationEventOccurrenceRange>
    void SetViolationEventOccurrenceRange(ViolationEventOccurrenceRangeT&& value) { m_violationEventOccurrenceRangeHasBeenSet = true; m_violationEventOccurrenceRange = std::forward<ViolationEventOccurrenceRangeT>(value); }
    template<typename ViolationEventOccurrenceRangeT = ViolationEventOccurrenceRange>
    DetectMitigationActionsTaskSummary& WithViolationEventOccurrenceRange(ViolationEventOccurrenceRangeT&& value) { SetViolationEventOccurrenceRange(std::forward<ViolationEventOccurrenceRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Includes only active violations. </p>
     */
    inline bool GetOnlyActiveViolationsIncluded() const { return m_onlyActiveViolationsIncluded; }
    inline bool OnlyActiveViolationsIncludedHasBeenSet() const { return m_onlyActiveViolationsIncludedHasBeenSet; }
    inline void SetOnlyActiveViolationsIncluded(bool value) { m_onlyActiveViolationsIncludedHasBeenSet = true; m_onlyActiveViolationsIncluded = value; }
    inline DetectMitigationActionsTaskSummary& WithOnlyActiveViolationsIncluded(bool value) { SetOnlyActiveViolationsIncluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Includes suppressed alerts. </p>
     */
    inline bool GetSuppressedAlertsIncluded() const { return m_suppressedAlertsIncluded; }
    inline bool SuppressedAlertsIncludedHasBeenSet() const { return m_suppressedAlertsIncludedHasBeenSet; }
    inline void SetSuppressedAlertsIncluded(bool value) { m_suppressedAlertsIncludedHasBeenSet = true; m_suppressedAlertsIncluded = value; }
    inline DetectMitigationActionsTaskSummary& WithSuppressedAlertsIncluded(bool value) { SetSuppressedAlertsIncluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The definition of the actions. </p>
     */
    inline const Aws::Vector<MitigationAction>& GetActionsDefinition() const { return m_actionsDefinition; }
    inline bool ActionsDefinitionHasBeenSet() const { return m_actionsDefinitionHasBeenSet; }
    template<typename ActionsDefinitionT = Aws::Vector<MitigationAction>>
    void SetActionsDefinition(ActionsDefinitionT&& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition = std::forward<ActionsDefinitionT>(value); }
    template<typename ActionsDefinitionT = Aws::Vector<MitigationAction>>
    DetectMitigationActionsTaskSummary& WithActionsDefinition(ActionsDefinitionT&& value) { SetActionsDefinition(std::forward<ActionsDefinitionT>(value)); return *this;}
    template<typename ActionsDefinitionT = MitigationAction>
    DetectMitigationActionsTaskSummary& AddActionsDefinition(ActionsDefinitionT&& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition.emplace_back(std::forward<ActionsDefinitionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline const DetectMitigationActionsTaskStatistics& GetTaskStatistics() const { return m_taskStatistics; }
    inline bool TaskStatisticsHasBeenSet() const { return m_taskStatisticsHasBeenSet; }
    template<typename TaskStatisticsT = DetectMitigationActionsTaskStatistics>
    void SetTaskStatistics(TaskStatisticsT&& value) { m_taskStatisticsHasBeenSet = true; m_taskStatistics = std::forward<TaskStatisticsT>(value); }
    template<typename TaskStatisticsT = DetectMitigationActionsTaskStatistics>
    DetectMitigationActionsTaskSummary& WithTaskStatistics(TaskStatisticsT&& value) { SetTaskStatistics(std::forward<TaskStatisticsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    DetectMitigationActionsTaskStatus m_taskStatus{DetectMitigationActionsTaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime{};
    bool m_taskStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_taskEndTime{};
    bool m_taskEndTimeHasBeenSet = false;

    DetectMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet = false;

    ViolationEventOccurrenceRange m_violationEventOccurrenceRange;
    bool m_violationEventOccurrenceRangeHasBeenSet = false;

    bool m_onlyActiveViolationsIncluded{false};
    bool m_onlyActiveViolationsIncludedHasBeenSet = false;

    bool m_suppressedAlertsIncluded{false};
    bool m_suppressedAlertsIncludedHasBeenSet = false;

    Aws::Vector<MitigationAction> m_actionsDefinition;
    bool m_actionsDefinitionHasBeenSet = false;

    DetectMitigationActionsTaskStatistics m_taskStatistics;
    bool m_taskStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
