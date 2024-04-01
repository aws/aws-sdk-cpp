/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/TaskTargetRunStatus.h>
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


    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline TaskSearchSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline TaskSearchSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline int GetFailureRetryCount() const{ return m_failureRetryCount; }

    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline bool FailureRetryCountHasBeenSet() const { return m_failureRetryCountHasBeenSet; }

    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline void SetFailureRetryCount(int value) { m_failureRetryCountHasBeenSet = true; m_failureRetryCount = value; }

    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline TaskSearchSummary& WithFailureRetryCount(int value) { SetFailureRetryCount(value); return *this;}


    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID.</p>
     */
    inline TaskSearchSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline TaskSearchSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline TaskSearchSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The parameters to search for.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& WithParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& WithParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& AddParameters(const Aws::String& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& AddParameters(Aws::String&& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& AddParameters(const Aws::String& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& AddParameters(Aws::String&& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& AddParameters(const char* key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline TaskSearchSummary& AddParameters(const char* key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The queue ID.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The queue ID.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The queue ID.</p>
     */
    inline TaskSearchSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline TaskSearchSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline TaskSearchSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The run status of the task.</p>
     */
    inline const TaskRunStatus& GetRunStatus() const{ return m_runStatus; }

    /**
     * <p>The run status of the task.</p>
     */
    inline bool RunStatusHasBeenSet() const { return m_runStatusHasBeenSet; }

    /**
     * <p>The run status of the task.</p>
     */
    inline void SetRunStatus(const TaskRunStatus& value) { m_runStatusHasBeenSet = true; m_runStatus = value; }

    /**
     * <p>The run status of the task.</p>
     */
    inline void SetRunStatus(TaskRunStatus&& value) { m_runStatusHasBeenSet = true; m_runStatus = std::move(value); }

    /**
     * <p>The run status of the task.</p>
     */
    inline TaskSearchSummary& WithRunStatus(const TaskRunStatus& value) { SetRunStatus(value); return *this;}

    /**
     * <p>The run status of the task.</p>
     */
    inline TaskSearchSummary& WithRunStatus(TaskRunStatus&& value) { SetRunStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline TaskSearchSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline TaskSearchSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The step ID.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The step ID.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The step ID.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The step ID.</p>
     */
    inline TaskSearchSummary& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The step ID.</p>
     */
    inline TaskSearchSummary& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The step ID.</p>
     */
    inline TaskSearchSummary& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline const TaskTargetRunStatus& GetTargetRunStatus() const{ return m_targetRunStatus; }

    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline bool TargetRunStatusHasBeenSet() const { return m_targetRunStatusHasBeenSet; }

    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline void SetTargetRunStatus(const TaskTargetRunStatus& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = value; }

    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline void SetTargetRunStatus(TaskTargetRunStatus&& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = std::move(value); }

    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline TaskSearchSummary& WithTargetRunStatus(const TaskTargetRunStatus& value) { SetTargetRunStatus(value); return *this;}

    /**
     * <p>The run status that the task is being updated to.</p>
     */
    inline TaskSearchSummary& WithTargetRunStatus(TaskTargetRunStatus&& value) { SetTargetRunStatus(std::move(value)); return *this;}


    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task ID.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The task ID.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The task ID.</p>
     */
    inline TaskSearchSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline TaskSearchSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline TaskSearchSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    int m_failureRetryCount;
    bool m_failureRetryCountHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    TaskRunStatus m_runStatus;
    bool m_runStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    TaskTargetRunStatus m_targetRunStatus;
    bool m_targetRunStatusHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
