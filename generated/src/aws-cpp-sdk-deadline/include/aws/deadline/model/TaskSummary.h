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


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline TaskSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline TaskSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline TaskSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline TaskSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline TaskSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


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
    inline TaskSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline TaskSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


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
    inline TaskSummary& WithFailureRetryCount(int value) { SetFailureRetryCount(value); return *this;}


    /**
     * <p>The latest session action for the task.</p>
     */
    inline const Aws::String& GetLatestSessionActionId() const{ return m_latestSessionActionId; }

    /**
     * <p>The latest session action for the task.</p>
     */
    inline bool LatestSessionActionIdHasBeenSet() const { return m_latestSessionActionIdHasBeenSet; }

    /**
     * <p>The latest session action for the task.</p>
     */
    inline void SetLatestSessionActionId(const Aws::String& value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId = value; }

    /**
     * <p>The latest session action for the task.</p>
     */
    inline void SetLatestSessionActionId(Aws::String&& value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId = std::move(value); }

    /**
     * <p>The latest session action for the task.</p>
     */
    inline void SetLatestSessionActionId(const char* value) { m_latestSessionActionIdHasBeenSet = true; m_latestSessionActionId.assign(value); }

    /**
     * <p>The latest session action for the task.</p>
     */
    inline TaskSummary& WithLatestSessionActionId(const Aws::String& value) { SetLatestSessionActionId(value); return *this;}

    /**
     * <p>The latest session action for the task.</p>
     */
    inline TaskSummary& WithLatestSessionActionId(Aws::String&& value) { SetLatestSessionActionId(std::move(value)); return *this;}

    /**
     * <p>The latest session action for the task.</p>
     */
    inline TaskSummary& WithLatestSessionActionId(const char* value) { SetLatestSessionActionId(value); return *this;}


    /**
     * <p>The task parameters.</p>
     */
    inline const Aws::Map<Aws::String, TaskParameterValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The task parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The task parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The task parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& WithParameters(const Aws::Map<Aws::String, TaskParameterValue>& value) { SetParameters(value); return *this;}

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& WithParameters(Aws::Map<Aws::String, TaskParameterValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& AddParameters(const Aws::String& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& AddParameters(Aws::String&& key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& AddParameters(const Aws::String& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& AddParameters(Aws::String&& key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& AddParameters(const char* key, TaskParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The task parameters.</p>
     */
    inline TaskSummary& AddParameters(const char* key, const TaskParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


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
    inline TaskSummary& WithRunStatus(const TaskRunStatus& value) { SetRunStatus(value); return *this;}

    /**
     * <p>The run status of the task.</p>
     */
    inline TaskSummary& WithRunStatus(TaskRunStatus&& value) { SetRunStatus(std::move(value)); return *this;}


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
    inline TaskSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline TaskSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The run status on which the started.</p>
     */
    inline const TaskTargetRunStatus& GetTargetRunStatus() const{ return m_targetRunStatus; }

    /**
     * <p>The run status on which the started.</p>
     */
    inline bool TargetRunStatusHasBeenSet() const { return m_targetRunStatusHasBeenSet; }

    /**
     * <p>The run status on which the started.</p>
     */
    inline void SetTargetRunStatus(const TaskTargetRunStatus& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = value; }

    /**
     * <p>The run status on which the started.</p>
     */
    inline void SetTargetRunStatus(TaskTargetRunStatus&& value) { m_targetRunStatusHasBeenSet = true; m_targetRunStatus = std::move(value); }

    /**
     * <p>The run status on which the started.</p>
     */
    inline TaskSummary& WithTargetRunStatus(const TaskTargetRunStatus& value) { SetTargetRunStatus(value); return *this;}

    /**
     * <p>The run status on which the started.</p>
     */
    inline TaskSummary& WithTargetRunStatus(TaskTargetRunStatus&& value) { SetTargetRunStatus(std::move(value)); return *this;}


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
    inline TaskSummary& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline TaskSummary& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline TaskSummary& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline TaskSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline TaskSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline TaskSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline TaskSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline TaskSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    int m_failureRetryCount;
    bool m_failureRetryCountHasBeenSet = false;

    Aws::String m_latestSessionActionId;
    bool m_latestSessionActionIdHasBeenSet = false;

    Aws::Map<Aws::String, TaskParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    TaskRunStatus m_runStatus;
    bool m_runStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    TaskTargetRunStatus m_targetRunStatus;
    bool m_targetRunStatusHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
