/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
