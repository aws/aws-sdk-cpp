/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DeleteDaemonRequest.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteDaemonRequest::SerializePayload() const {
  JsonValue payload;

  if (m_daemonArnHasBeenSet) {
    payload.WithString("daemonArn", m_daemonArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDaemonRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.DeleteDaemon"));
  return headers;
}
