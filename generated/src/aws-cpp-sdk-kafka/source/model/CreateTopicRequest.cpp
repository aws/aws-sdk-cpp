/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/CreateTopicRequest.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTopicRequest::SerializePayload() const {
  JsonValue payload;

  if (m_topicNameHasBeenSet) {
    payload.WithString("topicName", m_topicName);
  }

  if (m_partitionCountHasBeenSet) {
    payload.WithInteger("partitionCount", m_partitionCount);
  }

  if (m_replicationFactorHasBeenSet) {
    payload.WithInteger("replicationFactor", m_replicationFactor);
  }

  if (m_configsHasBeenSet) {
    payload.WithString("configs", m_configs);
  }

  return payload.View().WriteReadable();
}
