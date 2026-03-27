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
#include <aws/ec2/model/CreateLocalGatewayRouteTableVpcAssociationRequest.h>
#include <aws/ec2/model/CreateLocalGatewayVirtualInterfaceGroupRequest.h>
#include <aws/ec2/model/CreateLocalGatewayVirtualInterfaceRequest.h>
#include <aws/ec2/model/CreateMacSystemIntegrityProtectionModificationTaskRequest.h>
#include <aws/ec2/model/CreateManagedPrefixListRequest.h>
#include <aws/ec2/model/CreateNatGatewayRequest.h>
#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/ec2/model/CreateNetworkAclRequest.h>
#include <aws/ec2/model/CreateNetworkInsightsAccessScopeRequest.h>
#include <aws/ec2/model/CreateNetworkInsightsPathRequest.h>
#include <aws/ec2/model/CreateNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/ec2/model/CreatePlacementGroupRequest.h>
#include <aws/ec2/model/CreatePublicIpv4PoolRequest.h>
#include <aws/ec2/model/CreateReplaceRootVolumeTaskRequest.h>
#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/ec2/model/CreateRestoreImageTaskRequest.h>
#include <aws/ec2/model/CreateRouteRequest.h>
#include <aws/ec2/model/CreateRouteServerEndpointRequest.h>
#include <aws/ec2/model/CreateRouteServerPeerRequest.h>
#include <aws/ec2/model/CreateRouteServerRequest.h>
#include <aws/ec2/model/CreateRouteTableRequest.h>
#include <aws/ec2/model/CreateSecondaryNetworkRequest.h>
#include <aws/ec2/model/CreateSecondarySubnetRequest.h>
#include <aws/ec2/model/CreateSecurityGroupRequest.h>
#include <aws/ec2/model/CreateSnapshotRequest.h>
#include <aws/ec2/model/CreateSnapshotsRequest.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/CreateStoreImageTaskRequest.h>
#include <aws/ec2/model/CreateSubnetCidrReservationRequest.h>
#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/CreateTransitGatewayConnectPeerRequest.h>
#include <aws/ec2/model/CreateTransitGatewayConnectRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMeteringPolicyEntryRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMeteringPolicyRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/CreateVolumeRequest.h>
#include <aws/ec2/model/CreateVpcBlockPublicAccessExclusionRequest.h>
#include <aws/ec2/model/CreateVpcEncryptionControlRequest.h>
#include <aws/ec2/model/CreateVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/CreateVpcEndpointRequest.h>
#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/ec2/model/CreateVpnConcentratorRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRouteRequest.h>
#include <aws/ec2/model/CreateVpnGatewayRequest.h>
#include <aws/ec2/model/DeleteCapacityManagerDataExportRequest.h>
#include <aws/ec2/model/DeleteCarrierGatewayRequest.h>
#include <aws/ec2/model/DeleteClientVpnEndpointRequest.h>
#include <aws/ec2/model/DeleteClientVpnRouteRequest.h>
#include <aws/ec2/model/DeleteCoipCidrRequest.h>
#include <aws/ec2/model/DeleteCoipPoolRequest.h>
#include <aws/ec2/model/DeleteCustomerGatewayRequest.h>
#include <aws/ec2/model/DeleteDhcpOptionsRequest.h>
#include <aws/ec2/model/DeleteEgressOnlyInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteFleetsRequest.h>
#include <aws/ec2/model/DeleteFlowLogsRequest.h>
#include <aws/ec2/model/DeleteFpgaImageRequest.h>
#include <aws/ec2/model/DeleteImageUsageReportRequest.h>
#include <aws/ec2/model/DeleteInstanceConnectEndpointRequest.h>
#include <aws/ec2/model/DeleteInstanceEventWindowRequest.h>
#include <aws/ec2/model/DeleteInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteIpamExternalResourceVerificationTokenRequest.h>
#include <aws/ec2/model/DeleteIpamPolicyRequest.h>
#include <aws/ec2/model/DeleteIpamPoolRequest.h>
#include <aws/ec2/model/DeleteIpamPrefixListResolverRequest.h>
#include <aws/ec2/model/DeleteIpamPrefixListResolverTargetRequest.h>
#include <aws/ec2/model/DeleteIpamRequest.h>
#include <aws/ec2/model/DeleteIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/DeleteIpamScopeRequest.h>
#include <aws/ec2/model/DeleteKeyPairRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVpcAssociationRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayVirtualInterfaceGroupRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayVirtualInterfaceRequest.h>
#include <aws/ec2/model/DeleteManagedPrefixListRequest.h>
#include <aws/ec2/model/DeleteNatGatewayRequest.h>
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

CreateLocalGatewayRouteTableVpcAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVpcAssociation(
    const CreateLocalGatewayRouteTableVpcAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLocalGatewayRouteTableVpcAssociationOutcome(result.GetResultWithOwnership())
                            : CreateLocalGatewayRouteTableVpcAssociationOutcome(std::move(result.GetError()));
}

CreateLocalGatewayVirtualInterfaceOutcome EC2Client::CreateLocalGatewayVirtualInterface(
    const CreateLocalGatewayVirtualInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLocalGatewayVirtualInterfaceOutcome(result.GetResultWithOwnership())
                            : CreateLocalGatewayVirtualInterfaceOutcome(std::move(result.GetError()));
}

CreateLocalGatewayVirtualInterfaceGroupOutcome EC2Client::CreateLocalGatewayVirtualInterfaceGroup(
    const CreateLocalGatewayVirtualInterfaceGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLocalGatewayVirtualInterfaceGroupOutcome(result.GetResultWithOwnership())
                            : CreateLocalGatewayVirtualInterfaceGroupOutcome(std::move(result.GetError()));
}

CreateMacSystemIntegrityProtectionModificationTaskOutcome EC2Client::CreateMacSystemIntegrityProtectionModificationTask(
    const CreateMacSystemIntegrityProtectionModificationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMacSystemIntegrityProtectionModificationTaskOutcome(result.GetResultWithOwnership())
                            : CreateMacSystemIntegrityProtectionModificationTaskOutcome(std::move(result.GetError()));
}

CreateManagedPrefixListOutcome EC2Client::CreateManagedPrefixList(const CreateManagedPrefixListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateManagedPrefixListOutcome(result.GetResultWithOwnership())
                            : CreateManagedPrefixListOutcome(std::move(result.GetError()));
}

CreateNatGatewayOutcome EC2Client::CreateNatGateway(const CreateNatGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNatGatewayOutcome(result.GetResultWithOwnership())
                            : CreateNatGatewayOutcome(std::move(result.GetError()));
}

CreateNetworkAclOutcome EC2Client::CreateNetworkAcl(const CreateNetworkAclRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkAclOutcome(result.GetResultWithOwnership())
                            : CreateNetworkAclOutcome(std::move(result.GetError()));
}

CreateNetworkAclEntryOutcome EC2Client::CreateNetworkAclEntry(const CreateNetworkAclEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkAclEntryOutcome(result.GetResultWithOwnership())
                            : CreateNetworkAclEntryOutcome(std::move(result.GetError()));
}

CreateNetworkInsightsAccessScopeOutcome EC2Client::CreateNetworkInsightsAccessScope(
    const CreateNetworkInsightsAccessScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkInsightsAccessScopeOutcome(result.GetResultWithOwnership())
                            : CreateNetworkInsightsAccessScopeOutcome(std::move(result.GetError()));
}

CreateNetworkInsightsPathOutcome EC2Client::CreateNetworkInsightsPath(const CreateNetworkInsightsPathRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkInsightsPathOutcome(result.GetResultWithOwnership())
                            : CreateNetworkInsightsPathOutcome(std::move(result.GetError()));
}

CreateNetworkInterfaceOutcome EC2Client::CreateNetworkInterface(const CreateNetworkInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : CreateNetworkInterfaceOutcome(std::move(result.GetError()));
}

CreateNetworkInterfacePermissionOutcome EC2Client::CreateNetworkInterfacePermission(
    const CreateNetworkInterfacePermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkInterfacePermissionOutcome(result.GetResultWithOwnership())
                            : CreateNetworkInterfacePermissionOutcome(std::move(result.GetError()));
}

CreatePlacementGroupOutcome EC2Client::CreatePlacementGroup(const CreatePlacementGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePlacementGroupOutcome(result.GetResultWithOwnership())
                            : CreatePlacementGroupOutcome(std::move(result.GetError()));
}

CreatePublicIpv4PoolOutcome EC2Client::CreatePublicIpv4Pool(const CreatePublicIpv4PoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePublicIpv4PoolOutcome(result.GetResultWithOwnership())
                            : CreatePublicIpv4PoolOutcome(std::move(result.GetError()));
}

