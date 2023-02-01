/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaPipeline.h>
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

MediaPipeline::MediaPipeline() : 
    m_mediaCapturePipelineHasBeenSet(false),
    m_mediaLiveConnectorPipelineHasBeenSet(false),
    m_mediaConcatenationPipelineHasBeenSet(false)
{
}

MediaPipeline::MediaPipeline(JsonView jsonValue) : 
    m_mediaCapturePipelineHasBeenSet(false),
    m_mediaLiveConnectorPipelineHasBeenSet(false),
    m_mediaConcatenationPipelineHasBeenSet(false)
{
  *this = jsonValue;
}

MediaPipeline& MediaPipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaCapturePipeline"))
  {
    m_mediaCapturePipeline = jsonValue.GetObject("MediaCapturePipeline");

    m_mediaCapturePipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaLiveConnectorPipeline"))
  {
    m_mediaLiveConnectorPipeline = jsonValue.GetObject("MediaLiveConnectorPipeline");

    m_mediaLiveConnectorPipelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaConcatenationPipeline"))
  {
    m_mediaConcatenationPipeline = jsonValue.GetObject("MediaConcatenationPipeline");

    m_mediaConcatenationPipelineHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaPipeline::Jsonize() const
{
  JsonValue payload;

  if(m_mediaCapturePipelineHasBeenSet)
  {
   payload.WithObject("MediaCapturePipeline", m_mediaCapturePipeline.Jsonize());

  }

  if(m_mediaLiveConnectorPipelineHasBeenSet)
  {
   payload.WithObject("MediaLiveConnectorPipeline", m_mediaLiveConnectorPipeline.Jsonize());

  }

  if(m_mediaConcatenationPipelineHasBeenSet)
  {
   payload.WithObject("MediaConcatenationPipeline", m_mediaConcatenationPipeline.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
