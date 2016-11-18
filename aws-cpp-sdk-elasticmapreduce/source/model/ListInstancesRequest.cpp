/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   Array<JsonValue> instanceGroupTypesJsonList(m_instanceGroupTypes.size());
   for(unsigned instanceGroupTypesIndex = 0; instanceGroupTypesIndex < instanceGroupTypesJsonList.GetLength(); ++instanceGroupTypesIndex)
   {
     instanceGroupTypesJsonList[instanceGroupTypesIndex].AsString(InstanceGroupTypeMapper::GetNameForInstanceGroupType(m_instanceGroupTypes[instanceGroupTypesIndex]));
   }
   payload.WithArray("InstanceGroupTypes", std::move(instanceGroupTypesJsonList));

  }

  if(m_instanceStatesHasBeenSet)
  {
   Array<JsonValue> instanceStatesJsonList(m_instanceStates.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListInstances"));
  return headers;

}