CreateReplaceRootVolumeTaskOutcome EC2Client::CreateReplaceRootVolumeTask(const CreateReplaceRootVolumeTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplaceRootVolumeTaskOutcome(result.GetResultWithOwnership())
                            : CreateReplaceRootVolumeTaskOutcome(std::move(result.GetError()));
}

CreateReservedInstancesListingOutcome EC2Client::CreateReservedInstancesListing(
    const CreateReservedInstancesListingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReservedInstancesListingOutcome(result.GetResultWithOwnership())
                            : CreateReservedInstancesListingOutcome(std::move(result.GetError()));
}

CreateRestoreImageTaskOutcome EC2Client::CreateRestoreImageTask(const CreateRestoreImageTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRestoreImageTaskOutcome(result.GetResultWithOwnership())
                            : CreateRestoreImageTaskOutcome(std::move(result.GetError()));
}

CreateRouteOutcome EC2Client::CreateRoute(const CreateRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouteOutcome(result.GetResultWithOwnership()) : CreateRouteOutcome(std::move(result.GetError()));
}

CreateRouteServerOutcome EC2Client::CreateRouteServer(const CreateRouteServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouteServerOutcome(result.GetResultWithOwnership())
                            : CreateRouteServerOutcome(std::move(result.GetError()));
}

CreateRouteServerEndpointOutcome EC2Client::CreateRouteServerEndpoint(const CreateRouteServerEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouteServerEndpointOutcome(result.GetResultWithOwnership())
                            : CreateRouteServerEndpointOutcome(std::move(result.GetError()));
}

CreateRouteServerPeerOutcome EC2Client::CreateRouteServerPeer(const CreateRouteServerPeerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouteServerPeerOutcome(result.GetResultWithOwnership())
                            : CreateRouteServerPeerOutcome(std::move(result.GetError()));
}

CreateRouteTableOutcome EC2Client::CreateRouteTable(const CreateRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouteTableOutcome(result.GetResultWithOwnership())
                            : CreateRouteTableOutcome(std::move(result.GetError()));
}

CreateSecondaryNetworkOutcome EC2Client::CreateSecondaryNetwork(const CreateSecondaryNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecondaryNetworkOutcome(result.GetResultWithOwnership())
                            : CreateSecondaryNetworkOutcome(std::move(result.GetError()));
}

CreateSecondarySubnetOutcome EC2Client::CreateSecondarySubnet(const CreateSecondarySubnetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecondarySubnetOutcome(result.GetResultWithOwnership())
                            : CreateSecondarySubnetOutcome(std::move(result.GetError()));
}

CreateSecurityGroupOutcome EC2Client::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecurityGroupOutcome(result.GetResultWithOwnership())
                            : CreateSecurityGroupOutcome(std::move(result.GetError()));
}

CreateSnapshotOutcome EC2Client::CreateSnapshot(const CreateSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotOutcome(result.GetResultWithOwnership()) : CreateSnapshotOutcome(std::move(result.GetError()));
}

CreateSnapshotsOutcome EC2Client::CreateSnapshots(const CreateSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotsOutcome(result.GetResultWithOwnership())
                            : CreateSnapshotsOutcome(std::move(result.GetError()));
}

CreateSpotDatafeedSubscriptionOutcome EC2Client::CreateSpotDatafeedSubscription(
    const CreateSpotDatafeedSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSpotDatafeedSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateSpotDatafeedSubscriptionOutcome(std::move(result.GetError()));
}

CreateStoreImageTaskOutcome EC2Client::CreateStoreImageTask(const CreateStoreImageTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStoreImageTaskOutcome(result.GetResultWithOwnership())
                            : CreateStoreImageTaskOutcome(std::move(result.GetError()));
}

CreateSubnetOutcome EC2Client::CreateSubnet(const CreateSubnetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubnetOutcome(result.GetResultWithOwnership()) : CreateSubnetOutcome(std::move(result.GetError()));
}

CreateSubnetCidrReservationOutcome EC2Client::CreateSubnetCidrReservation(const CreateSubnetCidrReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubnetCidrReservationOutcome(result.GetResultWithOwnership())
                            : CreateSubnetCidrReservationOutcome(std::move(result.GetError()));
}

CreateTagsOutcome EC2Client::CreateTags(const CreateTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTagsOutcome(result.GetResultWithOwnership()) : CreateTagsOutcome(std::move(result.GetError()));
}

