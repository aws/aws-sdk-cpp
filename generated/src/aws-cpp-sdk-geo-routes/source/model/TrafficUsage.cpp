/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/TrafficUsage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace TrafficUsageMapper
      {

        static const int IgnoreTrafficData_HASH = HashingUtils::HashString("IgnoreTrafficData");
        static const int UseTrafficData_HASH = HashingUtils::HashString("UseTrafficData");


        TrafficUsage GetTrafficUsageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IgnoreTrafficData_HASH)
          {
            return TrafficUsage::IgnoreTrafficData;
          }
          else if (hashCode == UseTrafficData_HASH)
          {
            return TrafficUsage::UseTrafficData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficUsage>(hashCode);
          }

          return TrafficUsage::NOT_SET;
        }

        Aws::String GetNameForTrafficUsage(TrafficUsage enumValue)
        {
          switch(enumValue)
          {
          case TrafficUsage::NOT_SET:
            return {};
          case TrafficUsage::IgnoreTrafficData:
            return "IgnoreTrafficData";
          case TrafficUsage::UseTrafficData:
            return "UseTrafficData";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficUsageMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
