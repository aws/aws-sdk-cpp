/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateCrossRegionRoutingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCrossRegionRoutingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_isolatedAllHasBeenSet) {
    payload.WithBool("IsolatedAll", m_isolatedAll);
  }

  return payload.View().WriteReadable();
}
