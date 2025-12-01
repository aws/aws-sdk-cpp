/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/VoiceSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

VoiceSettings::VoiceSettings(JsonView jsonValue) { *this = jsonValue; }

VoiceSettings& VoiceSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("engine")) {
    m_engine = VoiceEngineMapper::GetVoiceEngineForName(jsonValue.GetString("engine"));
    m_engineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("voiceId")) {
    m_voiceId = jsonValue.GetString("voiceId");
    m_voiceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VoiceSettings::Jsonize() const {
  JsonValue payload;

  if (m_engineHasBeenSet) {
    payload.WithString("engine", VoiceEngineMapper::GetNameForVoiceEngine(m_engine));
  }

  if (m_voiceIdHasBeenSet) {
    payload.WithString("voiceId", m_voiceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
