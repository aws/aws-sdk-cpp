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
  enum class MinimumHealthyHostsPerZoneType
  {
    NOT_SET,
    HOST_COUNT,
    FLEET_PERCENT
  };

namespace MinimumHealthyHostsPerZoneTypeMapper
{
AWS_CODEDEPLOY_API MinimumHealthyHostsPerZoneType GetMinimumHealthyHostsPerZoneTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForMinimumHealthyHostsPerZoneType(MinimumHealthyHostsPerZoneType value);
} // namespace MinimumHealthyHostsPerZoneTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
