/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayServiceType.h>
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
      namespace WirelessGatewayServiceTypeMapper
      {

        static const int CUPS_HASH = HashingUtils::HashString("CUPS");
        static const int LNS_HASH = HashingUtils::HashString("LNS");


        WirelessGatewayServiceType GetWirelessGatewayServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUPS_HASH)
          {
            return WirelessGatewayServiceType::CUPS;
          }
          else if (hashCode == LNS_HASH)
          {
            return WirelessGatewayServiceType::LNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessGatewayServiceType>(hashCode);
          }

          return WirelessGatewayServiceType::NOT_SET;
        }

        Aws::String GetNameForWirelessGatewayServiceType(WirelessGatewayServiceType enumValue)
        {
          switch(enumValue)
          {
          case WirelessGatewayServiceType::NOT_SET:
            return {};
          case WirelessGatewayServiceType::CUPS:
            return "CUPS";
          case WirelessGatewayServiceType::LNS:
            return "LNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessGatewayServiceTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
