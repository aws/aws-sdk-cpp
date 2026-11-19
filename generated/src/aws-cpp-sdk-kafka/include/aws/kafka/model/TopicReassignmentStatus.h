/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class TopicReassignmentStatus { NOT_SET, PENDING, IN_PROGRESS, STOPPING, COMPLETE, FAILED, STOPPED };

namespace TopicReassignmentStatusMapper {
AWS_KAFKA_API TopicReassignmentStatus GetTopicReassignmentStatusForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForTopicReassignmentStatus(TopicReassignmentStatus value);
}  // namespace TopicReassignmentStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
