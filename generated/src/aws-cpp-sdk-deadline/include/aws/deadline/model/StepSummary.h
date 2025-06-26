/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepLifecycleStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/StepTargetTaskRunStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/DependencyCounts.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details for a step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepSummary">AWS
   * API Reference</a></p>
   */
  class StepSummary
  {
  public:
    AWS_DEADLINE_API StepSummary() = default;
    AWS_DEADLINE_API StepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const { return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    template<typename StepIdT = Aws::String>
    void SetStepId(StepIdT&& value) { m_stepIdHasBeenSet = true; m_stepId = std::forward<StepIdT>(value); }
    template<typename StepIdT = Aws::String>
    StepSummary& WithStepId(StepIdT&& value) { SetStepId(std::forward<StepIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StepSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status.</p>
     */
    inline StepLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
    inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
    inline void SetLifecycleStatus(StepLifecycleStatus value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline StepSummary& WithLifecycleStatus(StepLifecycleStatus value) { SetLifecycleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the lifecycle of the step.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const { return m_lifecycleStatusMessage; }
    inline bool LifecycleStatusMessageHasBeenSet() const { return m_lifecycleStatusMessageHasBeenSet; }
    template<typename LifecycleStatusMessageT = Aws::String>
    void SetLifecycleStatusMessage(LifecycleStatusMessageT&& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = std::forward<LifecycleStatusMessageT>(value); }
    template<typename LifecycleStatusMessageT = Aws::String>
    StepSummary& WithLifecycleStatusMessage(LifecycleStatusMessageT&& value) { SetLifecycleStatusMessage(std::forward<LifecycleStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run status for the job.</p> <ul> <li> <p>
     * <code>PENDING</code>–pending and waiting for resources.</p> </li> <li> <p>
     * <code>READY</code>–ready to process.</p> </li> <li> <p>
     * <code>ASSIGNED</code>–assigned and will run next on a worker.</p> </li> <li> <p>
     * <code>SCHEDULED</code>–scheduled to run on a worker.</p> </li> <li> <p>
     * <code>INTERRUPTING</code>–being interrupted.</p> </li> <li> <p>
     * <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline TaskRunStatus GetTaskRunStatus() const { return m_taskRunStatus; }
    inline bool TaskRunStatusHasBeenSet() const { return m_taskRunStatusHasBeenSet; }
    inline void SetTaskRunStatus(TaskRunStatus value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = value; }
    inline StepSummary& WithTaskRunStatus(TaskRunStatus value) { SetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const { return m_taskRunStatusCounts; }
    inline bool TaskRunStatusCountsHasBeenSet() const { return m_taskRunStatusCountsHasBeenSet; }
    template<typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
    void SetTaskRunStatusCounts(TaskRunStatusCountsT&& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = std::forward<TaskRunStatusCountsT>(value); }
    template<typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
    StepSummary& WithTaskRunStatusCounts(TaskRunStatusCountsT&& value) { SetTaskRunStatusCounts(std::forward<TaskRunStatusCountsT>(value)); return *this;}
    inline StepSummary& AddTaskRunStatusCounts(TaskRunStatus key, int value) {
      m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The total number of times tasks from the step failed and were retried.</p>
     */
    inline int GetTaskFailureRetryCount() const { return m_taskFailureRetryCount; }
    inline bool TaskFailureRetryCountHasBeenSet() const { return m_taskFailureRetryCountHasBeenSet; }
    inline void SetTaskFailureRetryCount(int value) { m_taskFailureRetryCountHasBeenSet = true; m_taskFailureRetryCount = value; }
    inline StepSummary& WithTaskFailureRetryCount(int value) { SetTaskFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status to start with on the job.</p>
     */
    inline StepTargetTaskRunStatus GetTargetTaskRunStatus() const { return m_targetTaskRunStatus; }
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
    inline void SetTargetTaskRunStatus(StepTargetTaskRunStatus value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline StepSummary& WithTargetTaskRunStatus(StepTargetTaskRunStatus value) { SetTargetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StepSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    StepSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    StepSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    StepSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    StepSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    StepSummary& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of dependencies for the step.</p>
     */
    inline const DependencyCounts& GetDependencyCounts() const { return m_dependencyCounts; }
    inline bool DependencyCountsHasBeenSet() const { return m_dependencyCountsHasBeenSet; }
    template<typename DependencyCountsT = DependencyCounts>
    void SetDependencyCounts(DependencyCountsT&& value) { m_dependencyCountsHasBeenSet = true; m_dependencyCounts = std::forward<DependencyCountsT>(value); }
    template<typename DependencyCountsT = DependencyCounts>
    StepSummary& WithDependencyCounts(DependencyCountsT&& value) { SetDependencyCounts(std::forward<DependencyCountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepLifecycleStatus m_lifecycleStatus{StepLifecycleStatus::NOT_SET};
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    TaskRunStatus m_taskRunStatus{TaskRunStatus::NOT_SET};
    bool m_taskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;

    int m_taskFailureRetryCount{0};
    bool m_taskFailureRetryCountHasBeenSet = false;

    StepTargetTaskRunStatus m_targetTaskRunStatus{StepTargetTaskRunStatus::NOT_SET};
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    DependencyCounts m_dependencyCounts;
    bool m_dependencyCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
