/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksContentFilterConfig::GuardrailChecksContentFilterConfig(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksContentFilterConfig& GuardrailChecksContentFilterConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("categories")) {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksContentFilterConfig::Jsonize() const {
  JsonValue payload;

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
    }
    payload.WithArray("categories", std::move(categoriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
