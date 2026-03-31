/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelEnforcement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

ModelEnforcement::ModelEnforcement(JsonView jsonValue) { *this = jsonValue; }

ModelEnforcement& ModelEnforcement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("includedModels")) {
    Aws::Utils::Array<JsonView> includedModelsJsonList = jsonValue.GetArray("includedModels");
    for (unsigned includedModelsIndex = 0; includedModelsIndex < includedModelsJsonList.GetLength(); ++includedModelsIndex) {
      m_includedModels.push_back(includedModelsJsonList[includedModelsIndex].AsString());
    }
    m_includedModelsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("excludedModels")) {
    Aws::Utils::Array<JsonView> excludedModelsJsonList = jsonValue.GetArray("excludedModels");
    for (unsigned excludedModelsIndex = 0; excludedModelsIndex < excludedModelsJsonList.GetLength(); ++excludedModelsIndex) {
      m_excludedModels.push_back(excludedModelsJsonList[excludedModelsIndex].AsString());
    }
    m_excludedModelsHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelEnforcement::Jsonize() const {
  JsonValue payload;

  if (m_includedModelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedModelsJsonList(m_includedModels.size());
    for (unsigned includedModelsIndex = 0; includedModelsIndex < includedModelsJsonList.GetLength(); ++includedModelsIndex) {
      includedModelsJsonList[includedModelsIndex].AsString(m_includedModels[includedModelsIndex]);
    }
    payload.WithArray("includedModels", std::move(includedModelsJsonList));
  }

  if (m_excludedModelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedModelsJsonList(m_excludedModels.size());
    for (unsigned excludedModelsIndex = 0; excludedModelsIndex < excludedModelsJsonList.GetLength(); ++excludedModelsIndex) {
      excludedModelsJsonList[excludedModelsIndex].AsString(m_excludedModels[excludedModelsIndex]);
    }
    payload.WithArray("excludedModels", std::move(excludedModelsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
