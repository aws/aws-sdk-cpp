/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API DescribeWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    DescribeWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaces"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceIds() const{ return m_workspaceIds; }

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline bool WorkspaceIdsHasBeenSet() const { return m_workspaceIdsHasBeenSet; }

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline void SetWorkspaceIds(const Aws::Vector<Aws::String>& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = value; }

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline void SetWorkspaceIds(Aws::Vector<Aws::String>&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = std::move(value); }

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline DescribeWorkspacesRequest& WithWorkspaceIds(const Aws::Vector<Aws::String>& value) { SetWorkspaceIds(value); return *this;}

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline DescribeWorkspacesRequest& WithWorkspaceIds(Aws::Vector<Aws::String>&& value) { SetWorkspaceIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline DescribeWorkspacesRequest& AddWorkspaceIds(const Aws::String& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline DescribeWorkspacesRequest& AddWorkspaceIds(Aws::String&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline DescribeWorkspacesRequest& AddWorkspaceIds(const char* value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline DescribeWorkspacesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline DescribeWorkspacesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline DescribeWorkspacesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline DescribeWorkspacesRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline DescribeWorkspacesRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline DescribeWorkspacesRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline DescribeWorkspacesRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline DescribeWorkspacesRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline DescribeWorkspacesRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeWorkspacesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_workspaceIds;
    bool m_workspaceIdsHasBeenSet;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
