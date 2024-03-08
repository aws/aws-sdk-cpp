/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{
  enum class DeploymentLifecycle
  {
    NOT_SET,
    Deploying,
    Succeeded,
    Failed,
    Updating_Deployment
  };

namespace DeploymentLifecycleMapper
{
AWS_MAINFRAMEMODERNIZATION_API DeploymentLifecycle GetDeploymentLifecycleForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForDeploymentLifecycle(DeploymentLifecycle value);
} // namespace DeploymentLifecycleMapper
} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
