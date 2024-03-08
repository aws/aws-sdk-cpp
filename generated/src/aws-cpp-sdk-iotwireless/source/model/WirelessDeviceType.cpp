/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceType.h>
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
      namespace WirelessDeviceTypeMapper
      {

        static const int Sidewalk_HASH = HashingUtils::HashString("Sidewalk");
        static const int LoRaWAN_HASH = HashingUtils::HashString("LoRaWAN");


        WirelessDeviceType GetWirelessDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sidewalk_HASH)
          {
            return WirelessDeviceType::Sidewalk;
          }
          else if (hashCode == LoRaWAN_HASH)
          {
            return WirelessDeviceType::LoRaWAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessDeviceType>(hashCode);
          }

          return WirelessDeviceType::NOT_SET;
        }

        Aws::String GetNameForWirelessDeviceType(WirelessDeviceType enumValue)
        {
          switch(enumValue)
          {
          case WirelessDeviceType::NOT_SET:
            return {};
          case WirelessDeviceType::Sidewalk:
            return "Sidewalk";
          case WirelessDeviceType::LoRaWAN:
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

      } // namespace WirelessDeviceTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
