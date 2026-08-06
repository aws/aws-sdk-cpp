/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/ApprovalConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

ApprovalConfiguration::ApprovalConfiguration(JsonView jsonValue) { *this = jsonValue; }

ApprovalConfiguration& ApprovalConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("autoApprovalRules")) {
    Aws::Utils::Array<JsonView> autoApprovalRulesJsonList = jsonValue.GetArray("autoApprovalRules");
    for (unsigned autoApprovalRulesIndex = 0; autoApprovalRulesIndex < autoApprovalRulesJsonList.GetLength(); ++autoApprovalRulesIndex) {
      m_autoApprovalRules.push_back(
          AutoApprovalRuleMapper::GetAutoApprovalRuleForName(autoApprovalRulesJsonList[autoApprovalRulesIndex].AsString()));
    }
    m_autoApprovalRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_autoApprovalRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> autoApprovalRulesJsonList(m_autoApprovalRules.size());
    for (unsigned autoApprovalRulesIndex = 0; autoApprovalRulesIndex < autoApprovalRulesJsonList.GetLength(); ++autoApprovalRulesIndex) {
      autoApprovalRulesJsonList[autoApprovalRulesIndex].AsString(
          AutoApprovalRuleMapper::GetNameForAutoApprovalRule(m_autoApprovalRules[autoApprovalRulesIndex]));
    }
    payload.WithArray("autoApprovalRules", std::move(autoApprovalRulesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
