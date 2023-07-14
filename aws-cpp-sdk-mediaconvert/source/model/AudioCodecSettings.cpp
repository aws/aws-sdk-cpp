/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioCodecSettings.h>
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

AudioCodecSettings::AudioCodecSettings() : 
    m_aacSettingsHasBeenSet(false),
    m_ac3SettingsHasBeenSet(false),
    m_aiffSettingsHasBeenSet(false),
    m_codec(AudioCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_eac3AtmosSettingsHasBeenSet(false),
    m_eac3SettingsHasBeenSet(false),
    m_mp2SettingsHasBeenSet(false),
    m_mp3SettingsHasBeenSet(false),
    m_opusSettingsHasBeenSet(false),
    m_vorbisSettingsHasBeenSet(false),
    m_wavSettingsHasBeenSet(false)
{
}

AudioCodecSettings::AudioCodecSettings(JsonView jsonValue) : 
    m_aacSettingsHasBeenSet(false),
    m_ac3SettingsHasBeenSet(false),
    m_aiffSettingsHasBeenSet(false),
    m_codec(AudioCodec::NOT_SET),
    m_codecHasBeenSet(false),
    m_eac3AtmosSettingsHasBeenSet(false),
    m_eac3SettingsHasBeenSet(false),
    m_mp2SettingsHasBeenSet(false),
    m_mp3SettingsHasBeenSet(false),
    m_opusSettingsHasBeenSet(false),
    m_vorbisSettingsHasBeenSet(false),
    m_wavSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioCodecSettings& AudioCodecSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aacSettings"))
  {
    m_aacSettings = jsonValue.GetObject("aacSettings");

    m_aacSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ac3Settings"))
  {
    m_ac3Settings = jsonValue.GetObject("ac3Settings");

    m_ac3SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aiffSettings"))
  {
    m_aiffSettings = jsonValue.GetObject("aiffSettings");

    m_aiffSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codec"))
  {
    m_codec = AudioCodecMapper::GetAudioCodecForName(jsonValue.GetString("codec"));

    m_codecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eac3AtmosSettings"))
  {
    m_eac3AtmosSettings = jsonValue.GetObject("eac3AtmosSettings");

    m_eac3AtmosSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eac3Settings"))
  {
    m_eac3Settings = jsonValue.GetObject("eac3Settings");

    m_eac3SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mp2Settings"))
  {
    m_mp2Settings = jsonValue.GetObject("mp2Settings");

    m_mp2SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mp3Settings"))
  {
    m_mp3Settings = jsonValue.GetObject("mp3Settings");

    m_mp3SettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("opusSettings"))
  {
    m_opusSettings = jsonValue.GetObject("opusSettings");

    m_opusSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vorbisSettings"))
  {
    m_vorbisSettings = jsonValue.GetObject("vorbisSettings");

    m_vorbisSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("wavSettings"))
  {
    m_wavSettings = jsonValue.GetObject("wavSettings");

    m_wavSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioCodecSettings::Jsonize() const
{
  JsonValue payload;

  if(m_aacSettingsHasBeenSet)
  {
   payload.WithObject("aacSettings", m_aacSettings.Jsonize());

  }

  if(m_ac3SettingsHasBeenSet)
  {
   payload.WithObject("ac3Settings", m_ac3Settings.Jsonize());

  }

  if(m_aiffSettingsHasBeenSet)
  {
   payload.WithObject("aiffSettings", m_aiffSettings.Jsonize());

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", AudioCodecMapper::GetNameForAudioCodec(m_codec));
  }

  if(m_eac3AtmosSettingsHasBeenSet)
  {
   payload.WithObject("eac3AtmosSettings", m_eac3AtmosSettings.Jsonize());

  }

  if(m_eac3SettingsHasBeenSet)
  {
   payload.WithObject("eac3Settings", m_eac3Settings.Jsonize());

  }

  if(m_mp2SettingsHasBeenSet)
  {
   payload.WithObject("mp2Settings", m_mp2Settings.Jsonize());

  }

  if(m_mp3SettingsHasBeenSet)
  {
   payload.WithObject("mp3Settings", m_mp3Settings.Jsonize());

  }

  if(m_opusSettingsHasBeenSet)
  {
   payload.WithObject("opusSettings", m_opusSettings.Jsonize());

  }

  if(m_vorbisSettingsHasBeenSet)
  {
   payload.WithObject("vorbisSettings", m_vorbisSettings.Jsonize());

  }

  if(m_wavSettingsHasBeenSet)
  {
   payload.WithObject("wavSettings", m_wavSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
