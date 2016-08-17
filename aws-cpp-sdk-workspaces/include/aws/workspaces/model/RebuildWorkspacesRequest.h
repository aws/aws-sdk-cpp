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
#include <aws/workspaces/model/RebuildRequest.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>RebuildWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API RebuildWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    RebuildWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline const Aws::Vector<RebuildRequest>& GetRebuildWorkspaceRequests() const{ return m_rebuildWorkspaceRequests; }

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline void SetRebuildWorkspaceRequests(const Aws::Vector<RebuildRequest>& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline void SetRebuildWorkspaceRequests(Aws::Vector<RebuildRequest>&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(const Aws::Vector<RebuildRequest>& value) { SetRebuildWorkspaceRequests(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(Aws::Vector<RebuildRequest>&& value) { SetRebuildWorkspaceRequests(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(const RebuildRequest& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures that specify the WorkSpaces to rebuild.</p>
     */
    inline RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(RebuildRequest&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.push_back(value); return *this; }

  private:
    Aws::Vector<RebuildRequest> m_rebuildWorkspaceRequests;
    bool m_rebuildWorkspaceRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
