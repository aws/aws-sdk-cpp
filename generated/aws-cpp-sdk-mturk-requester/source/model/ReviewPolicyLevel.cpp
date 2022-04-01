/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ReviewPolicyLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace ReviewPolicyLevelMapper
      {

        static const int Assignment_HASH = HashingUtils::HashString("Assignment");
        static const int HIT_HASH = HashingUtils::HashString("HIT");


        ReviewPolicyLevel GetReviewPolicyLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Assignment_HASH)
          {
            return ReviewPolicyLevel::Assignment;
          }
          else if (hashCode == HIT_HASH)
          {
            return ReviewPolicyLevel::HIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewPolicyLevel>(hashCode);
          }

          return ReviewPolicyLevel::NOT_SET;
        }

        Aws::String GetNameForReviewPolicyLevel(ReviewPolicyLevel enumValue)
        {
          switch(enumValue)
          {
          case ReviewPolicyLevel::Assignment:
            return "Assignment";
          case ReviewPolicyLevel::HIT:
            return "HIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewPolicyLevelMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
