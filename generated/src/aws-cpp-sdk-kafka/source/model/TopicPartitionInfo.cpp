/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/TopicPartitionInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

TopicPartitionInfo::TopicPartitionInfo(JsonView jsonValue) { *this = jsonValue; }

TopicPartitionInfo& TopicPartitionInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("partition")) {
    m_partition = jsonValue.GetInteger("partition");
    m_partitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("leader")) {
    m_leader = jsonValue.GetInteger("leader");
    m_leaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("replicas")) {
    Aws::Utils::Array<JsonView> replicasJsonList = jsonValue.GetArray("replicas");
    for (unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex) {
      m_replicas.push_back(replicasJsonList[replicasIndex].AsInteger());
    }
    m_replicasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isr")) {
    Aws::Utils::Array<JsonView> isrJsonList = jsonValue.GetArray("isr");
    for (unsigned isrIndex = 0; isrIndex < isrJsonList.GetLength(); ++isrIndex) {
      m_isr.push_back(isrJsonList[isrIndex].AsInteger());
    }
    m_isrHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicPartitionInfo::Jsonize() const {
  JsonValue payload;

  if (m_partitionHasBeenSet) {
    payload.WithInteger("partition", m_partition);
  }

  if (m_leaderHasBeenSet) {
    payload.WithInteger("leader", m_leader);
  }

  if (m_replicasHasBeenSet) {
    Aws::Utils::Array<JsonValue> replicasJsonList(m_replicas.size());
    for (unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex) {
      replicasJsonList[replicasIndex].AsInteger(m_replicas[replicasIndex]);
    }
    payload.WithArray("replicas", std::move(replicasJsonList));
  }

  if (m_isrHasBeenSet) {
    Aws::Utils::Array<JsonValue> isrJsonList(m_isr.size());
    for (unsigned isrIndex = 0; isrIndex < isrJsonList.GetLength(); ++isrIndex) {
      isrJsonList[isrIndex].AsInteger(m_isr[isrIndex]);
    }
    payload.WithArray("isr", std::move(isrJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
