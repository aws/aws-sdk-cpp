/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateTaskSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTaskSetRequest::UpdateTaskSetRequest() : 
    m_clusterHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_taskSetHasBeenSet(false),
    m_scaleHasBeenSet(false)
{
}

Aws::String UpdateTaskSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_taskSetHasBeenSet)
  {
   payload.WithString("taskSet", m_taskSet);

  }

  if(m_scaleHasBeenSet)
  {
   payload.WithObject("scale", m_scale.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTaskSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateTaskSet"));
  return headers;

}




