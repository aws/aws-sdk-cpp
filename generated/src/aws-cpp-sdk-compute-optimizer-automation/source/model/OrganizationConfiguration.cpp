/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/OrganizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

OrganizationConfiguration::OrganizationConfiguration(JsonView jsonValue) { *this = jsonValue; }

OrganizationConfiguration& OrganizationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleApplyOrder")) {
    m_ruleApplyOrder = RuleApplyOrderMapper::GetRuleApplyOrderForName(jsonValue.GetString("ruleApplyOrder"));
    m_ruleApplyOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountIds")) {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ruleApplyOrderHasBeenSet) {
    payload.WithString("ruleApplyOrder", RuleApplyOrderMapper::GetNameForRuleApplyOrder(m_ruleApplyOrder));
  }

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
