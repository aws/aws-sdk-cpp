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
  enum class MinimumHealthyHostsType
  {
    NOT_SET,
    HOST_COUNT,
    FLEET_PERCENT
  };

namespace MinimumHealthyHostsTypeMapper
{
AWS_CODEDEPLOY_API MinimumHealthyHostsType GetMinimumHealthyHostsTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForMinimumHealthyHostsType(MinimumHealthyHostsType value);
} // namespace MinimumHealthyHostsTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
