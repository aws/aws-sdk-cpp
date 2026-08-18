/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryRetrievalConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveMemoryRetrievalConfig::AgenticRetrieveMemoryRetrievalConfig(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveMemoryRetrievalConfig& AgenticRetrieveMemoryRetrievalConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataFilters")) {
    Aws::Utils::Array<JsonView> metadataFiltersJsonList = jsonValue.GetArray("metadataFilters");
    for (unsigned metadataFiltersIndex = 0; metadataFiltersIndex < metadataFiltersJsonList.GetLength(); ++metadataFiltersIndex) {
      m_metadataFilters.push_back(metadataFiltersJsonList[metadataFiltersIndex].AsObject());
    }
    m_metadataFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespacePath")) {
    m_namespacePath = jsonValue.GetString("namespacePath");
    m_namespacePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strategyId")) {
    m_strategyId = jsonValue.GetString("strategyId");
    m_strategyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveMemoryRetrievalConfig::Jsonize() const {
  JsonValue payload;

  if (m_metadataFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> metadataFiltersJsonList(m_metadataFilters.size());
    for (unsigned metadataFiltersIndex = 0; metadataFiltersIndex < metadataFiltersJsonList.GetLength(); ++metadataFiltersIndex) {
      metadataFiltersJsonList[metadataFiltersIndex].AsObject(m_metadataFilters[metadataFiltersIndex].Jsonize());
    }
    payload.WithArray("metadataFilters", std::move(metadataFiltersJsonList));
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_namespacePathHasBeenSet) {
    payload.WithString("namespacePath", m_namespacePath);
  }

  if (m_strategyIdHasBeenSet) {
    payload.WithString("strategyId", m_strategyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
