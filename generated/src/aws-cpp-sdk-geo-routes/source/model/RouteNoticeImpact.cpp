/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteNoticeImpact.h>
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
      namespace RouteNoticeImpactMapper
      {

        static const int High_HASH = HashingUtils::HashString("High");
        static const int Low_HASH = HashingUtils::HashString("Low");


        RouteNoticeImpact GetRouteNoticeImpactForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == High_HASH)
          {
            return RouteNoticeImpact::High;
          }
          else if (hashCode == Low_HASH)
          {
            return RouteNoticeImpact::Low;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteNoticeImpact>(hashCode);
          }

          return RouteNoticeImpact::NOT_SET;
        }

        Aws::String GetNameForRouteNoticeImpact(RouteNoticeImpact enumValue)
        {
          switch(enumValue)
          {
          case RouteNoticeImpact::NOT_SET:
            return {};
          case RouteNoticeImpact::High:
            return "High";
          case RouteNoticeImpact::Low:
            return "Low";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteNoticeImpactMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
