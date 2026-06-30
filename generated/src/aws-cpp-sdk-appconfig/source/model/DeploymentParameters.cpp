/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeploymentParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

DeploymentParameters::DeploymentParameters(JsonView jsonValue) { *this = jsonValue; }

DeploymentParameters& DeploymentParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DynamicExtensionParameters")) {
    Aws::Map<Aws::String, JsonView> dynamicExtensionParametersJsonMap = jsonValue.GetObject("DynamicExtensionParameters").GetAllObjects();
    for (auto& dynamicExtensionParametersItem : dynamicExtensionParametersJsonMap) {
      m_dynamicExtensionParameters[dynamicExtensionParametersItem.first] = dynamicExtensionParametersItem.second.AsString();
    }
    m_dynamicExtensionParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentParameters::Jsonize() const {
  JsonValue payload;

  if (m_dynamicExtensionParametersHasBeenSet) {
    JsonValue dynamicExtensionParametersJsonMap;
    for (auto& dynamicExtensionParametersItem : m_dynamicExtensionParameters) {
      dynamicExtensionParametersJsonMap.WithString(dynamicExtensionParametersItem.first, dynamicExtensionParametersItem.second);
    }
    payload.WithObject("DynamicExtensionParameters", std::move(dynamicExtensionParametersJsonMap));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
