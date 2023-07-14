/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoCodecSettings.h>
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

VideoCodecSettings::VideoCodecSettings() : 
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false),
    m_h265SettingsHasBeenSet(false),
    m_mpeg2SettingsHasBeenSet(false)
{
}

VideoCodecSettings::VideoCodecSettings(JsonView jsonValue) : 
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false),
    m_h265SettingsHasBeenSet(false),
    m_mpeg2SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

VideoCodecSettings& VideoCodecSettings::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue VideoCodecSettings::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
