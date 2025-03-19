/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InputPrompt.h>
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

InputPrompt::InputPrompt(JsonView jsonValue)
{
  *this = jsonValue;
}

InputPrompt& InputPrompt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textPrompt"))
  {
    m_textPrompt = jsonValue.GetObject("textPrompt");
    m_textPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue InputPrompt::Jsonize() const
{
  JsonValue payload;

  if(m_textPromptHasBeenSet)
  {
   payload.WithObject("textPrompt", m_textPrompt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
