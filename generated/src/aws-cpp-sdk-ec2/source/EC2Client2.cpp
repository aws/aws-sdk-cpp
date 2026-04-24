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
#include <aws/ec2/model/DeleteNatGatewayRequest.h>
#include <aws/ec2/model/DeleteNetworkAclEntryRequest.h>
#include <aws/ec2/model/DeleteNetworkAclRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeAnalysisRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAnalysisRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsPathRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfaceRequest.h>
#include <aws/ec2/model/DeletePlacementGroupRequest.h>
#include <aws/ec2/model/DeletePublicIpv4PoolRequest.h>
#include <aws/ec2/model/DeleteQueuedReservedInstancesRequest.h>
#include <aws/ec2/model/DeleteRouteRequest.h>
#include <aws/ec2/model/DeleteRouteServerEndpointRequest.h>
#include <aws/ec2/model/DeleteRouteServerPeerRequest.h>
#include <aws/ec2/model/DeleteRouteServerRequest.h>
#include <aws/ec2/model/DeleteRouteTableRequest.h>
#include <aws/ec2/model/DeleteSecondaryNetworkRequest.h>
#include <aws/ec2/model/DeleteSecondarySubnetRequest.h>
#include <aws/ec2/model/DeleteSecurityGroupRequest.h>
#include <aws/ec2/model/DeleteSnapshotRequest.h>
#include <aws/ec2/model/DeleteSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DeleteSubnetCidrReservationRequest.h>
#include <aws/ec2/model/DeleteSubnetRequest.h>
#include <aws/ec2/model/DeleteTagsRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayClientVpnAttachmentRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectPeerRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMeteringPolicyEntryRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMeteringPolicyRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/DeleteVolumeRequest.h>
#include <aws/ec2/model/DeleteVpcBlockPublicAccessExclusionRequest.h>
#include <aws/ec2/model/DeleteVpcEncryptionControlRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointsRequest.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/DeleteVpcRequest.h>
#include <aws/ec2/model/DeleteVpnConcentratorRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRouteRequest.h>
#include <aws/ec2/model/DeleteVpnGatewayRequest.h>
#include <aws/ec2/model/DeprovisionByoipCidrRequest.h>
#include <aws/ec2/model/DeprovisionIpamByoasnRequest.h>
#include <aws/ec2/model/DeprovisionIpamPoolCidrRequest.h>
#include <aws/ec2/model/DeprovisionPublicIpv4PoolCidrRequest.h>
#include <aws/ec2/model/DeregisterImageRequest.h>
#include <aws/ec2/model/DeregisterInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupMembersRequest.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupSourcesRequest.h>
#include <aws/ec2/model/DescribeAccountAttributesRequest.h>
#include <aws/ec2/model/DescribeAddressTransfersRequest.h>
#include <aws/ec2/model/DescribeAddressesAttributeRequest.h>
#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/ec2/model/DescribeAggregateIdFormatRequest.h>
#include <aws/ec2/model/DescribeAvailabilityZonesRequest.h>
#include <aws/ec2/model/DescribeAwsNetworkPerformanceMetricSubscriptionsRequest.h>
#include <aws/ec2/model/DescribeBundleTasksRequest.h>
#include <aws/ec2/model/DescribeByoipCidrsRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockExtensionHistoryRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockExtensionOfferingsRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockOfferingsRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockStatusRequest.h>
#include <aws/ec2/model/DescribeCapacityBlocksRequest.h>
#include <aws/ec2/model/DescribeCapacityManagerDataExportsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationBillingRequestsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationFleetsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationTopologyRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationsRequest.h>
#include <aws/ec2/model/DescribeCarrierGatewaysRequest.h>
#include <aws/ec2/model/DescribeClassicLinkInstancesRequest.h>
#include <aws/ec2/model/DescribeClientVpnAuthorizationRulesRequest.h>
#include <aws/ec2/model/DescribeClientVpnConnectionsRequest.h>
#include <aws/ec2/model/DescribeClientVpnEndpointsRequest.h>
#include <aws/ec2/model/DescribeClientVpnRoutesRequest.h>
#include <aws/ec2/model/DescribeClientVpnTargetNetworksRequest.h>
#include <aws/ec2/model/DescribeCoipPoolsRequest.h>
#include <aws/ec2/model/DescribeConversionTasksRequest.h>
#include <aws/ec2/model/DescribeCustomerGatewaysRequest.h>
#include <aws/ec2/model/DescribeDeclarativePoliciesReportsRequest.h>
#include <aws/ec2/model/DescribeDhcpOptionsRequest.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeElasticGpusRequest.h>
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

DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNatGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteNatGatewayOutcome(std::move(result.GetError()));
}

DeleteNetworkAclOutcome EC2Client::DeleteNetworkAcl(const DeleteNetworkAclRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkAclOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkAclOutcome(std::move(result.GetError()));
}

DeleteNetworkAclEntryOutcome EC2Client::DeleteNetworkAclEntry(const DeleteNetworkAclEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkAclEntryOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkAclEntryOutcome(std::move(result.GetError()));
}

DeleteNetworkInsightsAccessScopeOutcome EC2Client::DeleteNetworkInsightsAccessScope(
    const DeleteNetworkInsightsAccessScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkInsightsAccessScopeOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkInsightsAccessScopeOutcome(std::move(result.GetError()));
}

DeleteNetworkInsightsAccessScopeAnalysisOutcome EC2Client::DeleteNetworkInsightsAccessScopeAnalysis(
    const DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkInsightsAccessScopeAnalysisOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkInsightsAccessScopeAnalysisOutcome(std::move(result.GetError()));
}

DeleteNetworkInsightsAnalysisOutcome EC2Client::DeleteNetworkInsightsAnalysis(const DeleteNetworkInsightsAnalysisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkInsightsAnalysisOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkInsightsAnalysisOutcome(std::move(result.GetError()));
}

DeleteNetworkInsightsPathOutcome EC2Client::DeleteNetworkInsightsPath(const DeleteNetworkInsightsPathRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkInsightsPathOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkInsightsPathOutcome(std::move(result.GetError()));
}

DeleteNetworkInterfaceOutcome EC2Client::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkInterfaceOutcome(std::move(result.GetError()));
}

DeleteNetworkInterfacePermissionOutcome EC2Client::DeleteNetworkInterfacePermission(
    const DeleteNetworkInterfacePermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNetworkInterfacePermissionOutcome(result.GetResultWithOwnership())
                            : DeleteNetworkInterfacePermissionOutcome(std::move(result.GetError()));
}

DeletePlacementGroupOutcome EC2Client::DeletePlacementGroup(const DeletePlacementGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePlacementGroupOutcome(result.GetResultWithOwnership())
                            : DeletePlacementGroupOutcome(std::move(result.GetError()));
}

DeletePublicIpv4PoolOutcome EC2Client::DeletePublicIpv4Pool(const DeletePublicIpv4PoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePublicIpv4PoolOutcome(result.GetResultWithOwnership())
                            : DeletePublicIpv4PoolOutcome(std::move(result.GetError()));
}

DeleteQueuedReservedInstancesOutcome EC2Client::DeleteQueuedReservedInstances(const DeleteQueuedReservedInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteQueuedReservedInstancesOutcome(result.GetResultWithOwnership())
                            : DeleteQueuedReservedInstancesOutcome(std::move(result.GetError()));
}

DeleteRouteOutcome EC2Client::DeleteRoute(const DeleteRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRouteOutcome(result.GetResultWithOwnership()) : DeleteRouteOutcome(std::move(result.GetError()));
}

DeleteRouteServerOutcome EC2Client::DeleteRouteServer(const DeleteRouteServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRouteServerOutcome(result.GetResultWithOwnership())
                            : DeleteRouteServerOutcome(std::move(result.GetError()));
}

DeleteRouteServerEndpointOutcome EC2Client::DeleteRouteServerEndpoint(const DeleteRouteServerEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRouteServerEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteRouteServerEndpointOutcome(std::move(result.GetError()));
}

DeleteRouteServerPeerOutcome EC2Client::DeleteRouteServerPeer(const DeleteRouteServerPeerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRouteServerPeerOutcome(result.GetResultWithOwnership())
                            : DeleteRouteServerPeerOutcome(std::move(result.GetError()));
}

