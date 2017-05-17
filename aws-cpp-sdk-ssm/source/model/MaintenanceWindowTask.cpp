/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/MaintenanceWindowTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowTask::MaintenanceWindowTask() : 
    m_windowIdHasBeenSet(false),
    m_windowTaskIdHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_type(MaintenanceWindowTaskType::NOT_SET),
    m_typeHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_taskParametersHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false)
{
}

MaintenanceWindowTask::MaintenanceWindowTask(const JsonValue& jsonValue) : 
    m_windowIdHasBeenSet(false),
    m_windowTaskIdHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_type(MaintenanceWindowTaskType::NOT_SET),
    m_typeHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_taskParametersHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowTask& MaintenanceWindowTask::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

    m_windowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WindowTaskId"))
  {
    m_windowTaskId = jsonValue.GetString("WindowTaskId");

    m_windowTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskArn"))
  {
    m_taskArn = jsonValue.GetString("TaskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = MaintenanceWindowTaskTypeMapper::GetMaintenanceWindowTaskTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Array<JsonValue> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskParameters"))
  {
    Aws::Map<Aws::String, JsonValue> taskParametersJsonMap = jsonValue.GetObject("TaskParameters").GetAllObjects();
    for(auto& taskParametersItem : taskParametersJsonMap)
    {
      m_taskParameters[taskParametersItem.first] = taskParametersItem.second.AsObject();
    }
    m_taskParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingInfo"))
  {
    m_loggingInfo = jsonValue.GetObject("LoggingInfo");

    m_loggingInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetString("MaxConcurrency");

    m_maxConcurrencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxErrors"))
  {
    m_maxErrors = jsonValue.GetString("MaxErrors");

    m_maxErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowTask::Jsonize() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_windowTaskIdHasBeenSet)
  {
   payload.WithString("WindowTaskId", m_windowTaskId);

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MaintenanceWindowTaskTypeMapper::GetNameForMaintenanceWindowTaskType(m_type));
  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_taskParametersHasBeenSet)
  {
   JsonValue taskParametersJsonMap;
   for(auto& taskParametersItem : m_taskParameters)
   {
     taskParametersJsonMap.WithObject(taskParametersItem.first, taskParametersItem.second.Jsonize());
   }
   payload.WithObject("TaskParameters", std::move(taskParametersJsonMap));

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_loggingInfoHasBeenSet)
  {
   payload.WithObject("LoggingInfo", m_loggingInfo.Jsonize());

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws