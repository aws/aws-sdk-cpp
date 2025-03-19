/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Usage.h>
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

Usage::Usage(JsonView jsonValue)
{
  *this = jsonValue;
}

Usage& Usage::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue Usage::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
