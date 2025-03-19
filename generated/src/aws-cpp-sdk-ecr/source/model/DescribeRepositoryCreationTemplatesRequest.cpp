/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeRepositoryCreationTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeRepositoryCreationTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_prefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> prefixesJsonList(m_prefixes.size());
   for(unsigned prefixesIndex = 0; prefixesIndex < prefixesJsonList.GetLength(); ++prefixesIndex)
   {
     prefixesJsonList[prefixesIndex].AsString(m_prefixes[prefixesIndex]);
   }
   payload.WithArray("prefixes", std::move(prefixesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRepositoryCreationTemplatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.DescribeRepositoryCreationTemplates"));
  return headers;

}




