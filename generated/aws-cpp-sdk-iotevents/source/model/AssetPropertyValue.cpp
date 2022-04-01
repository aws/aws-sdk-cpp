/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AssetPropertyValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AssetPropertyValue::AssetPropertyValue() : 
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
}

AssetPropertyValue::AssetPropertyValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
  *this = jsonValue;
}

AssetPropertyValue& AssetPropertyValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetObject("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quality"))
  {
    m_quality = jsonValue.GetString("quality");

    m_qualityHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetPropertyValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithObject("timestamp", m_timestamp.Jsonize());

  }

  if(m_qualityHasBeenSet)
  {
   payload.WithString("quality", m_quality);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
