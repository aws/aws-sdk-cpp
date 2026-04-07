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
#include <aws/ec2/model/RejectTransitGatewayVpcAttachmentRequest.h>
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
#include <aws/ec2/model/UpdateCapacityManagerMonitoredTagKeysRequest.h>
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

RejectTransitGatewayVpcAttachmentOutcome EC2Client::RejectTransitGatewayVpcAttachment(
    const RejectTransitGatewayVpcAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectTransitGatewayVpcAttachmentOutcome(result.GetResultWithOwnership())
                            : RejectTransitGatewayVpcAttachmentOutcome(std::move(result.GetError()));
}

RejectVpcEndpointConnectionsOutcome EC2Client::RejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectVpcEndpointConnectionsOutcome(result.GetResultWithOwnership())
                            : RejectVpcEndpointConnectionsOutcome(std::move(result.GetError()));
}

RejectVpcPeeringConnectionOutcome EC2Client::RejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectVpcPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : RejectVpcPeeringConnectionOutcome(std::move(result.GetError()));
}

ReleaseAddressOutcome EC2Client::ReleaseAddress(const ReleaseAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReleaseAddressOutcome(result.GetResultWithOwnership()) : ReleaseAddressOutcome(std::move(result.GetError()));
}

ReleaseHostsOutcome EC2Client::ReleaseHosts(const ReleaseHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReleaseHostsOutcome(result.GetResultWithOwnership()) : ReleaseHostsOutcome(std::move(result.GetError()));
}

ReleaseIpamPoolAllocationOutcome EC2Client::ReleaseIpamPoolAllocation(const ReleaseIpamPoolAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReleaseIpamPoolAllocationOutcome(result.GetResultWithOwnership())
                            : ReleaseIpamPoolAllocationOutcome(std::move(result.GetError()));
}

ReplaceIamInstanceProfileAssociationOutcome EC2Client::ReplaceIamInstanceProfileAssociation(
    const ReplaceIamInstanceProfileAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceIamInstanceProfileAssociationOutcome(result.GetResultWithOwnership())
                            : ReplaceIamInstanceProfileAssociationOutcome(std::move(result.GetError()));
}

ReplaceImageCriteriaInAllowedImagesSettingsOutcome EC2Client::ReplaceImageCriteriaInAllowedImagesSettings(
    const ReplaceImageCriteriaInAllowedImagesSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceImageCriteriaInAllowedImagesSettingsOutcome(result.GetResultWithOwnership())
                            : ReplaceImageCriteriaInAllowedImagesSettingsOutcome(std::move(result.GetError()));
}

ReplaceNetworkAclAssociationOutcome EC2Client::ReplaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceNetworkAclAssociationOutcome(result.GetResultWithOwnership())
                            : ReplaceNetworkAclAssociationOutcome(std::move(result.GetError()));
}

ReplaceNetworkAclEntryOutcome EC2Client::ReplaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceNetworkAclEntryOutcome(result.GetResultWithOwnership())
                            : ReplaceNetworkAclEntryOutcome(std::move(result.GetError()));
}

ReplaceRouteOutcome EC2Client::ReplaceRoute(const ReplaceRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceRouteOutcome(result.GetResultWithOwnership()) : ReplaceRouteOutcome(std::move(result.GetError()));
}

ReplaceRouteTableAssociationOutcome EC2Client::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceRouteTableAssociationOutcome(result.GetResultWithOwnership())
                            : ReplaceRouteTableAssociationOutcome(std::move(result.GetError()));
}

ReplaceTransitGatewayRouteOutcome EC2Client::ReplaceTransitGatewayRoute(const ReplaceTransitGatewayRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceTransitGatewayRouteOutcome(result.GetResultWithOwnership())
                            : ReplaceTransitGatewayRouteOutcome(std::move(result.GetError()));
}

ReplaceVpnTunnelOutcome EC2Client::ReplaceVpnTunnel(const ReplaceVpnTunnelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplaceVpnTunnelOutcome(result.GetResultWithOwnership())
                            : ReplaceVpnTunnelOutcome(std::move(result.GetError()));
}

