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
enum class BackfillMode { NOT_SET, AUTOMATIC, MANUAL };

namespace BackfillModeMapper {
AWS_GAMELIFT_API BackfillMode GetBackfillModeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForBackfillMode(BackfillMode value);
}  // namespace BackfillModeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
