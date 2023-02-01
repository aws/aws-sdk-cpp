/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/VehicleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace VehicleStateMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        VehicleState GetVehicleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return VehicleState::CREATED;
          }
          else if (hashCode == READY_HASH)
          {
            return VehicleState::READY;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return VehicleState::HEALTHY;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return VehicleState::SUSPENDED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VehicleState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VehicleState>(hashCode);
          }

          return VehicleState::NOT_SET;
        }

        Aws::String GetNameForVehicleState(VehicleState enumValue)
        {
          switch(enumValue)
          {
          case VehicleState::CREATED:
            return "CREATED";
          case VehicleState::READY:
            return "READY";
          case VehicleState::HEALTHY:
            return "HEALTHY";
          case VehicleState::SUSPENDED:
            return "SUSPENDED";
          case VehicleState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VehicleStateMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
