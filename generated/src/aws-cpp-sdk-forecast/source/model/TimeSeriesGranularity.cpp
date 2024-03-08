/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/TimeSeriesGranularity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace TimeSeriesGranularityMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int SPECIFIC_HASH = HashingUtils::HashString("SPECIFIC");


        TimeSeriesGranularity GetTimeSeriesGranularityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return TimeSeriesGranularity::ALL;
          }
          else if (hashCode == SPECIFIC_HASH)
          {
            return TimeSeriesGranularity::SPECIFIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeSeriesGranularity>(hashCode);
          }

          return TimeSeriesGranularity::NOT_SET;
        }

        Aws::String GetNameForTimeSeriesGranularity(TimeSeriesGranularity enumValue)
        {
          switch(enumValue)
          {
          case TimeSeriesGranularity::NOT_SET:
            return {};
          case TimeSeriesGranularity::ALL:
            return "ALL";
          case TimeSeriesGranularity::SPECIFIC:
            return "SPECIFIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeSeriesGranularityMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
