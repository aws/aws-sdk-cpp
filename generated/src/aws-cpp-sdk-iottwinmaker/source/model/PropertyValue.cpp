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
    m_valueHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

PropertyValue::PropertyValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyValue& PropertyValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetString("time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_timeHasBeenSet)
  {
   payload.WithString("time", m_time);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
