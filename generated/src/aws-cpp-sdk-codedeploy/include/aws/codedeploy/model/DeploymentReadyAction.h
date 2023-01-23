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
  enum class DeploymentReadyAction
  {
    NOT_SET,
    CONTINUE_DEPLOYMENT,
    STOP_DEPLOYMENT
  };

namespace DeploymentReadyActionMapper
{
AWS_CODEDEPLOY_API DeploymentReadyAction GetDeploymentReadyActionForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentReadyAction(DeploymentReadyAction value);
} // namespace DeploymentReadyActionMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
