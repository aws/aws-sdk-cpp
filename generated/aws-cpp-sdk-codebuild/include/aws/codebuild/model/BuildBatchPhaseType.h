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
  enum class BuildBatchPhaseType
  {
    NOT_SET,
    SUBMITTED,
    DOWNLOAD_BATCHSPEC,
    IN_PROGRESS,
    COMBINE_ARTIFACTS,
    SUCCEEDED,
    FAILED,
    STOPPED
  };

namespace BuildBatchPhaseTypeMapper
{
AWS_CODEBUILD_API BuildBatchPhaseType GetBuildBatchPhaseTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForBuildBatchPhaseType(BuildBatchPhaseType value);
} // namespace BuildBatchPhaseTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
