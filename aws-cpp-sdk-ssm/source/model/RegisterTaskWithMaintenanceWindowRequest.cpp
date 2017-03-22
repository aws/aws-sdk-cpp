/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterTaskWithMaintenanceWindowRequest::RegisterTaskWithMaintenanceWindowRequest() : 
    m_windowIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_taskType(MaintenanceWindowTaskType::NOT_SET),
    m_taskTypeHasBeenSet(false),
    m_taskParametersHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_maxErrorsHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String RegisterTaskWithMaintenanceWindowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

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

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("TaskArn", m_taskArn);

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_taskTypeHasBeenSet)
  {
   payload.WithString("TaskType", MaintenanceWindowTaskTypeMapper::GetNameForMaintenanceWindowTaskType(m_taskType));
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

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithString("MaxConcurrency", m_maxConcurrency);

  }

  if(m_maxErrorsHasBeenSet)
  {
   payload.WithString("MaxErrors", m_maxErrors);

  }

  if(m_loggingInfoHasBeenSet)
  {
   payload.WithObject("LoggingInfo", m_loggingInfo.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterTaskWithMaintenanceWindowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.RegisterTaskWithMaintenanceWindow"));
  return headers;

}




