/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeSharedDirectoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSharedDirectoriesRequest::DescribeSharedDirectoriesRequest() : 
    m_ownerDirectoryIdHasBeenSet(false),
    m_sharedDirectoryIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeSharedDirectoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ownerDirectoryIdHasBeenSet)
  {
   payload.WithString("OwnerDirectoryId", m_ownerDirectoryId);

  }

  if(m_sharedDirectoryIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sharedDirectoryIdsJsonList(m_sharedDirectoryIds.size());
   for(unsigned sharedDirectoryIdsIndex = 0; sharedDirectoryIdsIndex < sharedDirectoryIdsJsonList.GetLength(); ++sharedDirectoryIdsIndex)
   {
     sharedDirectoryIdsJsonList[sharedDirectoryIdsIndex].AsString(m_sharedDirectoryIds[sharedDirectoryIdsIndex]);
   }
   payload.WithArray("SharedDirectoryIds", std::move(sharedDirectoryIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSharedDirectoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeSharedDirectories"));
  return headers;

}




