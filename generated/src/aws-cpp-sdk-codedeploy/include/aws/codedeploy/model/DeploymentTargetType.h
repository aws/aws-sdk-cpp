/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class DeploymentTargetType
  {
    NOT_SET,
    InstanceTarget,
    LambdaTarget,
    ECSTarget,
    CloudFormationTarget
  };

namespace DeploymentTargetTypeMapper
{
AWS_CODEDEPLOY_API DeploymentTargetType GetDeploymentTargetTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentTargetType(DeploymentTargetType value);
} // namespace DeploymentTargetTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
