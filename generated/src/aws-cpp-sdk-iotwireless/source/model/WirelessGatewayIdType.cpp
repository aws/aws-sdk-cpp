/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayIdType.h>
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
      namespace WirelessGatewayIdTypeMapper
      {

        static const int GatewayEui_HASH = HashingUtils::HashString("GatewayEui");
        static const int WirelessGatewayId_HASH = HashingUtils::HashString("WirelessGatewayId");
        static const int ThingName_HASH = HashingUtils::HashString("ThingName");


        WirelessGatewayIdType GetWirelessGatewayIdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GatewayEui_HASH)
          {
            return WirelessGatewayIdType::GatewayEui;
          }
          else if (hashCode == WirelessGatewayId_HASH)
          {
            return WirelessGatewayIdType::WirelessGatewayId;
          }
          else if (hashCode == ThingName_HASH)
          {
            return WirelessGatewayIdType::ThingName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessGatewayIdType>(hashCode);
          }

          return WirelessGatewayIdType::NOT_SET;
        }

        Aws::String GetNameForWirelessGatewayIdType(WirelessGatewayIdType enumValue)
        {
          switch(enumValue)
          {
          case WirelessGatewayIdType::NOT_SET:
            return {};
          case WirelessGatewayIdType::GatewayEui:
            return "GatewayEui";
          case WirelessGatewayIdType::WirelessGatewayId:
            return "WirelessGatewayId";
          case WirelessGatewayIdType::ThingName:
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

      } // namespace WirelessGatewayIdTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
