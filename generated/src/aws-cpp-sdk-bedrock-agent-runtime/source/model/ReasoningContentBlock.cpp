/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ReasoningContentBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

ReasoningContentBlock::ReasoningContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ReasoningContentBlock& ReasoningContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reasoningText"))
  {
    m_reasoningText = jsonValue.GetObject("reasoningText");
    m_reasoningTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redactedContent"))
  {
    m_redactedContent = HashingUtils::Base64Decode(jsonValue.GetString("redactedContent"));
    m_redactedContentHasBeenSet = true;
  }
  return *this;
}

JsonValue ReasoningContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_reasoningTextHasBeenSet)
  {
   payload.WithObject("reasoningText", m_reasoningText.Jsonize());

  }

  if(m_redactedContentHasBeenSet)
  {
   payload.WithString("redactedContent", HashingUtils::Base64Encode(m_redactedContent));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
