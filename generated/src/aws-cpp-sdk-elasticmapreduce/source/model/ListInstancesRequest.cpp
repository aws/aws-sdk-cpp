/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListInstancesRequest::ListInstancesRequest() : 
    m_clusterIdHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_instanceGroupTypesHasBeenSet(false),
    m_instanceFleetIdHasBeenSet(false),
    m_instanceFleetType(InstanceFleetType::NOT_SET),
    m_instanceFleetTypeHasBeenSet(false),
    m_instanceStatesHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String ListInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_instanceGroupIdHasBeenSet)
  {
   payload.WithString("InstanceGroupId", m_instanceGroupId);

  }

  if(m_instanceGroupTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupTypesJsonList(m_instanceGroupTypes.size());
   for(unsigned instanceGroupTypesIndex = 0; instanceGroupTypesIndex < instanceGroupTypesJsonList.GetLength(); ++instanceGroupTypesIndex)
   {
     instanceGroupTypesJsonList[instanceGroupTypesIndex].AsString(InstanceGroupTypeMapper::GetNameForInstanceGroupType(m_instanceGroupTypes[instanceGroupTypesIndex]));
   }
   payload.WithArray("InstanceGroupTypes", std::move(instanceGroupTypesJsonList));

  }

  if(m_instanceFleetIdHasBeenSet)
  {
   payload.WithString("InstanceFleetId", m_instanceFleetId);

  }

  if(m_instanceFleetTypeHasBeenSet)
  {
   payload.WithString("InstanceFleetType", InstanceFleetTypeMapper::GetNameForInstanceFleetType(m_instanceFleetType));
  }

  if(m_instanceStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceStatesJsonList(m_instanceStates.size());
   for(unsigned instanceStatesIndex = 0; instanceStatesIndex < instanceStatesJsonList.GetLength(); ++instanceStatesIndex)
   {
     instanceStatesJsonList[instanceStatesIndex].AsString(InstanceStateMapper::GetNameForInstanceState(m_instanceStates[instanceStatesIndex]));
   }
   payload.WithArray("InstanceStates", std::move(instanceStatesJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListInstances"));
  return headers;

}




