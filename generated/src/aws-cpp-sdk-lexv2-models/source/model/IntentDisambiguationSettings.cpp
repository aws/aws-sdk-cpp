/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/IntentDisambiguationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

IntentDisambiguationSettings::IntentDisambiguationSettings(JsonView jsonValue) { *this = jsonValue; }

IntentDisambiguationSettings& IntentDisambiguationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxDisambiguationIntents")) {
    m_maxDisambiguationIntents = jsonValue.GetInteger("maxDisambiguationIntents");
    m_maxDisambiguationIntentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customDisambiguationMessage")) {
    m_customDisambiguationMessage = jsonValue.GetString("customDisambiguationMessage");
    m_customDisambiguationMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue IntentDisambiguationSettings::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_maxDisambiguationIntentsHasBeenSet) {
    payload.WithInteger("maxDisambiguationIntents", m_maxDisambiguationIntents);
  }

  if (m_customDisambiguationMessageHasBeenSet) {
    payload.WithString("customDisambiguationMessage", m_customDisambiguationMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
