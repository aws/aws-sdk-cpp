/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ListGatewaysRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListGatewaysRequest::SerializePayload() const {
  JsonValue payload;

  if (m_namesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
    for (unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex) {
      namesJsonList[namesIndex].AsString(m_names[namesIndex]);
    }
    payload.WithArray("names", std::move(namesJsonList));
  }

  if (m_statusHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
    for (unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex) {
      statusJsonList[statusIndex].AsString(GatewayStatusMapper::GetNameForGatewayStatus(m_status[statusIndex]));
    }
    payload.WithArray("status", std::move(statusJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListGatewaysRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListGateways"));
  return headers;
}
