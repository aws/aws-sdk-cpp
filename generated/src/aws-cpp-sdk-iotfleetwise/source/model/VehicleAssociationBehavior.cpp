/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/VehicleAssociationBehavior.h>
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
      namespace VehicleAssociationBehaviorMapper
      {

        static constexpr uint32_t CreateIotThing_HASH = ConstExprHashingUtils::HashString("CreateIotThing");
        static constexpr uint32_t ValidateIotThingExists_HASH = ConstExprHashingUtils::HashString("ValidateIotThingExists");


        VehicleAssociationBehavior GetVehicleAssociationBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateIotThing_HASH)
          {
            return VehicleAssociationBehavior::CreateIotThing;
          }
          else if (hashCode == ValidateIotThingExists_HASH)
          {
            return VehicleAssociationBehavior::ValidateIotThingExists;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VehicleAssociationBehavior>(hashCode);
          }

          return VehicleAssociationBehavior::NOT_SET;
        }

        Aws::String GetNameForVehicleAssociationBehavior(VehicleAssociationBehavior enumValue)
        {
          switch(enumValue)
          {
          case VehicleAssociationBehavior::NOT_SET:
            return {};
          case VehicleAssociationBehavior::CreateIotThing:
            return "CreateIotThing";
          case VehicleAssociationBehavior::ValidateIotThingExists:
            return "ValidateIotThingExists";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VehicleAssociationBehaviorMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
