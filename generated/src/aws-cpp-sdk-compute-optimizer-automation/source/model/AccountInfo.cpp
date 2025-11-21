/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AccountInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

AccountInfo::AccountInfo(JsonView jsonValue) { *this = jsonValue; }

AccountInfo& AccountInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EnrollmentStatusMapper::GetEnrollmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationRuleMode")) {
    m_organizationRuleMode = OrganizationRuleModeMapper::GetOrganizationRuleModeForName(jsonValue.GetString("organizationRuleMode"));
    m_organizationRuleModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTimestamp")) {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("lastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountInfo::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EnrollmentStatusMapper::GetNameForEnrollmentStatus(m_status));
  }

  if (m_organizationRuleModeHasBeenSet) {
    payload.WithString("organizationRuleMode", OrganizationRuleModeMapper::GetNameForOrganizationRuleMode(m_organizationRuleMode));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_lastUpdatedTimestampHasBeenSet) {
    payload.WithDouble("lastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
