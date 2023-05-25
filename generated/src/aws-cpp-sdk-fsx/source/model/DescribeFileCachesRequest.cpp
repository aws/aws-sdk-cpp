/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeFileCachesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFileCachesRequest::DescribeFileCachesRequest() : 
    m_fileCacheIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeFileCachesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileCacheIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileCacheIdsJsonList(m_fileCacheIds.size());
   for(unsigned fileCacheIdsIndex = 0; fileCacheIdsIndex < fileCacheIdsJsonList.GetLength(); ++fileCacheIdsIndex)
   {
     fileCacheIdsJsonList[fileCacheIdsIndex].AsString(m_fileCacheIds[fileCacheIdsIndex]);
   }
   payload.WithArray("FileCacheIds", std::move(fileCacheIdsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFileCachesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeFileCaches"));
  return headers;

}




