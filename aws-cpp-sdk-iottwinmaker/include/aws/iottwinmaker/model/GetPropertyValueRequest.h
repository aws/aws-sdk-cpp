/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class AWS_IOTTWINMAKER_API GetPropertyValueRequest : public IoTTwinMakerRequest
  {
  public:
    GetPropertyValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPropertyValue"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity whose property values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectedProperties() const{ return m_selectedProperties; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline bool SelectedPropertiesHasBeenSet() const { return m_selectedPropertiesHasBeenSet; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline void SetSelectedProperties(const Aws::Vector<Aws::String>& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = value; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline void SetSelectedProperties(Aws::Vector<Aws::String>&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties = std::move(value); }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithSelectedProperties(const Aws::Vector<Aws::String>& value) { SetSelectedProperties(value); return *this;}

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithSelectedProperties(Aws::Vector<Aws::String>&& value) { SetSelectedProperties(std::move(value)); return *this;}

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& AddSelectedProperties(const Aws::String& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& AddSelectedProperties(Aws::String&& value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(std::move(value)); return *this; }

    /**
     * <p>The properties whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& AddSelectedProperties(const char* value) { m_selectedPropertiesHasBeenSet = true; m_selectedProperties.push_back(value); return *this; }


    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace whose values the operation returns.</p>
     */
    inline GetPropertyValueRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedProperties;
    bool m_selectedPropertiesHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
