/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/StartLiveTailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartLiveTailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logGroupIdentifiersJsonList(m_logGroupIdentifiers.size());
   for(unsigned logGroupIdentifiersIndex = 0; logGroupIdentifiersIndex < logGroupIdentifiersJsonList.GetLength(); ++logGroupIdentifiersIndex)
   {
     logGroupIdentifiersJsonList[logGroupIdentifiersIndex].AsString(m_logGroupIdentifiers[logGroupIdentifiersIndex]);
   }
   payload.WithArray("logGroupIdentifiers", std::move(logGroupIdentifiersJsonList));

  }

  if(m_logStreamNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logStreamNamesJsonList(m_logStreamNames.size());
   for(unsigned logStreamNamesIndex = 0; logStreamNamesIndex < logStreamNamesJsonList.GetLength(); ++logStreamNamesIndex)
   {
     logStreamNamesJsonList[logStreamNamesIndex].AsString(m_logStreamNames[logStreamNamesIndex]);
   }
   payload.WithArray("logStreamNames", std::move(logStreamNamesJsonList));

  }

  if(m_logStreamNamePrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logStreamNamePrefixesJsonList(m_logStreamNamePrefixes.size());
   for(unsigned logStreamNamePrefixesIndex = 0; logStreamNamePrefixesIndex < logStreamNamePrefixesJsonList.GetLength(); ++logStreamNamePrefixesIndex)
   {
     logStreamNamePrefixesJsonList[logStreamNamePrefixesIndex].AsString(m_logStreamNamePrefixes[logStreamNamePrefixesIndex]);
   }
   payload.WithArray("logStreamNamePrefixes", std::move(logStreamNamePrefixesJsonList));

  }

  if(m_logEventFilterPatternHasBeenSet)
  {
   payload.WithString("logEventFilterPattern", m_logEventFilterPattern);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartLiveTailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.StartLiveTail"));
  return headers;

}




