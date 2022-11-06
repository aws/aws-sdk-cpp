/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeRaidArraysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRaidArraysRequest::DescribeRaidArraysRequest() : 
    m_instanceIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_raidArrayIdsHasBeenSet(false)
{
}

Aws::String DescribeRaidArraysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_raidArrayIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> raidArrayIdsJsonList(m_raidArrayIds.size());
   for(unsigned raidArrayIdsIndex = 0; raidArrayIdsIndex < raidArrayIdsJsonList.GetLength(); ++raidArrayIdsIndex)
   {
     raidArrayIdsJsonList[raidArrayIdsIndex].AsString(m_raidArrayIds[raidArrayIdsIndex]);
   }
   payload.WithArray("RaidArrayIds", std::move(raidArrayIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRaidArraysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeRaidArrays"));
  return headers;

}