ReportInstanceStatusOutcome EC2Client::ReportInstanceStatus(const ReportInstanceStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReportInstanceStatusOutcome(result.GetResultWithOwnership())
                            : ReportInstanceStatusOutcome(std::move(result.GetError()));
}

RequestSpotFleetOutcome EC2Client::RequestSpotFleet(const RequestSpotFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestSpotFleetOutcome(result.GetResultWithOwnership())
                            : RequestSpotFleetOutcome(std::move(result.GetError()));
}

RequestSpotInstancesOutcome EC2Client::RequestSpotInstances(const RequestSpotInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestSpotInstancesOutcome(result.GetResultWithOwnership())
                            : RequestSpotInstancesOutcome(std::move(result.GetError()));
}

ResetAddressAttributeOutcome EC2Client::ResetAddressAttribute(const ResetAddressAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetAddressAttributeOutcome(result.GetResultWithOwnership())
                            : ResetAddressAttributeOutcome(std::move(result.GetError()));
}

ResetEbsDefaultKmsKeyIdOutcome EC2Client::ResetEbsDefaultKmsKeyId(const ResetEbsDefaultKmsKeyIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetEbsDefaultKmsKeyIdOutcome(result.GetResultWithOwnership())
                            : ResetEbsDefaultKmsKeyIdOutcome(std::move(result.GetError()));
}

ResetFpgaImageAttributeOutcome EC2Client::ResetFpgaImageAttribute(const ResetFpgaImageAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetFpgaImageAttributeOutcome(result.GetResultWithOwnership())
                            : ResetFpgaImageAttributeOutcome(std::move(result.GetError()));
}

ResetImageAttributeOutcome EC2Client::ResetImageAttribute(const ResetImageAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetImageAttributeOutcome(result.GetResultWithOwnership())
                            : ResetImageAttributeOutcome(std::move(result.GetError()));
}

ResetInstanceAttributeOutcome EC2Client::ResetInstanceAttribute(const ResetInstanceAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetInstanceAttributeOutcome(result.GetResultWithOwnership())
                            : ResetInstanceAttributeOutcome(std::move(result.GetError()));
}

ResetNetworkInterfaceAttributeOutcome EC2Client::ResetNetworkInterfaceAttribute(
    const ResetNetworkInterfaceAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetNetworkInterfaceAttributeOutcome(result.GetResultWithOwnership())
                            : ResetNetworkInterfaceAttributeOutcome(std::move(result.GetError()));
}

ResetSnapshotAttributeOutcome EC2Client::ResetSnapshotAttribute(const ResetSnapshotAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetSnapshotAttributeOutcome(result.GetResultWithOwnership())
                            : ResetSnapshotAttributeOutcome(std::move(result.GetError()));
}

RestoreAddressToClassicOutcome EC2Client::RestoreAddressToClassic(const RestoreAddressToClassicRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreAddressToClassicOutcome(result.GetResultWithOwnership())
                            : RestoreAddressToClassicOutcome(std::move(result.GetError()));
}

RestoreImageFromRecycleBinOutcome EC2Client::RestoreImageFromRecycleBin(const RestoreImageFromRecycleBinRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreImageFromRecycleBinOutcome(result.GetResultWithOwnership())
                            : RestoreImageFromRecycleBinOutcome(std::move(result.GetError()));
}

RestoreManagedPrefixListVersionOutcome EC2Client::RestoreManagedPrefixListVersion(
    const RestoreManagedPrefixListVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreManagedPrefixListVersionOutcome(result.GetResultWithOwnership())
                            : RestoreManagedPrefixListVersionOutcome(std::move(result.GetError()));
}

RestoreSnapshotFromRecycleBinOutcome EC2Client::RestoreSnapshotFromRecycleBin(const RestoreSnapshotFromRecycleBinRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreSnapshotFromRecycleBinOutcome(result.GetResultWithOwnership())
                            : RestoreSnapshotFromRecycleBinOutcome(std::move(result.GetError()));
}

