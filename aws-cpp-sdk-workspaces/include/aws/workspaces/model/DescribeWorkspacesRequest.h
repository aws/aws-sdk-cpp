/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API DescribeWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    DescribeWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceIds() const{ return m_workspaceIds; }

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline void SetWorkspaceIds(const Aws::Vector<Aws::String>& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = value; }

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline void SetWorkspaceIds(Aws::Vector<Aws::String>&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = value; }

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline DescribeWorkspacesRequest& WithWorkspaceIds(const Aws::Vector<Aws::String>& value) { SetWorkspaceIds(value); return *this;}

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline DescribeWorkspacesRequest& WithWorkspaceIds(Aws::Vector<Aws::String>&& value) { SetWorkspaceIds(value); return *this;}

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline DescribeWorkspacesRequest& AddWorkspaceIds(const Aws::String& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline DescribeWorkspacesRequest& AddWorkspaceIds(Aws::String&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contain the identifiers of the WorkSpaces for which
     * to retrieve information. This parameter cannot be combined with any other filter
     * parameter.</p> <p>Because the <a>CreateWorkspaces</a> operation is asynchronous,
     * the identifier it returns is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information is returned.</p>
     */
    inline DescribeWorkspacesRequest& AddWorkspaceIds(const char* value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline DescribeWorkspacesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline DescribeWorkspacesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Specifies the directory identifier to which to limit the WorkSpaces.
     * Optionally, you can specify a specific directory user with the
     * <code>UserName</code> parameter. This parameter cannot be combined with any
     * other filter parameter.</p>
     */
    inline DescribeWorkspacesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline DescribeWorkspacesRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline DescribeWorkspacesRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>Used with the <code>DirectoryId</code> parameter to specify the directory
     * user for whom to obtain the WorkSpace.</p>
     */
    inline DescribeWorkspacesRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline DescribeWorkspacesRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline DescribeWorkspacesRequest& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The identifier of a bundle to obtain the WorkSpaces for. All WorkSpaces that
     * are created from this bundle will be retrieved. This parameter cannot be
     * combined with any other filter parameter.</p>
     */
    inline DescribeWorkspacesRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeWorkspacesRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
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
