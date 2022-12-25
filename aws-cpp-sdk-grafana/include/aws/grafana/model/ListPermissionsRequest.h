/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/UserType.h>
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
  class ListPermissionsRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API ListPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPermissions"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

    AWS_MANAGEDGRAFANA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline ListPermissionsRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline ListPermissionsRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>(Optional) Limits the results to only the group that matches this ID.</p>
     */
    inline ListPermissionsRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


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
    inline ListPermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline ListPermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline ListPermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of results. You received this
     * token from a previous <code>ListPermissions</code> operation.</p>
     */
    inline ListPermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline ListPermissionsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline ListPermissionsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>(Optional) Limits the results to only the user that matches this ID.</p>
     */
    inline ListPermissionsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>(Optional) If you specify <code>SSO_USER</code>, then only the permissions of
     * IAM Identity Center users are returned. If you specify <code>SSO_GROUP</code>,
     * only the permissions of IAM Identity Center groups are returned.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }

    /**
     * <p>(Optional) If you specify <code>SSO_USER</code>, then only the permissions of
     * IAM Identity Center users are returned. If you specify <code>SSO_GROUP</code>,
     * only the permissions of IAM Identity Center groups are returned.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>(Optional) If you specify <code>SSO_USER</code>, then only the permissions of
     * IAM Identity Center users are returned. If you specify <code>SSO_GROUP</code>,
     * only the permissions of IAM Identity Center groups are returned.</p>
     */
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>(Optional) If you specify <code>SSO_USER</code>, then only the permissions of
     * IAM Identity Center users are returned. If you specify <code>SSO_GROUP</code>,
     * only the permissions of IAM Identity Center groups are returned.</p>
     */
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>(Optional) If you specify <code>SSO_USER</code>, then only the permissions of
     * IAM Identity Center users are returned. If you specify <code>SSO_GROUP</code>,
     * only the permissions of IAM Identity Center groups are returned.</p>
     */
    inline ListPermissionsRequest& WithUserType(const UserType& value) { SetUserType(value); return *this;}

    /**
     * <p>(Optional) If you specify <code>SSO_USER</code>, then only the permissions of
     * IAM Identity Center users are returned. If you specify <code>SSO_GROUP</code>,
     * only the permissions of IAM Identity Center groups are returned.</p>
     */
    inline ListPermissionsRequest& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}


    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline ListPermissionsRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline ListPermissionsRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to list permissions for. This parameter is
     * required.</p>
     */
    inline ListPermissionsRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
