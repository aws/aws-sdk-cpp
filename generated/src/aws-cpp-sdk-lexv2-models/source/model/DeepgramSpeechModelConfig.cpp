/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/DeepgramSpeechModelConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

DeepgramSpeechModelConfig::DeepgramSpeechModelConfig(JsonView jsonValue) { *this = jsonValue; }

DeepgramSpeechModelConfig& DeepgramSpeechModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiTokenSecretArn")) {
    m_apiTokenSecretArn = jsonValue.GetString("apiTokenSecretArn");
    m_apiTokenSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DeepgramSpeechModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_apiTokenSecretArnHasBeenSet) {
    payload.WithString("apiTokenSecretArn", m_apiTokenSecretArn);
  }

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
