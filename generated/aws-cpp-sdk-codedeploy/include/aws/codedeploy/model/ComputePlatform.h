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
  enum class ComputePlatform
  {
    NOT_SET,
    Server,
    Lambda,
    ECS
  };

namespace ComputePlatformMapper
{
AWS_CODEDEPLOY_API ComputePlatform GetComputePlatformForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForComputePlatform(ComputePlatform value);
} // namespace ComputePlatformMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
