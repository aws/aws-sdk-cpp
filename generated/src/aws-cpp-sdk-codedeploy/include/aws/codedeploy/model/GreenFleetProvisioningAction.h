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
  enum class GreenFleetProvisioningAction
  {
    NOT_SET,
    DISCOVER_EXISTING,
    COPY_AUTO_SCALING_GROUP
  };

namespace GreenFleetProvisioningActionMapper
{
AWS_CODEDEPLOY_API GreenFleetProvisioningAction GetGreenFleetProvisioningActionForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForGreenFleetProvisioningAction(GreenFleetProvisioningAction value);
} // namespace GreenFleetProvisioningActionMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
