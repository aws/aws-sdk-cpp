/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/PropertyResponse.h>
#include <aws/iottwinmaker/model/ComponentPropertyGroupResponse.h>
#include <aws/iottwinmaker/model/ComponentSummary.h>
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
   * <p>An object that returns information about a component type create or update
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ComponentResponse">AWS
   * API Reference</a></p>
   */
  class ComponentResponse
  {
  public:
    AWS_IOTTWINMAKER_API ComponentResponse();
    AWS_IOTTWINMAKER_API ComponentResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline ComponentResponse& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline ComponentResponse& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline ComponentResponse& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ComponentResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ComponentResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ComponentResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }
    inline ComponentResponse& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}
    inline ComponentResponse& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}
    inline ComponentResponse& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component type.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ComponentResponse& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline ComponentResponse& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline const Aws::String& GetDefinedIn() const{ return m_definedIn; }
    inline bool DefinedInHasBeenSet() const { return m_definedInHasBeenSet; }
    inline void SetDefinedIn(const Aws::String& value) { m_definedInHasBeenSet = true; m_definedIn = value; }
    inline void SetDefinedIn(Aws::String&& value) { m_definedInHasBeenSet = true; m_definedIn = std::move(value); }
    inline void SetDefinedIn(const char* value) { m_definedInHasBeenSet = true; m_definedIn.assign(value); }
    inline ComponentResponse& WithDefinedIn(const Aws::String& value) { SetDefinedIn(value); return *this;}
    inline ComponentResponse& WithDefinedIn(Aws::String&& value) { SetDefinedIn(std::move(value)); return *this;}
    inline ComponentResponse& WithDefinedIn(const char* value) { SetDefinedIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the properties to set in the component type.
     * Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyResponse>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, PropertyResponse>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, PropertyResponse>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline ComponentResponse& WithProperties(const Aws::Map<Aws::String, PropertyResponse>& value) { SetProperties(value); return *this;}
    inline ComponentResponse& WithProperties(Aws::Map<Aws::String, PropertyResponse>&& value) { SetProperties(std::move(value)); return *this;}
    inline ComponentResponse& AddProperties(const Aws::String& key, const PropertyResponse& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline ComponentResponse& AddProperties(Aws::String&& key, const PropertyResponse& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline ComponentResponse& AddProperties(const Aws::String& key, PropertyResponse&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ComponentResponse& AddProperties(Aws::String&& key, PropertyResponse&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentResponse& AddProperties(const char* key, PropertyResponse&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ComponentResponse& AddProperties(const char* key, const PropertyResponse& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The property groups.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& GetPropertyGroups() const{ return m_propertyGroups; }
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }
    inline void SetPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }
    inline void SetPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupResponse>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }
    inline ComponentResponse& WithPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& value) { SetPropertyGroups(value); return *this;}
    inline ComponentResponse& WithPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupResponse>&& value) { SetPropertyGroups(std::move(value)); return *this;}
    inline ComponentResponse& AddPropertyGroups(const Aws::String& key, const ComponentPropertyGroupResponse& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }
    inline ComponentResponse& AddPropertyGroups(Aws::String&& key, const ComponentPropertyGroupResponse& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), value); return *this; }
    inline ComponentResponse& AddPropertyGroups(const Aws::String& key, ComponentPropertyGroupResponse&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }
    inline ComponentResponse& AddPropertyGroups(Aws::String&& key, ComponentPropertyGroupResponse&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentResponse& AddPropertyGroups(const char* key, ComponentPropertyGroupResponse&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }
    inline ComponentResponse& AddPropertyGroups(const char* key, const ComponentPropertyGroupResponse& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The syncSource of the sync job, if this entity was created by a sync job.</p>
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    inline void SetSyncSource(const Aws::String& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }
    inline void SetSyncSource(Aws::String&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }
    inline void SetSyncSource(const char* value) { m_syncSourceHasBeenSet = true; m_syncSource.assign(value); }
    inline ComponentResponse& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}
    inline ComponentResponse& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}
    inline ComponentResponse& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag notes whether all properties of the component are returned in the
     * API response. The maximum number of properties returned is 800.</p>
     */
    inline bool GetAreAllPropertiesReturned() const{ return m_areAllPropertiesReturned; }
    inline bool AreAllPropertiesReturnedHasBeenSet() const { return m_areAllPropertiesReturnedHasBeenSet; }
    inline void SetAreAllPropertiesReturned(bool value) { m_areAllPropertiesReturnedHasBeenSet = true; m_areAllPropertiesReturned = value; }
    inline ComponentResponse& WithAreAllPropertiesReturned(bool value) { SetAreAllPropertiesReturned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This lists objects that contain information about the
     * <code>compositeComponents</code>.</p>
     */
    inline const Aws::Map<Aws::String, ComponentSummary>& GetCompositeComponents() const{ return m_compositeComponents; }
    inline bool CompositeComponentsHasBeenSet() const { return m_compositeComponentsHasBeenSet; }
    inline void SetCompositeComponents(const Aws::Map<Aws::String, ComponentSummary>& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents = value; }
    inline void SetCompositeComponents(Aws::Map<Aws::String, ComponentSummary>&& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents = std::move(value); }
    inline ComponentResponse& WithCompositeComponents(const Aws::Map<Aws::String, ComponentSummary>& value) { SetCompositeComponents(value); return *this;}
    inline ComponentResponse& WithCompositeComponents(Aws::Map<Aws::String, ComponentSummary>&& value) { SetCompositeComponents(std::move(value)); return *this;}
    inline ComponentResponse& AddCompositeComponents(const Aws::String& key, const ComponentSummary& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(key, value); return *this; }
    inline ComponentResponse& AddCompositeComponents(Aws::String&& key, const ComponentSummary& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(std::move(key), value); return *this; }
    inline ComponentResponse& AddCompositeComponents(const Aws::String& key, ComponentSummary&& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(key, std::move(value)); return *this; }
    inline ComponentResponse& AddCompositeComponents(Aws::String&& key, ComponentSummary&& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentResponse& AddCompositeComponents(const char* key, ComponentSummary&& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(key, std::move(value)); return *this; }
    inline ComponentResponse& AddCompositeComponents(const char* key, const ComponentSummary& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This flag notes whether all <code>compositeComponents</code> are returned in
     * the API response.</p>
     */
    inline bool GetAreAllCompositeComponentsReturned() const{ return m_areAllCompositeComponentsReturned; }
    inline bool AreAllCompositeComponentsReturnedHasBeenSet() const { return m_areAllCompositeComponentsReturnedHasBeenSet; }
    inline void SetAreAllCompositeComponentsReturned(bool value) { m_areAllCompositeComponentsReturnedHasBeenSet = true; m_areAllCompositeComponentsReturned = value; }
    inline ComponentResponse& WithAreAllCompositeComponentsReturned(bool value) { SetAreAllCompositeComponentsReturned(value); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_definedIn;
    bool m_definedInHasBeenSet = false;

    Aws::Map<Aws::String, PropertyResponse> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentPropertyGroupResponse> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    bool m_areAllPropertiesReturned;
    bool m_areAllPropertiesReturnedHasBeenSet = false;

    Aws::Map<Aws::String, ComponentSummary> m_compositeComponents;
    bool m_compositeComponentsHasBeenSet = false;

    bool m_areAllCompositeComponentsReturned;
    bool m_areAllCompositeComponentsReturnedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
