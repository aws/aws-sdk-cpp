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
  class AWS_WORKSPACES_API DescribeWorkspaceDirectoriesRequest : public WorkSpacesRequest
  {
  public:
    DescribeWorkspaceDirectoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceDirectories"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryIds() const{ return m_directoryIds; }

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline bool DirectoryIdsHasBeenSet() const { return m_directoryIdsHasBeenSet; }

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline void SetDirectoryIds(const Aws::Vector<Aws::String>& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline void SetDirectoryIds(Aws::Vector<Aws::String>&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = std::move(value); }

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(const Aws::Vector<Aws::String>& value) { SetDirectoryIds(value); return *this;}

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(Aws::Vector<Aws::String>&& value) { SetDirectoryIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(const Aws::String& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(Aws::String&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(const char* value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }


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
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
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
