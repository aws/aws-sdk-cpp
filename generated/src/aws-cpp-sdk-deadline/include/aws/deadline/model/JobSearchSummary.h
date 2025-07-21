/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_DEADLINE_API JobSearchSummary() = default;
    AWS_DEADLINE_API JobSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobSearchSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    JobSearchSummary& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobSearchSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status.</p>
     */
    inline JobLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
    inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
    inline void SetLifecycleStatus(JobLifecycleStatus value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline JobSearchSummary& WithLifecycleStatus(JobLifecycleStatus value) { SetLifecycleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status message.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const { return m_lifecycleStatusMessage; }
    inline bool LifecycleStatusMessageHasBeenSet() const { return m_lifecycleStatusMessageHasBeenSet; }
    template<typename LifecycleStatusMessageT = Aws::String>
    void SetLifecycleStatusMessage(LifecycleStatusMessageT&& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = std::forward<LifecycleStatusMessageT>(value); }
    template<typename LifecycleStatusMessageT = Aws::String>
    JobSearchSummary& WithLifecycleStatusMessage(LifecycleStatusMessageT&& value) { SetLifecycleStatusMessage(std::forward<LifecycleStatusMessageT>(value)); return *this;}
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
    inline TaskRunStatus GetTaskRunStatus() const { return m_taskRunStatus; }
    inline bool TaskRunStatusHasBeenSet() const { return m_taskRunStatusHasBeenSet; }
    inline void SetTaskRunStatus(TaskRunStatus value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = value; }
    inline JobSearchSummary& WithTaskRunStatus(TaskRunStatus value) { SetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status to start with on the job.</p>
     */
    inline JobTargetTaskRunStatus GetTargetTaskRunStatus() const { return m_targetTaskRunStatus; }
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
    inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline JobSearchSummary& WithTargetTaskRunStatus(JobTargetTaskRunStatus value) { SetTargetTaskRunStatus(value); return *this;}
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
    JobSearchSummary& WithTaskRunStatusCounts(TaskRunStatusCountsT&& value) { SetTaskRunStatusCounts(std::forward<TaskRunStatusCountsT>(value)); return *this;}
    inline JobSearchSummary& AddTaskRunStatusCounts(TaskRunStatus key, int value) {
      m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The total number of times tasks from the job failed and were retried.</p>
     */
    inline int GetTaskFailureRetryCount() const { return m_taskFailureRetryCount; }
    inline bool TaskFailureRetryCountHasBeenSet() const { return m_taskFailureRetryCountHasBeenSet; }
    inline void SetTaskFailureRetryCount(int value) { m_taskFailureRetryCountHasBeenSet = true; m_taskFailureRetryCount = value; }
    inline JobSearchSummary& WithTaskFailureRetryCount(int value) { SetTaskFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobSearchSummary& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline int GetMaxFailedTasksCount() const { return m_maxFailedTasksCount; }
    inline bool MaxFailedTasksCountHasBeenSet() const { return m_maxFailedTasksCountHasBeenSet; }
    inline void SetMaxFailedTasksCount(int value) { m_maxFailedTasksCountHasBeenSet = true; m_maxFailedTasksCount = value; }
    inline JobSearchSummary& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of retries for a job.</p>
     */
    inline int GetMaxRetriesPerTask() const { return m_maxRetriesPerTask; }
    inline bool MaxRetriesPerTaskHasBeenSet() const { return m_maxRetriesPerTaskHasBeenSet; }
    inline void SetMaxRetriesPerTask(int value) { m_maxRetriesPerTaskHasBeenSet = true; m_maxRetriesPerTask = value; }
    inline JobSearchSummary& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}
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
    JobSearchSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
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
    JobSearchSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    JobSearchSummary& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
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
    JobSearchSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
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
    JobSearchSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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
    JobSearchSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job parameters.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetJobParameters() const { return m_jobParameters; }
    inline bool JobParametersHasBeenSet() const { return m_jobParametersHasBeenSet; }
    template<typename JobParametersT = Aws::Map<Aws::String, JobParameter>>
    void SetJobParameters(JobParametersT&& value) { m_jobParametersHasBeenSet = true; m_jobParameters = std::forward<JobParametersT>(value); }
    template<typename JobParametersT = Aws::Map<Aws::String, JobParameter>>
    JobSearchSummary& WithJobParameters(JobParametersT&& value) { SetJobParameters(std::forward<JobParametersT>(value)); return *this;}
    template<typename JobParametersKeyT = Aws::String, typename JobParametersValueT = JobParameter>
    JobSearchSummary& AddJobParameters(JobParametersKeyT&& key, JobParametersValueT&& value) {
      m_jobParametersHasBeenSet = true; m_jobParameters.emplace(std::forward<JobParametersKeyT>(key), std::forward<JobParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The maximum number of worker hosts that can concurrently process a job. When
     * the <code>maxWorkerCount</code> is reached, no more workers will be assigned to
     * process the job, even if the fleets assigned to the job's queue has available
     * workers.</p> <p>You can't set the <code>maxWorkerCount</code> to 0. If you set
     * it to -1, there is no maximum number of workers.</p> <p>If you don't specify the
     * <code>maxWorkerCount</code>, the default is -1.</p>
     */
    inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }
    inline JobSearchSummary& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the source job.</p>
     */
    inline const Aws::String& GetSourceJobId() const { return m_sourceJobId; }
    inline bool SourceJobIdHasBeenSet() const { return m_sourceJobIdHasBeenSet; }
    template<typename SourceJobIdT = Aws::String>
    void SetSourceJobId(SourceJobIdT&& value) { m_sourceJobIdHasBeenSet = true; m_sourceJobId = std::forward<SourceJobIdT>(value); }
    template<typename SourceJobIdT = Aws::String>
    JobSearchSummary& WithSourceJobId(SourceJobIdT&& value) { SetSourceJobId(std::forward<SourceJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobLifecycleStatus m_lifecycleStatus{JobLifecycleStatus::NOT_SET};
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    TaskRunStatus m_taskRunStatus{TaskRunStatus::NOT_SET};
    bool m_taskRunStatusHasBeenSet = false;

    JobTargetTaskRunStatus m_targetTaskRunStatus{JobTargetTaskRunStatus::NOT_SET};
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;

    int m_taskFailureRetryCount{0};
    bool m_taskFailureRetryCountHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    int m_maxFailedTasksCount{0};
    bool m_maxFailedTasksCountHasBeenSet = false;

    int m_maxRetriesPerTask{0};
    bool m_maxRetriesPerTaskHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_jobParameters;
    bool m_jobParametersHasBeenSet = false;

    int m_maxWorkerCount{0};
    bool m_maxWorkerCountHasBeenSet = false;

    Aws::String m_sourceJobId;
    bool m_sourceJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
