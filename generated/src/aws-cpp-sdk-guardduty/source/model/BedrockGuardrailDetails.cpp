/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/BedrockGuardrailDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

BedrockGuardrailDetails::BedrockGuardrailDetails(JsonView jsonValue) { *this = jsonValue; }

BedrockGuardrailDetails& BedrockGuardrailDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardrails")) {
    Aws::Utils::Array<JsonView> guardrailsJsonList = jsonValue.GetArray("guardrails");
    for (unsigned guardrailsIndex = 0; guardrailsIndex < guardrailsJsonList.GetLength(); ++guardrailsIndex) {
      m_guardrails.push_back(guardrailsJsonList[guardrailsIndex].AsObject());
    }
    m_guardrailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailAction")) {
    m_guardrailAction = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("guardrailAction"));
    m_guardrailActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailSource")) {
    m_guardrailSource = GuardrailSourceMapper::GetGuardrailSourceForName(jsonValue.GetString("guardrailSource"));
    m_guardrailSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentPolicyFilters")) {
    Aws::Utils::Array<JsonView> contentPolicyFiltersJsonList = jsonValue.GetArray("contentPolicyFilters");
    for (unsigned contentPolicyFiltersIndex = 0; contentPolicyFiltersIndex < contentPolicyFiltersJsonList.GetLength();
         ++contentPolicyFiltersIndex) {
      m_contentPolicyFilters.push_back(contentPolicyFiltersJsonList[contentPolicyFiltersIndex].AsObject());
    }
    m_contentPolicyFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockGuardrailDetails::Jsonize() const {
  JsonValue payload;

  if (m_guardrailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> guardrailsJsonList(m_guardrails.size());
    for (unsigned guardrailsIndex = 0; guardrailsIndex < guardrailsJsonList.GetLength(); ++guardrailsIndex) {
      guardrailsJsonList[guardrailsIndex].AsObject(m_guardrails[guardrailsIndex].Jsonize());
    }
    payload.WithArray("guardrails", std::move(guardrailsJsonList));
  }

  if (m_guardrailActionHasBeenSet) {
    payload.WithString("guardrailAction", GuardrailActionMapper::GetNameForGuardrailAction(m_guardrailAction));
  }

  if (m_guardrailSourceHasBeenSet) {
    payload.WithString("guardrailSource", GuardrailSourceMapper::GetNameForGuardrailSource(m_guardrailSource));
  }

  if (m_contentPolicyFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentPolicyFiltersJsonList(m_contentPolicyFilters.size());
    for (unsigned contentPolicyFiltersIndex = 0; contentPolicyFiltersIndex < contentPolicyFiltersJsonList.GetLength();
         ++contentPolicyFiltersIndex) {
      contentPolicyFiltersJsonList[contentPolicyFiltersIndex].AsObject(m_contentPolicyFilters[contentPolicyFiltersIndex].Jsonize());
    }
    payload.WithArray("contentPolicyFilters", std::move(contentPolicyFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
