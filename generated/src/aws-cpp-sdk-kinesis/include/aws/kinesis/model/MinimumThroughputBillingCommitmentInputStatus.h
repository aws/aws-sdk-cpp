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
enum class MinimumThroughputBillingCommitmentInputStatus { NOT_SET, ENABLED, DISABLED };

namespace MinimumThroughputBillingCommitmentInputStatusMapper {
AWS_KINESIS_API MinimumThroughputBillingCommitmentInputStatus
GetMinimumThroughputBillingCommitmentInputStatusForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForMinimumThroughputBillingCommitmentInputStatus(MinimumThroughputBillingCommitmentInputStatus value);
}  // namespace MinimumThroughputBillingCommitmentInputStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
