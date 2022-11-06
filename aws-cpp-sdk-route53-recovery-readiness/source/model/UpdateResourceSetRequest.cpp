/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/UpdateResourceSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResourceSetRequest::UpdateResourceSetRequest() : 
    m_resourceSetNameHasBeenSet(false),
    m_resourceSetTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

Aws::String UpdateResourceSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceSetTypeHasBeenSet)
  {
   payload.WithString("resourceSetType", m_resourceSetType);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  return payload.View().WriteReadable();
}




