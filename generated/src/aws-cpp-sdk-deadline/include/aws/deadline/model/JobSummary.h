/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>A summary of job details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobSummary">AWS
   * API Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_DEADLINE_API JobSummary();
    AWS_DEADLINE_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline JobSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline JobSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline JobSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status.</p>
     */
    inline const JobLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }
    inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
    inline void SetLifecycleStatus(const JobLifecycleStatus& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline void SetLifecycleStatus(JobLifecycleStatus&& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = std::move(value); }
    inline JobSummary& WithLifecycleStatus(const JobLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}
    inline JobSummary& WithLifecycleStatus(JobLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}
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
    inline JobSummary& WithLifecycleStatusMessage(const Aws::String& value) { SetLifecycleStatusMessage(value); return *this;}
    inline JobSummary& WithLifecycleStatusMessage(Aws::String&& value) { SetLifecycleStatusMessage(std::move(value)); return *this;}
    inline JobSummary& WithLifecycleStatusMessage(const char* value) { SetLifecycleStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobSummary& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline JobSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline JobSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
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
    inline JobSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline JobSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline JobSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline JobSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline JobSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
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
    inline JobSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline JobSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline JobSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline JobSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline JobSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline JobSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline JobSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
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
    inline JobSummary& WithTaskRunStatus(const TaskRunStatus& value) { SetTaskRunStatus(value); return *this;}
    inline JobSummary& WithTaskRunStatus(TaskRunStatus&& value) { SetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status to start with on the job.</p>
     */
    inline const JobTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
    inline void SetTargetTaskRunStatus(const JobTargetTaskRunStatus& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus&& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = std::move(value); }
    inline JobSummary& WithTargetTaskRunStatus(const JobTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}
    inline JobSummary& WithTargetTaskRunStatus(JobTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const{ return m_taskRunStatusCounts; }
    inline bool TaskRunStatusCountsHasBeenSet() const { return m_taskRunStatusCountsHasBeenSet; }
    inline void SetTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = value; }
    inline void SetTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = std::move(value); }
    inline JobSummary& WithTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { SetTaskRunStatusCounts(value); return *this;}
    inline JobSummary& WithTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { SetTaskRunStatusCounts(std::move(value)); return *this;}
    inline JobSummary& AddTaskRunStatusCounts(const TaskRunStatus& key, int value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this; }
    inline JobSummary& AddTaskRunStatusCounts(TaskRunStatus&& key, int value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline int GetMaxFailedTasksCount() const{ return m_maxFailedTasksCount; }
    inline bool MaxFailedTasksCountHasBeenSet() const { return m_maxFailedTasksCountHasBeenSet; }
    inline void SetMaxFailedTasksCount(int value) { m_maxFailedTasksCountHasBeenSet = true; m_maxFailedTasksCount = value; }
    inline JobSummary& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of retries for a job.</p>
     */
    inline int GetMaxRetriesPerTask() const{ return m_maxRetriesPerTask; }
    inline bool MaxRetriesPerTaskHasBeenSet() const { return m_maxRetriesPerTaskHasBeenSet; }
    inline void SetMaxRetriesPerTask(int value) { m_maxRetriesPerTaskHasBeenSet = true; m_maxRetriesPerTask = value; }
    inline JobSummary& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the source job.</p>
     */
    inline const Aws::String& GetSourceJobId() const{ return m_sourceJobId; }
    inline bool SourceJobIdHasBeenSet() const { return m_sourceJobIdHasBeenSet; }
    inline void SetSourceJobId(const Aws::String& value) { m_sourceJobIdHasBeenSet = true; m_sourceJobId = value; }
    inline void SetSourceJobId(Aws::String&& value) { m_sourceJobIdHasBeenSet = true; m_sourceJobId = std::move(value); }
    inline void SetSourceJobId(const char* value) { m_sourceJobIdHasBeenSet = true; m_sourceJobId.assign(value); }
    inline JobSummary& WithSourceJobId(const Aws::String& value) { SetSourceJobId(value); return *this;}
    inline JobSummary& WithSourceJobId(Aws::String&& value) { SetSourceJobId(std::move(value)); return *this;}
    inline JobSummary& WithSourceJobId(const char* value) { SetSourceJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobLifecycleStatus m_lifecycleStatus;
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    TaskRunStatus m_taskRunStatus;
    bool m_taskRunStatusHasBeenSet = false;

    JobTargetTaskRunStatus m_targetTaskRunStatus;
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;

    int m_maxFailedTasksCount;
    bool m_maxFailedTasksCountHasBeenSet = false;

    int m_maxRetriesPerTask;
    bool m_maxRetriesPerTaskHasBeenSet = false;

    Aws::String m_sourceJobId;
    bool m_sourceJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
