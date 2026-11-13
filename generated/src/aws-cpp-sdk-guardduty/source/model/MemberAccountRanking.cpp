/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/MemberAccountRanking.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

MemberAccountRanking::MemberAccountRanking(JsonView jsonValue) { *this = jsonValue; }

MemberAccountRanking& MemberAccountRanking::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rank")) {
    m_rank = jsonValue.GetInteger("rank");
    m_rankHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingCount")) {
    m_findingCount = jsonValue.GetInt64("findingCount");
    m_findingCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskLevel")) {
    m_riskLevel = RiskLevelMapper::GetRiskLevelForName(jsonValue.GetString("riskLevel"));
    m_riskLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskRationale")) {
    m_riskRationale = jsonValue.GetString("riskRationale");
    m_riskRationaleHasBeenSet = true;
  }
  return *this;
}

JsonValue MemberAccountRanking::Jsonize() const {
  JsonValue payload;

  if (m_rankHasBeenSet) {
    payload.WithInteger("rank", m_rank);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_findingCountHasBeenSet) {
    payload.WithInt64("findingCount", m_findingCount);
  }

  if (m_riskLevelHasBeenSet) {
    payload.WithString("riskLevel", RiskLevelMapper::GetNameForRiskLevel(m_riskLevel));
  }

  if (m_riskRationaleHasBeenSet) {
    payload.WithString("riskRationale", m_riskRationale);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
