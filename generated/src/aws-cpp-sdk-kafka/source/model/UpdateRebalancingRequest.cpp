/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/UpdateRebalancingRequest.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRebalancingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_currentVersionHasBeenSet) {
    payload.WithString("currentVersion", m_currentVersion);
  }

  if (m_rebalancingHasBeenSet) {
    payload.WithObject("rebalancing", m_rebalancing.Jsonize());
  }

  return payload.View().WriteReadable();
}
