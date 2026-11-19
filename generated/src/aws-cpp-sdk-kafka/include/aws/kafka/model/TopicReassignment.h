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
enum class TopicReassignment { NOT_SET, AUTO, MANUAL };

namespace TopicReassignmentMapper {
AWS_KAFKA_API TopicReassignment GetTopicReassignmentForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForTopicReassignment(TopicReassignment value);
}  // namespace TopicReassignmentMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
