﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceDirectory.h>

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
namespace WorkSpaces
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>DescribeWorkspaceDirectories</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectoriesResult">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult
  {
  public:
    DescribeWorkspaceDirectoriesResult();
    DescribeWorkspaceDirectoriesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkspaceDirectoriesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline const Aws::Vector<WorkspaceDirectory>& GetDirectories() const{ return m_directories; }

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline void SetDirectories(const Aws::Vector<WorkspaceDirectory>& value) { m_directories = value; }

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline void SetDirectories(Aws::Vector<WorkspaceDirectory>&& value) { m_directories = value; }

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithDirectories(const Aws::Vector<WorkspaceDirectory>& value) { SetDirectories(value); return *this;}

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithDirectories(Aws::Vector<WorkspaceDirectory>&& value) { SetDirectories(value); return *this;}

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& AddDirectories(const WorkspaceDirectory& value) { m_directories.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& AddDirectories(WorkspaceDirectory&& value) { m_directories.push_back(value); return *this; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<WorkspaceDirectory> m_directories;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
