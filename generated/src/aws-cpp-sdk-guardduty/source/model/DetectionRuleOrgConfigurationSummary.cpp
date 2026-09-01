/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/DetectionRuleOrgConfigurationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

DetectionRuleOrgConfigurationSummary::DetectionRuleOrgConfigurationSummary(JsonView jsonValue) { *this = jsonValue; }

DetectionRuleOrgConfigurationSummary& DetectionRuleOrgConfigurationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mode")) {
    m_mode = AssociationModeMapper::GetAssociationModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DetectionRuleConfigurationStatusMapper::GetDetectionRuleConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectionRuleOrgConfigurationSummary::Jsonize() const {
  JsonValue payload;

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", AssociationModeMapper::GetNameForAssociationMode(m_mode));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DetectionRuleConfigurationStatusMapper::GetNameForDetectionRuleConfigurationStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
