/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/Greengrass_EXPORTS.h>

namespace Aws {
namespace Greengrass {
namespace Model {
enum class DeploymentType { NOT_SET, NewDeployment, Redeployment, ResetDeployment, ForceResetDeployment };

namespace DeploymentTypeMapper {
AWS_GREENGRASS_API DeploymentType GetDeploymentTypeForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForDeploymentType(DeploymentType value);
}  // namespace DeploymentTypeMapper
}  // namespace Model
}  // namespace Greengrass
}  // namespace Aws
