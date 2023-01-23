/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Attribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Attribute::Attribute() : 
    m_attributeType(InstanceAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

Attribute::Attribute(JsonView jsonValue) : 
    m_attributeType(InstanceAttributeType::NOT_SET),
    m_attributeTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Attribute& Attribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = InstanceAttributeTypeMapper::GetInstanceAttributeTypeForName(jsonValue.GetString("AttributeType"));

    m_attributeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Attribute::Jsonize() const
{
  JsonValue payload;

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", InstanceAttributeTypeMapper::GetNameForInstanceAttributeType(m_attributeType));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
