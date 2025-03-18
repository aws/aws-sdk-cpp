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
    AWS_EMR_API ListNotebookExecutionsResult() = default;
    AWS_EMR_API ListNotebookExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListNotebookExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of notebook executions.</p>
     */
    inline const Aws::Vector<NotebookExecutionSummary>& GetNotebookExecutions() const { return m_notebookExecutions; }
    template<typename NotebookExecutionsT = Aws::Vector<NotebookExecutionSummary>>
    void SetNotebookExecutions(NotebookExecutionsT&& value) { m_notebookExecutionsHasBeenSet = true; m_notebookExecutions = std::forward<NotebookExecutionsT>(value); }
    template<typename NotebookExecutionsT = Aws::Vector<NotebookExecutionSummary>>
    ListNotebookExecutionsResult& WithNotebookExecutions(NotebookExecutionsT&& value) { SetNotebookExecutions(std::forward<NotebookExecutionsT>(value)); return *this;}
    template<typename NotebookExecutionsT = NotebookExecutionSummary>
    ListNotebookExecutionsResult& AddNotebookExecutions(NotebookExecutionsT&& value) { m_notebookExecutionsHasBeenSet = true; m_notebookExecutions.emplace_back(std::forward<NotebookExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that a subsequent <code>ListNotebookExecutions</code> can
     * use to determine the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListNotebookExecutionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotebookExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotebookExecutionSummary> m_notebookExecutions;
    bool m_notebookExecutionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
