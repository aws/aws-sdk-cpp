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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceProperties.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API ModifyWorkspacePropertiesRequest : public WorkSpacesRequest
  {
  public:
    ModifyWorkspacePropertiesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The WorkSpace properties of the request.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }

    /**
     * <p>The WorkSpace properties of the request.</p>
     */
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    /**
     * <p>The WorkSpace properties of the request.</p>
     */
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }

    /**
     * <p>The WorkSpace properties of the request.</p>
     */
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}

    /**
     * <p>The WorkSpace properties of the request.</p>
     */
    inline ModifyWorkspacePropertiesRequest& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(value); return *this;}

  private:
    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
