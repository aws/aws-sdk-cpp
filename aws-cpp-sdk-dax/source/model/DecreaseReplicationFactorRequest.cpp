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

#include <aws/dax/model/DecreaseReplicationFactorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DecreaseReplicationFactorRequest::DecreaseReplicationFactorRequest() : 
    m_clusterNameHasBeenSet(false),
    m_newReplicationFactor(0),
    m_newReplicationFactorHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_nodeIdsToRemoveHasBeenSet(false)
{
}

Aws::String DecreaseReplicationFactorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_newReplicationFactorHasBeenSet)
  {
   payload.WithInteger("NewReplicationFactor", m_newReplicationFactor);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_nodeIdsToRemoveHasBeenSet)
  {
   Array<JsonValue> nodeIdsToRemoveJsonList(m_nodeIdsToRemove.size());
   for(unsigned nodeIdsToRemoveIndex = 0; nodeIdsToRemoveIndex < nodeIdsToRemoveJsonList.GetLength(); ++nodeIdsToRemoveIndex)
   {
     nodeIdsToRemoveJsonList[nodeIdsToRemoveIndex].AsString(m_nodeIdsToRemove[nodeIdsToRemoveIndex]);
   }
   payload.WithArray("NodeIdsToRemove", std::move(nodeIdsToRemoveJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DecreaseReplicationFactorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.DecreaseReplicationFactor"));
  return headers;

}




