/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/TaskTargetRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/TaskParameterValue.h>
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
   * <p>The details of a task search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/TaskSearchSummary">AWS
   * API Reference</a></p>
   */
  class TaskSearchSummary
  {
  public:
    AWS_DEADLINE_API TaskSearchSummary();
    AWS_DEADLINE_API TaskSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API TaskSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline TaskSearchSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline TaskSearchSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline TaskSearchSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }
    inline TaskSearchSummary& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}
    inline TaskSearchSummary& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}
    inline TaskSearchSummary& WithStepId(const char* value) { SetStepId(value); return *this;}
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
    inline TaskSearchSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline TaskSearchSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline TaskSearchSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
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
    inline TaskSearchSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline TaskSearchSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline TaskSearchSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status of the task.</p>
     */
    inline const TaskRunStatus& GetRunStatus() const{ return m_runStatus; }
    inline bool RunStatusHasBeenSet() const { return m_runStatusHasBeenSet; }
    inline void SetRunStatus(const TaskRunStatus& value) { m_runStatusHasBeenSet = true; m_runStatus = value; }
    inline void SetRunStatus(TaskRunStatus&& value) { m_runStatusHasBeenSet = true; m_runStatus = std::move(value); }
    inline TaskSearchSummary& WithRunStatus(const TaskRunStatus& value) { SetRunStatus(value); return *this;}
    inline TaskSearchSummary& WithRunStatus(TaskRunStatus&& value) { SetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline const TaskTargetRunStatus& GetTargetRunStatus() const{ return m_targetRunStatus; }
    inline bool TargetRunStatusHasBeenSet() const { return m_targetRunStatusHasBeenSet; }
    inline void SetTargetRunStatus(const TaskTargetRunStatus& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = value; }
    inline void SetTargetRunStatus(TaskTargetRunStatus&& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = std::move(value); }
    inline TaskSearchSummary& WithTargetRunStatus(const TaskTargetRunStatus& value) { SetTargetRunStatus(value); return *this;}
    inline TaskSearchSummary& WithTargetRunStatus(TaskTargetRunStatus&& value) { SetTargetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to search for.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline TaskSearchSummary& WithParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { SetParameters(value); return *this;}
    inline TaskSearchSummary& WithParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline TaskSearchSummary& AddParameters(const Aws::String& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline TaskSearchSummary& AddParameters(Aws::String&& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TaskSearchSummary& AddParameters(const Aws::String& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TaskSearchSummary& AddParameters(Aws::String&& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TaskSearchSummary& AddParameters(const char* key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TaskSearchSummary& AddParameters(const char* key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline int GetFailureRetryCount() const{ return m_failureRetryCount; }
    inline bool FailureRetryCountHasBeenSet() const { return m_failureRetryCountHasBeenSet; }
    inline void SetFailureRetryCount(int value) { m_failureRetryCountHasBeenSet = true; m_failureRetryCount = value; }
    inline TaskSearchSummary& WithFailureRetryCount(int value) { SetFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline TaskSearchSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline TaskSearchSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline TaskSearchSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline TaskSearchSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    TaskRunStatus m_runStatus;
    bool m_runStatusHasBeenSet = false;

    TaskTargetRunStatus m_targetRunStatus;
    bool m_targetRunStatusHasBeenSet = false;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_failureRetryCount;
    bool m_failureRetryCountHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
