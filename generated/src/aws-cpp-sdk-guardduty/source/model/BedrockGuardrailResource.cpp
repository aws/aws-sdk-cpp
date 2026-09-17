/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/BedrockGuardrailResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

BedrockGuardrailResource::BedrockGuardrailResource(JsonView jsonValue) { *this = jsonValue; }

BedrockGuardrailResource& BedrockGuardrailResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailAction")) {
    m_guardrailAction = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("guardrailAction"));
    m_guardrailActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailSource")) {
    m_guardrailSource = GuardrailSourceMapper::GetGuardrailSourceForName(jsonValue.GetString("guardrailSource"));
    m_guardrailSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockGuardrailResource::Jsonize() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_guardrailActionHasBeenSet) {
    payload.WithString("guardrailAction", GuardrailActionMapper::GetNameForGuardrailAction(m_guardrailAction));
  }

  if (m_guardrailSourceHasBeenSet) {
    payload.WithString("guardrailSource", GuardrailSourceMapper::GetNameForGuardrailSource(m_guardrailSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
