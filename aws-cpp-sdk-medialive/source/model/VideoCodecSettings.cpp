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
    m_h264SettingsHasBeenSet(false)
{
}

VideoCodecSettings::VideoCodecSettings(JsonView jsonValue) : 
    m_frameCaptureSettingsHasBeenSet(false),
    m_h264SettingsHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
