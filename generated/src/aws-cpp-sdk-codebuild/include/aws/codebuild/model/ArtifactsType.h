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
  enum class ArtifactsType
  {
    NOT_SET,
    CODEPIPELINE,
    S3,
    NO_ARTIFACTS
  };

namespace ArtifactsTypeMapper
{
AWS_CODEBUILD_API ArtifactsType GetArtifactsTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForArtifactsType(ArtifactsType value);
} // namespace ArtifactsTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
