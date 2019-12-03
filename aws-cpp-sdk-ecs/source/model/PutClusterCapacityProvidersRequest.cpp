/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ecs/model/PutClusterCapacityProvidersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutClusterCapacityProvidersRequest::PutClusterCapacityProvidersRequest() : 
    m_clusterHasBeenSet(false),
    m_capacityProvidersHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false)
{
}

Aws::String PutClusterCapacityProvidersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_capacityProvidersHasBeenSet)
  {
   Array<JsonValue> capacityProvidersJsonList(m_capacityProviders.size());
   for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
   {
     capacityProvidersJsonList[capacityProvidersIndex].AsString(m_capacityProviders[capacityProvidersIndex]);
   }
   payload.WithArray("capacityProviders", std::move(capacityProvidersJsonList));

  }

  if(m_defaultCapacityProviderStrategyHasBeenSet)
  {
   Array<JsonValue> defaultCapacityProviderStrategyJsonList(m_defaultCapacityProviderStrategy.size());
   for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
   {
     defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject(m_defaultCapacityProviderStrategy[defaultCapacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("defaultCapacityProviderStrategy", std::move(defaultCapacityProviderStrategyJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutClusterCapacityProvidersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.PutClusterCapacityProviders"));
  return headers;

}




