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
  class ListWorkspaceServiceAccountTokensRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API ListWorkspaceServiceAccountTokensRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkspaceServiceAccountTokens"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

    AWS_MANAGEDGRAFANA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of tokens to include in the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkspaceServiceAccountTokensRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of service accounts to return. (You receive this
     * token from a previous <code>ListWorkspaceServiceAccountTokens</code>
     * operation.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListWorkspaceServiceAccountTokensRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkspaceServiceAccountTokensRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service account for which to return tokens.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }
    inline bool ServiceAccountIdHasBeenSet() const { return m_serviceAccountIdHasBeenSet; }
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = value; }
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = std::move(value); }
    inline void SetServiceAccountId(const char* value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId.assign(value); }
    inline ListWorkspaceServiceAccountTokensRequest& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}
    inline ListWorkspaceServiceAccountTokensRequest& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensRequest& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace for which to return tokens.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline ListWorkspaceServiceAccountTokensRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline ListWorkspaceServiceAccountTokensRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline ListWorkspaceServiceAccountTokensRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serviceAccountId;
    bool m_serviceAccountIdHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
