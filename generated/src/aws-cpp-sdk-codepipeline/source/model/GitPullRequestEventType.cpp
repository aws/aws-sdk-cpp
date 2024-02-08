/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GitPullRequestEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace GitPullRequestEventTypeMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        GitPullRequestEventType GetGitPullRequestEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return GitPullRequestEventType::OPEN;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return GitPullRequestEventType::UPDATED;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return GitPullRequestEventType::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GitPullRequestEventType>(hashCode);
          }

          return GitPullRequestEventType::NOT_SET;
        }

        Aws::String GetNameForGitPullRequestEventType(GitPullRequestEventType enumValue)
        {
          switch(enumValue)
          {
          case GitPullRequestEventType::NOT_SET:
            return {};
          case GitPullRequestEventType::OPEN:
            return "OPEN";
          case GitPullRequestEventType::UPDATED:
            return "UPDATED";
          case GitPullRequestEventType::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GitPullRequestEventTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