CreateTrafficMirrorFilterOutcome EC2Client::CreateTrafficMirrorFilter(const CreateTrafficMirrorFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrafficMirrorFilterOutcome(result.GetResultWithOwnership())
                            : CreateTrafficMirrorFilterOutcome(std::move(result.GetError()));
}

CreateTrafficMirrorFilterRuleOutcome EC2Client::CreateTrafficMirrorFilterRule(const CreateTrafficMirrorFilterRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrafficMirrorFilterRuleOutcome(result.GetResultWithOwnership())
                            : CreateTrafficMirrorFilterRuleOutcome(std::move(result.GetError()));
}

CreateTrafficMirrorSessionOutcome EC2Client::CreateTrafficMirrorSession(const CreateTrafficMirrorSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrafficMirrorSessionOutcome(result.GetResultWithOwnership())
                            : CreateTrafficMirrorSessionOutcome(std::move(result.GetError()));
}

CreateTrafficMirrorTargetOutcome EC2Client::CreateTrafficMirrorTarget(const CreateTrafficMirrorTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrafficMirrorTargetOutcome(result.GetResultWithOwnership())
                            : CreateTrafficMirrorTargetOutcome(std::move(result.GetError()));
}

CreateTransitGatewayOutcome EC2Client::CreateTransitGateway(const CreateTransitGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayOutcome(std::move(result.GetError()));
}

CreateTransitGatewayConnectOutcome EC2Client::CreateTransitGatewayConnect(const CreateTransitGatewayConnectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayConnectOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayConnectOutcome(std::move(result.GetError()));
}

CreateTransitGatewayConnectPeerOutcome EC2Client::CreateTransitGatewayConnectPeer(
    const CreateTransitGatewayConnectPeerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayConnectPeerOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayConnectPeerOutcome(std::move(result.GetError()));
}

CreateTransitGatewayMeteringPolicyOutcome EC2Client::CreateTransitGatewayMeteringPolicy(
    const CreateTransitGatewayMeteringPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayMeteringPolicyOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayMeteringPolicyOutcome(std::move(result.GetError()));
}

CreateTransitGatewayMeteringPolicyEntryOutcome EC2Client::CreateTransitGatewayMeteringPolicyEntry(
    const CreateTransitGatewayMeteringPolicyEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayMeteringPolicyEntryOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayMeteringPolicyEntryOutcome(std::move(result.GetError()));
}

CreateTransitGatewayMulticastDomainOutcome EC2Client::CreateTransitGatewayMulticastDomain(
    const CreateTransitGatewayMulticastDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayMulticastDomainOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayMulticastDomainOutcome(std::move(result.GetError()));
}

CreateTransitGatewayPeeringAttachmentOutcome EC2Client::CreateTransitGatewayPeeringAttachment(
    const CreateTransitGatewayPeeringAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayPeeringAttachmentOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayPeeringAttachmentOutcome(std::move(result.GetError()));
}

CreateTransitGatewayPolicyTableOutcome EC2Client::CreateTransitGatewayPolicyTable(
    const CreateTransitGatewayPolicyTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayPolicyTableOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayPolicyTableOutcome(std::move(result.GetError()));
}

CreateTransitGatewayPrefixListReferenceOutcome EC2Client::CreateTransitGatewayPrefixListReference(
    const CreateTransitGatewayPrefixListReferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayPrefixListReferenceOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayPrefixListReferenceOutcome(std::move(result.GetError()));
}

CreateTransitGatewayRouteOutcome EC2Client::CreateTransitGatewayRoute(const CreateTransitGatewayRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayRouteOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayRouteOutcome(std::move(result.GetError()));
}

CreateTransitGatewayRouteTableOutcome EC2Client::CreateTransitGatewayRouteTable(
    const CreateTransitGatewayRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayRouteTableOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayRouteTableOutcome(std::move(result.GetError()));
}

CreateTransitGatewayRouteTableAnnouncementOutcome EC2Client::CreateTransitGatewayRouteTableAnnouncement(
    const CreateTransitGatewayRouteTableAnnouncementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayRouteTableAnnouncementOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayRouteTableAnnouncementOutcome(std::move(result.GetError()));
}

CreateTransitGatewayVpcAttachmentOutcome EC2Client::CreateTransitGatewayVpcAttachment(
    const CreateTransitGatewayVpcAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTransitGatewayVpcAttachmentOutcome(result.GetResultWithOwnership())
                            : CreateTransitGatewayVpcAttachmentOutcome(std::move(result.GetError()));
}

