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
  enum class DeploymentOption
  {
    NOT_SET,
    WITH_TRAFFIC_CONTROL,
    WITHOUT_TRAFFIC_CONTROL
  };

namespace DeploymentOptionMapper
{
AWS_CODEDEPLOY_API DeploymentOption GetDeploymentOptionForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentOption(DeploymentOption value);
} // namespace DeploymentOptionMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
