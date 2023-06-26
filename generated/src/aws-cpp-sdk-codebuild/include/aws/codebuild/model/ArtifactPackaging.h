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
  enum class ArtifactPackaging
  {
    NOT_SET,
    NONE,
    ZIP
  };

namespace ArtifactPackagingMapper
{
AWS_CODEBUILD_API ArtifactPackaging GetArtifactPackagingForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForArtifactPackaging(ArtifactPackaging value);
} // namespace ArtifactPackagingMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
