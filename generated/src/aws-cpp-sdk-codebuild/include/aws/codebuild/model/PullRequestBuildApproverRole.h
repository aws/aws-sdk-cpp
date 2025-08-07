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
  enum class PullRequestBuildApproverRole
  {
    NOT_SET,
    GITHUB_READ,
    GITHUB_TRIAGE,
    GITHUB_WRITE,
    GITHUB_MAINTAIN,
    GITHUB_ADMIN,
    GITLAB_GUEST,
    GITLAB_PLANNER,
    GITLAB_REPORTER,
    GITLAB_DEVELOPER,
    GITLAB_MAINTAINER,
    GITLAB_OWNER,
    BITBUCKET_READ,
    BITBUCKET_WRITE,
    BITBUCKET_ADMIN
  };

namespace PullRequestBuildApproverRoleMapper
{
AWS_CODEBUILD_API PullRequestBuildApproverRole GetPullRequestBuildApproverRoleForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForPullRequestBuildApproverRole(PullRequestBuildApproverRole value);
} // namespace PullRequestBuildApproverRoleMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
