/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ModifyingProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ModifyingProperties::ModifyingProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

ModifyingProperties& ModifyingProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveValue"))
  {
    m_activeValue = jsonValue.GetString("ActiveValue");
    m_activeValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PendingValue"))
  {
    m_pendingValue = jsonValue.GetString("PendingValue");
    m_pendingValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValueType"))
  {
    m_valueType = PropertyValueTypeMapper::GetPropertyValueTypeForName(jsonValue.GetString("ValueType"));
    m_valueTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyingProperties::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_activeValueHasBeenSet)
  {
   payload.WithString("ActiveValue", m_activeValue);

  }

  if(m_pendingValueHasBeenSet)
  {
   payload.WithString("PendingValue", m_pendingValue);

  }

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("ValueType", PropertyValueTypeMapper::GetNameForPropertyValueType(m_valueType));
  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
