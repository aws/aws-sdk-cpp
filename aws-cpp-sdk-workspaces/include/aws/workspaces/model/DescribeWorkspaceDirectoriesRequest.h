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
   * <p>Contains the inputs for the <a>DescribeWorkspaceDirectories</a>
   * operation.</p>
   */
  class AWS_WORKSPACES_API DescribeWorkspaceDirectoriesRequest : public WorkSpacesRequest
  {
  public:
    DescribeWorkspaceDirectoriesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryIds() const{ return m_directoryIds; }

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline void SetDirectoryIds(const Aws::Vector<Aws::String>& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline void SetDirectoryIds(Aws::Vector<Aws::String>&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(const Aws::Vector<Aws::String>& value) { SetDirectoryIds(value); return *this;}

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(Aws::Vector<Aws::String>&& value) { SetDirectoryIds(value); return *this;}

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(const Aws::String& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(Aws::String&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that contains the directory identifiers to retrieve
     * information for. If this member is null, all directories are retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(const char* value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

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
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value from a previous call to this operation. Pass
     * null if this is the first call.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_directoryIds;
    bool m_directoryIdsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
