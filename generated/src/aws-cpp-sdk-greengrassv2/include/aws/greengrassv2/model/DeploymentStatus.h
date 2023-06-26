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
  enum class DeploymentStatus
  {
    NOT_SET,
    ACTIVE,
    COMPLETED,
    CANCELED,
    FAILED,
    INACTIVE
  };

namespace DeploymentStatusMapper
{
AWS_GREENGRASSV2_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
