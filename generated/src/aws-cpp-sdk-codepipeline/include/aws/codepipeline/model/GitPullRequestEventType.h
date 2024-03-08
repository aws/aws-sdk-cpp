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
  enum class GitPullRequestEventType
  {
    NOT_SET,
    OPEN,
    UPDATED,
    CLOSED
  };

namespace GitPullRequestEventTypeMapper
{
AWS_CODEPIPELINE_API GitPullRequestEventType GetGitPullRequestEventTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForGitPullRequestEventType(GitPullRequestEventType value);
} // namespace GitPullRequestEventTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
