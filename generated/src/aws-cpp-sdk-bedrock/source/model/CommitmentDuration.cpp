/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CommitmentDuration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace CommitmentDurationMapper
      {

        static const int OneMonth_HASH = HashingUtils::HashString("OneMonth");
        static const int SixMonths_HASH = HashingUtils::HashString("SixMonths");


        CommitmentDuration GetCommitmentDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OneMonth_HASH)
          {
            return CommitmentDuration::OneMonth;
          }
          else if (hashCode == SixMonths_HASH)
          {
            return CommitmentDuration::SixMonths;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommitmentDuration>(hashCode);
          }

          return CommitmentDuration::NOT_SET;
        }

        Aws::String GetNameForCommitmentDuration(CommitmentDuration enumValue)
        {
          switch(enumValue)
          {
          case CommitmentDuration::NOT_SET:
            return {};
          case CommitmentDuration::OneMonth:
            return "OneMonth";
          case CommitmentDuration::SixMonths:
            return "SixMonths";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommitmentDurationMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
