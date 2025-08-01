/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/MatchingWorkflowSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListMatchingWorkflowsResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListMatchingWorkflowsResult() = default;
    AWS_ENTITYRESOLUTION_API ListMatchingWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListMatchingWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>workflowName</code>, <code>workflowArn</code>,
     * <code>resolutionType</code>, <code>createdAt</code>, and
     * <code>updatedAt</code>.</p>
     */
    inline const Aws::Vector<MatchingWorkflowSummary>& GetWorkflowSummaries() const { return m_workflowSummaries; }
    template<typename WorkflowSummariesT = Aws::Vector<MatchingWorkflowSummary>>
    void SetWorkflowSummaries(WorkflowSummariesT&& value) { m_workflowSummariesHasBeenSet = true; m_workflowSummaries = std::forward<WorkflowSummariesT>(value); }
    template<typename WorkflowSummariesT = Aws::Vector<MatchingWorkflowSummary>>
    ListMatchingWorkflowsResult& WithWorkflowSummaries(WorkflowSummariesT&& value) { SetWorkflowSummaries(std::forward<WorkflowSummariesT>(value)); return *this;}
    template<typename WorkflowSummariesT = MatchingWorkflowSummary>
    ListMatchingWorkflowsResult& AddWorkflowSummaries(WorkflowSummariesT&& value) { m_workflowSummariesHasBeenSet = true; m_workflowSummaries.emplace_back(std::forward<WorkflowSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMatchingWorkflowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMatchingWorkflowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MatchingWorkflowSummary> m_workflowSummaries;
    bool m_workflowSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
