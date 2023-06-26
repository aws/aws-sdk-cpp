/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Granularity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace GranularityMapper
      {

        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");


        Granularity GetGranularityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return Granularity::DAILY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return Granularity::MONTHLY;
          }
          else if (hashCode == HOURLY_HASH)
          {
            return Granularity::HOURLY;
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
          case Granularity::DAILY:
            return "DAILY";
          case Granularity::MONTHLY:
            return "MONTHLY";
          case Granularity::HOURLY:
            return "HOURLY";
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
  } // namespace CostExplorer
} // namespace Aws
