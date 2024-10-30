/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationServiceTimeTreatment.h>
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
      namespace WaypointOptimizationServiceTimeTreatmentMapper
      {

        static const int Rest_HASH = HashingUtils::HashString("Rest");
        static const int Work_HASH = HashingUtils::HashString("Work");


        WaypointOptimizationServiceTimeTreatment GetWaypointOptimizationServiceTimeTreatmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Rest_HASH)
          {
            return WaypointOptimizationServiceTimeTreatment::Rest;
          }
          else if (hashCode == Work_HASH)
          {
            return WaypointOptimizationServiceTimeTreatment::Work;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationServiceTimeTreatment>(hashCode);
          }

          return WaypointOptimizationServiceTimeTreatment::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationServiceTimeTreatment(WaypointOptimizationServiceTimeTreatment enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationServiceTimeTreatment::NOT_SET:
            return {};
          case WaypointOptimizationServiceTimeTreatment::Rest:
            return "Rest";
          case WaypointOptimizationServiceTimeTreatment::Work:
            return "Work";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WaypointOptimizationServiceTimeTreatmentMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
