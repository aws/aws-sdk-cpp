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


    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the EMR Notebook to use for notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithEditorId(const char* value) { SetEditorId(value); return *this;}


    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline StartNotebookExecutionRequest& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline StartNotebookExecutionRequest& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}

    /**
     * <p>The path and file name of the notebook file for this execution, relative to
     * the path specified for the EMR Notebook. For example, if you specify a path of
     * <code>s3://MyBucket/MyNotebooks</code> when you create an EMR Notebook for a
     * notebook with an ID of <code>e-ABCDEFGHIJK1234567890ABCD</code> (the
     * <code>EditorID</code> of this request), and you specify a
     * <code>RelativePath</code> of
     * <code>my_notebook_executions/notebook_execution.ipynb</code>, the location of
     * the file for the notebook execution is
     * <code>s3://MyBucket/MyNotebooks/e-ABCDEFGHIJK1234567890ABCD/my_notebook_executions/notebook_execution.ipynb</code>.</p>
     */
    inline StartNotebookExecutionRequest& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}


    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const{ return m_notebookExecutionName; }

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(const Aws::String& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = value; }

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(Aws::String&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::move(value); }

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(const char* value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName.assign(value); }

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookExecutionName(const Aws::String& value) { SetNotebookExecutionName(value); return *this;}

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookExecutionName(Aws::String&& value) { SetNotebookExecutionName(std::move(value)); return *this;}

    /**
     * <p>An optional name for the notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookExecutionName(const char* value) { SetNotebookExecutionName(value); return *this;}


    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline const Aws::String& GetNotebookParams() const{ return m_notebookParams; }

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline bool NotebookParamsHasBeenSet() const { return m_notebookParamsHasBeenSet; }

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline void SetNotebookParams(const Aws::String& value) { m_notebookParamsHasBeenSet = true; m_notebookParams = value; }

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline void SetNotebookParams(Aws::String&& value) { m_notebookParamsHasBeenSet = true; m_notebookParams = std::move(value); }

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline void SetNotebookParams(const char* value) { m_notebookParamsHasBeenSet = true; m_notebookParams.assign(value); }

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookParams(const Aws::String& value) { SetNotebookParams(value); return *this;}

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookParams(Aws::String&& value) { SetNotebookParams(std::move(value)); return *this;}

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookParams(const char* value) { SetNotebookParams(value); return *this;}


    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline const ExecutionEngineConfig& GetExecutionEngine() const{ return m_executionEngine; }

    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline bool ExecutionEngineHasBeenSet() const { return m_executionEngineHasBeenSet; }

    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline void SetExecutionEngine(const ExecutionEngineConfig& value) { m_executionEngineHasBeenSet = true; m_executionEngine = value; }

    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline void SetExecutionEngine(ExecutionEngineConfig&& value) { m_executionEngineHasBeenSet = true; m_executionEngine = std::move(value); }

    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline StartNotebookExecutionRequest& WithExecutionEngine(const ExecutionEngineConfig& value) { SetExecutionEngine(value); return *this;}

    /**
     * <p>Specifies the execution engine (cluster) that runs the notebook
     * execution.</p>
     */
    inline StartNotebookExecutionRequest& WithExecutionEngine(ExecutionEngineConfig&& value) { SetExecutionEngine(std::move(value)); return *this;}


    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the IAM role that is used as the service role for Amazon
     * EMR (the EMR role) for the notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline const Aws::String& GetNotebookInstanceSecurityGroupId() const{ return m_notebookInstanceSecurityGroupId; }

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline bool NotebookInstanceSecurityGroupIdHasBeenSet() const { return m_notebookInstanceSecurityGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline void SetNotebookInstanceSecurityGroupId(const Aws::String& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = value; }

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline void SetNotebookInstanceSecurityGroupId(Aws::String&& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline void SetNotebookInstanceSecurityGroupId(const char* value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId.assign(value); }

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(const Aws::String& value) { SetNotebookInstanceSecurityGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(Aws::String&& value) { SetNotebookInstanceSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon EC2 security group to associate with the
     * EMR Notebook for this notebook execution.</p>
     */
    inline StartNotebookExecutionRequest& WithNotebookInstanceSecurityGroupId(const char* value) { SetNotebookInstanceSecurityGroupId(value); return *this;}


    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline StartNotebookExecutionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline StartNotebookExecutionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline StartNotebookExecutionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline StartNotebookExecutionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
