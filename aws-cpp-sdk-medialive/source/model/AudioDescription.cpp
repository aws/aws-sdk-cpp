/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioDescription.h>
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

AudioDescription::AudioDescription() : 
    m_audioNormalizationSettingsHasBeenSet(false),
    m_audioSelectorNameHasBeenSet(false),
    m_audioType(AudioType::NOT_SET),
    m_audioTypeHasBeenSet(false),
    m_audioTypeControl(AudioDescriptionAudioTypeControl::NOT_SET),
    m_audioTypeControlHasBeenSet(false),
    m_codecSettingsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_languageCodeControl(AudioDescriptionLanguageCodeControl::NOT_SET),
    m_languageCodeControlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remixSettingsHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

AudioDescription::AudioDescription(JsonView jsonValue) : 
    m_audioNormalizationSettingsHasBeenSet(false),
    m_audioSelectorNameHasBeenSet(false),
    m_audioType(AudioType::NOT_SET),
    m_audioTypeHasBeenSet(false),
    m_audioTypeControl(AudioDescriptionAudioTypeControl::NOT_SET),
    m_audioTypeControlHasBeenSet(false),
    m_codecSettingsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_languageCodeControl(AudioDescriptionLanguageCodeControl::NOT_SET),
    m_languageCodeControlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remixSettingsHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

AudioDescription& AudioDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioNormalizationSettings"))
  {
    m_audioNormalizationSettings = jsonValue.GetObject("audioNormalizationSettings");

    m_audioNormalizationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSelectorName"))
  {
    m_audioSelectorName = jsonValue.GetString("audioSelectorName");

    m_audioSelectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioType"))
  {
    m_audioType = AudioTypeMapper::GetAudioTypeForName(jsonValue.GetString("audioType"));

    m_audioTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioTypeControl"))
  {
    m_audioTypeControl = AudioDescriptionAudioTypeControlMapper::GetAudioDescriptionAudioTypeControlForName(jsonValue.GetString("audioTypeControl"));

    m_audioTypeControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecSettings"))
  {
    m_codecSettings = jsonValue.GetObject("codecSettings");

    m_codecSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCodeControl"))
  {
    m_languageCodeControl = AudioDescriptionLanguageCodeControlMapper::GetAudioDescriptionLanguageCodeControlForName(jsonValue.GetString("languageCodeControl"));

    m_languageCodeControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remixSettings"))
  {
    m_remixSettings = jsonValue.GetObject("remixSettings");

    m_remixSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioDescription::Jsonize() const
{
  JsonValue payload;

  if(m_audioNormalizationSettingsHasBeenSet)
  {
   payload.WithObject("audioNormalizationSettings", m_audioNormalizationSettings.Jsonize());

  }

  if(m_audioSelectorNameHasBeenSet)
  {
   payload.WithString("audioSelectorName", m_audioSelectorName);

  }

  if(m_audioTypeHasBeenSet)
  {
   payload.WithString("audioType", AudioTypeMapper::GetNameForAudioType(m_audioType));
  }

  if(m_audioTypeControlHasBeenSet)
  {
   payload.WithString("audioTypeControl", AudioDescriptionAudioTypeControlMapper::GetNameForAudioDescriptionAudioTypeControl(m_audioTypeControl));
  }

  if(m_codecSettingsHasBeenSet)
  {
   payload.WithObject("codecSettings", m_codecSettings.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

  }

  if(m_languageCodeControlHasBeenSet)
  {
   payload.WithString("languageCodeControl", AudioDescriptionLanguageCodeControlMapper::GetNameForAudioDescriptionLanguageCodeControl(m_languageCodeControl));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_remixSettingsHasBeenSet)
  {
   payload.WithObject("remixSettings", m_remixSettings.Jsonize());

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
