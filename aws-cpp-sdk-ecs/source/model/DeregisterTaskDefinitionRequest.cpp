/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeregisterTaskDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterTaskDefinitionRequest::DeregisterTaskDefinitionRequest() : 
    m_taskDefinitionHasBeenSet(false)
{
}

Aws::String DeregisterTaskDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterTaskDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DeregisterTaskDefinition"));
  return headers;

}




