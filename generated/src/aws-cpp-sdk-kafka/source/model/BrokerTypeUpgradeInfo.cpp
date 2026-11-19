/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/BrokerTypeUpgradeInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

BrokerTypeUpgradeInfo::BrokerTypeUpgradeInfo(JsonView jsonValue) { *this = jsonValue; }

BrokerTypeUpgradeInfo& BrokerTypeUpgradeInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("topicReassignmentMode")) {
    m_topicReassignmentMode = TopicReassignmentModeMapper::GetTopicReassignmentModeForName(jsonValue.GetString("topicReassignmentMode"));
    m_topicReassignmentModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicReassignmentOperationArn")) {
    m_topicReassignmentOperationArn = jsonValue.GetString("topicReassignmentOperationArn");
    m_topicReassignmentOperationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BrokerTypeUpgradeInfo::Jsonize() const {
  JsonValue payload;

  if (m_topicReassignmentModeHasBeenSet) {
    payload.WithString("topicReassignmentMode", TopicReassignmentModeMapper::GetNameForTopicReassignmentMode(m_topicReassignmentMode));
  }

  if (m_topicReassignmentOperationArnHasBeenSet) {
    payload.WithString("topicReassignmentOperationArn", m_topicReassignmentOperationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
