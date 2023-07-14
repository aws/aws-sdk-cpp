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
  enum class SourceAuthType
  {
    NOT_SET,
    OAUTH
  };

namespace SourceAuthTypeMapper
{
AWS_CODEBUILD_API SourceAuthType GetSourceAuthTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForSourceAuthType(SourceAuthType value);
} // namespace SourceAuthTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
