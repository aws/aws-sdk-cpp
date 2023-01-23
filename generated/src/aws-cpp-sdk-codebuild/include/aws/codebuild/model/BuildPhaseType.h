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
  enum class BuildPhaseType
  {
    NOT_SET,
    SUBMITTED,
    QUEUED,
    PROVISIONING,
    DOWNLOAD_SOURCE,
    INSTALL,
    PRE_BUILD,
    BUILD,
    POST_BUILD,
    UPLOAD_ARTIFACTS,
    FINALIZING,
    COMPLETED
  };

namespace BuildPhaseTypeMapper
{
AWS_CODEBUILD_API BuildPhaseType GetBuildPhaseTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForBuildPhaseType(BuildPhaseType value);
} // namespace BuildPhaseTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
