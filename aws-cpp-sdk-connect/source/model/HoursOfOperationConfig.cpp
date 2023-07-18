/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HoursOfOperationConfig.h>
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

HoursOfOperationConfig::HoursOfOperationConfig() : 
    m_day(HoursOfOperationDays::NOT_SET),
    m_dayHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

HoursOfOperationConfig::HoursOfOperationConfig(JsonView jsonValue) : 
    m_day(HoursOfOperationDays::NOT_SET),
    m_dayHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

HoursOfOperationConfig& HoursOfOperationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Day"))
  {
    m_day = HoursOfOperationDaysMapper::GetHoursOfOperationDaysForName(jsonValue.GetString("Day"));

    m_dayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetObject("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetObject("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue HoursOfOperationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dayHasBeenSet)
  {
   payload.WithString("Day", HoursOfOperationDaysMapper::GetNameForHoursOfOperationDays(m_day));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithObject("StartTime", m_startTime.Jsonize());

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithObject("EndTime", m_endTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
