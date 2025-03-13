/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HoursOfOperationOverrideConfig.h>
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

HoursOfOperationOverrideConfig::HoursOfOperationOverrideConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

HoursOfOperationOverrideConfig& HoursOfOperationOverrideConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Day"))
  {
    m_day = OverrideDaysMapper::GetOverrideDaysForName(jsonValue.GetString("Day"));
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

JsonValue HoursOfOperationOverrideConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dayHasBeenSet)
  {
   payload.WithString("Day", OverrideDaysMapper::GetNameForOverrideDays(m_day));
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
