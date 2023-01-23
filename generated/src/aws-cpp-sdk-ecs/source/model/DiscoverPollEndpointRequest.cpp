/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DiscoverPollEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DiscoverPollEndpointRequest::DiscoverPollEndpointRequest() : 
    m_containerInstanceHasBeenSet(false),
    m_clusterHasBeenSet(false)
{
}

Aws::String DiscoverPollEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerInstanceHasBeenSet)
  {
   payload.WithString("containerInstance", m_containerInstance);

  }

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DiscoverPollEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DiscoverPollEndpoint"));
  return headers;

}




