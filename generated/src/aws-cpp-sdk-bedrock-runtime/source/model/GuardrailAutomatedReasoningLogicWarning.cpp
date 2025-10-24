﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningLogicWarning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

GuardrailAutomatedReasoningLogicWarning::GuardrailAutomatedReasoningLogicWarning(JsonView jsonValue) { *this = jsonValue; }

GuardrailAutomatedReasoningLogicWarning& GuardrailAutomatedReasoningLogicWarning::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = GuardrailAutomatedReasoningLogicWarningTypeMapper::GetGuardrailAutomatedReasoningLogicWarningTypeForName(
        jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("premises")) {
    Aws::Utils::Array<JsonView> premisesJsonList = jsonValue.GetArray("premises");
    for (unsigned premisesIndex = 0; premisesIndex < premisesJsonList.GetLength(); ++premisesIndex) {
      m_premises.push_back(premisesJsonList[premisesIndex].AsObject());
    }
    m_premisesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("claims")) {
    Aws::Utils::Array<JsonView> claimsJsonList = jsonValue.GetArray("claims");
    for (unsigned claimsIndex = 0; claimsIndex < claimsJsonList.GetLength(); ++claimsIndex) {
      m_claims.push_back(claimsJsonList[claimsIndex].AsObject());
    }
    m_claimsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningLogicWarning::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type",
                       GuardrailAutomatedReasoningLogicWarningTypeMapper::GetNameForGuardrailAutomatedReasoningLogicWarningType(m_type));
  }

  if (m_premisesHasBeenSet) {
    Aws::Utils::Array<JsonValue> premisesJsonList(m_premises.size());
    for (unsigned premisesIndex = 0; premisesIndex < premisesJsonList.GetLength(); ++premisesIndex) {
      premisesJsonList[premisesIndex].AsObject(m_premises[premisesIndex].Jsonize());
    }
    payload.WithArray("premises", std::move(premisesJsonList));
  }

  if (m_claimsHasBeenSet) {
    Aws::Utils::Array<JsonValue> claimsJsonList(m_claims.size());
    for (unsigned claimsIndex = 0; claimsIndex < claimsJsonList.GetLength(); ++claimsIndex) {
      claimsJsonList[claimsIndex].AsObject(m_claims[claimsIndex].Jsonize());
    }
    payload.WithArray("claims", std::move(claimsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
