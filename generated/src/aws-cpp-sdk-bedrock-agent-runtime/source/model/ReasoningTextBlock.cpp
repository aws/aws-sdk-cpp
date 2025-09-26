/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ReasoningTextBlock.h>
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

ReasoningTextBlock::ReasoningTextBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ReasoningTextBlock& ReasoningTextBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");
    m_signatureHasBeenSet = true;
  }
  return *this;
}

JsonValue ReasoningTextBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("signature", m_signature);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