DeleteRouteTableOutcome EC2Client::DeleteRouteTable(const DeleteRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRouteTableOutcome(result.GetResultWithOwnership())
                            : DeleteRouteTableOutcome(std::move(result.GetError()));
}

DeleteSecondaryNetworkOutcome EC2Client::DeleteSecondaryNetwork(const DeleteSecondaryNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSecondaryNetworkOutcome(result.GetResultWithOwnership())
                            : DeleteSecondaryNetworkOutcome(std::move(result.GetError()));
}

DeleteSecondarySubnetOutcome EC2Client::DeleteSecondarySubnet(const DeleteSecondarySubnetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSecondarySubnetOutcome(result.GetResultWithOwnership())
                            : DeleteSecondarySubnetOutcome(std::move(result.GetError()));
}

DeleteSecurityGroupOutcome EC2Client::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DeleteSecurityGroupOutcome(std::move(result.GetError()));
}

DeleteSnapshotOutcome EC2Client::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotOutcome(result.GetResultWithOwnership()) : DeleteSnapshotOutcome(std::move(result.GetError()));
}

DeleteSpotDatafeedSubscriptionOutcome EC2Client::DeleteSpotDatafeedSubscription(
    const DeleteSpotDatafeedSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSpotDatafeedSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteSpotDatafeedSubscriptionOutcome(std::move(result.GetError()));
}

DeleteSubnetOutcome EC2Client::DeleteSubnet(const DeleteSubnetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSubnetOutcome(result.GetResultWithOwnership()) : DeleteSubnetOutcome(std::move(result.GetError()));
}

DeleteSubnetCidrReservationOutcome EC2Client::DeleteSubnetCidrReservation(const DeleteSubnetCidrReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSubnetCidrReservationOutcome(result.GetResultWithOwnership())
                            : DeleteSubnetCidrReservationOutcome(std::move(result.GetError()));
}

DeleteTagsOutcome EC2Client::DeleteTags(const DeleteTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTagsOutcome(result.GetResultWithOwnership()) : DeleteTagsOutcome(std::move(result.GetError()));
}

DeleteTrafficMirrorFilterOutcome EC2Client::DeleteTrafficMirrorFilter(const DeleteTrafficMirrorFilterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrafficMirrorFilterOutcome(result.GetResultWithOwnership())
                            : DeleteTrafficMirrorFilterOutcome(std::move(result.GetError()));
}

DeleteTrafficMirrorFilterRuleOutcome EC2Client::DeleteTrafficMirrorFilterRule(const DeleteTrafficMirrorFilterRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrafficMirrorFilterRuleOutcome(result.GetResultWithOwnership())
                            : DeleteTrafficMirrorFilterRuleOutcome(std::move(result.GetError()));
}

DeleteTrafficMirrorSessionOutcome EC2Client::DeleteTrafficMirrorSession(const DeleteTrafficMirrorSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrafficMirrorSessionOutcome(result.GetResultWithOwnership())
                            : DeleteTrafficMirrorSessionOutcome(std::move(result.GetError()));
}

