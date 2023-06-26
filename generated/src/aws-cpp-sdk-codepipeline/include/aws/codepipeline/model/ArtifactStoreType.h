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
  enum class ArtifactStoreType
  {
    NOT_SET,
    S3
  };

namespace ArtifactStoreTypeMapper
{
AWS_CODEPIPELINE_API ArtifactStoreType GetArtifactStoreTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForArtifactStoreType(ArtifactStoreType value);
} // namespace ArtifactStoreTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
