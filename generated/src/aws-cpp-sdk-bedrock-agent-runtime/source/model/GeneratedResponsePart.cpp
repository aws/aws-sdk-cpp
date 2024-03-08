/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GeneratedResponsePart.h>
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

GeneratedResponsePart::GeneratedResponsePart() : 
    m_textResponsePartHasBeenSet(false)
{
}

GeneratedResponsePart::GeneratedResponsePart(JsonView jsonValue) : 
    m_textResponsePartHasBeenSet(false)
{
  *this = jsonValue;
}

GeneratedResponsePart& GeneratedResponsePart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textResponsePart"))
  {
    m_textResponsePart = jsonValue.GetObject("textResponsePart");

    m_textResponsePartHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneratedResponsePart::Jsonize() const
{
  JsonValue payload;

  if(m_textResponsePartHasBeenSet)
  {
   payload.WithObject("textResponsePart", m_textResponsePart.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
