/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/WorkspaceSummary.h>
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
  class ListWorkspacesResult
  {
  public:
    AWS_MANAGEDGRAFANA_API ListWorkspacesResult();
    AWS_MANAGEDGRAFANA_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline ListWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline ListWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of workspaces.</p>
     */
    inline ListWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline const Aws::Vector<WorkspaceSummary>& GetWorkspaces() const{ return m_workspaces; }

    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline void SetWorkspaces(const Aws::Vector<WorkspaceSummary>& value) { m_workspaces = value; }

    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline void SetWorkspaces(Aws::Vector<WorkspaceSummary>&& value) { m_workspaces = std::move(value); }

    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline ListWorkspacesResult& WithWorkspaces(const Aws::Vector<WorkspaceSummary>& value) { SetWorkspaces(value); return *this;}

    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline ListWorkspacesResult& WithWorkspaces(Aws::Vector<WorkspaceSummary>&& value) { SetWorkspaces(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline ListWorkspacesResult& AddWorkspaces(const WorkspaceSummary& value) { m_workspaces.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain some information about the workspaces in
     * the account.</p>
     */
    inline ListWorkspacesResult& AddWorkspaces(WorkspaceSummary&& value) { m_workspaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkspaceSummary> m_workspaces;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
