﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLogEventsRequest::PutLogEventsRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_logEventsHasBeenSet(false),
    m_sequenceTokenHasBeenSet(false)
{
}

Aws::String PutLogEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_logEventsHasBeenSet)
  {
   Array<JsonValue> logEventsJsonList(m_logEvents.size());
   for(unsigned logEventsIndex = 0; logEventsIndex < logEventsJsonList.GetLength(); ++logEventsIndex)
   {
     logEventsJsonList[logEventsIndex].AsObject(m_logEvents[logEventsIndex].Jsonize());
   }
   payload.WithArray("logEvents", std::move(logEventsJsonList));

  }

  if(m_sequenceTokenHasBeenSet)
  {
   payload.WithString("sequenceToken", m_sequenceToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutLogEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutLogEvents"));
  return headers;

}




