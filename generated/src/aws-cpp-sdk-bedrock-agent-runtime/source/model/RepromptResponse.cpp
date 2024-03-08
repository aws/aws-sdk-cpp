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

RepromptResponse::RepromptResponse() : 
    m_source(Source::NOT_SET),
    m_sourceHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

RepromptResponse::RepromptResponse(JsonView jsonValue) : 
    m_source(Source::NOT_SET),
    m_sourceHasBeenSet(false),
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

RepromptResponse& RepromptResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = SourceMapper::GetSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue RepromptResponse::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", SourceMapper::GetNameForSource(m_source));
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
