/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeAlignmentBoundary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

TimeAlignmentBoundary::TimeAlignmentBoundary(JsonView jsonValue)
{
  *this = jsonValue;
}

TimeAlignmentBoundary& TimeAlignmentBoundary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Month"))
  {
    m_month = MonthMapper::GetMonthForName(jsonValue.GetString("Month"));
    m_monthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("DayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("DayOfWeek"));
    m_dayOfWeekHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Hour"))
  {
    m_hour = jsonValue.GetInteger("Hour");
    m_hourHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeAlignmentBoundary::Jsonize() const
{
  JsonValue payload;

  if(m_monthHasBeenSet)
  {
   payload.WithString("Month", MonthMapper::GetNameForMonth(m_month));
  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("DayOfMonth", m_dayOfMonth);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("DayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_hourHasBeenSet)
  {
   payload.WithInteger("Hour", m_hour);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
