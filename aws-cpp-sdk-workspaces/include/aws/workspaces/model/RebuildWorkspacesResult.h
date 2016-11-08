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
#include <aws/workspaces/model/FailedWorkspaceChangeRequest.h>

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
   * <p>Contains the results of the <a>RebuildWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API RebuildWorkspacesResult
  {
  public:
    RebuildWorkspacesResult();
    RebuildWorkspacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RebuildWorkspacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline const Aws::Vector<FailedWorkspaceChangeRequest>& GetFailedRequests() const{ return m_failedRequests; }

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline void SetFailedRequests(const Aws::Vector<FailedWorkspaceChangeRequest>& value) { m_failedRequests = value; }

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline void SetFailedRequests(Aws::Vector<FailedWorkspaceChangeRequest>&& value) { m_failedRequests = value; }

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline RebuildWorkspacesResult& WithFailedRequests(const Aws::Vector<FailedWorkspaceChangeRequest>& value) { SetFailedRequests(value); return *this;}

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline RebuildWorkspacesResult& WithFailedRequests(Aws::Vector<FailedWorkspaceChangeRequest>&& value) { SetFailedRequests(value); return *this;}

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline RebuildWorkspacesResult& AddFailedRequests(const FailedWorkspaceChangeRequest& value) { m_failedRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures representing any WorkSpaces that could not be
     * rebuilt.</p>
     */
    inline RebuildWorkspacesResult& AddFailedRequests(FailedWorkspaceChangeRequest&& value) { m_failedRequests.push_back(value); return *this; }

  private:
    Aws::Vector<FailedWorkspaceChangeRequest> m_failedRequests;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
