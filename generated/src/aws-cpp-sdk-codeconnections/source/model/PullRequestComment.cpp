/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/PullRequestComment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeConnections
  {
    namespace Model
    {
      namespace PullRequestCommentMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PullRequestComment GetPullRequestCommentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PullRequestComment::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PullRequestComment::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PullRequestComment>(hashCode);
          }

          return PullRequestComment::NOT_SET;
        }

        Aws::String GetNameForPullRequestComment(PullRequestComment enumValue)
        {
          switch(enumValue)
          {
          case PullRequestComment::NOT_SET:
            return {};
          case PullRequestComment::ENABLED:
            return "ENABLED";
          case PullRequestComment::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PullRequestCommentMapper
    } // namespace Model
  } // namespace CodeConnections
} // namespace Aws
