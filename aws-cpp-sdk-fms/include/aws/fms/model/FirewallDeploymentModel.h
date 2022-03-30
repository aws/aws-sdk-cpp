/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class FirewallDeploymentModel
  {
    NOT_SET,
    CENTRALIZED,
    DISTRIBUTED
  };

namespace FirewallDeploymentModelMapper
{
AWS_FMS_API FirewallDeploymentModel GetFirewallDeploymentModelForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForFirewallDeploymentModel(FirewallDeploymentModel value);
} // namespace FirewallDeploymentModelMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
