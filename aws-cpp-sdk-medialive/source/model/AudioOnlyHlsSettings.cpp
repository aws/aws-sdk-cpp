/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioOnlyHlsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

AudioOnlyHlsSettings::AudioOnlyHlsSettings() : 
    m_audioGroupIdHasBeenSet(false),
    m_audioOnlyImageHasBeenSet(false),
    m_audioTrackType(AudioOnlyHlsTrackType::NOT_SET),
    m_audioTrackTypeHasBeenSet(false),
    m_segmentType(AudioOnlyHlsSegmentType::NOT_SET),
    m_segmentTypeHasBeenSet(false)
{
}

AudioOnlyHlsSettings::AudioOnlyHlsSettings(JsonView jsonValue) : 
    m_audioGroupIdHasBeenSet(false),
    m_audioOnlyImageHasBeenSet(false),
    m_audioTrackType(AudioOnlyHlsTrackType::NOT_SET),
    m_audioTrackTypeHasBeenSet(false),
    m_segmentType(AudioOnlyHlsSegmentType::NOT_SET),
    m_segmentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AudioOnlyHlsSettings& AudioOnlyHlsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioGroupId"))
  {
    m_audioGroupId = jsonValue.GetString("audioGroupId");

    m_audioGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioOnlyImage"))
  {
    m_audioOnlyImage = jsonValue.GetObject("audioOnlyImage");

    m_audioOnlyImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioTrackType"))
  {
    m_audioTrackType = AudioOnlyHlsTrackTypeMapper::GetAudioOnlyHlsTrackTypeForName(jsonValue.GetString("audioTrackType"));

    m_audioTrackTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentType"))
  {
    m_segmentType = AudioOnlyHlsSegmentTypeMapper::GetAudioOnlyHlsSegmentTypeForName(jsonValue.GetString("segmentType"));

    m_segmentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioOnlyHlsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioGroupIdHasBeenSet)
  {
   payload.WithString("audioGroupId", m_audioGroupId);

  }

  if(m_audioOnlyImageHasBeenSet)
  {
   payload.WithObject("audioOnlyImage", m_audioOnlyImage.Jsonize());

  }

  if(m_audioTrackTypeHasBeenSet)
  {
   payload.WithString("audioTrackType", AudioOnlyHlsTrackTypeMapper::GetNameForAudioOnlyHlsTrackType(m_audioTrackType));
  }

  if(m_segmentTypeHasBeenSet)
  {
   payload.WithString("segmentType", AudioOnlyHlsSegmentTypeMapper::GetNameForAudioOnlyHlsSegmentType(m_segmentType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
