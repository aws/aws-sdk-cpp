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
enum class ComparisonOperatorType {
  NOT_SET,
  GreaterThanOrEqualToThreshold,
  GreaterThanThreshold,
  LessThanThreshold,
  LessThanOrEqualToThreshold
};

namespace ComparisonOperatorTypeMapper {
AWS_GAMELIFT_API ComparisonOperatorType GetComparisonOperatorTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForComparisonOperatorType(ComparisonOperatorType value);
}  // namespace ComparisonOperatorTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
