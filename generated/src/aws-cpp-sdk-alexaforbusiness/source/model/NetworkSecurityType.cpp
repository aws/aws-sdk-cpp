/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/NetworkSecurityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace NetworkSecurityTypeMapper
      {

        static constexpr uint32_t OPEN_HASH = ConstExprHashingUtils::HashString("OPEN");
        static constexpr uint32_t WEP_HASH = ConstExprHashingUtils::HashString("WEP");
        static constexpr uint32_t WPA_PSK_HASH = ConstExprHashingUtils::HashString("WPA_PSK");
        static constexpr uint32_t WPA2_PSK_HASH = ConstExprHashingUtils::HashString("WPA2_PSK");
        static constexpr uint32_t WPA2_ENTERPRISE_HASH = ConstExprHashingUtils::HashString("WPA2_ENTERPRISE");


        NetworkSecurityType GetNetworkSecurityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return NetworkSecurityType::OPEN;
          }
          else if (hashCode == WEP_HASH)
          {
            return NetworkSecurityType::WEP;
          }
          else if (hashCode == WPA_PSK_HASH)
          {
            return NetworkSecurityType::WPA_PSK;
          }
          else if (hashCode == WPA2_PSK_HASH)
          {
            return NetworkSecurityType::WPA2_PSK;
          }
          else if (hashCode == WPA2_ENTERPRISE_HASH)
          {
            return NetworkSecurityType::WPA2_ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkSecurityType>(hashCode);
          }

          return NetworkSecurityType::NOT_SET;
        }

        Aws::String GetNameForNetworkSecurityType(NetworkSecurityType enumValue)
        {
          switch(enumValue)
          {
          case NetworkSecurityType::NOT_SET:
            return {};
          case NetworkSecurityType::OPEN:
            return "OPEN";
          case NetworkSecurityType::WEP:
            return "WEP";
          case NetworkSecurityType::WPA_PSK:
            return "WPA_PSK";
          case NetworkSecurityType::WPA2_PSK:
            return "WPA2_PSK";
          case NetworkSecurityType::WPA2_ENTERPRISE:
            return "WPA2_ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkSecurityTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
