/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateContainerInstancesStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContainerInstancesStateRequest::UpdateContainerInstancesStateRequest() : 
    m_clusterHasBeenSet(false),
    m_containerInstancesHasBeenSet(false),
    m_status(ContainerInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateContainerInstancesStateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_containerInstancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerInstancesJsonList(m_containerInstances.size());
   for(unsigned containerInstancesIndex = 0; containerInstancesIndex < containerInstancesJsonList.GetLength(); ++containerInstancesIndex)
   {
     containerInstancesJsonList[containerInstancesIndex].AsString(m_containerInstances[containerInstancesIndex]);
   }
   payload.WithArray("containerInstances", std::move(containerInstancesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ContainerInstanceStatusMapper::GetNameForContainerInstanceStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContainerInstancesStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateContainerInstancesState"));
  return headers;

}




