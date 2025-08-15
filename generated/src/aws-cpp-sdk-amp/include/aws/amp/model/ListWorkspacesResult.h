/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/WorkspaceSummary.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListWorkspaces</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspacesResponse">AWS
   * API Reference</a></p>
   */
  class ListWorkspacesResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult() = default;
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>WorkspaceSummary</code> structures containing information
     * about the workspaces requested.</p>
     */
    inline const Aws::Vector<WorkspaceSummary>& GetWorkspaces() const { return m_workspaces; }
    template<typename WorkspacesT = Aws::Vector<WorkspaceSummary>>
    void SetWorkspaces(WorkspacesT&& value) { m_workspacesHasBeenSet = true; m_workspaces = std::forward<WorkspacesT>(value); }
    template<typename WorkspacesT = Aws::Vector<WorkspaceSummary>>
    ListWorkspacesResult& WithWorkspaces(WorkspacesT&& value) { SetWorkspaces(std::forward<WorkspacesT>(value)); return *this;}
    template<typename WorkspacesT = WorkspaceSummary>
    ListWorkspacesResult& AddWorkspaces(WorkspacesT&& value) { m_workspacesHasBeenSet = true; m_workspaces.emplace_back(std::forward<WorkspacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListWorkspaces</code> request to retrieve those
     * results.</p>
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

    Aws::Vector<WorkspaceSummary> m_workspaces;
    bool m_workspacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
