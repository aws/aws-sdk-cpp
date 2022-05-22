/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioWatermarkSettings.h>
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

AudioWatermarkSettings::AudioWatermarkSettings() : 
    m_nielsenWatermarksSettingsHasBeenSet(false)
{
}

AudioWatermarkSettings::AudioWatermarkSettings(JsonView jsonValue) : 
    m_nielsenWatermarksSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioWatermarkSettings& AudioWatermarkSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nielsenWatermarksSettings"))
  {
    m_nielsenWatermarksSettings = jsonValue.GetObject("nielsenWatermarksSettings");

    m_nielsenWatermarksSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioWatermarkSettings::Jsonize() const
{
  JsonValue payload;

  if(m_nielsenWatermarksSettingsHasBeenSet)
  {
   payload.WithObject("nielsenWatermarksSettings", m_nielsenWatermarksSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
