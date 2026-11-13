/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/S3Analysis.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

S3Analysis::S3Analysis(JsonView jsonValue) { *this = jsonValue; }

S3Analysis& S3Analysis::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingSubtype")) {
    m_findingSubtype = jsonValue.GetString("findingSubtype");
    m_findingSubtypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("effectivePermission")) {
    m_effectivePermission = jsonValue.GetString("effectivePermission");
    m_effectivePermissionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockPublicAccessSettings")) {
    m_blockPublicAccessSettings = jsonValue.GetString("blockPublicAccessSettings");
    m_blockPublicAccessSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exposure")) {
    m_exposure = jsonValue.GetString("exposure");
    m_exposureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAgent")) {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAgentClassification")) {
    m_userAgentClassification = jsonValue.GetString("userAgentClassification");
    m_userAgentClassificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceIp")) {
    m_sourceIp = jsonValue.GetString("sourceIp");
    m_sourceIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipReputation")) {
    m_ipReputation = jsonValue.GetString("ipReputation");
    m_ipReputationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorAssessment")) {
    m_actorAssessment = jsonValue.GetString("actorAssessment");
    m_actorAssessmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3ApiActivity")) {
    m_s3ApiActivity = jsonValue.GetString("s3ApiActivity");
    m_s3ApiActivityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceContext")) {
    m_sourceContext = jsonValue.GetString("sourceContext");
    m_sourceContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationAssessment")) {
    m_authorizationAssessment = jsonValue.GetString("authorizationAssessment");
    m_authorizationAssessmentHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Analysis::Jsonize() const {
  JsonValue payload;

  if (m_findingSubtypeHasBeenSet) {
    payload.WithString("findingSubtype", m_findingSubtype);
  }

  if (m_effectivePermissionHasBeenSet) {
    payload.WithString("effectivePermission", m_effectivePermission);
  }

  if (m_blockPublicAccessSettingsHasBeenSet) {
    payload.WithString("blockPublicAccessSettings", m_blockPublicAccessSettings);
  }

  if (m_exposureHasBeenSet) {
    payload.WithString("exposure", m_exposure);
  }

  if (m_userAgentHasBeenSet) {
    payload.WithString("userAgent", m_userAgent);
  }

  if (m_userAgentClassificationHasBeenSet) {
    payload.WithString("userAgentClassification", m_userAgentClassification);
  }

  if (m_sourceIpHasBeenSet) {
    payload.WithString("sourceIp", m_sourceIp);
  }

  if (m_ipReputationHasBeenSet) {
    payload.WithString("ipReputation", m_ipReputation);
  }

  if (m_actorAssessmentHasBeenSet) {
    payload.WithString("actorAssessment", m_actorAssessment);
  }

  if (m_s3ApiActivityHasBeenSet) {
    payload.WithString("s3ApiActivity", m_s3ApiActivity);
  }

  if (m_sourceContextHasBeenSet) {
    payload.WithString("sourceContext", m_sourceContext);
  }

  if (m_authorizationAssessmentHasBeenSet) {
    payload.WithString("authorizationAssessment", m_authorizationAssessment);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
