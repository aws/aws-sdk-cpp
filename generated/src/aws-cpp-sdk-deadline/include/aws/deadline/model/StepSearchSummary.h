/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StepLifecycleStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/StepTargetTaskRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/ParameterSpace.h>
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
   * <p>The details of a step search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepSearchSummary">AWS
   * API Reference</a></p>
   */
  class StepSearchSummary
  {
  public:
    AWS_DEADLINE_API StepSearchSummary();
    AWS_DEADLINE_API StepSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API StepSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }
    inline StepSearchSummary& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline StepSearchSummary& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline StepSearchSummary& WithStepId(const char* value) { SetStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline StepSearchSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StepSearchSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StepSearchSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline StepSearchSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline StepSearchSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline StepSearchSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StepSearchSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StepSearchSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StepSearchSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status.</p>
     */
    inline const StepLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }
    inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
    inline void SetLifecycleStatus(const StepLifecycleStatus& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline void SetLifecycleStatus(StepLifecycleStatus&& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = std::move(value); }
    inline StepSearchSummary& WithLifecycleStatus(const StepLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}
    inline StepSearchSummary& WithLifecycleStatus(StepLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status message.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const{ return m_lifecycleStatusMessage; }
    inline bool LifecycleStatusMessageHasBeenSet() const { return m_lifecycleStatusMessageHasBeenSet; }
    inline void SetLifecycleStatusMessage(const Aws::String& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = value; }
    inline void SetLifecycleStatusMessage(Aws::String&& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = std::move(value); }
    inline void SetLifecycleStatusMessage(const char* value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage.assign(value); }
    inline StepSearchSummary& WithLifecycleStatusMessage(const Aws::String& value) { SetLifecycleStatusMessage(value); return *this;}
    inline StepSearchSummary& WithLifecycleStatusMessage(Aws::String&& value) { SetLifecycleStatusMessage(std::move(value)); return *this;}
    inline StepSearchSummary& WithLifecycleStatusMessage(const char* value) { SetLifecycleStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run status for the job.</p> <ul> <li> <p>
     * <code>PENDING</code>–pending and waiting for resources.</p> </li> <li> <p>
     * <code>READY</code>–ready to be processed.</p> </li> <li> <p>
     * <code>ASSIGNED</code>–assigned and will run next on a worker.</p> </li> <li> <p>
     * <code>SCHEDULED</code>–scheduled to be run on a worker.</p> </li> <li> <p>
     * <code>INTERRUPTING</code>–being interrupted.</p> </li> <li> <p>
     * <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline const TaskRunStatus& GetTaskRunStatus() const{ return m_taskRunStatus; }
    inline bool TaskRunStatusHasBeenSet() const { return m_taskRunStatusHasBeenSet; }
    inline void SetTaskRunStatus(const TaskRunStatus& value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = value; }
    inline void SetTaskRunStatus(TaskRunStatus&& value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = std::move(value); }
    inline StepSearchSummary& WithTaskRunStatus(const TaskRunStatus& value) { SetTaskRunStatus(value); return *this;}
    inline StepSearchSummary& WithTaskRunStatus(TaskRunStatus&& value) { SetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status to start with on the job.</p>
     */
    inline const StepTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
    inline void SetTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline void SetTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = std::move(value); }
    inline StepSearchSummary& WithTargetTaskRunStatus(const StepTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}
    inline StepSearchSummary& WithTargetTaskRunStatus(StepTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const{ return m_taskRunStatusCounts; }
    inline bool TaskRunStatusCountsHasBeenSet() const { return m_taskRunStatusCountsHasBeenSet; }
    inline void SetTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = value; }
    inline void SetTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = std::move(value); }
    inline StepSearchSummary& WithTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { SetTaskRunStatusCounts(value); return *this;}
    inline StepSearchSummary& WithTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { SetTaskRunStatusCounts(std::move(value)); return *this;}
    inline StepSearchSummary& AddTaskRunStatusCounts(const TaskRunStatus& key, int value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this; }
    inline StepSearchSummary& AddTaskRunStatusCounts(TaskRunStatus&& key, int value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StepSearchSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StepSearchSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline StepSearchSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline StepSearchSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline StepSearchSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline StepSearchSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters and combination expressions for the search.</p>
     */
    inline const ParameterSpace& GetParameterSpace() const{ return m_parameterSpace; }
    inline bool ParameterSpaceHasBeenSet() const { return m_parameterSpaceHasBeenSet; }
    inline void SetParameterSpace(const ParameterSpace& value) { m_parameterSpaceHasBeenSet = true; m_parameterSpace = value; }
    inline void SetParameterSpace(ParameterSpace&& value) { m_parameterSpaceHasBeenSet = true; m_parameterSpace = std::move(value); }
    inline StepSearchSummary& WithParameterSpace(const ParameterSpace& value) { SetParameterSpace(value); return *this;}
    inline StepSearchSummary& WithParameterSpace(ParameterSpace&& value) { SetParameterSpace(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StepLifecycleStatus m_lifecycleStatus;
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    TaskRunStatus m_taskRunStatus;
    bool m_taskRunStatusHasBeenSet = false;

    StepTargetTaskRunStatus m_targetTaskRunStatus;
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    ParameterSpace m_parameterSpace;
    bool m_parameterSpaceHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
