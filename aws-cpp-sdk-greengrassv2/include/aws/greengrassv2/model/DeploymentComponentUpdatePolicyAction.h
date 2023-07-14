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
  enum class DeploymentComponentUpdatePolicyAction
  {
    NOT_SET,
    NOTIFY_COMPONENTS,
    SKIP_NOTIFY_COMPONENTS
  };

namespace DeploymentComponentUpdatePolicyActionMapper
{
AWS_GREENGRASSV2_API DeploymentComponentUpdatePolicyAction GetDeploymentComponentUpdatePolicyActionForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForDeploymentComponentUpdatePolicyAction(DeploymentComponentUpdatePolicyAction value);
} // namespace DeploymentComponentUpdatePolicyActionMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
