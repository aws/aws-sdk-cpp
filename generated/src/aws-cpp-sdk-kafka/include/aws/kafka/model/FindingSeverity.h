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
enum class FindingSeverity { NOT_SET, ERROR_, WARNING, INFO };

namespace FindingSeverityMapper {
AWS_KAFKA_API FindingSeverity GetFindingSeverityForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForFindingSeverity(FindingSeverity value);
}  // namespace FindingSeverityMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
