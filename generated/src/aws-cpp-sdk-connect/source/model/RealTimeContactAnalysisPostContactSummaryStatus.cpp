/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisPostContactSummaryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RealTimeContactAnalysisPostContactSummaryStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        RealTimeContactAnalysisPostContactSummaryStatus GetRealTimeContactAnalysisPostContactSummaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisPostContactSummaryStatus>(hashCode);
          }

          return RealTimeContactAnalysisPostContactSummaryStatus::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisPostContactSummaryStatus(RealTimeContactAnalysisPostContactSummaryStatus enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisPostContactSummaryStatus::NOT_SET:
            return {};
          case RealTimeContactAnalysisPostContactSummaryStatus::FAILED:
            return "FAILED";
          case RealTimeContactAnalysisPostContactSummaryStatus::COMPLETED:
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

      } // namespace RealTimeContactAnalysisPostContactSummaryStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
