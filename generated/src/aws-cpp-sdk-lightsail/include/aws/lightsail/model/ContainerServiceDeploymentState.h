/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class ContainerServiceDeploymentState { NOT_SET, ACTIVATING, ACTIVE, INACTIVE, FAILED };

namespace ContainerServiceDeploymentStateMapper {
AWS_LIGHTSAIL_API ContainerServiceDeploymentState GetContainerServiceDeploymentStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForContainerServiceDeploymentState(ContainerServiceDeploymentState value);
}  // namespace ContainerServiceDeploymentStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
