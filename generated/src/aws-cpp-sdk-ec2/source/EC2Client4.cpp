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
#include <aws/ec2/model/DescribeSpotFleetRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/ec2/model/DescribeStaleSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeStoreImageTasksRequest.h>
#include <aws/ec2/model/DescribeSubnetsRequest.h>
#include <aws/ec2/model/DescribeTagsRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorFilterRulesRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorFiltersRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorSessionsRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorTargetsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectPeersRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayMeteringPoliciesRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayMulticastDomainsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayPeeringAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayPolicyTablesRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTableAnnouncementsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTablesRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayVpcAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewaysRequest.h>
#include <aws/ec2/model/DescribeTrunkInterfaceAssociationsRequest.h>
#include <aws/ec2/model/DescribeVerifiedAccessEndpointsRequest.h>
#include <aws/ec2/model/DescribeVerifiedAccessGroupsRequest.h>
#include <aws/ec2/model/DescribeVerifiedAccessInstanceLoggingConfigurationsRequest.h>
#include <aws/ec2/model/DescribeVerifiedAccessInstancesRequest.h>
#include <aws/ec2/model/DescribeVerifiedAccessTrustProvidersRequest.h>
#include <aws/ec2/model/DescribeVolumeAttributeRequest.h>
#include <aws/ec2/model/DescribeVolumeStatusRequest.h>
#include <aws/ec2/model/DescribeVolumesModificationsRequest.h>
#include <aws/ec2/model/DescribeVolumesRequest.h>
#include <aws/ec2/model/DescribeVpcAttributeRequest.h>
#include <aws/ec2/model/DescribeVpcBlockPublicAccessExclusionsRequest.h>
#include <aws/ec2/model/DescribeVpcBlockPublicAccessOptionsRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkRequest.h>
#include <aws/ec2/model/DescribeVpcEncryptionControlsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointAssociationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServicePermissionsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServicesRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointsRequest.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcsRequest.h>
#include <aws/ec2/model/DescribeVpnConcentratorsRequest.h>
#include <aws/ec2/model/DescribeVpnConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpnGatewaysRequest.h>
#include <aws/ec2/model/DetachClassicLinkVpcRequest.h>
#include <aws/ec2/model/DetachInternetGatewayRequest.h>
#include <aws/ec2/model/DetachNetworkInterfaceRequest.h>
#include <aws/ec2/model/DetachVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/DetachVolumeRequest.h>
#include <aws/ec2/model/DetachVpnGatewayRequest.h>
#include <aws/ec2/model/DisableAddressTransferRequest.h>
#include <aws/ec2/model/DisableAllowedImagesSettingsRequest.h>
#include <aws/ec2/model/DisableAwsNetworkPerformanceMetricSubscriptionRequest.h>
#include <aws/ec2/model/DisableCapacityManagerRequest.h>
#include <aws/ec2/model/DisableEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/DisableFastLaunchRequest.h>
#include <aws/ec2/model/DisableFastSnapshotRestoresRequest.h>
#include <aws/ec2/model/DisableImageBlockPublicAccessRequest.h>
#include <aws/ec2/model/DisableImageDeprecationRequest.h>
#include <aws/ec2/model/DisableImageDeregistrationProtectionRequest.h>
#include <aws/ec2/model/DisableImageRequest.h>
#include <aws/ec2/model/DisableInstanceSqlHaStandbyDetectionsRequest.h>
#include <aws/ec2/model/DisableIpamOrganizationAdminAccountRequest.h>
#include <aws/ec2/model/DisableIpamPolicyRequest.h>
#include <aws/ec2/model/DisableRouteServerPropagationRequest.h>
#include <aws/ec2/model/DisableSerialConsoleAccessRequest.h>
#include <aws/ec2/model/DisableSnapshotBlockPublicAccessRequest.h>
#include <aws/ec2/model/DisableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/ec2/model/DisableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkRequest.h>
#include <aws/ec2/model/DisassociateAddressRequest.h>
#include <aws/ec2/model/DisassociateCapacityReservationBillingOwnerRequest.h>
#include <aws/ec2/model/DisassociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/DisassociateEnclaveCertificateIamRoleRequest.h>
#include <aws/ec2/model/DisassociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/DisassociateInstanceEventWindowRequest.h>
#include <aws/ec2/model/DisassociateIpamByoasnRequest.h>
#include <aws/ec2/model/DisassociateIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/DisassociateNatGatewayAddressRequest.h>
#include <aws/ec2/model/DisassociateRouteServerRequest.h>
#include <aws/ec2/model/DisassociateRouteTableRequest.h>
#include <aws/ec2/model/DisassociateSecurityGroupVpcRequest.h>
#include <aws/ec2/model/DisassociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DisassociateTrunkInterfaceRequest.h>
#include <aws/ec2/model/DisassociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/EnableAddressTransferRequest.h>
#include <aws/ec2/model/EnableAllowedImagesSettingsRequest.h>
#include <aws/ec2/model/EnableAwsNetworkPerformanceMetricSubscriptionRequest.h>
#include <aws/ec2/model/EnableCapacityManagerRequest.h>
#include <aws/ec2/model/EnableEbsEncryptionByDefaultRequest.h>
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

