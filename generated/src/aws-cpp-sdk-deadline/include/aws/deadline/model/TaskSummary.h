/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/TaskTargetRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The details of a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/TaskSummary">AWS
   * API Reference</a></p>
   */
  class TaskSummary
  {
  public:
    AWS_DEADLINE_API TaskSummary();
    AWS_DEADLINE_API TaskSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API TaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline TaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline TaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TaskSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TaskSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline TaskSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline TaskSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline TaskSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status of the task.</p>
     */
    inline const TaskRunStatus& GetRunStatus() const{ return m_runStatus; }
    inline bool RunStatusHasBeenSet() const { return m_runStatusHasBeenSet; }
    inline void SetRunStatus(const TaskRunStatus& value) { m_runStatusHasBeenSet = true; m_runStatus = value; }
    inline void SetRunStatus(TaskRunStatus&& value) { m_runStatusHasBeenSet = true; m_runStatus = std::move(value); }
    inline TaskSummary& WithRunStatus(const TaskRunStatus& value) { SetRunStatus(value); return *this;}
    inline TaskSummary& WithRunStatus(TaskRunStatus&& value) { SetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run status on which the started.</p>
     */
    inline const TaskTargetRunStatus& GetTargetRunStatus() const{ return m_targetRunStatus; }
    inline bool TargetRunStatusHasBeenSet() const { return m_targetRunStatusHasBeenSet; }
    inline void SetTargetRunStatus(const TaskTargetRunStatus& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = value; }
    inline void SetTargetRunStatus(TaskTargetRunStatus&& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = std::move(value); }
    inline TaskSummary& WithTargetRunStatus(const TaskTargetRunStatus& value) { SetTargetRunStatus(value); return *this;}
    inline TaskSummary& WithTargetRunStatus(TaskTargetRunStatus&& value) { SetTargetRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the task failed and was retried.</p>
     */
    inline int GetFailureRetryCount() const{ return m_failureRetryCount; }
    inline bool FailureRetryCountHasBeenSet() const { return m_failureRetryCountHasBeenSet; }
    inline void SetFailureRetryCount(int value) { m_failureRetryCountHasBeenSet = true; m_failureRetryCount = value; }
    inline TaskSummary& WithFailureRetryCount(int value) { SetFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task parameters.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline TaskSummary& WithParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { SetParameters(value); return *this;}
    inline TaskSummary& WithParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline TaskSummary& AddParameters(const Aws::String& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline TaskSummary& AddParameters(Aws::String&& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TaskSummary& AddParameters(const Aws::String& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TaskSummary& AddParameters(Aws::String&& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TaskSummary& AddParameters(const char* key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TaskSummary& AddParameters(const char* key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline TaskSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline TaskSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline TaskSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline TaskSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline TaskSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline TaskSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline TaskSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline TaskSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline TaskSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest session action for the task.</p>
     */
    inline const Aws::String& GetLatestSessionActionId() const{ return m_latestSessionActionId; }
    inline bool LatestSessionActionIdHasBeenSet() const { return m_latestSessionActionIdHasBeenSet; }
    inline void SetLatestSessionActionId(const Aws::String& value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId = value; }
    inline void SetLatestSessionActionId(Aws::String&& value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId = std::move(value); }
    inline void SetLatestSessionActionId(const char* value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId.assign(value); }
    inline TaskSummary& WithLatestSessionActionId(const Aws::String& value) { SetLatestSessionActionId(value); return *this;}
    inline TaskSummary& WithLatestSessionActionId(Aws::String&& value) { SetLatestSessionActionId(std::move(value)); return *this;}
    inline TaskSummary& WithLatestSessionActionId(const char* value) { SetLatestSessionActionId(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    TaskRunStatus m_runStatus;
    bool m_runStatusHasBeenSet = false;

    TaskTargetRunStatus m_targetRunStatus;
    bool m_targetRunStatusHasBeenSet = false;

    int m_failureRetryCount;
    bool m_failureRetryCountHasBeenSet = false;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_latestSessionActionId;
    bool m_latestSessionActionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
