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
  enum class PlatformType
  {
    NOT_SET,
    DEBIAN,
    AMAZON_LINUX,
    UBUNTU,
    WINDOWS_SERVER
  };

namespace PlatformTypeMapper
{
AWS_CODEBUILD_API PlatformType GetPlatformTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForPlatformType(PlatformType value);
} // namespace PlatformTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
