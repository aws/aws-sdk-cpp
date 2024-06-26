/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailConverseTextBlock.h>
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

GuardrailConverseTextBlock::GuardrailConverseTextBlock() : 
    m_textHasBeenSet(false)
{
}

GuardrailConverseTextBlock::GuardrailConverseTextBlock(JsonView jsonValue)
  : GuardrailConverseTextBlock()
{
  *this = jsonValue;
}

GuardrailConverseTextBlock& GuardrailConverseTextBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailConverseTextBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
