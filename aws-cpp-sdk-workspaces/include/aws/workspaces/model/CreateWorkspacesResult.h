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
#include <aws/workspaces/model/FailedCreateWorkspaceRequest.h>
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
   * <p>Contains the result of the <a>CreateWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API CreateWorkspacesResult
  {
  public:
    CreateWorkspacesResult();
    CreateWorkspacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWorkspacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline const Aws::Vector<FailedCreateWorkspaceRequest>& GetFailedRequests() const{ return m_failedRequests; }

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline void SetFailedRequests(const Aws::Vector<FailedCreateWorkspaceRequest>& value) { m_failedRequests = value; }

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline void SetFailedRequests(Aws::Vector<FailedCreateWorkspaceRequest>&& value) { m_failedRequests = value; }

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline CreateWorkspacesResult& WithFailedRequests(const Aws::Vector<FailedCreateWorkspaceRequest>& value) { SetFailedRequests(value); return *this;}

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline CreateWorkspacesResult& WithFailedRequests(Aws::Vector<FailedCreateWorkspaceRequest>&& value) { SetFailedRequests(value); return *this;}

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline CreateWorkspacesResult& AddFailedRequests(const FailedCreateWorkspaceRequest& value) { m_failedRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures that represent the WorkSpaces that could not be
     * created.</p>
     */
    inline CreateWorkspacesResult& AddFailedRequests(FailedCreateWorkspaceRequest&& value) { m_failedRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline const Aws::Vector<Workspace>& GetPendingRequests() const{ return m_pendingRequests; }

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline void SetPendingRequests(const Aws::Vector<Workspace>& value) { m_pendingRequests = value; }

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline void SetPendingRequests(Aws::Vector<Workspace>&& value) { m_pendingRequests = value; }

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline CreateWorkspacesResult& WithPendingRequests(const Aws::Vector<Workspace>& value) { SetPendingRequests(value); return *this;}

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline CreateWorkspacesResult& WithPendingRequests(Aws::Vector<Workspace>&& value) { SetPendingRequests(value); return *this;}

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline CreateWorkspacesResult& AddPendingRequests(const Workspace& value) { m_pendingRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures that represent the WorkSpaces that were created.</p>
     * <p>Because this operation is asynchronous, the identifier in
     * <code>WorkspaceId</code> is not immediately available. If you immediately call
     * <a>DescribeWorkspaces</a> with this identifier, no information will be
     * returned.</p>
     */
    inline CreateWorkspacesResult& AddPendingRequests(Workspace&& value) { m_pendingRequests.push_back(value); return *this; }

  private:
    Aws::Vector<FailedCreateWorkspaceRequest> m_failedRequests;
    Aws::Vector<Workspace> m_pendingRequests;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
