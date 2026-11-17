/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/QueueSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

QueueSummary::QueueSummary(JsonView jsonValue) { *this = jsonValue; }

QueueSummary& QueueSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QueueName")) {
    m_queueName = jsonValue.GetString("QueueName");
    m_queueNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueueARN")) {
    m_queueARN = jsonValue.GetString("QueueARN");
    m_queueARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueueStatus")) {
    m_queueStatus = QueueStatusMapper::GetQueueStatusForName(jsonValue.GetString("QueueStatus"));
    m_queueStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueueCreationTimestamp")) {
    m_queueCreationTimestamp = jsonValue.GetDouble("QueueCreationTimestamp");
    m_queueCreationTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Streams")) {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("Streams");
    for (unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex) {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
    m_streamsHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueSummary::Jsonize() const {
  JsonValue payload;

  if (m_queueNameHasBeenSet) {
    payload.WithString("QueueName", m_queueName);
  }

  if (m_queueARNHasBeenSet) {
    payload.WithString("QueueARN", m_queueARN);
  }

  if (m_queueStatusHasBeenSet) {
    payload.WithString("QueueStatus", QueueStatusMapper::GetNameForQueueStatus(m_queueStatus));
  }

  if (m_queueCreationTimestampHasBeenSet) {
    payload.WithDouble("QueueCreationTimestamp", m_queueCreationTimestamp.SecondsWithMSPrecision());
  }

  if (m_streamsHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
    for (unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex) {
      streamsJsonList[streamsIndex].AsObject(m_streams[streamsIndex].Jsonize());
    }
    payload.WithArray("Streams", std::move(streamsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
