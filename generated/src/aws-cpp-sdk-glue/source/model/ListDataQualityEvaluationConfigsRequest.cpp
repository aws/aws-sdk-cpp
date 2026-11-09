/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ListDataQualityEvaluationConfigsRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListDataQualityEvaluationConfigsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_levelHasBeenSet) {
    payload.WithString("Level", DataQualityEvaluationConfigLevelMapper::GetNameForDataQualityEvaluationConfigLevel(m_level));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDataQualityEvaluationConfigsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ListDataQualityEvaluationConfigs"));
  return headers;
}