RestoreSnapshotTierOutcome EC2Client::RestoreSnapshotTier(const RestoreSnapshotTierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreSnapshotTierOutcome(result.GetResultWithOwnership())
                            : RestoreSnapshotTierOutcome(std::move(result.GetError()));
}

RestoreVolumeFromRecycleBinOutcome EC2Client::RestoreVolumeFromRecycleBin(const RestoreVolumeFromRecycleBinRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreVolumeFromRecycleBinOutcome(result.GetResultWithOwnership())
                            : RestoreVolumeFromRecycleBinOutcome(std::move(result.GetError()));
}

RevokeClientVpnIngressOutcome EC2Client::RevokeClientVpnIngress(const RevokeClientVpnIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeClientVpnIngressOutcome(result.GetResultWithOwnership())
                            : RevokeClientVpnIngressOutcome(std::move(result.GetError()));
}

RevokeSecurityGroupEgressOutcome EC2Client::RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeSecurityGroupEgressOutcome(result.GetResultWithOwnership())
                            : RevokeSecurityGroupEgressOutcome(std::move(result.GetError()));
}

RevokeSecurityGroupIngressOutcome EC2Client::RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : RevokeSecurityGroupIngressOutcome(std::move(result.GetError()));
}

RunInstancesOutcome EC2Client::RunInstances(const RunInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RunInstancesOutcome(result.GetResultWithOwnership()) : RunInstancesOutcome(std::move(result.GetError()));
}

RunScheduledInstancesOutcome EC2Client::RunScheduledInstances(const RunScheduledInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RunScheduledInstancesOutcome(result.GetResultWithOwnership())
                            : RunScheduledInstancesOutcome(std::move(result.GetError()));
}

SearchLocalGatewayRoutesOutcome EC2Client::SearchLocalGatewayRoutes(const SearchLocalGatewayRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchLocalGatewayRoutesOutcome(result.GetResultWithOwnership())
                            : SearchLocalGatewayRoutesOutcome(std::move(result.GetError()));
}

SearchTransitGatewayMulticastGroupsOutcome EC2Client::SearchTransitGatewayMulticastGroups(
    const SearchTransitGatewayMulticastGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTransitGatewayMulticastGroupsOutcome(result.GetResultWithOwnership())
                            : SearchTransitGatewayMulticastGroupsOutcome(std::move(result.GetError()));
}

SearchTransitGatewayRoutesOutcome EC2Client::SearchTransitGatewayRoutes(const SearchTransitGatewayRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTransitGatewayRoutesOutcome(result.GetResultWithOwnership())
                            : SearchTransitGatewayRoutesOutcome(std::move(result.GetError()));
}

SendDiagnosticInterruptOutcome EC2Client::SendDiagnosticInterrupt(const SendDiagnosticInterruptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDiagnosticInterruptOutcome(result.GetResultWithOwnership())
                            : SendDiagnosticInterruptOutcome(std::move(result.GetError()));
}

StartDeclarativePoliciesReportOutcome EC2Client::StartDeclarativePoliciesReport(
    const StartDeclarativePoliciesReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDeclarativePoliciesReportOutcome(result.GetResultWithOwnership())
                            : StartDeclarativePoliciesReportOutcome(std::move(result.GetError()));
}

StartInstancesOutcome EC2Client::StartInstances(const StartInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartInstancesOutcome(result.GetResultWithOwnership()) : StartInstancesOutcome(std::move(result.GetError()));
}

StartNetworkInsightsAccessScopeAnalysisOutcome EC2Client::StartNetworkInsightsAccessScopeAnalysis(
    const StartNetworkInsightsAccessScopeAnalysisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkInsightsAccessScopeAnalysisOutcome(result.GetResultWithOwnership())
                            : StartNetworkInsightsAccessScopeAnalysisOutcome(std::move(result.GetError()));
}

StartNetworkInsightsAnalysisOutcome EC2Client::StartNetworkInsightsAnalysis(const StartNetworkInsightsAnalysisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartNetworkInsightsAnalysisOutcome(result.GetResultWithOwnership())
                            : StartNetworkInsightsAnalysisOutcome(std::move(result.GetError()));
}

