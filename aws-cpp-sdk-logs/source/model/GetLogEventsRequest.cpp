/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLogEventsRequest::GetLogEventsRequest() : 
    m_logGroupNameHasBeenSet(false),
    m_logGroupIdentifierHasBeenSet(false),
    m_logStreamNameHasBeenSet(false),
    m_startTime(0),
    m_startTimeHasBeenSet(false),
    m_endTime(0),
    m_endTimeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_startFromHead(false),
    m_startFromHeadHasBeenSet(false),
    m_unmask(false),
    m_unmaskHasBeenSet(false)
{
}

Aws::String GetLogEventsRequest::SerializePayload() const
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

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithInt64("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithInt64("endTime", m_endTime);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  if(m_startFromHeadHasBeenSet)
  {
   payload.WithBool("startFromHead", m_startFromHead);

  }

  if(m_unmaskHasBeenSet)
  {
   payload.WithBool("unmask", m_unmask);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLogEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetLogEvents"));
  return headers;

}




