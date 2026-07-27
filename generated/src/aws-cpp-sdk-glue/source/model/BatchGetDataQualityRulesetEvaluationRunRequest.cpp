/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/BatchGetDataQualityRulesetEvaluationRunRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetDataQualityRulesetEvaluationRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_runIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> runIdsJsonList(m_runIds.size());
    for (unsigned runIdsIndex = 0; runIdsIndex < runIdsJsonList.GetLength(); ++runIdsIndex) {
      runIdsJsonList[runIdsIndex].AsString(m_runIds[runIdsIndex]);
    }
    payload.WithArray("RunIds", std::move(runIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDataQualityRulesetEvaluationRunRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetDataQualityRulesetEvaluationRun"));
  return headers;
}
