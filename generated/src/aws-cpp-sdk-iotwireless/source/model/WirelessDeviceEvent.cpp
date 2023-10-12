/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceEvent.h>
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
      namespace WirelessDeviceEventMapper
      {

        static constexpr uint32_t Join_HASH = ConstExprHashingUtils::HashString("Join");
        static constexpr uint32_t Rejoin_HASH = ConstExprHashingUtils::HashString("Rejoin");
        static constexpr uint32_t Uplink_Data_HASH = ConstExprHashingUtils::HashString("Uplink_Data");
        static constexpr uint32_t Downlink_Data_HASH = ConstExprHashingUtils::HashString("Downlink_Data");
        static constexpr uint32_t Registration_HASH = ConstExprHashingUtils::HashString("Registration");


        WirelessDeviceEvent GetWirelessDeviceEventForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Join_HASH)
          {
            return WirelessDeviceEvent::Join;
          }
          else if (hashCode == Rejoin_HASH)
          {
            return WirelessDeviceEvent::Rejoin;
          }
          else if (hashCode == Uplink_Data_HASH)
          {
            return WirelessDeviceEvent::Uplink_Data;
          }
          else if (hashCode == Downlink_Data_HASH)
          {
            return WirelessDeviceEvent::Downlink_Data;
          }
          else if (hashCode == Registration_HASH)
          {
            return WirelessDeviceEvent::Registration;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessDeviceEvent>(hashCode);
          }

          return WirelessDeviceEvent::NOT_SET;
        }

        Aws::String GetNameForWirelessDeviceEvent(WirelessDeviceEvent enumValue)
        {
          switch(enumValue)
          {
          case WirelessDeviceEvent::NOT_SET:
            return {};
          case WirelessDeviceEvent::Join:
            return "Join";
          case WirelessDeviceEvent::Rejoin:
            return "Rejoin";
          case WirelessDeviceEvent::Uplink_Data:
            return "Uplink_Data";
          case WirelessDeviceEvent::Downlink_Data:
            return "Downlink_Data";
          case WirelessDeviceEvent::Registration:
            return "Registration";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessDeviceEventMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
