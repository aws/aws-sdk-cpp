/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/StopJobUpgradeAnalysisRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StopJobUpgradeAnalysisRequest::SerializePayload() const {
  JsonValue payload;

  if (m_jobNameHasBeenSet) {
    payload.WithString("jobName", m_jobName);
  }

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopJobUpgradeAnalysisRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.StopJobUpgradeAnalysis"));
  return headers;
}
