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
enum class ConsumerGroupOffsetSyncMode { NOT_SET, LEGACY, ENHANCED };

namespace ConsumerGroupOffsetSyncModeMapper {
AWS_KAFKA_API ConsumerGroupOffsetSyncMode GetConsumerGroupOffsetSyncModeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForConsumerGroupOffsetSyncMode(ConsumerGroupOffsetSyncMode value);
}  // namespace ConsumerGroupOffsetSyncModeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
