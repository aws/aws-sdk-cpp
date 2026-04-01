/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DescribeDaemonRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeDaemonRequest::SerializePayload() const {
  JsonValue payload;

  if (m_daemonArnHasBeenSet) {
    payload.WithString("daemonArn", m_daemonArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDaemonRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DescribeDaemon"));
  return headers;
}
