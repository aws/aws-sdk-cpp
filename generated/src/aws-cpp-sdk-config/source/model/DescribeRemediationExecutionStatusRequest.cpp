/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeRemediationExecutionStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRemediationExecutionStatusRequest::DescribeRemediationExecutionStatusRequest() : 
    m_configRuleNameHasBeenSet(false),
    m_resourceKeysHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeRemediationExecutionStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_resourceKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceKeysJsonList(m_resourceKeys.size());
   for(unsigned resourceKeysIndex = 0; resourceKeysIndex < resourceKeysJsonList.GetLength(); ++resourceKeysIndex)
   {
     resourceKeysJsonList[resourceKeysIndex].AsObject(m_resourceKeys[resourceKeysIndex].Jsonize());
   }
   payload.WithArray("ResourceKeys", std::move(resourceKeysJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRemediationExecutionStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeRemediationExecutionStatus"));
  return headers;

}




