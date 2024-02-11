/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/VehicleMiddlewareProtocol.h>
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
      namespace VehicleMiddlewareProtocolMapper
      {

        static const int ROS_2_HASH = HashingUtils::HashString("ROS_2");


        VehicleMiddlewareProtocol GetVehicleMiddlewareProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROS_2_HASH)
          {
            return VehicleMiddlewareProtocol::ROS_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VehicleMiddlewareProtocol>(hashCode);
          }

          return VehicleMiddlewareProtocol::NOT_SET;
        }

        Aws::String GetNameForVehicleMiddlewareProtocol(VehicleMiddlewareProtocol enumValue)
        {
          switch(enumValue)
          {
          case VehicleMiddlewareProtocol::NOT_SET:
            return {};
          case VehicleMiddlewareProtocol::ROS_2:
            return "ROS_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VehicleMiddlewareProtocolMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
