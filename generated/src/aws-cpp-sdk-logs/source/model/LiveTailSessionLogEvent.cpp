/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LiveTailSessionLogEvent.h>
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

LiveTailSessionLogEvent::LiveTailSessionLogEvent() : 
    m_logStreamNameHasBeenSet(false),
    m_logGroupIdentifierHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false)
{
}

LiveTailSessionLogEvent::LiveTailSessionLogEvent(JsonView jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_logGroupIdentifierHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LiveTailSessionLogEvent& LiveTailSessionLogEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupIdentifier"))
  {
    m_logGroupIdentifier = jsonValue.GetString("logGroupIdentifier");

    m_logGroupIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestionTime"))
  {
    m_ingestionTime = jsonValue.GetInt64("ingestionTime");

    m_ingestionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveTailSessionLogEvent::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_logGroupIdentifierHasBeenSet)
  {
   payload.WithString("logGroupIdentifier", m_logGroupIdentifier);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("timestamp", m_timestamp);

  }

  if(m_ingestionTimeHasBeenSet)
  {
   payload.WithInt64("ingestionTime", m_ingestionTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
