﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/WorkspaceDescription.h>
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
  class UpdateWorkspaceResult
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceResult() = default;
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing data about the workspace that was created.</p>
     */
    inline const WorkspaceDescription& GetWorkspace() const { return m_workspace; }
    template<typename WorkspaceT = WorkspaceDescription>
    void SetWorkspace(WorkspaceT&& value) { m_workspaceHasBeenSet = true; m_workspace = std::forward<WorkspaceT>(value); }
    template<typename WorkspaceT = WorkspaceDescription>
    UpdateWorkspaceResult& WithWorkspace(WorkspaceT&& value) { SetWorkspace(std::forward<WorkspaceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateWorkspaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WorkspaceDescription m_workspace;
    bool m_workspaceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
