/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ArtifactsConcatenationConfiguration.h>
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

ArtifactsConcatenationConfiguration::ArtifactsConcatenationConfiguration() : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_dataChannelHasBeenSet(false),
    m_transcriptionMessagesHasBeenSet(false),
    m_meetingEventsHasBeenSet(false),
    m_compositedVideoHasBeenSet(false)
{
}

ArtifactsConcatenationConfiguration::ArtifactsConcatenationConfiguration(JsonView jsonValue) : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_dataChannelHasBeenSet(false),
    m_transcriptionMessagesHasBeenSet(false),
    m_meetingEventsHasBeenSet(false),
    m_compositedVideoHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactsConcatenationConfiguration& ArtifactsConcatenationConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DataChannel"))
  {
    m_dataChannel = jsonValue.GetObject("DataChannel");

    m_dataChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TranscriptionMessages"))
  {
    m_transcriptionMessages = jsonValue.GetObject("TranscriptionMessages");

    m_transcriptionMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeetingEvents"))
  {
    m_meetingEvents = jsonValue.GetObject("MeetingEvents");

    m_meetingEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompositedVideo"))
  {
    m_compositedVideo = jsonValue.GetObject("CompositedVideo");

    m_compositedVideoHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactsConcatenationConfiguration::Jsonize() const
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

  if(m_dataChannelHasBeenSet)
  {
   payload.WithObject("DataChannel", m_dataChannel.Jsonize());

  }

  if(m_transcriptionMessagesHasBeenSet)
  {
   payload.WithObject("TranscriptionMessages", m_transcriptionMessages.Jsonize());

  }

  if(m_meetingEventsHasBeenSet)
  {
   payload.WithObject("MeetingEvents", m_meetingEvents.Jsonize());

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
