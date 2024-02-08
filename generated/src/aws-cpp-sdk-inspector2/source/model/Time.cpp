/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Time.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Time::Time() : 
    m_timeOfDayHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

Time::Time(JsonView jsonValue) : 
    m_timeOfDayHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
  *this = jsonValue;
}

Time& Time::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeOfDay"))
  {
    m_timeOfDay = jsonValue.GetString("timeOfDay");

    m_timeOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timezone"))
  {
    m_timezone = jsonValue.GetString("timezone");

    m_timezoneHasBeenSet = true;
  }

  return *this;
}

JsonValue Time::Jsonize() const
{
  JsonValue payload;

  if(m_timeOfDayHasBeenSet)
  {
   payload.WithString("timeOfDay", m_timeOfDay);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("timezone", m_timezone);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
