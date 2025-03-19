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
    AWS_IOTTWINMAKER_API ComponentResponse() = default;
    AWS_IOTTWINMAKER_API ComponentResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    ComponentResponse& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ComponentResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const { return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    template<typename ComponentTypeIdT = Aws::String>
    void SetComponentTypeId(ComponentTypeIdT&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::forward<ComponentTypeIdT>(value); }
    template<typename ComponentTypeIdT = Aws::String>
    ComponentResponse& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component type.</p>
     */
    inline const Status& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Status>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Status>
    ComponentResponse& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property definition set in the request.</p>
     */
    inline const Aws::String& GetDefinedIn() const { return m_definedIn; }
    inline bool DefinedInHasBeenSet() const { return m_definedInHasBeenSet; }
    template<typename DefinedInT = Aws::String>
    void SetDefinedIn(DefinedInT&& value) { m_definedInHasBeenSet = true; m_definedIn = std::forward<DefinedInT>(value); }
    template<typename DefinedInT = Aws::String>
    ComponentResponse& WithDefinedIn(DefinedInT&& value) { SetDefinedIn(std::forward<DefinedInT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the properties to set in the component type.
     * Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyResponse>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, PropertyResponse>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, PropertyResponse>>
    ComponentResponse& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = PropertyResponse>
    ComponentResponse& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The property groups.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupResponse>& GetPropertyGroups() const { return m_propertyGroups; }
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }
    template<typename PropertyGroupsT = Aws::Map<Aws::String, ComponentPropertyGroupResponse>>
    void SetPropertyGroups(PropertyGroupsT&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::forward<PropertyGroupsT>(value); }
    template<typename PropertyGroupsT = Aws::Map<Aws::String, ComponentPropertyGroupResponse>>
    ComponentResponse& WithPropertyGroups(PropertyGroupsT&& value) { SetPropertyGroups(std::forward<PropertyGroupsT>(value)); return *this;}
    template<typename PropertyGroupsKeyT = Aws::String, typename PropertyGroupsValueT = ComponentPropertyGroupResponse>
    ComponentResponse& AddPropertyGroups(PropertyGroupsKeyT&& key, PropertyGroupsValueT&& value) {
      m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::forward<PropertyGroupsKeyT>(key), std::forward<PropertyGroupsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The syncSource of the sync job, if this entity was created by a sync job.</p>
     */
    inline const Aws::String& GetSyncSource() const { return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    template<typename SyncSourceT = Aws::String>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = Aws::String>
    ComponentResponse& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag notes whether all properties of the component are returned in the
     * API response. The maximum number of properties returned is 800.</p>
     */
    inline bool GetAreAllPropertiesReturned() const { return m_areAllPropertiesReturned; }
    inline bool AreAllPropertiesReturnedHasBeenSet() const { return m_areAllPropertiesReturnedHasBeenSet; }
    inline void SetAreAllPropertiesReturned(bool value) { m_areAllPropertiesReturnedHasBeenSet = true; m_areAllPropertiesReturned = value; }
    inline ComponentResponse& WithAreAllPropertiesReturned(bool value) { SetAreAllPropertiesReturned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This lists objects that contain information about the
     * <code>compositeComponents</code>.</p>
     */
    inline const Aws::Map<Aws::String, ComponentSummary>& GetCompositeComponents() const { return m_compositeComponents; }
    inline bool CompositeComponentsHasBeenSet() const { return m_compositeComponentsHasBeenSet; }
    template<typename CompositeComponentsT = Aws::Map<Aws::String, ComponentSummary>>
    void SetCompositeComponents(CompositeComponentsT&& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents = std::forward<CompositeComponentsT>(value); }
    template<typename CompositeComponentsT = Aws::Map<Aws::String, ComponentSummary>>
    ComponentResponse& WithCompositeComponents(CompositeComponentsT&& value) { SetCompositeComponents(std::forward<CompositeComponentsT>(value)); return *this;}
    template<typename CompositeComponentsKeyT = Aws::String, typename CompositeComponentsValueT = ComponentSummary>
    ComponentResponse& AddCompositeComponents(CompositeComponentsKeyT&& key, CompositeComponentsValueT&& value) {
      m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(std::forward<CompositeComponentsKeyT>(key), std::forward<CompositeComponentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This flag notes whether all <code>compositeComponents</code> are returned in
     * the API response.</p>
     */
    inline bool GetAreAllCompositeComponentsReturned() const { return m_areAllCompositeComponentsReturned; }
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

    bool m_areAllPropertiesReturned{false};
    bool m_areAllPropertiesReturnedHasBeenSet = false;

    Aws::Map<Aws::String, ComponentSummary> m_compositeComponents;
    bool m_compositeComponentsHasBeenSet = false;

    bool m_areAllCompositeComponentsReturned{false};
    bool m_areAllCompositeComponentsReturnedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
