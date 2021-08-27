/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
