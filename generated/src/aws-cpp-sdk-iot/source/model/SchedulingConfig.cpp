/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SchedulingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SchedulingConfig::SchedulingConfig() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endBehavior(JobEndBehavior::NOT_SET),
    m_endBehaviorHasBeenSet(false),
    m_maintenanceWindowsHasBeenSet(false)
{
}

SchedulingConfig::SchedulingConfig(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endBehavior(JobEndBehavior::NOT_SET),
    m_endBehaviorHasBeenSet(false),
    m_maintenanceWindowsHasBeenSet(false)
{
  *this = jsonValue;
}

SchedulingConfig& SchedulingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endBehavior"))
  {
    m_endBehavior = JobEndBehaviorMapper::GetJobEndBehaviorForName(jsonValue.GetString("endBehavior"));

    m_endBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenanceWindows"))
  {
    Aws::Utils::Array<JsonView> maintenanceWindowsJsonList = jsonValue.GetArray("maintenanceWindows");
    for(unsigned maintenanceWindowsIndex = 0; maintenanceWindowsIndex < maintenanceWindowsJsonList.GetLength(); ++maintenanceWindowsIndex)
    {
      m_maintenanceWindows.push_back(maintenanceWindowsJsonList[maintenanceWindowsIndex].AsObject());
    }
    m_maintenanceWindowsHasBeenSet = true;
  }

  return *this;
}

JsonValue SchedulingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  if(m_endBehaviorHasBeenSet)
  {
   payload.WithString("endBehavior", JobEndBehaviorMapper::GetNameForJobEndBehavior(m_endBehavior));
  }

  if(m_maintenanceWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> maintenanceWindowsJsonList(m_maintenanceWindows.size());
   for(unsigned maintenanceWindowsIndex = 0; maintenanceWindowsIndex < maintenanceWindowsJsonList.GetLength(); ++maintenanceWindowsIndex)
   {
     maintenanceWindowsJsonList[maintenanceWindowsIndex].AsObject(m_maintenanceWindows[maintenanceWindowsIndex].Jsonize());
   }
   payload.WithArray("maintenanceWindows", std::move(maintenanceWindowsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
