/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/SpeechModelConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

SpeechModelConfig::SpeechModelConfig(JsonView jsonValue) { *this = jsonValue; }

SpeechModelConfig& SpeechModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deepgramConfig")) {
    m_deepgramConfig = jsonValue.GetObject("deepgramConfig");
    m_deepgramConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue SpeechModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_deepgramConfigHasBeenSet) {
    payload.WithObject("deepgramConfig", m_deepgramConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
