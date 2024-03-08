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
        static const int FMS_CREATED_SECURITY_GROUP_EDITED_HASH = HashingUtils::HashString("FMS_CREATED_SECURITY_GROUP_EDITED");
        static const int MISSING_FIREWALL_HASH = HashingUtils::HashString("MISSING_FIREWALL");
        static const int MISSING_FIREWALL_SUBNET_IN_AZ_HASH = HashingUtils::HashString("MISSING_FIREWALL_SUBNET_IN_AZ");
        static const int MISSING_EXPECTED_ROUTE_TABLE_HASH = HashingUtils::HashString("MISSING_EXPECTED_ROUTE_TABLE");
        static const int NETWORK_FIREWALL_POLICY_MODIFIED_HASH = HashingUtils::HashString("NETWORK_FIREWALL_POLICY_MODIFIED");
        static const int FIREWALL_SUBNET_IS_OUT_OF_SCOPE_HASH = HashingUtils::HashString("FIREWALL_SUBNET_IS_OUT_OF_SCOPE");
        static const int INTERNET_GATEWAY_MISSING_EXPECTED_ROUTE_HASH = HashingUtils::HashString("INTERNET_GATEWAY_MISSING_EXPECTED_ROUTE");
        static const int FIREWALL_SUBNET_MISSING_EXPECTED_ROUTE_HASH = HashingUtils::HashString("FIREWALL_SUBNET_MISSING_EXPECTED_ROUTE");
        static const int UNEXPECTED_FIREWALL_ROUTES_HASH = HashingUtils::HashString("UNEXPECTED_FIREWALL_ROUTES");
        static const int UNEXPECTED_TARGET_GATEWAY_ROUTES_HASH = HashingUtils::HashString("UNEXPECTED_TARGET_GATEWAY_ROUTES");
        static const int TRAFFIC_INSPECTION_CROSSES_AZ_BOUNDARY_HASH = HashingUtils::HashString("TRAFFIC_INSPECTION_CROSSES_AZ_BOUNDARY");
        static const int INVALID_ROUTE_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_ROUTE_CONFIGURATION");
        static const int MISSING_TARGET_GATEWAY_HASH = HashingUtils::HashString("MISSING_TARGET_GATEWAY");
        static const int INTERNET_TRAFFIC_NOT_INSPECTED_HASH = HashingUtils::HashString("INTERNET_TRAFFIC_NOT_INSPECTED");
        static const int BLACK_HOLE_ROUTE_DETECTED_HASH = HashingUtils::HashString("BLACK_HOLE_ROUTE_DETECTED");
        static const int BLACK_HOLE_ROUTE_DETECTED_IN_FIREWALL_SUBNET_HASH = HashingUtils::HashString("BLACK_HOLE_ROUTE_DETECTED_IN_FIREWALL_SUBNET");
        static const int RESOURCE_MISSING_DNS_FIREWALL_HASH = HashingUtils::HashString("RESOURCE_MISSING_DNS_FIREWALL");
        static const int ROUTE_HAS_OUT_OF_SCOPE_ENDPOINT_HASH = HashingUtils::HashString("ROUTE_HAS_OUT_OF_SCOPE_ENDPOINT");
        static const int FIREWALL_SUBNET_MISSING_VPCE_ENDPOINT_HASH = HashingUtils::HashString("FIREWALL_SUBNET_MISSING_VPCE_ENDPOINT");


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
          else if (hashCode == FMS_CREATED_SECURITY_GROUP_EDITED_HASH)
          {
            return ViolationReason::FMS_CREATED_SECURITY_GROUP_EDITED;
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
          else if (hashCode == FIREWALL_SUBNET_IS_OUT_OF_SCOPE_HASH)
          {
            return ViolationReason::FIREWALL_SUBNET_IS_OUT_OF_SCOPE;
          }
          else if (hashCode == INTERNET_GATEWAY_MISSING_EXPECTED_ROUTE_HASH)
          {
            return ViolationReason::INTERNET_GATEWAY_MISSING_EXPECTED_ROUTE;
          }
          else if (hashCode == FIREWALL_SUBNET_MISSING_EXPECTED_ROUTE_HASH)
          {
            return ViolationReason::FIREWALL_SUBNET_MISSING_EXPECTED_ROUTE;
          }
          else if (hashCode == UNEXPECTED_FIREWALL_ROUTES_HASH)
          {
            return ViolationReason::UNEXPECTED_FIREWALL_ROUTES;
          }
          else if (hashCode == UNEXPECTED_TARGET_GATEWAY_ROUTES_HASH)
          {
            return ViolationReason::UNEXPECTED_TARGET_GATEWAY_ROUTES;
          }
          else if (hashCode == TRAFFIC_INSPECTION_CROSSES_AZ_BOUNDARY_HASH)
          {
            return ViolationReason::TRAFFIC_INSPECTION_CROSSES_AZ_BOUNDARY;
          }
          else if (hashCode == INVALID_ROUTE_CONFIGURATION_HASH)
          {
            return ViolationReason::INVALID_ROUTE_CONFIGURATION;
          }
          else if (hashCode == MISSING_TARGET_GATEWAY_HASH)
          {
            return ViolationReason::MISSING_TARGET_GATEWAY;
          }
          else if (hashCode == INTERNET_TRAFFIC_NOT_INSPECTED_HASH)
          {
            return ViolationReason::INTERNET_TRAFFIC_NOT_INSPECTED;
          }
          else if (hashCode == BLACK_HOLE_ROUTE_DETECTED_HASH)
          {
            return ViolationReason::BLACK_HOLE_ROUTE_DETECTED;
          }
          else if (hashCode == BLACK_HOLE_ROUTE_DETECTED_IN_FIREWALL_SUBNET_HASH)
          {
            return ViolationReason::BLACK_HOLE_ROUTE_DETECTED_IN_FIREWALL_SUBNET;
          }
          else if (hashCode == RESOURCE_MISSING_DNS_FIREWALL_HASH)
          {
            return ViolationReason::RESOURCE_MISSING_DNS_FIREWALL;
          }
          else if (hashCode == ROUTE_HAS_OUT_OF_SCOPE_ENDPOINT_HASH)
          {
            return ViolationReason::ROUTE_HAS_OUT_OF_SCOPE_ENDPOINT;
          }
          else if (hashCode == FIREWALL_SUBNET_MISSING_VPCE_ENDPOINT_HASH)
          {
            return ViolationReason::FIREWALL_SUBNET_MISSING_VPCE_ENDPOINT;
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
          case ViolationReason::NOT_SET:
            return {};
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
          case ViolationReason::FMS_CREATED_SECURITY_GROUP_EDITED:
            return "FMS_CREATED_SECURITY_GROUP_EDITED";
          case ViolationReason::MISSING_FIREWALL:
            return "MISSING_FIREWALL";
          case ViolationReason::MISSING_FIREWALL_SUBNET_IN_AZ:
            return "MISSING_FIREWALL_SUBNET_IN_AZ";
          case ViolationReason::MISSING_EXPECTED_ROUTE_TABLE:
            return "MISSING_EXPECTED_ROUTE_TABLE";
          case ViolationReason::NETWORK_FIREWALL_POLICY_MODIFIED:
            return "NETWORK_FIREWALL_POLICY_MODIFIED";
          case ViolationReason::FIREWALL_SUBNET_IS_OUT_OF_SCOPE:
            return "FIREWALL_SUBNET_IS_OUT_OF_SCOPE";
          case ViolationReason::INTERNET_GATEWAY_MISSING_EXPECTED_ROUTE:
            return "INTERNET_GATEWAY_MISSING_EXPECTED_ROUTE";
          case ViolationReason::FIREWALL_SUBNET_MISSING_EXPECTED_ROUTE:
            return "FIREWALL_SUBNET_MISSING_EXPECTED_ROUTE";
          case ViolationReason::UNEXPECTED_FIREWALL_ROUTES:
            return "UNEXPECTED_FIREWALL_ROUTES";
          case ViolationReason::UNEXPECTED_TARGET_GATEWAY_ROUTES:
            return "UNEXPECTED_TARGET_GATEWAY_ROUTES";
          case ViolationReason::TRAFFIC_INSPECTION_CROSSES_AZ_BOUNDARY:
            return "TRAFFIC_INSPECTION_CROSSES_AZ_BOUNDARY";
          case ViolationReason::INVALID_ROUTE_CONFIGURATION:
            return "INVALID_ROUTE_CONFIGURATION";
          case ViolationReason::MISSING_TARGET_GATEWAY:
            return "MISSING_TARGET_GATEWAY";
          case ViolationReason::INTERNET_TRAFFIC_NOT_INSPECTED:
            return "INTERNET_TRAFFIC_NOT_INSPECTED";
          case ViolationReason::BLACK_HOLE_ROUTE_DETECTED:
            return "BLACK_HOLE_ROUTE_DETECTED";
          case ViolationReason::BLACK_HOLE_ROUTE_DETECTED_IN_FIREWALL_SUBNET:
            return "BLACK_HOLE_ROUTE_DETECTED_IN_FIREWALL_SUBNET";
          case ViolationReason::RESOURCE_MISSING_DNS_FIREWALL:
            return "RESOURCE_MISSING_DNS_FIREWALL";
          case ViolationReason::ROUTE_HAS_OUT_OF_SCOPE_ENDPOINT:
            return "ROUTE_HAS_OUT_OF_SCOPE_ENDPOINT";
          case ViolationReason::FIREWALL_SUBNET_MISSING_VPCE_ENDPOINT:
            return "FIREWALL_SUBNET_MISSING_VPCE_ENDPOINT";
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
