/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

FindingSummary::FindingSummary(JsonView jsonValue) { *this = jsonValue; }

FindingSummary& FindingSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findingArn")) {
    m_findingArn = jsonValue.GetString("findingArn");
    m_findingArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentId")) {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceFindingId")) {
    m_sourceFindingId = jsonValue.GetString("sourceFindingId");
    m_sourceFindingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reportedAt")) {
    m_reportedAt = jsonValue.GetString("reportedAt");
    m_reportedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusUpdatedAt")) {
    m_statusUpdatedAt = jsonValue.GetString("statusUpdatedAt");
    m_statusUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanRunId")) {
    m_scanRunId = jsonValue.GetString("scanRunId");
    m_scanRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discardReason")) {
    m_discardReason = FindingDiscardReasonMapper::GetFindingDiscardReasonForName(jsonValue.GetString("discardReason"));
    m_discardReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discardReasoning")) {
    m_discardReasoning = jsonValue.GetString("discardReasoning");
    m_discardReasoningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("duplicateOfIssueId")) {
    m_duplicateOfIssueId = jsonValue.GetString("duplicateOfIssueId");
    m_duplicateOfIssueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdIssueId")) {
    m_createdIssueId = jsonValue.GetString("createdIssueId");
    m_createdIssueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = FindingTypeMapper::GetFindingTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severity")) {
    m_severity = FindingSeverityIdMapper::GetFindingSeverityIdForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filePath")) {
    m_filePath = jsonValue.GetString("filePath");
    m_filePathHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingSummary::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_findingArnHasBeenSet) {
    payload.WithString("findingArn", m_findingArn);
  }

  if (m_environmentIdHasBeenSet) {
    payload.WithString("environmentId", m_environmentId);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", m_source);
  }

  if (m_sourceFindingIdHasBeenSet) {
    payload.WithString("sourceFindingId", m_sourceFindingId);
  }

  if (m_reportedAtHasBeenSet) {
    payload.WithString("reportedAt", m_reportedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if (m_statusUpdatedAtHasBeenSet) {
    payload.WithString("statusUpdatedAt", m_statusUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_scanRunIdHasBeenSet) {
    payload.WithString("scanRunId", m_scanRunId);
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", m_statusMessage);
  }

  if (m_discardReasonHasBeenSet) {
    payload.WithString("discardReason", FindingDiscardReasonMapper::GetNameForFindingDiscardReason(m_discardReason));
  }

  if (m_discardReasoningHasBeenSet) {
    payload.WithString("discardReasoning", m_discardReasoning);
  }

  if (m_duplicateOfIssueIdHasBeenSet) {
    payload.WithString("duplicateOfIssueId", m_duplicateOfIssueId);
  }

  if (m_createdIssueIdHasBeenSet) {
    payload.WithString("createdIssueId", m_createdIssueId);
  }

  if (m_completedAtHasBeenSet) {
    payload.WithString("completedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", FindingTypeMapper::GetNameForFindingType(m_type));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_severityHasBeenSet) {
    payload.WithString("severity", FindingSeverityIdMapper::GetNameForFindingSeverityId(m_severity));
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", m_category);
  }

  if (m_filePathHasBeenSet) {
    payload.WithString("filePath", m_filePath);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
