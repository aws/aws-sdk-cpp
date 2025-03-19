/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/Interval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

Interval::Interval(JsonView jsonValue)
{
  *this = jsonValue;
}

Interval& Interval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RollingInterval"))
  {
    m_rollingInterval = jsonValue.GetObject("RollingInterval");
    m_rollingIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CalendarInterval"))
  {
    m_calendarInterval = jsonValue.GetObject("CalendarInterval");
    m_calendarIntervalHasBeenSet = true;
  }
  return *this;
}

JsonValue Interval::Jsonize() const
{
  JsonValue payload;

  if(m_rollingIntervalHasBeenSet)
  {
   payload.WithObject("RollingInterval", m_rollingInterval.Jsonize());

  }

  if(m_calendarIntervalHasBeenSet)
  {
   payload.WithObject("CalendarInterval", m_calendarInterval.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
