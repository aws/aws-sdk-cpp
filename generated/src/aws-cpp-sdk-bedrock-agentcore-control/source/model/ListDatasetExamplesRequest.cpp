/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListDatasetExamplesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListDatasetExamplesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_datasetVersionHasBeenSet) {
    payload.WithString("datasetVersion", m_datasetVersion);
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
