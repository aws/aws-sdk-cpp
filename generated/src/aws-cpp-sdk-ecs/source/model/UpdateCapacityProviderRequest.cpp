/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateCapacityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCapacityProviderRequest::UpdateCapacityProviderRequest() : 
    m_nameHasBeenSet(false),
    m_autoScalingGroupProviderHasBeenSet(false)
{
}

Aws::String UpdateCapacityProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_autoScalingGroupProviderHasBeenSet)
  {
   payload.WithObject("autoScalingGroupProvider", m_autoScalingGroupProvider.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCapacityProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateCapacityProvider"));
  return headers;

}




