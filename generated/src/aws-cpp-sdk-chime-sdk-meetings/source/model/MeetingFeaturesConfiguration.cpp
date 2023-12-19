/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/MeetingFeaturesConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

MeetingFeaturesConfiguration::MeetingFeaturesConfiguration() : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_attendeeHasBeenSet(false)
{
}

MeetingFeaturesConfiguration::MeetingFeaturesConfiguration(JsonView jsonValue) : 
    m_audioHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_attendeeHasBeenSet(false)
{
  *this = jsonValue;
}

MeetingFeaturesConfiguration& MeetingFeaturesConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Attendee"))
  {
    m_attendee = jsonValue.GetObject("Attendee");

    m_attendeeHasBeenSet = true;
  }

  return *this;
}

JsonValue MeetingFeaturesConfiguration::Jsonize() const
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

  if(m_attendeeHasBeenSet)
  {
   payload.WithObject("Attendee", m_attendee.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
