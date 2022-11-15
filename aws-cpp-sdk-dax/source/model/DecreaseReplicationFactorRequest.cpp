/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_nodeIdsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeIdsToRemoveJsonList(m_nodeIdsToRemove.size());
   for(unsigned nodeIdsToRemoveIndex = 0; nodeIdsToRemoveIndex < nodeIdsToRemoveJsonList.GetLength(); ++nodeIdsToRemoveIndex)
   {
     nodeIdsToRemoveJsonList[nodeIdsToRemoveIndex].AsString(m_nodeIdsToRemove[nodeIdsToRemoveIndex]);
   }
   payload.WithArray("NodeIdsToRemove", std::move(nodeIdsToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DecreaseReplicationFactorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.DecreaseReplicationFactor"));
  return headers;

}




