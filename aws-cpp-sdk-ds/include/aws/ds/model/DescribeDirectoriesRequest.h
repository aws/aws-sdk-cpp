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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeDirectories</a> operation.</p>
   */
  class AWS_DIRECTORYSERVICE_API DescribeDirectoriesRequest : public DirectoryServiceRequest
  {
  public:
    DescribeDirectoriesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryIds() const{ return m_directoryIds; }

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline void SetDirectoryIds(const Aws::Vector<Aws::String>& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline void SetDirectoryIds(Aws::Vector<Aws::String>&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeDirectoriesRequest& WithDirectoryIds(const Aws::Vector<Aws::String>& value) { SetDirectoryIds(value); return *this;}

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeDirectoriesRequest& WithDirectoryIds(Aws::Vector<Aws::String>&& value) { SetDirectoryIds(value); return *this;}

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeDirectoriesRequest& AddDirectoryIds(const Aws::String& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeDirectoriesRequest& AddDirectoryIds(Aws::String&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers of the directories for which to obtain the information.
     * If this member is null, all directories that belong to the current account are
     * returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline DescribeDirectoriesRequest& AddDirectoryIds(const char* value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline DescribeDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline DescribeDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <i>DescribeDirectoriesResult.NextToken</i> value from a previous call to
     * <a>DescribeDirectories</a>. Pass null if this is the first call.</p>
     */
    inline DescribeDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation.</p>
     */
    inline DescribeDirectoriesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_directoryIds;
    bool m_directoryIdsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
