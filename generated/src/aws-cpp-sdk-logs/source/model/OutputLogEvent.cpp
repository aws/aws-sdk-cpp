/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OutputLogEvent.h>
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

OutputLogEvent::OutputLogEvent() : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false)
{
}

OutputLogEvent::OutputLogEvent(JsonView jsonValue) : 
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_ingestionTime(0),
    m_ingestionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputLogEvent& OutputLogEvent::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue OutputLogEvent::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
