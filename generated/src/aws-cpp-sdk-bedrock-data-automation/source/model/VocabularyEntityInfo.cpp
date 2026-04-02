/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VocabularyEntityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

VocabularyEntityInfo::VocabularyEntityInfo(JsonView jsonValue) { *this = jsonValue; }

VocabularyEntityInfo& VocabularyEntityInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entityId")) {
    m_entityId = jsonValue.GetString("entityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("language")) {
    m_language = LanguageMapper::GetLanguageForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("phrases")) {
    Aws::Utils::Array<JsonView> phrasesJsonList = jsonValue.GetArray("phrases");
    for (unsigned phrasesIndex = 0; phrasesIndex < phrasesJsonList.GetLength(); ++phrasesIndex) {
      m_phrases.push_back(phrasesJsonList[phrasesIndex].AsObject());
    }
    m_phrasesHasBeenSet = true;
  }
  return *this;
}

JsonValue VocabularyEntityInfo::Jsonize() const {
  JsonValue payload;

  if (m_entityIdHasBeenSet) {
    payload.WithString("entityId", m_entityId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", LanguageMapper::GetNameForLanguage(m_language));
  }

  if (m_phrasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> phrasesJsonList(m_phrases.size());
    for (unsigned phrasesIndex = 0; phrasesIndex < phrasesJsonList.GetLength(); ++phrasesIndex) {
      phrasesJsonList[phrasesIndex].AsObject(m_phrases[phrasesIndex].Jsonize());
    }
    payload.WithArray("phrases", std::move(phrasesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
