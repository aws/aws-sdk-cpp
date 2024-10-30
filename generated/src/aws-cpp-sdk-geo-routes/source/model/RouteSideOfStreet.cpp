/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSideOfStreet.h>
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
      namespace RouteSideOfStreetMapper
      {

        static const int Left_HASH = HashingUtils::HashString("Left");
        static const int Right_HASH = HashingUtils::HashString("Right");


        RouteSideOfStreet GetRouteSideOfStreetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Left_HASH)
          {
            return RouteSideOfStreet::Left;
          }
          else if (hashCode == Right_HASH)
          {
            return RouteSideOfStreet::Right;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSideOfStreet>(hashCode);
          }

          return RouteSideOfStreet::NOT_SET;
        }

        Aws::String GetNameForRouteSideOfStreet(RouteSideOfStreet enumValue)
        {
          switch(enumValue)
          {
          case RouteSideOfStreet::NOT_SET:
            return {};
          case RouteSideOfStreet::Left:
            return "Left";
          case RouteSideOfStreet::Right:
            return "Right";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSideOfStreetMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
