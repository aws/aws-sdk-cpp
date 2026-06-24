/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksUsageResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailChecksUsageResults::GuardrailChecksUsageResults(JsonView jsonValue) { *this = jsonValue; }

GuardrailChecksUsageResults& GuardrailChecksUsageResults::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentFilter")) {
    m_contentFilter = jsonValue.GetObject("contentFilter");
    m_contentFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptAttack")) {
    m_promptAttack = jsonValue.GetObject("promptAttack");
    m_promptAttackHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sensitiveInformation")) {
    m_sensitiveInformation = jsonValue.GetObject("sensitiveInformation");
    m_sensitiveInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailChecksUsageResults::Jsonize() const {
  JsonValue payload;

  if (m_contentFilterHasBeenSet) {
    payload.WithObject("contentFilter", m_contentFilter.Jsonize());
  }

  if (m_promptAttackHasBeenSet) {
    payload.WithObject("promptAttack", m_promptAttack.Jsonize());
  }

  if (m_sensitiveInformationHasBeenSet) {
    payload.WithObject("sensitiveInformation", m_sensitiveInformation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
