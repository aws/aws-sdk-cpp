/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputSource.h>
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

FlowTraceNodeInputSource::FlowTraceNodeInputSource(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTraceNodeInputSource& FlowTraceNodeInputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputFieldName"))
  {
    m_outputFieldName = jsonValue.GetString("outputFieldName");
    m_outputFieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTraceNodeInputSource::Jsonize() const
{
  JsonValue payload;

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_outputFieldNameHasBeenSet)
  {
   payload.WithString("outputFieldName", m_outputFieldName);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
