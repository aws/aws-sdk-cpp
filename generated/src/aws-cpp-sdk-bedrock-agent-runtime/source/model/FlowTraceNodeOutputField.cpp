/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTraceNodeOutputField.h>
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

FlowTraceNodeOutputField::FlowTraceNodeOutputField(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTraceNodeOutputField& FlowTraceNodeOutputField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeOutputName"))
  {
    m_nodeOutputName = jsonValue.GetString("nodeOutputName");
    m_nodeOutputNameHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTraceNodeOutputField::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_nodeOutputNameHasBeenSet)
  {
   payload.WithString("nodeOutputName", m_nodeOutputName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
