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
  enum class ArtifactNamespace
  {
    NOT_SET,
    NONE,
    BUILD_ID
  };

namespace ArtifactNamespaceMapper
{
AWS_CODEBUILD_API ArtifactNamespace GetArtifactNamespaceForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForArtifactNamespace(ArtifactNamespace value);
} // namespace ArtifactNamespaceMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
