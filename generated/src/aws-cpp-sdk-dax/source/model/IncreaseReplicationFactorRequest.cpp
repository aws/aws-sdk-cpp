/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/IncreaseReplicationFactorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IncreaseReplicationFactorRequest::IncreaseReplicationFactorRequest() : 
    m_clusterNameHasBeenSet(false),
    m_newReplicationFactor(0),
    m_newReplicationFactorHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false)
{
}

Aws::String IncreaseReplicationFactorRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection IncreaseReplicationFactorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.IncreaseReplicationFactor"));
  return headers;

}




