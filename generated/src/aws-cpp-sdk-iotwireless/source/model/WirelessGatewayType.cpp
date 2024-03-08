/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace WirelessGatewayTypeMapper
      {

        static const int LoRaWAN_HASH = HashingUtils::HashString("LoRaWAN");


        WirelessGatewayType GetWirelessGatewayTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LoRaWAN_HASH)
          {
            return WirelessGatewayType::LoRaWAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessGatewayType>(hashCode);
          }

          return WirelessGatewayType::NOT_SET;
        }

        Aws::String GetNameForWirelessGatewayType(WirelessGatewayType enumValue)
        {
          switch(enumValue)
          {
          case WirelessGatewayType::NOT_SET:
            return {};
          case WirelessGatewayType::LoRaWAN:
            return "LoRaWAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessGatewayTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
