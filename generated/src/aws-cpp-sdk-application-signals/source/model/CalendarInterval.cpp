/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CalendarInterval.h>
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

CalendarInterval::CalendarInterval(JsonView jsonValue)
{
  *this = jsonValue;
}

CalendarInterval& CalendarInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationUnit"))
  {
    m_durationUnit = DurationUnitMapper::GetDurationUnitForName(jsonValue.GetString("DurationUnit"));
    m_durationUnitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");
    m_durationHasBeenSet = true;
  }
  return *this;
}

JsonValue CalendarInterval::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_durationUnitHasBeenSet)
  {
   payload.WithString("DurationUnit", DurationUnitMapper::GetNameForDurationUnit(m_durationUnit));
  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
