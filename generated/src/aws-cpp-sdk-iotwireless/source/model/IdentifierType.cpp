/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/IdentifierType.h>
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
      namespace IdentifierTypeMapper
      {

        static constexpr uint32_t PartnerAccountId_HASH = ConstExprHashingUtils::HashString("PartnerAccountId");
        static constexpr uint32_t DevEui_HASH = ConstExprHashingUtils::HashString("DevEui");
        static constexpr uint32_t GatewayEui_HASH = ConstExprHashingUtils::HashString("GatewayEui");
        static constexpr uint32_t WirelessDeviceId_HASH = ConstExprHashingUtils::HashString("WirelessDeviceId");
        static constexpr uint32_t WirelessGatewayId_HASH = ConstExprHashingUtils::HashString("WirelessGatewayId");


        IdentifierType GetIdentifierTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PartnerAccountId_HASH)
          {
            return IdentifierType::PartnerAccountId;
          }
          else if (hashCode == DevEui_HASH)
          {
            return IdentifierType::DevEui;
          }
          else if (hashCode == GatewayEui_HASH)
          {
            return IdentifierType::GatewayEui;
          }
          else if (hashCode == WirelessDeviceId_HASH)
          {
            return IdentifierType::WirelessDeviceId;
          }
          else if (hashCode == WirelessGatewayId_HASH)
          {
            return IdentifierType::WirelessGatewayId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentifierType>(hashCode);
          }

          return IdentifierType::NOT_SET;
        }

        Aws::String GetNameForIdentifierType(IdentifierType enumValue)
        {
          switch(enumValue)
          {
          case IdentifierType::NOT_SET:
            return {};
          case IdentifierType::PartnerAccountId:
            return "PartnerAccountId";
          case IdentifierType::DevEui:
            return "DevEui";
          case IdentifierType::GatewayEui:
            return "GatewayEui";
          case IdentifierType::WirelessDeviceId:
            return "WirelessDeviceId";
          case IdentifierType::WirelessGatewayId:
            return "WirelessGatewayId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentifierTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