CreateVerifiedAccessEndpointOutcome EC2Client::CreateVerifiedAccessEndpoint(const CreateVerifiedAccessEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVerifiedAccessEndpointOutcome(result.GetResultWithOwnership())
                            : CreateVerifiedAccessEndpointOutcome(std::move(result.GetError()));
}

CreateVerifiedAccessGroupOutcome EC2Client::CreateVerifiedAccessGroup(const CreateVerifiedAccessGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVerifiedAccessGroupOutcome(result.GetResultWithOwnership())
                            : CreateVerifiedAccessGroupOutcome(std::move(result.GetError()));
}

CreateVerifiedAccessInstanceOutcome EC2Client::CreateVerifiedAccessInstance(const CreateVerifiedAccessInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVerifiedAccessInstanceOutcome(result.GetResultWithOwnership())
                            : CreateVerifiedAccessInstanceOutcome(std::move(result.GetError()));
}

CreateVerifiedAccessTrustProviderOutcome EC2Client::CreateVerifiedAccessTrustProvider(
    const CreateVerifiedAccessTrustProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVerifiedAccessTrustProviderOutcome(result.GetResultWithOwnership())
                            : CreateVerifiedAccessTrustProviderOutcome(std::move(result.GetError()));
}

CreateVolumeOutcome EC2Client::CreateVolume(const CreateVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVolumeOutcome(result.GetResultWithOwnership()) : CreateVolumeOutcome(std::move(result.GetError()));
}

CreateVpcOutcome EC2Client::CreateVpc(const CreateVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcOutcome(result.GetResultWithOwnership()) : CreateVpcOutcome(std::move(result.GetError()));
}

CreateVpcBlockPublicAccessExclusionOutcome EC2Client::CreateVpcBlockPublicAccessExclusion(
    const CreateVpcBlockPublicAccessExclusionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcBlockPublicAccessExclusionOutcome(result.GetResultWithOwnership())
                            : CreateVpcBlockPublicAccessExclusionOutcome(std::move(result.GetError()));
}

CreateVpcEncryptionControlOutcome EC2Client::CreateVpcEncryptionControl(const CreateVpcEncryptionControlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEncryptionControlOutcome(result.GetResultWithOwnership())
                            : CreateVpcEncryptionControlOutcome(std::move(result.GetError()));
}

CreateVpcEndpointOutcome EC2Client::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEndpointOutcome(result.GetResultWithOwnership())
                            : CreateVpcEndpointOutcome(std::move(result.GetError()));
}

CreateVpcEndpointConnectionNotificationOutcome EC2Client::CreateVpcEndpointConnectionNotification(
    const CreateVpcEndpointConnectionNotificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEndpointConnectionNotificationOutcome(result.GetResultWithOwnership())
                            : CreateVpcEndpointConnectionNotificationOutcome(std::move(result.GetError()));
}

CreateVpcEndpointServiceConfigurationOutcome EC2Client::CreateVpcEndpointServiceConfiguration(
    const CreateVpcEndpointServiceConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEndpointServiceConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateVpcEndpointServiceConfigurationOutcome(std::move(result.GetError()));
}

CreateVpcPeeringConnectionOutcome EC2Client::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : CreateVpcPeeringConnectionOutcome(std::move(result.GetError()));
}

CreateVpnConcentratorOutcome EC2Client::CreateVpnConcentrator(const CreateVpnConcentratorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpnConcentratorOutcome(result.GetResultWithOwnership())
                            : CreateVpnConcentratorOutcome(std::move(result.GetError()));
}

CreateVpnConnectionOutcome EC2Client::CreateVpnConnection(const CreateVpnConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpnConnectionOutcome(result.GetResultWithOwnership())
                            : CreateVpnConnectionOutcome(std::move(result.GetError()));
}

CreateVpnConnectionRouteOutcome EC2Client::CreateVpnConnectionRoute(const CreateVpnConnectionRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpnConnectionRouteOutcome(result.GetResultWithOwnership())
                            : CreateVpnConnectionRouteOutcome(std::move(result.GetError()));
}

CreateVpnGatewayOutcome EC2Client::CreateVpnGateway(const CreateVpnGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpnGatewayOutcome(result.GetResultWithOwnership())
                            : CreateVpnGatewayOutcome(std::move(result.GetError()));
}