DescribeSpotFleetRequestsOutcome EC2Client::DescribeSpotFleetRequests(const DescribeSpotFleetRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpotFleetRequestsOutcome(result.GetResultWithOwnership())
                            : DescribeSpotFleetRequestsOutcome(std::move(result.GetError()));
}

DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpotInstanceRequestsOutcome(result.GetResultWithOwnership())
                            : DescribeSpotInstanceRequestsOutcome(std::move(result.GetError()));
}

DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpotPriceHistoryOutcome(result.GetResultWithOwnership())
                            : DescribeSpotPriceHistoryOutcome(std::move(result.GetError()));
}

DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStaleSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeStaleSecurityGroupsOutcome(std::move(result.GetError()));
}

DescribeStoreImageTasksOutcome EC2Client::DescribeStoreImageTasks(const DescribeStoreImageTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStoreImageTasksOutcome(result.GetResultWithOwnership())
                            : DescribeStoreImageTasksOutcome(std::move(result.GetError()));
}

DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSubnetsOutcome(result.GetResultWithOwnership())
                            : DescribeSubnetsOutcome(std::move(result.GetError()));
}

DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTagsOutcome(result.GetResultWithOwnership()) : DescribeTagsOutcome(std::move(result.GetError()));
}

DescribeTrafficMirrorFilterRulesOutcome EC2Client::DescribeTrafficMirrorFilterRules(
    const DescribeTrafficMirrorFilterRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrafficMirrorFilterRulesOutcome(result.GetResultWithOwnership())
                            : DescribeTrafficMirrorFilterRulesOutcome(std::move(result.GetError()));
}

DescribeTrafficMirrorFiltersOutcome EC2Client::DescribeTrafficMirrorFilters(const DescribeTrafficMirrorFiltersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrafficMirrorFiltersOutcome(result.GetResultWithOwnership())
                            : DescribeTrafficMirrorFiltersOutcome(std::move(result.GetError()));
}

DescribeTrafficMirrorSessionsOutcome EC2Client::DescribeTrafficMirrorSessions(const DescribeTrafficMirrorSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrafficMirrorSessionsOutcome(result.GetResultWithOwnership())
                            : DescribeTrafficMirrorSessionsOutcome(std::move(result.GetError()));
}

