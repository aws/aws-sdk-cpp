/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeResourceGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeResourceGroupsRequest::DescribeResourceGroupsRequest() : 
    m_resourceGroupArnsHasBeenSet(false)
{
}

Aws::String DescribeResourceGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceGroupArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceGroupArnsJsonList(m_resourceGroupArns.size());
   for(unsigned resourceGroupArnsIndex = 0; resourceGroupArnsIndex < resourceGroupArnsJsonList.GetLength(); ++resourceGroupArnsIndex)
   {
     resourceGroupArnsJsonList[resourceGroupArnsIndex].AsString(m_resourceGroupArns[resourceGroupArnsIndex]);
   }
   payload.WithArray("resourceGroupArns", std::move(resourceGroupArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeResourceGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeResourceGroups"));
  return headers;

}




