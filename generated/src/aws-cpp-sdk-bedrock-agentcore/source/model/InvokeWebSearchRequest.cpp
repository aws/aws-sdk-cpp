/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeWebSearchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeWebSearchRequest::SerializePayload() const {
  JsonValue payload;

  if (m_searchQueryHasBeenSet) {
    payload.WithString("searchQuery", m_searchQuery);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  return payload.View().WriteReadable();
}
