/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateServicePrimaryTaskSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServicePrimaryTaskSetRequest::UpdateServicePrimaryTaskSetRequest() : 
    m_clusterHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_primaryTaskSetHasBeenSet(false)
{
}

Aws::String UpdateServicePrimaryTaskSetRequest::SerializePayload() const
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

  if(m_primaryTaskSetHasBeenSet)
  {
   payload.WithString("primaryTaskSet", m_primaryTaskSet);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServicePrimaryTaskSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateServicePrimaryTaskSet"));
  return headers;

}




