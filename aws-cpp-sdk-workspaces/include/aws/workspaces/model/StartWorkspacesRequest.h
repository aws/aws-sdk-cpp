/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/StartRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class StartWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API StartWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<StartRequest>& GetStartWorkspaceRequests() const{ return m_startWorkspaceRequests; }

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline bool StartWorkspaceRequestsHasBeenSet() const { return m_startWorkspaceRequestsHasBeenSet; }

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline void SetStartWorkspaceRequests(const Aws::Vector<StartRequest>& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests = value; }

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline void SetStartWorkspaceRequests(Aws::Vector<StartRequest>&& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests = std::move(value); }

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline StartWorkspacesRequest& WithStartWorkspaceRequests(const Aws::Vector<StartRequest>& value) { SetStartWorkspaceRequests(value); return *this;}

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline StartWorkspacesRequest& WithStartWorkspaceRequests(Aws::Vector<StartRequest>&& value) { SetStartWorkspaceRequests(std::move(value)); return *this;}

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline StartWorkspacesRequest& AddStartWorkspaceRequests(const StartRequest& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>The WorkSpaces to start. You can specify up to 25 WorkSpaces.</p>
     */
    inline StartWorkspacesRequest& AddStartWorkspaceRequests(StartRequest&& value) { m_startWorkspaceRequestsHasBeenSet = true; m_startWorkspaceRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StartRequest> m_startWorkspaceRequests;
    bool m_startWorkspaceRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
