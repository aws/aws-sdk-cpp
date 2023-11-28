/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PostProcessingParsedResponse.h>
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

PostProcessingParsedResponse::PostProcessingParsedResponse() : 
    m_textHasBeenSet(false)
{
}

PostProcessingParsedResponse::PostProcessingParsedResponse(JsonView jsonValue) : 
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

PostProcessingParsedResponse& PostProcessingParsedResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue PostProcessingParsedResponse::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