DeleteTrafficMirrorTargetOutcome EC2Client::DeleteTrafficMirrorTarget(const DeleteTrafficMirrorTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrafficMirrorTargetOutcome(result.GetResultWithOwnership())
                            : DeleteTrafficMirrorTargetOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayOutcome EC2Client::DeleteTransitGateway(const DeleteTransitGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayClientVpnAttachmentOutcome EC2Client::DeleteTransitGatewayClientVpnAttachment(
    const DeleteTransitGatewayClientVpnAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayClientVpnAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayClientVpnAttachmentOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayConnectOutcome EC2Client::DeleteTransitGatewayConnect(const DeleteTransitGatewayConnectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayConnectOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayConnectOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayConnectPeerOutcome EC2Client::DeleteTransitGatewayConnectPeer(
    const DeleteTransitGatewayConnectPeerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayConnectPeerOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayConnectPeerOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayMeteringPolicyOutcome EC2Client::DeleteTransitGatewayMeteringPolicy(
    const DeleteTransitGatewayMeteringPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayMeteringPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayMeteringPolicyOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayMeteringPolicyEntryOutcome EC2Client::DeleteTransitGatewayMeteringPolicyEntry(
    const DeleteTransitGatewayMeteringPolicyEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayMeteringPolicyEntryOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayMeteringPolicyEntryOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayMulticastDomainOutcome EC2Client::DeleteTransitGatewayMulticastDomain(
    const DeleteTransitGatewayMulticastDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayMulticastDomainOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayMulticastDomainOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayPeeringAttachmentOutcome EC2Client::DeleteTransitGatewayPeeringAttachment(
    const DeleteTransitGatewayPeeringAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayPeeringAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayPeeringAttachmentOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayPolicyTableOutcome EC2Client::DeleteTransitGatewayPolicyTable(
    const DeleteTransitGatewayPolicyTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayPolicyTableOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayPolicyTableOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayPrefixListReferenceOutcome EC2Client::DeleteTransitGatewayPrefixListReference(
    const DeleteTransitGatewayPrefixListReferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayPrefixListReferenceOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayPrefixListReferenceOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayRouteOutcome EC2Client::DeleteTransitGatewayRoute(const DeleteTransitGatewayRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayRouteOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayRouteOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayRouteTableOutcome EC2Client::DeleteTransitGatewayRouteTable(
    const DeleteTransitGatewayRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayRouteTableOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayRouteTableOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayRouteTableAnnouncementOutcome EC2Client::DeleteTransitGatewayRouteTableAnnouncement(
    const DeleteTransitGatewayRouteTableAnnouncementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayRouteTableAnnouncementOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayRouteTableAnnouncementOutcome(std::move(result.GetError()));
}

DeleteTransitGatewayVpcAttachmentOutcome EC2Client::DeleteTransitGatewayVpcAttachment(
    const DeleteTransitGatewayVpcAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTransitGatewayVpcAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteTransitGatewayVpcAttachmentOutcome(std::move(result.GetError()));
}

DeleteVerifiedAccessEndpointOutcome EC2Client::DeleteVerifiedAccessEndpoint(const DeleteVerifiedAccessEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVerifiedAccessEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteVerifiedAccessEndpointOutcome(std::move(result.GetError()));
}

DeleteVerifiedAccessGroupOutcome EC2Client::DeleteVerifiedAccessGroup(const DeleteVerifiedAccessGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVerifiedAccessGroupOutcome(result.GetResultWithOwnership())
                            : DeleteVerifiedAccessGroupOutcome(std::move(result.GetError()));
}

DeleteVerifiedAccessInstanceOutcome EC2Client::DeleteVerifiedAccessInstance(const DeleteVerifiedAccessInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVerifiedAccessInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteVerifiedAccessInstanceOutcome(std::move(result.GetError()));
}

DeleteVerifiedAccessTrustProviderOutcome EC2Client::DeleteVerifiedAccessTrustProvider(
    const DeleteVerifiedAccessTrustProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVerifiedAccessTrustProviderOutcome(result.GetResultWithOwnership())
                            : DeleteVerifiedAccessTrustProviderOutcome(std::move(result.GetError()));
}

DeleteVolumeOutcome EC2Client::DeleteVolume(const DeleteVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVolumeOutcome(result.GetResultWithOwnership()) : DeleteVolumeOutcome(std::move(result.GetError()));
}

DeleteVpcOutcome EC2Client::DeleteVpc(const DeleteVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcOutcome(result.GetResultWithOwnership()) : DeleteVpcOutcome(std::move(result.GetError()));
}

DeleteVpcBlockPublicAccessExclusionOutcome EC2Client::DeleteVpcBlockPublicAccessExclusion(
    const DeleteVpcBlockPublicAccessExclusionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcBlockPublicAccessExclusionOutcome(result.GetResultWithOwnership())
                            : DeleteVpcBlockPublicAccessExclusionOutcome(std::move(result.GetError()));
}

DeleteVpcEncryptionControlOutcome EC2Client::DeleteVpcEncryptionControl(const DeleteVpcEncryptionControlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcEncryptionControlOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEncryptionControlOutcome(std::move(result.GetError()));
}

DeleteVpcEndpointConnectionNotificationsOutcome EC2Client::DeleteVpcEndpointConnectionNotifications(
    const DeleteVpcEndpointConnectionNotificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcEndpointConnectionNotificationsOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEndpointConnectionNotificationsOutcome(std::move(result.GetError()));
}

DeleteVpcEndpointServiceConfigurationsOutcome EC2Client::DeleteVpcEndpointServiceConfigurations(
    const DeleteVpcEndpointServiceConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcEndpointServiceConfigurationsOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEndpointServiceConfigurationsOutcome(std::move(result.GetError()));
}

DeleteVpcEndpointsOutcome EC2Client::DeleteVpcEndpoints(const DeleteVpcEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcEndpointsOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEndpointsOutcome(std::move(result.GetError()));
}

DeleteVpcPeeringConnectionOutcome EC2Client::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteVpcPeeringConnectionOutcome(std::move(result.GetError()));
}

DeleteVpnConcentratorOutcome EC2Client::DeleteVpnConcentrator(const DeleteVpnConcentratorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpnConcentratorOutcome(result.GetResultWithOwnership())
                            : DeleteVpnConcentratorOutcome(std::move(result.GetError()));
}

DeleteVpnConnectionOutcome EC2Client::DeleteVpnConnection(const DeleteVpnConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpnConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteVpnConnectionOutcome(std::move(result.GetError()));
}

DeleteVpnConnectionRouteOutcome EC2Client::DeleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpnConnectionRouteOutcome(result.GetResultWithOwnership())
                            : DeleteVpnConnectionRouteOutcome(std::move(result.GetError()));
}

DeleteVpnGatewayOutcome EC2Client::DeleteVpnGateway(const DeleteVpnGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpnGatewayOutcome(result.GetResultWithOwnership())
                            : DeleteVpnGatewayOutcome(std::move(result.GetError()));
}

DeprovisionByoipCidrOutcome EC2Client::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprovisionByoipCidrOutcome(result.GetResultWithOwnership())
                            : DeprovisionByoipCidrOutcome(std::move(result.GetError()));
}

DeprovisionIpamByoasnOutcome EC2Client::DeprovisionIpamByoasn(const DeprovisionIpamByoasnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprovisionIpamByoasnOutcome(result.GetResultWithOwnership())
                            : DeprovisionIpamByoasnOutcome(std::move(result.GetError()));
}

DeprovisionIpamPoolCidrOutcome EC2Client::DeprovisionIpamPoolCidr(const DeprovisionIpamPoolCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprovisionIpamPoolCidrOutcome(result.GetResultWithOwnership())
                            : DeprovisionIpamPoolCidrOutcome(std::move(result.GetError()));
}

DeprovisionPublicIpv4PoolCidrOutcome EC2Client::DeprovisionPublicIpv4PoolCidr(const DeprovisionPublicIpv4PoolCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprovisionPublicIpv4PoolCidrOutcome(result.GetResultWithOwnership())
                            : DeprovisionPublicIpv4PoolCidrOutcome(std::move(result.GetError()));
}

DeregisterImageOutcome EC2Client::DeregisterImage(const DeregisterImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterImageOutcome(result.GetResultWithOwnership())
                            : DeregisterImageOutcome(std::move(result.GetError()));
}

DeregisterInstanceEventNotificationAttributesOutcome EC2Client::DeregisterInstanceEventNotificationAttributes(
    const DeregisterInstanceEventNotificationAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterInstanceEventNotificationAttributesOutcome(result.GetResultWithOwnership())
                            : DeregisterInstanceEventNotificationAttributesOutcome(std::move(result.GetError()));
}

DeregisterTransitGatewayMulticastGroupMembersOutcome EC2Client::DeregisterTransitGatewayMulticastGroupMembers(
    const DeregisterTransitGatewayMulticastGroupMembersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTransitGatewayMulticastGroupMembersOutcome(result.GetResultWithOwnership())
                            : DeregisterTransitGatewayMulticastGroupMembersOutcome(std::move(result.GetError()));
}

DeregisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::DeregisterTransitGatewayMulticastGroupSources(
    const DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTransitGatewayMulticastGroupSourcesOutcome(result.GetResultWithOwnership())
                            : DeregisterTransitGatewayMulticastGroupSourcesOutcome(std::move(result.GetError()));
}

DescribeAccountAttributesOutcome EC2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAttributesOutcome(std::move(result.GetError()));
}

DescribeAddressTransfersOutcome EC2Client::DescribeAddressTransfers(const DescribeAddressTransfersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAddressTransfersOutcome(result.GetResultWithOwnership())
                            : DescribeAddressTransfersOutcome(std::move(result.GetError()));
}

DescribeAddressesOutcome EC2Client::DescribeAddresses(const DescribeAddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAddressesOutcome(result.GetResultWithOwnership())
                            : DescribeAddressesOutcome(std::move(result.GetError()));
}

DescribeAddressesAttributeOutcome EC2Client::DescribeAddressesAttribute(const DescribeAddressesAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAddressesAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeAddressesAttributeOutcome(std::move(result.GetError()));
}

DescribeAggregateIdFormatOutcome EC2Client::DescribeAggregateIdFormat(const DescribeAggregateIdFormatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAggregateIdFormatOutcome(result.GetResultWithOwnership())
                            : DescribeAggregateIdFormatOutcome(std::move(result.GetError()));
}

DescribeAvailabilityZonesOutcome EC2Client::DescribeAvailabilityZones(const DescribeAvailabilityZonesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAvailabilityZonesOutcome(result.GetResultWithOwnership())
                            : DescribeAvailabilityZonesOutcome(std::move(result.GetError()));
}

DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome EC2Client::DescribeAwsNetworkPerformanceMetricSubscriptions(
    const DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome(result.GetResultWithOwnership())
                            : DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome(std::move(result.GetError()));
}

DescribeBundleTasksOutcome EC2Client::DescribeBundleTasks(const DescribeBundleTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBundleTasksOutcome(result.GetResultWithOwnership())
                            : DescribeBundleTasksOutcome(std::move(result.GetError()));
}

DescribeByoipCidrsOutcome EC2Client::DescribeByoipCidrs(const DescribeByoipCidrsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeByoipCidrsOutcome(result.GetResultWithOwnership())
                            : DescribeByoipCidrsOutcome(std::move(result.GetError()));
}

DescribeCapacityBlockExtensionHistoryOutcome EC2Client::DescribeCapacityBlockExtensionHistory(
    const DescribeCapacityBlockExtensionHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityBlockExtensionHistoryOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityBlockExtensionHistoryOutcome(std::move(result.GetError()));
}

DescribeCapacityBlockExtensionOfferingsOutcome EC2Client::DescribeCapacityBlockExtensionOfferings(
    const DescribeCapacityBlockExtensionOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityBlockExtensionOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityBlockExtensionOfferingsOutcome(std::move(result.GetError()));
}

DescribeCapacityBlockOfferingsOutcome EC2Client::DescribeCapacityBlockOfferings(
    const DescribeCapacityBlockOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityBlockOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityBlockOfferingsOutcome(std::move(result.GetError()));
}

DescribeCapacityBlockStatusOutcome EC2Client::DescribeCapacityBlockStatus(const DescribeCapacityBlockStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityBlockStatusOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityBlockStatusOutcome(std::move(result.GetError()));
}

DescribeCapacityBlocksOutcome EC2Client::DescribeCapacityBlocks(const DescribeCapacityBlocksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityBlocksOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityBlocksOutcome(std::move(result.GetError()));
}

DescribeCapacityManagerDataExportsOutcome EC2Client::DescribeCapacityManagerDataExports(
    const DescribeCapacityManagerDataExportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityManagerDataExportsOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityManagerDataExportsOutcome(std::move(result.GetError()));
}

DescribeCapacityReservationBillingRequestsOutcome EC2Client::DescribeCapacityReservationBillingRequests(
    const DescribeCapacityReservationBillingRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityReservationBillingRequestsOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityReservationBillingRequestsOutcome(std::move(result.GetError()));
}

DescribeCapacityReservationFleetsOutcome EC2Client::DescribeCapacityReservationFleets(
    const DescribeCapacityReservationFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityReservationFleetsOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityReservationFleetsOutcome(std::move(result.GetError()));
}

DescribeCapacityReservationTopologyOutcome EC2Client::DescribeCapacityReservationTopology(
    const DescribeCapacityReservationTopologyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityReservationTopologyOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityReservationTopologyOutcome(std::move(result.GetError()));
}

DescribeCapacityReservationsOutcome EC2Client::DescribeCapacityReservations(const DescribeCapacityReservationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCapacityReservationsOutcome(result.GetResultWithOwnership())
                            : DescribeCapacityReservationsOutcome(std::move(result.GetError()));
}

DescribeCarrierGatewaysOutcome EC2Client::DescribeCarrierGateways(const DescribeCarrierGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCarrierGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeCarrierGatewaysOutcome(std::move(result.GetError()));
}

DescribeClassicLinkInstancesOutcome EC2Client::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClassicLinkInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeClassicLinkInstancesOutcome(std::move(result.GetError()));
}

DescribeClientVpnAuthorizationRulesOutcome EC2Client::DescribeClientVpnAuthorizationRules(
    const DescribeClientVpnAuthorizationRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientVpnAuthorizationRulesOutcome(result.GetResultWithOwnership())
                            : DescribeClientVpnAuthorizationRulesOutcome(std::move(result.GetError()));
}

DescribeClientVpnConnectionsOutcome EC2Client::DescribeClientVpnConnections(const DescribeClientVpnConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientVpnConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeClientVpnConnectionsOutcome(std::move(result.GetError()));
}

DescribeClientVpnEndpointsOutcome EC2Client::DescribeClientVpnEndpoints(const DescribeClientVpnEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientVpnEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeClientVpnEndpointsOutcome(std::move(result.GetError()));
}

DescribeClientVpnRoutesOutcome EC2Client::DescribeClientVpnRoutes(const DescribeClientVpnRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientVpnRoutesOutcome(result.GetResultWithOwnership())
                            : DescribeClientVpnRoutesOutcome(std::move(result.GetError()));
}

DescribeClientVpnTargetNetworksOutcome EC2Client::DescribeClientVpnTargetNetworks(
    const DescribeClientVpnTargetNetworksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientVpnTargetNetworksOutcome(result.GetResultWithOwnership())
                            : DescribeClientVpnTargetNetworksOutcome(std::move(result.GetError()));
}

DescribeCoipPoolsOutcome EC2Client::DescribeCoipPools(const DescribeCoipPoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCoipPoolsOutcome(result.GetResultWithOwnership())
                            : DescribeCoipPoolsOutcome(std::move(result.GetError()));
}

DescribeConversionTasksOutcome EC2Client::DescribeConversionTasks(const DescribeConversionTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConversionTasksOutcome(result.GetResultWithOwnership())
                            : DescribeConversionTasksOutcome(std::move(result.GetError()));
}

DescribeCustomerGatewaysOutcome EC2Client::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCustomerGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeCustomerGatewaysOutcome(std::move(result.GetError()));
}

DescribeDeclarativePoliciesReportsOutcome EC2Client::DescribeDeclarativePoliciesReports(
    const DescribeDeclarativePoliciesReportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDeclarativePoliciesReportsOutcome(result.GetResultWithOwnership())
                            : DescribeDeclarativePoliciesReportsOutcome(std::move(result.GetError()));
}

DescribeDhcpOptionsOutcome EC2Client::DescribeDhcpOptions(const DescribeDhcpOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDhcpOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeDhcpOptionsOutcome(std::move(result.GetError()));
}

DescribeEgressOnlyInternetGatewaysOutcome EC2Client::DescribeEgressOnlyInternetGateways(
    const DescribeEgressOnlyInternetGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEgressOnlyInternetGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeEgressOnlyInternetGatewaysOutcome(std::move(result.GetError()));
}

DescribeElasticGpusOutcome EC2Client::DescribeElasticGpus(const DescribeElasticGpusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeElasticGpusOutcome(result.GetResultWithOwnership())
                            : DescribeElasticGpusOutcome(std::move(result.GetError()));
}
