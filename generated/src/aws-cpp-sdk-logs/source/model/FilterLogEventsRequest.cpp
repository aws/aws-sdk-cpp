/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/FilterLogEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FilterLogEventsRequest::FilterLogEventsRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_logGroupIdentifierHasBeenSet(false),
    m_logStreamNamesHasBeenSet(false),
    m_logStreamNamePrefixHasBeenSet(false),
    m_startTime(0),
    m_startTimeHasBeenSet(false),
    m_endTime(0),
    m_endTimeHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_unmask(false),
    m_unmaskHasBeenSet(false)
{
}

Aws::String FilterLogEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logGroupIdentifierHasBeenSet)
  {
   payload.WithString("logGroupIdentifier", m_logGroupIdentifier);

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

  if(m_logStreamNamePrefixHasBeenSet)
  {
   payload.WithString("logStreamNamePrefix", m_logStreamNamePrefix);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithInt64("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithInt64("endTime", m_endTime);

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  if(m_unmaskHasBeenSet)
  {
   payload.WithBool("unmask", m_unmask);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection FilterLogEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.FilterLogEvents"));
  return headers;

}




