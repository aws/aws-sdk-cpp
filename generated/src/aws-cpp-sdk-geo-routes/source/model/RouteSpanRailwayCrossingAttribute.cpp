/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanRailwayCrossingAttribute.h>
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
      namespace RouteSpanRailwayCrossingAttributeMapper
      {

        static const int Protected_HASH = HashingUtils::HashString("Protected");
        static const int Unprotected_HASH = HashingUtils::HashString("Unprotected");


        RouteSpanRailwayCrossingAttribute GetRouteSpanRailwayCrossingAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Protected_HASH)
          {
            return RouteSpanRailwayCrossingAttribute::Protected;
          }
          else if (hashCode == Unprotected_HASH)
          {
            return RouteSpanRailwayCrossingAttribute::Unprotected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanRailwayCrossingAttribute>(hashCode);
          }

          return RouteSpanRailwayCrossingAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanRailwayCrossingAttribute(RouteSpanRailwayCrossingAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanRailwayCrossingAttribute::NOT_SET:
            return {};
          case RouteSpanRailwayCrossingAttribute::Protected:
            return "Protected";
          case RouteSpanRailwayCrossingAttribute::Unprotected:
            return "Unprotected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSpanRailwayCrossingAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
