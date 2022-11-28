/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/StartQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartQueryRequest::StartQueryRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_logGroupNamesHasBeenSet(false),
    m_logGroupIdentifiersHasBeenSet(false),
    m_startTime(0),
    m_startTimeHasBeenSet(false),
    m_endTime(0),
    m_endTimeHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String StartQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupNamesJsonList(m_logGroupNames.size());
   for(unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex)
   {
     logGroupNamesJsonList[logGroupNamesIndex].AsString(m_logGroupNames[logGroupNamesIndex]);
   }
   payload.WithArray("logGroupNames", std::move(logGroupNamesJsonList));

  }

  if(m_logGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupIdentifiersJsonList(m_logGroupIdentifiers.size());
   for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
   {
     logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString(m_logGroupIdentifiers[logGroupIdentifiersIndex]);
   }
   payload.WithArray("logGroupIdentifiers", std::move(logGroupIdentifiersJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithInt64("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithInt64("endTime", m_endTime);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.StartQuery"));
  return headers;

}




