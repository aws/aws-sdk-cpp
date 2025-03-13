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
    AWS_EMR_API StartNotebookExecutionRequest() = default;

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
    inline const Aws::String& GetEditorId() const { return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    template<typename EditorIdT = Aws::String>
    void SetEditorId(EditorIdT&& value) { m_editorIdHasBeenSet = true; m_editorId = std::forward<EditorIdT>(value); }
    template<typename EditorIdT = Aws::String>
    StartNotebookExecutionRequest& WithEditorId(EditorIdT&& value) { SetEditorId(std::forward<EditorIdT>(value)); return *this;}
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
    inline const Aws::String& GetRelativePath() const { return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    template<typename RelativePathT = Aws::String>
    void SetRelativePath(RelativePathT&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::forward<RelativePathT>(value); }
    template<typename RelativePathT = Aws::String>
    StartNotebookExecutionRequest& WithRelativePath(RelativePathT&& value) { SetRelativePath(std::forward<RelativePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const { return m_notebookExecutionName; }
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }
    template<typename NotebookExecutionNameT = Aws::String>
    void SetNotebookExecutionName(NotebookExecutionNameT&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::forward<NotebookExecutionNameT>(value); }
    template<typename NotebookExecutionNameT = Aws::String>
    StartNotebookExecutionRequest& WithNotebookExecutionName(NotebookExecutionNameT&& value) { SetNotebookExecutionName(std::forward<NotebookExecutionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters in JSON format passed to the Amazon EMR Notebook at runtime
     * for execution.</p>
     */
    inline const Aws::String& GetNotebookParams() const { return m_notebookParams; }
    inline bool NotebookParamsHasBeenSet() const { return m_notebookParamsHasBeenSet; }
    template<typename NotebookParamsT = Aws::String>
    void SetNotebookParams(NotebookParamsT&& value) { m_notebookParamsHasBeenSet = true; m_notebookParams = std::forward<NotebookParamsT>(value); }
    template<typename NotebookParamsT = Aws::String>
    StartNotebookExecutionRequest& WithNotebookParams(NotebookParamsT&& value) { SetNotebookParams(std::forward<NotebookParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline const ExecutionEngineConfig& GetExecutionEngine() const { return m_executionEngine; }
    inline bool ExecutionEngineHasBeenSet() const { return m_executionEngineHasBeenSet; }
    template<typename ExecutionEngineT = ExecutionEngineConfig>
    void SetExecutionEngine(ExecutionEngineT&& value) { m_executionEngineHasBeenSet = true; m_executionEngine = std::forward<ExecutionEngineT>(value); }
    template<typename ExecutionEngineT = ExecutionEngineConfig>
    StartNotebookExecutionRequest& WithExecutionEngine(ExecutionEngineT&& value) { SetExecutionEngine(std::forward<ExecutionEngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the Amazon EMR role) for the notebook execution.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    StartNotebookExecutionRequest& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * Amazon EMR Notebook for this notebook execution.</p>
     */
    inline const Aws::String& GetNotebookInstanceSecurityGroupId() const { return m_notebookInstanceSecurityGroupId; }
    inline bool NotebookInstanceSecurityGroupIdHasBeenSet() const { return m_notebookInstanceSecurityGroupIdHasBeenSet; }
    template<typename NotebookInstanceSecurityGroupIdT = Aws::String>
    void SetNotebookInstanceSecurityGroupId(NotebookInstanceSecurityGroupIdT&& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = std::forward<NotebookInstanceSecurityGroupIdT>(value); }
    template<typename NotebookInstanceSecurityGroupIdT = Aws::String>
    StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(NotebookInstanceSecurityGroupIdT&& value) { SetNotebookInstanceSecurityGroupId(std::forward<NotebookInstanceSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartNotebookExecutionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartNotebookExecutionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location for the notebook execution input.</p>
     */
    inline const NotebookS3LocationFromInput& GetNotebookS3Location() const { return m_notebookS3Location; }
    inline bool NotebookS3LocationHasBeenSet() const { return m_notebookS3LocationHasBeenSet; }
    template<typename NotebookS3LocationT = NotebookS3LocationFromInput>
    void SetNotebookS3Location(NotebookS3LocationT&& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = std::forward<NotebookS3LocationT>(value); }
    template<typename NotebookS3LocationT = NotebookS3LocationFromInput>
    StartNotebookExecutionRequest& WithNotebookS3Location(NotebookS3LocationT&& value) { SetNotebookS3Location(std::forward<NotebookS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location for the notebook execution output.</p>
     */
    inline const OutputNotebookS3LocationFromInput& GetOutputNotebookS3Location() const { return m_outputNotebookS3Location; }
    inline bool OutputNotebookS3LocationHasBeenSet() const { return m_outputNotebookS3LocationHasBeenSet; }
    template<typename OutputNotebookS3LocationT = OutputNotebookS3LocationFromInput>
    void SetOutputNotebookS3Location(OutputNotebookS3LocationT&& value) { m_outputNotebookS3LocationHasBeenSet = true; m_outputNotebookS3Location = std::forward<OutputNotebookS3LocationT>(value); }
    template<typename OutputNotebookS3LocationT = OutputNotebookS3LocationFromInput>
    StartNotebookExecutionRequest& WithOutputNotebookS3Location(OutputNotebookS3LocationT&& value) { SetOutputNotebookS3Location(std::forward<OutputNotebookS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the notebook execution.</p>
     */
    inline OutputNotebookFormat GetOutputNotebookFormat() const { return m_outputNotebookFormat; }
    inline bool OutputNotebookFormatHasBeenSet() const { return m_outputNotebookFormatHasBeenSet; }
    inline void SetOutputNotebookFormat(OutputNotebookFormat value) { m_outputNotebookFormatHasBeenSet = true; m_outputNotebookFormat = value; }
    inline StartNotebookExecutionRequest& WithOutputNotebookFormat(OutputNotebookFormat value) { SetOutputNotebookFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables associated with the notebook execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    StartNotebookExecutionRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    StartNotebookExecutionRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
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

    OutputNotebookFormat m_outputNotebookFormat{OutputNotebookFormat::NOT_SET};
    bool m_outputNotebookFormatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
