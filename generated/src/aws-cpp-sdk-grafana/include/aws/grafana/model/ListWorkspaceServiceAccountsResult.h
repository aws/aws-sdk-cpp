/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/ServiceAccountSummary.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class ListWorkspaceServiceAccountsResult
  {
  public:
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountsResult() = default;
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use when requesting the next set of service accounts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkspaceServiceAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures containing information about the service accounts.</p>
     */
    inline const Aws::Vector<ServiceAccountSummary>& GetServiceAccounts() const { return m_serviceAccounts; }
    template<typename ServiceAccountsT = Aws::Vector<ServiceAccountSummary>>
    void SetServiceAccounts(ServiceAccountsT&& value) { m_serviceAccountsHasBeenSet = true; m_serviceAccounts = std::forward<ServiceAccountsT>(value); }
    template<typename ServiceAccountsT = Aws::Vector<ServiceAccountSummary>>
    ListWorkspaceServiceAccountsResult& WithServiceAccounts(ServiceAccountsT&& value) { SetServiceAccounts(std::forward<ServiceAccountsT>(value)); return *this;}
    template<typename ServiceAccountsT = ServiceAccountSummary>
    ListWorkspaceServiceAccountsResult& AddServiceAccounts(ServiceAccountsT&& value) { m_serviceAccountsHasBeenSet = true; m_serviceAccounts.emplace_back(std::forward<ServiceAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workspace to which the service accounts are associated.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    ListWorkspaceServiceAccountsResult& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkspaceServiceAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceAccountSummary> m_serviceAccounts;
    bool m_serviceAccountsHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
