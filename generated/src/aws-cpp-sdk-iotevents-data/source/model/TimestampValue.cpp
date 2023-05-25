/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/TimestampValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

TimestampValue::TimestampValue() : 
    m_timeInMillis(0),
    m_timeInMillisHasBeenSet(false)
{
}

TimestampValue::TimestampValue(JsonView jsonValue) : 
    m_timeInMillis(0),
    m_timeInMillisHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampValue& TimestampValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeInMillis"))
  {
    m_timeInMillis = jsonValue.GetInt64("timeInMillis");

    m_timeInMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampValue::Jsonize() const
{
  JsonValue payload;

  if(m_timeInMillisHasBeenSet)
  {
   payload.WithInt64("timeInMillis", m_timeInMillis);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