DeleteCapacityManagerDataExportOutcome EC2Client::DeleteCapacityManagerDataExport(
    const DeleteCapacityManagerDataExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCapacityManagerDataExportOutcome(result.GetResultWithOwnership())
                            : DeleteCapacityManagerDataExportOutcome(std::move(result.GetError()));
}

DeleteCarrierGatewayOutcome EC2Client::DeleteCarrierGateway(const DeleteCarrierGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCarrierGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteCarrierGatewayOutcome(std::move(result.GetError()));
}

DeleteClientVpnEndpointOutcome EC2Client::DeleteClientVpnEndpoint(const DeleteClientVpnEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClientVpnEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteClientVpnEndpointOutcome(std::move(result.GetError()));
}

DeleteClientVpnRouteOutcome EC2Client::DeleteClientVpnRoute(const DeleteClientVpnRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClientVpnRouteOutcome(result.GetResultWithOwnership())
                            : DeleteClientVpnRouteOutcome(std::move(result.GetError()));
}

DeleteCoipCidrOutcome EC2Client::DeleteCoipCidr(const DeleteCoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCoipCidrOutcome(result.GetResultWithOwnership()) : DeleteCoipCidrOutcome(std::move(result.GetError()));
}

DeleteCoipPoolOutcome EC2Client::DeleteCoipPool(const DeleteCoipPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCoipPoolOutcome(result.GetResultWithOwnership()) : DeleteCoipPoolOutcome(std::move(result.GetError()));
}

DeleteCustomerGatewayOutcome EC2Client::DeleteCustomerGateway(const DeleteCustomerGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCustomerGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteCustomerGatewayOutcome(std::move(result.GetError()));
}

DeleteDhcpOptionsOutcome EC2Client::DeleteDhcpOptions(const DeleteDhcpOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDhcpOptionsOutcome(result.GetResultWithOwnership())
                            : DeleteDhcpOptionsOutcome(std::move(result.GetError()));
}

DeleteEgressOnlyInternetGatewayOutcome EC2Client::DeleteEgressOnlyInternetGateway(
    const DeleteEgressOnlyInternetGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEgressOnlyInternetGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteEgressOnlyInternetGatewayOutcome(std::move(result.GetError()));
}

DeleteFleetsOutcome EC2Client::DeleteFleets(const DeleteFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFleetsOutcome(result.GetResultWithOwnership()) : DeleteFleetsOutcome(std::move(result.GetError()));
}

DeleteFlowLogsOutcome EC2Client::DeleteFlowLogs(const DeleteFlowLogsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFlowLogsOutcome(result.GetResultWithOwnership()) : DeleteFlowLogsOutcome(std::move(result.GetError()));
}

DeleteFpgaImageOutcome EC2Client::DeleteFpgaImage(const DeleteFpgaImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFpgaImageOutcome(result.GetResultWithOwnership())
                            : DeleteFpgaImageOutcome(std::move(result.GetError()));
}

DeleteImageUsageReportOutcome EC2Client::DeleteImageUsageReport(const DeleteImageUsageReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImageUsageReportOutcome(result.GetResultWithOwnership())
                            : DeleteImageUsageReportOutcome(std::move(result.GetError()));
}

DeleteInstanceConnectEndpointOutcome EC2Client::DeleteInstanceConnectEndpoint(const DeleteInstanceConnectEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceConnectEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceConnectEndpointOutcome(std::move(result.GetError()));
}

DeleteInstanceEventWindowOutcome EC2Client::DeleteInstanceEventWindow(const DeleteInstanceEventWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceEventWindowOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceEventWindowOutcome(std::move(result.GetError()));
}

DeleteInternetGatewayOutcome EC2Client::DeleteInternetGateway(const DeleteInternetGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInternetGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteInternetGatewayOutcome(std::move(result.GetError()));
}

DeleteIpamOutcome EC2Client::DeleteIpam(const DeleteIpamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamOutcome(result.GetResultWithOwnership()) : DeleteIpamOutcome(std::move(result.GetError()));
}

DeleteIpamExternalResourceVerificationTokenOutcome EC2Client::DeleteIpamExternalResourceVerificationToken(
    const DeleteIpamExternalResourceVerificationTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamExternalResourceVerificationTokenOutcome(result.GetResultWithOwnership())
                            : DeleteIpamExternalResourceVerificationTokenOutcome(std::move(result.GetError()));
}

