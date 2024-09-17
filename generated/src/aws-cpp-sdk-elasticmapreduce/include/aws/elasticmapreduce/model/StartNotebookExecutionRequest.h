/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ExecutionEngineConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/NotebookS3LocationFromInput.h>
#include <aws/elasticmapreduce/model/OutputNotebookS3LocationFromInput.h>
#include <aws/elasticmapreduce/model/OutputNotebookFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class StartNotebookExecutionRequest : public EMRRequest
  {
  public:
    AWS_EMR_API StartNotebookExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartNotebookExecution"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon EMR Notebook to use for notebook
     * execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }
    inline StartNotebookExecutionRequest& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}
    inline StartNotebookExecutionRequest& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& WithEditorId(const char* value) { SetEditorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the Amazon EMR Notebook. For example, if you specify a
     * path of <code>s3://MyBucket/MyNotebooks</code> when you create an Amazon EMR
     * Notebook for a notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code>
     * (the <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }
    inline StartNotebookExecutionRequest& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}
    inline StartNotebookExecutionRequest& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const{ return m_notebookExecutionName; }
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }
    inline void SetNotebookExecutionName(const Aws::String& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = value; }
    inline void SetNotebookExecutionName(Aws::String&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::move(value); }
    inline void SetNotebookExecutionName(const char* value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName.assign(value); }
    inline StartNotebookExecutionRequest& WithNotebookExecutionName(const Aws::String& value) { SetNotebookExecutionName(value); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookExecutionName(Aws::String&& value) { SetNotebookExecutionName(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookExecutionName(const char* value) { SetNotebookExecutionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters in JSON format passed to the Amazon EMR Notebook at runtime
     * for execution.</p>
     */
    inline const Aws::String& GetNotebookParams() const{ return m_notebookParams; }
    inline bool NotebookParamsHasBeenSet() const { return m_notebookParamsHasBeenSet; }
    inline void SetNotebookParams(const Aws::String& value) { m_notebookParamsHasBeenSet = true; m_notebookParams = value; }
    inline void SetNotebookParams(Aws::String&& value) { m_notebookParamsHasBeenSet = true; m_notebookParams = std::move(value); }
    inline void SetNotebookParams(const char* value) { m_notebookParamsHasBeenSet = true; m_notebookParams.assign(value); }
    inline StartNotebookExecutionRequest& WithNotebookParams(const Aws::String& value) { SetNotebookParams(value); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookParams(Aws::String&& value) { SetNotebookParams(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookParams(const char* value) { SetNotebookParams(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline const ExecutionEngineConfig& GetExecutionEngine() const{ return m_executionEngine; }
    inline bool ExecutionEngineHasBeenSet() const { return m_executionEngineHasBeenSet; }
    inline void SetExecutionEngine(const ExecutionEngineConfig& value) { m_executionEngineHasBeenSet = true; m_executionEngine = value; }
    inline void SetExecutionEngine(ExecutionEngineConfig&& value) { m_executionEngineHasBeenSet = true; m_executionEngine = std::move(value); }
    inline StartNotebookExecutionRequest& WithExecutionEngine(const ExecutionEngineConfig& value) { SetExecutionEngine(value); return *this;}
    inline StartNotebookExecutionRequest& WithExecutionEngine(ExecutionEngineConfig&& value) { SetExecutionEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the Amazon EMR role) for the notebook execution.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline StartNotebookExecutionRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline StartNotebookExecutionRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * Amazon EMR Notebook for this notebook execution.</p>
     */
    inline const Aws::String& GetNotebookInstanceSecurityGroupId() const{ return m_notebookInstanceSecurityGroupId; }
    inline bool NotebookInstanceSecurityGroupIdHasBeenSet() const { return m_notebookInstanceSecurityGroupIdHasBeenSet; }
    inline void SetNotebookInstanceSecurityGroupId(const Aws::String& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = value; }
    inline void SetNotebookInstanceSecurityGroupId(Aws::String&& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = std::move(value); }
    inline void SetNotebookInstanceSecurityGroupId(const char* value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId.assign(value); }
    inline StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(const Aws::String& value) { SetNotebookInstanceSecurityGroupId(value); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(Aws::String&& value) { SetNotebookInstanceSecurityGroupId(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(const char* value) { SetNotebookInstanceSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartNotebookExecutionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartNotebookExecutionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartNotebookExecutionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location for the notebook execution input.</p>
     */
    inline const NotebookS3LocationFromInput& GetNotebookS3Location() const{ return m_notebookS3Location; }
    inline bool NotebookS3LocationHasBeenSet() const { return m_notebookS3LocationHasBeenSet; }
    inline void SetNotebookS3Location(const NotebookS3LocationFromInput& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = value; }
    inline void SetNotebookS3Location(NotebookS3LocationFromInput&& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = std::move(value); }
    inline StartNotebookExecutionRequest& WithNotebookS3Location(const NotebookS3LocationFromInput& value) { SetNotebookS3Location(value); return *this;}
    inline StartNotebookExecutionRequest& WithNotebookS3Location(NotebookS3LocationFromInput&& value) { SetNotebookS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location for the notebook execution output.</p>
     */
    inline const OutputNotebookS3LocationFromInput& GetOutputNotebookS3Location() const{ return m_outputNotebookS3Location; }
    inline bool OutputNotebookS3LocationHasBeenSet() const { return m_outputNotebookS3LocationHasBeenSet; }
    inline void SetOutputNotebookS3Location(const OutputNotebookS3LocationFromInput& value) { m_outputNotebookS3LocationHasBeenSet = true; m_outputNotebookS3Location = value; }
    inline void SetOutputNotebookS3Location(OutputNotebookS3LocationFromInput&& value) { m_outputNotebookS3LocationHasBeenSet = true; m_outputNotebookS3Location = std::move(value); }
    inline StartNotebookExecutionRequest& WithOutputNotebookS3Location(const OutputNotebookS3LocationFromInput& value) { SetOutputNotebookS3Location(value); return *this;}
    inline StartNotebookExecutionRequest& WithOutputNotebookS3Location(OutputNotebookS3LocationFromInput&& value) { SetOutputNotebookS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the notebook execution.</p>
     */
    inline const OutputNotebookFormat& GetOutputNotebookFormat() const{ return m_outputNotebookFormat; }
    inline bool OutputNotebookFormatHasBeenSet() const { return m_outputNotebookFormatHasBeenSet; }
    inline void SetOutputNotebookFormat(const OutputNotebookFormat& value) { m_outputNotebookFormatHasBeenSet = true; m_outputNotebookFormat = value; }
    inline void SetOutputNotebookFormat(OutputNotebookFormat&& value) { m_outputNotebookFormatHasBeenSet = true; m_outputNotebookFormat = std::move(value); }
    inline StartNotebookExecutionRequest& WithOutputNotebookFormat(const OutputNotebookFormat& value) { SetOutputNotebookFormat(value); return *this;}
    inline StartNotebookExecutionRequest& WithOutputNotebookFormat(OutputNotebookFormat&& value) { SetOutputNotebookFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables associated with the notebook execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline StartNotebookExecutionRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline StartNotebookExecutionRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline StartNotebookExecutionRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_editorId;
    bool m_editorIdHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;

    Aws::String m_notebookExecutionName;
    bool m_notebookExecutionNameHasBeenSet = false;

    Aws::String m_notebookParams;
    bool m_notebookParamsHasBeenSet = false;

    ExecutionEngineConfig m_executionEngine;
    bool m_executionEngineHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::String m_notebookInstanceSecurityGroupId;
    bool m_notebookInstanceSecurityGroupIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    NotebookS3LocationFromInput m_notebookS3Location;
    bool m_notebookS3LocationHasBeenSet = false;

    OutputNotebookS3LocationFromInput m_outputNotebookS3Location;
    bool m_outputNotebookS3LocationHasBeenSet = false;

    OutputNotebookFormat m_outputNotebookFormat;
    bool m_outputNotebookFormatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
