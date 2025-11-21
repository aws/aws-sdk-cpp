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
enum class TopicState { NOT_SET, CREATING, UPDATING, DELETING, ACTIVE };

namespace TopicStateMapper {
AWS_KAFKA_API TopicState GetTopicStateForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForTopicState(TopicState value);
}  // namespace TopicStateMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
