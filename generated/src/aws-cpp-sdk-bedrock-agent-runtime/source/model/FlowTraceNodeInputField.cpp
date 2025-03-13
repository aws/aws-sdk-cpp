/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowTraceNodeInputField.h>
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

FlowTraceNodeInputField::FlowTraceNodeInputField(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowTraceNodeInputField& FlowTraceNodeInputField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeInputName"))
  {
    m_nodeInputName = jsonValue.GetString("nodeInputName");
    m_nodeInputNameHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowTraceNodeInputField::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_nodeInputNameHasBeenSet)
  {
   payload.WithString("nodeInputName", m_nodeInputName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
