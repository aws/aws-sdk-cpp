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
   * <p>A notebook execution. An execution is a specific instance that an EMR
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


    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const{ return m_notebookExecutionId; }

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline void SetNotebookExecutionId(const Aws::String& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = value; }

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline void SetNotebookExecutionId(Aws::String&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline void SetNotebookExecutionId(const char* value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId.assign(value); }

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline NotebookExecution& WithNotebookExecutionId(const Aws::String& value) { SetNotebookExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline NotebookExecution& WithNotebookExecutionId(Aws::String&& value) { SetNotebookExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a notebook execution.</p>
     */
    inline NotebookExecution& WithNotebookExecutionId(const char* value) { SetNotebookExecutionId(value); return *this;}


    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline NotebookExecution& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline NotebookExecution& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the EMR Notebook that is used for the notebook
     * execution.</p>
     */
    inline NotebookExecution& WithEditorId(const char* value) { SetEditorId(value); return *this;}


    /**
     * <p>The execution engine, such as an EMR cluster, used to run the EMR notebook
     * and perform the notebook execution.</p>
     */
    inline const ExecutionEngineConfig& GetExecutionEngine() const{ return m_executionEngine; }

    /**
     * <p>The execution engine, such as an EMR cluster, used to run the EMR notebook
     * and perform the notebook execution.</p>
     */
    inline bool ExecutionEngineHasBeenSet() const { return m_executionEngineHasBeenSet; }

    /**
     * <p>The execution engine, such as an EMR cluster, used to run the EMR notebook
     * and perform the notebook execution.</p>
     */
    inline void SetExecutionEngine(const ExecutionEngineConfig& value) { m_executionEngineHasBeenSet = true; m_executionEngine = value; }

    /**
     * <p>The execution engine, such as an EMR cluster, used to run the EMR notebook
     * and perform the notebook execution.</p>
     */
    inline void SetExecutionEngine(ExecutionEngineConfig&& value) { m_executionEngineHasBeenSet = true; m_executionEngine = std::move(value); }

    /**
     * <p>The execution engine, such as an EMR cluster, used to run the EMR notebook
     * and perform the notebook execution.</p>
     */
    inline NotebookExecution& WithExecutionEngine(const ExecutionEngineConfig& value) { SetExecutionEngine(value); return *this;}

    /**
     * <p>The execution engine, such as an EMR cluster, used to run the EMR notebook
     * and perform the notebook execution.</p>
     */
    inline NotebookExecution& WithExecutionEngine(ExecutionEngineConfig&& value) { SetExecutionEngine(std::move(value)); return *this;}


    /**
     * <p>A name for the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const{ return m_notebookExecutionName; }

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(const Aws::String& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = value; }

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(Aws::String&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::move(value); }

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(const char* value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName.assign(value); }

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline NotebookExecution& WithNotebookExecutionName(const Aws::String& value) { SetNotebookExecutionName(value); return *this;}

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline NotebookExecution& WithNotebookExecutionName(Aws::String&& value) { SetNotebookExecutionName(std::move(value)); return *this;}

    /**
     * <p>A name for the notebook execution.</p>
     */
    inline NotebookExecution& WithNotebookExecutionName(const char* value) { SetNotebookExecutionName(value); return *this;}


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
    inline NotebookExecution& WithNotebookParams(const Aws::String& value) { SetNotebookParams(value); return *this;}

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline NotebookExecution& WithNotebookParams(Aws::String&& value) { SetNotebookParams(std::move(value)); return *this;}

    /**
     * <p>Input parameters in JSON format passed to the EMR Notebook at runtime for
     * execution.</p>
     */
    inline NotebookExecution& WithNotebookParams(const char* value) { SetNotebookParams(value); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const NotebookExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(NotebookExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline NotebookExecution& WithStatus(const NotebookExecutionStatus& value) { SetStatus(value); return *this;}

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
    inline NotebookExecution& WithStatus(NotebookExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline NotebookExecution& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline NotebookExecution& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline NotebookExecution& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when notebook execution ended.</p>
     */
    inline NotebookExecution& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline NotebookExecution& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline NotebookExecution& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook execution.</p>
     */
    inline NotebookExecution& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline const Aws::String& GetOutputNotebookURI() const{ return m_outputNotebookURI; }

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline bool OutputNotebookURIHasBeenSet() const { return m_outputNotebookURIHasBeenSet; }

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline void SetOutputNotebookURI(const Aws::String& value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI = value; }

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline void SetOutputNotebookURI(Aws::String&& value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI = std::move(value); }

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline void SetOutputNotebookURI(const char* value) { m_outputNotebookURIHasBeenSet = true; m_outputNotebookURI.assign(value); }

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline NotebookExecution& WithOutputNotebookURI(const Aws::String& value) { SetOutputNotebookURI(value); return *this;}

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline NotebookExecution& WithOutputNotebookURI(Aws::String&& value) { SetOutputNotebookURI(std::move(value)); return *this;}

    /**
     * <p>The location of the notebook execution's output file in Amazon S3.</p>
     */
    inline NotebookExecution& WithOutputNotebookURI(const char* value) { SetOutputNotebookURI(value); return *this;}


    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const{ return m_lastStateChangeReason; }

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline void SetLastStateChangeReason(const Aws::String& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline void SetLastStateChangeReason(Aws::String&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::move(value); }

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline void SetLastStateChangeReason(const char* value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason.assign(value); }

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline NotebookExecution& WithLastStateChangeReason(const Aws::String& value) { SetLastStateChangeReason(value); return *this;}

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline NotebookExecution& WithLastStateChangeReason(Aws::String&& value) { SetLastStateChangeReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the latest status change of the notebook execution.</p>
     */
    inline NotebookExecution& WithLastStateChangeReason(const char* value) { SetLastStateChangeReason(value); return *this;}


    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline const Aws::String& GetNotebookInstanceSecurityGroupId() const{ return m_notebookInstanceSecurityGroupId; }

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline bool NotebookInstanceSecurityGroupIdHasBeenSet() const { return m_notebookInstanceSecurityGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline void SetNotebookInstanceSecurityGroupId(const Aws::String& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = value; }

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline void SetNotebookInstanceSecurityGroupId(Aws::String&& value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline void SetNotebookInstanceSecurityGroupId(const char* value) { m_notebookInstanceSecurityGroupIdHasBeenSet = true; m_notebookInstanceSecurityGroupId.assign(value); }

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline NotebookExecution& WithNotebookInstanceSecurityGroupId(const Aws::String& value) { SetNotebookInstanceSecurityGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline NotebookExecution& WithNotebookInstanceSecurityGroupId(Aws::String&& value) { SetNotebookInstanceSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the EC2 security group associated with the EMR
     * Notebook instance. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-managed-notebooks-security-groups.html">Specifying
     * EC2 Security Groups for EMR Notebooks</a> in the <i>EMR Management
     * Guide</i>.</p>
     */
    inline NotebookExecution& WithNotebookInstanceSecurityGroupId(const char* value) { SetNotebookInstanceSecurityGroupId(value); return *this;}


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
    inline NotebookExecution& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline NotebookExecution& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline NotebookExecution& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags associated with a notebook execution. Tags are user-defined
     * key-value pairs that consist of a required key string with a maximum of 128
     * characters and an optional value string with a maximum of 256 characters.</p>
     */
    inline NotebookExecution& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
