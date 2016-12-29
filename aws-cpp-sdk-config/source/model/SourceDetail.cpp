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

SourceDetail::SourceDetail(const JsonValue& jsonValue) : 
    m_eventSource(EventSource::NOT_SET),
    m_eventSourceHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_maximumExecutionFrequency(MaximumExecutionFrequency::NOT_SET),
    m_maximumExecutionFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

SourceDetail& SourceDetail::operator =(const JsonValue& jsonValue)
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