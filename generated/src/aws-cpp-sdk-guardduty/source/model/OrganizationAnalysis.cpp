/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/OrganizationAnalysis.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

OrganizationAnalysis::OrganizationAnalysis(JsonView jsonValue) { *this = jsonValue; }

OrganizationAnalysis& OrganizationAnalysis::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingsSummary")) {
    m_findingsSummary = jsonValue.GetObject("findingsSummary");
    m_findingsSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountBreakdown")) {
    Aws::Utils::Array<JsonView> accountBreakdownJsonList = jsonValue.GetArray("accountBreakdown");
    for (unsigned accountBreakdownIndex = 0; accountBreakdownIndex < accountBreakdownJsonList.GetLength(); ++accountBreakdownIndex) {
      m_accountBreakdown.push_back(accountBreakdownJsonList[accountBreakdownIndex].AsObject());
    }
    m_accountBreakdownHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationAnalysis::Jsonize() const {
  JsonValue payload;

  if (m_findingsSummaryHasBeenSet) {
    payload.WithObject("findingsSummary", m_findingsSummary.Jsonize());
  }

  if (m_accountBreakdownHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountBreakdownJsonList(m_accountBreakdown.size());
    for (unsigned accountBreakdownIndex = 0; accountBreakdownIndex < accountBreakdownJsonList.GetLength(); ++accountBreakdownIndex) {
      accountBreakdownJsonList[accountBreakdownIndex].AsObject(m_accountBreakdown[accountBreakdownIndex].Jsonize());
    }
    payload.WithArray("accountBreakdown", std::move(accountBreakdownJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
