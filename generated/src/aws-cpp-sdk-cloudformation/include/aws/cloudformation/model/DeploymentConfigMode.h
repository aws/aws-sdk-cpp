/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class DeploymentConfigMode { NOT_SET, STANDARD, EXPRESS };

namespace DeploymentConfigModeMapper {
AWS_CLOUDFORMATION_API DeploymentConfigMode GetDeploymentConfigModeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDeploymentConfigMode(DeploymentConfigMode value);
}  // namespace DeploymentConfigModeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
