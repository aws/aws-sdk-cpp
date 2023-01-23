/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ComponentPropertyBindingProperties.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/FormBindingElement.h>
#include <utility>
#include <memory>

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
    AWS_AMPLIFYUIBUILDER_API ComponentProperty();
    AWS_AMPLIFYUIBUILDER_API ComponentProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline const ComponentPropertyBindingProperties& GetBindingProperties() const{ return m_bindingProperties; }

    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }

    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline void SetBindingProperties(const ComponentPropertyBindingProperties& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }

    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline void SetBindingProperties(ComponentPropertyBindingProperties&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }

    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline ComponentProperty& WithBindingProperties(const ComponentPropertyBindingProperties& value) { SetBindingProperties(value); return *this;}

    /**
     * <p>The information to bind the component property to data at runtime.</p>
     */
    inline ComponentProperty& WithBindingProperties(ComponentPropertyBindingProperties&& value) { SetBindingProperties(std::move(value)); return *this;}


    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline const Aws::Map<Aws::String, FormBindingElement>& GetBindings() const{ return m_bindings; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline bool BindingsHasBeenSet() const { return m_bindingsHasBeenSet; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline void SetBindings(const Aws::Map<Aws::String, FormBindingElement>& value) { m_bindingsHasBeenSet = true; m_bindings = value; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline void SetBindings(Aws::Map<Aws::String, FormBindingElement>&& value) { m_bindingsHasBeenSet = true; m_bindings = std::move(value); }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& WithBindings(const Aws::Map<Aws::String, FormBindingElement>& value) { SetBindings(value); return *this;}

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& WithBindings(Aws::Map<Aws::String, FormBindingElement>&& value) { SetBindings(std::move(value)); return *this;}

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& AddBindings(const Aws::String& key, const FormBindingElement& value) { m_bindingsHasBeenSet = true; m_bindings.emplace(key, value); return *this; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& AddBindings(Aws::String&& key, const FormBindingElement& value) { m_bindingsHasBeenSet = true; m_bindings.emplace(std::move(key), value); return *this; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& AddBindings(const Aws::String& key, FormBindingElement&& value) { m_bindingsHasBeenSet = true; m_bindings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& AddBindings(Aws::String&& key, FormBindingElement&& value) { m_bindingsHasBeenSet = true; m_bindings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& AddBindings(const char* key, FormBindingElement&& value) { m_bindingsHasBeenSet = true; m_bindings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The information to bind the component property to form data.</p>
     */
    inline ComponentProperty& AddBindings(const char* key, const FormBindingElement& value) { m_bindingsHasBeenSet = true; m_bindings.emplace(key, value); return *this; }


    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline const ComponentPropertyBindingProperties& GetCollectionBindingProperties() const{ return m_collectionBindingProperties; }

    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline bool CollectionBindingPropertiesHasBeenSet() const { return m_collectionBindingPropertiesHasBeenSet; }

    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline void SetCollectionBindingProperties(const ComponentPropertyBindingProperties& value) { m_collectionBindingPropertiesHasBeenSet = true; m_collectionBindingProperties = value; }

    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline void SetCollectionBindingProperties(ComponentPropertyBindingProperties&& value) { m_collectionBindingPropertiesHasBeenSet = true; m_collectionBindingProperties = std::move(value); }

    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline ComponentProperty& WithCollectionBindingProperties(const ComponentPropertyBindingProperties& value) { SetCollectionBindingProperties(value); return *this;}

    /**
     * <p>The information to bind the component property to data at runtime. Use this
     * for collection components.</p>
     */
    inline ComponentProperty& WithCollectionBindingProperties(ComponentPropertyBindingProperties&& value) { SetCollectionBindingProperties(std::move(value)); return *this;}


    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline ComponentProperty& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline ComponentProperty& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component that is affected by an event.</p>
     */
    inline ComponentProperty& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline const Aws::Vector<ComponentProperty>& GetConcat() const{ return m_concat; }

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline bool ConcatHasBeenSet() const { return m_concatHasBeenSet; }

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline void SetConcat(const Aws::Vector<ComponentProperty>& value) { m_concatHasBeenSet = true; m_concat = value; }

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline void SetConcat(Aws::Vector<ComponentProperty>&& value) { m_concatHasBeenSet = true; m_concat = std::move(value); }

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline ComponentProperty& WithConcat(const Aws::Vector<ComponentProperty>& value) { SetConcat(value); return *this;}

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline ComponentProperty& WithConcat(Aws::Vector<ComponentProperty>&& value) { SetConcat(std::move(value)); return *this;}

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline ComponentProperty& AddConcat(const ComponentProperty& value) { m_concatHasBeenSet = true; m_concat.push_back(value); return *this; }

    /**
     * <p>A list of component properties to concatenate to create the value to assign
     * to this component property.</p>
     */
    inline ComponentProperty& AddConcat(ComponentProperty&& value) { m_concatHasBeenSet = true; m_concat.push_back(std::move(value)); return *this; }


    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    AWS_AMPLIFYUIBUILDER_API const ComponentConditionProperty& GetCondition() const;

    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    AWS_AMPLIFYUIBUILDER_API bool ConditionHasBeenSet() const;

    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    AWS_AMPLIFYUIBUILDER_API void SetCondition(const ComponentConditionProperty& value);

    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    AWS_AMPLIFYUIBUILDER_API void SetCondition(ComponentConditionProperty&& value);

    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    AWS_AMPLIFYUIBUILDER_API ComponentProperty& WithCondition(const ComponentConditionProperty& value);

    /**
     * <p>The conditional expression to use to assign a value to the component
     * property.</p>
     */
    AWS_AMPLIFYUIBUILDER_API ComponentProperty& WithCondition(ComponentConditionProperty&& value);


    /**
     * <p>Specifies whether the user configured the property in Amplify Studio after
     * importing it.</p>
     */
    inline bool GetConfigured() const{ return m_configured; }

    /**
     * <p>Specifies whether the user configured the property in Amplify Studio after
     * importing it.</p>
     */
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }

    /**
     * <p>Specifies whether the user configured the property in Amplify Studio after
     * importing it.</p>
     */
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }

    /**
     * <p>Specifies whether the user configured the property in Amplify Studio after
     * importing it.</p>
     */
    inline ComponentProperty& WithConfigured(bool value) { SetConfigured(value); return *this;}


    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline ComponentProperty& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline ComponentProperty& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value to assign to the component property.</p>
     */
    inline ComponentProperty& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline const Aws::String& GetEvent() const{ return m_event; }

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline void SetEvent(const Aws::String& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline void SetEvent(Aws::String&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline void SetEvent(const char* value) { m_eventHasBeenSet = true; m_event.assign(value); }

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline ComponentProperty& WithEvent(const Aws::String& value) { SetEvent(value); return *this;}

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline ComponentProperty& WithEvent(Aws::String&& value) { SetEvent(std::move(value)); return *this;}

    /**
     * <p>An event that occurs in your app. Use this for workflow data binding.</p>
     */
    inline ComponentProperty& WithEvent(const char* value) { SetEvent(value); return *this;}


    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline const Aws::String& GetImportedValue() const{ return m_importedValue; }

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline bool ImportedValueHasBeenSet() const { return m_importedValueHasBeenSet; }

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline void SetImportedValue(const Aws::String& value) { m_importedValueHasBeenSet = true; m_importedValue = value; }

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline void SetImportedValue(Aws::String&& value) { m_importedValueHasBeenSet = true; m_importedValue = std::move(value); }

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline void SetImportedValue(const char* value) { m_importedValueHasBeenSet = true; m_importedValue.assign(value); }

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline ComponentProperty& WithImportedValue(const Aws::String& value) { SetImportedValue(value); return *this;}

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline ComponentProperty& WithImportedValue(Aws::String&& value) { SetImportedValue(std::move(value)); return *this;}

    /**
     * <p>The default value assigned to the property when the component is imported
     * into an app.</p>
     */
    inline ComponentProperty& WithImportedValue(const char* value) { SetImportedValue(value); return *this;}


    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline ComponentProperty& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline ComponentProperty& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The data model to use to assign a value to the component property.</p>
     */
    inline ComponentProperty& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline ComponentProperty& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline ComponentProperty& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}

    /**
     * <p>The name of the component's property that is affected by an event.</p>
     */
    inline ComponentProperty& WithProperty(const char* value) { SetProperty(value); return *this;}


    /**
     * <p>The component type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The component type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The component type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The component type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The component type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The component type.</p>
     */
    inline ComponentProperty& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The component type.</p>
     */
    inline ComponentProperty& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The component type.</p>
     */
    inline ComponentProperty& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline const Aws::String& GetUserAttribute() const{ return m_userAttribute; }

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline void SetUserAttribute(const Aws::String& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline void SetUserAttribute(Aws::String&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline void SetUserAttribute(const char* value) { m_userAttributeHasBeenSet = true; m_userAttribute.assign(value); }

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline ComponentProperty& WithUserAttribute(const Aws::String& value) { SetUserAttribute(value); return *this;}

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline ComponentProperty& WithUserAttribute(Aws::String&& value) { SetUserAttribute(std::move(value)); return *this;}

    /**
     * <p>An authenticated user attribute to use to assign a value to the component
     * property.</p>
     */
    inline ComponentProperty& WithUserAttribute(const char* value) { SetUserAttribute(value); return *this;}


    /**
     * <p>The value to assign to the component property.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline ComponentProperty& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline ComponentProperty& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to assign to the component property.</p>
     */
    inline ComponentProperty& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ComponentPropertyBindingProperties m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, FormBindingElement> m_bindings;
    bool m_bindingsHasBeenSet = false;

    ComponentPropertyBindingProperties m_collectionBindingProperties;
    bool m_collectionBindingPropertiesHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::Vector<ComponentProperty> m_concat;
    bool m_concatHasBeenSet = false;

    std::shared_ptr<ComponentConditionProperty> m_condition;
    bool m_conditionHasBeenSet = false;

    bool m_configured;
    bool m_configuredHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_importedValue;
    bool m_importedValueHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
