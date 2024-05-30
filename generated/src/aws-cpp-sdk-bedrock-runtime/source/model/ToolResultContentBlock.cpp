/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolResultContentBlock.h>
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

ToolResultContentBlock::ToolResultContentBlock() : 
    m_jsonHasBeenSet(false),
    m_textHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

ToolResultContentBlock::ToolResultContentBlock(JsonView jsonValue) : 
    m_jsonHasBeenSet(false),
    m_textHasBeenSet(false),
    m_imageHasBeenSet(false)
{
  *this = jsonValue;
}

ToolResultContentBlock& ToolResultContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("json"))
  {
    m_json = jsonValue.GetObject("json");

    m_jsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetObject("image");

    m_imageHasBeenSet = true;
  }

  return *this;
}

JsonValue ToolResultContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_jsonHasBeenSet)
  {
    if(!m_json.View().IsNull())
    {
       payload.WithObject("json", JsonValue(m_json.View()));
    }
  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

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
