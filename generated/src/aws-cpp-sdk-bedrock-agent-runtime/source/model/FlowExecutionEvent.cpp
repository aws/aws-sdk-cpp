/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowExecutionEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

FlowExecutionEvent::FlowExecutionEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowExecutionEvent& FlowExecutionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conditionResultEvent"))
  {
    m_conditionResultEvent = jsonValue.GetObject("conditionResultEvent");
    m_conditionResultEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowFailureEvent"))
  {
    m_flowFailureEvent = jsonValue.GetObject("flowFailureEvent");
    m_flowFailureEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowInputEvent"))
  {
    m_flowInputEvent = jsonValue.GetObject("flowInputEvent");
    m_flowInputEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowOutputEvent"))
  {
    m_flowOutputEvent = jsonValue.GetObject("flowOutputEvent");
    m_flowOutputEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeFailureEvent"))
  {
    m_nodeFailureEvent = jsonValue.GetObject("nodeFailureEvent");
    m_nodeFailureEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeInputEvent"))
  {
    m_nodeInputEvent = jsonValue.GetObject("nodeInputEvent");
    m_nodeInputEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeOutputEvent"))
  {
    m_nodeOutputEvent = jsonValue.GetObject("nodeOutputEvent");
    m_nodeOutputEventHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowExecutionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_conditionResultEventHasBeenSet)
  {
   payload.WithObject("conditionResultEvent", m_conditionResultEvent.Jsonize());

  }

  if(m_flowFailureEventHasBeenSet)
  {
   payload.WithObject("flowFailureEvent", m_flowFailureEvent.Jsonize());

  }

  if(m_flowInputEventHasBeenSet)
  {
   payload.WithObject("flowInputEvent", m_flowInputEvent.Jsonize());

  }

  if(m_flowOutputEventHasBeenSet)
  {
   payload.WithObject("flowOutputEvent", m_flowOutputEvent.Jsonize());

  }

  if(m_nodeFailureEventHasBeenSet)
  {
   payload.WithObject("nodeFailureEvent", m_nodeFailureEvent.Jsonize());

  }

  if(m_nodeInputEventHasBeenSet)
  {
   payload.WithObject("nodeInputEvent", m_nodeInputEvent.Jsonize());

  }

  if(m_nodeOutputEventHasBeenSet)
  {
   payload.WithObject("nodeOutputEvent", m_nodeOutputEvent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
