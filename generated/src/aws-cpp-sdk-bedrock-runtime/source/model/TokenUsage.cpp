/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/TokenUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

TokenUsage::TokenUsage(JsonView jsonValue)
{
  *this = jsonValue;
}

TokenUsage& TokenUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputTokens"))
  {
    m_inputTokens = jsonValue.GetInteger("inputTokens");
    m_inputTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputTokens"))
  {
    m_outputTokens = jsonValue.GetInteger("outputTokens");
    m_outputTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalTokens"))
  {
    m_totalTokens = jsonValue.GetInteger("totalTokens");
    m_totalTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheReadInputTokens"))
  {
    m_cacheReadInputTokens = jsonValue.GetInteger("cacheReadInputTokens");
    m_cacheReadInputTokensHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheWriteInputTokens"))
  {
    m_cacheWriteInputTokens = jsonValue.GetInteger("cacheWriteInputTokens");
    m_cacheWriteInputTokensHasBeenSet = true;
  }
  return *this;
}

JsonValue TokenUsage::Jsonize() const
{
  JsonValue payload;

  if(m_inputTokensHasBeenSet)
  {
   payload.WithInteger("inputTokens", m_inputTokens);

  }

  if(m_outputTokensHasBeenSet)
  {
   payload.WithInteger("outputTokens", m_outputTokens);

  }

  if(m_totalTokensHasBeenSet)
  {
   payload.WithInteger("totalTokens", m_totalTokens);

  }

  if(m_cacheReadInputTokensHasBeenSet)
  {
   payload.WithInteger("cacheReadInputTokens", m_cacheReadInputTokens);

  }

  if(m_cacheWriteInputTokensHasBeenSet)
  {
   payload.WithInteger("cacheWriteInputTokens", m_cacheWriteInputTokens);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
