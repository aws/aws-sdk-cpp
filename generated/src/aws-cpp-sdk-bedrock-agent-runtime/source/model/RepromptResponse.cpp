/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RepromptResponse.h>
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

RepromptResponse::RepromptResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

RepromptResponse& RepromptResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = SourceMapper::GetSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue RepromptResponse::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", SourceMapper::GetNameForSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
