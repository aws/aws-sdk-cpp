/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/GetTaskProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTaskProtectionRequest::GetTaskProtectionRequest() : 
    m_clusterHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

Aws::String GetTaskProtectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_tasksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tasksJsonList(m_tasks.size());
   for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
   {
     tasksJsonList[tasksIndex].AsString(m_tasks[tasksIndex]);
   }
   payload.WithArray("tasks", std::move(tasksJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTaskProtectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.GetTaskProtection"));
  return headers;

}




