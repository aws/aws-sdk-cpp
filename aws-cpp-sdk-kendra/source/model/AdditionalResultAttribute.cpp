/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kendra/model/AdditionalResultAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AdditionalResultAttribute::AdditionalResultAttribute() : 
    m_keyHasBeenSet(false),
    m_valueType(AdditionalResultAttributeValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AdditionalResultAttribute::AdditionalResultAttribute(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueType(AdditionalResultAttributeValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalResultAttribute& AdditionalResultAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueType"))
  {
    m_valueType = AdditionalResultAttributeValueTypeMapper::GetAdditionalResultAttributeValueTypeForName(jsonValue.GetString("ValueType"));

    m_valueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalResultAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("ValueType", AdditionalResultAttributeValueTypeMapper::GetNameForAdditionalResultAttributeValueType(m_valueType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
