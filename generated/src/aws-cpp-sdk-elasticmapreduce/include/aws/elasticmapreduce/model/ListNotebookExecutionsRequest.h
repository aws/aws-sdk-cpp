/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/NotebookExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class ListNotebookExecutionsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ListNotebookExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotebookExecutions"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline const Aws::String& GetEditorId() const { return m_editorId; }
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }
    template<typename EditorIdT = Aws::String>
    void SetEditorId(EditorIdT&& value) { m_editorIdHasBeenSet = true; m_editorId = std::forward<EditorIdT>(value); }
    template<typename EditorIdT = Aws::String>
    ListNotebookExecutionsRequest& WithEditorId(EditorIdT&& value) { SetEditorId(std::forward<EditorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status filter for listing notebook executions.</p> <ul> <li> <p>
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
    inline ListNotebookExecutionsRequest& WithStatus(NotebookExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline const Aws::Utils::DateTime& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::Utils::DateTime>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::Utils::DateTime>
    ListNotebookExecutionsRequest& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::Utils::DateTime>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::Utils::DateTime>
    ListNotebookExecutionsRequest& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListNotebookExecutionsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the execution engine.</p>
     */
    inline const Aws::String& GetExecutionEngineId() const { return m_executionEngineId; }
    inline bool ExecutionEngineIdHasBeenSet() const { return m_executionEngineIdHasBeenSet; }
    template<typename ExecutionEngineIdT = Aws::String>
    void SetExecutionEngineId(ExecutionEngineIdT&& value) { m_executionEngineIdHasBeenSet = true; m_executionEngineId = std::forward<ExecutionEngineIdT>(value); }
    template<typename ExecutionEngineIdT = Aws::String>
    ListNotebookExecutionsRequest& WithExecutionEngineId(ExecutionEngineIdT&& value) { SetExecutionEngineId(std::forward<ExecutionEngineIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_editorId;
    bool m_editorIdHasBeenSet = false;

    NotebookExecutionStatus m_status{NotebookExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_from{};
    bool m_fromHasBeenSet = false;

    Aws::Utils::DateTime m_to{};
    bool m_toHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_executionEngineId;
    bool m_executionEngineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
