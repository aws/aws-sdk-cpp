/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AccountOverview.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

AccountOverview::AccountOverview(JsonView jsonValue) { *this = jsonValue; }

AccountOverview& AccountOverview::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountStatus")) {
    m_accountStatus = jsonValue.GetString("accountStatus");
    m_accountStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detectorId")) {
    m_detectorId = jsonValue.GetString("detectorId");
    m_detectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delegatedAdminAccountId")) {
    m_delegatedAdminAccountId = jsonValue.GetString("delegatedAdminAccountId");
    m_delegatedAdminAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalMemberAccounts")) {
    m_totalMemberAccounts = jsonValue.GetInt64("totalMemberAccounts");
    m_totalMemberAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFindings")) {
    m_totalFindings = jsonValue.GetInt64("totalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedAccountCount")) {
    m_affectedAccountCount = jsonValue.GetInt64("affectedAccountCount");
    m_affectedAccountCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountRankings")) {
    Aws::Utils::Array<JsonView> accountRankingsJsonList = jsonValue.GetArray("accountRankings");
    for (unsigned accountRankingsIndex = 0; accountRankingsIndex < accountRankingsJsonList.GetLength(); ++accountRankingsIndex) {
      m_accountRankings.push_back(accountRankingsJsonList[accountRankingsIndex].AsObject());
    }
    m_accountRankingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountOverview::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_accountStatusHasBeenSet) {
    payload.WithString("accountStatus", m_accountStatus);
  }

  if (m_detectorIdHasBeenSet) {
    payload.WithString("detectorId", m_detectorId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_delegatedAdminAccountIdHasBeenSet) {
    payload.WithString("delegatedAdminAccountId", m_delegatedAdminAccountId);
  }

  if (m_totalMemberAccountsHasBeenSet) {
    payload.WithInt64("totalMemberAccounts", m_totalMemberAccounts);
  }

  if (m_totalFindingsHasBeenSet) {
    payload.WithInt64("totalFindings", m_totalFindings);
  }

  if (m_affectedAccountCountHasBeenSet) {
    payload.WithInt64("affectedAccountCount", m_affectedAccountCount);
  }

  if (m_accountRankingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountRankingsJsonList(m_accountRankings.size());
    for (unsigned accountRankingsIndex = 0; accountRankingsIndex < accountRankingsJsonList.GetLength(); ++accountRankingsIndex) {
      accountRankingsJsonList[accountRankingsIndex].AsObject(m_accountRankings[accountRankingsIndex].Jsonize());
    }
    payload.WithArray("accountRankings", std::move(accountRankingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
