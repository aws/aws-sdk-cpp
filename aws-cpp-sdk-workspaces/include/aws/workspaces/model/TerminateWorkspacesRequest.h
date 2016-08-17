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
#include <aws/workspaces/model/TerminateRequest.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>TerminateWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API TerminateWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    TerminateWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline const Aws::Vector<TerminateRequest>& GetTerminateWorkspaceRequests() const{ return m_terminateWorkspaceRequests; }

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline void SetTerminateWorkspaceRequests(const Aws::Vector<TerminateRequest>& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline void SetTerminateWorkspaceRequests(Aws::Vector<TerminateRequest>&& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline TerminateWorkspacesRequest& WithTerminateWorkspaceRequests(const Aws::Vector<TerminateRequest>& value) { SetTerminateWorkspaceRequests(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline TerminateWorkspacesRequest& WithTerminateWorkspaceRequests(Aws::Vector<TerminateRequest>&& value) { SetTerminateWorkspaceRequests(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline TerminateWorkspacesRequest& AddTerminateWorkspaceRequests(const TerminateRequest& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests.push_back(value); return *this; }

    /**
     * <p>An array of structures that specify the WorkSpaces to terminate.</p>
     */
    inline TerminateWorkspacesRequest& AddTerminateWorkspaceRequests(TerminateRequest&& value) { m_terminateWorkspaceRequestsHasBeenSet = true; m_terminateWorkspaceRequests.push_back(value); return *this; }

  private:
    Aws::Vector<TerminateRequest> m_terminateWorkspaceRequests;
    bool m_terminateWorkspaceRequestsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
