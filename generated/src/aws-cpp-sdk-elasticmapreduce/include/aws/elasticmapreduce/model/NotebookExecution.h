/**
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
    AWS_EMR_API NotebookExecution() = default;
    AWS_EMR_API NotebookExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API NotebookExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const { return m_notebookExecutionId; }
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }
    template<typename NotebookExecutionIdT = Aws::String>
    void SetNotebookExecutionId(NotebookExecutionIdT&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::forward<NotebookExecutionIdT>(value); }
    template<typename NotebookExecutionIdT = Aws::String>
    NotebookExecution& WithNotebookExecutionId(NotebookExecutionIdT&& value) { SetNotebookExecutionId(std::forward<NotebookExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon EMR Notebook that is used for the
     * notebook execution.</p>
     */
    inline const Aws::String& GetEditorId() const { return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    template<typename EditorIdT = Aws::String>
    void SetEditorId(EditorIdT&& value) { m_editorIdHasBeenSet = true; m_editorId = std::forward<EditorIdT>(value); }
    template<typename EditorIdT = Aws::String>
    NotebookExecution& WithEditorId(EditorIdT&& value) { SetEditorId(std::forward<EditorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution engine, such as an Amazon EMR cluster, used to run the Amazon
     * EMR notebook and perform the notebook execution.</p>
     */
    inline const ExecutionEngineConfig& GetExecutionEngine() const { return m_executionEngine; }
    inline bool ExecutionEngineHasBeenSet() const { return m_executionEngineHasBeenSet; }
    template<typename ExecutionEngineT = ExecutionEngineConfig>
    void SetExecutionEngine(ExecutionEngineT&& value) { m_executionEngineHasBeenSet = true; m_executionEngine = std::forward<ExecutionEngineT>(value); }
    template<typename ExecutionEngineT = ExecutionEngineConfig>
    NotebookExecution& WithExecutionEngine(ExecutionEngineT&& value) { SetExecutionEngine(std::forward<ExecutionEngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const { return m_notebookExecutionName; }
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }
    template<typename NotebookExecutionNameT = Aws::String>
    void SetNotebookExecutionName(NotebookExecutionNameT&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::forward<NotebookExecutionNameT>(value); }
    template<typename NotebookExecutionNameT = Aws::String>
    NotebookExecution& WithNotebookExecutionName(NotebookExecutionNameT&& value) { SetNotebookExecutionName(std::forward<NotebookExecutionNameT>(value)); return *this;}
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
    NotebookExecution& WithNotebookParams(NotebookParamsT&& value) { SetNotebookParams(std::forward<NotebookParamsT>(value)); return *this;}
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
    inline NotebookExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NotebookExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotebookExecution& WithStatus(NotebookExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    NotebookExecution& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    NotebookExecution& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    NotebookExecution& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline const Aws::String& GetOutputNotebookURI() const { return m_outputNotebookURI; }
    inline bool OutputNotebookURIHasBeenSet() const { return m_outputNotebookURIHasBeenSet; }
    template<typename OutputNotebookURIT = Aws::String>
    void SetOutputNotebookURI(OutputNotebookURIT&& value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI = std::forward<OutputNotebookURIT>(value); }
    template<typename OutputNotebookURIT = Aws::String>
    NotebookExecution& WithOutputNotebookURI(OutputNotebookURIT&& value) { SetOutputNotebookURI(std::forward<OutputNotebookURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const { return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    template<typename LastStateChangeReasonT = Aws::String>
    void SetLastStateChangeReason(LastStateChangeReasonT&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::forward<LastStateChangeReasonT>(value); }
    template<typename LastStateChangeReasonT = Aws::String>
    NotebookExecution& WithLastStateChangeReason(LastStateChangeReasonT&& value) { SetLastStateChangeReason(std::forward<LastStateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon EC2 security group associated with the
     * Amazon EMR Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * Amazon EC2 Security Groups for Amazon EMR Notebooks</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline const Aws::String& GetNotebookInstanceSecurityGroupId() const { return m_notebookInstanceSecurityGroupId; }
    inline bool NotebookInstanceSecurityGroupIdHasBeenSet() const { return m_notebookInstanceSecurityGroupIdHasBeenSet; }
    template<typename NotebookInstanceSecurityGroupIdT = Aws::String>
    void SetNotebookInstanceSecurityGroupId(NotebookInstanceSecurityGroupIdT&& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = std::forward<NotebookInstanceSecurityGroupIdT>(value); }
    template<typename NotebookInstanceSecurityGroupIdT = Aws::String>
    NotebookExecution& WithNotebookInstanceSecurityGroupId(NotebookInstanceSecurityGroupIdT&& value) { SetNotebookInstanceSecurityGroupId(std::forward<NotebookInstanceSecurityGroupIdT>(value)); return *this;}
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
    NotebookExecution& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NotebookExecution& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location that stores the notebook execution input.</p>
     */
    inline const NotebookS3LocationForOutput& GetNotebookS3Location() const { return m_notebookS3Location; }
    inline bool NotebookS3LocationHasBeenSet() const { return m_notebookS3LocationHasBeenSet; }
    template<typename NotebookS3LocationT = NotebookS3LocationForOutput>
    void SetNotebookS3Location(NotebookS3LocationT&& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = std::forward<NotebookS3LocationT>(value); }
    template<typename NotebookS3LocationT = NotebookS3LocationForOutput>
    NotebookExecution& WithNotebookS3Location(NotebookS3LocationT&& value) { SetNotebookS3Location(std::forward<NotebookS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location for the notebook execution output.</p>
     */
    inline const OutputNotebookS3LocationForOutput& GetOutputNotebookS3Location() const { return m_outputNotebookS3Location; }
    inline bool OutputNotebookS3LocationHasBeenSet() const { return m_outputNotebookS3LocationHasBeenSet; }
    template<typename OutputNotebookS3LocationT = OutputNotebookS3LocationForOutput>
    void SetOutputNotebookS3Location(OutputNotebookS3LocationT&& value) { m_outputNotebookS3LocationHasBeenSet = true; m_outputNotebookS3Location = std::forward<OutputNotebookS3LocationT>(value); }
    template<typename OutputNotebookS3LocationT = OutputNotebookS3LocationForOutput>
    NotebookExecution& WithOutputNotebookS3Location(OutputNotebookS3LocationT&& value) { SetOutputNotebookS3Location(std::forward<OutputNotebookS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format for the notebook execution.</p>
     */
    inline OutputNotebookFormat GetOutputNotebookFormat() const { return m_outputNotebookFormat; }
    inline bool OutputNotebookFormatHasBeenSet() const { return m_outputNotebookFormatHasBeenSet; }
    inline void SetOutputNotebookFormat(OutputNotebookFormat value) { m_outputNotebookFormatHasBeenSet = true; m_outputNotebookFormat = value; }
    inline NotebookExecution& WithOutputNotebookFormat(OutputNotebookFormat value) { SetOutputNotebookFormat(value); return *this;}
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
    NotebookExecution& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    NotebookExecution& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
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

    NotebookExecutionStatus m_status{NotebookExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
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

    OutputNotebookFormat m_outputNotebookFormat{OutputNotebookFormat::NOT_SET};
    bool m_outputNotebookFormatHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
