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
enum class FindingCategory { NOT_SET, INFRASTRUCTURE, BROKER_CONFIGURATION, TOPIC_CONFIGURATION, CAPACITY, HEALTH };

namespace FindingCategoryMapper {
AWS_KAFKA_API FindingCategory GetFindingCategoryForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForFindingCategory(FindingCategory value);
}  // namespace FindingCategoryMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
