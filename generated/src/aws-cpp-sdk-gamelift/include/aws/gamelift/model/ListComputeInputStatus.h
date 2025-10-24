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
enum class ListComputeInputStatus { NOT_SET, ACTIVE, IMPAIRED };

namespace ListComputeInputStatusMapper {
AWS_GAMELIFT_API ListComputeInputStatus GetListComputeInputStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForListComputeInputStatus(ListComputeInputStatus value);
}  // namespace ListComputeInputStatusMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
