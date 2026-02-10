/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/UpdateTopicRequest.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTopicRequest::SerializePayload() const {
  JsonValue payload;

  if (m_configsHasBeenSet) {
    payload.WithString("configs", m_configs);
  }

  if (m_partitionCountHasBeenSet) {
    payload.WithInteger("partitionCount", m_partitionCount);
  }

  return payload.View().WriteReadable();
}
