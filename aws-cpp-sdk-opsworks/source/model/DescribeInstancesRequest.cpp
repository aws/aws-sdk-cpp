/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInstancesRequest::DescribeInstancesRequest() : 
    m_stackIdHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false)
{
}

Aws::String DescribeInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeInstances"));
  return headers;

}




