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
enum class TopicReassignmentMode { NOT_SET, AUTO, MANUAL };

namespace TopicReassignmentModeMapper {
AWS_KAFKA_API TopicReassignmentMode GetTopicReassignmentModeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForTopicReassignmentMode(TopicReassignmentMode value);
}  // namespace TopicReassignmentModeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
