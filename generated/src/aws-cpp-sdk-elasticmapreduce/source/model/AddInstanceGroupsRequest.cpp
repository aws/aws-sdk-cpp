/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AddInstanceGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddInstanceGroupsRequest::AddInstanceGroupsRequest() : 
    m_instanceGroupsHasBeenSet(false),
    m_jobFlowIdHasBeenSet(false)
{
}

Aws::String AddInstanceGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupsJsonList(m_instanceGroups.size());
   for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
   {
     instanceGroupsJsonList[instanceGroupsIndex].AsObject(m_instanceGroups[instanceGroupsIndex].Jsonize());
   }
   payload.WithArray("InstanceGroups", std::move(instanceGroupsJsonList));

  }

  if(m_jobFlowIdHasBeenSet)
  {
   payload.WithString("JobFlowId", m_jobFlowId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddInstanceGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.AddInstanceGroups"));
  return headers;

}




