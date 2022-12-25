/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ChimeSdkMeetingLiveConnectorConfiguration.h>
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

ChimeSdkMeetingLiveConnectorConfiguration::ChimeSdkMeetingLiveConnectorConfiguration() : 
    m_arnHasBeenSet(false),
    m_muxType(LiveConnectorMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false),
    m_compositedVideoHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false)
{
}

ChimeSdkMeetingLiveConnectorConfiguration::ChimeSdkMeetingLiveConnectorConfiguration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_muxType(LiveConnectorMuxType::NOT_SET),
    m_muxTypeHasBeenSet(false),
    m_compositedVideoHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ChimeSdkMeetingLiveConnectorConfiguration& ChimeSdkMeetingLiveConnectorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MuxType"))
  {
    m_muxType = LiveConnectorMuxTypeMapper::GetLiveConnectorMuxTypeForName(jsonValue.GetString("MuxType"));

    m_muxTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompositedVideo"))
  {
    m_compositedVideo = jsonValue.GetObject("CompositedVideo");

    m_compositedVideoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceConfiguration"))
  {
    m_sourceConfiguration = jsonValue.GetObject("SourceConfiguration");

    m_sourceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ChimeSdkMeetingLiveConnectorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_muxTypeHasBeenSet)
  {
   payload.WithString("MuxType", LiveConnectorMuxTypeMapper::GetNameForLiveConnectorMuxType(m_muxType));
  }

  if(m_compositedVideoHasBeenSet)
  {
   payload.WithObject("CompositedVideo", m_compositedVideo.Jsonize());

  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("SourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
