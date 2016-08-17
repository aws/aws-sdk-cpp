/*
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
#include <aws/logs/model/FilterLogEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

FilterLogEventsRequest::FilterLogEventsRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_logStreamNamesHasBeenSet(false),
    m_startTime(0),
    m_startTimeHasBeenSet(false),
    m_endTime(0),
    m_endTimeHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_interleaved(false),
    m_interleavedHasBeenSet(false)
{
}

Aws::String FilterLogEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logStreamNamesHasBeenSet)
  {
   Array<JsonValue> logStreamNamesJsonList(m_logStreamNames.size());
   for(unsigned logStreamNamesIndex = 0; logStreamNamesIndex < logStreamNamesJsonList.GetLength(); ++logStreamNamesIndex)
   {
     logStreamNamesJsonList[logStreamNamesIndex].AsString(m_logStreamNames[logStreamNamesIndex]);
   }
   payload.WithArray("logStreamNames", std::move(logStreamNamesJsonList));

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

  if(m_interleavedHasBeenSet)
  {
   payload.WithBool("interleaved", m_interleaved);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection FilterLogEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.FilterLogEvents"));
  return headers;

}



