/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/Granularity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDashboards
  {
    namespace Model
    {
      namespace GranularityMapper
      {

        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");
        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        Granularity GetGranularityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURLY_HASH)
          {
            return Granularity::HOURLY;
          }
          else if (hashCode == DAILY_HASH)
          {
            return Granularity::DAILY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return Granularity::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Granularity>(hashCode);
          }

          return Granularity::NOT_SET;
        }

        Aws::String GetNameForGranularity(Granularity enumValue)
        {
          switch(enumValue)
          {
          case Granularity::NOT_SET:
            return {};
          case Granularity::HOURLY:
            return "HOURLY";
          case Granularity::DAILY:
            return "DAILY";
          case Granularity::MONTHLY:
            return "MONTHLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GranularityMapper
    } // namespace Model
  } // namespace BCMDashboards
} // namespace Aws
