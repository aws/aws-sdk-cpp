/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/SecurityServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace SecurityServiceTypeMapper
      {

        static constexpr uint32_t WAF_HASH = ConstExprHashingUtils::HashString("WAF");
        static constexpr uint32_t WAFV2_HASH = ConstExprHashingUtils::HashString("WAFV2");
        static constexpr uint32_t SHIELD_ADVANCED_HASH = ConstExprHashingUtils::HashString("SHIELD_ADVANCED");
        static constexpr uint32_t SECURITY_GROUPS_COMMON_HASH = ConstExprHashingUtils::HashString("SECURITY_GROUPS_COMMON");
        static constexpr uint32_t SECURITY_GROUPS_CONTENT_AUDIT_HASH = ConstExprHashingUtils::HashString("SECURITY_GROUPS_CONTENT_AUDIT");
        static constexpr uint32_t SECURITY_GROUPS_USAGE_AUDIT_HASH = ConstExprHashingUtils::HashString("SECURITY_GROUPS_USAGE_AUDIT");
        static constexpr uint32_t NETWORK_FIREWALL_HASH = ConstExprHashingUtils::HashString("NETWORK_FIREWALL");
        static constexpr uint32_t DNS_FIREWALL_HASH = ConstExprHashingUtils::HashString("DNS_FIREWALL");
        static constexpr uint32_t THIRD_PARTY_FIREWALL_HASH = ConstExprHashingUtils::HashString("THIRD_PARTY_FIREWALL");
        static constexpr uint32_t IMPORT_NETWORK_FIREWALL_HASH = ConstExprHashingUtils::HashString("IMPORT_NETWORK_FIREWALL");


        SecurityServiceType GetSecurityServiceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAF_HASH)
          {
            return SecurityServiceType::WAF;
          }
          else if (hashCode == WAFV2_HASH)
          {
            return SecurityServiceType::WAFV2;
          }
          else if (hashCode == SHIELD_ADVANCED_HASH)
          {
            return SecurityServiceType::SHIELD_ADVANCED;
          }
          else if (hashCode == SECURITY_GROUPS_COMMON_HASH)
          {
            return SecurityServiceType::SECURITY_GROUPS_COMMON;
          }
          else if (hashCode == SECURITY_GROUPS_CONTENT_AUDIT_HASH)
          {
            return SecurityServiceType::SECURITY_GROUPS_CONTENT_AUDIT;
          }
          else if (hashCode == SECURITY_GROUPS_USAGE_AUDIT_HASH)
          {
            return SecurityServiceType::SECURITY_GROUPS_USAGE_AUDIT;
          }
          else if (hashCode == NETWORK_FIREWALL_HASH)
          {
            return SecurityServiceType::NETWORK_FIREWALL;
          }
          else if (hashCode == DNS_FIREWALL_HASH)
          {
            return SecurityServiceType::DNS_FIREWALL;
          }
          else if (hashCode == THIRD_PARTY_FIREWALL_HASH)
          {
            return SecurityServiceType::THIRD_PARTY_FIREWALL;
          }
          else if (hashCode == IMPORT_NETWORK_FIREWALL_HASH)
          {
            return SecurityServiceType::IMPORT_NETWORK_FIREWALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityServiceType>(hashCode);
          }

          return SecurityServiceType::NOT_SET;
        }

        Aws::String GetNameForSecurityServiceType(SecurityServiceType enumValue)
        {
          switch(enumValue)
          {
          case SecurityServiceType::NOT_SET:
            return {};
          case SecurityServiceType::WAF:
            return "WAF";
          case SecurityServiceType::WAFV2:
            return "WAFV2";
          case SecurityServiceType::SHIELD_ADVANCED:
            return "SHIELD_ADVANCED";
          case SecurityServiceType::SECURITY_GROUPS_COMMON:
            return "SECURITY_GROUPS_COMMON";
          case SecurityServiceType::SECURITY_GROUPS_CONTENT_AUDIT:
            return "SECURITY_GROUPS_CONTENT_AUDIT";
          case SecurityServiceType::SECURITY_GROUPS_USAGE_AUDIT:
            return "SECURITY_GROUPS_USAGE_AUDIT";
          case SecurityServiceType::NETWORK_FIREWALL:
            return "NETWORK_FIREWALL";
          case SecurityServiceType::DNS_FIREWALL:
            return "DNS_FIREWALL";
          case SecurityServiceType::THIRD_PARTY_FIREWALL:
            return "THIRD_PARTY_FIREWALL";
          case SecurityServiceType::IMPORT_NETWORK_FIREWALL:
            return "IMPORT_NETWORK_FIREWALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityServiceTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
