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
   Array<JsonValue> stackIdsJsonList(m_stackIds.size());
   for(unsigned stackIdsIndex = 0; stackIdsIndex < stackIdsJsonList.GetLength(); ++stackIdsIndex)
   {
     stackIdsJsonList[stackIdsIndex].AsString(m_stackIds[stackIdsIndex]);
   }
   payload.WithArray("StackIds", std::move(stackIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStacksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeStacks"));
  return headers;

}



