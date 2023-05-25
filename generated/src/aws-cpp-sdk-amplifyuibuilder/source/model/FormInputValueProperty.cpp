/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormInputValueProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

FormInputValueProperty::FormInputValueProperty() : 
    m_valueHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false),
    m_concatHasBeenSet(false)
{
}

FormInputValueProperty::FormInputValueProperty(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_bindingPropertiesHasBeenSet(false),
    m_concatHasBeenSet(false)
{
  *this = jsonValue;
}

FormInputValueProperty& FormInputValueProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bindingProperties"))
  {
    m_bindingProperties = jsonValue.GetObject("bindingProperties");

    m_bindingPropertiesHasBeenSet = true;
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

  return *this;
}

JsonValue FormInputValueProperty::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_bindingPropertiesHasBeenSet)
  {
   payload.WithObject("bindingProperties", m_bindingProperties.Jsonize());

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

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
