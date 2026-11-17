/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/QueueDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

QueueDescription::QueueDescription(JsonView jsonValue) { *this = jsonValue; }

QueueDescription& QueueDescription::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("StreamConfigurationList")) {
    Aws::Utils::Array<JsonView> streamConfigurationListJsonList = jsonValue.GetArray("StreamConfigurationList");
    for (unsigned streamConfigurationListIndex = 0; streamConfigurationListIndex < streamConfigurationListJsonList.GetLength();
         ++streamConfigurationListIndex) {
      m_streamConfigurationList.push_back(streamConfigurationListJsonList[streamConfigurationListIndex].AsObject());
    }
    m_streamConfigurationListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueueAttributes")) {
    m_queueAttributes = jsonValue.GetObject("QueueAttributes");
    m_queueAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueDescription::Jsonize() const {
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

  if (m_streamConfigurationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamConfigurationListJsonList(m_streamConfigurationList.size());
    for (unsigned streamConfigurationListIndex = 0; streamConfigurationListIndex < streamConfigurationListJsonList.GetLength();
         ++streamConfigurationListIndex) {
      streamConfigurationListJsonList[streamConfigurationListIndex].AsObject(
          m_streamConfigurationList[streamConfigurationListIndex].Jsonize());
    }
    payload.WithArray("StreamConfigurationList", std::move(streamConfigurationListJsonList));
  }

  if (m_queueAttributesHasBeenSet) {
    payload.WithObject("QueueAttributes", m_queueAttributes.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
