﻿/*
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
   Array<JsonValue> directoryIdsJsonList(m_directoryIds.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDirectoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeDirectories"));
  return headers;

}



