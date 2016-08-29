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
#include <aws/workspaces/model/StartRequest.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API StartWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    StartWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The requests.</p>
     */
    inline const Aws::Vector<StartRequest>& GetStartWorkspaceRequests() const{ return m_startWorkspaceRequests; }

    /**
     * <p>The requests.</p>
     */
    inline void SetStartWorkspaceRequests(const Aws::Vector<StartRequest>& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests = value; }

    /**
     * <p>The requests.</p>
     */
    inline void SetStartWorkspaceRequests(Aws::Vector<StartRequest>&& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests = value; }

    /**
     * <p>The requests.</p>
     */
    inline StartWorkspacesRequest& WithStartWorkspaceRequests(const Aws::Vector<StartRequest>& value) { SetStartWorkspaceRequests(value); return *this;}

    /**
     * <p>The requests.</p>
     */
    inline StartWorkspacesRequest& WithStartWorkspaceRequests(Aws::Vector<StartRequest>&& value) { SetStartWorkspaceRequests(value); return *this;}

    /**
     * <p>The requests.</p>
     */
    inline StartWorkspacesRequest& AddStartWorkspaceRequests(const StartRequest& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The requests.</p>
     */
    inline StartWorkspacesRequest& AddStartWorkspaceRequests(StartRequest&& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests.push_back(value); return *this; }

  private:
    Aws::Vector<StartRequest> m_startWorkspaceRequests;
    bool m_startWorkspaceRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
