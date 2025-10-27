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
enum class ContainerFleetBillingType { NOT_SET, ON_DEMAND, SPOT };

namespace ContainerFleetBillingTypeMapper {
AWS_GAMELIFT_API ContainerFleetBillingType GetContainerFleetBillingTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerFleetBillingType(ContainerFleetBillingType value);
}  // namespace ContainerFleetBillingTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
