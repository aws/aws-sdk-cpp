/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class ZeroCapacityStrategy { NOT_SET, MANUAL, SCALE_TO_AND_FROM_ZERO };

namespace ZeroCapacityStrategyMapper {
AWS_GAMELIFT_API ZeroCapacityStrategy GetZeroCapacityStrategyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForZeroCapacityStrategy(ZeroCapacityStrategy value);
}  // namespace ZeroCapacityStrategyMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
