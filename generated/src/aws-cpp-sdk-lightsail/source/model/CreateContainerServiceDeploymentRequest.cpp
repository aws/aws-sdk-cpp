/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateContainerServiceDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContainerServiceDeploymentRequest::CreateContainerServiceDeploymentRequest() : 
    m_serviceNameHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_publicEndpointHasBeenSet(false)
{
}

Aws::String CreateContainerServiceDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_containersHasBeenSet)
  {
   JsonValue containersJsonMap;
   for(auto& containersItem : m_containers)
   {
     containersJsonMap.WithObject(containersItem.first, containersItem.second.Jsonize());
   }
   payload.WithObject("containers", std::move(containersJsonMap));

  }

  if(m_publicEndpointHasBeenSet)
  {
   payload.WithObject("publicEndpoint", m_publicEndpoint.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContainerServiceDeploymentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateContainerServiceDeployment"));
  return headers;

}




