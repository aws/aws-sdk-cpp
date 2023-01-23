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
  enum class DeploymentCreator
  {
    NOT_SET,
    user,
    autoscaling,
    codeDeployRollback,
    CodeDeploy,
    CodeDeployAutoUpdate,
    CloudFormation,
    CloudFormationRollback
  };

namespace DeploymentCreatorMapper
{
AWS_CODEDEPLOY_API DeploymentCreator GetDeploymentCreatorForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentCreator(DeploymentCreator value);
} // namespace DeploymentCreatorMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
