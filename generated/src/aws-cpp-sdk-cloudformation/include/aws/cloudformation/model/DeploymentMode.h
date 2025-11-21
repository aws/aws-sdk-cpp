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
enum class DeploymentMode { NOT_SET, REVERT_DRIFT };

namespace DeploymentModeMapper {
AWS_CLOUDFORMATION_API DeploymentMode GetDeploymentModeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDeploymentMode(DeploymentMode value);
}  // namespace DeploymentModeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
