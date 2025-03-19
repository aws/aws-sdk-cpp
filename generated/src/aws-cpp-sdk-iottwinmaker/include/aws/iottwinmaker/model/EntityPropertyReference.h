/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>An object that uniquely identifies an entity property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/EntityPropertyReference">AWS
   * API Reference</a></p>
   */
  class EntityPropertyReference
  {
  public:
    AWS_IOTTWINMAKER_API EntityPropertyReference() = default;
    AWS_IOTTWINMAKER_API EntityPropertyReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API EntityPropertyReference& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    EntityPropertyReference& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
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
    EntityPropertyReference& WithComponentPath(ComponentPathT&& value) { SetComponentPath(std::forward<ComponentPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of external IDs to property names. External IDs uniquely identify
     * properties from external data stores.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExternalIdProperty() const { return m_externalIdProperty; }
    inline bool ExternalIdPropertyHasBeenSet() const { return m_externalIdPropertyHasBeenSet; }
    template<typename ExternalIdPropertyT = Aws::Map<Aws::String, Aws::String>>
    void SetExternalIdProperty(ExternalIdPropertyT&& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty = std::forward<ExternalIdPropertyT>(value); }
    template<typename ExternalIdPropertyT = Aws::Map<Aws::String, Aws::String>>
    EntityPropertyReference& WithExternalIdProperty(ExternalIdPropertyT&& value) { SetExternalIdProperty(std::forward<ExternalIdPropertyT>(value)); return *this;}
    template<typename ExternalIdPropertyKeyT = Aws::String, typename ExternalIdPropertyValueT = Aws::String>
    EntityPropertyReference& AddExternalIdProperty(ExternalIdPropertyKeyT&& key, ExternalIdPropertyValueT&& value) {
      m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(std::forward<ExternalIdPropertyKeyT>(key), std::forward<ExternalIdPropertyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    EntityPropertyReference& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetPropertyName() const { return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    template<typename PropertyNameT = Aws::String>
    void SetPropertyName(PropertyNameT&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::forward<PropertyNameT>(value); }
    template<typename PropertyNameT = Aws::String>
    EntityPropertyReference& WithPropertyName(PropertyNameT&& value) { SetPropertyName(std::forward<PropertyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentPath;
    bool m_componentPathHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_externalIdProperty;
    bool m_externalIdPropertyHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
