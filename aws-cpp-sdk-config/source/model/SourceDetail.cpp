/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/SourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

SourceDetail::SourceDetail() : 
    m_eventSource(EventSource::NOT_SET),
    m_eventSourceHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false)
{
}

SourceDetail::SourceDetail(JsonView jsonValue) : 
    m_eventSource(EventSource::NOT_SET),
    m_eventSourceHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

SourceDetail& SourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventSource"))
  {
    m_eventSource = EventSourceMapper::GetEventSourceForName(jsonValue.GetString("EventSource"));

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumExecutionFrequency"))
  {
    m_maximumExecutionFrequency = MaximumExecutionFrequencyMapper::GetMaximumExecutionFrequencyForName(jsonValue.GetString("MaximumExecutionFrequency"));

    m_maximumExecutionFrequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("EventSource", EventSourceMapper::GetNameForEventSource(m_eventSource));
  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_maximumExecutionFrequencyHasBeenSet)
  {
   payload.WithString("MaximumExecutionFrequency", MaximumExecutionFrequencyMapper::GetNameForMaximumExecutionFrequency(m_maximumExecutionFrequency));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
