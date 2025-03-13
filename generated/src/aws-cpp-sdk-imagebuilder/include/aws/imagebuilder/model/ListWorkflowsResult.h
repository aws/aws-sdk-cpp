/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowVersion.h>
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
  class ListWorkflowsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowsResult() = default;
    AWS_IMAGEBUILDER_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline const Aws::Vector<WorkflowVersion>& GetWorkflowVersionList() const { return m_workflowVersionList; }
    template<typename WorkflowVersionListT = Aws::Vector<WorkflowVersion>>
    void SetWorkflowVersionList(WorkflowVersionListT&& value) { m_workflowVersionListHasBeenSet = true; m_workflowVersionList = std::forward<WorkflowVersionListT>(value); }
    template<typename WorkflowVersionListT = Aws::Vector<WorkflowVersion>>
    ListWorkflowsResult& WithWorkflowVersionList(WorkflowVersionListT&& value) { SetWorkflowVersionList(std::forward<WorkflowVersionListT>(value)); return *this;}
    template<typename WorkflowVersionListT = WorkflowVersion>
    ListWorkflowsResult& AddWorkflowVersionList(WorkflowVersionListT&& value) { m_workflowVersionListHasBeenSet = true; m_workflowVersionList.emplace_back(std::forward<WorkflowVersionListT>(value)); return *this; }
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
    ListWorkflowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkflowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkflowVersion> m_workflowVersionList;
    bool m_workflowVersionListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
