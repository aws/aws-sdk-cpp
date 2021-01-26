/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_avcIntraSettingsHasBeenSet(false),
    m_codec(VideoCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false),
    m_h265SettingsHasBeenSet(false),
    m_mpeg2SettingsHasBeenSet(false),
    m_proresSettingsHasBeenSet(false),
    m_vc3SettingsHasBeenSet(false),
    m_vp8SettingsHasBeenSet(false),
    m_vp9SettingsHasBeenSet(false)
{
}

VideoCodecSettings::VideoCodecSettings(JsonView jsonValue) : 
    m_av1SettingsHasBeenSet(false),
    m_avcIntraSettingsHasBeenSet(false),
    m_codec(VideoCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false),
    m_h265SettingsHasBeenSet(false),
    m_mpeg2SettingsHasBeenSet(false),
    m_proresSettingsHasBeenSet(false),
    m_vc3SettingsHasBeenSet(false),
    m_vp8SettingsHasBeenSet(false),
    m_vp9SettingsHasBeenSet(false)
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

  if(jsonValue.ValueExists("avcIntraSettings"))
  {
    m_avcIntraSettings = jsonValue.GetObject("avcIntraSettings");

    m_avcIntraSettingsHasBeenSet = true;
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

  if(jsonValue.ValueExists("vc3Settings"))
  {
    m_vc3Settings = jsonValue.GetObject("vc3Settings");

    m_vc3SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vp8Settings"))
  {
    m_vp8Settings = jsonValue.GetObject("vp8Settings");

    m_vp8SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vp9Settings"))
  {
    m_vp9Settings = jsonValue.GetObject("vp9Settings");

    m_vp9SettingsHasBeenSet = true;
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

  if(m_avcIntraSettingsHasBeenSet)
  {
   payload.WithObject("avcIntraSettings", m_avcIntraSettings.Jsonize());

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

  if(m_vc3SettingsHasBeenSet)
  {
   payload.WithObject("vc3Settings", m_vc3Settings.Jsonize());

  }

  if(m_vp8SettingsHasBeenSet)
  {
   payload.WithObject("vp8Settings", m_vp8Settings.Jsonize());

  }

  if(m_vp9SettingsHasBeenSet)
  {
   payload.WithObject("vp9Settings", m_vp9Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
