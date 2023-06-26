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

        static const int CreateIotThing_HASH = HashingUtils::HashString("CreateIotThing");
        static const int ValidateIotThingExists_HASH = HashingUtils::HashString("ValidateIotThingExists");


        VehicleAssociationBehavior GetVehicleAssociationBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
