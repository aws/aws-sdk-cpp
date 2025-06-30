/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ContentBlock.h>
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

ContentBlock::ContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBlock& ContentBlock::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");
    m_documentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("video"))
  {
    m_video = jsonValue.GetObject("video");
    m_videoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolUse"))
  {
    m_toolUse = jsonValue.GetObject("toolUse");
    m_toolUseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolResult"))
  {
    m_toolResult = jsonValue.GetObject("toolResult");
    m_toolResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardContent"))
  {
    m_guardContent = jsonValue.GetObject("guardContent");
    m_guardContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cachePoint"))
  {
    m_cachePoint = jsonValue.GetObject("cachePoint");
    m_cachePointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasoningContent"))
  {
    m_reasoningContent = jsonValue.GetObject("reasoningContent");
    m_reasoningContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("citationsContent"))
  {
    m_citationsContent = jsonValue.GetObject("citationsContent");
    m_citationsContentHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("image", m_image.Jsonize());

  }

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  if(m_videoHasBeenSet)
  {
   payload.WithObject("video", m_video.Jsonize());

  }

  if(m_toolUseHasBeenSet)
  {
   payload.WithObject("toolUse", m_toolUse.Jsonize());

  }

  if(m_toolResultHasBeenSet)
  {
   payload.WithObject("toolResult", m_toolResult.Jsonize());

  }

  if(m_guardContentHasBeenSet)
  {
   payload.WithObject("guardContent", m_guardContent.Jsonize());

  }

  if(m_cachePointHasBeenSet)
  {
   payload.WithObject("cachePoint", m_cachePoint.Jsonize());

  }

  if(m_reasoningContentHasBeenSet)
  {
   payload.WithObject("reasoningContent", m_reasoningContent.Jsonize());

  }

  if(m_citationsContentHasBeenSet)
  {
   payload.WithObject("citationsContent", m_citationsContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
