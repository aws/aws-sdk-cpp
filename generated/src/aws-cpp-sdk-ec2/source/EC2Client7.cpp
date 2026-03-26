/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2EndpointProvider.h>
#include <aws/ec2/EC2ErrorMarshaller.h>
#include <aws/ec2/model/RejectVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/RejectVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/ReleaseAddressRequest.h>
#include <aws/ec2/model/ReleaseHostsRequest.h>
#include <aws/ec2/model/ReleaseIpamPoolAllocationRequest.h>
#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationRequest.h>
#include <aws/ec2/model/ReplaceImageCriteriaInAllowedImagesSettingsRequest.h>
#include <aws/ec2/model/ReplaceNetworkAclAssociationRequest.h>
#include <aws/ec2/model/ReplaceNetworkAclEntryRequest.h>
#include <aws/ec2/model/ReplaceRouteRequest.h>
#include <aws/ec2/model/ReplaceRouteTableAssociationRequest.h>
#include <aws/ec2/model/ReplaceTransitGatewayRouteRequest.h>
#include <aws/ec2/model/ReplaceVpnTunnelRequest.h>
#include <aws/ec2/model/ReportInstanceStatusRequest.h>
#include <aws/ec2/model/RequestSpotFleetRequest.h>
#include <aws/ec2/model/RequestSpotInstancesRequest.h>
#include <aws/ec2/model/ResetAddressAttributeRequest.h>
#include <aws/ec2/model/ResetEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/ResetFpgaImageAttributeRequest.h>
#include <aws/ec2/model/ResetImageAttributeRequest.h>
#include <aws/ec2/model/ResetInstanceAttributeRequest.h>
#include <aws/ec2/model/ResetNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ResetSnapshotAttributeRequest.h>
#include <aws/ec2/model/RestoreAddressToClassicRequest.h>
#include <aws/ec2/model/RestoreImageFromRecycleBinRequest.h>
#include <aws/ec2/model/RestoreManagedPrefixListVersionRequest.h>
#include <aws/ec2/model/RestoreSnapshotFromRecycleBinRequest.h>
#include <aws/ec2/model/RestoreSnapshotTierRequest.h>
#include <aws/ec2/model/RestoreVolumeFromRecycleBinRequest.h>
#include <aws/ec2/model/RevokeClientVpnIngressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/RunInstancesRequest.h>
#include <aws/ec2/model/RunScheduledInstancesRequest.h>
#include <aws/ec2/model/SearchLocalGatewayRoutesRequest.h>
#include <aws/ec2/model/SearchTransitGatewayMulticastGroupsRequest.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/SendDiagnosticInterruptRequest.h>
#include <aws/ec2/model/StartDeclarativePoliciesReportRequest.h>
#include <aws/ec2/model/StartInstancesRequest.h>
#include <aws/ec2/model/StartNetworkInsightsAccessScopeAnalysisRequest.h>
#include <aws/ec2/model/StartNetworkInsightsAnalysisRequest.h>
#include <aws/ec2/model/StartVpcEndpointServicePrivateDnsVerificationRequest.h>
#include <aws/ec2/model/StopInstancesRequest.h>
#include <aws/ec2/model/TerminateClientVpnConnectionsRequest.h>
#include <aws/ec2/model/TerminateInstancesRequest.h>
#include <aws/ec2/model/UnassignIpv6AddressesRequest.h>
#include <aws/ec2/model/UnassignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/UnassignPrivateNatGatewayAddressRequest.h>
#include <aws/ec2/model/UnlockSnapshotRequest.h>
#include <aws/ec2/model/UnmonitorInstancesRequest.h>
#include <aws/ec2/model/UpdateCapacityManagerOrganizationsAccessRequest.h>
#include <aws/ec2/model/UpdateInterruptibleCapacityReservationAllocationRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsIngressRequest.h>
#include <aws/ec2/model/WithdrawByoipCidrRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2;
using namespace Aws::EC2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

