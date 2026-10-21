/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DescribeGatewayRouteRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeGatewayRouteRequest::SerializePayload() const {
  JsonValue payload;

  if (m_gatewayRouteArnHasBeenSet) {
    payload.WithString("gatewayRouteArn", m_gatewayRouteArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeGatewayRouteRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeGatewayRoute"));
  return headers;
}
