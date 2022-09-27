/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ArtifactsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

ArtifactsConfiguration::ArtifactsConfiguration() : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_compositedVideoHasBeenSet(false)
{
}

ArtifactsConfiguration::ArtifactsConfiguration(JsonView jsonValue) : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_compositedVideoHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactsConfiguration& ArtifactsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Audio"))
  {
    m_audio = jsonValue.GetObject("Audio");

    m_audioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Video"))
  {
    m_video = jsonValue.GetObject("Video");

    m_videoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetObject("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompositedVideo"))
  {
    m_compositedVideo = jsonValue.GetObject("CompositedVideo");

    m_compositedVideoHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_audioHasBeenSet)
  {
   payload.WithObject("Audio", m_audio.Jsonize());

  }

  if(m_videoHasBeenSet)
  {
   payload.WithObject("Video", m_video.Jsonize());

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_compositedVideoHasBeenSet)
  {
   payload.WithObject("CompositedVideo", m_compositedVideo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
