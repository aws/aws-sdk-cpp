/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OptimizedPromptEvent.h>
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

OptimizedPromptEvent::OptimizedPromptEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizedPromptEvent& OptimizedPromptEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("optimizedPrompt"))
  {
    m_optimizedPrompt = jsonValue.GetObject("optimizedPrompt");
    m_optimizedPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizedPromptEvent::Jsonize() const
{
  JsonValue payload;

  if(m_optimizedPromptHasBeenSet)
  {
   payload.WithObject("optimizedPrompt", m_optimizedPrompt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
