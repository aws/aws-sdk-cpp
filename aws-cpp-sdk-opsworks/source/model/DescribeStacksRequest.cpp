/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeStacksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStacksRequest::DescribeStacksRequest() : 
    m_stackIdsHasBeenSet(false)
{
}

Aws::String DescribeStacksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stackIdsJsonList(m_stackIds.size());
   for(unsigned stackIdsIndex = 0; stackIdsIndex < stackIdsJsonList.GetLength(); ++stackIdsIndex)
   {
     stackIdsJsonList[stackIdsIndex].AsString(m_stackIds[stackIdsIndex]);
   }
   payload.WithArray("StackIds", std::move(stackIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStacksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeStacks"));
  return headers;

}




