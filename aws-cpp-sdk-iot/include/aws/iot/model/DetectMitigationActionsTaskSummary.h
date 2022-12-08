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
    AWS_IOT_API DetectMitigationActionsTaskSummary();
    AWS_IOT_API DetectMitigationActionsTaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionsTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the task. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p> The status of the task. </p>
     */
    inline const DetectMitigationActionsTaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p> The status of the task. </p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p> The status of the task. </p>
     */
    inline void SetTaskStatus(const DetectMitigationActionsTaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p> The status of the task. </p>
     */
    inline void SetTaskStatus(DetectMitigationActionsTaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p> The status of the task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskStatus(const DetectMitigationActionsTaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p> The status of the task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskStatus(DetectMitigationActionsTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p> The date the task started. </p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }

    /**
     * <p> The date the task started. </p>
     */
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }

    /**
     * <p> The date the task started. </p>
     */
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }

    /**
     * <p> The date the task started. </p>
     */
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }

    /**
     * <p> The date the task started. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}

    /**
     * <p> The date the task started. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}


    /**
     * <p> The date the task ended. </p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const{ return m_taskEndTime; }

    /**
     * <p> The date the task ended. </p>
     */
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }

    /**
     * <p> The date the task ended. </p>
     */
    inline void SetTaskEndTime(const Aws::Utils::DateTime& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = value; }

    /**
     * <p> The date the task ended. </p>
     */
    inline void SetTaskEndTime(Aws::Utils::DateTime&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::move(value); }

    /**
     * <p> The date the task ended. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskEndTime(const Aws::Utils::DateTime& value) { SetTaskEndTime(value); return *this;}

    /**
     * <p> The date the task ended. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskEndTime(Aws::Utils::DateTime&& value) { SetTaskEndTime(std::move(value)); return *this;}


    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline const DetectMitigationActionsTaskTarget& GetTarget() const{ return m_target; }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline void SetTarget(const DetectMitigationActionsTaskTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline void SetTarget(DetectMitigationActionsTaskTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTarget(const DetectMitigationActionsTaskTarget& value) { SetTarget(value); return *this;}

    /**
     * <p> Specifies the ML Detect findings to which the mitigation actions are
     * applied. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTarget(DetectMitigationActionsTaskTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline const ViolationEventOccurrenceRange& GetViolationEventOccurrenceRange() const{ return m_violationEventOccurrenceRange; }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline bool ViolationEventOccurrenceRangeHasBeenSet() const { return m_violationEventOccurrenceRangeHasBeenSet; }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline void SetViolationEventOccurrenceRange(const ViolationEventOccurrenceRange& value) { m_violationEventOccurrenceRangeHasBeenSet = true; m_violationEventOccurrenceRange = value; }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline void SetViolationEventOccurrenceRange(ViolationEventOccurrenceRange&& value) { m_violationEventOccurrenceRangeHasBeenSet = true; m_violationEventOccurrenceRange = std::move(value); }

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithViolationEventOccurrenceRange(const ViolationEventOccurrenceRange& value) { SetViolationEventOccurrenceRange(value); return *this;}

    /**
     * <p> Specifies the time period of which violation events occurred between. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithViolationEventOccurrenceRange(ViolationEventOccurrenceRange&& value) { SetViolationEventOccurrenceRange(std::move(value)); return *this;}


    /**
     * <p> Includes only active violations. </p>
     */
    inline bool GetOnlyActiveViolationsIncluded() const{ return m_onlyActiveViolationsIncluded; }

    /**
     * <p> Includes only active violations. </p>
     */
    inline bool OnlyActiveViolationsIncludedHasBeenSet() const { return m_onlyActiveViolationsIncludedHasBeenSet; }

    /**
     * <p> Includes only active violations. </p>
     */
    inline void SetOnlyActiveViolationsIncluded(bool value) { m_onlyActiveViolationsIncludedHasBeenSet = true; m_onlyActiveViolationsIncluded = value; }

    /**
     * <p> Includes only active violations. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithOnlyActiveViolationsIncluded(bool value) { SetOnlyActiveViolationsIncluded(value); return *this;}


    /**
     * <p> Includes suppressed alerts. </p>
     */
    inline bool GetSuppressedAlertsIncluded() const{ return m_suppressedAlertsIncluded; }

    /**
     * <p> Includes suppressed alerts. </p>
     */
    inline bool SuppressedAlertsIncludedHasBeenSet() const { return m_suppressedAlertsIncludedHasBeenSet; }

    /**
     * <p> Includes suppressed alerts. </p>
     */
    inline void SetSuppressedAlertsIncluded(bool value) { m_suppressedAlertsIncludedHasBeenSet = true; m_suppressedAlertsIncluded = value; }

    /**
     * <p> Includes suppressed alerts. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithSuppressedAlertsIncluded(bool value) { SetSuppressedAlertsIncluded(value); return *this;}


    /**
     * <p> The definition of the actions. </p>
     */
    inline const Aws::Vector<MitigationAction>& GetActionsDefinition() const{ return m_actionsDefinition; }

    /**
     * <p> The definition of the actions. </p>
     */
    inline bool ActionsDefinitionHasBeenSet() const { return m_actionsDefinitionHasBeenSet; }

    /**
     * <p> The definition of the actions. </p>
     */
    inline void SetActionsDefinition(const Aws::Vector<MitigationAction>& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition = value; }

    /**
     * <p> The definition of the actions. </p>
     */
    inline void SetActionsDefinition(Aws::Vector<MitigationAction>&& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition = std::move(value); }

    /**
     * <p> The definition of the actions. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithActionsDefinition(const Aws::Vector<MitigationAction>& value) { SetActionsDefinition(value); return *this;}

    /**
     * <p> The definition of the actions. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithActionsDefinition(Aws::Vector<MitigationAction>&& value) { SetActionsDefinition(std::move(value)); return *this;}

    /**
     * <p> The definition of the actions. </p>
     */
    inline DetectMitigationActionsTaskSummary& AddActionsDefinition(const MitigationAction& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition.push_back(value); return *this; }

    /**
     * <p> The definition of the actions. </p>
     */
    inline DetectMitigationActionsTaskSummary& AddActionsDefinition(MitigationAction&& value) { m_actionsDefinitionHasBeenSet = true; m_actionsDefinition.push_back(std::move(value)); return *this; }


    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline const DetectMitigationActionsTaskStatistics& GetTaskStatistics() const{ return m_taskStatistics; }

    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline bool TaskStatisticsHasBeenSet() const { return m_taskStatisticsHasBeenSet; }

    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline void SetTaskStatistics(const DetectMitigationActionsTaskStatistics& value) { m_taskStatisticsHasBeenSet = true; m_taskStatistics = value; }

    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline void SetTaskStatistics(DetectMitigationActionsTaskStatistics&& value) { m_taskStatisticsHasBeenSet = true; m_taskStatistics = std::move(value); }

    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskStatistics(const DetectMitigationActionsTaskStatistics& value) { SetTaskStatistics(value); return *this;}

    /**
     * <p> The statistics of a mitigation action task. </p>
     */
    inline DetectMitigationActionsTaskSummary& WithTaskStatistics(DetectMitigationActionsTaskStatistics&& value) { SetTaskStatistics(std::move(value)); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    DetectMitigationActionsTaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime;
    bool m_taskStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_taskEndTime;
    bool m_taskEndTimeHasBeenSet = false;

    DetectMitigationActionsTaskTarget m_target;
    bool m_targetHasBeenSet = false;

    ViolationEventOccurrenceRange m_violationEventOccurrenceRange;
    bool m_violationEventOccurrenceRangeHasBeenSet = false;

    bool m_onlyActiveViolationsIncluded;
    bool m_onlyActiveViolationsIncludedHasBeenSet = false;

    bool m_suppressedAlertsIncluded;
    bool m_suppressedAlertsIncludedHasBeenSet = false;

    Aws::Vector<MitigationAction> m_actionsDefinition;
    bool m_actionsDefinitionHasBeenSet = false;

    DetectMitigationActionsTaskStatistics m_taskStatistics;
    bool m_taskStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
