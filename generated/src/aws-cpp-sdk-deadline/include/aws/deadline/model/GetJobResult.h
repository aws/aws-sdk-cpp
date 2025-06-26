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
#include <aws/deadline/model/Attachments.h>
#include <aws/deadline/model/JobParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetJobResult
  {
  public:
    AWS_DEADLINE_API GetJobResult() = default;
    AWS_DEADLINE_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status for the job. </p>
     */
    inline JobLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
    inline void SetLifecycleStatus(JobLifecycleStatus value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline GetJobResult& WithLifecycleStatus(JobLifecycleStatus value) { SetLifecycleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const { return m_lifecycleStatusMessage; }
    template<typename LifecycleStatusMessageT = Aws::String>
    void SetLifecycleStatusMessage(LifecycleStatusMessageT&& value) { m_lifecycleStatusMessageHasBeenSet = true; m_lifecycleStatusMessage = std::forward<LifecycleStatusMessageT>(value); }
    template<typename LifecycleStatusMessageT = Aws::String>
    GetJobResult& WithLifecycleStatusMessage(LifecycleStatusMessageT&& value) { SetLifecycleStatusMessage(std::forward<LifecycleStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline GetJobResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetJobResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetJobResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetJobResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetJobResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetJobResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run status for the job.</p>
     */
    inline TaskRunStatus GetTaskRunStatus() const { return m_taskRunStatus; }
    inline void SetTaskRunStatus(TaskRunStatus value) { m_taskRunStatusHasBeenSet = true; m_taskRunStatus = value; }
    inline GetJobResult& WithTaskRunStatus(TaskRunStatus value) { SetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task status with which the job started.</p>
     */
    inline JobTargetTaskRunStatus GetTargetTaskRunStatus() const { return m_targetTaskRunStatus; }
    inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline GetJobResult& WithTargetTaskRunStatus(JobTargetTaskRunStatus value) { SetTargetTaskRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const { return m_taskRunStatusCounts; }
    template<typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
    void SetTaskRunStatusCounts(TaskRunStatusCountsT&& value) { m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts = std::forward<TaskRunStatusCountsT>(value); }
    template<typename TaskRunStatusCountsT = Aws::Map<TaskRunStatus, int>>
    GetJobResult& WithTaskRunStatusCounts(TaskRunStatusCountsT&& value) { SetTaskRunStatusCounts(std::forward<TaskRunStatusCountsT>(value)); return *this;}
    inline GetJobResult& AddTaskRunStatusCounts(TaskRunStatus key, int value) {
      m_taskRunStatusCountsHasBeenSet = true; m_taskRunStatusCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The total number of times tasks from the job failed and were retried.</p>
     */
    inline int GetTaskFailureRetryCount() const { return m_taskFailureRetryCount; }
    inline void SetTaskFailureRetryCount(int value) { m_taskFailureRetryCountHasBeenSet = true; m_taskFailureRetryCount = value; }
    inline GetJobResult& WithTaskFailureRetryCount(int value) { SetTaskFailureRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline const Aws::String& GetStorageProfileId() const { return m_storageProfileId; }
    template<typename StorageProfileIdT = Aws::String>
    void SetStorageProfileId(StorageProfileIdT&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::forward<StorageProfileIdT>(value); }
    template<typename StorageProfileIdT = Aws::String>
    GetJobResult& WithStorageProfileId(StorageProfileIdT&& value) { SetStorageProfileId(std::forward<StorageProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline int GetMaxFailedTasksCount() const { return m_maxFailedTasksCount; }
    inline void SetMaxFailedTasksCount(int value) { m_maxFailedTasksCountHasBeenSet = true; m_maxFailedTasksCount = value; }
    inline GetJobResult& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of retries per failed tasks.</p>
     */
    inline int GetMaxRetriesPerTask() const { return m_maxRetriesPerTask; }
    inline void SetMaxRetriesPerTask(int value) { m_maxRetriesPerTaskHasBeenSet = true; m_maxRetriesPerTask = value; }
    inline GetJobResult& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the job.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Map<Aws::String, JobParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, JobParameter>>
    GetJobResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = JobParameter>
    GetJobResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The attachments for the job.</p>
     */
    inline const Attachments& GetAttachments() const { return m_attachments; }
    template<typename AttachmentsT = Attachments>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Attachments>
    GetJobResult& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the job.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetJobResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of worker hosts that can concurrently process a job. When
     * the <code>maxWorkerCount</code> is reached, no more workers will be assigned to
     * process the job, even if the fleets assigned to the job's queue has available
     * workers.</p> <p>If you don't set the <code>maxWorkerCount</code> when you create
     * a job, this value is not returned in the response.</p>
     */
    inline int GetMaxWorkerCount() const { return m_maxWorkerCount; }
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }
    inline GetJobResult& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the source job.</p>
     */
    inline const Aws::String& GetSourceJobId() const { return m_sourceJobId; }
    template<typename SourceJobIdT = Aws::String>
    void SetSourceJobId(SourceJobIdT&& value) { m_sourceJobIdHasBeenSet = true; m_sourceJobId = std::forward<SourceJobIdT>(value); }
    template<typename SourceJobIdT = Aws::String>
    GetJobResult& WithSourceJobId(SourceJobIdT&& value) { SetSourceJobId(std::forward<SourceJobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobLifecycleStatus m_lifecycleStatus{JobLifecycleStatus::NOT_SET};
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_lifecycleStatusMessage;
    bool m_lifecycleStatusMessageHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

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

    TaskRunStatus m_taskRunStatus{TaskRunStatus::NOT_SET};
    bool m_taskRunStatusHasBeenSet = false;

    JobTargetTaskRunStatus m_targetTaskRunStatus{JobTargetTaskRunStatus::NOT_SET};
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;
    bool m_taskRunStatusCountsHasBeenSet = false;

    int m_taskFailureRetryCount{0};
    bool m_taskFailureRetryCountHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    int m_maxFailedTasksCount{0};
    bool m_maxFailedTasksCountHasBeenSet = false;

    int m_maxRetriesPerTask{0};
    bool m_maxRetriesPerTaskHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Attachments m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_maxWorkerCount{0};
    bool m_maxWorkerCountHasBeenSet = false;

    Aws::String m_sourceJobId;
    bool m_sourceJobIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
