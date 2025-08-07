/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/PullRequestBuildCommentApproval.h>
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
      namespace PullRequestBuildCommentApprovalMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ALL_PULL_REQUESTS_HASH = HashingUtils::HashString("ALL_PULL_REQUESTS");
        static const int FORK_PULL_REQUESTS_HASH = HashingUtils::HashString("FORK_PULL_REQUESTS");


        PullRequestBuildCommentApproval GetPullRequestBuildCommentApprovalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return PullRequestBuildCommentApproval::DISABLED;
          }
          else if (hashCode == ALL_PULL_REQUESTS_HASH)
          {
            return PullRequestBuildCommentApproval::ALL_PULL_REQUESTS;
          }
          else if (hashCode == FORK_PULL_REQUESTS_HASH)
          {
            return PullRequestBuildCommentApproval::FORK_PULL_REQUESTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PullRequestBuildCommentApproval>(hashCode);
          }

          return PullRequestBuildCommentApproval::NOT_SET;
        }

        Aws::String GetNameForPullRequestBuildCommentApproval(PullRequestBuildCommentApproval enumValue)
        {
          switch(enumValue)
          {
          case PullRequestBuildCommentApproval::NOT_SET:
            return {};
          case PullRequestBuildCommentApproval::DISABLED:
            return "DISABLED";
          case PullRequestBuildCommentApproval::ALL_PULL_REQUESTS:
            return "ALL_PULL_REQUESTS";
          case PullRequestBuildCommentApproval::FORK_PULL_REQUESTS:
            return "FORK_PULL_REQUESTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PullRequestBuildCommentApprovalMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
