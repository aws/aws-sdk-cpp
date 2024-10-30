/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryTravelStepType.h>
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
      namespace RouteFerryTravelStepTypeMapper
      {

        static const int Depart_HASH = HashingUtils::HashString("Depart");
        static const int Continue_HASH = HashingUtils::HashString("Continue");
        static const int Arrive_HASH = HashingUtils::HashString("Arrive");


        RouteFerryTravelStepType GetRouteFerryTravelStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Depart_HASH)
          {
            return RouteFerryTravelStepType::Depart;
          }
          else if (hashCode == Continue_HASH)
          {
            return RouteFerryTravelStepType::Continue;
          }
          else if (hashCode == Arrive_HASH)
          {
            return RouteFerryTravelStepType::Arrive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteFerryTravelStepType>(hashCode);
          }

          return RouteFerryTravelStepType::NOT_SET;
        }

        Aws::String GetNameForRouteFerryTravelStepType(RouteFerryTravelStepType enumValue)
        {
          switch(enumValue)
          {
          case RouteFerryTravelStepType::NOT_SET:
            return {};
          case RouteFerryTravelStepType::Depart:
            return "Depart";
          case RouteFerryTravelStepType::Continue:
            return "Continue";
          case RouteFerryTravelStepType::Arrive:
            return "Arrive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteFerryTravelStepTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
