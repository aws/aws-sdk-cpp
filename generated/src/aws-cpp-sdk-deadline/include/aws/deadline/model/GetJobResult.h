/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/Attachments.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobLifecycleStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/JobTargetTaskRunStatus.h>
#include <aws/deadline/model/TaskRunStatus.h>
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
    AWS_DEADLINE_API GetJobResult();
    AWS_DEADLINE_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attachments for the job.</p>
     */
    inline const Attachments& GetAttachments() const{ return m_attachments; }

    /**
     * <p>The attachments for the job.</p>
     */
    inline void SetAttachments(const Attachments& value) { m_attachments = value; }

    /**
     * <p>The attachments for the job.</p>
     */
    inline void SetAttachments(Attachments&& value) { m_attachments = std::move(value); }

    /**
     * <p>The attachments for the job.</p>
     */
    inline GetJobResult& WithAttachments(const Attachments& value) { SetAttachments(value); return *this;}

    /**
     * <p>The attachments for the job.</p>
     */
    inline GetJobResult& WithAttachments(Attachments&& value) { SetAttachments(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetJobResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetJobResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetJobResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the job.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the job.</p>
     */
    inline GetJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the job.</p>
     */
    inline GetJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the job.</p>
     */
    inline GetJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetJobResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetJobResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The job ID.</p>
     */
    inline GetJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline GetJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline GetJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The life cycle status for the job.</p>
     */
    inline const JobLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }

    /**
     * <p>The life cycle status for the job.</p>
     */
    inline void SetLifecycleStatus(const JobLifecycleStatus& value) { m_lifecycleStatus = value; }

    /**
     * <p>The life cycle status for the job.</p>
     */
    inline void SetLifecycleStatus(JobLifecycleStatus&& value) { m_lifecycleStatus = std::move(value); }

    /**
     * <p>The life cycle status for the job.</p>
     */
    inline GetJobResult& WithLifecycleStatus(const JobLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}

    /**
     * <p>The life cycle status for the job.</p>
     */
    inline GetJobResult& WithLifecycleStatus(JobLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}


    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline const Aws::String& GetLifecycleStatusMessage() const{ return m_lifecycleStatusMessage; }

    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline void SetLifecycleStatusMessage(const Aws::String& value) { m_lifecycleStatusMessage = value; }

    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline void SetLifecycleStatusMessage(Aws::String&& value) { m_lifecycleStatusMessage = std::move(value); }

    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline void SetLifecycleStatusMessage(const char* value) { m_lifecycleStatusMessage.assign(value); }

    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline GetJobResult& WithLifecycleStatusMessage(const Aws::String& value) { SetLifecycleStatusMessage(value); return *this;}

    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline GetJobResult& WithLifecycleStatusMessage(Aws::String&& value) { SetLifecycleStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message that communicates the status of the life cycle for the job.</p>
     */
    inline GetJobResult& WithLifecycleStatusMessage(const char* value) { SetLifecycleStatusMessage(value); return *this;}


    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline int GetMaxFailedTasksCount() const{ return m_maxFailedTasksCount; }

    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline void SetMaxFailedTasksCount(int value) { m_maxFailedTasksCount = value; }

    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline GetJobResult& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}


    /**
     * <p>The maximum number of retries per failed tasks.</p>
     */
    inline int GetMaxRetriesPerTask() const{ return m_maxRetriesPerTask; }

    /**
     * <p>The maximum number of retries per failed tasks.</p>
     */
    inline void SetMaxRetriesPerTask(int value) { m_maxRetriesPerTask = value; }

    /**
     * <p>The maximum number of retries per failed tasks.</p>
     */
    inline GetJobResult& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}


    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline GetJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline GetJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline GetJobResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The parameters for the job.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, JobParameter>& value) { m_parameters = value; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, JobParameter>&& value) { m_parameters = std::move(value); }

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& WithParameters(const Aws::Map<Aws::String, JobParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& WithParameters(Aws::Map<Aws::String, JobParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& AddParameters(const Aws::String& key, const JobParameter& value) { m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& AddParameters(Aws::String&& key, const JobParameter& value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& AddParameters(const Aws::String& key, JobParameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& AddParameters(Aws::String&& key, JobParameter&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& AddParameters(const char* key, JobParameter&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline GetJobResult& AddParameters(const char* key, const JobParameter& value) { m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The job priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The job priority.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The job priority.</p>
     */
    inline GetJobResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetJobResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetJobResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }

    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileId = value; }

    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileId = std::move(value); }

    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline void SetStorageProfileId(const char* value) { m_storageProfileId.assign(value); }

    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline GetJobResult& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}

    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline GetJobResult& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}

    /**
     * <p>The storage profile ID associated with the job.</p>
     */
    inline GetJobResult& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}


    /**
     * <p>The task status with which the job started.</p>
     */
    inline const JobTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }

    /**
     * <p>The task status with which the job started.</p>
     */
    inline void SetTargetTaskRunStatus(const JobTargetTaskRunStatus& value) { m_targetTaskRunStatus = value; }

    /**
     * <p>The task status with which the job started.</p>
     */
    inline void SetTargetTaskRunStatus(JobTargetTaskRunStatus&& value) { m_targetTaskRunStatus = std::move(value); }

    /**
     * <p>The task status with which the job started.</p>
     */
    inline GetJobResult& WithTargetTaskRunStatus(const JobTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}

    /**
     * <p>The task status with which the job started.</p>
     */
    inline GetJobResult& WithTargetTaskRunStatus(JobTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>The task run status for the job.</p>
     */
    inline const TaskRunStatus& GetTaskRunStatus() const{ return m_taskRunStatus; }

    /**
     * <p>The task run status for the job.</p>
     */
    inline void SetTaskRunStatus(const TaskRunStatus& value) { m_taskRunStatus = value; }

    /**
     * <p>The task run status for the job.</p>
     */
    inline void SetTaskRunStatus(TaskRunStatus&& value) { m_taskRunStatus = std::move(value); }

    /**
     * <p>The task run status for the job.</p>
     */
    inline GetJobResult& WithTaskRunStatus(const TaskRunStatus& value) { SetTaskRunStatus(value); return *this;}

    /**
     * <p>The task run status for the job.</p>
     */
    inline GetJobResult& WithTaskRunStatus(TaskRunStatus&& value) { SetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline const Aws::Map<TaskRunStatus, int>& GetTaskRunStatusCounts() const{ return m_taskRunStatusCounts; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline void SetTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { m_taskRunStatusCounts = value; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline void SetTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { m_taskRunStatusCounts = std::move(value); }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetJobResult& WithTaskRunStatusCounts(const Aws::Map<TaskRunStatus, int>& value) { SetTaskRunStatusCounts(value); return *this;}

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetJobResult& WithTaskRunStatusCounts(Aws::Map<TaskRunStatus, int>&& value) { SetTaskRunStatusCounts(std::move(value)); return *this;}

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetJobResult& AddTaskRunStatusCounts(const TaskRunStatus& key, int value) { m_taskRunStatusCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of tasks running on the job.</p>
     */
    inline GetJobResult& AddTaskRunStatusCounts(TaskRunStatus&& key, int value) { m_taskRunStatusCounts.emplace(std::move(key), value); return *this; }


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetJobResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetJobResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetJobResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetJobResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetJobResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Attachments m_attachments;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::Utils::DateTime m_endedAt;

    Aws::String m_jobId;

    JobLifecycleStatus m_lifecycleStatus;

    Aws::String m_lifecycleStatusMessage;

    int m_maxFailedTasksCount;

    int m_maxRetriesPerTask;

    Aws::String m_name;

    Aws::Map<Aws::String, JobParameter> m_parameters;

    int m_priority;

    Aws::Utils::DateTime m_startedAt;

    Aws::String m_storageProfileId;

    JobTargetTaskRunStatus m_targetTaskRunStatus;

    TaskRunStatus m_taskRunStatus;

    Aws::Map<TaskRunStatus, int> m_taskRunStatusCounts;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
