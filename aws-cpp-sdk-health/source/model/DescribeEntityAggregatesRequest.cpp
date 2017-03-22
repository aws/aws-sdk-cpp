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
#include <aws/health/model/DescribeEntityAggregatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEntityAggregatesRequest::DescribeEntityAggregatesRequest() : 
    m_eventArnsHasBeenSet(false)
{
}

Aws::String DescribeEntityAggregatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventArnsHasBeenSet)
  {
   Array<JsonValue> eventArnsJsonList(m_eventArns.size());
   for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
   {
     eventArnsJsonList[eventArnsIndex].AsString(m_eventArns[eventArnsIndex]);
   }
   payload.WithArray("eventArns", std::move(eventArnsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEntityAggregatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeEntityAggregates"));
  return headers;

}




