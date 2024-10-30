/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteFerryAfterTravelStepType.h>
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
      namespace RouteFerryAfterTravelStepTypeMapper
      {

        static const int Deboard_HASH = HashingUtils::HashString("Deboard");


        RouteFerryAfterTravelStepType GetRouteFerryAfterTravelStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Deboard_HASH)
          {
            return RouteFerryAfterTravelStepType::Deboard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteFerryAfterTravelStepType>(hashCode);
          }

          return RouteFerryAfterTravelStepType::NOT_SET;
        }

        Aws::String GetNameForRouteFerryAfterTravelStepType(RouteFerryAfterTravelStepType enumValue)
        {
          switch(enumValue)
          {
          case RouteFerryAfterTravelStepType::NOT_SET:
            return {};
          case RouteFerryAfterTravelStepType::Deboard:
            return "Deboard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteFerryAfterTravelStepTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