StartVpcEndpointServicePrivateDnsVerificationOutcome EC2Client::StartVpcEndpointServicePrivateDnsVerification(
    const StartVpcEndpointServicePrivateDnsVerificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartVpcEndpointServicePrivateDnsVerificationOutcome(result.GetResultWithOwnership())
                            : StartVpcEndpointServicePrivateDnsVerificationOutcome(std::move(result.GetError()));
}

StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopInstancesOutcome(result.GetResultWithOwnership()) : StopInstancesOutcome(std::move(result.GetError()));
}

TerminateClientVpnConnectionsOutcome EC2Client::TerminateClientVpnConnections(const TerminateClientVpnConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateClientVpnConnectionsOutcome(result.GetResultWithOwnership())
                            : TerminateClientVpnConnectionsOutcome(std::move(result.GetError()));
}

TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateInstancesOutcome(result.GetResultWithOwnership())
                            : TerminateInstancesOutcome(std::move(result.GetError()));
}

UnassignIpv6AddressesOutcome EC2Client::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnassignIpv6AddressesOutcome(result.GetResultWithOwnership())
                            : UnassignIpv6AddressesOutcome(std::move(result.GetError()));
}

UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnassignPrivateIpAddressesOutcome(result.GetResultWithOwnership())
                            : UnassignPrivateIpAddressesOutcome(std::move(result.GetError()));
}

UnassignPrivateNatGatewayAddressOutcome EC2Client::UnassignPrivateNatGatewayAddress(
    const UnassignPrivateNatGatewayAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnassignPrivateNatGatewayAddressOutcome(result.GetResultWithOwnership())
                            : UnassignPrivateNatGatewayAddressOutcome(std::move(result.GetError()));
}

UnlockSnapshotOutcome EC2Client::UnlockSnapshot(const UnlockSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnlockSnapshotOutcome(result.GetResultWithOwnership()) : UnlockSnapshotOutcome(std::move(result.GetError()));
}

UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnmonitorInstancesOutcome(result.GetResultWithOwnership())
                            : UnmonitorInstancesOutcome(std::move(result.GetError()));
}

UpdateCapacityManagerMonitoredTagKeysOutcome EC2Client::UpdateCapacityManagerMonitoredTagKeys(
    const UpdateCapacityManagerMonitoredTagKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCapacityManagerMonitoredTagKeysOutcome(result.GetResultWithOwnership())
                            : UpdateCapacityManagerMonitoredTagKeysOutcome(std::move(result.GetError()));
}

UpdateCapacityManagerOrganizationsAccessOutcome EC2Client::UpdateCapacityManagerOrganizationsAccess(
    const UpdateCapacityManagerOrganizationsAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCapacityManagerOrganizationsAccessOutcome(result.GetResultWithOwnership())
                            : UpdateCapacityManagerOrganizationsAccessOutcome(std::move(result.GetError()));
}

UpdateInterruptibleCapacityReservationAllocationOutcome EC2Client::UpdateInterruptibleCapacityReservationAllocation(
    const UpdateInterruptibleCapacityReservationAllocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInterruptibleCapacityReservationAllocationOutcome(result.GetResultWithOwnership())
                            : UpdateInterruptibleCapacityReservationAllocationOutcome(std::move(result.GetError()));
}

UpdateSecurityGroupRuleDescriptionsEgressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsEgress(
    const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSecurityGroupRuleDescriptionsEgressOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityGroupRuleDescriptionsEgressOutcome(std::move(result.GetError()));
}

UpdateSecurityGroupRuleDescriptionsIngressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsIngress(
    const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSecurityGroupRuleDescriptionsIngressOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityGroupRuleDescriptionsIngressOutcome(std::move(result.GetError()));
}

WithdrawByoipCidrOutcome EC2Client::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? WithdrawByoipCidrOutcome(result.GetResultWithOwnership())
                            : WithdrawByoipCidrOutcome(std::move(result.GetError()));
}
