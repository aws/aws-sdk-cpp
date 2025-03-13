/**
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
    AWS_IOTTWINMAKER_API ComponentSummary() = default;
    AWS_IOTTWINMAKER_API ComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ComponentSummary& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
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
    ComponentSummary& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
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
    ComponentSummary& WithDefinedIn(DefinedInT&& value) { SetDefinedIn(std::forward<DefinedInT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the component request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ComponentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ComponentSummary& WithPropertyGroups(PropertyGroupsT&& value) { SetPropertyGroups(std::forward<PropertyGroupsT>(value)); return *this;}
    template<typename PropertyGroupsKeyT = Aws::String, typename PropertyGroupsValueT = ComponentPropertyGroupResponse>
    ComponentSummary& AddPropertyGroups(PropertyGroupsKeyT&& key, PropertyGroupsValueT&& value) {
      m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::forward<PropertyGroupsKeyT>(key), std::forward<PropertyGroupsValueT>(value)); return *this;
    }
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
    ComponentSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>syncSource</code> of the sync job, if this entity was created by a
     * sync job.</p>
     */
    inline const Aws::String& GetSyncSource() const { return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    template<typename SyncSourceT = Aws::String>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = Aws::String>
    ComponentSummary& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline const Aws::String& GetComponentPath() const { return m_componentPath; }
    inline bool ComponentPathHasBeenSet() const { return m_componentPathHasBeenSet; }
    template<typename ComponentPathT = Aws::String>
    void SetComponentPath(ComponentPathT&& value) { m_componentPathHasBeenSet = true; m_componentPath = std::forward<ComponentPathT>(value); }
    template<typename ComponentPathT = Aws::String>
    ComponentSummary& WithComponentPath(ComponentPathT&& value) { SetComponentPath(std::forward<ComponentPathT>(value)); return *this;}
    ///@}
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
