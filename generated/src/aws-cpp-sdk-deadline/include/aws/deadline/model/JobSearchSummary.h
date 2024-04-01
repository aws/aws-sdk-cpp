/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/JobParameter.h>
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
   * <p>The details of a job search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobSearchSummary">AWS
   * API Reference</a></p>
   */
  class JobSearchSummary
  {
  public:
    AWS_DEADLINE_API JobSearchSummary();
    AWS_DEADLINE_API JobSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline JobSearchSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline JobSearchSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline JobSearchSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline JobSearchSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline JobSearchSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


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
    inline JobSearchSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline JobSearchSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


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
    inline JobSearchSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobSearchSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobSearchSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The job parameters.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetJobParameters() const{ return m_jobParameters; }

    /**
     * <p>The job parameters.</p>
     */
    inline bool JobParametersHasBeenSet() const { return m_jobParametersHasBeenSet; }

    /**
     * <p>The job parameters.</p>
     */
    inline void SetJobParameters(const Aws::Map<Aws::String, JobParameter>& value) { m_jobParametersHasBeenSet = true; m_jobParameters = value; }

    /**
     * <p>The job parameters.</p>
     */
    inline void SetJobParameters(Aws::Map<Aws::String, JobParameter>&& value) { m_jobParametersHasBeenSet = true; m_jobParameters = std::move(value); }

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& WithJobParameters(const Aws::Map<Aws::String, JobParameter>& value) { SetJobParameters(value); return *this;}

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& WithJobParameters(Aws::Map<Aws::String, JobParameter>&& value) { SetJobParameters(std::move(value)); return *this;}

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& AddJobParameters(const Aws::String& key, const JobParameter& value) { m_jobParametersHasBeenSet = true; m_jobParameters.emplace(key, value); return *this; }

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& AddJobParameters(Aws::String&& key, const JobParameter& value) { m_jobParametersHasBeenSet = true; m_jobParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& AddJobParameters(const Aws::String& key, JobParameter&& value) { m_jobParametersHasBeenSet = true; m_jobParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& AddJobParameters(Aws::String&& key, JobParameter&& value) { m_jobParametersHasBeenSet = true; m_jobParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& AddJobParameters(const char* key, JobParameter&& value) { m_jobParametersHasBeenSet = true; m_jobParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job parameters.</p>
     */
    inline JobSearchSummary& AddJobParameters(const char* key, const JobParameter& value) { m_jobParametersHasBeenSet = true; m_jobParameters.emplace(key, value); return *this; }


    /**
     * <p>The life cycle status.</p>
     */
    inline const JobLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }

    /**
     * <p>The life cycle status.</p>
     */
    inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }

    /**
     * <p>The life cycle status.</p>
     */
    inline void SetLifecycleStatus(const JobLifecycleStatus& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }

    /**
     * <p>The life cycle status.</p>
     */
    inline void SetLifecycleStatus(JobLifecycleStatus&& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = std::move(value); }

    /**
     * <p>The life cycle status.</p>
     */
    inline JobSearchSummary& WithLifecycleStatus(const JobLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}

    /**
     * <p>The life cycle status.</p>
     */
    inline JobSearchSummary& WithLifecycleStatus(JobLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}


    /**
     * <p>The life cycle status message.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const{ return m_lifecycleStatusMessage; }

    /**
     * <p>The life cycle status message.</p>
     */
    inline bool LifecycleStatusMessageHasBeenSet() const { return m_lifecycleStatusMessageHasBeenSet; }

    /**
     * <p>The life cycle status message.</p>
     */
    inline void SetLifecycleStatusMessage(const Aws::String& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = value; }

    /**
     * <p>The life cycle status message.</p>
     */
    inline void SetLifecycleStatusMessage(Aws::String&& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = std::move(value); }

    /**
     * <p>The life cycle status message.</p>
     */
    inline void SetLifecycleStatusMessage(const char* value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage.assign(value); }

    /**
     * <p>The life cycle status message.</p>
     */
    inline JobSearchSummary& WithLifecycleStatusMessage(const Aws::String& value) { SetLifecycleStatusMessage(value); return *this;}

    /**
     * <p>The life cycle status message.</p>
     */
    inline JobSearchSummary& WithLifecycleStatusMessage(Aws::String&& value) { SetLifecycleStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The life cycle status message.</p>
     */
    inline JobSearchSummary& WithLifecycleStatusMessage(const char* value) { SetLifecycleStatusMessage(value); return *this;}


    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline int GetMaxFailedTasksCount() const{ return m_maxFailedTasksCount; }

    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline bool MaxFailedTasksCountHasBeenSet() const { return m_maxFailedTasksCountHasBeenSet; }

    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline void SetMaxFailedTasksCount(int value) { m_maxFailedTasksCountHasBeenSet = true; m_maxFailedTasksCount = value; }

    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline JobSearchSummary& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}


    /**
     * <p>The maximum number of retries for a job.</p>
     */
    inline int GetMaxRetriesPerTask() const{ return m_maxRetriesPerTask; }

    /**
     * <p>The maximum number of retries for a job.</p>
     */
    inline bool MaxRetriesPerTaskHasBeenSet() const { return m_maxRetriesPerTaskHasBeenSet; }

    /**
     * <p>The maximum number of retries for a job.</p>
     */
    inline void SetMaxRetriesPerTask(int value) { m_maxRetriesPerTaskHasBeenSet = true; m_maxRetriesPerTask = value; }

    /**
     * <p>The maximum number of retries for a job.</p>
     */
    inline JobSearchSummary& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}


    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The job name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The job name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The job name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The job name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The job name.</p>
     */
    inline JobSearchSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The job name.</p>
     */
    inline JobSearchSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The job name.</p>
     */
    inline JobSearchSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The job priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The job priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The job priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The job priority.</p>
     */
    inline JobSearchSummary& WithPriority(int value) { SetPriority(value); return *this;}


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
    inline JobSearchSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline JobSearchSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The queue ID.</p>
     */
    inline JobSearchSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}


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
    inline JobSearchSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline JobSearchSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The task status to start with on the job.</p>
     */
    inline const JobTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }

    /**
     * <p>The task status to start with on the job.</p>
     */
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }

    /**
     * <p>The task status to start with on the job.</p>
     */
    inline void SetTargetTaskRunStatus(const JobTargetTaskRunStatus& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }

    /**
     * <p>The task status to start with on the job.</p>
     */
    inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus&& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = std::move(value); }

    /**
     * <p>The task status to start with on the job.</p>
     */
    inline JobSearchSummary& WithTargetTaskRunStatus(const JobTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}

    /**
     * <p>The task status to start with on the job.</p>
     */
    inline JobSearchSummary& WithTargetTaskRunStatus(JobTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>task run status for the job.</p> <ul> <li> <p> <code>PENDING</code>–pending
     * and waiting for resources.</p> </li> <li> <p> <code>READY</code>–ready to be
     * processed.</p> </li> <li> <p> <code>ASSIGNED</code>–assigned and will run next
     * on a worker.</p> </li> <li> <p> <code>SCHEDULED</code>–scheduled to be run on a
     * worker.</p> </li> <li> <p> <code>INTERRUPTING</code>–being interrupted.</p>
     * </li> <li> <p> <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline const TaskRunStatus& GetTaskRunStatus() const{ return m_taskRunStatus; }

    /**
     * <p>task run status for the job.</p> <ul> <li> <p> <code>PENDING</code>–pending
     * and waiting for resources.</p> </li> <li> <p> <code>READY</code>–ready to be
     * processed.</p> </li> <li> <p> <code>ASSIGNED</code>–assigned and will run next
     * on a worker.</p> </li> <li> <p> <code>SCHEDULED</code>–scheduled to be run on a
     * worker.</p> </li> <li> <p> <code>INTERRUPTING</code>–being interrupted.</p>
     * </li> <li> <p> <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline bool TaskRunStatusHasBeenSet() const { return m_taskRunStatusHasBeenSet; }

    /**
     * <p>task run status for the job.</p> <ul> <li> <p> <code>PENDING</code>–pending
     * and waiting for resources.</p> </li> <li> <p> <code>READY</code>–ready to be
     * processed.</p> </li> <li> <p> <code>ASSIGNED</code>–assigned and will run next
     * on a worker.</p> </li> <li> <p> <code>SCHEDULED</code>–scheduled to be run on a
     * worker.</p> </li> <li> <p> <code>INTERRUPTING</code>–being interrupted.</p>
     * </li> <li> <p> <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline void SetTaskRunStatus(const TaskRunStatus& value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = value; }

    /**
     * <p>task run status for the job.</p> <ul> <li> <p> <code>PENDING</code>–pending
     * and waiting for resources.</p> </li> <li> <p> <code>READY</code>–ready to be
     * processed.</p> </li> <li> <p> <code>ASSIGNED</code>–assigned and will run next
     * on a worker.</p> </li> <li> <p> <code>SCHEDULED</code>–scheduled to be run on a
     * worker.</p> </li> <li> <p> <code>INTERRUPTING</code>–being interrupted.</p>
     * </li> <li> <p> <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline void SetTaskRunStatus(TaskRunStatus&& value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = std::move(value); }

    /**
     * <p>task run status for the job.</p> <ul> <li> <p> <code>PENDING</code>–pending
     * and waiting for resources.</p> </li> <li> <p> <code>READY</code>–ready to be
     * processed.</p> </li> <li> <p> <code>ASSIGNED</code>–assigned and will run next
     * on a worker.</p> </li> <li> <p> <code>SCHEDULED</code>–scheduled to be run on a
     * worker.</p> </li> <li> <p> <code>INTERRUPTING</code>–being interrupted.</p>
     * </li> <li> <p> <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline JobSearchSummary& WithTaskRunStatus(const TaskRunStatus& value) { SetTaskRunStatus(value); return *this;}

    /**
     * <p>task run status for the job.</p> <ul> <li> <p> <code>PENDING</code>–pending
     * and waiting for resources.</p> </li> <li> <p> <code>READY</code>–ready to be
     * processed.</p> </li> <li> <p> <code>ASSIGNED</code>–assigned and will run next
     * on a worker.</p> </li> <li> <p> <code>SCHEDULED</code>–scheduled to be run on a
     * worker.</p> </li> <li> <p> <code>INTERRUPTING</code>–being interrupted.</p>
     * </li> <li> <p> <code>RUNNING</code>–running on a worker.</p> </li> <li> <p>
     * <code>SUSPENDED</code>–the task is suspended.</p> </li> <li> <p>
     * <code>CANCELED</code>–the task has been canceled.</p> </li> <li> <p>
     * <code>FAILED</code>–the task has failed.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>–the task has succeeded.</p> </li> </ul>
     */
    inline JobSearchSummary& WithTaskRunStatus(TaskRunStatus&& value) { SetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const{ return m_taskRunStatusCounts; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline bool TaskRunStatusCountsHasBeenSet() const { return m_taskRunStatusCountsHasBeenSet; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline void SetTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = value; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline void SetTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = std::move(value); }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline JobSearchSummary& WithTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { SetTaskRunStatusCounts(value); return *this;}

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline JobSearchSummary& WithTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { SetTaskRunStatusCounts(std::move(value)); return *this;}

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline JobSearchSummary& AddTaskRunStatusCounts(const TaskRunStatus& key, int value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline JobSearchSummary& AddTaskRunStatusCounts(TaskRunStatus&& key, int value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(std::move(key), value); return *this; }

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_jobParameters;
    bool m_jobParametersHasBeenSet = false;

    JobLifecycleStatus m_lifecycleStatus;
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    int m_maxFailedTasksCount;
    bool m_maxFailedTasksCountHasBeenSet = false;

    int m_maxRetriesPerTask;
    bool m_maxRetriesPerTaskHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    JobTargetTaskRunStatus m_targetTaskRunStatus;
    bool m_targetTaskRunStatusHasBeenSet = false;

    TaskRunStatus m_taskRunStatus;
    bool m_taskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
