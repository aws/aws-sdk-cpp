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
   * <p>Represents all of the information that is required to create a
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateComponentData">AWS
   * API Reference</a></p>
   */
  class CreateComponentData
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CreateComponentData() = default;
    AWS_AMPLIFYUIBUILDER_API CreateComponentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CreateComponentData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateComponentData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    CreateComponentData& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component type. This can be an Amplify custom UI component or another
     * custom component.</p>
     */
    inline const Aws::String& GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    template<typename ComponentTypeT = Aws::String>
    void SetComponentType(ComponentTypeT&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::forward<ComponentTypeT>(value); }
    template<typename ComponentTypeT = Aws::String>
    CreateComponentData& WithComponentType(ComponentTypeT&& value) { SetComponentType(std::forward<ComponentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the component's properties.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, ComponentProperty>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, ComponentProperty>>
    CreateComponentData& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = ComponentProperty>
    CreateComponentData& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of child components that are instances of the main component.</p>
     */
    inline const Aws::Vector<ComponentChild>& GetChildren() const { return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    template<typename ChildrenT = Aws::Vector<ComponentChild>>
    void SetChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children = std::forward<ChildrenT>(value); }
    template<typename ChildrenT = Aws::Vector<ComponentChild>>
    CreateComponentData& WithChildren(ChildrenT&& value) { SetChildren(std::forward<ChildrenT>(value)); return *this;}
    template<typename ChildrenT = ComponentChild>
    CreateComponentData& AddChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children.emplace_back(std::forward<ChildrenT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the unique variants of this component.</p>
     */
    inline const Aws::Vector<ComponentVariant>& GetVariants() const { return m_variants; }
    inline bool VariantsHasBeenSet() const { return m_variantsHasBeenSet; }
    template<typename VariantsT = Aws::Vector<ComponentVariant>>
    void SetVariants(VariantsT&& value) { m_variantsHasBeenSet = true; m_variants = std::forward<VariantsT>(value); }
    template<typename VariantsT = Aws::Vector<ComponentVariant>>
    CreateComponentData& WithVariants(VariantsT&& value) { SetVariants(std::forward<VariantsT>(value)); return *this;}
    template<typename VariantsT = ComponentVariant>
    CreateComponentData& AddVariants(VariantsT&& value) { m_variantsHasBeenSet = true; m_variants.emplace_back(std::forward<VariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the component properties that can be overriden to customize an
     * instance of the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    CreateComponentData& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesKeyT = Aws::String, typename OverridesValueT = Aws::Map<Aws::String, Aws::String>>
    CreateComponentData& AddOverrides(OverridesKeyT&& key, OverridesValueT&& value) {
      m_overridesHasBeenSet = true; m_overrides.emplace(std::forward<OverridesKeyT>(key), std::forward<OverridesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The data binding information for the component's properties.</p>
     */
    inline const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& GetBindingProperties() const { return m_bindingProperties; }
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }
    template<typename BindingPropertiesT = Aws::Map<Aws::String, ComponentBindingPropertiesValue>>
    void SetBindingProperties(BindingPropertiesT&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::forward<BindingPropertiesT>(value); }
    template<typename BindingPropertiesT = Aws::Map<Aws::String, ComponentBindingPropertiesValue>>
    CreateComponentData& WithBindingProperties(BindingPropertiesT&& value) { SetBindingProperties(std::forward<BindingPropertiesT>(value)); return *this;}
    template<typename BindingPropertiesKeyT = Aws::String, typename BindingPropertiesValueT = ComponentBindingPropertiesValue>
    CreateComponentData& AddBindingProperties(BindingPropertiesKeyT&& key, BindingPropertiesValueT&& value) {
      m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::forward<BindingPropertiesKeyT>(key), std::forward<BindingPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The data binding configuration for customizing a component's properties. Use
     * this for a collection component.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDataConfiguration>& GetCollectionProperties() const { return m_collectionProperties; }
    inline bool CollectionPropertiesHasBeenSet() const { return m_collectionPropertiesHasBeenSet; }
    template<typename CollectionPropertiesT = Aws::Map<Aws::String, ComponentDataConfiguration>>
    void SetCollectionProperties(CollectionPropertiesT&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties = std::forward<CollectionPropertiesT>(value); }
    template<typename CollectionPropertiesT = Aws::Map<Aws::String, ComponentDataConfiguration>>
    CreateComponentData& WithCollectionProperties(CollectionPropertiesT&& value) { SetCollectionProperties(std::forward<CollectionPropertiesT>(value)); return *this;}
    template<typename CollectionPropertiesKeyT = Aws::String, typename CollectionPropertiesValueT = ComponentDataConfiguration>
    CreateComponentData& AddCollectionProperties(CollectionPropertiesKeyT&& key, CollectionPropertiesValueT&& value) {
      m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(std::forward<CollectionPropertiesKeyT>(key), std::forward<CollectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>One or more key-value pairs to use when tagging the component data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateComponentData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateComponentData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The event configuration for the component. Use for the workflow feature in
     * Amplify Studio that allows you to bind events and actions to components.</p>
     */
    inline const Aws::Map<Aws::String, ComponentEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Map<Aws::String, ComponentEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Map<Aws::String, ComponentEvent>>
    CreateComponentData& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsKeyT = Aws::String, typename EventsValueT = ComponentEvent>
    CreateComponentData& AddEvents(EventsKeyT&& key, EventsValueT&& value) {
      m_eventsHasBeenSet = true; m_events.emplace(std::forward<EventsKeyT>(key), std::forward<EventsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    CreateComponentData& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}
  private:

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, ComponentEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
