/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

IssueSummary::IssueSummary(JsonView jsonValue) { *this = jsonValue; }

IssueSummary& IssueSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issueId")) {
    m_issueId = jsonValue.GetString("issueId");
    m_issueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueArn")) {
    m_issueArn = jsonValue.GetString("issueArn");
    m_issueArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = IssueSeverityMapper::GetIssueSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetInteger("confidence");
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IssueStatusMapper::GetIssueStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("phase")) {
    m_phase = IssuePhaseMapper::GetIssuePhaseForName(jsonValue.GetString("phase"));
    m_phaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = IssueStatusReasonMapper::GetIssueStatusReasonForName(jsonValue.GetString("statusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusUpdatedAt")) {
    m_statusUpdatedAt = jsonValue.GetString("statusUpdatedAt");
    m_statusUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IssueSummary::Jsonize() const {
  JsonValue payload;

  if (m_issueIdHasBeenSet) {
    payload.WithString("issueId", m_issueId);
  }

  if (m_issueArnHasBeenSet) {
    payload.WithString("issueArn", m_issueArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", IssueSeverityMapper::GetNameForIssueSeverity(m_severity));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithInteger("confidence", m_confidence);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", IssueStatusMapper::GetNameForIssueStatus(m_status));
  }

  if (m_phaseHasBeenSet) {
    payload.WithString("phase", IssuePhaseMapper::GetNameForIssuePhase(m_phase));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", IssueStatusReasonMapper::GetNameForIssueStatusReason(m_statusReason));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", m_statusMessage);
  }

  if (m_statusUpdatedAtHasBeenSet) {
    payload.WithString("statusUpdatedAt", m_statusUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
