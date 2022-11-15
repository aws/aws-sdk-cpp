/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ComponentProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifyuibuilder/model/ComponentConditionProperty.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ComponentProperty::ComponentProperty() : 
    m_bindingPropertiesHasBeenSet(false),
    m_bindingsHasBeenSet(false),
    m_collectionBindingPropertiesHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_concatHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_configured(false),
    m_configuredHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_importedValueHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_userAttributeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ComponentProperty::ComponentProperty(JsonView jsonValue) : 
    m_bindingPropertiesHasBeenSet(false),
    m_bindingsHasBeenSet(false),
    m_collectionBindingPropertiesHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_concatHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_configured(false),
    m_configuredHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_importedValueHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_userAttributeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

const ComponentConditionProperty& ComponentProperty::GetCondition() const{ return *m_condition; }
bool ComponentProperty::ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
void ComponentProperty::SetCondition(const ComponentConditionProperty& value) { m_conditionHasBeenSet = true; m_condition = Aws::MakeShared<ComponentConditionProperty>("ComponentProperty", value); }
void ComponentProperty::SetCondition(ComponentConditionProperty&& value) { m_conditionHasBeenSet = true; m_condition = Aws::MakeShared<ComponentConditionProperty>("ComponentProperty", std::move(value)); }
ComponentProperty& ComponentProperty::WithCondition(const ComponentConditionProperty& value) { SetCondition(value); return *this;}
ComponentProperty& ComponentProperty::WithCondition(ComponentConditionProperty&& value) { SetCondition(std::move(value)); return *this;}

ComponentProperty& ComponentProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bindingProperties"))
  {
    m_bindingProperties = jsonValue.GetObject("bindingProperties");

    m_bindingPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bindings"))
  {
    Aws::Map<Aws::String, JsonView> bindingsJsonMap = jsonValue.GetObject("bindings").GetAllObjects();
    for(auto& bindingsItem : bindingsJsonMap)
    {
      m_bindings[bindingsItem.first] = bindingsItem.second.AsObject();
    }
    m_bindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collectionBindingProperties"))
  {
    m_collectionBindingProperties = jsonValue.GetObject("collectionBindingProperties");

    m_collectionBindingPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("concat"))
  {
    Aws::Utils::Array<JsonView> concatJsonList = jsonValue.GetArray("concat");
    for(unsigned concatIndex = 0; concatIndex < concatJsonList.GetLength(); ++concatIndex)
    {
      m_concat.push_back(concatJsonList[concatIndex].AsObject());
    }
    m_concatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = Aws::MakeShared<ComponentConditionProperty>("ComponentProperty", jsonValue.GetObject("condition"));

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configured"))
  {
    m_configured = jsonValue.GetBool("configured");

    m_configuredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetString("event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importedValue"))
  {
    m_importedValue = jsonValue.GetString("importedValue");

    m_importedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("property"))
  {
    m_property = jsonValue.GetString("property");

    m_propertyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttribute"))
  {
    m_userAttribute = jsonValue.GetString("userAttribute");

    m_userAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentProperty::Jsonize() const
{
  JsonValue payload;

  if(m_bindingPropertiesHasBeenSet)
  {
   payload.WithObject("bindingProperties", m_bindingProperties.Jsonize());

  }

  if(m_bindingsHasBeenSet)
  {
   JsonValue bindingsJsonMap;
   for(auto& bindingsItem : m_bindings)
   {
     bindingsJsonMap.WithObject(bindingsItem.first, bindingsItem.second.Jsonize());
   }
   payload.WithObject("bindings", std::move(bindingsJsonMap));

  }

  if(m_collectionBindingPropertiesHasBeenSet)
  {
   payload.WithObject("collectionBindingProperties", m_collectionBindingProperties.Jsonize());

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_concatHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> concatJsonList(m_concat.size());
   for(unsigned concatIndex = 0; concatIndex < concatJsonList.GetLength(); ++concatIndex)
   {
     concatJsonList[concatIndex].AsObject(m_concat[concatIndex].Jsonize());
   }
   payload.WithArray("concat", std::move(concatJsonList));

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("condition", m_condition->Jsonize());

  }

  if(m_configuredHasBeenSet)
  {
   payload.WithBool("configured", m_configured);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", m_event);

  }

  if(m_importedValueHasBeenSet)
  {
   payload.WithString("importedValue", m_importedValue);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_propertyHasBeenSet)
  {
   payload.WithString("property", m_property);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_userAttributeHasBeenSet)
  {
   payload.WithString("userAttribute", m_userAttribute);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
