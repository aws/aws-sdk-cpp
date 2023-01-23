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
  enum class InstanceType
  {
    NOT_SET,
    Blue,
    Green
  };

namespace InstanceTypeMapper
{
AWS_CODEDEPLOY_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
