/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeDirectoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDirectoriesRequest::DescribeDirectoriesRequest() : 
    m_directoryIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeDirectoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> directoryIdsJsonList(m_directoryIds.size());
   for(unsigned directoryIdsIndex = 0; directoryIdsIndex < directoryIdsJsonList.GetLength(); ++directoryIdsIndex)
   {
     directoryIdsJsonList[directoryIdsIndex].AsString(m_directoryIds[directoryIdsIndex]);
   }
   payload.WithArray("DirectoryIds", std::move(directoryIdsJsonList));

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

Aws::Http::HeaderValueCollection DescribeDirectoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeDirectories"));
  return headers;

}




