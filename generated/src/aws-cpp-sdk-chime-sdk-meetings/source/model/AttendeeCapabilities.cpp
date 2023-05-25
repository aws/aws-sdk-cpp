/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
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

AttendeeCapabilities::AttendeeCapabilities() : 
    m_audio(MediaCapabilities::NOT_SET),
    m_audioHasBeenSet(false),
    m_video(MediaCapabilities::NOT_SET),
    m_videoHasBeenSet(false),
    m_content(MediaCapabilities::NOT_SET),
    m_contentHasBeenSet(false)
{
}

AttendeeCapabilities::AttendeeCapabilities(JsonView jsonValue) : 
    m_audio(MediaCapabilities::NOT_SET),
    m_audioHasBeenSet(false),
    m_video(MediaCapabilities::NOT_SET),
    m_videoHasBeenSet(false),
    m_content(MediaCapabilities::NOT_SET),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

AttendeeCapabilities& AttendeeCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Audio"))
  {
    m_audio = MediaCapabilitiesMapper::GetMediaCapabilitiesForName(jsonValue.GetString("Audio"));

    m_audioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Video"))
  {
    m_video = MediaCapabilitiesMapper::GetMediaCapabilitiesForName(jsonValue.GetString("Video"));

    m_videoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = MediaCapabilitiesMapper::GetMediaCapabilitiesForName(jsonValue.GetString("Content"));

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue AttendeeCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_audioHasBeenSet)
  {
   payload.WithString("Audio", MediaCapabilitiesMapper::GetNameForMediaCapabilities(m_audio));
  }

  if(m_videoHasBeenSet)
  {
   payload.WithString("Video", MediaCapabilitiesMapper::GetNameForMediaCapabilities(m_video));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", MediaCapabilitiesMapper::GetNameForMediaCapabilities(m_content));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
