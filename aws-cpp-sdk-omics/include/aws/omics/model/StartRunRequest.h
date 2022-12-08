/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/RunLogLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/WorkflowType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class StartRunRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API StartRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRun"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    /**
     * <p>A log level for the run.</p>
     */
    inline const RunLogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>A log level for the run.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>A log level for the run.</p>
     */
    inline void SetLogLevel(const RunLogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>A log level for the run.</p>
     */
    inline void SetLogLevel(RunLogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>A log level for the run.</p>
     */
    inline StartRunRequest& WithLogLevel(const RunLogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>A log level for the run.</p>
     */
    inline StartRunRequest& WithLogLevel(RunLogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * <p>A name for the run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the run.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the run.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the run.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the run.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the run.</p>
     */
    inline StartRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the run.</p>
     */
    inline StartRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the run.</p>
     */
    inline StartRunRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An output URI for the run.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }

    /**
     * <p>An output URI for the run.</p>
     */
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }

    /**
     * <p>An output URI for the run.</p>
     */
    inline void SetOutputUri(const Aws::String& value) { m_outputUriHasBeenSet = true; m_outputUri = value; }

    /**
     * <p>An output URI for the run.</p>
     */
    inline void SetOutputUri(Aws::String&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::move(value); }

    /**
     * <p>An output URI for the run.</p>
     */
    inline void SetOutputUri(const char* value) { m_outputUriHasBeenSet = true; m_outputUri.assign(value); }

    /**
     * <p>An output URI for the run.</p>
     */
    inline StartRunRequest& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}

    /**
     * <p>An output URI for the run.</p>
     */
    inline StartRunRequest& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}

    /**
     * <p>An output URI for the run.</p>
     */
    inline StartRunRequest& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}


    /**
     * <p>Parameters for the run.</p>
     */
    inline Aws::Utils::DocumentView GetParameters() const{ return m_parameters; }

    /**
     * <p>Parameters for the run.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Parameters for the run.</p>
     */
    inline void SetParameters(const Aws::Utils::Document& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Parameters for the run.</p>
     */
    inline void SetParameters(Aws::Utils::Document&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Parameters for the run.</p>
     */
    inline StartRunRequest& WithParameters(const Aws::Utils::Document& value) { SetParameters(value); return *this;}

    /**
     * <p>Parameters for the run.</p>
     */
    inline StartRunRequest& WithParameters(Aws::Utils::Document&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>A priority for the run.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>A priority for the run.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>A priority for the run.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>A priority for the run.</p>
     */
    inline StartRunRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>A request ID for the run.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>A request ID for the run.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>A request ID for the run.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>A request ID for the run.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>A request ID for the run.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>A request ID for the run.</p>
     */
    inline StartRunRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>A request ID for the run.</p>
     */
    inline StartRunRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>A request ID for the run.</p>
     */
    inline StartRunRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>A service role for the run.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>A service role for the run.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>A service role for the run.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>A service role for the run.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>A service role for the run.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>A service role for the run.</p>
     */
    inline StartRunRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>A service role for the run.</p>
     */
    inline StartRunRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>A service role for the run.</p>
     */
    inline StartRunRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The run's group ID.</p>
     */
    inline const Aws::String& GetRunGroupId() const{ return m_runGroupId; }

    /**
     * <p>The run's group ID.</p>
     */
    inline bool RunGroupIdHasBeenSet() const { return m_runGroupIdHasBeenSet; }

    /**
     * <p>The run's group ID.</p>
     */
    inline void SetRunGroupId(const Aws::String& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = value; }

    /**
     * <p>The run's group ID.</p>
     */
    inline void SetRunGroupId(Aws::String&& value) { m_runGroupIdHasBeenSet = true; m_runGroupId = std::move(value); }

    /**
     * <p>The run's group ID.</p>
     */
    inline void SetRunGroupId(const char* value) { m_runGroupIdHasBeenSet = true; m_runGroupId.assign(value); }

    /**
     * <p>The run's group ID.</p>
     */
    inline StartRunRequest& WithRunGroupId(const Aws::String& value) { SetRunGroupId(value); return *this;}

    /**
     * <p>The run's group ID.</p>
     */
    inline StartRunRequest& WithRunGroupId(Aws::String&& value) { SetRunGroupId(std::move(value)); return *this;}

    /**
     * <p>The run's group ID.</p>
     */
    inline StartRunRequest& WithRunGroupId(const char* value) { SetRunGroupId(value); return *this;}


    /**
     * <p>The run's ID.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The run's ID.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The run's ID.</p>
     */
    inline StartRunRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline StartRunRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The run's ID.</p>
     */
    inline StartRunRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>A storage capacity for the run.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>A storage capacity for the run.</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>A storage capacity for the run.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>A storage capacity for the run.</p>
     */
    inline StartRunRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    /**
     * <p>Tags for the run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the run.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags for the run.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags for the run.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the run.</p>
     */
    inline StartRunRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The run's workflow ID.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>The run's workflow ID.</p>
     */
    inline StartRunRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The run's workflow ID.</p>
     */
    inline StartRunRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The run's workflow ID.</p>
     */
    inline StartRunRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The run's workflows type.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The run's workflows type.</p>
     */
    inline bool WorkflowTypeHasBeenSet() const { return m_workflowTypeHasBeenSet; }

    /**
     * <p>The run's workflows type.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }

    /**
     * <p>The run's workflows type.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowTypeHasBeenSet = true; m_workflowType = std::move(value); }

    /**
     * <p>The run's workflows type.</p>
     */
    inline StartRunRequest& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The run's workflows type.</p>
     */
    inline StartRunRequest& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}

  private:

    RunLogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

    Aws::Utils::Document m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_runGroupId;
    bool m_runGroupIdHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    WorkflowType m_workflowType;
    bool m_workflowTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
