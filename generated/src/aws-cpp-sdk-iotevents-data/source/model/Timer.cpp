/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/Timer.h>
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

Timer::Timer() : 
    m_nameHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

Timer::Timer(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

Timer& Timer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Timer::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
