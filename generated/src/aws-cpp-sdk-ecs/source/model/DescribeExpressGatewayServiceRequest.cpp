/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DescribeExpressGatewayServiceRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeExpressGatewayServiceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_includeHasBeenSet) {
    Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
    for (unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex) {
      includeJsonList[includeIndex].AsString(
          ExpressGatewayServiceIncludeMapper::GetNameForExpressGatewayServiceInclude(m_include[includeIndex]));
    }
    payload.WithArray("include", std::move(includeJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeExpressGatewayServiceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeExpressGatewayService"));
  return headers;
}
