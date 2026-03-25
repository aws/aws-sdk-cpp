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
  return DescribeSpotFleetRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const {
  return DescribeSpotInstanceRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const {
  return DescribeSpotPriceHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const {
  return DescribeStaleSecurityGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeStoreImageTasksOutcome EC2Client::DescribeStoreImageTasks(const DescribeStoreImageTasksRequest& request) const {
  return DescribeStoreImageTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const {
  return DescribeSubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const {
  return DescribeTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrafficMirrorFilterRulesOutcome EC2Client::DescribeTrafficMirrorFilterRules(
    const DescribeTrafficMirrorFilterRulesRequest& request) const {
  return DescribeTrafficMirrorFilterRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrafficMirrorFiltersOutcome EC2Client::DescribeTrafficMirrorFilters(const DescribeTrafficMirrorFiltersRequest& request) const {
  return DescribeTrafficMirrorFiltersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrafficMirrorSessionsOutcome EC2Client::DescribeTrafficMirrorSessions(const DescribeTrafficMirrorSessionsRequest& request) const {
  return DescribeTrafficMirrorSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrafficMirrorTargetsOutcome EC2Client::DescribeTrafficMirrorTargets(const DescribeTrafficMirrorTargetsRequest& request) const {
  return DescribeTrafficMirrorTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayAttachmentsOutcome EC2Client::DescribeTransitGatewayAttachments(
    const DescribeTransitGatewayAttachmentsRequest& request) const {
  return DescribeTransitGatewayAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayConnectPeersOutcome EC2Client::DescribeTransitGatewayConnectPeers(
    const DescribeTransitGatewayConnectPeersRequest& request) const {
  return DescribeTransitGatewayConnectPeersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayConnectsOutcome EC2Client::DescribeTransitGatewayConnects(
    const DescribeTransitGatewayConnectsRequest& request) const {
  return DescribeTransitGatewayConnectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayMeteringPoliciesOutcome EC2Client::DescribeTransitGatewayMeteringPolicies(
    const DescribeTransitGatewayMeteringPoliciesRequest& request) const {
  return DescribeTransitGatewayMeteringPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayMulticastDomainsOutcome EC2Client::DescribeTransitGatewayMulticastDomains(
    const DescribeTransitGatewayMulticastDomainsRequest& request) const {
  return DescribeTransitGatewayMulticastDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayPeeringAttachmentsOutcome EC2Client::DescribeTransitGatewayPeeringAttachments(
    const DescribeTransitGatewayPeeringAttachmentsRequest& request) const {
  return DescribeTransitGatewayPeeringAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayPolicyTablesOutcome EC2Client::DescribeTransitGatewayPolicyTables(
    const DescribeTransitGatewayPolicyTablesRequest& request) const {
  return DescribeTransitGatewayPolicyTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayRouteTableAnnouncementsOutcome EC2Client::DescribeTransitGatewayRouteTableAnnouncements(
    const DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const {
  return DescribeTransitGatewayRouteTableAnnouncementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayRouteTablesOutcome EC2Client::DescribeTransitGatewayRouteTables(
    const DescribeTransitGatewayRouteTablesRequest& request) const {
  return DescribeTransitGatewayRouteTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewayVpcAttachmentsOutcome EC2Client::DescribeTransitGatewayVpcAttachments(
    const DescribeTransitGatewayVpcAttachmentsRequest& request) const {
  return DescribeTransitGatewayVpcAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransitGatewaysOutcome EC2Client::DescribeTransitGateways(const DescribeTransitGatewaysRequest& request) const {
  return DescribeTransitGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrunkInterfaceAssociationsOutcome EC2Client::DescribeTrunkInterfaceAssociations(
    const DescribeTrunkInterfaceAssociationsRequest& request) const {
  return DescribeTrunkInterfaceAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVerifiedAccessEndpointsOutcome EC2Client::DescribeVerifiedAccessEndpoints(
    const DescribeVerifiedAccessEndpointsRequest& request) const {
  return DescribeVerifiedAccessEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVerifiedAccessGroupsOutcome EC2Client::DescribeVerifiedAccessGroups(const DescribeVerifiedAccessGroupsRequest& request) const {
  return DescribeVerifiedAccessGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome EC2Client::DescribeVerifiedAccessInstanceLoggingConfigurations(
    const DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) const {
  return DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVerifiedAccessInstancesOutcome EC2Client::DescribeVerifiedAccessInstances(
    const DescribeVerifiedAccessInstancesRequest& request) const {
  return DescribeVerifiedAccessInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVerifiedAccessTrustProvidersOutcome EC2Client::DescribeVerifiedAccessTrustProviders(
    const DescribeVerifiedAccessTrustProvidersRequest& request) const {
  return DescribeVerifiedAccessTrustProvidersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const {
  return DescribeVolumeAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const {
  return DescribeVolumeStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const {
  return DescribeVolumesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVolumesModificationsOutcome EC2Client::DescribeVolumesModifications(const DescribeVolumesModificationsRequest& request) const {
  return DescribeVolumesModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const {
  return DescribeVpcAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcBlockPublicAccessExclusionsOutcome EC2Client::DescribeVpcBlockPublicAccessExclusions(
    const DescribeVpcBlockPublicAccessExclusionsRequest& request) const {
  return DescribeVpcBlockPublicAccessExclusionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcBlockPublicAccessOptionsOutcome EC2Client::DescribeVpcBlockPublicAccessOptions(
    const DescribeVpcBlockPublicAccessOptionsRequest& request) const {
  return DescribeVpcBlockPublicAccessOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcClassicLinkOutcome EC2Client::DescribeVpcClassicLink(const DescribeVpcClassicLinkRequest& request) const {
  return DescribeVpcClassicLinkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcClassicLinkDnsSupportOutcome EC2Client::DescribeVpcClassicLinkDnsSupport(
    const DescribeVpcClassicLinkDnsSupportRequest& request) const {
  return DescribeVpcClassicLinkDnsSupportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEncryptionControlsOutcome EC2Client::DescribeVpcEncryptionControls(const DescribeVpcEncryptionControlsRequest& request) const {
  return DescribeVpcEncryptionControlsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointAssociationsOutcome EC2Client::DescribeVpcEndpointAssociations(
    const DescribeVpcEndpointAssociationsRequest& request) const {
  return DescribeVpcEndpointAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointConnectionNotificationsOutcome EC2Client::DescribeVpcEndpointConnectionNotifications(
    const DescribeVpcEndpointConnectionNotificationsRequest& request) const {
  return DescribeVpcEndpointConnectionNotificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointConnectionsOutcome EC2Client::DescribeVpcEndpointConnections(
    const DescribeVpcEndpointConnectionsRequest& request) const {
  return DescribeVpcEndpointConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointServiceConfigurationsOutcome EC2Client::DescribeVpcEndpointServiceConfigurations(
    const DescribeVpcEndpointServiceConfigurationsRequest& request) const {
  return DescribeVpcEndpointServiceConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointServicePermissionsOutcome EC2Client::DescribeVpcEndpointServicePermissions(
    const DescribeVpcEndpointServicePermissionsRequest& request) const {
  return DescribeVpcEndpointServicePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointServicesOutcome EC2Client::DescribeVpcEndpointServices(const DescribeVpcEndpointServicesRequest& request) const {
  return DescribeVpcEndpointServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcEndpointsOutcome EC2Client::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const {
  return DescribeVpcEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcPeeringConnectionsOutcome EC2Client::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const {
  return DescribeVpcPeeringConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcsOutcome EC2Client::DescribeVpcs(const DescribeVpcsRequest& request) const {
  return DescribeVpcsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpnConcentratorsOutcome EC2Client::DescribeVpnConcentrators(const DescribeVpnConcentratorsRequest& request) const {
  return DescribeVpnConcentratorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpnConnectionsOutcome EC2Client::DescribeVpnConnections(const DescribeVpnConnectionsRequest& request) const {
  return DescribeVpnConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpnGatewaysOutcome EC2Client::DescribeVpnGateways(const DescribeVpnGatewaysRequest& request) const {
  return DescribeVpnGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachClassicLinkVpcOutcome EC2Client::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest& request) const {
  return DetachClassicLinkVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachInternetGatewayOutcome EC2Client::DetachInternetGateway(const DetachInternetGatewayRequest& request) const {
  return DetachInternetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachNetworkInterfaceOutcome EC2Client::DetachNetworkInterface(const DetachNetworkInterfaceRequest& request) const {
  return DetachNetworkInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachVerifiedAccessTrustProviderOutcome EC2Client::DetachVerifiedAccessTrustProvider(
    const DetachVerifiedAccessTrustProviderRequest& request) const {
  return DetachVerifiedAccessTrustProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachVolumeOutcome EC2Client::DetachVolume(const DetachVolumeRequest& request) const {
  return DetachVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachVpnGatewayOutcome EC2Client::DetachVpnGateway(const DetachVpnGatewayRequest& request) const {
  return DetachVpnGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAddressTransferOutcome EC2Client::DisableAddressTransfer(const DisableAddressTransferRequest& request) const {
  return DisableAddressTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAllowedImagesSettingsOutcome EC2Client::DisableAllowedImagesSettings(const DisableAllowedImagesSettingsRequest& request) const {
  return DisableAllowedImagesSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAwsNetworkPerformanceMetricSubscriptionOutcome EC2Client::DisableAwsNetworkPerformanceMetricSubscription(
    const DisableAwsNetworkPerformanceMetricSubscriptionRequest& request) const {
  return DisableAwsNetworkPerformanceMetricSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableCapacityManagerOutcome EC2Client::DisableCapacityManager(const DisableCapacityManagerRequest& request) const {
  return DisableCapacityManagerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableEbsEncryptionByDefaultOutcome EC2Client::DisableEbsEncryptionByDefault(const DisableEbsEncryptionByDefaultRequest& request) const {
  return DisableEbsEncryptionByDefaultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableFastLaunchOutcome EC2Client::DisableFastLaunch(const DisableFastLaunchRequest& request) const {
  return DisableFastLaunchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableFastSnapshotRestoresOutcome EC2Client::DisableFastSnapshotRestores(const DisableFastSnapshotRestoresRequest& request) const {
  return DisableFastSnapshotRestoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableImageOutcome EC2Client::DisableImage(const DisableImageRequest& request) const {
  return DisableImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableImageBlockPublicAccessOutcome EC2Client::DisableImageBlockPublicAccess(const DisableImageBlockPublicAccessRequest& request) const {
  return DisableImageBlockPublicAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableImageDeprecationOutcome EC2Client::DisableImageDeprecation(const DisableImageDeprecationRequest& request) const {
  return DisableImageDeprecationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableImageDeregistrationProtectionOutcome EC2Client::DisableImageDeregistrationProtection(
    const DisableImageDeregistrationProtectionRequest& request) const {
  return DisableImageDeregistrationProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableInstanceSqlHaStandbyDetectionsOutcome EC2Client::DisableInstanceSqlHaStandbyDetections(
    const DisableInstanceSqlHaStandbyDetectionsRequest& request) const {
  return DisableInstanceSqlHaStandbyDetectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableIpamOrganizationAdminAccountOutcome EC2Client::DisableIpamOrganizationAdminAccount(
    const DisableIpamOrganizationAdminAccountRequest& request) const {
  return DisableIpamOrganizationAdminAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableIpamPolicyOutcome EC2Client::DisableIpamPolicy(const DisableIpamPolicyRequest& request) const {
  return DisableIpamPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableRouteServerPropagationOutcome EC2Client::DisableRouteServerPropagation(const DisableRouteServerPropagationRequest& request) const {
  return DisableRouteServerPropagationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableSerialConsoleAccessOutcome EC2Client::DisableSerialConsoleAccess(const DisableSerialConsoleAccessRequest& request) const {
  return DisableSerialConsoleAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableSnapshotBlockPublicAccessOutcome EC2Client::DisableSnapshotBlockPublicAccess(
    const DisableSnapshotBlockPublicAccessRequest& request) const {
  return DisableSnapshotBlockPublicAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableTransitGatewayRouteTablePropagationOutcome EC2Client::DisableTransitGatewayRouteTablePropagation(
    const DisableTransitGatewayRouteTablePropagationRequest& request) const {
  return DisableTransitGatewayRouteTablePropagationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableVgwRoutePropagationOutcome EC2Client::DisableVgwRoutePropagation(const DisableVgwRoutePropagationRequest& request) const {
  return DisableVgwRoutePropagationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableVpcClassicLinkOutcome EC2Client::DisableVpcClassicLink(const DisableVpcClassicLinkRequest& request) const {
  return DisableVpcClassicLinkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableVpcClassicLinkDnsSupportOutcome EC2Client::DisableVpcClassicLinkDnsSupport(
    const DisableVpcClassicLinkDnsSupportRequest& request) const {
  return DisableVpcClassicLinkDnsSupportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateAddressOutcome EC2Client::DisassociateAddress(const DisassociateAddressRequest& request) const {
  return DisassociateAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateCapacityReservationBillingOwnerOutcome EC2Client::DisassociateCapacityReservationBillingOwner(
    const DisassociateCapacityReservationBillingOwnerRequest& request) const {
  return DisassociateCapacityReservationBillingOwnerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateClientVpnTargetNetworkOutcome EC2Client::DisassociateClientVpnTargetNetwork(
    const DisassociateClientVpnTargetNetworkRequest& request) const {
  return DisassociateClientVpnTargetNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateEnclaveCertificateIamRoleOutcome EC2Client::DisassociateEnclaveCertificateIamRole(
    const DisassociateEnclaveCertificateIamRoleRequest& request) const {
  return DisassociateEnclaveCertificateIamRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateIamInstanceProfileOutcome EC2Client::DisassociateIamInstanceProfile(
    const DisassociateIamInstanceProfileRequest& request) const {
  return DisassociateIamInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateInstanceEventWindowOutcome EC2Client::DisassociateInstanceEventWindow(
    const DisassociateInstanceEventWindowRequest& request) const {
  return DisassociateInstanceEventWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateIpamByoasnOutcome EC2Client::DisassociateIpamByoasn(const DisassociateIpamByoasnRequest& request) const {
  return DisassociateIpamByoasnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateIpamResourceDiscoveryOutcome EC2Client::DisassociateIpamResourceDiscovery(
    const DisassociateIpamResourceDiscoveryRequest& request) const {
  return DisassociateIpamResourceDiscoveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateNatGatewayAddressOutcome EC2Client::DisassociateNatGatewayAddress(const DisassociateNatGatewayAddressRequest& request) const {
  return DisassociateNatGatewayAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateRouteServerOutcome EC2Client::DisassociateRouteServer(const DisassociateRouteServerRequest& request) const {
  return DisassociateRouteServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateRouteTableOutcome EC2Client::DisassociateRouteTable(const DisassociateRouteTableRequest& request) const {
  return DisassociateRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSecurityGroupVpcOutcome EC2Client::DisassociateSecurityGroupVpc(const DisassociateSecurityGroupVpcRequest& request) const {
  return DisassociateSecurityGroupVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSubnetCidrBlockOutcome EC2Client::DisassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest& request) const {
  return DisassociateSubnetCidrBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTransitGatewayMulticastDomainOutcome EC2Client::DisassociateTransitGatewayMulticastDomain(
    const DisassociateTransitGatewayMulticastDomainRequest& request) const {
  return DisassociateTransitGatewayMulticastDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTransitGatewayPolicyTableOutcome EC2Client::DisassociateTransitGatewayPolicyTable(
    const DisassociateTransitGatewayPolicyTableRequest& request) const {
  return DisassociateTransitGatewayPolicyTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTransitGatewayRouteTableOutcome EC2Client::DisassociateTransitGatewayRouteTable(
    const DisassociateTransitGatewayRouteTableRequest& request) const {
  return DisassociateTransitGatewayRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTrunkInterfaceOutcome EC2Client::DisassociateTrunkInterface(const DisassociateTrunkInterfaceRequest& request) const {
  return DisassociateTrunkInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateVpcCidrBlockOutcome EC2Client::DisassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest& request) const {
  return DisassociateVpcCidrBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAddressTransferOutcome EC2Client::EnableAddressTransfer(const EnableAddressTransferRequest& request) const {
  return EnableAddressTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAllowedImagesSettingsOutcome EC2Client::EnableAllowedImagesSettings(const EnableAllowedImagesSettingsRequest& request) const {
  return EnableAllowedImagesSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAwsNetworkPerformanceMetricSubscriptionOutcome EC2Client::EnableAwsNetworkPerformanceMetricSubscription(
    const EnableAwsNetworkPerformanceMetricSubscriptionRequest& request) const {
  return EnableAwsNetworkPerformanceMetricSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableCapacityManagerOutcome EC2Client::EnableCapacityManager(const EnableCapacityManagerRequest& request) const {
  return EnableCapacityManagerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableEbsEncryptionByDefaultOutcome EC2Client::EnableEbsEncryptionByDefault(const EnableEbsEncryptionByDefaultRequest& request) const {
  return EnableEbsEncryptionByDefaultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
