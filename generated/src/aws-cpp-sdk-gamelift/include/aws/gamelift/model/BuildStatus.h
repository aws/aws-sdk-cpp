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
enum class BuildStatus { NOT_SET, INITIALIZED, READY, FAILED };

namespace BuildStatusMapper {
AWS_GAMELIFT_API BuildStatus GetBuildStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForBuildStatus(BuildStatus value);
}  // namespace BuildStatusMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
