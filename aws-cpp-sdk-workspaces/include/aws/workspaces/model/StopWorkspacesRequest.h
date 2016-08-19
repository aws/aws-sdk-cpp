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
#include <aws/workspaces/model/StopRequest.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API StopWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    StopWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The requests.</p>
     */
    inline const Aws::Vector<StopRequest>& GetStopWorkspaceRequests() const{ return m_stopWorkspaceRequests; }

    /**
     * <p>The requests.</p>
     */
    inline void SetStopWorkspaceRequests(const Aws::Vector<StopRequest>& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests = value; }

    /**
     * <p>The requests.</p>
     */
    inline void SetStopWorkspaceRequests(Aws::Vector<StopRequest>&& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests = value; }

    /**
     * <p>The requests.</p>
     */
    inline StopWorkspacesRequest& WithStopWorkspaceRequests(const Aws::Vector<StopRequest>& value) { SetStopWorkspaceRequests(value); return *this;}

    /**
     * <p>The requests.</p>
     */
    inline StopWorkspacesRequest& WithStopWorkspaceRequests(Aws::Vector<StopRequest>&& value) { SetStopWorkspaceRequests(value); return *this;}

    /**
     * <p>The requests.</p>
     */
    inline StopWorkspacesRequest& AddStopWorkspaceRequests(const StopRequest& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The requests.</p>
     */
    inline StopWorkspacesRequest& AddStopWorkspaceRequests(StopRequest&& value) { m_stopWorkspaceRequestsHasBeenSet = true; m_stopWorkspaceRequests.push_back(value); return *this; }

  private:
    Aws::Vector<StopRequest> m_stopWorkspaceRequests;
    bool m_stopWorkspaceRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
