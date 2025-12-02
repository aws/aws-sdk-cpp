/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApiGatewayToolConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ApiGatewayToolConfiguration::ApiGatewayToolConfiguration(JsonView jsonValue) { *this = jsonValue; }

ApiGatewayToolConfiguration& ApiGatewayToolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolOverrides")) {
    Aws::Utils::Array<JsonView> toolOverridesJsonList = jsonValue.GetArray("toolOverrides");
    for (unsigned toolOverridesIndex = 0; toolOverridesIndex < toolOverridesJsonList.GetLength(); ++toolOverridesIndex) {
      m_toolOverrides.push_back(toolOverridesJsonList[toolOverridesIndex].AsObject());
    }
    m_toolOverridesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolFilters")) {
    Aws::Utils::Array<JsonView> toolFiltersJsonList = jsonValue.GetArray("toolFilters");
    for (unsigned toolFiltersIndex = 0; toolFiltersIndex < toolFiltersJsonList.GetLength(); ++toolFiltersIndex) {
      m_toolFilters.push_back(toolFiltersJsonList[toolFiltersIndex].AsObject());
    }
    m_toolFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiGatewayToolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_toolOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolOverridesJsonList(m_toolOverrides.size());
    for (unsigned toolOverridesIndex = 0; toolOverridesIndex < toolOverridesJsonList.GetLength(); ++toolOverridesIndex) {
      toolOverridesJsonList[toolOverridesIndex].AsObject(m_toolOverrides[toolOverridesIndex].Jsonize());
    }
    payload.WithArray("toolOverrides", std::move(toolOverridesJsonList));
  }

  if (m_toolFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> toolFiltersJsonList(m_toolFilters.size());
    for (unsigned toolFiltersIndex = 0; toolFiltersIndex < toolFiltersJsonList.GetLength(); ++toolFiltersIndex) {
      toolFiltersJsonList[toolFiltersIndex].AsObject(m_toolFilters[toolFiltersIndex].Jsonize());
    }
    payload.WithArray("toolFilters", std::move(toolFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
