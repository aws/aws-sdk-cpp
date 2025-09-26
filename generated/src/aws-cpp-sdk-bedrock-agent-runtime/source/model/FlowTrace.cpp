/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTrace.h>
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

FlowTrace::FlowTrace(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTrace& FlowTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeInputTrace"))
  {
    m_nodeInputTrace = jsonValue.GetObject("nodeInputTrace");
    m_nodeInputTraceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeOutputTrace"))
  {
    m_nodeOutputTrace = jsonValue.GetObject("nodeOutputTrace");
    m_nodeOutputTraceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionNodeResultTrace"))
  {
    m_conditionNodeResultTrace = jsonValue.GetObject("conditionNodeResultTrace");
    m_conditionNodeResultTraceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeActionTrace"))
  {
    m_nodeActionTrace = jsonValue.GetObject("nodeActionTrace");
    m_nodeActionTraceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeDependencyTrace"))
  {
    m_nodeDependencyTrace = jsonValue.GetObject("nodeDependencyTrace");
    m_nodeDependencyTraceHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTrace::Jsonize() const
{
  JsonValue payload;

  if(m_nodeInputTraceHasBeenSet)
  {
   payload.WithObject("nodeInputTrace", m_nodeInputTrace.Jsonize());

  }

  if(m_nodeOutputTraceHasBeenSet)
  {
   payload.WithObject("nodeOutputTrace", m_nodeOutputTrace.Jsonize());

  }

  if(m_conditionNodeResultTraceHasBeenSet)
  {
   payload.WithObject("conditionNodeResultTrace", m_conditionNodeResultTrace.Jsonize());

  }

  if(m_nodeActionTraceHasBeenSet)
  {
   payload.WithObject("nodeActionTrace", m_nodeActionTrace.Jsonize());

  }

  if(m_nodeDependencyTraceHasBeenSet)
  {
   payload.WithObject("nodeDependencyTrace", m_nodeDependencyTrace.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
