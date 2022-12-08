/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/NotebookExecutionSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{
  class ListNotebookExecutionsResult
  {
  public:
    AWS_EMR_API ListNotebookExecutionsResult();
    AWS_EMR_API ListNotebookExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListNotebookExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of notebook executions.</p>
     */
    inline const Aws::Vector<NotebookExecutionSummary>& GetNotebookExecutions() const{ return m_notebookExecutions; }

    /**
     * <p>A list of notebook executions.</p>
     */
    inline void SetNotebookExecutions(const Aws::Vector<NotebookExecutionSummary>& value) { m_notebookExecutions = value; }

    /**
     * <p>A list of notebook executions.</p>
     */
    inline void SetNotebookExecutions(Aws::Vector<NotebookExecutionSummary>&& value) { m_notebookExecutions = std::move(value); }

    /**
     * <p>A list of notebook executions.</p>
     */
    inline ListNotebookExecutionsResult& WithNotebookExecutions(const Aws::Vector<NotebookExecutionSummary>& value) { SetNotebookExecutions(value); return *this;}

    /**
     * <p>A list of notebook executions.</p>
     */
    inline ListNotebookExecutionsResult& WithNotebookExecutions(Aws::Vector<NotebookExecutionSummary>&& value) { SetNotebookExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of notebook executions.</p>
     */
    inline ListNotebookExecutionsResult& AddNotebookExecutions(const NotebookExecutionSummary& value) { m_notebookExecutions.push_back(value); return *this; }

    /**
     * <p>A list of notebook executions.</p>
     */
    inline ListNotebookExecutionsResult& AddNotebookExecutions(NotebookExecutionSummary&& value) { m_notebookExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline ListNotebookExecutionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline ListNotebookExecutionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline ListNotebookExecutionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<NotebookExecutionSummary> m_notebookExecutions;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
