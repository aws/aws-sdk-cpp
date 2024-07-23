/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/PostContactSummaryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectContactLens
  {
    namespace Model
    {
      namespace PostContactSummaryStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        PostContactSummaryStatus GetPostContactSummaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return PostContactSummaryStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return PostContactSummaryStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostContactSummaryStatus>(hashCode);
          }

          return PostContactSummaryStatus::NOT_SET;
        }

        Aws::String GetNameForPostContactSummaryStatus(PostContactSummaryStatus enumValue)
        {
          switch(enumValue)
          {
          case PostContactSummaryStatus::NOT_SET:
            return {};
          case PostContactSummaryStatus::FAILED:
            return "FAILED";
          case PostContactSummaryStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PostContactSummaryStatusMapper
    } // namespace Model
  } // namespace ConnectContactLens
} // namespace Aws
