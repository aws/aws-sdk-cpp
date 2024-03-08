/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayEvent.h>
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
      namespace WirelessGatewayEventMapper
      {

        static const int CUPS_Request_HASH = HashingUtils::HashString("CUPS_Request");
        static const int Certificate_HASH = HashingUtils::HashString("Certificate");


        WirelessGatewayEvent GetWirelessGatewayEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUPS_Request_HASH)
          {
            return WirelessGatewayEvent::CUPS_Request;
          }
          else if (hashCode == Certificate_HASH)
          {
            return WirelessGatewayEvent::Certificate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessGatewayEvent>(hashCode);
          }

          return WirelessGatewayEvent::NOT_SET;
        }

        Aws::String GetNameForWirelessGatewayEvent(WirelessGatewayEvent enumValue)
        {
          switch(enumValue)
          {
          case WirelessGatewayEvent::NOT_SET:
            return {};
          case WirelessGatewayEvent::CUPS_Request:
            return "CUPS_Request";
          case WirelessGatewayEvent::Certificate:
            return "Certificate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessGatewayEventMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
