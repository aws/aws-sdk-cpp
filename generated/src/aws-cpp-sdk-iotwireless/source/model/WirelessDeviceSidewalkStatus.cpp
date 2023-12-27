/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessDeviceSidewalkStatus.h>
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
      namespace WirelessDeviceSidewalkStatusMapper
      {

        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");
        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        WirelessDeviceSidewalkStatus GetWirelessDeviceSidewalkStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONED_HASH)
          {
            return WirelessDeviceSidewalkStatus::PROVISIONED;
          }
          else if (hashCode == REGISTERED_HASH)
          {
            return WirelessDeviceSidewalkStatus::REGISTERED;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return WirelessDeviceSidewalkStatus::ACTIVATED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return WirelessDeviceSidewalkStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessDeviceSidewalkStatus>(hashCode);
          }

          return WirelessDeviceSidewalkStatus::NOT_SET;
        }

        Aws::String GetNameForWirelessDeviceSidewalkStatus(WirelessDeviceSidewalkStatus enumValue)
        {
          switch(enumValue)
          {
          case WirelessDeviceSidewalkStatus::NOT_SET:
            return {};
          case WirelessDeviceSidewalkStatus::PROVISIONED:
            return "PROVISIONED";
          case WirelessDeviceSidewalkStatus::REGISTERED:
            return "REGISTERED";
          case WirelessDeviceSidewalkStatus::ACTIVATED:
            return "ACTIVATED";
          case WirelessDeviceSidewalkStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessDeviceSidewalkStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
