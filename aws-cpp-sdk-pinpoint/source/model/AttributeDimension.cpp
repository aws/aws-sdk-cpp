﻿/*
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

#include <aws/pinpoint/model/AttributeDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

AttributeDimension::AttributeDimension() : 
    m_attributeType(AttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

AttributeDimension::AttributeDimension(JsonView jsonValue) : 
    m_attributeType(AttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeDimension& AttributeDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = AttributeTypeMapper::GetAttributeTypeForName(jsonValue.GetString("AttributeType"));

    m_attributeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeDimension::Jsonize() const
{
  JsonValue payload;

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", AttributeTypeMapper::GetNameForAttributeType(m_attributeType));
  }

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
