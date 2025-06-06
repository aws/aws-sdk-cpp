/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PromptCreationConfigurations.h>
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

PromptCreationConfigurations::PromptCreationConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptCreationConfigurations& PromptCreationConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excludePreviousThinkingSteps"))
  {
    m_excludePreviousThinkingSteps = jsonValue.GetBool("excludePreviousThinkingSteps");
    m_excludePreviousThinkingStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("previousConversationTurnsToInclude"))
  {
    m_previousConversationTurnsToInclude = jsonValue.GetInteger("previousConversationTurnsToInclude");
    m_previousConversationTurnsToIncludeHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptCreationConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_excludePreviousThinkingStepsHasBeenSet)
  {
   payload.WithBool("excludePreviousThinkingSteps", m_excludePreviousThinkingSteps);

  }

  if(m_previousConversationTurnsToIncludeHasBeenSet)
  {
   payload.WithInteger("previousConversationTurnsToInclude", m_previousConversationTurnsToInclude);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
