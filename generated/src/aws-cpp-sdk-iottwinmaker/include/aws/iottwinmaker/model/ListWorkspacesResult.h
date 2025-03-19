/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/WorkspaceSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListWorkspacesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListWorkspacesResult() = default;
    AWS_IOTTWINMAKER_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline const Aws::Vector<WorkspaceSummary>& GetWorkspaceSummaries() const { return m_workspaceSummaries; }
    template<typename WorkspaceSummariesT = Aws::Vector<WorkspaceSummary>>
    void SetWorkspaceSummaries(WorkspaceSummariesT&& value) { m_workspaceSummariesHasBeenSet = true; m_workspaceSummaries = std::forward<WorkspaceSummariesT>(value); }
    template<typename WorkspaceSummariesT = Aws::Vector<WorkspaceSummary>>
    ListWorkspacesResult& WithWorkspaceSummaries(WorkspaceSummariesT&& value) { SetWorkspaceSummaries(std::forward<WorkspaceSummariesT>(value)); return *this;}
    template<typename WorkspaceSummariesT = WorkspaceSummary>
    ListWorkspacesResult& AddWorkspaceSummaries(WorkspaceSummariesT&& value) { m_workspaceSummariesHasBeenSet = true; m_workspaceSummaries.emplace_back(std::forward<WorkspaceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkspacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkspacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceSummary> m_workspaceSummaries;
    bool m_workspaceSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
