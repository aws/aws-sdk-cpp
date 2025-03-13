/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteWorkspaceServiceAccountResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountResult() = default;
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the service account deleted.</p>
     */
    inline const Aws::String& GetServiceAccountId() const { return m_serviceAccountId; }
    template<typename ServiceAccountIdT = Aws::String>
    void SetServiceAccountId(ServiceAccountIdT&& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = std::forward<ServiceAccountIdT>(value); }
    template<typename ServiceAccountIdT = Aws::String>
    DeleteWorkspaceServiceAccountResult& WithServiceAccountId(ServiceAccountIdT&& value) { SetServiceAccountId(std::forward<ServiceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace where the service account was deleted.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    DeleteWorkspaceServiceAccountResult& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteWorkspaceServiceAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountId;
    bool m_serviceAccountIdHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
