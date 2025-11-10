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
enum class RebalancingStatus { NOT_SET, PAUSED, ACTIVE };

namespace RebalancingStatusMapper {
AWS_KAFKA_API RebalancingStatus GetRebalancingStatusForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForRebalancingStatus(RebalancingStatus value);
}  // namespace RebalancingStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
