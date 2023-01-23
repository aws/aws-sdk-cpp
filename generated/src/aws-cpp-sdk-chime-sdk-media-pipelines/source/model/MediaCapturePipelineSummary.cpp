/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipelineSummary.h>
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

MediaCapturePipelineSummary::MediaCapturePipelineSummary() : 
    m_mediaPipelineIdHasBeenSet(false),
    m_mediaPipelineArnHasBeenSet(false)
{
}

MediaCapturePipelineSummary::MediaCapturePipelineSummary(JsonView jsonValue) : 
    m_mediaPipelineIdHasBeenSet(false),
    m_mediaPipelineArnHasBeenSet(false)
{
  *this = jsonValue;
}

MediaCapturePipelineSummary& MediaCapturePipelineSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaPipelineId"))
  {
    m_mediaPipelineId = jsonValue.GetString("MediaPipelineId");

    m_mediaPipelineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaPipelineArn"))
  {
    m_mediaPipelineArn = jsonValue.GetString("MediaPipelineArn");

    m_mediaPipelineArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaCapturePipelineSummary::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPipelineIdHasBeenSet)
  {
   payload.WithString("MediaPipelineId", m_mediaPipelineId);

  }

  if(m_mediaPipelineArnHasBeenSet)
  {
   payload.WithString("MediaPipelineArn", m_mediaPipelineArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
