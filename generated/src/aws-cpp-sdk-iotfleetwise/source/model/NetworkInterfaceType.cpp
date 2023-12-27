﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NetworkInterfaceType.h>
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
      namespace NetworkInterfaceTypeMapper
      {

        static const int CAN_INTERFACE_HASH = HashingUtils::HashString("CAN_INTERFACE");
        static const int OBD_INTERFACE_HASH = HashingUtils::HashString("OBD_INTERFACE");
        static const int VEHICLE_MIDDLEWARE_HASH = HashingUtils::HashString("VEHICLE_MIDDLEWARE");
        static const int CUSTOMER_DECODED_INTERFACE_HASH = HashingUtils::HashString("CUSTOMER_DECODED_INTERFACE");


        NetworkInterfaceType GetNetworkInterfaceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAN_INTERFACE_HASH)
          {
            return NetworkInterfaceType::CAN_INTERFACE;
          }
          else if (hashCode == OBD_INTERFACE_HASH)
          {
            return NetworkInterfaceType::OBD_INTERFACE;
          }
          else if (hashCode == VEHICLE_MIDDLEWARE_HASH)
          {
            return NetworkInterfaceType::VEHICLE_MIDDLEWARE;
          }
          else if (hashCode == CUSTOMER_DECODED_INTERFACE_HASH)
          {
            return NetworkInterfaceType::CUSTOMER_DECODED_INTERFACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceType>(hashCode);
          }

          return NetworkInterfaceType::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceType(NetworkInterfaceType enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceType::NOT_SET:
            return {};
          case NetworkInterfaceType::CAN_INTERFACE:
            return "CAN_INTERFACE";
          case NetworkInterfaceType::OBD_INTERFACE:
            return "OBD_INTERFACE";
          case NetworkInterfaceType::VEHICLE_MIDDLEWARE:
            return "VEHICLE_MIDDLEWARE";
          case NetworkInterfaceType::CUSTOMER_DECODED_INTERFACE:
            return "CUSTOMER_DECODED_INTERFACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
