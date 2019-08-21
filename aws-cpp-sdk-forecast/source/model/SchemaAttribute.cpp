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

#include <aws/forecast/model/SchemaAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

SchemaAttribute::SchemaAttribute() : 
    m_attributeNameHasBeenSet(false),
    m_attributeType(AttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false)
{
}

SchemaAttribute::SchemaAttribute(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeType(AttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaAttribute& SchemaAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = AttributeTypeMapper::GetAttributeTypeForName(jsonValue.GetString("AttributeType"));

    m_attributeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", AttributeTypeMapper::GetNameForAttributeType(m_attributeType));
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
