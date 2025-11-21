/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AutoScaling {
namespace Model {
enum class RetryStrategy { NOT_SET, retry_with_group_configuration, none };

namespace RetryStrategyMapper {
AWS_AUTOSCALING_API RetryStrategy GetRetryStrategyForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForRetryStrategy(RetryStrategy value);
}  // namespace RetryStrategyMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
