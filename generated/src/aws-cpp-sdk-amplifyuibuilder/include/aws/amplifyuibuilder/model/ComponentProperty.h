/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ComponentPropertyBindingProperties.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/FormBindingElement.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
  class ComponentConditionProperty;

  /**
   * <p>Describes the configuration for all of a component's properties. Use
   * <code>ComponentProperty</code> to specify the values to render or bind by
   * default.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentProperty">AWS
   * API Reference</a></p>
   */
  class ComponentProperty
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentProperty() = default;
    AWS_AMPLIFYUIBUILDER_API ComponentProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to assign to the component property.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ComponentProperty& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline const ComponentPropertyBindingProperties& GetBindingProperties() const { return m_bindingProperties; }
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }
    template<typename BindingPropertiesT = ComponentPropertyBindingProperties>
    void SetBindingProperties(BindingPropertiesT&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::forward<BindingPropertiesT>(value); }
    template<typename BindingPropertiesT = ComponentPropertyBindingProperties>
    ComponentProperty& WithBindingProperties(BindingPropertiesT&& value) { SetBindingProperties(std::forward<BindingPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline const ComponentPropertyBindingProperties& GetCollectionBindingProperties() const { return m_collectionBindingProperties; }
    inline bool CollectionBindingPropertiesHasBeenSet() const { return m_collectionBindingPropertiesHasBeenSet; }
    template<typename CollectionBindingPropertiesT = ComponentPropertyBindingProperties>
    void SetCollectionBindingProperties(CollectionBindingPropertiesT&& value) { m_collectionBindingPropertiesHasBeenSet = true; m_collectionBindingProperties = std::forward<CollectionBindingPropertiesT>(value); }
    template<typename CollectionBindingPropertiesT = ComponentPropertyBindingProperties>
    ComponentProperty& WithCollectionBindingProperties(CollectionBindingPropertiesT&& value) { SetCollectionBindingProperties(std::forward<CollectionBindingPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ComponentProperty& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    ComponentProperty& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline const Aws::Map<Aws::String, FormBindingElement>& GetBindings() const { return m_bindings; }
    inline bool BindingsHasBeenSet() const { return m_bindingsHasBeenSet; }
    template<typename BindingsT = Aws::Map<Aws::String, FormBindingElement>>
    void SetBindings(BindingsT&& value) { m_bindingsHasBeenSet = true; m_bindings = std::forward<BindingsT>(value); }
    template<typename BindingsT = Aws::Map<Aws::String, FormBindingElement>>
    ComponentProperty& WithBindings(BindingsT&& value) { SetBindings(std::forward<BindingsT>(value)); return *this;}
    template<typename BindingsKeyT = Aws::String, typename BindingsValueT = FormBindingElement>
    ComponentProperty& AddBindings(BindingsKeyT&& key, BindingsValueT&& value) {
      m_bindingsHasBeenSet = true; m_bindings.emplace(std::forward<BindingsKeyT>(key), std::forward<BindingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline const Aws::String& GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    template<typename EventT = Aws::String>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = Aws::String>
    ComponentProperty& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline const Aws::String& GetUserAttribute() const { return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    template<typename UserAttributeT = Aws::String>
    void SetUserAttribute(UserAttributeT&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::forward<UserAttributeT>(value); }
    template<typename UserAttributeT = Aws::String>
    ComponentProperty& WithUserAttribute(UserAttributeT&& value) { SetUserAttribute(std::forward<UserAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline const Aws::Vector<ComponentProperty>& GetConcat() const { return m_concat; }
    inline bool ConcatHasBeenSet() const { return m_concatHasBeenSet; }
    template<typename ConcatT = Aws::Vector<ComponentProperty>>
    void SetConcat(ConcatT&& value) { m_concatHasBeenSet = true; m_concat = std::forward<ConcatT>(value); }
    template<typename ConcatT = Aws::Vector<ComponentProperty>>
    ComponentProperty& WithConcat(ConcatT&& value) { SetConcat(std::forward<ConcatT>(value)); return *this;}
    template<typename ConcatT = ComponentProperty>
    ComponentProperty& AddConcat(ConcatT&& value) { m_concatHasBeenSet = true; m_concat.emplace_back(std::forward<ConcatT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    inline const ComponentConditionProperty& GetCondition() const{
      return *m_condition;
    }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = ComponentConditionProperty>
    void SetCondition(ConditionT&& value) {
      m_conditionHasBeenSet = true; 
      m_condition = Aws::MakeShared<ComponentConditionProperty>("ComponentProperty", std::forward<ConditionT>(value));
    }
    template<typename ConditionT = ComponentConditionProperty>
    ComponentProperty& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user configured the property in Amplify Studio after
     * importing it.</p>
     */
    inline bool GetConfigured() const { return m_configured; }
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }
    inline ComponentProperty& WithConfigured(bool value) { SetConfigured(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The component type.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ComponentProperty& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline const Aws::String& GetImportedValue() const { return m_importedValue; }
    inline bool ImportedValueHasBeenSet() const { return m_importedValueHasBeenSet; }
    template<typename ImportedValueT = Aws::String>
    void SetImportedValue(ImportedValueT&& value) { m_importedValueHasBeenSet = true; m_importedValue = std::forward<ImportedValueT>(value); }
    template<typename ImportedValueT = Aws::String>
    ComponentProperty& WithImportedValue(ImportedValueT&& value) { SetImportedValue(std::forward<ImportedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    ComponentProperty& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline const Aws::String& GetProperty() const { return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    template<typename PropertyT = Aws::String>
    void SetProperty(PropertyT&& value) { m_propertyHasBeenSet = true; m_property = std::forward<PropertyT>(value); }
    template<typename PropertyT = Aws::String>
    ComponentProperty& WithProperty(PropertyT&& value) { SetProperty(std::forward<PropertyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ComponentPropertyBindingProperties m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;

    ComponentPropertyBindingProperties m_collectionBindingProperties;
    bool m_collectionBindingPropertiesHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::Map<Aws::String, FormBindingElement> m_bindings;
    bool m_bindingsHasBeenSet = false;

    Aws::String m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;

    Aws::Vector<ComponentProperty> m_concat;
    bool m_concatHasBeenSet = false;

    std::shared_ptr<ComponentConditionProperty> m_condition;
    bool m_conditionHasBeenSet = false;

    bool m_configured{false};
    bool m_configuredHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_importedValue;
    bool m_importedValueHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
