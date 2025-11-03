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
enum class MinimumThroughputBillingCommitmentOutputStatus { NOT_SET, ENABLED, DISABLED, ENABLED_UNTIL_EARLIEST_ALLOWED_END };

namespace MinimumThroughputBillingCommitmentOutputStatusMapper {
AWS_KINESIS_API MinimumThroughputBillingCommitmentOutputStatus
GetMinimumThroughputBillingCommitmentOutputStatusForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForMinimumThroughputBillingCommitmentOutputStatus(MinimumThroughputBillingCommitmentOutputStatus value);
}  // namespace MinimumThroughputBillingCommitmentOutputStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