RejectVpcEndpointConnectionsOutcome EC2Client::RejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest& request) const {
  return RejectVpcEndpointConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectVpcPeeringConnectionOutcome EC2Client::RejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest& request) const {
  return RejectVpcPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleaseAddressOutcome EC2Client::ReleaseAddress(const ReleaseAddressRequest& request) const {
  return ReleaseAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleaseHostsOutcome EC2Client::ReleaseHosts(const ReleaseHostsRequest& request) const {
  return ReleaseHostsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleaseIpamPoolAllocationOutcome EC2Client::ReleaseIpamPoolAllocation(const ReleaseIpamPoolAllocationRequest& request) const {
  return ReleaseIpamPoolAllocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceIamInstanceProfileAssociationOutcome EC2Client::ReplaceIamInstanceProfileAssociation(
    const ReplaceIamInstanceProfileAssociationRequest& request) const {
  return ReplaceIamInstanceProfileAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceImageCriteriaInAllowedImagesSettingsOutcome EC2Client::ReplaceImageCriteriaInAllowedImagesSettings(
    const ReplaceImageCriteriaInAllowedImagesSettingsRequest& request) const {
  return ReplaceImageCriteriaInAllowedImagesSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceNetworkAclAssociationOutcome EC2Client::ReplaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest& request) const {
  return ReplaceNetworkAclAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceNetworkAclEntryOutcome EC2Client::ReplaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest& request) const {
  return ReplaceNetworkAclEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceRouteOutcome EC2Client::ReplaceRoute(const ReplaceRouteRequest& request) const {
  return ReplaceRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceRouteTableAssociationOutcome EC2Client::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest& request) const {
  return ReplaceRouteTableAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceTransitGatewayRouteOutcome EC2Client::ReplaceTransitGatewayRoute(const ReplaceTransitGatewayRouteRequest& request) const {
  return ReplaceTransitGatewayRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplaceVpnTunnelOutcome EC2Client::ReplaceVpnTunnel(const ReplaceVpnTunnelRequest& request) const {
  return ReplaceVpnTunnelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReportInstanceStatusOutcome EC2Client::ReportInstanceStatus(const ReportInstanceStatusRequest& request) const {
  return ReportInstanceStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestSpotFleetOutcome EC2Client::RequestSpotFleet(const RequestSpotFleetRequest& request) const {
  return RequestSpotFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestSpotInstancesOutcome EC2Client::RequestSpotInstances(const RequestSpotInstancesRequest& request) const {
  return RequestSpotInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetAddressAttributeOutcome EC2Client::ResetAddressAttribute(const ResetAddressAttributeRequest& request) const {
  return ResetAddressAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetEbsDefaultKmsKeyIdOutcome EC2Client::ResetEbsDefaultKmsKeyId(const ResetEbsDefaultKmsKeyIdRequest& request) const {
  return ResetEbsDefaultKmsKeyIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetFpgaImageAttributeOutcome EC2Client::ResetFpgaImageAttribute(const ResetFpgaImageAttributeRequest& request) const {
  return ResetFpgaImageAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetImageAttributeOutcome EC2Client::ResetImageAttribute(const ResetImageAttributeRequest& request) const {
  return ResetImageAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetInstanceAttributeOutcome EC2Client::ResetInstanceAttribute(const ResetInstanceAttributeRequest& request) const {
  return ResetInstanceAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetNetworkInterfaceAttributeOutcome EC2Client::ResetNetworkInterfaceAttribute(
    const ResetNetworkInterfaceAttributeRequest& request) const {
  return ResetNetworkInterfaceAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetSnapshotAttributeOutcome EC2Client::ResetSnapshotAttribute(const ResetSnapshotAttributeRequest& request) const {
  return ResetSnapshotAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreAddressToClassicOutcome EC2Client::RestoreAddressToClassic(const RestoreAddressToClassicRequest& request) const {
  return RestoreAddressToClassicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreImageFromRecycleBinOutcome EC2Client::RestoreImageFromRecycleBin(const RestoreImageFromRecycleBinRequest& request) const {
  return RestoreImageFromRecycleBinOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreManagedPrefixListVersionOutcome EC2Client::RestoreManagedPrefixListVersion(
    const RestoreManagedPrefixListVersionRequest& request) const {
  return RestoreManagedPrefixListVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreSnapshotFromRecycleBinOutcome EC2Client::RestoreSnapshotFromRecycleBin(const RestoreSnapshotFromRecycleBinRequest& request) const {
  return RestoreSnapshotFromRecycleBinOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreSnapshotTierOutcome EC2Client::RestoreSnapshotTier(const RestoreSnapshotTierRequest& request) const {
  return RestoreSnapshotTierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreVolumeFromRecycleBinOutcome EC2Client::RestoreVolumeFromRecycleBin(const RestoreVolumeFromRecycleBinRequest& request) const {
  return RestoreVolumeFromRecycleBinOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeClientVpnIngressOutcome EC2Client::RevokeClientVpnIngress(const RevokeClientVpnIngressRequest& request) const {
  return RevokeClientVpnIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeSecurityGroupEgressOutcome EC2Client::RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest& request) const {
  return RevokeSecurityGroupEgressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeSecurityGroupIngressOutcome EC2Client::RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest& request) const {
  return RevokeSecurityGroupIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RunInstancesOutcome EC2Client::RunInstances(const RunInstancesRequest& request) const {
  return RunInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RunScheduledInstancesOutcome EC2Client::RunScheduledInstances(const RunScheduledInstancesRequest& request) const {
  return RunScheduledInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchLocalGatewayRoutesOutcome EC2Client::SearchLocalGatewayRoutes(const SearchLocalGatewayRoutesRequest& request) const {
  return SearchLocalGatewayRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTransitGatewayMulticastGroupsOutcome EC2Client::SearchTransitGatewayMulticastGroups(
    const SearchTransitGatewayMulticastGroupsRequest& request) const {
  return SearchTransitGatewayMulticastGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTransitGatewayRoutesOutcome EC2Client::SearchTransitGatewayRoutes(const SearchTransitGatewayRoutesRequest& request) const {
  return SearchTransitGatewayRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendDiagnosticInterruptOutcome EC2Client::SendDiagnosticInterrupt(const SendDiagnosticInterruptRequest& request) const {
  return SendDiagnosticInterruptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDeclarativePoliciesReportOutcome EC2Client::StartDeclarativePoliciesReport(
    const StartDeclarativePoliciesReportRequest& request) const {
  return StartDeclarativePoliciesReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInstancesOutcome EC2Client::StartInstances(const StartInstancesRequest& request) const {
  return StartInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkInsightsAccessScopeAnalysisOutcome EC2Client::StartNetworkInsightsAccessScopeAnalysis(
    const StartNetworkInsightsAccessScopeAnalysisRequest& request) const {
  return StartNetworkInsightsAccessScopeAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartNetworkInsightsAnalysisOutcome EC2Client::StartNetworkInsightsAnalysis(const StartNetworkInsightsAnalysisRequest& request) const {
  return StartNetworkInsightsAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartVpcEndpointServicePrivateDnsVerificationOutcome EC2Client::StartVpcEndpointServicePrivateDnsVerification(
    const StartVpcEndpointServicePrivateDnsVerificationRequest& request) const {
  return StartVpcEndpointServicePrivateDnsVerificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const {
  return StopInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateClientVpnConnectionsOutcome EC2Client::TerminateClientVpnConnections(const TerminateClientVpnConnectionsRequest& request) const {
  return TerminateClientVpnConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const {
  return TerminateInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnassignIpv6AddressesOutcome EC2Client::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest& request) const {
  return UnassignIpv6AddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const {
  return UnassignPrivateIpAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnassignPrivateNatGatewayAddressOutcome EC2Client::UnassignPrivateNatGatewayAddress(
    const UnassignPrivateNatGatewayAddressRequest& request) const {
  return UnassignPrivateNatGatewayAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnlockSnapshotOutcome EC2Client::UnlockSnapshot(const UnlockSnapshotRequest& request) const {
  return UnlockSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const {
  return UnmonitorInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCapacityManagerOrganizationsAccessOutcome EC2Client::UpdateCapacityManagerOrganizationsAccess(
    const UpdateCapacityManagerOrganizationsAccessRequest& request) const {
  return UpdateCapacityManagerOrganizationsAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInterruptibleCapacityReservationAllocationOutcome EC2Client::UpdateInterruptibleCapacityReservationAllocation(
    const UpdateInterruptibleCapacityReservationAllocationRequest& request) const {
  return UpdateInterruptibleCapacityReservationAllocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecurityGroupRuleDescriptionsEgressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsEgress(
    const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const {
  return UpdateSecurityGroupRuleDescriptionsEgressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecurityGroupRuleDescriptionsIngressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsIngress(
    const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const {
  return UpdateSecurityGroupRuleDescriptionsIngressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

WithdrawByoipCidrOutcome EC2Client::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const {
  return WithdrawByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
