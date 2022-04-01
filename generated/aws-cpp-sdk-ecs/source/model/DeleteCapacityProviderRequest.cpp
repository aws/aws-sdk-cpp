/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeleteCapacityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCapacityProviderRequest::DeleteCapacityProviderRequest() : 
    m_capacityProviderHasBeenSet(false)
{
}

Aws::String DeleteCapacityProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityProviderHasBeenSet)
  {
   payload.WithString("capacityProvider", m_capacityProvider);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCapacityProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DeleteCapacityProvider"));
  return headers;

}




