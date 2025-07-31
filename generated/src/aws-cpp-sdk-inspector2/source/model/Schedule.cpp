/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Schedule.h>
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

Schedule::Schedule(JsonView jsonValue)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oneTime"))
  {
    m_oneTime = jsonValue.GetObject("oneTime");
    m_oneTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("daily"))
  {
    m_daily = jsonValue.GetObject("daily");
    m_dailyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("weekly"))
  {
    m_weekly = jsonValue.GetObject("weekly");
    m_weeklyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthly"))
  {
    m_monthly = jsonValue.GetObject("monthly");
    m_monthlyHasBeenSet = true;
  }
  return *this;
}

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_oneTimeHasBeenSet)
  {
   payload.WithObject("oneTime", m_oneTime.Jsonize());

  }

  if(m_dailyHasBeenSet)
  {
   payload.WithObject("daily", m_daily.Jsonize());

  }

  if(m_weeklyHasBeenSet)
  {
   payload.WithObject("weekly", m_weekly.Jsonize());

  }

  if(m_monthlyHasBeenSet)
  {
   payload.WithObject("monthly", m_monthly.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
