/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/ResourceViolation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

ResourceViolation::ResourceViolation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ResourceViolation& ResourceViolation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "AwsVPCSecurityGroupViolation") {
                m_awsVPCSecurityGroupViolation = AwsVPCSecurityGroupViolation(decoder);
                m_awsVPCSecurityGroupViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "AwsEc2NetworkInterfaceViolation") {
                m_awsEc2NetworkInterfaceViolation = AwsEc2NetworkInterfaceViolation(decoder);
                m_awsEc2NetworkInterfaceViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "AwsEc2InstanceViolation") {
                m_awsEc2InstanceViolation = AwsEc2InstanceViolation(decoder);
                m_awsEc2InstanceViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallMissingFirewallViolation") {
                m_networkFirewallMissingFirewallViolation = NetworkFirewallMissingFirewallViolation(decoder);
                m_networkFirewallMissingFirewallViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallMissingSubnetViolation") {
                m_networkFirewallMissingSubnetViolation = NetworkFirewallMissingSubnetViolation(decoder);
                m_networkFirewallMissingSubnetViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallMissingExpectedRTViolation") {
                m_networkFirewallMissingExpectedRTViolation = NetworkFirewallMissingExpectedRTViolation(decoder);
                m_networkFirewallMissingExpectedRTViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallPolicyModifiedViolation") {
                m_networkFirewallPolicyModifiedViolation = NetworkFirewallPolicyModifiedViolation(decoder);
                m_networkFirewallPolicyModifiedViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallInternetTrafficNotInspectedViolation") {
                m_networkFirewallInternetTrafficNotInspectedViolation = NetworkFirewallInternetTrafficNotInspectedViolation(decoder);
                m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallInvalidRouteConfigurationViolation") {
                m_networkFirewallInvalidRouteConfigurationViolation = NetworkFirewallInvalidRouteConfigurationViolation(decoder);
                m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallBlackHoleRouteDetectedViolation") {
                m_networkFirewallBlackHoleRouteDetectedViolation = NetworkFirewallBlackHoleRouteDetectedViolation(decoder);
                m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallUnexpectedFirewallRoutesViolation") {
                m_networkFirewallUnexpectedFirewallRoutesViolation = NetworkFirewallUnexpectedFirewallRoutesViolation(decoder);
                m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallUnexpectedGatewayRoutesViolation") {
                m_networkFirewallUnexpectedGatewayRoutesViolation = NetworkFirewallUnexpectedGatewayRoutesViolation(decoder);
                m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkFirewallMissingExpectedRoutesViolation") {
                m_networkFirewallMissingExpectedRoutesViolation = NetworkFirewallMissingExpectedRoutesViolation(decoder);
                m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsRuleGroupPriorityConflictViolation") {
                m_dnsRuleGroupPriorityConflictViolation = DnsRuleGroupPriorityConflictViolation(decoder);
                m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsDuplicateRuleGroupViolation") {
                m_dnsDuplicateRuleGroupViolation = DnsDuplicateRuleGroupViolation(decoder);
                m_dnsDuplicateRuleGroupViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "DnsRuleGroupLimitExceededViolation") {
                m_dnsRuleGroupLimitExceededViolation = DnsRuleGroupLimitExceededViolation(decoder);
                m_dnsRuleGroupLimitExceededViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "FirewallSubnetIsOutOfScopeViolation") {
                m_firewallSubnetIsOutOfScopeViolation = FirewallSubnetIsOutOfScopeViolation(decoder);
                m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "RouteHasOutOfScopeEndpointViolation") {
                m_routeHasOutOfScopeEndpointViolation = RouteHasOutOfScopeEndpointViolation(decoder);
                m_routeHasOutOfScopeEndpointViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "ThirdPartyFirewallMissingFirewallViolation") {
                m_thirdPartyFirewallMissingFirewallViolation = ThirdPartyFirewallMissingFirewallViolation(decoder);
                m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "ThirdPartyFirewallMissingSubnetViolation") {
                m_thirdPartyFirewallMissingSubnetViolation = ThirdPartyFirewallMissingSubnetViolation(decoder);
                m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "ThirdPartyFirewallMissingExpectedRouteTableViolation") {
                m_thirdPartyFirewallMissingExpectedRouteTableViolation = ThirdPartyFirewallMissingExpectedRouteTableViolation(decoder);
                m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "FirewallSubnetMissingVPCEndpointViolation") {
                m_firewallSubnetMissingVPCEndpointViolation = FirewallSubnetMissingVPCEndpointViolation(decoder);
                m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "InvalidNetworkAclEntriesViolation") {
                m_invalidNetworkAclEntriesViolation = InvalidNetworkAclEntriesViolation(decoder);
                m_invalidNetworkAclEntriesViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "PossibleRemediationActions") {
                m_possibleRemediationActions = PossibleRemediationActions(decoder);
                m_possibleRemediationActionsHasBeenSet = true;
              }

              else if (initialKeyStr == "WebACLHasIncompatibleConfigurationViolation") {
                m_webACLHasIncompatibleConfigurationViolation = WebACLHasIncompatibleConfigurationViolation(decoder);
                m_webACLHasIncompatibleConfigurationViolationHasBeenSet = true;
              }

              else if (initialKeyStr == "WebACLHasOutOfScopeResourcesViolation") {
                m_webACLHasOutOfScopeResourcesViolation = WebACLHasOutOfScopeResourcesViolation(decoder);
                m_webACLHasOutOfScopeResourcesViolationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ResourceViolation", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "AwsVPCSecurityGroupViolation") {
              m_awsVPCSecurityGroupViolation = AwsVPCSecurityGroupViolation(decoder);
              m_awsVPCSecurityGroupViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "AwsEc2NetworkInterfaceViolation") {
              m_awsEc2NetworkInterfaceViolation = AwsEc2NetworkInterfaceViolation(decoder);
              m_awsEc2NetworkInterfaceViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "AwsEc2InstanceViolation") {
              m_awsEc2InstanceViolation = AwsEc2InstanceViolation(decoder);
              m_awsEc2InstanceViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallMissingFirewallViolation") {
              m_networkFirewallMissingFirewallViolation = NetworkFirewallMissingFirewallViolation(decoder);
              m_networkFirewallMissingFirewallViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallMissingSubnetViolation") {
              m_networkFirewallMissingSubnetViolation = NetworkFirewallMissingSubnetViolation(decoder);
              m_networkFirewallMissingSubnetViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallMissingExpectedRTViolation") {
              m_networkFirewallMissingExpectedRTViolation = NetworkFirewallMissingExpectedRTViolation(decoder);
              m_networkFirewallMissingExpectedRTViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallPolicyModifiedViolation") {
              m_networkFirewallPolicyModifiedViolation = NetworkFirewallPolicyModifiedViolation(decoder);
              m_networkFirewallPolicyModifiedViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallInternetTrafficNotInspectedViolation") {
              m_networkFirewallInternetTrafficNotInspectedViolation = NetworkFirewallInternetTrafficNotInspectedViolation(decoder);
              m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallInvalidRouteConfigurationViolation") {
              m_networkFirewallInvalidRouteConfigurationViolation = NetworkFirewallInvalidRouteConfigurationViolation(decoder);
              m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallBlackHoleRouteDetectedViolation") {
              m_networkFirewallBlackHoleRouteDetectedViolation = NetworkFirewallBlackHoleRouteDetectedViolation(decoder);
              m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallUnexpectedFirewallRoutesViolation") {
              m_networkFirewallUnexpectedFirewallRoutesViolation = NetworkFirewallUnexpectedFirewallRoutesViolation(decoder);
              m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallUnexpectedGatewayRoutesViolation") {
              m_networkFirewallUnexpectedGatewayRoutesViolation = NetworkFirewallUnexpectedGatewayRoutesViolation(decoder);
              m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkFirewallMissingExpectedRoutesViolation") {
              m_networkFirewallMissingExpectedRoutesViolation = NetworkFirewallMissingExpectedRoutesViolation(decoder);
              m_networkFirewallMissingExpectedRoutesViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsRuleGroupPriorityConflictViolation") {
              m_dnsRuleGroupPriorityConflictViolation = DnsRuleGroupPriorityConflictViolation(decoder);
              m_dnsRuleGroupPriorityConflictViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsDuplicateRuleGroupViolation") {
              m_dnsDuplicateRuleGroupViolation = DnsDuplicateRuleGroupViolation(decoder);
              m_dnsDuplicateRuleGroupViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "DnsRuleGroupLimitExceededViolation") {
              m_dnsRuleGroupLimitExceededViolation = DnsRuleGroupLimitExceededViolation(decoder);
              m_dnsRuleGroupLimitExceededViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "FirewallSubnetIsOutOfScopeViolation") {
              m_firewallSubnetIsOutOfScopeViolation = FirewallSubnetIsOutOfScopeViolation(decoder);
              m_firewallSubnetIsOutOfScopeViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "RouteHasOutOfScopeEndpointViolation") {
              m_routeHasOutOfScopeEndpointViolation = RouteHasOutOfScopeEndpointViolation(decoder);
              m_routeHasOutOfScopeEndpointViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "ThirdPartyFirewallMissingFirewallViolation") {
              m_thirdPartyFirewallMissingFirewallViolation = ThirdPartyFirewallMissingFirewallViolation(decoder);
              m_thirdPartyFirewallMissingFirewallViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "ThirdPartyFirewallMissingSubnetViolation") {
              m_thirdPartyFirewallMissingSubnetViolation = ThirdPartyFirewallMissingSubnetViolation(decoder);
              m_thirdPartyFirewallMissingSubnetViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "ThirdPartyFirewallMissingExpectedRouteTableViolation") {
              m_thirdPartyFirewallMissingExpectedRouteTableViolation = ThirdPartyFirewallMissingExpectedRouteTableViolation(decoder);
              m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "FirewallSubnetMissingVPCEndpointViolation") {
              m_firewallSubnetMissingVPCEndpointViolation = FirewallSubnetMissingVPCEndpointViolation(decoder);
              m_firewallSubnetMissingVPCEndpointViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "InvalidNetworkAclEntriesViolation") {
              m_invalidNetworkAclEntriesViolation = InvalidNetworkAclEntriesViolation(decoder);
              m_invalidNetworkAclEntriesViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "PossibleRemediationActions") {
              m_possibleRemediationActions = PossibleRemediationActions(decoder);
              m_possibleRemediationActionsHasBeenSet = true;
            }

            else if (initialKeyStr == "WebACLHasIncompatibleConfigurationViolation") {
              m_webACLHasIncompatibleConfigurationViolation = WebACLHasIncompatibleConfigurationViolation(decoder);
              m_webACLHasIncompatibleConfigurationViolationHasBeenSet = true;
            }

            else if (initialKeyStr == "WebACLHasOutOfScopeResourcesViolation") {
              m_webACLHasOutOfScopeResourcesViolation = WebACLHasOutOfScopeResourcesViolation(decoder);
              m_webACLHasOutOfScopeResourcesViolationHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void ResourceViolation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_awsVPCSecurityGroupViolationHasBeenSet) {
    mapSize++;
  }
  if (m_awsEc2NetworkInterfaceViolationHasBeenSet) {
    mapSize++;
  }
  if (m_awsEc2InstanceViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallMissingFirewallViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallMissingSubnetViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallMissingExpectedRTViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallPolicyModifiedViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet) {
    mapSize++;
  }
  if (m_networkFirewallMissingExpectedRoutesViolationHasBeenSet) {
    mapSize++;
  }
  if (m_dnsRuleGroupPriorityConflictViolationHasBeenSet) {
    mapSize++;
  }
  if (m_dnsDuplicateRuleGroupViolationHasBeenSet) {
    mapSize++;
  }
  if (m_dnsRuleGroupLimitExceededViolationHasBeenSet) {
    mapSize++;
  }
  if (m_firewallSubnetIsOutOfScopeViolationHasBeenSet) {
    mapSize++;
  }
  if (m_routeHasOutOfScopeEndpointViolationHasBeenSet) {
    mapSize++;
  }
  if (m_thirdPartyFirewallMissingFirewallViolationHasBeenSet) {
    mapSize++;
  }
  if (m_thirdPartyFirewallMissingSubnetViolationHasBeenSet) {
    mapSize++;
  }
  if (m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet) {
    mapSize++;
  }
  if (m_firewallSubnetMissingVPCEndpointViolationHasBeenSet) {
    mapSize++;
  }
  if (m_invalidNetworkAclEntriesViolationHasBeenSet) {
    mapSize++;
  }
  if (m_possibleRemediationActionsHasBeenSet) {
    mapSize++;
  }
  if (m_webACLHasIncompatibleConfigurationViolationHasBeenSet) {
    mapSize++;
  }
  if (m_webACLHasOutOfScopeResourcesViolationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_awsVPCSecurityGroupViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AwsVPCSecurityGroupViolation"));
    m_awsVPCSecurityGroupViolation.CborEncode(encoder);
  }

  if (m_awsEc2NetworkInterfaceViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AwsEc2NetworkInterfaceViolation"));
    m_awsEc2NetworkInterfaceViolation.CborEncode(encoder);
  }

  if (m_awsEc2InstanceViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AwsEc2InstanceViolation"));
    m_awsEc2InstanceViolation.CborEncode(encoder);
  }

  if (m_networkFirewallMissingFirewallViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallMissingFirewallViolation"));
    m_networkFirewallMissingFirewallViolation.CborEncode(encoder);
  }

  if (m_networkFirewallMissingSubnetViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallMissingSubnetViolation"));
    m_networkFirewallMissingSubnetViolation.CborEncode(encoder);
  }

  if (m_networkFirewallMissingExpectedRTViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallMissingExpectedRTViolation"));
    m_networkFirewallMissingExpectedRTViolation.CborEncode(encoder);
  }

  if (m_networkFirewallPolicyModifiedViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallPolicyModifiedViolation"));
    m_networkFirewallPolicyModifiedViolation.CborEncode(encoder);
  }

  if (m_networkFirewallInternetTrafficNotInspectedViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallInternetTrafficNotInspectedViolation"));
    m_networkFirewallInternetTrafficNotInspectedViolation.CborEncode(encoder);
  }

  if (m_networkFirewallInvalidRouteConfigurationViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallInvalidRouteConfigurationViolation"));
    m_networkFirewallInvalidRouteConfigurationViolation.CborEncode(encoder);
  }

  if (m_networkFirewallBlackHoleRouteDetectedViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallBlackHoleRouteDetectedViolation"));
    m_networkFirewallBlackHoleRouteDetectedViolation.CborEncode(encoder);
  }

  if (m_networkFirewallUnexpectedFirewallRoutesViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallUnexpectedFirewallRoutesViolation"));
    m_networkFirewallUnexpectedFirewallRoutesViolation.CborEncode(encoder);
  }

  if (m_networkFirewallUnexpectedGatewayRoutesViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallUnexpectedGatewayRoutesViolation"));
    m_networkFirewallUnexpectedGatewayRoutesViolation.CborEncode(encoder);
  }

  if (m_networkFirewallMissingExpectedRoutesViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallMissingExpectedRoutesViolation"));
    m_networkFirewallMissingExpectedRoutesViolation.CborEncode(encoder);
  }

  if (m_dnsRuleGroupPriorityConflictViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsRuleGroupPriorityConflictViolation"));
    m_dnsRuleGroupPriorityConflictViolation.CborEncode(encoder);
  }

  if (m_dnsDuplicateRuleGroupViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsDuplicateRuleGroupViolation"));
    m_dnsDuplicateRuleGroupViolation.CborEncode(encoder);
  }

  if (m_dnsRuleGroupLimitExceededViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsRuleGroupLimitExceededViolation"));
    m_dnsRuleGroupLimitExceededViolation.CborEncode(encoder);
  }

  if (m_firewallSubnetIsOutOfScopeViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallSubnetIsOutOfScopeViolation"));
    m_firewallSubnetIsOutOfScopeViolation.CborEncode(encoder);
  }

  if (m_routeHasOutOfScopeEndpointViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RouteHasOutOfScopeEndpointViolation"));
    m_routeHasOutOfScopeEndpointViolation.CborEncode(encoder);
  }

  if (m_thirdPartyFirewallMissingFirewallViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThirdPartyFirewallMissingFirewallViolation"));
    m_thirdPartyFirewallMissingFirewallViolation.CborEncode(encoder);
  }

  if (m_thirdPartyFirewallMissingSubnetViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThirdPartyFirewallMissingSubnetViolation"));
    m_thirdPartyFirewallMissingSubnetViolation.CborEncode(encoder);
  }

  if (m_thirdPartyFirewallMissingExpectedRouteTableViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThirdPartyFirewallMissingExpectedRouteTableViolation"));
    m_thirdPartyFirewallMissingExpectedRouteTableViolation.CborEncode(encoder);
  }

  if (m_firewallSubnetMissingVPCEndpointViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallSubnetMissingVPCEndpointViolation"));
    m_firewallSubnetMissingVPCEndpointViolation.CborEncode(encoder);
  }

  if (m_invalidNetworkAclEntriesViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InvalidNetworkAclEntriesViolation"));
    m_invalidNetworkAclEntriesViolation.CborEncode(encoder);
  }

  if (m_possibleRemediationActionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PossibleRemediationActions"));
    m_possibleRemediationActions.CborEncode(encoder);
  }

  if (m_webACLHasIncompatibleConfigurationViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WebACLHasIncompatibleConfigurationViolation"));
    m_webACLHasIncompatibleConfigurationViolation.CborEncode(encoder);
  }

  if (m_webACLHasOutOfScopeResourcesViolationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WebACLHasOutOfScopeResourcesViolation"));
    m_webACLHasOutOfScopeResourcesViolation.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws