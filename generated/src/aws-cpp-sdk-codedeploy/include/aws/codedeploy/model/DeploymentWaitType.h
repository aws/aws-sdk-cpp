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
  enum class DeploymentWaitType
  {
    NOT_SET,
    READY_WAIT,
    TERMINATION_WAIT
  };

namespace DeploymentWaitTypeMapper
{
AWS_CODEDEPLOY_API DeploymentWaitType GetDeploymentWaitTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentWaitType(DeploymentWaitType value);
} // namespace DeploymentWaitTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
