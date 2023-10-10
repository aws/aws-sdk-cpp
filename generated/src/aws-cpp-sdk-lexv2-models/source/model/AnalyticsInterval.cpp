/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsInterval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace AnalyticsIntervalMapper
      {

        static const int OneHour_HASH = HashingUtils::HashString("OneHour");
        static const int OneDay_HASH = HashingUtils::HashString("OneDay");


        AnalyticsInterval GetAnalyticsIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OneHour_HASH)
          {
            return AnalyticsInterval::OneHour;
          }
          else if (hashCode == OneDay_HASH)
          {
            return AnalyticsInterval::OneDay;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsInterval>(hashCode);
          }

          return AnalyticsInterval::NOT_SET;
        }

        Aws::String GetNameForAnalyticsInterval(AnalyticsInterval enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsInterval::NOT_SET:
            return {};
          case AnalyticsInterval::OneHour:
            return "OneHour";
          case AnalyticsInterval::OneDay:
            return "OneDay";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsIntervalMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
