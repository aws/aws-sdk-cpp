/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/WorkspaceDescription.h>
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
  class DeleteWorkspaceResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceResult();
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about the workspace that was deleted.</p>
     */
    inline const WorkspaceDescription& GetWorkspace() const{ return m_workspace; }

    /**
     * <p>A structure containing information about the workspace that was deleted.</p>
     */
    inline void SetWorkspace(const WorkspaceDescription& value) { m_workspace = value; }

    /**
     * <p>A structure containing information about the workspace that was deleted.</p>
     */
    inline void SetWorkspace(WorkspaceDescription&& value) { m_workspace = std::move(value); }

    /**
     * <p>A structure containing information about the workspace that was deleted.</p>
     */
    inline DeleteWorkspaceResult& WithWorkspace(const WorkspaceDescription& value) { SetWorkspace(value); return *this;}

    /**
     * <p>A structure containing information about the workspace that was deleted.</p>
     */
    inline DeleteWorkspaceResult& WithWorkspace(WorkspaceDescription&& value) { SetWorkspace(std::move(value)); return *this;}

  private:

    WorkspaceDescription m_workspace;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
