/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FleetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace FleetTypeMapper
      {

        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
        static const int SPOT_HASH = HashingUtils::HashString("SPOT");


        FleetType GetFleetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_DEMAND_HASH)
          {
            return FleetType::ON_DEMAND;
          }
          else if (hashCode == SPOT_HASH)
          {
            return FleetType::SPOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetType>(hashCode);
          }

          return FleetType::NOT_SET;
        }

        Aws::String GetNameForFleetType(FleetType enumValue)
        {
          switch(enumValue)
          {
          case FleetType::ON_DEMAND:
            return "ON_DEMAND";
          case FleetType::SPOT:
            return "SPOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
