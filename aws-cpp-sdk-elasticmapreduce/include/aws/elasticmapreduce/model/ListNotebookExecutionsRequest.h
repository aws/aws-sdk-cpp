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
    AWS_EMR_API ListNotebookExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotebookExecutions"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline const Aws::String& GetEditorId() const{ return m_editorId; }

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline bool EditorIdHasBeenSet() const { return m_editorIdHasBeenSet; }

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline void SetEditorId(const Aws::String& value) { m_editorIdHasBeenSet = true; m_editorId = value; }

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline void SetEditorId(Aws::String&& value) { m_editorIdHasBeenSet = true; m_editorId = std::move(value); }

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline void SetEditorId(const char* value) { m_editorIdHasBeenSet = true; m_editorId.assign(value); }

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline ListNotebookExecutionsRequest& WithEditorId(const Aws::String& value) { SetEditorId(value); return *this;}

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline ListNotebookExecutionsRequest& WithEditorId(Aws::String&& value) { SetEditorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the editor associated with the notebook execution.</p>
     */
    inline ListNotebookExecutionsRequest& WithEditorId(const char* value) { SetEditorId(value); return *this;}


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
    inline const NotebookExecutionStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const NotebookExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(NotebookExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline ListNotebookExecutionsRequest& WithStatus(const NotebookExecutionStatus& value) { SetStatus(value); return *this;}

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
    inline ListNotebookExecutionsRequest& WithStatus(NotebookExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline const Aws::Utils::DateTime& GetFrom() const{ return m_from; }

    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline void SetFrom(const Aws::Utils::DateTime& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline void SetFrom(Aws::Utils::DateTime&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline ListNotebookExecutionsRequest& WithFrom(const Aws::Utils::DateTime& value) { SetFrom(value); return *this;}

    /**
     * <p>The beginning of time range filter for listing notebook executions. The
     * default is the timestamp of 30 days ago.</p>
     */
    inline ListNotebookExecutionsRequest& WithFrom(Aws::Utils::DateTime&& value) { SetFrom(std::move(value)); return *this;}


    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetTo() const{ return m_to; }

    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline void SetTo(const Aws::Utils::DateTime& value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline void SetTo(Aws::Utils::DateTime&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline ListNotebookExecutionsRequest& WithTo(const Aws::Utils::DateTime& value) { SetTo(value); return *this;}

    /**
     * <p>The end of time range filter for listing notebook executions. The default is
     * the current timestamp.</p>
     */
    inline ListNotebookExecutionsRequest& WithTo(Aws::Utils::DateTime&& value) { SetTo(std::move(value)); return *this;}


    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline ListNotebookExecutionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline ListNotebookExecutionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token, returned by a previous
     * <code>ListNotebookExecutions</code> call, that indicates the start of the list
     * for this <code>ListNotebookExecutions</code> call.</p>
     */
    inline ListNotebookExecutionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_editorId;
    bool m_editorIdHasBeenSet = false;

    NotebookExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_from;
    bool m_fromHasBeenSet = false;

    Aws::Utils::DateTime m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
