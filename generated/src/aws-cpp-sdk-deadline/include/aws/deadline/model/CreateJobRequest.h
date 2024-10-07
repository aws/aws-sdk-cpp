/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobTemplateType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/Attachments.h>
#include <aws/deadline/model/CreateJobTargetTaskRunStatus.h>
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


    ///@{
    /**
     * <p>The farm ID of the farm to connect to the job.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline CreateJobRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline CreateJobRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline CreateJobRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the queue that the job is submitted to.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline CreateJobRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline CreateJobRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline CreateJobRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job template to use for this job.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }
    inline CreateJobRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline CreateJobRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline CreateJobRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type for the job template.</p>
     */
    inline const JobTemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const JobTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(JobTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline CreateJobRequest& WithTemplateType(const JobTemplateType& value) { SetTemplateType(value); return *this;}
    inline CreateJobRequest& WithTemplateType(JobTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the job on a scale of 0 to 100. The highest priority (first
     * scheduled) is 100. When two jobs have the same priority, the oldest job is
     * scheduled first.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the job.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, JobParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, JobParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CreateJobRequest& WithParameters(const Aws::Map<Aws::String, JobParameter>& value) { SetParameters(value); return *this;}
    inline CreateJobRequest& WithParameters(Aws::Map<Aws::String, JobParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline CreateJobRequest& AddParameters(const Aws::String& key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline CreateJobRequest& AddParameters(Aws::String&& key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddParameters(const Aws::String& key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddParameters(Aws::String&& key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateJobRequest& AddParameters(const char* key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddParameters(const char* key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attachments for the job. Attach files required for the job to run to a
     * render job.</p>
     */
    inline const Attachments& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Attachments& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Attachments&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline CreateJobRequest& WithAttachments(const Attachments& value) { SetAttachments(value); return *this;}
    inline CreateJobRequest& WithAttachments(Attachments&& value) { SetAttachments(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage profile ID for the storage profile to connect to the job.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = value; }
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::move(value); }
    inline void SetStorageProfileId(const char* value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId.assign(value); }
    inline CreateJobRequest& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}
    inline CreateJobRequest& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}
    inline CreateJobRequest& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial job status when it is created. Jobs that are created with a
     * <code>SUSPENDED</code> status will not run until manually requeued.</p>
     */
    inline const CreateJobTargetTaskRunStatus& GetTargetTaskRunStatus() const{ return m_targetTaskRunStatus; }
    inline bool TargetTaskRunStatusHasBeenSet() const { return m_targetTaskRunStatusHasBeenSet; }
    inline void SetTargetTaskRunStatus(const CreateJobTargetTaskRunStatus& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = value; }
    inline void SetTargetTaskRunStatus(CreateJobTargetTaskRunStatus&& value) { m_targetTaskRunStatusHasBeenSet = true; m_targetTaskRunStatus = std::move(value); }
    inline CreateJobRequest& WithTargetTaskRunStatus(const CreateJobTargetTaskRunStatus& value) { SetTargetTaskRunStatus(value); return *this;}
    inline CreateJobRequest& WithTargetTaskRunStatus(CreateJobTargetTaskRunStatus&& value) { SetTargetTaskRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of task failures before the job stops running and is marked as
     * <code>FAILED</code>.</p>
     */
    inline int GetMaxFailedTasksCount() const{ return m_maxFailedTasksCount; }
    inline bool MaxFailedTasksCountHasBeenSet() const { return m_maxFailedTasksCountHasBeenSet; }
    inline void SetMaxFailedTasksCount(int value) { m_maxFailedTasksCountHasBeenSet = true; m_maxFailedTasksCount = value; }
    inline CreateJobRequest& WithMaxFailedTasksCount(int value) { SetMaxFailedTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of retries for each task.</p>
     */
    inline int GetMaxRetriesPerTask() const{ return m_maxRetriesPerTask; }
    inline bool MaxRetriesPerTaskHasBeenSet() const { return m_maxRetriesPerTaskHasBeenSet; }
    inline void SetMaxRetriesPerTask(int value) { m_maxRetriesPerTaskHasBeenSet = true; m_maxRetriesPerTask = value; }
    inline CreateJobRequest& WithMaxRetriesPerTask(int value) { SetMaxRetriesPerTask(value); return *this;}
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
    inline CreateJobRequest& WithSourceJobId(const Aws::String& value) { SetSourceJobId(value); return *this;}
    inline CreateJobRequest& WithSourceJobId(Aws::String&& value) { SetSourceJobId(std::move(value)); return *this;}
    inline CreateJobRequest& WithSourceJobId(const char* value) { SetSourceJobId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;

    JobTemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Attachments m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    CreateJobTargetTaskRunStatus m_targetTaskRunStatus;
    bool m_targetTaskRunStatusHasBeenSet = false;

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
