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
  enum class SharedResourceSortByType
  {
    NOT_SET,
    ARN,
    MODIFIED_TIME
  };

namespace SharedResourceSortByTypeMapper
{
AWS_CODEBUILD_API SharedResourceSortByType GetSharedResourceSortByTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForSharedResourceSortByType(SharedResourceSortByType value);
} // namespace SharedResourceSortByTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
