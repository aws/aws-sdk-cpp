/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/PullRequestBuildApproverRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace PullRequestBuildApproverRoleMapper
      {

        static const int GITHUB_READ_HASH = HashingUtils::HashString("GITHUB_READ");
        static const int GITHUB_TRIAGE_HASH = HashingUtils::HashString("GITHUB_TRIAGE");
        static const int GITHUB_WRITE_HASH = HashingUtils::HashString("GITHUB_WRITE");
        static const int GITHUB_MAINTAIN_HASH = HashingUtils::HashString("GITHUB_MAINTAIN");
        static const int GITHUB_ADMIN_HASH = HashingUtils::HashString("GITHUB_ADMIN");
        static const int GITLAB_GUEST_HASH = HashingUtils::HashString("GITLAB_GUEST");
        static const int GITLAB_PLANNER_HASH = HashingUtils::HashString("GITLAB_PLANNER");
        static const int GITLAB_REPORTER_HASH = HashingUtils::HashString("GITLAB_REPORTER");
        static const int GITLAB_DEVELOPER_HASH = HashingUtils::HashString("GITLAB_DEVELOPER");
        static const int GITLAB_MAINTAINER_HASH = HashingUtils::HashString("GITLAB_MAINTAINER");
        static const int GITLAB_OWNER_HASH = HashingUtils::HashString("GITLAB_OWNER");
        static const int BITBUCKET_READ_HASH = HashingUtils::HashString("BITBUCKET_READ");
        static const int BITBUCKET_WRITE_HASH = HashingUtils::HashString("BITBUCKET_WRITE");
        static const int BITBUCKET_ADMIN_HASH = HashingUtils::HashString("BITBUCKET_ADMIN");


        PullRequestBuildApproverRole GetPullRequestBuildApproverRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_READ_HASH)
          {
            return PullRequestBuildApproverRole::GITHUB_READ;
          }
          else if (hashCode == GITHUB_TRIAGE_HASH)
          {
            return PullRequestBuildApproverRole::GITHUB_TRIAGE;
          }
          else if (hashCode == GITHUB_WRITE_HASH)
          {
            return PullRequestBuildApproverRole::GITHUB_WRITE;
          }
          else if (hashCode == GITHUB_MAINTAIN_HASH)
          {
            return PullRequestBuildApproverRole::GITHUB_MAINTAIN;
          }
          else if (hashCode == GITHUB_ADMIN_HASH)
          {
            return PullRequestBuildApproverRole::GITHUB_ADMIN;
          }
          else if (hashCode == GITLAB_GUEST_HASH)
          {
            return PullRequestBuildApproverRole::GITLAB_GUEST;
          }
          else if (hashCode == GITLAB_PLANNER_HASH)
          {
            return PullRequestBuildApproverRole::GITLAB_PLANNER;
          }
          else if (hashCode == GITLAB_REPORTER_HASH)
          {
            return PullRequestBuildApproverRole::GITLAB_REPORTER;
          }
          else if (hashCode == GITLAB_DEVELOPER_HASH)
          {
            return PullRequestBuildApproverRole::GITLAB_DEVELOPER;
          }
          else if (hashCode == GITLAB_MAINTAINER_HASH)
          {
            return PullRequestBuildApproverRole::GITLAB_MAINTAINER;
          }
          else if (hashCode == GITLAB_OWNER_HASH)
          {
            return PullRequestBuildApproverRole::GITLAB_OWNER;
          }
          else if (hashCode == BITBUCKET_READ_HASH)
          {
            return PullRequestBuildApproverRole::BITBUCKET_READ;
          }
          else if (hashCode == BITBUCKET_WRITE_HASH)
          {
            return PullRequestBuildApproverRole::BITBUCKET_WRITE;
          }
          else if (hashCode == BITBUCKET_ADMIN_HASH)
          {
            return PullRequestBuildApproverRole::BITBUCKET_ADMIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PullRequestBuildApproverRole>(hashCode);
          }

          return PullRequestBuildApproverRole::NOT_SET;
        }

        Aws::String GetNameForPullRequestBuildApproverRole(PullRequestBuildApproverRole enumValue)
        {
          switch(enumValue)
          {
          case PullRequestBuildApproverRole::NOT_SET:
            return {};
          case PullRequestBuildApproverRole::GITHUB_READ:
            return "GITHUB_READ";
          case PullRequestBuildApproverRole::GITHUB_TRIAGE:
            return "GITHUB_TRIAGE";
          case PullRequestBuildApproverRole::GITHUB_WRITE:
            return "GITHUB_WRITE";
          case PullRequestBuildApproverRole::GITHUB_MAINTAIN:
            return "GITHUB_MAINTAIN";
          case PullRequestBuildApproverRole::GITHUB_ADMIN:
            return "GITHUB_ADMIN";
          case PullRequestBuildApproverRole::GITLAB_GUEST:
            return "GITLAB_GUEST";
          case PullRequestBuildApproverRole::GITLAB_PLANNER:
            return "GITLAB_PLANNER";
          case PullRequestBuildApproverRole::GITLAB_REPORTER:
            return "GITLAB_REPORTER";
          case PullRequestBuildApproverRole::GITLAB_DEVELOPER:
            return "GITLAB_DEVELOPER";
          case PullRequestBuildApproverRole::GITLAB_MAINTAINER:
            return "GITLAB_MAINTAINER";
          case PullRequestBuildApproverRole::GITLAB_OWNER:
            return "GITLAB_OWNER";
          case PullRequestBuildApproverRole::BITBUCKET_READ:
            return "BITBUCKET_READ";
          case PullRequestBuildApproverRole::BITBUCKET_WRITE:
            return "BITBUCKET_WRITE";
          case PullRequestBuildApproverRole::BITBUCKET_ADMIN:
            return "BITBUCKET_ADMIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PullRequestBuildApproverRoleMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
