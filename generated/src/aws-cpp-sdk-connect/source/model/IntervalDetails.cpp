/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/IntervalDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

IntervalDetails::IntervalDetails() : 
    m_timeZoneHasBeenSet(false),
    m_intervalPeriod(IntervalPeriod::NOT_SET),
    m_intervalPeriodHasBeenSet(false)
{
}

IntervalDetails::IntervalDetails(JsonView jsonValue) : 
    m_timeZoneHasBeenSet(false),
    m_intervalPeriod(IntervalPeriod::NOT_SET),
    m_intervalPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

IntervalDetails& IntervalDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetString("TimeZone");

    m_timeZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntervalPeriod"))
  {
    m_intervalPeriod = IntervalPeriodMapper::GetIntervalPeriodForName(jsonValue.GetString("IntervalPeriod"));

    m_intervalPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue IntervalDetails::Jsonize() const
{
  JsonValue payload;

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", m_timeZone);

  }

  if(m_intervalPeriodHasBeenSet)
  {
   payload.WithString("IntervalPeriod", IntervalPeriodMapper::GetNameForIntervalPeriod(m_intervalPeriod));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
