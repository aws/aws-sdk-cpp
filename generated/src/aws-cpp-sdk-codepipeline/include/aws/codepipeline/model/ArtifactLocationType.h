/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class ArtifactLocationType
  {
    NOT_SET,
    S3
  };

namespace ArtifactLocationTypeMapper
{
AWS_CODEPIPELINE_API ArtifactLocationType GetArtifactLocationTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForArtifactLocationType(ArtifactLocationType value);
} // namespace ArtifactLocationTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
