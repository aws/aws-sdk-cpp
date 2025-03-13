/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/RefreshSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

RefreshSchedule::RefreshSchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

RefreshSchedule& RefreshSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Frequency"))
  {
    m_frequency = jsonValue.GetObject("Frequency");
    m_frequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RefreshScheduleStatusMapper::GetRefreshScheduleStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeOfDay"))
  {
    m_timeOfDay = jsonValue.GetString("TimeOfDay");
    m_timeOfDayHasBeenSet = true;
  }
  return *this;
}

JsonValue RefreshSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_frequencyHasBeenSet)
  {
   payload.WithObject("Frequency", m_frequency.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RefreshScheduleStatusMapper::GetNameForRefreshScheduleStatus(m_status));
  }

  if(m_timeOfDayHasBeenSet)
  {
   payload.WithString("TimeOfDay", m_timeOfDay);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
