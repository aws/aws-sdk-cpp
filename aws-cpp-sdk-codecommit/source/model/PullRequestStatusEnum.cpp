/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PullRequestStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace PullRequestStatusEnumMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        PullRequestStatusEnum GetPullRequestStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return PullRequestStatusEnum::OPEN;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return PullRequestStatusEnum::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PullRequestStatusEnum>(hashCode);
          }

          return PullRequestStatusEnum::NOT_SET;
        }

        Aws::String GetNameForPullRequestStatusEnum(PullRequestStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case PullRequestStatusEnum::OPEN:
            return "OPEN";
          case PullRequestStatusEnum::CLOSED:
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

      } // namespace PullRequestStatusEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
