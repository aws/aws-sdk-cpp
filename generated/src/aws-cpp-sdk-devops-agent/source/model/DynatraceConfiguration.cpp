/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/DynatraceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

DynatraceConfiguration::DynatraceConfiguration(JsonView jsonValue) { *this = jsonValue; }

DynatraceConfiguration& DynatraceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("envId")) {
    m_envId = jsonValue.GetString("envId");
    m_envIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue DynatraceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_envIdHasBeenSet) {
    payload.WithString("envId", m_envId);
  }

  if (m_resourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
    for (unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex) {
      resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
    }
    payload.WithArray("resources", std::move(resourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
