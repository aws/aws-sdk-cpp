/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyScenarios.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

AutomatedReasoningPolicyScenarios::AutomatedReasoningPolicyScenarios(JsonView jsonValue) { *this = jsonValue; }

AutomatedReasoningPolicyScenarios& AutomatedReasoningPolicyScenarios::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyScenarios")) {
    Aws::Utils::Array<JsonView> policyScenariosJsonList = jsonValue.GetArray("policyScenarios");
    for (unsigned policyScenariosIndex = 0; policyScenariosIndex < policyScenariosJsonList.GetLength(); ++policyScenariosIndex) {
      m_policyScenarios.push_back(policyScenariosJsonList[policyScenariosIndex].AsObject());
    }
    m_policyScenariosHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyScenarios::Jsonize() const {
  JsonValue payload;

  if (m_policyScenariosHasBeenSet) {
    Aws::Utils::Array<JsonValue> policyScenariosJsonList(m_policyScenarios.size());
    for (unsigned policyScenariosIndex = 0; policyScenariosIndex < policyScenariosJsonList.GetLength(); ++policyScenariosIndex) {
      policyScenariosJsonList[policyScenariosIndex].AsObject(m_policyScenarios[policyScenariosIndex].Jsonize());
    }
    payload.WithArray("policyScenarios", std::move(policyScenariosJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
