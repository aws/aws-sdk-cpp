/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeServiceRevisionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeServiceRevisionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceRevisionArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceRevisionArnsJsonList(m_serviceRevisionArns.size());
   for(unsigned serviceRevisionArnsIndex = 0; serviceRevisionArnsIndex < serviceRevisionArnsJsonList.GetLength(); ++serviceRevisionArnsIndex)
   {
     serviceRevisionArnsJsonList[serviceRevisionArnsIndex].AsString(m_serviceRevisionArns[serviceRevisionArnsIndex]);
   }
   payload.WithArray("serviceRevisionArns", std::move(serviceRevisionArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeServiceRevisionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeServiceRevisions"));
  return headers;

}




