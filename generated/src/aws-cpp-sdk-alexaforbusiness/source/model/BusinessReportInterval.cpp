/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/BusinessReportInterval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace BusinessReportIntervalMapper
      {

        static const int ONE_DAY_HASH = HashingUtils::HashString("ONE_DAY");
        static const int ONE_WEEK_HASH = HashingUtils::HashString("ONE_WEEK");
        static const int THIRTY_DAYS_HASH = HashingUtils::HashString("THIRTY_DAYS");


        BusinessReportInterval GetBusinessReportIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_DAY_HASH)
          {
            return BusinessReportInterval::ONE_DAY;
          }
          else if (hashCode == ONE_WEEK_HASH)
          {
            return BusinessReportInterval::ONE_WEEK;
          }
          else if (hashCode == THIRTY_DAYS_HASH)
          {
            return BusinessReportInterval::THIRTY_DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BusinessReportInterval>(hashCode);
          }

          return BusinessReportInterval::NOT_SET;
        }

        Aws::String GetNameForBusinessReportInterval(BusinessReportInterval enumValue)
        {
          switch(enumValue)
          {
          case BusinessReportInterval::ONE_DAY:
            return "ONE_DAY";
          case BusinessReportInterval::ONE_WEEK:
            return "ONE_WEEK";
          case BusinessReportInterval::THIRTY_DAYS:
            return "THIRTY_DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BusinessReportIntervalMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
