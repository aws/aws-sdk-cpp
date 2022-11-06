/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DescribeAppBlocksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAppBlocksRequest::DescribeAppBlocksRequest() : 
    m_arnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeAppBlocksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> arnsJsonList(m_arns.size());
   for(unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex)
   {
     arnsJsonList[arnsIndex].AsString(m_arns[arnsIndex]);
   }
   payload.WithArray("Arns", std::move(arnsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAppBlocksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DescribeAppBlocks"));
  return headers;

}




