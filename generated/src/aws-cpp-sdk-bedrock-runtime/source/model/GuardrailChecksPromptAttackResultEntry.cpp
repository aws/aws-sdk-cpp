/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksPromptAttackResultEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksPromptAttackResultEntry::GuardrailChecksPromptAttackResultEntry(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksPromptAttackResultEntry& GuardrailChecksPromptAttackResultEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category = GuardrailChecksPromptAttackCategoryMapper::GetGuardrailChecksPromptAttackCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityScore")) {
    m_severityScore = jsonValue.GetDouble("severityScore");
    m_severityScoreHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksPromptAttackResultEntry::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithString("category", GuardrailChecksPromptAttackCategoryMapper::GetNameForGuardrailChecksPromptAttackCategory(m_category));
  }

  if (m_severityScoreHasBeenSet) {
    payload.WithDouble("severityScore", m_severityScore);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
