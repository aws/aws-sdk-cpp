/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceFrameInfo.h>
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
      namespace WirelessDeviceFrameInfoMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        WirelessDeviceFrameInfo GetWirelessDeviceFrameInfoForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return WirelessDeviceFrameInfo::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return WirelessDeviceFrameInfo::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessDeviceFrameInfo>(hashCode);
          }

          return WirelessDeviceFrameInfo::NOT_SET;
        }

        Aws::String GetNameForWirelessDeviceFrameInfo(WirelessDeviceFrameInfo enumValue)
        {
          switch(enumValue)
          {
          case WirelessDeviceFrameInfo::NOT_SET:
            return {};
          case WirelessDeviceFrameInfo::ENABLED:
            return "ENABLED";
          case WirelessDeviceFrameInfo::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessDeviceFrameInfoMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
