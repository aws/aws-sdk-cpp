/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class ListVersionsRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API ListVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVersions"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

    AWS_MANAGEDGRAFANA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response.</p>
     */
    inline ListVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline ListVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline ListVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You receive this
     * token from a previous <code>ListVersions</code> operation.</p>
     */
    inline ListVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline ListVersionsRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline ListVersionsRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to list the available upgrade versions. If not
     * included, lists all versions of Grafana that are supported for
     * <code>CreateWorkspace</code>.</p>
     */
    inline ListVersionsRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
