/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

PropertyValue::PropertyValue() : 
    m_timestampHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

PropertyValue::PropertyValue(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyValue& PropertyValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyValue::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
