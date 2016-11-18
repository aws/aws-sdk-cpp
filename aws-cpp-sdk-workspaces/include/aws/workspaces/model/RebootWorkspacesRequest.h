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
#include <aws/workspaces/model/RebootRequest.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>RebootWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API RebootWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    RebootWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline const Aws::Vector<RebootRequest>& GetRebootWorkspaceRequests() const{ return m_rebootWorkspaceRequests; }

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline void SetRebootWorkspaceRequests(const Aws::Vector<RebootRequest>& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline void SetRebootWorkspaceRequests(Aws::Vector<RebootRequest>&& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline RebootWorkspacesRequest& WithRebootWorkspaceRequests(const Aws::Vector<RebootRequest>& value) { SetRebootWorkspaceRequests(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline RebootWorkspacesRequest& WithRebootWorkspaceRequests(Aws::Vector<RebootRequest>&& value) { SetRebootWorkspaceRequests(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline RebootWorkspacesRequest& AddRebootWorkspaceRequests(const RebootRequest& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures that specify the WorkSpaces to reboot.</p>
     */
    inline RebootWorkspacesRequest& AddRebootWorkspaceRequests(RebootRequest&& value) { m_rebootWorkspaceRequestsHasBeenSet = true; m_rebootWorkspaceRequests.push_back(value); return *this; }

  private:
    Aws::Vector<RebootRequest> m_rebootWorkspaceRequests;
    bool m_rebootWorkspaceRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
