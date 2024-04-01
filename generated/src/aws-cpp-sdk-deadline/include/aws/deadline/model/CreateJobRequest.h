/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/deadline/model/Attachments.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/CreateJobTargetTaskRunStatus.h>
#include <aws/deadline/model/JobTemplateType.h>
#include <aws/deadline/model/JobParameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline const Attachments& GetAttachments() const{ return m_attachments; }

    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline void SetAttachments(const Attachments& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline void SetAttachments(Attachments&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline CreateJobRequest& WithAttachments(const Attachments& value) { SetAttachments(value); return *this;}

    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline CreateJobRequest& WithAttachments(Attachments&& value) { SetAttachments(std::move(value)); return *this;}


    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline CreateJobRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline CreateJobRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline CreateJobRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


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
    inline CreateJobRequest& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}


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
    inline CreateJobRequest& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}


    /**
     * <p>The parameters for the job.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, JobParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, JobParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& WithParameters(const Aws::Map<Aws::String, JobParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& WithParameters(Aws::Map<Aws::String, JobParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& AddParameters(const Aws::String& key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& AddParameters(Aws::String&& key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& AddParameters(const Aws::String& key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& AddParameters(Aws::String&& key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& AddParameters(const char* key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for the job.</p>
     */
    inline CreateJobRequest& AddParameters(const char* key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The priority of the job on a scale of 1 to 100. The highest priority is
     * 1.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the job on a scale of 1 to 100. The highest priority is
     * 1.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the job on a scale of 1 to 100. The highest priority is
     * 1.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the job on a scale of 1 to 100. The highest priority is
     * 1.</p>
     */
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline CreateJobRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline CreateJobRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}

    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline CreateJobRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}


    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = value; }

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::move(value); }

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline void SetStorageProfileId(const char* value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId.assign(value); }

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline CreateJobRequest& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline CreateJobRequest& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}

    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline CreateJobRequest& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}


    /**
     * <p>The initial status of the job's tasks when they are created. Tasks that are
     * created with a <code>SUSPENDED</code> status will not run until you update their
     * status.</p>
     */
    inline const CreateJobTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }

    /**
     * <p>The initial status of the job's tasks when they are created. Tasks that are
     * created with a <code>SUSPENDED</code> status will not run until you update their
     * status.</p>
     */
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }

    /**
     * <p>The initial status of the job's tasks when they are created. Tasks that are
     * created with a <code>SUSPENDED</code> status will not run until you update their
     * status.</p>
     */
    inline void SetTargetTaskRunStatus(const CreateJobTargetTaskRunStatus& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }

    /**
     * <p>The initial status of the job's tasks when they are created. Tasks that are
     * created with a <code>SUSPENDED</code> status will not run until you update their
     * status.</p>
     */
    inline void SetTargetTaskRunStatus(CreateJobTargetTaskRunStatus&& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = std::move(value); }

    /**
     * <p>The initial status of the job's tasks when they are created. Tasks that are
     * created with a <code>SUSPENDED</code> status will not run until you update their
     * status.</p>
     */
    inline CreateJobRequest& WithTargetTaskRunStatus(const CreateJobTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}

    /**
     * <p>The initial status of the job's tasks when they are created. Tasks that are
     * created with a <code>SUSPENDED</code> status will not run until you update their
     * status.</p>
     */
    inline CreateJobRequest& WithTargetTaskRunStatus(CreateJobTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}


    /**
     * <p>The job template to use for this job.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The job template to use for this job.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The job template to use for this job.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The job template to use for this job.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The job template to use for this job.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The job template to use for this job.</p>
     */
    inline CreateJobRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The job template to use for this job.</p>
     */
    inline CreateJobRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The job template to use for this job.</p>
     */
    inline CreateJobRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>The file type for the job template.</p>
     */
    inline const JobTemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The file type for the job template.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The file type for the job template.</p>
     */
    inline void SetTemplateType(const JobTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The file type for the job template.</p>
     */
    inline void SetTemplateType(JobTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The file type for the job template.</p>
     */
    inline CreateJobRequest& WithTemplateType(const JobTemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The file type for the job template.</p>
     */
    inline CreateJobRequest& WithTemplateType(JobTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}

  private:

    Attachments m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    int m_maxFailedTasksCount;
    bool m_maxFailedTasksCountHasBeenSet = false;

    int m_maxRetriesPerTask;
    bool m_maxRetriesPerTaskHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    CreateJobTargetTaskRunStatus m_targetTaskRunStatus;
    bool m_targetTaskRunStatusHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    JobTemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
