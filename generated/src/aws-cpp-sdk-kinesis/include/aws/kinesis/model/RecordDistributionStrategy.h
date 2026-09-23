/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Model {
enum class RecordDistributionStrategy { NOT_SET, AUTO, USER_PARTITION_KEY };

namespace RecordDistributionStrategyMapper {
AWS_KINESIS_API RecordDistributionStrategy GetRecordDistributionStrategyForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForRecordDistributionStrategy(RecordDistributionStrategy value);
}  // namespace RecordDistributionStrategyMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
