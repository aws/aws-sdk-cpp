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

#include <aws/mediaconvert/model/AudioSelector.h>
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

AudioSelector::AudioSelector() : 
    m_defaultSelection(AudioDefaultSelection::NOT_SET),
    m_defaultSelectionHasBeenSet(false),
    m_externalAudioFileInputHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false),
    m_pidsHasBeenSet(false),
    m_programSelection(0),
    m_programSelectionHasBeenSet(false),
    m_remixSettingsHasBeenSet(false),
    m_selectorType(AudioSelectorType::NOT_SET),
    m_selectorTypeHasBeenSet(false),
    m_tracksHasBeenSet(false)
{
}

AudioSelector::AudioSelector(const JsonValue& jsonValue) : 
    m_defaultSelection(AudioDefaultSelection::NOT_SET),
    m_defaultSelectionHasBeenSet(false),
    m_externalAudioFileInputHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false),
    m_pidsHasBeenSet(false),
    m_programSelection(0),
    m_programSelectionHasBeenSet(false),
    m_remixSettingsHasBeenSet(false),
    m_selectorType(AudioSelectorType::NOT_SET),
    m_selectorTypeHasBeenSet(false),
    m_tracksHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSelector& AudioSelector::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("defaultSelection"))
  {
    m_defaultSelection = AudioDefaultSelectionMapper::GetAudioDefaultSelectionForName(jsonValue.GetString("defaultSelection"));

    m_defaultSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalAudioFileInput"))
  {
    m_externalAudioFileInput = jsonValue.GetString("externalAudioFileInput");

    m_externalAudioFileInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("languageCode"));

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetInteger("offset");

    m_offsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pids"))
  {
    Array<JsonValue> pidsJsonList = jsonValue.GetArray("pids");
    for(unsigned pidsIndex = 0; pidsIndex < pidsJsonList.GetLength(); ++pidsIndex)
    {
      m_pids.push_back(pidsJsonList[pidsIndex].AsInteger());
    }
    m_pidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programSelection"))
  {
    m_programSelection = jsonValue.GetInteger("programSelection");

    m_programSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remixSettings"))
  {
    m_remixSettings = jsonValue.GetObject("remixSettings");

    m_remixSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectorType"))
  {
    m_selectorType = AudioSelectorTypeMapper::GetAudioSelectorTypeForName(jsonValue.GetString("selectorType"));

    m_selectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tracks"))
  {
    Array<JsonValue> tracksJsonList = jsonValue.GetArray("tracks");
    for(unsigned tracksIndex = 0; tracksIndex < tracksJsonList.GetLength(); ++tracksIndex)
    {
      m_tracks.push_back(tracksJsonList[tracksIndex].AsInteger());
    }
    m_tracksHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioSelector::Jsonize() const
{
  JsonValue payload;

  if(m_defaultSelectionHasBeenSet)
  {
   payload.WithString("defaultSelection", AudioDefaultSelectionMapper::GetNameForAudioDefaultSelection(m_defaultSelection));
  }

  if(m_externalAudioFileInputHasBeenSet)
  {
   payload.WithString("externalAudioFileInput", m_externalAudioFileInput);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("offset", m_offset);

  }

  if(m_pidsHasBeenSet)
  {
   Array<JsonValue> pidsJsonList(m_pids.size());
   for(unsigned pidsIndex = 0; pidsIndex < pidsJsonList.GetLength(); ++pidsIndex)
   {
     pidsJsonList[pidsIndex].AsInteger(m_pids[pidsIndex]);
   }
   payload.WithArray("pids", std::move(pidsJsonList));

  }

  if(m_programSelectionHasBeenSet)
  {
   payload.WithInteger("programSelection", m_programSelection);

  }

  if(m_remixSettingsHasBeenSet)
  {
   payload.WithObject("remixSettings", m_remixSettings.Jsonize());

  }

  if(m_selectorTypeHasBeenSet)
  {
   payload.WithString("selectorType", AudioSelectorTypeMapper::GetNameForAudioSelectorType(m_selectorType));
  }

  if(m_tracksHasBeenSet)
  {
   Array<JsonValue> tracksJsonList(m_tracks.size());
   for(unsigned tracksIndex = 0; tracksIndex < tracksJsonList.GetLength(); ++tracksIndex)
   {
     tracksJsonList[tracksIndex].AsInteger(m_tracks[tracksIndex]);
   }
   payload.WithArray("tracks", std::move(tracksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
