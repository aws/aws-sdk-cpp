/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/SubmitContainerStateChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SubmitContainerStateChangeRequest::SubmitContainerStateChangeRequest() : 
    m_clusterHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_runtimeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_exitCode(0),
    m_exitCodeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_networkBindingsHasBeenSet(false)
{
}

Aws::String SubmitContainerStateChangeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_taskHasBeenSet)
  {
   payload.WithString("task", m_task);

  }

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_runtimeIdHasBeenSet)
  {
   payload.WithString("runtimeId", m_runtimeId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_exitCodeHasBeenSet)
  {
   payload.WithInteger("exitCode", m_exitCode);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_networkBindingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkBindingsJsonList(m_networkBindings.size());
   for(unsigned networkBindingsIndex = 0; networkBindingsIndex < networkBindingsJsonList.GetLength(); ++networkBindingsIndex)
   {
     networkBindingsJsonList[networkBindingsIndex].AsObject(m_networkBindings[networkBindingsIndex].Jsonize());
   }
   payload.WithArray("networkBindings", std::move(networkBindingsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SubmitContainerStateChangeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.SubmitContainerStateChange"));
  return headers;

}




