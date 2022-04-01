/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeregisterContainerInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterContainerInstanceRequest::DeregisterContainerInstanceRequest() : 
    m_clusterHasBeenSet(false),
    m_containerInstanceHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String DeregisterContainerInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_containerInstanceHasBeenSet)
  {
   payload.WithString("containerInstance", m_containerInstance);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterContainerInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DeregisterContainerInstance"));
  return headers;

}




