/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationScope::InvestigationScope(JsonView jsonValue) { *this = jsonValue; }

InvestigationScope& InvestigationScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("investigationType")) {
    m_investigationType = InvestigationTypeMapper::GetInvestigationTypeForName(jsonValue.GetString("investigationType"));
    m_investigationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adminAccountId")) {
    m_adminAccountId = jsonValue.GetString("adminAccountId");
    m_adminAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryTimeWindow")) {
    m_queryTimeWindow = jsonValue.GetObject("queryTimeWindow");
    m_queryTimeWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationScope::Jsonize() const {
  JsonValue payload;

  if (m_investigationTypeHasBeenSet) {
    payload.WithString("investigationType", InvestigationTypeMapper::GetNameForInvestigationType(m_investigationType));
  }

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_adminAccountIdHasBeenSet) {
    payload.WithString("adminAccountId", m_adminAccountId);
  }

  if (m_queryTimeWindowHasBeenSet) {
    payload.WithObject("queryTimeWindow", m_queryTimeWindow.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
