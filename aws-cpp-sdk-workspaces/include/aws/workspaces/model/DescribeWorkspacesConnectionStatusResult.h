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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceConnectionStatus.h>
#include <utility>

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
  class AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult
  {
  public:
    DescribeWorkspacesConnectionStatusResult();
    DescribeWorkspacesConnectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkspacesConnectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline const Aws::Vector<WorkspaceConnectionStatus>& GetWorkspacesConnectionStatus() const{ return m_workspacesConnectionStatus; }

    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline void SetWorkspacesConnectionStatus(const Aws::Vector<WorkspaceConnectionStatus>& value) { m_workspacesConnectionStatus = value; }

    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline void SetWorkspacesConnectionStatus(Aws::Vector<WorkspaceConnectionStatus>&& value) { m_workspacesConnectionStatus = std::move(value); }

    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& WithWorkspacesConnectionStatus(const Aws::Vector<WorkspaceConnectionStatus>& value) { SetWorkspacesConnectionStatus(value); return *this;}

    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& WithWorkspacesConnectionStatus(Aws::Vector<WorkspaceConnectionStatus>&& value) { SetWorkspacesConnectionStatus(std::move(value)); return *this;}

    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& AddWorkspacesConnectionStatus(const WorkspaceConnectionStatus& value) { m_workspacesConnectionStatus.push_back(value); return *this; }

    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& AddWorkspacesConnectionStatus(WorkspaceConnectionStatus&& value) { m_workspacesConnectionStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next set of results, or null if no more
     * results are available.</p>
     */
    inline DescribeWorkspacesConnectionStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkspaceConnectionStatus> m_workspacesConnectionStatus;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
