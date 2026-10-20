/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ListGatewayClusterAssociationsRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListGatewayClusterAssociationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_gatewayHasBeenSet) {
    payload.WithString("gateway", m_gateway);
  }

  if (m_clusterHasBeenSet) {
    payload.WithString("cluster", m_cluster);
  }

  if (m_statusHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
    for (unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex) {
      statusJsonList[statusIndex].AsString(
          GatewayClusterAssociationStatusMapper::GetNameForGatewayClusterAssociationStatus(m_status[statusIndex]));
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

Aws::Http::HeaderValueCollection ListGatewayClusterAssociationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListGatewayClusterAssociations"));
  return headers;
}
