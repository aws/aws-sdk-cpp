/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/TextResponsePart.h>
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

TextResponsePart::TextResponsePart() : 
    m_spanHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

TextResponsePart::TextResponsePart(JsonView jsonValue) : 
    m_spanHasBeenSet(false),
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

TextResponsePart& TextResponsePart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("span"))
  {
    m_span = jsonValue.GetObject("span");

    m_spanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue TextResponsePart::Jsonize() const
{
  JsonValue payload;

  if(m_spanHasBeenSet)
  {
   payload.WithObject("span", m_span.Jsonize());

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
