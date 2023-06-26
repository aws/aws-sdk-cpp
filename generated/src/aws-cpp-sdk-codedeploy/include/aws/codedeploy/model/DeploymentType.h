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
  enum class DeploymentType
  {
    NOT_SET,
    IN_PLACE,
    BLUE_GREEN
  };

namespace DeploymentTypeMapper
{
AWS_CODEDEPLOY_API DeploymentType GetDeploymentTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentType(DeploymentType value);
} // namespace DeploymentTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
