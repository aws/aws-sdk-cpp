/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteWeightConstraintType.h>
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
      namespace RouteWeightConstraintTypeMapper
      {

        static const int Current_HASH = HashingUtils::HashString("Current");
        static const int Gross_HASH = HashingUtils::HashString("Gross");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        RouteWeightConstraintType GetRouteWeightConstraintTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Current_HASH)
          {
            return RouteWeightConstraintType::Current;
          }
          else if (hashCode == Gross_HASH)
          {
            return RouteWeightConstraintType::Gross;
          }
          else if (hashCode == Unknown_HASH)
          {
            return RouteWeightConstraintType::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteWeightConstraintType>(hashCode);
          }

          return RouteWeightConstraintType::NOT_SET;
        }

        Aws::String GetNameForRouteWeightConstraintType(RouteWeightConstraintType enumValue)
        {
          switch(enumValue)
          {
          case RouteWeightConstraintType::NOT_SET:
            return {};
          case RouteWeightConstraintType::Current:
            return "Current";
          case RouteWeightConstraintType::Gross:
            return "Gross";
          case RouteWeightConstraintType::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteWeightConstraintTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
