/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ClusteringConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ClusteringConfig::ClusteringConfig(JsonView jsonValue) { *this = jsonValue; }

ClusteringConfig& ClusteringConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("frequencies")) {
    Aws::Utils::Array<JsonView> frequenciesJsonList = jsonValue.GetArray("frequencies");
    for (unsigned frequenciesIndex = 0; frequenciesIndex < frequenciesJsonList.GetLength(); ++frequenciesIndex) {
      m_frequencies.push_back(ClusteringFrequencyMapper::GetClusteringFrequencyForName(frequenciesJsonList[frequenciesIndex].AsString()));
    }
    m_frequenciesHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusteringConfig::Jsonize() const {
  JsonValue payload;

  if (m_frequenciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> frequenciesJsonList(m_frequencies.size());
    for (unsigned frequenciesIndex = 0; frequenciesIndex < frequenciesJsonList.GetLength(); ++frequenciesIndex) {
      frequenciesJsonList[frequenciesIndex].AsString(
          ClusteringFrequencyMapper::GetNameForClusteringFrequency(m_frequencies[frequenciesIndex]));
    }
    payload.WithArray("frequencies", std::move(frequenciesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
