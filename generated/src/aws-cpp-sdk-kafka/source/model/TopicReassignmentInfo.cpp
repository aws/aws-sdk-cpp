/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/TopicReassignmentInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

TopicReassignmentInfo::TopicReassignmentInfo(JsonView jsonValue) { *this = jsonValue; }

TopicReassignmentInfo& TopicReassignmentInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("completedTopics")) {
    m_completedTopics = jsonValue.GetInteger("completedTopics");
    m_completedTopicsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TopicReassignmentStatusMapper::GetTopicReassignmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetInstanceType")) {
    m_targetInstanceType = jsonValue.GetString("targetInstanceType");
    m_targetInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topicReassignmentOperationArn")) {
    m_topicReassignmentOperationArn = jsonValue.GetString("topicReassignmentOperationArn");
    m_topicReassignmentOperationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalTopics")) {
    m_totalTopics = jsonValue.GetInteger("totalTopics");
    m_totalTopicsHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicReassignmentInfo::Jsonize() const {
  JsonValue payload;

  if (m_completedTopicsHasBeenSet) {
    payload.WithInteger("completedTopics", m_completedTopics);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", TopicReassignmentStatusMapper::GetNameForTopicReassignmentStatus(m_status));
  }

  if (m_targetInstanceTypeHasBeenSet) {
    payload.WithString("targetInstanceType", m_targetInstanceType);
  }

  if (m_topicReassignmentOperationArnHasBeenSet) {
    payload.WithString("topicReassignmentOperationArn", m_topicReassignmentOperationArn);
  }

  if (m_totalTopicsHasBeenSet) {
    payload.WithInteger("totalTopics", m_totalTopics);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
