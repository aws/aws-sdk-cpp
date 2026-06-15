/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackCategoryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksPromptAttackCategoryConfig::GuardrailChecksPromptAttackCategoryConfig(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksPromptAttackCategoryConfig& GuardrailChecksPromptAttackCategoryConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category = GuardrailChecksPromptAttackCategoryMapper::GetGuardrailChecksPromptAttackCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksPromptAttackCategoryConfig::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("category", GuardrailChecksPromptAttackCategoryMapper::GetNameForGuardrailChecksPromptAttackCategory(m_category));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
