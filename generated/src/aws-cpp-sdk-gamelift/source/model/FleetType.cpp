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

        static constexpr uint32_t ON_DEMAND_HASH = ConstExprHashingUtils::HashString("ON_DEMAND");
        static constexpr uint32_t SPOT_HASH = ConstExprHashingUtils::HashString("SPOT");


        FleetType GetFleetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case FleetType::NOT_SET:
            return {};
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
