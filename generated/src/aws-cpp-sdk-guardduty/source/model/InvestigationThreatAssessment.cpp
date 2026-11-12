/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationThreatAssessment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationThreatAssessment::InvestigationThreatAssessment(JsonView jsonValue) { *this = jsonValue; }

InvestigationThreatAssessment& InvestigationThreatAssessment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reputation")) {
    m_reputation = jsonValue.GetObject("reputation");
    m_reputationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatConfidence")) {
    m_threatConfidence = ThreatConfidenceMapper::GetThreatConfidenceForName(jsonValue.GetString("threatConfidence"));
    m_threatConfidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("classification")) {
    m_classification = jsonValue.GetString("classification");
    m_classificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assessment")) {
    m_assessment = jsonValue.GetString("assessment");
    m_assessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authenticationContext")) {
    m_authenticationContext = jsonValue.GetString("authenticationContext");
    m_authenticationContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rdsControlPlaneActivity")) {
    m_rdsControlPlaneActivity = jsonValue.GetString("rdsControlPlaneActivity");
    m_rdsControlPlaneActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAccountActivity")) {
    m_ipAccountActivity = jsonValue.GetString("ipAccountActivity");
    m_ipAccountActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentialCompromise")) {
    m_credentialCompromise = jsonValue.GetString("credentialCompromise");
    m_credentialCompromiseHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationThreatAssessment::Jsonize() const {
  JsonValue payload;

  if (m_reputationHasBeenSet) {
    payload.WithObject("reputation", m_reputation.Jsonize());
  }

  if (m_threatConfidenceHasBeenSet) {
    payload.WithString("threatConfidence", ThreatConfidenceMapper::GetNameForThreatConfidence(m_threatConfidence));
  }

  if (m_classificationHasBeenSet) {
    payload.WithString("classification", m_classification);
  }

  if (m_assessmentHasBeenSet) {
    payload.WithString("assessment", m_assessment);
  }

  if (m_authenticationContextHasBeenSet) {
    payload.WithString("authenticationContext", m_authenticationContext);
  }

  if (m_rdsControlPlaneActivityHasBeenSet) {
    payload.WithString("rdsControlPlaneActivity", m_rdsControlPlaneActivity);
  }

  if (m_ipAccountActivityHasBeenSet) {
    payload.WithString("ipAccountActivity", m_ipAccountActivity);
  }

  if (m_credentialCompromiseHasBeenSet) {
    payload.WithString("credentialCompromise", m_credentialCompromise);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
