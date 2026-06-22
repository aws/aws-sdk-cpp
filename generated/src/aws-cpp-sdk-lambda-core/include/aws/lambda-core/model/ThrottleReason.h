/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Model {
enum class ThrottleReason {
  NOT_SET,
  ConcurrentInvocationLimitExceeded,
  FunctionInvocationRateLimitExceeded,
  ReservedFunctionConcurrentInvocationLimitExceeded,
  ReservedFunctionInvocationRateLimitExceeded,
  CallerRateLimitExceeded,
  ConcurrentSnapshotCreateLimitExceeded
};

namespace ThrottleReasonMapper {
AWS_LAMBDACORE_API ThrottleReason GetThrottleReasonForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForThrottleReason(ThrottleReason value);
}  // namespace ThrottleReasonMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
