/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceIdType.h>
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
      namespace WirelessDeviceIdTypeMapper
      {

        static const int WirelessDeviceId_HASH = HashingUtils::HashString("WirelessDeviceId");
        static const int DevEui_HASH = HashingUtils::HashString("DevEui");
        static const int ThingName_HASH = HashingUtils::HashString("ThingName");


        WirelessDeviceIdType GetWirelessDeviceIdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WirelessDeviceId_HASH)
          {
            return WirelessDeviceIdType::WirelessDeviceId;
          }
          else if (hashCode == DevEui_HASH)
          {
            return WirelessDeviceIdType::DevEui;
          }
          else if (hashCode == ThingName_HASH)
          {
            return WirelessDeviceIdType::ThingName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessDeviceIdType>(hashCode);
          }

          return WirelessDeviceIdType::NOT_SET;
        }

        Aws::String GetNameForWirelessDeviceIdType(WirelessDeviceIdType enumValue)
        {
          switch(enumValue)
          {
          case WirelessDeviceIdType::WirelessDeviceId:
            return "WirelessDeviceId";
          case WirelessDeviceIdType::DevEui:
            return "DevEui";
          case WirelessDeviceIdType::ThingName:
            return "ThingName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessDeviceIdTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
