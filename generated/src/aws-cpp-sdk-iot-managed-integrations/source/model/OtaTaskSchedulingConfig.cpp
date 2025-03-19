/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskSchedulingConfig.h>
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

OtaTaskSchedulingConfig::OtaTaskSchedulingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskSchedulingConfig& OtaTaskSchedulingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndBehavior"))
  {
    m_endBehavior = SchedulingConfigEndBehaviorMapper::GetSchedulingConfigEndBehaviorForName(jsonValue.GetString("EndBehavior"));
    m_endBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaintenanceWindows"))
  {
    Aws::Utils::Array<JsonView> maintenanceWindowsJsonList = jsonValue.GetArray("MaintenanceWindows");
    for(unsigned maintenanceWindowsIndex = 0; maintenanceWindowsIndex < maintenanceWindowsJsonList.GetLength(); ++maintenanceWindowsIndex)
    {
      m_maintenanceWindows.push_back(maintenanceWindowsJsonList[maintenanceWindowsIndex].AsObject());
    }
    m_maintenanceWindowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskSchedulingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_endBehaviorHasBeenSet)
  {
   payload.WithString("EndBehavior", SchedulingConfigEndBehaviorMapper::GetNameForSchedulingConfigEndBehavior(m_endBehavior));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime);

  }

  if(m_maintenanceWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> maintenanceWindowsJsonList(m_maintenanceWindows.size());
   for(unsigned maintenanceWindowsIndex = 0; maintenanceWindowsIndex < maintenanceWindowsJsonList.GetLength(); ++maintenanceWindowsIndex)
   {
     maintenanceWindowsJsonList[maintenanceWindowsIndex].AsObject(m_maintenanceWindows[maintenanceWindowsIndex].Jsonize());
   }
   payload.WithArray("MaintenanceWindows", std::move(maintenanceWindowsJsonList));

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
