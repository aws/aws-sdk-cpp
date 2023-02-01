/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TimestreamTimestamp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TimestreamTimestamp::TimestreamTimestamp() : 
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

TimestreamTimestamp::TimestreamTimestamp(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

TimestreamTimestamp& TimestreamTimestamp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestreamTimestamp::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
