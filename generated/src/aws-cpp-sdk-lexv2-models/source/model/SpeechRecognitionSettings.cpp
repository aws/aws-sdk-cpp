/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/SpeechRecognitionSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

SpeechRecognitionSettings::SpeechRecognitionSettings(JsonView jsonValue) { *this = jsonValue; }

SpeechRecognitionSettings& SpeechRecognitionSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("speechModelPreference")) {
    m_speechModelPreference = SpeechModelPreferenceMapper::GetSpeechModelPreferenceForName(jsonValue.GetString("speechModelPreference"));
    m_speechModelPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("speechModelConfig")) {
    m_speechModelConfig = jsonValue.GetObject("speechModelConfig");
    m_speechModelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SpeechRecognitionSettings::Jsonize() const {
  JsonValue payload;

  if (m_speechModelPreferenceHasBeenSet) {
    payload.WithString("speechModelPreference", SpeechModelPreferenceMapper::GetNameForSpeechModelPreference(m_speechModelPreference));
  }

  if (m_speechModelConfigHasBeenSet) {
    payload.WithObject("speechModelConfig", m_speechModelConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
