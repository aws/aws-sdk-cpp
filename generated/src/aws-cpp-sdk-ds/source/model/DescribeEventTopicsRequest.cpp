/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeEventTopicsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEventTopicsRequest::DescribeEventTopicsRequest() : 
    m_directoryIdHasBeenSet(false),
    m_topicNamesHasBeenSet(false)
{
}

Aws::String DescribeEventTopicsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_topicNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicNamesJsonList(m_topicNames.size());
   for(unsigned topicNamesIndex = 0; topicNamesIndex < topicNamesJsonList.GetLength(); ++topicNamesIndex)
   {
     topicNamesJsonList[topicNamesIndex].AsString(m_topicNames[topicNamesIndex]);
   }
   payload.WithArray("TopicNames", std::move(topicNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEventTopicsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeEventTopics"));
  return headers;

}




