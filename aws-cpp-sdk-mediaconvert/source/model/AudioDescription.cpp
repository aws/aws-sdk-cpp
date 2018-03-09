﻿/*
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

#include <aws/mediaconvert/model/AudioDescription.h>
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

AudioDescription::AudioDescription() : 
    m_audioNormalizationSettingsHasBeenSet(false),
    m_audioSourceNameHasBeenSet(false),
    m_audioType(0),
    m_audioTypeHasBeenSet(false),
    m_audioTypeControl(AudioTypeControl::NOT_SET),
    m_audioTypeControlHasBeenSet(false),
    m_codecSettingsHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageCodeControl(AudioLanguageCodeControl::NOT_SET),
    m_languageCodeControlHasBeenSet(false),
    m_remixSettingsHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

AudioDescription::AudioDescription(const JsonValue& jsonValue) : 
    m_audioNormalizationSettingsHasBeenSet(false),
    m_audioSourceNameHasBeenSet(false),
    m_audioType(0),
    m_audioTypeHasBeenSet(false),
    m_audioTypeControl(AudioTypeControl::NOT_SET),
    m_audioTypeControlHasBeenSet(false),
    m_codecSettingsHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_languageCodeControl(AudioLanguageCodeControl::NOT_SET),
    m_languageCodeControlHasBeenSet(false),
    m_remixSettingsHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

AudioDescription& AudioDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("audioNormalizationSettings"))
  {
    m_audioNormalizationSettings = jsonValue.GetObject("audioNormalizationSettings");

    m_audioNormalizationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioSourceName"))
  {
    m_audioSourceName = jsonValue.GetString("audioSourceName");

    m_audioSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioType"))
  {
    m_audioType = jsonValue.GetInteger("audioType");

    m_audioTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioTypeControl"))
  {
    m_audioTypeControl = AudioTypeControlMapper::GetAudioTypeControlForName(jsonValue.GetString("audioTypeControl"));

    m_audioTypeControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecSettings"))
  {
    m_codecSettings = jsonValue.GetObject("codecSettings");

    m_codecSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCodeControl"))
  {
    m_languageCodeControl = AudioLanguageCodeControlMapper::GetAudioLanguageCodeControlForName(jsonValue.GetString("languageCodeControl"));

    m_languageCodeControlHasBeenSet = true;
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

  if(m_audioSourceNameHasBeenSet)
  {
   payload.WithString("audioSourceName", m_audioSourceName);

  }

  if(m_audioTypeHasBeenSet)
  {
   payload.WithInteger("audioType", m_audioType);

  }

  if(m_audioTypeControlHasBeenSet)
  {
   payload.WithString("audioTypeControl", AudioTypeControlMapper::GetNameForAudioTypeControl(m_audioTypeControl));
  }

  if(m_codecSettingsHasBeenSet)
  {
   payload.WithObject("codecSettings", m_codecSettings.Jsonize());

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_languageCodeControlHasBeenSet)
  {
   payload.WithString("languageCodeControl", AudioLanguageCodeControlMapper::GetNameForAudioLanguageCodeControl(m_languageCodeControl));
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
} // namespace MediaConvert
} // namespace Aws
