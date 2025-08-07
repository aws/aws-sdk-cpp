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
  enum class PullRequestBuildCommentApproval
  {
    NOT_SET,
    DISABLED,
    ALL_PULL_REQUESTS,
    FORK_PULL_REQUESTS
  };

namespace PullRequestBuildCommentApprovalMapper
{
AWS_CODEBUILD_API PullRequestBuildCommentApproval GetPullRequestBuildCommentApprovalForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForPullRequestBuildCommentApproval(PullRequestBuildCommentApproval value);
} // namespace PullRequestBuildCommentApprovalMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
