/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeFileSystemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFileSystemsRequest::DescribeFileSystemsRequest() : 
    m_fileSystemIdsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeFileSystemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileSystemIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemIdsJsonList(m_fileSystemIds.size());
   for(unsigned fileSystemIdsIndex = 0; fileSystemIdsIndex < fileSystemIdsJsonList.GetLength(); ++fileSystemIdsIndex)
   {
     fileSystemIdsJsonList[fileSystemIdsIndex].AsString(m_fileSystemIds[fileSystemIdsIndex]);
   }
   payload.WithArray("FileSystemIds", std::move(fileSystemIdsJsonList));

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

Aws::Http::HeaderValueCollection DescribeFileSystemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.DescribeFileSystems"));
  return headers;

}




