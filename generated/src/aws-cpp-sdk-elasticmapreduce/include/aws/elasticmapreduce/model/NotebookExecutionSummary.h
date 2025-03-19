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
    AWS_EMR_API NotebookExecutionSummary() = default;
    AWS_EMR_API NotebookExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API NotebookExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const { return m_notebookExecutionId; }
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }
    template<typename NotebookExecutionIdT = Aws::String>
    void SetNotebookExecutionId(NotebookExecutionIdT&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::forward<NotebookExecutionIdT>(value); }
    template<typename NotebookExecutionIdT = Aws::String>
    NotebookExecutionSummary& WithNotebookExecutionId(NotebookExecutionIdT&& value) { SetNotebookExecutionId(std::forward<NotebookExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the editor associated with the notebook
     * execution.</p>
     */
    inline const Aws::String& GetEditorId() const { return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    template<typename EditorIdT = Aws::String>
    void SetEditorId(EditorIdT&& value) { m_editorIdHasBeenSet = true; m_editorId = std::forward<EditorIdT>(value); }
    template<typename EditorIdT = Aws::String>
    NotebookExecutionSummary& WithEditorId(EditorIdT&& value) { SetEditorId(std::forward<EditorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionName() const { return m_notebookExecutionName; }
    inline bool NotebookExecutionNameHasBeenSet() const { return m_notebookExecutionNameHasBeenSet; }
    template<typename NotebookExecutionNameT = Aws::String>
    void SetNotebookExecutionName(NotebookExecutionNameT&& value) { m_notebookExecutionNameHasBeenSet = true; m_notebookExecutionName = std::forward<NotebookExecutionNameT>(value); }
    template<typename NotebookExecutionNameT = Aws::String>
    NotebookExecutionSummary& WithNotebookExecutionName(NotebookExecutionNameT&& value) { SetNotebookExecutionName(std::forward<NotebookExecutionNameT>(value)); return *this;}
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
    inline NotebookExecutionSummary& WithStatus(NotebookExecutionStatus value) { SetStatus(value); return *this;}
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
    NotebookExecutionSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when notebook execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    NotebookExecutionSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
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
    NotebookExecutionSummary& WithNotebookS3Location(NotebookS3LocationT&& value) { SetNotebookS3Location(std::forward<NotebookS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the execution engine for the notebook execution.</p>
     */
    inline const Aws::String& GetExecutionEngineId() const { return m_executionEngineId; }
    inline bool ExecutionEngineIdHasBeenSet() const { return m_executionEngineIdHasBeenSet; }
    template<typename ExecutionEngineIdT = Aws::String>
    void SetExecutionEngineId(ExecutionEngineIdT&& value) { m_executionEngineIdHasBeenSet = true; m_executionEngineId = std::forward<ExecutionEngineIdT>(value); }
    template<typename ExecutionEngineIdT = Aws::String>
    NotebookExecutionSummary& WithExecutionEngineId(ExecutionEngineIdT&& value) { SetExecutionEngineId(std::forward<ExecutionEngineIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookExecutionId;
    bool m_notebookExecutionIdHasBeenSet = false;

    Aws::String m_editorId;
    bool m_editorIdHasBeenSet = false;

    Aws::String m_notebookExecutionName;
    bool m_notebookExecutionNameHasBeenSet = false;

    NotebookExecutionStatus m_status{NotebookExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    NotebookS3LocationForOutput m_notebookS3Location;
    bool m_notebookS3LocationHasBeenSet = false;

    Aws::String m_executionEngineId;
    bool m_executionEngineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
