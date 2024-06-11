﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ExecutionEngineConfig.h>
#include <aws/elasticmapreduce/model/NotebookExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/NotebookS3LocationForOutput.h>
#include <aws/elasticmapreduce/model/OutputNotebookS3LocationForOutput.h>
#include <aws/elasticmapreduce/model/OutputNotebookFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elasticmapreduce/model/Tag.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A notebook execution. An execution is a specific instance that an Amazon EMR
   * Notebook is run using the <code>StartNotebookExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/NotebookExecution">AWS
   * API Reference</a></p>
   */
  class NotebookExecution
  {
  public:
    AWS_EMR_API NotebookExecution();
    AWS_EMR_API NotebookExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API NotebookExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const{ return m_notebookExecutionId; }
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }
    inline void SetNotebookExecutionId(const Aws::String& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = value; }
    inline void SetNotebookExecutionId(Aws::String&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::move(value); }
    inline void SetNotebookExecutionId(const char* value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId.assign(value); }
    inline NotebookExecution& WithNotebookExecutionId(const Aws::String& value) { SetNotebookExecutionId(value); return *this;}
    inline NotebookExecution& WithNotebookExecutionId(Aws::String&& value) { SetNotebookExecutionId(std::move(value)); return *this;}
    inline NotebookExecution& WithNotebookExecutionId(const char* value) { SetNotebookExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon EMR Notebook that is used for the
     * notebook execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }
    inline NotebookExecution& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}
    inline NotebookExecution& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}
    inline NotebookExecution& WithEditorId(const char* value) { SetEditorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution engine, such as an Amazon EMR cluster, used to run the Amazon
     * EMR notebook and perform the notebook execution.</p>
     */
    inline const ExecutionEngineConfig& GetExecutionEngine() const{ return m_executionEngine; }
    inline bool ExecutionEngineHasBeenSet() const { return m_executionEngineHasBeenSet; }
    inline void SetExecutionEngine(const ExecutionEngineConfig& value) { m_executionEngineHasBeenSet = true; m_executionEngine = value; }
    inline void SetExecutionEngine(ExecutionEngineConfig&& value) { m_executionEngineHasBeenSet = true; m_executionEngine = std::move(value); }
    inline NotebookExecution& WithExecutionEngine(const ExecutionEngineConfig& value) { SetExecutionEngine(value); return *this;}
    inline NotebookExecution& WithExecutionEngine(ExecutionEngineConfig&& value) { SetExecutionEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const{ return m_notebookExecutionName; }
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }
    inline void SetNotebookExecutionName(const Aws::String& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = value; }
    inline void SetNotebookExecutionName(Aws::String&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::move(value); }
    inline void SetNotebookExecutionName(const char* value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName.assign(value); }
    inline NotebookExecution& WithNotebookExecutionName(const Aws::String& value) { SetNotebookExecutionName(value); return *this;}
    inline NotebookExecution& WithNotebookExecutionName(Aws::String&& value) { SetNotebookExecutionName(std::move(value)); return *this;}
    inline NotebookExecution& WithNotebookExecutionName(const char* value) { SetNotebookExecutionName(value); return *this;}
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
    inline NotebookExecution& WithNotebookParams(const Aws::String& value) { SetNotebookParams(value); return *this;}
    inline NotebookExecution& WithNotebookParams(Aws::String&& value) { SetNotebookParams(std::move(value)); return *this;}
    inline NotebookExecution& WithNotebookParams(const char* value) { SetNotebookParams(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notebook execution.</p> <ul> <li> <p>
     * <code>START_PENDING</code> indicates that the cluster has received the execution
     * request but execution has not begun.</p> </li> <li> <p> <code>STARTING</code>
     * indicates that the execution is starting on the cluster.</p> </li> <li> <p>
     * <code>RUNNING</code> indicates that the execution is being processed by the
     * cluster.</p> </li> <li> <p> <code>FINISHING</code> indicates that execution
     * processing is in the final stages.</p> </li> <li> <p> <code>FINISHED</code>
     * indicates that the execution has completed without error.</p> </li> <li> <p>
     * <code>FAILING</code> indicates that the execution is failing and will not finish
     * successfully.</p> </li> <li> <p> <code>FAILED</code> indicates that the
     * execution failed.</p> </li> <li> <p> <code>STOP_PENDING</code> indicates that
     * the cluster has received a <code>StopNotebookExecution</code> request and the
     * stop is pending.</p> </li> <li> <p> <code>STOPPING</code> indicates that the
     * cluster is in the process of stopping the execution as a result of a
     * <code>StopNotebookExecution</code> request.</p> </li> <li> <p>
     * <code>STOPPED</code> indicates that the execution stopped because of a
     * <code>StopNotebookExecution</code> request.</p> </li> </ul>
     */
    inline const NotebookExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NotebookExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NotebookExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NotebookExecution& WithStatus(const NotebookExecutionStatus& value) { SetStatus(value); return *this;}
    inline NotebookExecution& WithStatus(NotebookExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline NotebookExecution& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline NotebookExecution& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline NotebookExecution& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline NotebookExecution& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline NotebookExecution& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline NotebookExecution& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline NotebookExecution& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline const Aws::String& GetOutputNotebookURI() const{ return m_outputNotebookURI; }
    inline bool OutputNotebookURIHasBeenSet() const { return m_outputNotebookURIHasBeenSet; }
    inline void SetOutputNotebookURI(const Aws::String& value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI = value; }
    inline void SetOutputNotebookURI(Aws::String&& value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI = std::move(value); }
    inline void SetOutputNotebookURI(const char* value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI.assign(value); }
    inline NotebookExecution& WithOutputNotebookURI(const Aws::String& value) { SetOutputNotebookURI(value); return *this;}
    inline NotebookExecution& WithOutputNotebookURI(Aws::String&& value) { SetOutputNotebookURI(std::move(value)); return *this;}
    inline NotebookExecution& WithOutputNotebookURI(const char* value) { SetOutputNotebookURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const{ return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    inline void SetLastStateChangeReason(const Aws::String& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }
    inline void SetLastStateChangeReason(Aws::String&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::move(value); }
    inline void SetLastStateChangeReason(const char* value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason.assign(value); }
    inline NotebookExecution& WithLastStateChangeReason(const Aws::String& value) { SetLastStateChangeReason(value); return *this;}
    inline NotebookExecution& WithLastStateChangeReason(Aws::String&& value) { SetLastStateChangeReason(std::move(value)); return *this;}
    inline NotebookExecution& WithLastStateChangeReason(const char* value) { SetLastStateChangeReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon EC2 security group associated with the
     * Amazon EMR Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * Amazon EC2 Security Groups for Amazon EMR Notebooks</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline const Aws::String& GetNotebookInstanceSecurityGroupId() const{ return m_notebookInstanceSecurityGroupId; }
    inline bool NotebookInstanceSecurityGroupIdHasBeenSet() const { return m_notebookInstanceSecurityGroupIdHasBeenSet; }
    inline void SetNotebookInstanceSecurityGroupId(const Aws::String& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = value; }
    inline void SetNotebookInstanceSecurityGroupId(Aws::String&& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = std::move(value); }
    inline void SetNotebookInstanceSecurityGroupId(const char* value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId.assign(value); }
    inline NotebookExecution& WithNotebookInstanceSecurityGroupId(const Aws::String& value) { SetNotebookInstanceSecurityGroupId(value); return *this;}
    inline NotebookExecution& WithNotebookInstanceSecurityGroupId(Aws::String&& value) { SetNotebookInstanceSecurityGroupId(std::move(value)); return *this;}
    inline NotebookExecution& WithNotebookInstanceSecurityGroupId(const char* value) { SetNotebookInstanceSecurityGroupId(value); return *this;}
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
    inline NotebookExecution& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline NotebookExecution& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline NotebookExecution& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline NotebookExecution& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location that stores the notebook execution input.</p>
     */
    inline const NotebookS3LocationForOutput& GetNotebookS3Location() const{ return m_notebookS3Location; }
    inline bool NotebookS3LocationHasBeenSet() const { return m_notebookS3LocationHasBeenSet; }
    inline void SetNotebookS3Location(const NotebookS3LocationForOutput& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = value; }
    inline void SetNotebookS3Location(NotebookS3LocationForOutput&& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = std::move(value); }
    inline NotebookExecution& WithNotebookS3Location(const NotebookS3LocationForOutput& value) { SetNotebookS3Location(value); return *this;}
    inline NotebookExecution& WithNotebookS3Location(NotebookS3LocationForOutput&& value) { SetNotebookS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location for the notebook execution output.</p>
     */
    inline const OutputNotebookS3LocationForOutput& GetOutputNotebookS3Location() const{ return m_outputNotebookS3Location; }
    inline bool OutputNotebookS3LocationHasBeenSet() const { return m_outputNotebookS3LocationHasBeenSet; }
    inline void SetOutputNotebookS3Location(const OutputNotebookS3LocationForOutput& value) { m_outputNotebookS3LocationHasBeenSet = true; m_outputNotebookS3Location = value; }
    inline void SetOutputNotebookS3Location(OutputNotebookS3LocationForOutput&& value) { m_outputNotebookS3LocationHasBeenSet = true; m_outputNotebookS3Location = std::move(value); }
    inline NotebookExecution& WithOutputNotebookS3Location(const OutputNotebookS3LocationForOutput& value) { SetOutputNotebookS3Location(value); return *this;}
    inline NotebookExecution& WithOutputNotebookS3Location(OutputNotebookS3LocationForOutput&& value) { SetOutputNotebookS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the notebook execution.</p>
     */
    inline const OutputNotebookFormat& GetOutputNotebookFormat() const{ return m_outputNotebookFormat; }
    inline bool OutputNotebookFormatHasBeenSet() const { return m_outputNotebookFormatHasBeenSet; }
    inline void SetOutputNotebookFormat(const OutputNotebookFormat& value) { m_outputNotebookFormatHasBeenSet = true; m_outputNotebookFormat = value; }
    inline void SetOutputNotebookFormat(OutputNotebookFormat&& value) { m_outputNotebookFormatHasBeenSet = true; m_outputNotebookFormat = std::move(value); }
    inline NotebookExecution& WithOutputNotebookFormat(const OutputNotebookFormat& value) { SetOutputNotebookFormat(value); return *this;}
    inline NotebookExecution& WithOutputNotebookFormat(OutputNotebookFormat&& value) { SetOutputNotebookFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables associated with the notebook execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline NotebookExecution& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline NotebookExecution& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline NotebookExecution& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline NotebookExecution& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline NotebookExecution& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline NotebookExecution& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline NotebookExecution& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline NotebookExecution& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline NotebookExecution& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_notebookExecutionId;
    bool m_notebookExecutionIdHasBeenSet = false;

    Aws::String m_editorId;
    bool m_editorIdHasBeenSet = false;

    ExecutionEngineConfig m_executionEngine;
    bool m_executionEngineHasBeenSet = false;

    Aws::String m_notebookExecutionName;
    bool m_notebookExecutionNameHasBeenSet = false;

    Aws::String m_notebookParams;
    bool m_notebookParamsHasBeenSet = false;

    NotebookExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_outputNotebookURI;
    bool m_outputNotebookURIHasBeenSet = false;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet = false;

    Aws::String m_notebookInstanceSecurityGroupId;
    bool m_notebookInstanceSecurityGroupIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    NotebookS3LocationForOutput m_notebookS3Location;
    bool m_notebookS3LocationHasBeenSet = false;

    OutputNotebookS3LocationForOutput m_outputNotebookS3Location;
    bool m_outputNotebookS3LocationHasBeenSet = false;

    OutputNotebookFormat m_outputNotebookFormat;
    bool m_outputNotebookFormatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
