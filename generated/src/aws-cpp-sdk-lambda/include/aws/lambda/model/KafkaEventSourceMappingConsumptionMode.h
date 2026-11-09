/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class KafkaEventSourceMappingConsumptionMode { NOT_SET, Stream, Queue };

namespace KafkaEventSourceMappingConsumptionModeMapper {
AWS_LAMBDA_API KafkaEventSourceMappingConsumptionMode GetKafkaEventSourceMappingConsumptionModeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForKafkaEventSourceMappingConsumptionMode(KafkaEventSourceMappingConsumptionMode value);
}  // namespace KafkaEventSourceMappingConsumptionModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
