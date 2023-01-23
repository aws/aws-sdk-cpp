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
  enum class SourceType
  {
    NOT_SET,
    CODECOMMIT,
    CODEPIPELINE,
    GITHUB,
    S3,
    BITBUCKET,
    GITHUB_ENTERPRISE,
    NO_SOURCE
  };

namespace SourceTypeMapper
{
AWS_CODEBUILD_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
