/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/TopicInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

TopicInfo::TopicInfo(JsonView jsonValue) { *this = jsonValue; }

TopicInfo& TopicInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topicArn")) {
    m_topicArn = jsonValue.GetString("topicArn");
    m_topicArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicName")) {
    m_topicName = jsonValue.GetString("topicName");
    m_topicNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("replicationFactor")) {
    m_replicationFactor = jsonValue.GetInteger("replicationFactor");
    m_replicationFactorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partitionCount")) {
    m_partitionCount = jsonValue.GetInteger("partitionCount");
    m_partitionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outOfSyncReplicaCount")) {
    m_outOfSyncReplicaCount = jsonValue.GetInteger("outOfSyncReplicaCount");
    m_outOfSyncReplicaCountHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicInfo::Jsonize() const {
  JsonValue payload;

  if (m_topicArnHasBeenSet) {
    payload.WithString("topicArn", m_topicArn);
  }

  if (m_topicNameHasBeenSet) {
    payload.WithString("topicName", m_topicName);
  }

  if (m_replicationFactorHasBeenSet) {
    payload.WithInteger("replicationFactor", m_replicationFactor);
  }

  if (m_partitionCountHasBeenSet) {
    payload.WithInteger("partitionCount", m_partitionCount);
  }

  if (m_outOfSyncReplicaCountHasBeenSet) {
    payload.WithInteger("outOfSyncReplicaCount", m_outOfSyncReplicaCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
