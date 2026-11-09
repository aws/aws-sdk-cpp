/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/GetJobUpgradeAnalysisRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetJobUpgradeAnalysisRequest::SerializePayload() const {
  JsonValue payload;

  if (m_analysisIdHasBeenSet) {
    payload.WithString("analysisId", m_analysisId);
  }

  if (m_jobNameHasBeenSet) {
    payload.WithString("jobName", m_jobName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetJobUpgradeAnalysisRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetJobUpgradeAnalysis"));
  return headers;
}
