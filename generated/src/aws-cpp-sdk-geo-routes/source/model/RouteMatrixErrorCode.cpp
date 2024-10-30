/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixErrorCode.h>
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
      namespace RouteMatrixErrorCodeMapper
      {

        static const int NoMatch_HASH = HashingUtils::HashString("NoMatch");
        static const int NoMatchDestination_HASH = HashingUtils::HashString("NoMatchDestination");
        static const int NoMatchOrigin_HASH = HashingUtils::HashString("NoMatchOrigin");
        static const int NoRoute_HASH = HashingUtils::HashString("NoRoute");
        static const int OutOfBounds_HASH = HashingUtils::HashString("OutOfBounds");
        static const int OutOfBoundsDestination_HASH = HashingUtils::HashString("OutOfBoundsDestination");
        static const int OutOfBoundsOrigin_HASH = HashingUtils::HashString("OutOfBoundsOrigin");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int Violation_HASH = HashingUtils::HashString("Violation");


        RouteMatrixErrorCode GetRouteMatrixErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoMatch_HASH)
          {
            return RouteMatrixErrorCode::NoMatch;
          }
          else if (hashCode == NoMatchDestination_HASH)
          {
            return RouteMatrixErrorCode::NoMatchDestination;
          }
          else if (hashCode == NoMatchOrigin_HASH)
          {
            return RouteMatrixErrorCode::NoMatchOrigin;
          }
          else if (hashCode == NoRoute_HASH)
          {
            return RouteMatrixErrorCode::NoRoute;
          }
          else if (hashCode == OutOfBounds_HASH)
          {
            return RouteMatrixErrorCode::OutOfBounds;
          }
          else if (hashCode == OutOfBoundsDestination_HASH)
          {
            return RouteMatrixErrorCode::OutOfBoundsDestination;
          }
          else if (hashCode == OutOfBoundsOrigin_HASH)
          {
            return RouteMatrixErrorCode::OutOfBoundsOrigin;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteMatrixErrorCode::Other;
          }
          else if (hashCode == Violation_HASH)
          {
            return RouteMatrixErrorCode::Violation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteMatrixErrorCode>(hashCode);
          }

          return RouteMatrixErrorCode::NOT_SET;
        }

        Aws::String GetNameForRouteMatrixErrorCode(RouteMatrixErrorCode enumValue)
        {
          switch(enumValue)
          {
          case RouteMatrixErrorCode::NOT_SET:
            return {};
          case RouteMatrixErrorCode::NoMatch:
            return "NoMatch";
          case RouteMatrixErrorCode::NoMatchDestination:
            return "NoMatchDestination";
          case RouteMatrixErrorCode::NoMatchOrigin:
            return "NoMatchOrigin";
          case RouteMatrixErrorCode::NoRoute:
            return "NoRoute";
          case RouteMatrixErrorCode::OutOfBounds:
            return "OutOfBounds";
          case RouteMatrixErrorCode::OutOfBoundsDestination:
            return "OutOfBoundsDestination";
          case RouteMatrixErrorCode::OutOfBoundsOrigin:
            return "OutOfBoundsOrigin";
          case RouteMatrixErrorCode::Other:
            return "Other";
          case RouteMatrixErrorCode::Violation:
            return "Violation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteMatrixErrorCodeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
