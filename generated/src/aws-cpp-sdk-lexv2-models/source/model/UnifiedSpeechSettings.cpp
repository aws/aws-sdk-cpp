/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/UnifiedSpeechSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

UnifiedSpeechSettings::UnifiedSpeechSettings(JsonView jsonValue) { *this = jsonValue; }

UnifiedSpeechSettings& UnifiedSpeechSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("speechFoundationModel")) {
    m_speechFoundationModel = jsonValue.GetObject("speechFoundationModel");
    m_speechFoundationModelHasBeenSet = true;
  }
  return *this;
}

JsonValue UnifiedSpeechSettings::Jsonize() const {
  JsonValue payload;

  if (m_speechFoundationModelHasBeenSet) {
    payload.WithObject("speechFoundationModel", m_speechFoundationModel.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
