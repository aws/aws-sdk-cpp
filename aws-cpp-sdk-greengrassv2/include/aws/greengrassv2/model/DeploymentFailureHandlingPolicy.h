/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class DeploymentFailureHandlingPolicy
  {
    NOT_SET,
    ROLLBACK,
    DO_NOTHING
  };

namespace DeploymentFailureHandlingPolicyMapper
{
AWS_GREENGRASSV2_API DeploymentFailureHandlingPolicy GetDeploymentFailureHandlingPolicyForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForDeploymentFailureHandlingPolicy(DeploymentFailureHandlingPolicy value);
} // namespace DeploymentFailureHandlingPolicyMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
