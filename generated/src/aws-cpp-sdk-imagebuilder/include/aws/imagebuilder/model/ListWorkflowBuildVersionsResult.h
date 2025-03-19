/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowSummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListWorkflowBuildVersionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsResult() = default;
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline const Aws::Vector<WorkflowSummary>& GetWorkflowSummaryList() const { return m_workflowSummaryList; }
    template<typename WorkflowSummaryListT = Aws::Vector<WorkflowSummary>>
    void SetWorkflowSummaryList(WorkflowSummaryListT&& value) { m_workflowSummaryListHasBeenSet = true; m_workflowSummaryList = std::forward<WorkflowSummaryListT>(value); }
    template<typename WorkflowSummaryListT = Aws::Vector<WorkflowSummary>>
    ListWorkflowBuildVersionsResult& WithWorkflowSummaryList(WorkflowSummaryListT&& value) { SetWorkflowSummaryList(std::forward<WorkflowSummaryListT>(value)); return *this;}
    template<typename WorkflowSummaryListT = WorkflowSummary>
    ListWorkflowBuildVersionsResult& AddWorkflowSummaryList(WorkflowSummaryListT&& value) { m_workflowSummaryListHasBeenSet = true; m_workflowSummaryList.emplace_back(std::forward<WorkflowSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkflowBuildVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkflowBuildVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkflowSummary> m_workflowSummaryList;
    bool m_workflowSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
