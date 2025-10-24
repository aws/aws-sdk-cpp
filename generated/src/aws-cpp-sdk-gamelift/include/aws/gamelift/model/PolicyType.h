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
enum class PolicyType { NOT_SET, RuleBased, TargetBased };

namespace PolicyTypeMapper {
AWS_GAMELIFT_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPolicyType(PolicyType value);
}  // namespace PolicyTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
