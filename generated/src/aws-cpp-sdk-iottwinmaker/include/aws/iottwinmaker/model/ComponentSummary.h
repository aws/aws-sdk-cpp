﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/iottwinmaker/model/ComponentPropertyGroupResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that returns information about a component summary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ComponentSummary">AWS
   * API Reference</a></p>
   */
  class ComponentSummary
  {
  public:
    AWS_IOTTWINMAKER_API ComponentSummary();
    AWS_IOTTWINMAKER_API ComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentSummary& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentSummary& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline ComponentSummary& WithComponentName(const char* value) { SetComponentName(value); return *this;}


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
    inline ComponentSummary& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline ComponentSummary& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the component type.</p>
     */
    inline ComponentSummary& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}


    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline const Aws::String& GetDefinedIn() const{ return m_definedIn; }

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline bool DefinedInHasBeenSet() const { return m_definedInHasBeenSet; }

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline void SetDefinedIn(const Aws::String& value) { m_definedInHasBeenSet = true; m_definedIn = value; }

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline void SetDefinedIn(Aws::String&& value) { m_definedInHasBeenSet = true; m_definedIn = std::move(value); }

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline void SetDefinedIn(const char* value) { m_definedInHasBeenSet = true; m_definedIn.assign(value); }

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline ComponentSummary& WithDefinedIn(const Aws::String& value) { SetDefinedIn(value); return *this;}

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline ComponentSummary& WithDefinedIn(Aws::String&& value) { SetDefinedIn(std::move(value)); return *this;}

    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline ComponentSummary& WithDefinedIn(const char* value) { SetDefinedIn(value); return *this;}


    /**
     * <p>The description of the component request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component request.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the component request.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the component request.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the component request.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the component request.</p>
     */
    inline ComponentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component request.</p>
     */
    inline ComponentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component request.</p>
     */
    inline ComponentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The property groups.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& GetPropertyGroups() const{ return m_propertyGroups; }

    /**
     * <p>The property groups.</p>
     */
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }

    /**
     * <p>The property groups.</p>
     */
    inline void SetPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }

    /**
     * <p>The property groups.</p>
     */
    inline void SetPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupResponse>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& WithPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& value) { SetPropertyGroups(value); return *this;}

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& WithPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupResponse>&& value) { SetPropertyGroups(std::move(value)); return *this;}

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& AddPropertyGroups(const Aws::String& key, const ComponentPropertyGroupResponse& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& AddPropertyGroups(Aws::String&& key, const ComponentPropertyGroupResponse& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), value); return *this; }

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& AddPropertyGroups(const Aws::String& key, ComponentPropertyGroupResponse&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& AddPropertyGroups(Aws::String&& key, ComponentPropertyGroupResponse&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& AddPropertyGroups(const char* key, ComponentPropertyGroupResponse&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The property groups.</p>
     */
    inline ComponentSummary& AddPropertyGroups(const char* key, const ComponentPropertyGroupResponse& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }


    /**
     * <p>The status of the component type.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the component type.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the component type.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the component type.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the component type.</p>
     */
    inline ComponentSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the component type.</p>
     */
    inline ComponentSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline void SetSyncSource(const Aws::String& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline void SetSyncSource(Aws::String&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline void SetSyncSource(const char* value) { m_syncSourceHasBeenSet = true; m_syncSource.assign(value); }

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline ComponentSummary& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline ComponentSummary& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}

    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline ComponentSummary& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}


    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline const Aws::String& GetComponentPath() const{ return m_componentPath; }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline bool ComponentPathHasBeenSet() const { return m_componentPathHasBeenSet; }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline void SetComponentPath(const Aws::String& value) { m_componentPathHasBeenSet = true; m_componentPath = value; }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline void SetComponentPath(Aws::String&& value) { m_componentPathHasBeenSet = true; m_componentPath = std::move(value); }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline void SetComponentPath(const char* value) { m_componentPathHasBeenSet = true; m_componentPath.assign(value); }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline ComponentSummary& WithComponentPath(const Aws::String& value) { SetComponentPath(value); return *this;}

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline ComponentSummary& WithComponentPath(Aws::String&& value) { SetComponentPath(std::move(value)); return *this;}

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline ComponentSummary& WithComponentPath(const char* value) { SetComponentPath(value); return *this;}

  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::String m_definedIn;
    bool m_definedInHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ComponentPropertyGroupResponse> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    Aws::String m_componentPath;
    bool m_componentPathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
