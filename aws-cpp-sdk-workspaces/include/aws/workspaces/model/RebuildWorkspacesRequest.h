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
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/RebuildRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API RebuildWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    RebuildWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebuildWorkspaces"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline const Aws::Vector<RebuildRequest>& GetRebuildWorkspaceRequests() const{ return m_rebuildWorkspaceRequests; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline bool RebuildWorkspaceRequestsHasBeenSet() const { return m_rebuildWorkspaceRequestsHasBeenSet; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline void SetRebuildWorkspaceRequests(const Aws::Vector<RebuildRequest>& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = value; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline void SetRebuildWorkspaceRequests(Aws::Vector<RebuildRequest>&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests = std::move(value); }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(const Aws::Vector<RebuildRequest>& value) { SetRebuildWorkspaceRequests(value); return *this;}

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& WithRebuildWorkspaceRequests(Aws::Vector<RebuildRequest>&& value) { SetRebuildWorkspaceRequests(std::move(value)); return *this;}

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(const RebuildRequest& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The WorkSpace to rebuild. You can specify a single WorkSpace.</p>
     */
    inline RebuildWorkspacesRequest& AddRebuildWorkspaceRequests(RebuildRequest&& value) { m_rebuildWorkspaceRequestsHasBeenSet = true; m_rebuildWorkspaceRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RebuildRequest> m_rebuildWorkspaceRequests;
    bool m_rebuildWorkspaceRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
