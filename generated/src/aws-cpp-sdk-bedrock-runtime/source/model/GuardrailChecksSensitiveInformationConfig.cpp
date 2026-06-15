/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksSensitiveInformationConfig::GuardrailChecksSensitiveInformationConfig(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksSensitiveInformationConfig& GuardrailChecksSensitiveInformationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entities")) {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("entities");
    for (unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex) {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
    m_entitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksSensitiveInformationConfig::Jsonize() const {
  JsonValue payload;

  if (m_entitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
    for (unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex) {
      entitiesJsonList[entitiesIndex].AsObject(m_entities[entitiesIndex].Jsonize());
    }
    payload.WithArray("entities", std::move(entitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
