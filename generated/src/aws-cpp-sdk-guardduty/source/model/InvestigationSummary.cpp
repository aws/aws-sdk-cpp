/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationSummary::InvestigationSummary(JsonView jsonValue) { *this = jsonValue; }

InvestigationSummary& InvestigationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("investigationId")) {
    m_investigationId = jsonValue.GetString("investigationId");
    m_investigationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = InvestigationStatusMapper::GetInvestigationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerPrompt")) {
    m_triggerPrompt = jsonValue.GetString("triggerPrompt");
    m_triggerPromptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskLevel")) {
    m_riskLevel = RiskLevelMapper::GetRiskLevelForName(jsonValue.GetString("riskLevel"));
    m_riskLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = ConfidenceMapper::GetConfidenceForName(jsonValue.GetString("confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationSummary::Jsonize() const {
  JsonValue payload;

  if (m_investigationIdHasBeenSet) {
    payload.WithString("investigationId", m_investigationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", InvestigationStatusMapper::GetNameForInvestigationStatus(m_status));
  }

  if (m_triggerPromptHasBeenSet) {
    payload.WithString("triggerPrompt", m_triggerPrompt);
  }

  if (m_riskLevelHasBeenSet) {
    payload.WithString("riskLevel", RiskLevelMapper::GetNameForRiskLevel(m_riskLevel));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("confidence", ConfidenceMapper::GetNameForConfidence(m_confidence));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
