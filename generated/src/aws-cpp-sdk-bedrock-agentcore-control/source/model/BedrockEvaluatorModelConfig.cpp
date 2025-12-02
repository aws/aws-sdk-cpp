/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BedrockEvaluatorModelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

BedrockEvaluatorModelConfig::BedrockEvaluatorModelConfig(JsonView jsonValue) { *this = jsonValue; }

BedrockEvaluatorModelConfig& BedrockEvaluatorModelConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inferenceConfig")) {
    m_inferenceConfig = jsonValue.GetObject("inferenceConfig");
    m_inferenceConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalModelRequestFields")) {
    m_additionalModelRequestFields = jsonValue.GetObject("additionalModelRequestFields");
    m_additionalModelRequestFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockEvaluatorModelConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_inferenceConfigHasBeenSet) {
    payload.WithObject("inferenceConfig", m_inferenceConfig.Jsonize());
  }

  if (m_additionalModelRequestFieldsHasBeenSet) {
    if (!m_additionalModelRequestFields.View().IsNull()) {
      payload.WithObject("additionalModelRequestFields", JsonValue(m_additionalModelRequestFields.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
