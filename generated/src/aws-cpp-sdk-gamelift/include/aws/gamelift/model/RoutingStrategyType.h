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
enum class RoutingStrategyType { NOT_SET, SIMPLE, TERMINAL };

namespace RoutingStrategyTypeMapper {
AWS_GAMELIFT_API RoutingStrategyType GetRoutingStrategyTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForRoutingStrategyType(RoutingStrategyType value);
}  // namespace RoutingStrategyTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
