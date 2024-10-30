/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollVehicleCategory.h>
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
      namespace RouteTollVehicleCategoryMapper
      {

        static const int Minibus_HASH = HashingUtils::HashString("Minibus");


        RouteTollVehicleCategory GetRouteTollVehicleCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Minibus_HASH)
          {
            return RouteTollVehicleCategory::Minibus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTollVehicleCategory>(hashCode);
          }

          return RouteTollVehicleCategory::NOT_SET;
        }

        Aws::String GetNameForRouteTollVehicleCategory(RouteTollVehicleCategory enumValue)
        {
          switch(enumValue)
          {
          case RouteTollVehicleCategory::NOT_SET:
            return {};
          case RouteTollVehicleCategory::Minibus:
            return "Minibus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTollVehicleCategoryMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
