/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/ListSessionsRequest.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListSessionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clusterIdHasBeenSet) {
    payload.WithString("ClusterId", m_clusterId);
  }

  if (m_sessionStatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionStatesJsonList(m_sessionStates.size());
    for (unsigned sessionStatesIndex = 0; sessionStatesIndex < sessionStatesJsonList.GetLength(); ++sessionStatesIndex) {
      sessionStatesJsonList[sessionStatesIndex].AsString(SessionStateMapper::GetNameForSessionState(m_sessionStates[sessionStatesIndex]));
    }
    payload.WithArray("SessionStates", std::move(sessionStatesJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSessionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListSessions"));
  return headers;
}
