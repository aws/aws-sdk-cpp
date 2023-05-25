/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/FlowExecutionMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

FlowExecutionMessage::FlowExecutionMessage() : 
    m_messageIdHasBeenSet(false),
    m_eventType(FlowExecutionEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

FlowExecutionMessage::FlowExecutionMessage(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_eventType(FlowExecutionEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
  *this = jsonValue;
}

FlowExecutionMessage& FlowExecutionMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageId"))
  {
    m_messageId = jsonValue.GetString("messageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = FlowExecutionEventTypeMapper::GetFlowExecutionEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetString("payload");

    m_payloadHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowExecutionMessage::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("messageId", m_messageId);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", FlowExecutionEventTypeMapper::GetNameForFlowExecutionEventType(m_eventType));
  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", m_payload);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
