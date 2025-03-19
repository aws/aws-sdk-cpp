/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceDeploymentAlarms.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceDeploymentAlarms::ServiceDeploymentAlarms(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceDeploymentAlarms& ServiceDeploymentAlarms::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceDeploymentRollbackMonitorsStatusMapper::GetServiceDeploymentRollbackMonitorsStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alarmNames"))
  {
    Aws::Utils::Array<JsonView> alarmNamesJsonList = jsonValue.GetArray("alarmNames");
    for(unsigned alarmNamesIndex = 0; alarmNamesIndex < alarmNamesJsonList.GetLength(); ++alarmNamesIndex)
    {
      m_alarmNames.push_back(alarmNamesJsonList[alarmNamesIndex].AsString());
    }
    m_alarmNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("triggeredAlarmNames"))
  {
    Aws::Utils::Array<JsonView> triggeredAlarmNamesJsonList = jsonValue.GetArray("triggeredAlarmNames");
    for(unsigned triggeredAlarmNamesIndex = 0; triggeredAlarmNamesIndex < triggeredAlarmNamesJsonList.GetLength(); ++triggeredAlarmNamesIndex)
    {
      m_triggeredAlarmNames.push_back(triggeredAlarmNamesJsonList[triggeredAlarmNamesIndex].AsString());
    }
    m_triggeredAlarmNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceDeploymentAlarms::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceDeploymentRollbackMonitorsStatusMapper::GetNameForServiceDeploymentRollbackMonitorsStatus(m_status));
  }

  if(m_alarmNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alarmNamesJsonList(m_alarmNames.size());
   for(unsigned alarmNamesIndex = 0; alarmNamesIndex < alarmNamesJsonList.GetLength(); ++alarmNamesIndex)
   {
     alarmNamesJsonList[alarmNamesIndex].AsString(m_alarmNames[alarmNamesIndex]);
   }
   payload.WithArray("alarmNames", std::move(alarmNamesJsonList));

  }

  if(m_triggeredAlarmNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggeredAlarmNamesJsonList(m_triggeredAlarmNames.size());
   for(unsigned triggeredAlarmNamesIndex = 0; triggeredAlarmNamesIndex < triggeredAlarmNamesJsonList.GetLength(); ++triggeredAlarmNamesIndex)
   {
     triggeredAlarmNamesJsonList[triggeredAlarmNamesIndex].AsString(m_triggeredAlarmNames[triggeredAlarmNamesIndex]);
   }
   payload.WithArray("triggeredAlarmNames", std::move(triggeredAlarmNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