DescribeTrafficMirrorTargetsOutcome EC2Client::DescribeTrafficMirrorTargets(const DescribeTrafficMirrorTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrafficMirrorTargetsOutcome(result.GetResultWithOwnership())
                            : DescribeTrafficMirrorTargetsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayAttachmentsOutcome EC2Client::DescribeTransitGatewayAttachments(
    const DescribeTransitGatewayAttachmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayAttachmentsOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayAttachmentsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayConnectPeersOutcome EC2Client::DescribeTransitGatewayConnectPeers(
    const DescribeTransitGatewayConnectPeersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayConnectPeersOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayConnectPeersOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayConnectsOutcome EC2Client::DescribeTransitGatewayConnects(
    const DescribeTransitGatewayConnectsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayConnectsOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayConnectsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayMeteringPoliciesOutcome EC2Client::DescribeTransitGatewayMeteringPolicies(
    const DescribeTransitGatewayMeteringPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayMeteringPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayMeteringPoliciesOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayMulticastDomainsOutcome EC2Client::DescribeTransitGatewayMulticastDomains(
    const DescribeTransitGatewayMulticastDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayMulticastDomainsOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayMulticastDomainsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayPeeringAttachmentsOutcome EC2Client::DescribeTransitGatewayPeeringAttachments(
    const DescribeTransitGatewayPeeringAttachmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayPeeringAttachmentsOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayPeeringAttachmentsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayPolicyTablesOutcome EC2Client::DescribeTransitGatewayPolicyTables(
    const DescribeTransitGatewayPolicyTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayPolicyTablesOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayPolicyTablesOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayRouteTableAnnouncementsOutcome EC2Client::DescribeTransitGatewayRouteTableAnnouncements(
    const DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayRouteTableAnnouncementsOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayRouteTableAnnouncementsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayRouteTablesOutcome EC2Client::DescribeTransitGatewayRouteTables(
    const DescribeTransitGatewayRouteTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayRouteTablesOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayRouteTablesOutcome(std::move(result.GetError()));
}

DescribeTransitGatewayVpcAttachmentsOutcome EC2Client::DescribeTransitGatewayVpcAttachments(
    const DescribeTransitGatewayVpcAttachmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewayVpcAttachmentsOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewayVpcAttachmentsOutcome(std::move(result.GetError()));
}

DescribeTransitGatewaysOutcome EC2Client::DescribeTransitGateways(const DescribeTransitGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTransitGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeTransitGatewaysOutcome(std::move(result.GetError()));
}

DescribeTrunkInterfaceAssociationsOutcome EC2Client::DescribeTrunkInterfaceAssociations(
    const DescribeTrunkInterfaceAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrunkInterfaceAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeTrunkInterfaceAssociationsOutcome(std::move(result.GetError()));
}

DescribeVerifiedAccessEndpointsOutcome EC2Client::DescribeVerifiedAccessEndpoints(
    const DescribeVerifiedAccessEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVerifiedAccessEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeVerifiedAccessEndpointsOutcome(std::move(result.GetError()));
}

DescribeVerifiedAccessGroupsOutcome EC2Client::DescribeVerifiedAccessGroups(const DescribeVerifiedAccessGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVerifiedAccessGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeVerifiedAccessGroupsOutcome(std::move(result.GetError()));
}

DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome EC2Client::DescribeVerifiedAccessInstanceLoggingConfigurations(
    const DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome(std::move(result.GetError()));
}

DescribeVerifiedAccessInstancesOutcome EC2Client::DescribeVerifiedAccessInstances(
    const DescribeVerifiedAccessInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVerifiedAccessInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeVerifiedAccessInstancesOutcome(std::move(result.GetError()));
}

DescribeVerifiedAccessTrustProvidersOutcome EC2Client::DescribeVerifiedAccessTrustProviders(
    const DescribeVerifiedAccessTrustProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVerifiedAccessTrustProvidersOutcome(result.GetResultWithOwnership())
                            : DescribeVerifiedAccessTrustProvidersOutcome(std::move(result.GetError()));
}

DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVolumeAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeVolumeAttributeOutcome(std::move(result.GetError()));
}

DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVolumeStatusOutcome(result.GetResultWithOwnership())
                            : DescribeVolumeStatusOutcome(std::move(result.GetError()));
}

DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVolumesOutcome(result.GetResultWithOwnership())
                            : DescribeVolumesOutcome(std::move(result.GetError()));
}

DescribeVolumesModificationsOutcome EC2Client::DescribeVolumesModifications(const DescribeVolumesModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVolumesModificationsOutcome(result.GetResultWithOwnership())
                            : DescribeVolumesModificationsOutcome(std::move(result.GetError()));
}

DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeVpcAttributeOutcome(std::move(result.GetError()));
}

DescribeVpcBlockPublicAccessExclusionsOutcome EC2Client::DescribeVpcBlockPublicAccessExclusions(
    const DescribeVpcBlockPublicAccessExclusionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcBlockPublicAccessExclusionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcBlockPublicAccessExclusionsOutcome(std::move(result.GetError()));
}

DescribeVpcBlockPublicAccessOptionsOutcome EC2Client::DescribeVpcBlockPublicAccessOptions(
    const DescribeVpcBlockPublicAccessOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcBlockPublicAccessOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcBlockPublicAccessOptionsOutcome(std::move(result.GetError()));
}

DescribeVpcClassicLinkOutcome EC2Client::DescribeVpcClassicLink(const DescribeVpcClassicLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcClassicLinkOutcome(result.GetResultWithOwnership())
                            : DescribeVpcClassicLinkOutcome(std::move(result.GetError()));
}

DescribeVpcClassicLinkDnsSupportOutcome EC2Client::DescribeVpcClassicLinkDnsSupport(
    const DescribeVpcClassicLinkDnsSupportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcClassicLinkDnsSupportOutcome(result.GetResultWithOwnership())
                            : DescribeVpcClassicLinkDnsSupportOutcome(std::move(result.GetError()));
}

DescribeVpcEncryptionControlsOutcome EC2Client::DescribeVpcEncryptionControls(const DescribeVpcEncryptionControlsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEncryptionControlsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEncryptionControlsOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointAssociationsOutcome EC2Client::DescribeVpcEndpointAssociations(
    const DescribeVpcEndpointAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointAssociationsOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointConnectionNotificationsOutcome EC2Client::DescribeVpcEndpointConnectionNotifications(
    const DescribeVpcEndpointConnectionNotificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointConnectionNotificationsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointConnectionNotificationsOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointConnectionsOutcome EC2Client::DescribeVpcEndpointConnections(
    const DescribeVpcEndpointConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointConnectionsOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointServiceConfigurationsOutcome EC2Client::DescribeVpcEndpointServiceConfigurations(
    const DescribeVpcEndpointServiceConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointServiceConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointServiceConfigurationsOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointServicePermissionsOutcome EC2Client::DescribeVpcEndpointServicePermissions(
    const DescribeVpcEndpointServicePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointServicePermissionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointServicePermissionsOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointServicesOutcome EC2Client::DescribeVpcEndpointServices(const DescribeVpcEndpointServicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointServicesOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointServicesOutcome(std::move(result.GetError()));
}

DescribeVpcEndpointsOutcome EC2Client::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcEndpointsOutcome(std::move(result.GetError()));
}

DescribeVpcPeeringConnectionsOutcome EC2Client::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcPeeringConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcPeeringConnectionsOutcome(std::move(result.GetError()));
}

DescribeVpcsOutcome EC2Client::DescribeVpcs(const DescribeVpcsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcsOutcome(result.GetResultWithOwnership()) : DescribeVpcsOutcome(std::move(result.GetError()));
}

DescribeVpnConcentratorsOutcome EC2Client::DescribeVpnConcentrators(const DescribeVpnConcentratorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpnConcentratorsOutcome(result.GetResultWithOwnership())
                            : DescribeVpnConcentratorsOutcome(std::move(result.GetError()));
}

DescribeVpnConnectionsOutcome EC2Client::DescribeVpnConnections(const DescribeVpnConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpnConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpnConnectionsOutcome(std::move(result.GetError()));
}

DescribeVpnGatewaysOutcome EC2Client::DescribeVpnGateways(const DescribeVpnGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpnGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeVpnGatewaysOutcome(std::move(result.GetError()));
}

DetachClassicLinkVpcOutcome EC2Client::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachClassicLinkVpcOutcome(result.GetResultWithOwnership())
                            : DetachClassicLinkVpcOutcome(std::move(result.GetError()));
}

DetachInternetGatewayOutcome EC2Client::DetachInternetGateway(const DetachInternetGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachInternetGatewayOutcome(result.GetResultWithOwnership())
                            : DetachInternetGatewayOutcome(std::move(result.GetError()));
}

DetachNetworkInterfaceOutcome EC2Client::DetachNetworkInterface(const DetachNetworkInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : DetachNetworkInterfaceOutcome(std::move(result.GetError()));
}

DetachVerifiedAccessTrustProviderOutcome EC2Client::DetachVerifiedAccessTrustProvider(
    const DetachVerifiedAccessTrustProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachVerifiedAccessTrustProviderOutcome(result.GetResultWithOwnership())
                            : DetachVerifiedAccessTrustProviderOutcome(std::move(result.GetError()));
}

DetachVolumeOutcome EC2Client::DetachVolume(const DetachVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachVolumeOutcome(result.GetResultWithOwnership()) : DetachVolumeOutcome(std::move(result.GetError()));
}

DetachVpnGatewayOutcome EC2Client::DetachVpnGateway(const DetachVpnGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachVpnGatewayOutcome(result.GetResultWithOwnership())
                            : DetachVpnGatewayOutcome(std::move(result.GetError()));
}

DisableAddressTransferOutcome EC2Client::DisableAddressTransfer(const DisableAddressTransferRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableAddressTransferOutcome(result.GetResultWithOwnership())
                            : DisableAddressTransferOutcome(std::move(result.GetError()));
}

DisableAllowedImagesSettingsOutcome EC2Client::DisableAllowedImagesSettings(const DisableAllowedImagesSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableAllowedImagesSettingsOutcome(result.GetResultWithOwnership())
                            : DisableAllowedImagesSettingsOutcome(std::move(result.GetError()));
}

DisableAwsNetworkPerformanceMetricSubscriptionOutcome EC2Client::DisableAwsNetworkPerformanceMetricSubscription(
    const DisableAwsNetworkPerformanceMetricSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableAwsNetworkPerformanceMetricSubscriptionOutcome(result.GetResultWithOwnership())
                            : DisableAwsNetworkPerformanceMetricSubscriptionOutcome(std::move(result.GetError()));
}

DisableCapacityManagerOutcome EC2Client::DisableCapacityManager(const DisableCapacityManagerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableCapacityManagerOutcome(result.GetResultWithOwnership())
                            : DisableCapacityManagerOutcome(std::move(result.GetError()));
}

DisableEbsEncryptionByDefaultOutcome EC2Client::DisableEbsEncryptionByDefault(const DisableEbsEncryptionByDefaultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableEbsEncryptionByDefaultOutcome(result.GetResultWithOwnership())
                            : DisableEbsEncryptionByDefaultOutcome(std::move(result.GetError()));
}

DisableFastLaunchOutcome EC2Client::DisableFastLaunch(const DisableFastLaunchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableFastLaunchOutcome(result.GetResultWithOwnership())
                            : DisableFastLaunchOutcome(std::move(result.GetError()));
}

DisableFastSnapshotRestoresOutcome EC2Client::DisableFastSnapshotRestores(const DisableFastSnapshotRestoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableFastSnapshotRestoresOutcome(result.GetResultWithOwnership())
                            : DisableFastSnapshotRestoresOutcome(std::move(result.GetError()));
}

DisableImageOutcome EC2Client::DisableImage(const DisableImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableImageOutcome(result.GetResultWithOwnership()) : DisableImageOutcome(std::move(result.GetError()));
}

DisableImageBlockPublicAccessOutcome EC2Client::DisableImageBlockPublicAccess(const DisableImageBlockPublicAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableImageBlockPublicAccessOutcome(result.GetResultWithOwnership())
                            : DisableImageBlockPublicAccessOutcome(std::move(result.GetError()));
}

DisableImageDeprecationOutcome EC2Client::DisableImageDeprecation(const DisableImageDeprecationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableImageDeprecationOutcome(result.GetResultWithOwnership())
                            : DisableImageDeprecationOutcome(std::move(result.GetError()));
}

DisableImageDeregistrationProtectionOutcome EC2Client::DisableImageDeregistrationProtection(
    const DisableImageDeregistrationProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableImageDeregistrationProtectionOutcome(result.GetResultWithOwnership())
                            : DisableImageDeregistrationProtectionOutcome(std::move(result.GetError()));
}

DisableInstanceSqlHaStandbyDetectionsOutcome EC2Client::DisableInstanceSqlHaStandbyDetections(
    const DisableInstanceSqlHaStandbyDetectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableInstanceSqlHaStandbyDetectionsOutcome(result.GetResultWithOwnership())
                            : DisableInstanceSqlHaStandbyDetectionsOutcome(std::move(result.GetError()));
}

DisableIpamOrganizationAdminAccountOutcome EC2Client::DisableIpamOrganizationAdminAccount(
    const DisableIpamOrganizationAdminAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableIpamOrganizationAdminAccountOutcome(result.GetResultWithOwnership())
                            : DisableIpamOrganizationAdminAccountOutcome(std::move(result.GetError()));
}

DisableIpamPolicyOutcome EC2Client::DisableIpamPolicy(const DisableIpamPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableIpamPolicyOutcome(result.GetResultWithOwnership())
                            : DisableIpamPolicyOutcome(std::move(result.GetError()));
}

DisableRouteServerPropagationOutcome EC2Client::DisableRouteServerPropagation(const DisableRouteServerPropagationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableRouteServerPropagationOutcome(result.GetResultWithOwnership())
                            : DisableRouteServerPropagationOutcome(std::move(result.GetError()));
}

DisableSerialConsoleAccessOutcome EC2Client::DisableSerialConsoleAccess(const DisableSerialConsoleAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableSerialConsoleAccessOutcome(result.GetResultWithOwnership())
                            : DisableSerialConsoleAccessOutcome(std::move(result.GetError()));
}

DisableSnapshotBlockPublicAccessOutcome EC2Client::DisableSnapshotBlockPublicAccess(
    const DisableSnapshotBlockPublicAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableSnapshotBlockPublicAccessOutcome(result.GetResultWithOwnership())
                            : DisableSnapshotBlockPublicAccessOutcome(std::move(result.GetError()));
}

DisableTransitGatewayRouteTablePropagationOutcome EC2Client::DisableTransitGatewayRouteTablePropagation(
    const DisableTransitGatewayRouteTablePropagationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableTransitGatewayRouteTablePropagationOutcome(result.GetResultWithOwnership())
                            : DisableTransitGatewayRouteTablePropagationOutcome(std::move(result.GetError()));
}

DisableVgwRoutePropagationOutcome EC2Client::DisableVgwRoutePropagation(const DisableVgwRoutePropagationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableVgwRoutePropagationOutcome(result.GetResultWithOwnership())
                            : DisableVgwRoutePropagationOutcome(std::move(result.GetError()));
}

DisableVpcClassicLinkOutcome EC2Client::DisableVpcClassicLink(const DisableVpcClassicLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableVpcClassicLinkOutcome(result.GetResultWithOwnership())
                            : DisableVpcClassicLinkOutcome(std::move(result.GetError()));
}

DisableVpcClassicLinkDnsSupportOutcome EC2Client::DisableVpcClassicLinkDnsSupport(
    const DisableVpcClassicLinkDnsSupportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableVpcClassicLinkDnsSupportOutcome(result.GetResultWithOwnership())
                            : DisableVpcClassicLinkDnsSupportOutcome(std::move(result.GetError()));
}

DisassociateAddressOutcome EC2Client::DisassociateAddress(const DisassociateAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateAddressOutcome(result.GetResultWithOwnership())
                            : DisassociateAddressOutcome(std::move(result.GetError()));
}

DisassociateCapacityReservationBillingOwnerOutcome EC2Client::DisassociateCapacityReservationBillingOwner(
    const DisassociateCapacityReservationBillingOwnerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateCapacityReservationBillingOwnerOutcome(result.GetResultWithOwnership())
                            : DisassociateCapacityReservationBillingOwnerOutcome(std::move(result.GetError()));
}

DisassociateClientVpnTargetNetworkOutcome EC2Client::DisassociateClientVpnTargetNetwork(
    const DisassociateClientVpnTargetNetworkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateClientVpnTargetNetworkOutcome(result.GetResultWithOwnership())
                            : DisassociateClientVpnTargetNetworkOutcome(std::move(result.GetError()));
}

DisassociateEnclaveCertificateIamRoleOutcome EC2Client::DisassociateEnclaveCertificateIamRole(
    const DisassociateEnclaveCertificateIamRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateEnclaveCertificateIamRoleOutcome(result.GetResultWithOwnership())
                            : DisassociateEnclaveCertificateIamRoleOutcome(std::move(result.GetError()));
}

DisassociateIamInstanceProfileOutcome EC2Client::DisassociateIamInstanceProfile(
    const DisassociateIamInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateIamInstanceProfileOutcome(result.GetResultWithOwnership())
                            : DisassociateIamInstanceProfileOutcome(std::move(result.GetError()));
}

DisassociateInstanceEventWindowOutcome EC2Client::DisassociateInstanceEventWindow(
    const DisassociateInstanceEventWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateInstanceEventWindowOutcome(result.GetResultWithOwnership())
                            : DisassociateInstanceEventWindowOutcome(std::move(result.GetError()));
}

DisassociateIpamByoasnOutcome EC2Client::DisassociateIpamByoasn(const DisassociateIpamByoasnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateIpamByoasnOutcome(result.GetResultWithOwnership())
                            : DisassociateIpamByoasnOutcome(std::move(result.GetError()));
}

DisassociateIpamResourceDiscoveryOutcome EC2Client::DisassociateIpamResourceDiscovery(
    const DisassociateIpamResourceDiscoveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateIpamResourceDiscoveryOutcome(result.GetResultWithOwnership())
                            : DisassociateIpamResourceDiscoveryOutcome(std::move(result.GetError()));
}

DisassociateNatGatewayAddressOutcome EC2Client::DisassociateNatGatewayAddress(const DisassociateNatGatewayAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateNatGatewayAddressOutcome(result.GetResultWithOwnership())
                            : DisassociateNatGatewayAddressOutcome(std::move(result.GetError()));
}

DisassociateRouteServerOutcome EC2Client::DisassociateRouteServer(const DisassociateRouteServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateRouteServerOutcome(result.GetResultWithOwnership())
                            : DisassociateRouteServerOutcome(std::move(result.GetError()));
}

DisassociateRouteTableOutcome EC2Client::DisassociateRouteTable(const DisassociateRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateRouteTableOutcome(result.GetResultWithOwnership())
                            : DisassociateRouteTableOutcome(std::move(result.GetError()));
}

DisassociateSecurityGroupVpcOutcome EC2Client::DisassociateSecurityGroupVpc(const DisassociateSecurityGroupVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateSecurityGroupVpcOutcome(result.GetResultWithOwnership())
                            : DisassociateSecurityGroupVpcOutcome(std::move(result.GetError()));
}

DisassociateSubnetCidrBlockOutcome EC2Client::DisassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateSubnetCidrBlockOutcome(result.GetResultWithOwnership())
                            : DisassociateSubnetCidrBlockOutcome(std::move(result.GetError()));
}

DisassociateTransitGatewayMulticastDomainOutcome EC2Client::DisassociateTransitGatewayMulticastDomain(
    const DisassociateTransitGatewayMulticastDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateTransitGatewayMulticastDomainOutcome(result.GetResultWithOwnership())
                            : DisassociateTransitGatewayMulticastDomainOutcome(std::move(result.GetError()));
}

DisassociateTransitGatewayPolicyTableOutcome EC2Client::DisassociateTransitGatewayPolicyTable(
    const DisassociateTransitGatewayPolicyTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateTransitGatewayPolicyTableOutcome(result.GetResultWithOwnership())
                            : DisassociateTransitGatewayPolicyTableOutcome(std::move(result.GetError()));
}

DisassociateTransitGatewayRouteTableOutcome EC2Client::DisassociateTransitGatewayRouteTable(
    const DisassociateTransitGatewayRouteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateTransitGatewayRouteTableOutcome(result.GetResultWithOwnership())
                            : DisassociateTransitGatewayRouteTableOutcome(std::move(result.GetError()));
}

DisassociateTrunkInterfaceOutcome EC2Client::DisassociateTrunkInterface(const DisassociateTrunkInterfaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateTrunkInterfaceOutcome(result.GetResultWithOwnership())
                            : DisassociateTrunkInterfaceOutcome(std::move(result.GetError()));
}

DisassociateVpcCidrBlockOutcome EC2Client::DisassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateVpcCidrBlockOutcome(result.GetResultWithOwnership())
                            : DisassociateVpcCidrBlockOutcome(std::move(result.GetError()));
}

EnableAddressTransferOutcome EC2Client::EnableAddressTransfer(const EnableAddressTransferRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableAddressTransferOutcome(result.GetResultWithOwnership())
                            : EnableAddressTransferOutcome(std::move(result.GetError()));
}

EnableAllowedImagesSettingsOutcome EC2Client::EnableAllowedImagesSettings(const EnableAllowedImagesSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableAllowedImagesSettingsOutcome(result.GetResultWithOwnership())
                            : EnableAllowedImagesSettingsOutcome(std::move(result.GetError()));
}

EnableAwsNetworkPerformanceMetricSubscriptionOutcome EC2Client::EnableAwsNetworkPerformanceMetricSubscription(
    const EnableAwsNetworkPerformanceMetricSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableAwsNetworkPerformanceMetricSubscriptionOutcome(result.GetResultWithOwnership())
                            : EnableAwsNetworkPerformanceMetricSubscriptionOutcome(std::move(result.GetError()));
}

EnableCapacityManagerOutcome EC2Client::EnableCapacityManager(const EnableCapacityManagerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableCapacityManagerOutcome(result.GetResultWithOwnership())
                            : EnableCapacityManagerOutcome(std::move(result.GetError()));
}

EnableEbsEncryptionByDefaultOutcome EC2Client::EnableEbsEncryptionByDefault(const EnableEbsEncryptionByDefaultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableEbsEncryptionByDefaultOutcome(result.GetResultWithOwnership())
                            : EnableEbsEncryptionByDefaultOutcome(std::move(result.GetError()));
}
