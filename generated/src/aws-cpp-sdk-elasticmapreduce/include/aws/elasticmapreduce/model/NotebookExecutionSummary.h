/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/NotebookExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticmapreduce/model/NotebookS3LocationForOutput.h>
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


    ///@{
    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const{ return m_notebookExecutionId; }
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }
    inline void SetNotebookExecutionId(const Aws::String& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = value; }
    inline void SetNotebookExecutionId(Aws::String&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::move(value); }
    inline void SetNotebookExecutionId(const char* value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId.assign(value); }
    inline NotebookExecutionSummary& WithNotebookExecutionId(const Aws::String& value) { SetNotebookExecutionId(value); return *this;}
    inline NotebookExecutionSummary& WithNotebookExecutionId(Aws::String&& value) { SetNotebookExecutionId(std::move(value)); return *this;}
    inline NotebookExecutionSummary& WithNotebookExecutionId(const char* value) { SetNotebookExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }
    inline NotebookExecutionSummary& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}
    inline NotebookExecutionSummary& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}
    inline NotebookExecutionSummary& WithEditorId(const char* value) { SetEditorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const{ return m_notebookExecutionName; }
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }
    inline void SetNotebookExecutionName(const Aws::String& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = value; }
    inline void SetNotebookExecutionName(Aws::String&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::move(value); }
    inline void SetNotebookExecutionName(const char* value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName.assign(value); }
    inline NotebookExecutionSummary& WithNotebookExecutionName(const Aws::String& value) { SetNotebookExecutionName(value); return *this;}
    inline NotebookExecutionSummary& WithNotebookExecutionName(Aws::String&& value) { SetNotebookExecutionName(std::move(value)); return *this;}
    inline NotebookExecutionSummary& WithNotebookExecutionName(const char* value) { SetNotebookExecutionName(value); return *this;}
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
    inline NotebookExecutionSummary& WithStatus(const NotebookExecutionStatus& value) { SetStatus(value); return *this;}
    inline NotebookExecutionSummary& WithStatus(NotebookExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline NotebookExecutionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline NotebookExecutionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline NotebookExecutionSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline NotebookExecutionSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location that stores the notebook execution input.</p>
     */
    inline const NotebookS3LocationForOutput& GetNotebookS3Location() const{ return m_notebookS3Location; }
    inline bool NotebookS3LocationHasBeenSet() const { return m_notebookS3LocationHasBeenSet; }
    inline void SetNotebookS3Location(const NotebookS3LocationForOutput& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = value; }
    inline void SetNotebookS3Location(NotebookS3LocationForOutput&& value) { m_notebookS3LocationHasBeenSet = true; m_notebookS3Location = std::move(value); }
    inline NotebookExecutionSummary& WithNotebookS3Location(const NotebookS3LocationForOutput& value) { SetNotebookS3Location(value); return *this;}
    inline NotebookExecutionSummary& WithNotebookS3Location(NotebookS3LocationForOutput&& value) { SetNotebookS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the execution engine for the notebook execution.</p>
     */
    inline const Aws::String& GetExecutionEngineId() const{ return m_executionEngineId; }
    inline bool ExecutionEngineIdHasBeenSet() const { return m_executionEngineIdHasBeenSet; }
    inline void SetExecutionEngineId(const Aws::String& value) { m_executionEngineIdHasBeenSet = true; m_executionEngineId = value; }
    inline void SetExecutionEngineId(Aws::String&& value) { m_executionEngineIdHasBeenSet = true; m_executionEngineId = std::move(value); }
    inline void SetExecutionEngineId(const char* value) { m_executionEngineIdHasBeenSet = true; m_executionEngineId.assign(value); }
    inline NotebookExecutionSummary& WithExecutionEngineId(const Aws::String& value) { SetExecutionEngineId(value); return *this;}
    inline NotebookExecutionSummary& WithExecutionEngineId(Aws::String&& value) { SetExecutionEngineId(std::move(value)); return *this;}
    inline NotebookExecutionSummary& WithExecutionEngineId(const char* value) { SetExecutionEngineId(value); return *this;}
    ///@}
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

    NotebookS3LocationForOutput m_notebookS3Location;
    bool m_notebookS3LocationHasBeenSet = false;

    Aws::String m_executionEngineId;
    bool m_executionEngineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
