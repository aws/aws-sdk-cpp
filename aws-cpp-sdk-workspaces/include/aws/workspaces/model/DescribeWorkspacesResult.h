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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Workspace.h>

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
   * <p>Contains the results for the <a>DescribeWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API DescribeWorkspacesResult
  {
  public:
    DescribeWorkspacesResult();
    DescribeWorkspacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkspacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline const Aws::Vector<Workspace>& GetWorkspaces() const{ return m_workspaces; }

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline void SetWorkspaces(const Aws::Vector<Workspace>& value) { m_workspaces = value; }

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline void SetWorkspaces(Aws::Vector<Workspace>&& value) { m_workspaces = value; }

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline DescribeWorkspacesResult& WithWorkspaces(const Aws::Vector<Workspace>& value) { SetWorkspaces(value); return *this;}

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline DescribeWorkspacesResult& WithWorkspaces(Aws::Vector<Workspace>&& value) { SetWorkspaces(value); return *this;}

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline DescribeWorkspacesResult& AddWorkspaces(const Workspace& value) { m_workspaces.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the information about the WorkSpaces.</p>
     * <p>Because the <a>CreateWorkspaces</a> operation is asynchronous, some of this
     * information may be incomplete for a newly-created WorkSpace.</p>
     */
    inline DescribeWorkspacesResult& AddWorkspaces(Workspace&& value) { m_workspaces.push_back(value); return *this; }

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
    inline DescribeWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline DescribeWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to this operation to
     * retrieve the next set of items. This token is valid for one day and must be used
     * within that time frame.</p>
     */
    inline DescribeWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Workspace> m_workspaces;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
