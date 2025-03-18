﻿/**
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
  if(jsonValue.ValueExists("conditionNodeResultTrace"))
  {
    m_conditionNodeResultTrace = jsonValue.GetObject("conditionNodeResultTrace");
    m_conditionNodeResultTraceHasBeenSet = true;
  }
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
  return *this;
}

JsonValue FlowTrace::Jsonize() const
{
  JsonValue payload;

  if(m_conditionNodeResultTraceHasBeenSet)
  {
   payload.WithObject("conditionNodeResultTrace", m_conditionNodeResultTrace.Jsonize());

  }

  if(m_nodeInputTraceHasBeenSet)
  {
   payload.WithObject("nodeInputTrace", m_nodeInputTrace.Jsonize());

  }

  if(m_nodeOutputTraceHasBeenSet)
  {
   payload.WithObject("nodeOutputTrace", m_nodeOutputTrace.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
