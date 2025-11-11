/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/AudioLanguageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

AudioLanguageConfiguration::AudioLanguageConfiguration(JsonView jsonValue) { *this = jsonValue; }

AudioLanguageConfiguration& AudioLanguageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inputLanguages")) {
    Aws::Utils::Array<JsonView> inputLanguagesJsonList = jsonValue.GetArray("inputLanguages");
    for (unsigned inputLanguagesIndex = 0; inputLanguagesIndex < inputLanguagesJsonList.GetLength(); ++inputLanguagesIndex) {
      m_inputLanguages.push_back(LanguageMapper::GetLanguageForName(inputLanguagesJsonList[inputLanguagesIndex].AsString()));
    }
    m_inputLanguagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generativeOutputLanguage")) {
    m_generativeOutputLanguage =
        AudioGenerativeOutputLanguageMapper::GetAudioGenerativeOutputLanguageForName(jsonValue.GetString("generativeOutputLanguage"));
    m_generativeOutputLanguageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("identifyMultipleLanguages")) {
    m_identifyMultipleLanguages = jsonValue.GetBool("identifyMultipleLanguages");
    m_identifyMultipleLanguagesHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioLanguageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_inputLanguagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> inputLanguagesJsonList(m_inputLanguages.size());
    for (unsigned inputLanguagesIndex = 0; inputLanguagesIndex < inputLanguagesJsonList.GetLength(); ++inputLanguagesIndex) {
      inputLanguagesJsonList[inputLanguagesIndex].AsString(LanguageMapper::GetNameForLanguage(m_inputLanguages[inputLanguagesIndex]));
    }
    payload.WithArray("inputLanguages", std::move(inputLanguagesJsonList));
  }

  if (m_generativeOutputLanguageHasBeenSet) {
    payload.WithString("generativeOutputLanguage",
                       AudioGenerativeOutputLanguageMapper::GetNameForAudioGenerativeOutputLanguage(m_generativeOutputLanguage));
  }

  if (m_identifyMultipleLanguagesHasBeenSet) {
    payload.WithBool("identifyMultipleLanguages", m_identifyMultipleLanguages);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
