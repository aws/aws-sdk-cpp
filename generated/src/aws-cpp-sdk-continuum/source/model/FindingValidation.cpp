/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FindingValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

FindingValidation::FindingValidation(JsonView jsonValue) { *this = jsonValue; }

FindingValidation& FindingValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("verdict")) {
    m_verdict = FindingVerdictMapper::GetFindingVerdictForName(jsonValue.GetString("verdict"));
    m_verdictHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockingReason")) {
    m_blockingReason = FindingBlockingReasonMapper::GetFindingBlockingReasonForName(jsonValue.GetString("blockingReason"));
    m_blockingReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = jsonValue.GetDouble("confidence");
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rationale")) {
    m_rationale = jsonValue.GetString("rationale");
    m_rationaleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("severityAdjustment")) {
    m_severityAdjustment = FindingSeverityAdjustmentMapper::GetFindingSeverityAdjustmentForName(jsonValue.GetString("severityAdjustment"));
    m_severityAdjustmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mitigatingControls")) {
    Aws::Utils::Array<JsonView> mitigatingControlsJsonList = jsonValue.GetArray("mitigatingControls");
    for (unsigned mitigatingControlsIndex = 0; mitigatingControlsIndex < mitigatingControlsJsonList.GetLength();
         ++mitigatingControlsIndex) {
      m_mitigatingControls.push_back(mitigatingControlsJsonList[mitigatingControlsIndex].AsString());
    }
    m_mitigatingControlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preconditions")) {
    Aws::Utils::Array<JsonView> preconditionsJsonList = jsonValue.GetArray("preconditions");
    for (unsigned preconditionsIndex = 0; preconditionsIndex < preconditionsJsonList.GetLength(); ++preconditionsIndex) {
      m_preconditions.push_back(preconditionsJsonList[preconditionsIndex].AsString());
    }
    m_preconditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evidence")) {
    Aws::Utils::Array<JsonView> evidenceJsonList = jsonValue.GetArray("evidence");
    for (unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex) {
      m_evidence.push_back(evidenceJsonList[evidenceIndex].AsObject());
    }
    m_evidenceHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingValidation::Jsonize() const {
  JsonValue payload;

  if (m_verdictHasBeenSet) {
    payload.WithString("verdict", FindingVerdictMapper::GetNameForFindingVerdict(m_verdict));
  }

  if (m_blockingReasonHasBeenSet) {
    payload.WithString("blockingReason", FindingBlockingReasonMapper::GetNameForFindingBlockingReason(m_blockingReason));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithDouble("confidence", m_confidence);
  }

  if (m_rationaleHasBeenSet) {
    payload.WithString("rationale", m_rationale);
  }

  if (m_severityAdjustmentHasBeenSet) {
    payload.WithString("severityAdjustment", FindingSeverityAdjustmentMapper::GetNameForFindingSeverityAdjustment(m_severityAdjustment));
  }

  if (m_mitigatingControlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mitigatingControlsJsonList(m_mitigatingControls.size());
    for (unsigned mitigatingControlsIndex = 0; mitigatingControlsIndex < mitigatingControlsJsonList.GetLength();
         ++mitigatingControlsIndex) {
      mitigatingControlsJsonList[mitigatingControlsIndex].AsString(m_mitigatingControls[mitigatingControlsIndex]);
    }
    payload.WithArray("mitigatingControls", std::move(mitigatingControlsJsonList));
  }

  if (m_preconditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> preconditionsJsonList(m_preconditions.size());
    for (unsigned preconditionsIndex = 0; preconditionsIndex < preconditionsJsonList.GetLength(); ++preconditionsIndex) {
      preconditionsJsonList[preconditionsIndex].AsString(m_preconditions[preconditionsIndex]);
    }
    payload.WithArray("preconditions", std::move(preconditionsJsonList));
  }

  if (m_evidenceHasBeenSet) {
    Aws::Utils::Array<JsonValue> evidenceJsonList(m_evidence.size());
    for (unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex) {
      evidenceJsonList[evidenceIndex].AsObject(m_evidence[evidenceIndex].Jsonize());
    }
    payload.WithArray("evidence", std::move(evidenceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
