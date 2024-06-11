/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>
#include <aws/amplifyuibuilder/model/ComponentChild.h>
#include <aws/amplifyuibuilder/model/ComponentVariant.h>
#include <aws/amplifyuibuilder/model/ComponentBindingPropertiesValue.h>
#include <aws/amplifyuibuilder/model/ComponentDataConfiguration.h>
#include <aws/amplifyuibuilder/model/ComponentEvent.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Updates and saves all of the information about a component, based on
   * component ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateComponentData">AWS
   * API Reference</a></p>
   */
  class UpdateComponentData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateComponentData();
    AWS_AMPLIFYUIBUILDER_API UpdateComponentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API UpdateComponentData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the component to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateComponentData& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateComponentData& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateComponentData& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateComponentData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateComponentData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateComponentData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline UpdateComponentData& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline UpdateComponentData& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline UpdateComponentData& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }
    inline UpdateComponentData& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}
    inline UpdateComponentData& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}
    inline UpdateComponentData& WithComponentType(const char* value) { SetComponentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the component's properties.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, ComponentProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, ComponentProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline UpdateComponentData& WithProperties(const Aws::Map<Aws::String, ComponentProperty>& value) { SetProperties(value); return *this;}
    inline UpdateComponentData& WithProperties(Aws::Map<Aws::String, ComponentProperty>&& value) { SetProperties(std::move(value)); return *this;}
    inline UpdateComponentData& AddProperties(const Aws::String& key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline UpdateComponentData& AddProperties(Aws::String&& key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline UpdateComponentData& AddProperties(const Aws::String& key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddProperties(Aws::String&& key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateComponentData& AddProperties(const char* key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddProperties(const char* key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The components that are instances of the main component.</p>
     */
    inline const Aws::Vector<ComponentChild>& GetChildren() const{ return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    inline void SetChildren(const Aws::Vector<ComponentChild>& value) { m_childrenHasBeenSet = true; m_children = value; }
    inline void SetChildren(Aws::Vector<ComponentChild>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }
    inline UpdateComponentData& WithChildren(const Aws::Vector<ComponentChild>& value) { SetChildren(value); return *this;}
    inline UpdateComponentData& WithChildren(Aws::Vector<ComponentChild>&& value) { SetChildren(std::move(value)); return *this;}
    inline UpdateComponentData& AddChildren(const ComponentChild& value) { m_childrenHasBeenSet = true; m_children.push_back(value); return *this; }
    inline UpdateComponentData& AddChildren(ComponentChild&& value) { m_childrenHasBeenSet = true; m_children.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the unique variants of the main component being updated.</p>
     */
    inline const Aws::Vector<ComponentVariant>& GetVariants() const{ return m_variants; }
    inline bool VariantsHasBeenSet() const { return m_variantsHasBeenSet; }
    inline void SetVariants(const Aws::Vector<ComponentVariant>& value) { m_variantsHasBeenSet = true; m_variants = value; }
    inline void SetVariants(Aws::Vector<ComponentVariant>&& value) { m_variantsHasBeenSet = true; m_variants = std::move(value); }
    inline UpdateComponentData& WithVariants(const Aws::Vector<ComponentVariant>& value) { SetVariants(value); return *this;}
    inline UpdateComponentData& WithVariants(Aws::Vector<ComponentVariant>&& value) { SetVariants(std::move(value)); return *this;}
    inline UpdateComponentData& AddVariants(const ComponentVariant& value) { m_variantsHasBeenSet = true; m_variants.push_back(value); return *this; }
    inline UpdateComponentData& AddVariants(ComponentVariant&& value) { m_variantsHasBeenSet = true; m_variants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the properties that can be overriden to customize the
     * component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetOverrides() const{ return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    inline void SetOverrides(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_overridesHasBeenSet = true; m_overrides = value; }
    inline void SetOverrides(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }
    inline UpdateComponentData& WithOverrides(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetOverrides(value); return *this;}
    inline UpdateComponentData& WithOverrides(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetOverrides(std::move(value)); return *this;}
    inline UpdateComponentData& AddOverrides(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, value); return *this; }
    inline UpdateComponentData& AddOverrides(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(std::move(key), value); return *this; }
    inline UpdateComponentData& AddOverrides(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddOverrides(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateComponentData& AddOverrides(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddOverrides(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data binding information for the component's properties.</p>
     */
    inline const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& GetBindingProperties() const{ return m_bindingProperties; }
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }
    inline void SetBindingProperties(const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }
    inline void SetBindingProperties(Aws::Map<Aws::String, ComponentBindingPropertiesValue>&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }
    inline UpdateComponentData& WithBindingProperties(const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& value) { SetBindingProperties(value); return *this;}
    inline UpdateComponentData& WithBindingProperties(Aws::Map<Aws::String, ComponentBindingPropertiesValue>&& value) { SetBindingProperties(std::move(value)); return *this;}
    inline UpdateComponentData& AddBindingProperties(const Aws::String& key, const ComponentBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, value); return *this; }
    inline UpdateComponentData& AddBindingProperties(Aws::String&& key, const ComponentBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::move(key), value); return *this; }
    inline UpdateComponentData& AddBindingProperties(const Aws::String& key, ComponentBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddBindingProperties(Aws::String&& key, ComponentBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateComponentData& AddBindingProperties(const char* key, ComponentBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddBindingProperties(const char* key, const ComponentBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for binding a component's properties to a data model. Use
     * this for a collection component.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDataConfiguration>& GetCollectionProperties() const{ return m_collectionProperties; }
    inline bool CollectionPropertiesHasBeenSet() const { return m_collectionPropertiesHasBeenSet; }
    inline void SetCollectionProperties(const Aws::Map<Aws::String, ComponentDataConfiguration>& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties = value; }
    inline void SetCollectionProperties(Aws::Map<Aws::String, ComponentDataConfiguration>&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties = std::move(value); }
    inline UpdateComponentData& WithCollectionProperties(const Aws::Map<Aws::String, ComponentDataConfiguration>& value) { SetCollectionProperties(value); return *this;}
    inline UpdateComponentData& WithCollectionProperties(Aws::Map<Aws::String, ComponentDataConfiguration>&& value) { SetCollectionProperties(std::move(value)); return *this;}
    inline UpdateComponentData& AddCollectionProperties(const Aws::String& key, const ComponentDataConfiguration& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, value); return *this; }
    inline UpdateComponentData& AddCollectionProperties(Aws::String&& key, const ComponentDataConfiguration& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(std::move(key), value); return *this; }
    inline UpdateComponentData& AddCollectionProperties(const Aws::String& key, ComponentDataConfiguration&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddCollectionProperties(Aws::String&& key, ComponentDataConfiguration&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateComponentData& AddCollectionProperties(const char* key, ComponentDataConfiguration&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddCollectionProperties(const char* key, const ComponentDataConfiguration& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event configuration for the component. Use for the workflow feature in
     * Amplify Studio that allows you to bind events and actions to components.</p>
     */
    inline const Aws::Map<Aws::String, ComponentEvent>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Map<Aws::String, ComponentEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Map<Aws::String, ComponentEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline UpdateComponentData& WithEvents(const Aws::Map<Aws::String, ComponentEvent>& value) { SetEvents(value); return *this;}
    inline UpdateComponentData& WithEvents(Aws::Map<Aws::String, ComponentEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline UpdateComponentData& AddEvents(const Aws::String& key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }
    inline UpdateComponentData& AddEvents(Aws::String&& key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }
    inline UpdateComponentData& AddEvents(const Aws::String& key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddEvents(Aws::String&& key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateComponentData& AddEvents(const char* key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }
    inline UpdateComponentData& AddEvents(const char* key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline UpdateComponentData& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline UpdateComponentData& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline UpdateComponentData& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Map<Aws::String, ComponentProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<ComponentChild> m_children;
    bool m_childrenHasBeenSet = false;

    Aws::Vector<ComponentVariant> m_variants;
    bool m_variantsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentBindingPropertiesValue> m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentDataConfiguration> m_collectionProperties;
    bool m_collectionPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
