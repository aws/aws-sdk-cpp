/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Rule::Rule(JsonView jsonValue) { *this = jsonValue; }

Rule& Rule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("samplingConfig")) {
    m_samplingConfig = jsonValue.GetObject("samplingConfig");
    m_samplingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filters")) {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionConfig")) {
    m_sessionConfig = jsonValue.GetObject("sessionConfig");
    m_sessionConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Rule::Jsonize() const {
  JsonValue payload;

  if (m_samplingConfigHasBeenSet) {
    payload.WithObject("samplingConfig", m_samplingConfig.Jsonize());
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("filters", std::move(filtersJsonList));
  }

  if (m_sessionConfigHasBeenSet) {
    payload.WithObject("sessionConfig", m_sessionConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
