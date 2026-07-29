/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ExecutionEnvironmentVariables.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ExecutionEnvironmentVariables::ExecutionEnvironmentVariables(JsonView jsonValue) { *this = jsonValue; }

ExecutionEnvironmentVariables& ExecutionEnvironmentVariables::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("global")) {
    Aws::Map<Aws::String, JsonView> globalJsonMap = jsonValue.GetObject("global").GetAllObjects();
    for (auto& globalItem : globalJsonMap) {
      m_global[globalItem.first] = globalItem.second.AsString();
    }
    m_globalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computeNodes")) {
    Aws::Map<Aws::String, JsonView> computeNodesJsonMap = jsonValue.GetObject("computeNodes").GetAllObjects();
    for (auto& computeNodesItem : computeNodesJsonMap) {
      Aws::Map<Aws::String, JsonView> environmentVariablesMap2JsonMap = computeNodesItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> environmentVariablesMap2Map;
      for (auto& environmentVariablesMap2Item : environmentVariablesMap2JsonMap) {
        environmentVariablesMap2Map[environmentVariablesMap2Item.first] = environmentVariablesMap2Item.second.AsString();
      }
      m_computeNodes[computeNodesItem.first] = std::move(environmentVariablesMap2Map);
    }
    m_computeNodesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionEnvironmentVariables::Jsonize() const {
  JsonValue payload;

  if (m_globalHasBeenSet) {
    JsonValue globalJsonMap;
    for (auto& globalItem : m_global) {
      globalJsonMap.WithString(globalItem.first, globalItem.second);
    }
    payload.WithObject("global", std::move(globalJsonMap));
  }

  if (m_computeNodesHasBeenSet) {
    JsonValue computeNodesJsonMap;
    for (auto& computeNodesItem : m_computeNodes) {
      JsonValue environmentVariablesMapJsonMap;
      for (auto& environmentVariablesMapItem : computeNodesItem.second) {
        environmentVariablesMapJsonMap.WithString(environmentVariablesMapItem.first, environmentVariablesMapItem.second);
      }
      computeNodesJsonMap.WithObject(computeNodesItem.first, std::move(environmentVariablesMapJsonMap));
    }
    payload.WithObject("computeNodes", std::move(computeNodesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
