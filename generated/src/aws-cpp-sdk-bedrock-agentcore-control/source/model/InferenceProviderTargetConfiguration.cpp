/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InferenceProviderTargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InferenceProviderTargetConfiguration::InferenceProviderTargetConfiguration(JsonView jsonValue) { *this = jsonValue; }

InferenceProviderTargetConfiguration& InferenceProviderTargetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelMapping")) {
    m_modelMapping = jsonValue.GetObject("modelMapping");
    m_modelMappingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operations")) {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("operations");
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      m_operations.push_back(operationsJsonList[operationsIndex].AsObject());
    }
    m_operationsHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceProviderTargetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_modelMappingHasBeenSet) {
    payload.WithObject("modelMapping", m_modelMapping.Jsonize());
  }

  if (m_operationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      operationsJsonList[operationsIndex].AsObject(m_operations[operationsIndex].Jsonize());
    }
    payload.WithArray("operations", std::move(operationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
