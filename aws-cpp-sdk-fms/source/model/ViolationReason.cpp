/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ViolationReason.h>
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
      namespace ViolationReasonMapper
      {

        static const int WEB_ACL_MISSING_RULE_GROUP_HASH = HashingUtils::HashString("WEB_ACL_MISSING_RULE_GROUP");
        static const int RESOURCE_MISSING_WEB_ACL_HASH = HashingUtils::HashString("RESOURCE_MISSING_WEB_ACL");
        static const int RESOURCE_INCORRECT_WEB_ACL_HASH = HashingUtils::HashString("RESOURCE_INCORRECT_WEB_ACL");
        static const int RESOURCE_MISSING_SHIELD_PROTECTION_HASH = HashingUtils::HashString("RESOURCE_MISSING_SHIELD_PROTECTION");
        static const int RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION_HASH = HashingUtils::HashString("RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION");
        static const int RESOURCE_MISSING_SECURITY_GROUP_HASH = HashingUtils::HashString("RESOURCE_MISSING_SECURITY_GROUP");
        static const int RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP_HASH = HashingUtils::HashString("RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP");
        static const int SECURITY_GROUP_UNUSED_HASH = HashingUtils::HashString("SECURITY_GROUP_UNUSED");
        static const int SECURITY_GROUP_REDUNDANT_HASH = HashingUtils::HashString("SECURITY_GROUP_REDUNDANT");
        static const int MISSING_FIREWALL_HASH = HashingUtils::HashString("MISSING_FIREWALL");
        static const int MISSING_FIREWALL_SUBNET_IN_AZ_HASH = HashingUtils::HashString("MISSING_FIREWALL_SUBNET_IN_AZ");
        static const int MISSING_EXPECTED_ROUTE_TABLE_HASH = HashingUtils::HashString("MISSING_EXPECTED_ROUTE_TABLE");
        static const int NETWORK_FIREWALL_POLICY_MODIFIED_HASH = HashingUtils::HashString("NETWORK_FIREWALL_POLICY_MODIFIED");


        ViolationReason GetViolationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEB_ACL_MISSING_RULE_GROUP_HASH)
          {
            return ViolationReason::WEB_ACL_MISSING_RULE_GROUP;
          }
          else if (hashCode == RESOURCE_MISSING_WEB_ACL_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_WEB_ACL;
          }
          else if (hashCode == RESOURCE_INCORRECT_WEB_ACL_HASH)
          {
            return ViolationReason::RESOURCE_INCORRECT_WEB_ACL;
          }
          else if (hashCode == RESOURCE_MISSING_SHIELD_PROTECTION_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_SHIELD_PROTECTION;
          }
          else if (hashCode == RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION;
          }
          else if (hashCode == RESOURCE_MISSING_SECURITY_GROUP_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_SECURITY_GROUP;
          }
          else if (hashCode == RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP_HASH)
          {
            return ViolationReason::RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP;
          }
          else if (hashCode == SECURITY_GROUP_UNUSED_HASH)
          {
            return ViolationReason::SECURITY_GROUP_UNUSED;
          }
          else if (hashCode == SECURITY_GROUP_REDUNDANT_HASH)
          {
            return ViolationReason::SECURITY_GROUP_REDUNDANT;
          }
          else if (hashCode == MISSING_FIREWALL_HASH)
          {
            return ViolationReason::MISSING_FIREWALL;
          }
          else if (hashCode == MISSING_FIREWALL_SUBNET_IN_AZ_HASH)
          {
            return ViolationReason::MISSING_FIREWALL_SUBNET_IN_AZ;
          }
          else if (hashCode == MISSING_EXPECTED_ROUTE_TABLE_HASH)
          {
            return ViolationReason::MISSING_EXPECTED_ROUTE_TABLE;
          }
          else if (hashCode == NETWORK_FIREWALL_POLICY_MODIFIED_HASH)
          {
            return ViolationReason::NETWORK_FIREWALL_POLICY_MODIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViolationReason>(hashCode);
          }

          return ViolationReason::NOT_SET;
        }

        Aws::String GetNameForViolationReason(ViolationReason enumValue)
        {
          switch(enumValue)
          {
          case ViolationReason::WEB_ACL_MISSING_RULE_GROUP:
            return "WEB_ACL_MISSING_RULE_GROUP";
          case ViolationReason::RESOURCE_MISSING_WEB_ACL:
            return "RESOURCE_MISSING_WEB_ACL";
          case ViolationReason::RESOURCE_INCORRECT_WEB_ACL:
            return "RESOURCE_INCORRECT_WEB_ACL";
          case ViolationReason::RESOURCE_MISSING_SHIELD_PROTECTION:
            return "RESOURCE_MISSING_SHIELD_PROTECTION";
          case ViolationReason::RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION:
            return "RESOURCE_MISSING_WEB_ACL_OR_SHIELD_PROTECTION";
          case ViolationReason::RESOURCE_MISSING_SECURITY_GROUP:
            return "RESOURCE_MISSING_SECURITY_GROUP";
          case ViolationReason::RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP:
            return "RESOURCE_VIOLATES_AUDIT_SECURITY_GROUP";
          case ViolationReason::SECURITY_GROUP_UNUSED:
            return "SECURITY_GROUP_UNUSED";
          case ViolationReason::SECURITY_GROUP_REDUNDANT:
            return "SECURITY_GROUP_REDUNDANT";
          case ViolationReason::MISSING_FIREWALL:
            return "MISSING_FIREWALL";
          case ViolationReason::MISSING_FIREWALL_SUBNET_IN_AZ:
            return "MISSING_FIREWALL_SUBNET_IN_AZ";
          case ViolationReason::MISSING_EXPECTED_ROUTE_TABLE:
            return "MISSING_EXPECTED_ROUTE_TABLE";
          case ViolationReason::NETWORK_FIREWALL_POLICY_MODIFIED:
            return "NETWORK_FIREWALL_POLICY_MODIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViolationReasonMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
