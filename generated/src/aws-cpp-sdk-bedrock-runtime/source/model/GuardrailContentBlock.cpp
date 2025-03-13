/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContentBlock.h>
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

GuardrailContentBlock::GuardrailContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailContentBlock& GuardrailContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetObject("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetObject("image");
    m_imageHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithObject("text", m_text.Jsonize());

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("image", m_image.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
