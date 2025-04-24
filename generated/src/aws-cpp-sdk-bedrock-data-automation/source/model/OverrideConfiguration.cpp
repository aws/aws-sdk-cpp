/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/OverrideConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

OverrideConfiguration::OverrideConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OverrideConfiguration& OverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");
    m_documentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetObject("image");
    m_imageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("video"))
  {
    m_video = jsonValue.GetObject("video");
    m_videoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audio"))
  {
    m_audio = jsonValue.GetObject("audio");
    m_audioHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modalityRouting"))
  {
    m_modalityRouting = jsonValue.GetObject("modalityRouting");
    m_modalityRoutingHasBeenSet = true;
  }
  return *this;
}

JsonValue OverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("image", m_image.Jsonize());

  }

  if(m_videoHasBeenSet)
  {
   payload.WithObject("video", m_video.Jsonize());

  }

  if(m_audioHasBeenSet)
  {
   payload.WithObject("audio", m_audio.Jsonize());

  }

  if(m_modalityRoutingHasBeenSet)
  {
   payload.WithObject("modalityRouting", m_modalityRouting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