DeleteIpamPolicyOutcome EC2Client::DeleteIpamPolicy(const DeleteIpamPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteIpamPolicyOutcome(std::move(result.GetError()));
}

DeleteIpamPoolOutcome EC2Client::DeleteIpamPool(const DeleteIpamPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamPoolOutcome(result.GetResultWithOwnership()) : DeleteIpamPoolOutcome(std::move(result.GetError()));
}

DeleteIpamPrefixListResolverOutcome EC2Client::DeleteIpamPrefixListResolver(const DeleteIpamPrefixListResolverRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamPrefixListResolverOutcome(result.GetResultWithOwnership())
                            : DeleteIpamPrefixListResolverOutcome(std::move(result.GetError()));
}

DeleteIpamPrefixListResolverTargetOutcome EC2Client::DeleteIpamPrefixListResolverTarget(
    const DeleteIpamPrefixListResolverTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamPrefixListResolverTargetOutcome(result.GetResultWithOwnership())
                            : DeleteIpamPrefixListResolverTargetOutcome(std::move(result.GetError()));
}

DeleteIpamResourceDiscoveryOutcome EC2Client::DeleteIpamResourceDiscovery(const DeleteIpamResourceDiscoveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamResourceDiscoveryOutcome(result.GetResultWithOwnership())
                            : DeleteIpamResourceDiscoveryOutcome(std::move(result.GetError()));
}

DeleteIpamScopeOutcome EC2Client::DeleteIpamScope(const DeleteIpamScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIpamScopeOutcome(result.GetResultWithOwnership())
                            : DeleteIpamScopeOutcome(std::move(result.GetError()));
}

DeleteKeyPairOutcome EC2Client::DeleteKeyPair(const DeleteKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteKeyPairOutcome(result.GetResultWithOwnership()) : DeleteKeyPairOutcome(std::move(result.GetError()));
}

DeleteLaunchTemplateOutcome EC2Client::DeleteLaunchTemplate(const DeleteLaunchTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLaunchTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteLaunchTemplateOutcome(std::move(result.GetError()));
}

DeleteLaunchTemplateVersionsOutcome EC2Client::DeleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLaunchTemplateVersionsOutcome(result.GetResultWithOwnership())
                            : DeleteLaunchTemplateVersionsOutcome(std::move(result.GetError()));
}

DeleteLocalGatewayRouteOutcome EC2Client::DeleteLocalGatewayRoute(const DeleteLocalGatewayRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocalGatewayRouteOutcome(result.GetResultWithOwnership())
                            : DeleteLocalGatewayRouteOutcome(std::move(result.GetError()));
}

DeleteLocalGatewayRouteTableOutcome EC2Client::DeleteLocalGatewayRouteTable(const DeleteLocalGatewayRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocalGatewayRouteTableOutcome(result.GetResultWithOwnership())
                            : DeleteLocalGatewayRouteTableOutcome(std::move(result.GetError()));
}

DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(
    const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome(std::move(result.GetError()));
}

DeleteLocalGatewayRouteTableVpcAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVpcAssociation(
    const DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocalGatewayRouteTableVpcAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteLocalGatewayRouteTableVpcAssociationOutcome(std::move(result.GetError()));
}

DeleteLocalGatewayVirtualInterfaceOutcome EC2Client::DeleteLocalGatewayVirtualInterface(
    const DeleteLocalGatewayVirtualInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocalGatewayVirtualInterfaceOutcome(result.GetResultWithOwnership())
                            : DeleteLocalGatewayVirtualInterfaceOutcome(std::move(result.GetError()));
}

DeleteLocalGatewayVirtualInterfaceGroupOutcome EC2Client::DeleteLocalGatewayVirtualInterfaceGroup(
    const DeleteLocalGatewayVirtualInterfaceGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocalGatewayVirtualInterfaceGroupOutcome(result.GetResultWithOwnership())
                            : DeleteLocalGatewayVirtualInterfaceGroupOutcome(std::move(result.GetError()));
}

DeleteManagedPrefixListOutcome EC2Client::DeleteManagedPrefixList(const DeleteManagedPrefixListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteManagedPrefixListOutcome(result.GetResultWithOwnership())
                            : DeleteManagedPrefixListOutcome(std::move(result.GetError()));
}

DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNatGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteNatGatewayOutcome(std::move(result.GetError()));
}
