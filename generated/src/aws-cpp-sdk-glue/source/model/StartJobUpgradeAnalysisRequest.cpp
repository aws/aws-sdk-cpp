/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/StartJobUpgradeAnalysisRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartJobUpgradeAnalysisRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobNameHasBeenSet) {
    payload.WithString("jobName", m_jobName);
  }

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  if (m_upgradeConsentHasBeenSet) {
    payload.WithString("upgradeConsent", UpgradeConsentMapper::GetNameForUpgradeConsent(m_upgradeConsent));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartJobUpgradeAnalysisRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StartJobUpgradeAnalysis"));
  return headers;
}
