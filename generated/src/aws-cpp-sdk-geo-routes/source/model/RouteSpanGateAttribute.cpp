/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanGateAttribute.h>
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
      namespace RouteSpanGateAttributeMapper
      {

        static const int Emergency_HASH = HashingUtils::HashString("Emergency");
        static const int KeyAccess_HASH = HashingUtils::HashString("KeyAccess");
        static const int PermissionRequired_HASH = HashingUtils::HashString("PermissionRequired");


        RouteSpanGateAttribute GetRouteSpanGateAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Emergency_HASH)
          {
            return RouteSpanGateAttribute::Emergency;
          }
          else if (hashCode == KeyAccess_HASH)
          {
            return RouteSpanGateAttribute::KeyAccess;
          }
          else if (hashCode == PermissionRequired_HASH)
          {
            return RouteSpanGateAttribute::PermissionRequired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanGateAttribute>(hashCode);
          }

          return RouteSpanGateAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanGateAttribute(RouteSpanGateAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanGateAttribute::NOT_SET:
            return {};
          case RouteSpanGateAttribute::Emergency:
            return "Emergency";
          case RouteSpanGateAttribute::KeyAccess:
            return "KeyAccess";
          case RouteSpanGateAttribute::PermissionRequired:
            return "PermissionRequired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSpanGateAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
