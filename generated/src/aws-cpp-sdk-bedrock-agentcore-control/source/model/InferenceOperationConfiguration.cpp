/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InferenceOperationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InferenceOperationConfiguration::InferenceOperationConfiguration(JsonView jsonValue) { *this = jsonValue; }

InferenceOperationConfiguration& InferenceOperationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerPath")) {
    m_providerPath = jsonValue.GetString("providerPath");
    m_providerPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("models")) {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for (unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex) {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceOperationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_providerPathHasBeenSet) {
    payload.WithString("providerPath", m_providerPath);
  }

  if (m_modelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> modelsJsonList(m_models.size());
    for (unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex) {
      modelsJsonList[modelsIndex].AsObject(m_models[modelsIndex].Jsonize());
    }
    payload.WithArray("models", std::move(modelsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
