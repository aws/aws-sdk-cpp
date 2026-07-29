/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ComputeNode.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ComputeNode::ComputeNode(JsonView jsonValue) { *this = jsonValue; }

ComputeNode& ComputeNode::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("computeNodeName")) {
    m_computeNodeName = jsonValue.GetString("computeNodeName");
    m_computeNodeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskName")) {
    m_taskName = jsonValue.GetString("taskName");
    m_taskNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVariables")) {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for (auto& environmentVariablesItem : environmentVariablesJsonMap) {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependsOn")) {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsString());
    }
    m_dependsOnHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNode::Jsonize() const {
  JsonValue payload;

  if (m_computeNodeNameHasBeenSet) {
    payload.WithString("computeNodeName", m_computeNodeName);
  }

  if (m_taskNameHasBeenSet) {
    payload.WithString("taskName", m_taskName);
  }

  if (m_environmentVariablesHasBeenSet) {
    JsonValue environmentVariablesJsonMap;
    for (auto& environmentVariablesItem : m_environmentVariables) {
      environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
    }
    payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));
  }

  if (m_dependsOnHasBeenSet) {
    Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      dependsOnJsonList[dependsOnIndex].AsString(m_dependsOn[dependsOnIndex]);
    }
    payload.WithArray("dependsOn", std::move(dependsOnJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
