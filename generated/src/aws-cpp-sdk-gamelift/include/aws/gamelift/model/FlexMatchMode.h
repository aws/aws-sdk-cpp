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
enum class FlexMatchMode { NOT_SET, STANDALONE, WITH_QUEUE };

namespace FlexMatchModeMapper {
AWS_GAMELIFT_API FlexMatchMode GetFlexMatchModeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForFlexMatchMode(FlexMatchMode value);
}  // namespace FlexMatchModeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
