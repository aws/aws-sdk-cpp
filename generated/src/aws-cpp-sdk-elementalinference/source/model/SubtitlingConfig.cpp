/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/SubtitlingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

SubtitlingConfig::SubtitlingConfig(JsonView jsonValue) { *this = jsonValue; }

SubtitlingConfig& SubtitlingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("language")) {
    m_language = TranscriptionLanguageMapper::GetTranscriptionLanguageForName(jsonValue.GetString("language"));
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aspectRatio")) {
    m_aspectRatio = jsonValue.GetObject("aspectRatio");
    m_aspectRatioHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dictionary")) {
    m_dictionary = jsonValue.GetString("dictionary");
    m_dictionaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profanityFilter")) {
    m_profanityFilter = ProfanityFilterModeMapper::GetProfanityFilterModeForName(jsonValue.GetString("profanityFilter"));
    m_profanityFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue SubtitlingConfig::Jsonize() const {
  JsonValue payload;

  if (m_languageHasBeenSet) {
    payload.WithString("language", TranscriptionLanguageMapper::GetNameForTranscriptionLanguage(m_language));
  }

  if (m_aspectRatioHasBeenSet) {
    payload.WithObject("aspectRatio", m_aspectRatio.Jsonize());
  }

  if (m_dictionaryHasBeenSet) {
    payload.WithString("dictionary", m_dictionary);
  }

  if (m_profanityFilterHasBeenSet) {
    payload.WithString("profanityFilter", ProfanityFilterModeMapper::GetNameForProfanityFilterMode(m_profanityFilter));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
