/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/FilteredLogEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

FilteredLogEvent::FilteredLogEvent() : 
    m_logStreamNameHasBeenSet(false),
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

FilteredLogEvent::FilteredLogEvent(JsonView jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
  *this = jsonValue;
}

FilteredLogEvent& FilteredLogEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionTime"))
  {
    m_ingestionTime = jsonValue.GetInt64("ingestionTime");

    m_ingestionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FilteredLogEvent::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("timestamp", m_timestamp);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_ingestionTimeHasBeenSet)
  {
   payload.WithInt64("ingestionTime", m_ingestionTime);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
