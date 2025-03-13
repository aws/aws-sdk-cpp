/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/ComponentUpdateType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/PropertyRequest.h>
#include <aws/iottwinmaker/model/ComponentPropertyGroupRequest.h>
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
   * <p>The component update request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ComponentUpdateRequest">AWS
   * API Reference</a></p>
   */
  class ComponentUpdateRequest
  {
  public:
    AWS_IOTTWINMAKER_API ComponentUpdateRequest() = default;
    AWS_IOTTWINMAKER_API ComponentUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The update type of the component update request.</p>
     */
    inline ComponentUpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(ComponentUpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline ComponentUpdateRequest& WithUpdateType(ComponentUpdateType value) { SetUpdateType(value); return *this;}
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
    ComponentUpdateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ComponentUpdateRequest& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyRequest>& GetPropertyUpdates() const { return m_propertyUpdates; }
    inline bool PropertyUpdatesHasBeenSet() const { return m_propertyUpdatesHasBeenSet; }
    template<typename PropertyUpdatesT = Aws::Map<Aws::String, PropertyRequest>>
    void SetPropertyUpdates(PropertyUpdatesT&& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates = std::forward<PropertyUpdatesT>(value); }
    template<typename PropertyUpdatesT = Aws::Map<Aws::String, PropertyRequest>>
    ComponentUpdateRequest& WithPropertyUpdates(PropertyUpdatesT&& value) { SetPropertyUpdates(std::forward<PropertyUpdatesT>(value)); return *this;}
    template<typename PropertyUpdatesKeyT = Aws::String, typename PropertyUpdatesValueT = PropertyRequest>
    ComponentUpdateRequest& AddPropertyUpdates(PropertyUpdatesKeyT&& key, PropertyUpdatesValueT&& value) {
      m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(std::forward<PropertyUpdatesKeyT>(key), std::forward<PropertyUpdatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The property group updates.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& GetPropertyGroupUpdates() const { return m_propertyGroupUpdates; }
    inline bool PropertyGroupUpdatesHasBeenSet() const { return m_propertyGroupUpdatesHasBeenSet; }
    template<typename PropertyGroupUpdatesT = Aws::Map<Aws::String, ComponentPropertyGroupRequest>>
    void SetPropertyGroupUpdates(PropertyGroupUpdatesT&& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates = std::forward<PropertyGroupUpdatesT>(value); }
    template<typename PropertyGroupUpdatesT = Aws::Map<Aws::String, ComponentPropertyGroupRequest>>
    ComponentUpdateRequest& WithPropertyGroupUpdates(PropertyGroupUpdatesT&& value) { SetPropertyGroupUpdates(std::forward<PropertyGroupUpdatesT>(value)); return *this;}
    template<typename PropertyGroupUpdatesKeyT = Aws::String, typename PropertyGroupUpdatesValueT = ComponentPropertyGroupRequest>
    ComponentUpdateRequest& AddPropertyGroupUpdates(PropertyGroupUpdatesKeyT&& key, PropertyGroupUpdatesValueT&& value) {
      m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(std::forward<PropertyGroupUpdatesKeyT>(key), std::forward<PropertyGroupUpdatesValueT>(value)); return *this;
    }
    ///@}
  private:

    ComponentUpdateType m_updateType{ComponentUpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::Map<Aws::String, PropertyRequest> m_propertyUpdates;
    bool m_propertyUpdatesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentPropertyGroupRequest> m_propertyGroupUpdates;
    bool m_propertyGroupUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
