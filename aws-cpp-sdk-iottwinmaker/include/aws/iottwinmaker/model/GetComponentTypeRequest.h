/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class GetComponentTypeRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API GetComponentTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponentType"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline GetComponentTypeRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline GetComponentTypeRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the component type.</p>
     */
    inline GetComponentTypeRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }

    /**
     * <p>The ID of the component type.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetComponentTypeRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetComponentTypeRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline GetComponentTypeRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
