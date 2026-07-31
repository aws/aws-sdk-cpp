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
enum class PartitionStrategy { NOT_SET, TIME_HOUR };

namespace PartitionStrategyMapper {
AWS_KAFKA_API PartitionStrategy GetPartitionStrategyForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForPartitionStrategy(PartitionStrategy value);
}  // namespace PartitionStrategyMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
