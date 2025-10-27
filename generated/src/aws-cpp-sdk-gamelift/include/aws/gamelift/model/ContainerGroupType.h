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
enum class ContainerGroupType { NOT_SET, GAME_SERVER, PER_INSTANCE };

namespace ContainerGroupTypeMapper {
AWS_GAMELIFT_API ContainerGroupType GetContainerGroupTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerGroupType(ContainerGroupType value);
}  // namespace ContainerGroupTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
