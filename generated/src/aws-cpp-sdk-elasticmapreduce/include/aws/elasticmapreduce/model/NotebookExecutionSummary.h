/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/NotebookExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Details for a notebook execution. The details include information such as the
   * unique ID and status of the notebook execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/NotebookExecutionSummary">AWS
   * API Reference</a></p>
   */
  class NotebookExecutionSummary
  {
  public:
    AWS_EMR_API NotebookExecutionSummary();
    AWS_EMR_API NotebookExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API NotebookExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const{ return m_notebookExecutionId; }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline void SetNotebookExecutionId(const Aws::String& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = value; }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline void SetNotebookExecutionId(Aws::String&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline void SetNotebookExecutionId(const char* value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline NotebookExecutionSummary& WithNotebookExecutionId(const Aws::String& value) { SetNotebookExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline NotebookExecutionSummary& WithNotebookExecutionId(Aws::String&& value) { SetNotebookExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline NotebookExecutionSummary& WithNotebookExecutionId(const char* value) { SetNotebookExecutionId(value); return *this;}


    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline NotebookExecutionSummary& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline NotebookExecutionSummary& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline NotebookExecutionSummary& WithEditorId(const char* value) { SetEditorId(value); return *this;}


    /**
     * <p>The name of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const{ return m_notebookExecutionName; }

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(const Aws::String& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = value; }

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(Aws::String&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::move(value); }

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline void SetNotebookExecutionName(const char* value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName.assign(value); }

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline NotebookExecutionSummary& WithNotebookExecutionName(const Aws::String& value) { SetNotebookExecutionName(value); return *this;}

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline NotebookExecutionSummary& WithNotebookExecutionName(Aws::String&& value) { SetNotebookExecutionName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook execution.</p>
     */
    inline NotebookExecutionSummary& WithNotebookExecutionName(const char* value) { SetNotebookExecutionName(value); return *this;}


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
    inline NotebookExecutionSummary& WithStatus(const NotebookExecutionStatus& value) { SetStatus(value); return *this;}

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
    inline NotebookExecutionSummary& WithStatus(NotebookExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline NotebookExecutionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline NotebookExecutionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline NotebookExecutionSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline NotebookExecutionSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_notebookExecutionId;
    bool m_notebookExecutionIdHasBeenSet = false;

    Aws::String m_editorId;
    bool m_editorIdHasBeenSet = false;

    Aws::String m_notebookExecutionName;
    bool m_notebookExecutionNameHasBeenSet = false;

    NotebookExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
