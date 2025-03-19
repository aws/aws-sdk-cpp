/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ScheduleMaintenanceWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

ScheduleMaintenanceWindow::ScheduleMaintenanceWindow(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduleMaintenanceWindow& ScheduleMaintenanceWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInMinutes"))
  {
    m_durationInMinutes = jsonValue.GetInteger("DurationInMinutes");
    m_durationInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleMaintenanceWindow::Jsonize() const
{
  JsonValue payload;

  if(m_durationInMinutesHasBeenSet)
  {
   payload.WithInteger("DurationInMinutes", m_durationInMinutes);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
