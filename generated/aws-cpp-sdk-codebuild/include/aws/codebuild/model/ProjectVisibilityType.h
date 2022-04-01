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
  enum class ProjectVisibilityType
  {
    NOT_SET,
    PUBLIC_READ,
    PRIVATE_
  };

namespace ProjectVisibilityTypeMapper
{
AWS_CODEBUILD_API ProjectVisibilityType GetProjectVisibilityTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForProjectVisibilityType(ProjectVisibilityType value);
} // namespace ProjectVisibilityTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
