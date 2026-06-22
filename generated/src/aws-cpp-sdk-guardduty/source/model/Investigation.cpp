/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Investigation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Investigation::Investigation(JsonView jsonValue) { *this = jsonValue; }

Investigation& Investigation::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("triggeredBy")) {
    m_triggeredBy = jsonValue.GetString("triggeredBy");
    m_triggeredByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloud")) {
    m_cloud = jsonValue.GetObject("cloud");
    m_cloudHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskLevel")) {
    m_riskLevel = RiskLevelMapper::GetRiskLevelForName(jsonValue.GetString("riskLevel"));
    m_riskLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("risk")) {
    m_risk = jsonValue.GetString("risk");
    m_riskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = ConfidenceMapper::GetConfidenceForName(jsonValue.GetString("confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summary")) {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue Investigation::Jsonize() const {
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

  if (m_triggeredByHasBeenSet) {
    payload.WithString("triggeredBy", m_triggeredBy);
  }

  if (m_metadataHasBeenSet) {
    payload.WithObject("metadata", m_metadata.Jsonize());
  }

  if (m_cloudHasBeenSet) {
    payload.WithObject("cloud", m_cloud.Jsonize());
  }

  if (m_riskLevelHasBeenSet) {
    payload.WithString("riskLevel", RiskLevelMapper::GetNameForRiskLevel(m_riskLevel));
  }

  if (m_riskHasBeenSet) {
    payload.WithString("risk", m_risk);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("confidence", ConfidenceMapper::GetNameForConfidence(m_confidence));
  }

  if (m_summaryHasBeenSet) {
    payload.WithString("summary", m_summary);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_errorHasBeenSet) {
    payload.WithString("error", m_error);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
