/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsJobSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

CallAnalyticsJobSettings::CallAnalyticsJobSettings() : 
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_languageIdSettingsHasBeenSet(false)
{
}

CallAnalyticsJobSettings::CallAnalyticsJobSettings(JsonView jsonValue) : 
    m_vocabularyNameHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_contentRedactionHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_languageIdSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

CallAnalyticsJobSettings& CallAnalyticsJobSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");

    m_vocabularyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");

    m_vocabularyFilterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));

    m_vocabularyFilterMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageModelName"))
  {
    m_languageModelName = jsonValue.GetString("LanguageModelName");

    m_languageModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedaction"))
  {
    m_contentRedaction = jsonValue.GetObject("ContentRedaction");

    m_contentRedactionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageOptions"))
  {
    Aws::Utils::Array<JsonView> languageOptionsJsonList = jsonValue.GetArray("LanguageOptions");
    for(unsigned languageOptionsIndex = 0; languageOptionsIndex < languageOptionsJsonList.GetLength(); ++languageOptionsIndex)
    {
      m_languageOptions.push_back(LanguageCodeMapper::GetLanguageCodeForName(languageOptionsJsonList[languageOptionsIndex].AsString()));
    }
    m_languageOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageIdSettings"))
  {
    Aws::Map<Aws::String, JsonView> languageIdSettingsJsonMap = jsonValue.GetObject("LanguageIdSettings").GetAllObjects();
    for(auto& languageIdSettingsItem : languageIdSettingsJsonMap)
    {
      m_languageIdSettings[LanguageCodeMapper::GetLanguageCodeForName(languageIdSettingsItem.first)] = languageIdSettingsItem.second.AsObject();
    }
    m_languageIdSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue CallAnalyticsJobSettings::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  if(m_languageModelNameHasBeenSet)
  {
   payload.WithString("LanguageModelName", m_languageModelName);

  }

  if(m_contentRedactionHasBeenSet)
  {
   payload.WithObject("ContentRedaction", m_contentRedaction.Jsonize());

  }

  if(m_languageOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> languageOptionsJsonList(m_languageOptions.size());
   for(unsigned languageOptionsIndex = 0; languageOptionsIndex < languageOptionsJsonList.GetLength(); ++languageOptionsIndex)
   {
     languageOptionsJsonList[languageOptionsIndex].AsString(LanguageCodeMapper::GetNameForLanguageCode(m_languageOptions[languageOptionsIndex]));
   }
   payload.WithArray("LanguageOptions", std::move(languageOptionsJsonList));

  }

  if(m_languageIdSettingsHasBeenSet)
  {
   JsonValue languageIdSettingsJsonMap;
   for(auto& languageIdSettingsItem : m_languageIdSettings)
   {
     languageIdSettingsJsonMap.WithObject(LanguageCodeMapper::GetNameForLanguageCode(languageIdSettingsItem.first), languageIdSettingsItem.second.Jsonize());
   }
   payload.WithObject("LanguageIdSettings", std::move(languageIdSettingsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
