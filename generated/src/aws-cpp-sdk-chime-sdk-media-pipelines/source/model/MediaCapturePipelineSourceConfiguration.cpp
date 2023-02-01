/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipelineSourceConfiguration.h>
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

MediaCapturePipelineSourceConfiguration::MediaCapturePipelineSourceConfiguration() : 
    m_mediaPipelineArnHasBeenSet(false),
    m_chimeSdkMeetingConfigurationHasBeenSet(false)
{
}

MediaCapturePipelineSourceConfiguration::MediaCapturePipelineSourceConfiguration(JsonView jsonValue) : 
    m_mediaPipelineArnHasBeenSet(false),
    m_chimeSdkMeetingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MediaCapturePipelineSourceConfiguration& MediaCapturePipelineSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaPipelineArn"))
  {
    m_mediaPipelineArn = jsonValue.GetString("MediaPipelineArn");

    m_mediaPipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChimeSdkMeetingConfiguration"))
  {
    m_chimeSdkMeetingConfiguration = jsonValue.GetObject("ChimeSdkMeetingConfiguration");

    m_chimeSdkMeetingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaCapturePipelineSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPipelineArnHasBeenSet)
  {
   payload.WithString("MediaPipelineArn", m_mediaPipelineArn);

  }

  if(m_chimeSdkMeetingConfigurationHasBeenSet)
  {
   payload.WithObject("ChimeSdkMeetingConfiguration", m_chimeSdkMeetingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
