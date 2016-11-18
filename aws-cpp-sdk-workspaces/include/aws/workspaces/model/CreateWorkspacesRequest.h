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
#include <aws/workspaces/model/WorkspaceRequest.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>CreateWorkspaces</a> operation.</p>
   */
  class AWS_WORKSPACES_API CreateWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    CreateWorkspacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline const Aws::Vector<WorkspaceRequest>& GetWorkspaces() const{ return m_workspaces; }

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline void SetWorkspaces(const Aws::Vector<WorkspaceRequest>& value) { m_workspacesHasBeenSet = true; m_workspaces = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline void SetWorkspaces(Aws::Vector<WorkspaceRequest>&& value) { m_workspacesHasBeenSet = true; m_workspaces = value; }

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline CreateWorkspacesRequest& WithWorkspaces(const Aws::Vector<WorkspaceRequest>& value) { SetWorkspaces(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline CreateWorkspacesRequest& WithWorkspaces(Aws::Vector<WorkspaceRequest>&& value) { SetWorkspaces(value); return *this;}

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline CreateWorkspacesRequest& AddWorkspaces(const WorkspaceRequest& value) { m_workspacesHasBeenSet = true; m_workspaces.push_back(value); return *this; }

    /**
     * <p>An array of structures that specify the WorkSpaces to create.</p>
     */
    inline CreateWorkspacesRequest& AddWorkspaces(WorkspaceRequest&& value) { m_workspacesHasBeenSet = true; m_workspaces.push_back(value); return *this; }

  private:
    Aws::Vector<WorkspaceRequest> m_workspaces;
    bool m_workspacesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
