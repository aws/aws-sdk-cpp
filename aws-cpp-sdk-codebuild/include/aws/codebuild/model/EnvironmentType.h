/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class EnvironmentType
  {
    NOT_SET,
    WINDOWS_CONTAINER,
    LINUX_CONTAINER,
    LINUX_GPU_CONTAINER,
    ARM_CONTAINER,
    WINDOWS_SERVER_2019_CONTAINER
  };

namespace EnvironmentTypeMapper
{
AWS_CODEBUILD_API EnvironmentType GetEnvironmentTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForEnvironmentType(EnvironmentType value);
} // namespace EnvironmentTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
