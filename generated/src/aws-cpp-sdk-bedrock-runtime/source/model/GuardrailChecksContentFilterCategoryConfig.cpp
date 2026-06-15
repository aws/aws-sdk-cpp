/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksContentFilterCategoryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksContentFilterCategoryConfig::GuardrailChecksContentFilterCategoryConfig(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksContentFilterCategoryConfig& GuardrailChecksContentFilterCategoryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category =
        GuardrailChecksContentFilterCategoryMapper::GetGuardrailChecksContentFilterCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksContentFilterCategoryConfig::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("category", GuardrailChecksContentFilterCategoryMapper::GetNameForGuardrailChecksContentFilterCategory(m_category));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
