/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VocabularyEntitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

VocabularyEntitySummary::VocabularyEntitySummary(JsonView jsonValue) { *this = jsonValue; }

VocabularyEntitySummary& VocabularyEntitySummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("numOfPhrases")) {
    m_numOfPhrases = jsonValue.GetInteger("numOfPhrases");
    m_numOfPhrasesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue VocabularyEntitySummary::Jsonize() const {
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

  if (m_numOfPhrasesHasBeenSet) {
    payload.WithInteger("numOfPhrases", m_numOfPhrases);
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
