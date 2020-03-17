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

#include <aws/mediaconvert/model/VideoCodecSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

VideoCodecSettings::VideoCodecSettings() : 
    m_av1SettingsHasBeenSet(false),
    m_codec(VideoCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false),
    m_h265SettingsHasBeenSet(false),
    m_mpeg2SettingsHasBeenSet(false),
    m_proresSettingsHasBeenSet(false)
{
}

VideoCodecSettings::VideoCodecSettings(JsonView jsonValue) : 
    m_av1SettingsHasBeenSet(false),
    m_codec(VideoCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false),
    m_h265SettingsHasBeenSet(false),
    m_mpeg2SettingsHasBeenSet(false),
    m_proresSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

VideoCodecSettings& VideoCodecSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("av1Settings"))
  {
    m_av1Settings = jsonValue.GetObject("av1Settings");

    m_av1SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = VideoCodecMapper::GetVideoCodecForName(jsonValue.GetString("codec"));

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frameCaptureSettings"))
  {
    m_frameCaptureSettings = jsonValue.GetObject("frameCaptureSettings");

    m_frameCaptureSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("h264Settings"))
  {
    m_h264Settings = jsonValue.GetObject("h264Settings");

    m_h264SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("h265Settings"))
  {
    m_h265Settings = jsonValue.GetObject("h265Settings");

    m_h265SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mpeg2Settings"))
  {
    m_mpeg2Settings = jsonValue.GetObject("mpeg2Settings");

    m_mpeg2SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("proresSettings"))
  {
    m_proresSettings = jsonValue.GetObject("proresSettings");

    m_proresSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoCodecSettings::Jsonize() const
{
  JsonValue payload;

  if(m_av1SettingsHasBeenSet)
  {
   payload.WithObject("av1Settings", m_av1Settings.Jsonize());

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", VideoCodecMapper::GetNameForVideoCodec(m_codec));
  }

  if(m_frameCaptureSettingsHasBeenSet)
  {
   payload.WithObject("frameCaptureSettings", m_frameCaptureSettings.Jsonize());

  }

  if(m_h264SettingsHasBeenSet)
  {
   payload.WithObject("h264Settings", m_h264Settings.Jsonize());

  }

  if(m_h265SettingsHasBeenSet)
  {
   payload.WithObject("h265Settings", m_h265Settings.Jsonize());

  }

  if(m_mpeg2SettingsHasBeenSet)
  {
   payload.WithObject("mpeg2Settings", m_mpeg2Settings.Jsonize());

  }

  if(m_proresSettingsHasBeenSet)
  {
   payload.WithObject("proresSettings", m_proresSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
