/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ResourceValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ResourceValue::ResourceValue() : 
    m_value(ResourceValueType::NOT_SET),
    m_valueHasBeenSet(false)
{
}

ResourceValue::ResourceValue(JsonView jsonValue) : 
    m_value(ResourceValueType::NOT_SET),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceValue& ResourceValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = ResourceValueTypeMapper::GetResourceValueTypeForName(jsonValue.GetString("Value"));

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", ResourceValueTypeMapper::GetNameForResourceValueType(m_value));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
