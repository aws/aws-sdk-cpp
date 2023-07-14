/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ExecuteCommandRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecuteCommandRequest::ExecuteCommandRequest() : 
    m_clusterHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_interactive(false),
    m_interactiveHasBeenSet(false),
    m_taskHasBeenSet(false)
{
}

Aws::String ExecuteCommandRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_containerHasBeenSet)
  {
   payload.WithString("container", m_container);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_interactiveHasBeenSet)
  {
   payload.WithBool("interactive", m_interactive);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("task", m_task);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteCommandRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ExecuteCommand"));
  return headers;

}




