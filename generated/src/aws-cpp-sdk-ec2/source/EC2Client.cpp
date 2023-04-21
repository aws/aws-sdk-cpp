/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/ec2/EC2Client.h>
#include <aws/ec2/EC2ErrorMarshaller.h>
#include <aws/ec2/EC2EndpointProvider.h>
#include <aws/ec2/model/AcceptAddressTransferRequest.h>
#include <aws/ec2/model/AcceptReservedInstancesExchangeQuoteRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/AcceptTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/AcceptVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/AcceptVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/AdvertiseByoipCidrRequest.h>
#include <aws/ec2/model/AllocateAddressRequest.h>
#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/ec2/model/AllocateIpamPoolCidrRequest.h>
#include <aws/ec2/model/ApplySecurityGroupsToClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssignIpv6AddressesRequest.h>
#include <aws/ec2/model/AssignPrivateIpAddressesRequest.h>
#include <aws/ec2/model/AssignPrivateNatGatewayAddressRequest.h>
#include <aws/ec2/model/AssociateAddressRequest.h>
#include <aws/ec2/model/AssociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssociateDhcpOptionsRequest.h>
#include <aws/ec2/model/AssociateEnclaveCertificateIamRoleRequest.h>
#include <aws/ec2/model/AssociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/AssociateInstanceEventWindowRequest.h>
#include <aws/ec2/model/AssociateIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/AssociateNatGatewayAddressRequest.h>
#include <aws/ec2/model/AssociateRouteTableRequest.h>
#include <aws/ec2/model/AssociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/AssociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/AssociateTrunkInterfaceRequest.h>
#include <aws/ec2/model/AssociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/AttachClassicLinkVpcRequest.h>
#include <aws/ec2/model/AttachInternetGatewayRequest.h>
#include <aws/ec2/model/AttachNetworkInterfaceRequest.h>
#include <aws/ec2/model/AttachVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/AttachVolumeRequest.h>
#include <aws/ec2/model/AttachVpnGatewayRequest.h>
#include <aws/ec2/model/AuthorizeClientVpnIngressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/AuthorizeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/BundleInstanceRequest.h>
#include <aws/ec2/model/CancelBundleTaskRequest.h>
#include <aws/ec2/model/CancelCapacityReservationRequest.h>
#include <aws/ec2/model/CancelCapacityReservationFleetsRequest.h>
#include <aws/ec2/model/CancelConversionTaskRequest.h>
#include <aws/ec2/model/CancelExportTaskRequest.h>
#include <aws/ec2/model/CancelImageLaunchPermissionRequest.h>
#include <aws/ec2/model/CancelImportTaskRequest.h>
#include <aws/ec2/model/CancelReservedInstancesListingRequest.h>
#include <aws/ec2/model/CancelSpotFleetRequestsRequest.h>
#include <aws/ec2/model/CancelSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/ConfirmProductInstanceRequest.h>
#include <aws/ec2/model/CopyFpgaImageRequest.h>
#include <aws/ec2/model/CopyImageRequest.h>
#include <aws/ec2/model/CopySnapshotRequest.h>
#include <aws/ec2/model/CreateCapacityReservationRequest.h>
#include <aws/ec2/model/CreateCapacityReservationFleetRequest.h>
#include <aws/ec2/model/CreateCarrierGatewayRequest.h>
#include <aws/ec2/model/CreateClientVpnEndpointRequest.h>
#include <aws/ec2/model/CreateClientVpnRouteRequest.h>
#include <aws/ec2/model/CreateCoipCidrRequest.h>
#include <aws/ec2/model/CreateCoipPoolRequest.h>
#include <aws/ec2/model/CreateCustomerGatewayRequest.h>
#include <aws/ec2/model/CreateDefaultSubnetRequest.h>
#include <aws/ec2/model/CreateDefaultVpcRequest.h>
#include <aws/ec2/model/CreateDhcpOptionsRequest.h>
#include <aws/ec2/model/CreateEgressOnlyInternetGatewayRequest.h>
#include <aws/ec2/model/CreateFleetRequest.h>
#include <aws/ec2/model/CreateFlowLogsRequest.h>
#include <aws/ec2/model/CreateFpgaImageRequest.h>
#include <aws/ec2/model/CreateImageRequest.h>
#include <aws/ec2/model/CreateInstanceEventWindowRequest.h>
#include <aws/ec2/model/CreateInstanceExportTaskRequest.h>
#include <aws/ec2/model/CreateInternetGatewayRequest.h>
#include <aws/ec2/model/CreateIpamRequest.h>
#include <aws/ec2/model/CreateIpamPoolRequest.h>
#include <aws/ec2/model/CreateIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/CreateIpamScopeRequest.h>
#include <aws/ec2/model/CreateKeyPairRequest.h>
#include <aws/ec2/model/CreateLaunchTemplateRequest.h>
#include <aws/ec2/model/CreateLaunchTemplateVersionRequest.h>
#include <aws/ec2/model/CreateLocalGatewayRouteRequest.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableRequest.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableVpcAssociationRequest.h>
#include <aws/ec2/model/CreateManagedPrefixListRequest.h>
#include <aws/ec2/model/CreateNatGatewayRequest.h>
#include <aws/ec2/model/CreateNetworkAclRequest.h>
#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/ec2/model/CreateNetworkInsightsAccessScopeRequest.h>
#include <aws/ec2/model/CreateNetworkInsightsPathRequest.h>
#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/ec2/model/CreateNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/CreatePlacementGroupRequest.h>
#include <aws/ec2/model/CreatePublicIpv4PoolRequest.h>
#include <aws/ec2/model/CreateReplaceRootVolumeTaskRequest.h>
#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/ec2/model/CreateRestoreImageTaskRequest.h>
#include <aws/ec2/model/CreateRouteRequest.h>
#include <aws/ec2/model/CreateRouteTableRequest.h>
#include <aws/ec2/model/CreateSecurityGroupRequest.h>
#include <aws/ec2/model/CreateSnapshotRequest.h>
#include <aws/ec2/model/CreateSnapshotsRequest.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/CreateStoreImageTaskRequest.h>
#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/ec2/model/CreateSubnetCidrReservationRequest.h>
#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRequest.h>
#include <aws/ec2/model/CreateTransitGatewayConnectRequest.h>
#include <aws/ec2/model/CreateTransitGatewayConnectPeerRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/CreateVolumeRequest.h>
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/ec2/model/CreateVpcEndpointRequest.h>
#include <aws/ec2/model/CreateVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRouteRequest.h>
#include <aws/ec2/model/CreateVpnGatewayRequest.h>
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
#include <aws/ec2/model/DeleteInstanceEventWindowRequest.h>
#include <aws/ec2/model/DeleteInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteIpamRequest.h>
#include <aws/ec2/model/DeleteIpamPoolRequest.h>
#include <aws/ec2/model/DeleteIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/DeleteIpamScopeRequest.h>
#include <aws/ec2/model/DeleteKeyPairRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVpcAssociationRequest.h>
#include <aws/ec2/model/DeleteManagedPrefixListRequest.h>
#include <aws/ec2/model/DeleteNatGatewayRequest.h>
#include <aws/ec2/model/DeleteNetworkAclRequest.h>
#include <aws/ec2/model/DeleteNetworkAclEntryRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeAnalysisRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAnalysisRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsPathRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfaceRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/DeletePlacementGroupRequest.h>
#include <aws/ec2/model/DeletePublicIpv4PoolRequest.h>
#include <aws/ec2/model/DeleteQueuedReservedInstancesRequest.h>
#include <aws/ec2/model/DeleteRouteRequest.h>
#include <aws/ec2/model/DeleteRouteTableRequest.h>
#include <aws/ec2/model/DeleteSecurityGroupRequest.h>
#include <aws/ec2/model/DeleteSnapshotRequest.h>
#include <aws/ec2/model/DeleteSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DeleteSubnetRequest.h>
#include <aws/ec2/model/DeleteSubnetCidrReservationRequest.h>
#include <aws/ec2/model/DeleteTagsRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectPeerRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/DeleteVolumeRequest.h>
#include <aws/ec2/model/DeleteVpcRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointsRequest.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRouteRequest.h>
#include <aws/ec2/model/DeleteVpnGatewayRequest.h>
#include <aws/ec2/model/DeprovisionByoipCidrRequest.h>
#include <aws/ec2/model/DeprovisionIpamPoolCidrRequest.h>
#include <aws/ec2/model/DeprovisionPublicIpv4PoolCidrRequest.h>
#include <aws/ec2/model/DeregisterImageRequest.h>
#include <aws/ec2/model/DeregisterInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupMembersRequest.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupSourcesRequest.h>
#include <aws/ec2/model/DescribeAccountAttributesRequest.h>
#include <aws/ec2/model/DescribeAddressTransfersRequest.h>
#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/ec2/model/DescribeAddressesAttributeRequest.h>
#include <aws/ec2/model/DescribeAggregateIdFormatRequest.h>
#include <aws/ec2/model/DescribeAvailabilityZonesRequest.h>
#include <aws/ec2/model/DescribeAwsNetworkPerformanceMetricSubscriptionsRequest.h>
#include <aws/ec2/model/DescribeBundleTasksRequest.h>
#include <aws/ec2/model/DescribeByoipCidrsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationFleetsRequest.h>
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
#include <aws/ec2/model/DescribeDhcpOptionsRequest.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeElasticGpusRequest.h>
#include <aws/ec2/model/DescribeExportImageTasksRequest.h>
#include <aws/ec2/model/DescribeExportTasksRequest.h>
#include <aws/ec2/model/DescribeFastLaunchImagesRequest.h>
#include <aws/ec2/model/DescribeFastSnapshotRestoresRequest.h>
#include <aws/ec2/model/DescribeFleetHistoryRequest.h>
#include <aws/ec2/model/DescribeFleetInstancesRequest.h>
#include <aws/ec2/model/DescribeFleetsRequest.h>
#include <aws/ec2/model/DescribeFlowLogsRequest.h>
#include <aws/ec2/model/DescribeFpgaImageAttributeRequest.h>
#include <aws/ec2/model/DescribeFpgaImagesRequest.h>
#include <aws/ec2/model/DescribeHostReservationOfferingsRequest.h>
#include <aws/ec2/model/DescribeHostReservationsRequest.h>
#include <aws/ec2/model/DescribeHostsRequest.h>
#include <aws/ec2/model/DescribeIamInstanceProfileAssociationsRequest.h>
#include <aws/ec2/model/DescribeIdFormatRequest.h>
#include <aws/ec2/model/DescribeIdentityIdFormatRequest.h>
#include <aws/ec2/model/DescribeImageAttributeRequest.h>
#include <aws/ec2/model/DescribeImagesRequest.h>
#include <aws/ec2/model/DescribeImportImageTasksRequest.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksRequest.h>
#include <aws/ec2/model/DescribeInstanceAttributeRequest.h>
#include <aws/ec2/model/DescribeInstanceCreditSpecificationsRequest.h>
#include <aws/ec2/model/DescribeInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/DescribeInstanceEventWindowsRequest.h>
#include <aws/ec2/model/DescribeInstanceStatusRequest.h>
#include <aws/ec2/model/DescribeInstanceTypeOfferingsRequest.h>
#include <aws/ec2/model/DescribeInstanceTypesRequest.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeIpamPoolsRequest.h>
#include <aws/ec2/model/DescribeIpamResourceDiscoveriesRequest.h>
#include <aws/ec2/model/DescribeIpamResourceDiscoveryAssociationsRequest.h>
#include <aws/ec2/model/DescribeIpamScopesRequest.h>
#include <aws/ec2/model/DescribeIpamsRequest.h>
#include <aws/ec2/model/DescribeIpv6PoolsRequest.h>
#include <aws/ec2/model/DescribeKeyPairsRequest.h>
#include <aws/ec2/model/DescribeLaunchTemplateVersionsRequest.h>
#include <aws/ec2/model/DescribeLaunchTemplatesRequest.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTableVpcAssociationsRequest.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTablesRequest.h>
#include <aws/ec2/model/DescribeLocalGatewayVirtualInterfaceGroupsRequest.h>
#include <aws/ec2/model/DescribeLocalGatewayVirtualInterfacesRequest.h>
#include <aws/ec2/model/DescribeLocalGatewaysRequest.h>
#include <aws/ec2/model/DescribeManagedPrefixListsRequest.h>
#include <aws/ec2/model/DescribeMovingAddressesRequest.h>
#include <aws/ec2/model/DescribeNatGatewaysRequest.h>
#include <aws/ec2/model/DescribeNetworkAclsRequest.h>
#include <aws/ec2/model/DescribeNetworkInsightsAccessScopeAnalysesRequest.h>
#include <aws/ec2/model/DescribeNetworkInsightsAccessScopesRequest.h>
#include <aws/ec2/model/DescribeNetworkInsightsAnalysesRequest.h>
#include <aws/ec2/model/DescribeNetworkInsightsPathsRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfacePermissionsRequest.h>
#include <aws/ec2/model/DescribeNetworkInterfacesRequest.h>
#include <aws/ec2/model/DescribePlacementGroupsRequest.h>
#include <aws/ec2/model/DescribePrefixListsRequest.h>
#include <aws/ec2/model/DescribePrincipalIdFormatRequest.h>
#include <aws/ec2/model/DescribePublicIpv4PoolsRequest.h>
#include <aws/ec2/model/DescribeRegionsRequest.h>
#include <aws/ec2/model/DescribeReplaceRootVolumeTasksRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesListingsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/ec2/model/DescribeRouteTablesRequest.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityRequest.h>
#include <aws/ec2/model/DescribeScheduledInstancesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupReferencesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupRulesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeSnapshotAttributeRequest.h>
#include <aws/ec2/model/DescribeSnapshotTierStatusRequest.h>
#include <aws/ec2/model/DescribeSnapshotsRequest.h>
#include <aws/ec2/model/DescribeSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DescribeSpotFleetInstancesRequest.h>
#include <aws/ec2/model/DescribeSpotFleetRequestHistoryRequest.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryRequest.h>
#include <aws/ec2/model/DescribeStaleSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeStoreImageTasksRequest.h>
#include <aws/ec2/model/DescribeSubnetsRequest.h>
#include <aws/ec2/model/DescribeTagsRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorFiltersRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorSessionsRequest.h>
#include <aws/ec2/model/DescribeTrafficMirrorTargetsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayAttachmentsRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectPeersRequest.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectsRequest.h>
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
#include <aws/ec2/model/DescribeVolumesRequest.h>
#include <aws/ec2/model/DescribeVolumesModificationsRequest.h>
#include <aws/ec2/model/DescribeVpcAttributeRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkRequest.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServicePermissionsRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointServicesRequest.h>
#include <aws/ec2/model/DescribeVpcEndpointsRequest.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpcsRequest.h>
#include <aws/ec2/model/DescribeVpnConnectionsRequest.h>
#include <aws/ec2/model/DescribeVpnGatewaysRequest.h>
#include <aws/ec2/model/DetachClassicLinkVpcRequest.h>
#include <aws/ec2/model/DetachInternetGatewayRequest.h>
#include <aws/ec2/model/DetachNetworkInterfaceRequest.h>
#include <aws/ec2/model/DetachVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/DetachVolumeRequest.h>
#include <aws/ec2/model/DetachVpnGatewayRequest.h>
#include <aws/ec2/model/DisableAddressTransferRequest.h>
#include <aws/ec2/model/DisableAwsNetworkPerformanceMetricSubscriptionRequest.h>
#include <aws/ec2/model/DisableEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/DisableFastLaunchRequest.h>
#include <aws/ec2/model/DisableFastSnapshotRestoresRequest.h>
#include <aws/ec2/model/DisableImageDeprecationRequest.h>
#include <aws/ec2/model/DisableIpamOrganizationAdminAccountRequest.h>
#include <aws/ec2/model/DisableSerialConsoleAccessRequest.h>
#include <aws/ec2/model/DisableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/ec2/model/DisableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkRequest.h>
#include <aws/ec2/model/DisableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/DisassociateAddressRequest.h>
#include <aws/ec2/model/DisassociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/DisassociateEnclaveCertificateIamRoleRequest.h>
#include <aws/ec2/model/DisassociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/DisassociateInstanceEventWindowRequest.h>
#include <aws/ec2/model/DisassociateIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/DisassociateNatGatewayAddressRequest.h>
#include <aws/ec2/model/DisassociateRouteTableRequest.h>
#include <aws/ec2/model/DisassociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DisassociateTrunkInterfaceRequest.h>
#include <aws/ec2/model/DisassociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/EnableAddressTransferRequest.h>
#include <aws/ec2/model/EnableAwsNetworkPerformanceMetricSubscriptionRequest.h>
#include <aws/ec2/model/EnableEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/EnableFastLaunchRequest.h>
#include <aws/ec2/model/EnableFastSnapshotRestoresRequest.h>
#include <aws/ec2/model/EnableImageDeprecationRequest.h>
#include <aws/ec2/model/EnableIpamOrganizationAdminAccountRequest.h>
#include <aws/ec2/model/EnableReachabilityAnalyzerOrganizationSharingRequest.h>
#include <aws/ec2/model/EnableSerialConsoleAccessRequest.h>
#include <aws/ec2/model/EnableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/ec2/model/EnableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/EnableVolumeIORequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkRequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/ExportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/ec2/model/ExportClientVpnClientConfigurationRequest.h>
#include <aws/ec2/model/ExportImageRequest.h>
#include <aws/ec2/model/ExportTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/GetAssociatedEnclaveCertificateIamRolesRequest.h>
#include <aws/ec2/model/GetAssociatedIpv6PoolCidrsRequest.h>
#include <aws/ec2/model/GetAwsNetworkPerformanceDataRequest.h>
#include <aws/ec2/model/GetCapacityReservationUsageRequest.h>
#include <aws/ec2/model/GetCoipPoolUsageRequest.h>
#include <aws/ec2/model/GetConsoleOutputRequest.h>
#include <aws/ec2/model/GetConsoleScreenshotRequest.h>
#include <aws/ec2/model/GetDefaultCreditSpecificationRequest.h>
#include <aws/ec2/model/GetEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/GetEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/GetFlowLogsIntegrationTemplateRequest.h>
#include <aws/ec2/model/GetGroupsForCapacityReservationRequest.h>
#include <aws/ec2/model/GetHostReservationPurchasePreviewRequest.h>
#include <aws/ec2/model/GetInstanceTypesFromInstanceRequirementsRequest.h>
#include <aws/ec2/model/GetInstanceUefiDataRequest.h>
#include <aws/ec2/model/GetIpamAddressHistoryRequest.h>
#include <aws/ec2/model/GetIpamDiscoveredAccountsRequest.h>
#include <aws/ec2/model/GetIpamDiscoveredResourceCidrsRequest.h>
#include <aws/ec2/model/GetIpamPoolAllocationsRequest.h>
#include <aws/ec2/model/GetIpamPoolCidrsRequest.h>
#include <aws/ec2/model/GetIpamResourceCidrsRequest.h>
#include <aws/ec2/model/GetLaunchTemplateDataRequest.h>
#include <aws/ec2/model/GetManagedPrefixListAssociationsRequest.h>
#include <aws/ec2/model/GetManagedPrefixListEntriesRequest.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeAnalysisFindingsRequest.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeContentRequest.h>
#include <aws/ec2/model/GetPasswordDataRequest.h>
#include <aws/ec2/model/GetReservedInstancesExchangeQuoteRequest.h>
#include <aws/ec2/model/GetSerialConsoleAccessStatusRequest.h>
#include <aws/ec2/model/GetSpotPlacementScoresRequest.h>
#include <aws/ec2/model/GetSubnetCidrReservationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayAttachmentPropagationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableEntriesRequest.h>
#include <aws/ec2/model/GetTransitGatewayPrefixListReferencesRequest.h>
#include <aws/ec2/model/GetTransitGatewayRouteTableAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayRouteTablePropagationsRequest.h>
#include <aws/ec2/model/GetVerifiedAccessEndpointPolicyRequest.h>
#include <aws/ec2/model/GetVerifiedAccessGroupPolicyRequest.h>
#include <aws/ec2/model/GetVpnConnectionDeviceSampleConfigurationRequest.h>
#include <aws/ec2/model/GetVpnConnectionDeviceTypesRequest.h>
#include <aws/ec2/model/GetVpnTunnelReplacementStatusRequest.h>
#include <aws/ec2/model/ImportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/ec2/model/ImportImageRequest.h>
#include <aws/ec2/model/ImportInstanceRequest.h>
#include <aws/ec2/model/ImportKeyPairRequest.h>
#include <aws/ec2/model/ImportSnapshotRequest.h>
#include <aws/ec2/model/ImportVolumeRequest.h>
#include <aws/ec2/model/ListImagesInRecycleBinRequest.h>
#include <aws/ec2/model/ListSnapshotsInRecycleBinRequest.h>
#include <aws/ec2/model/ModifyAddressAttributeRequest.h>
#include <aws/ec2/model/ModifyAvailabilityZoneGroupRequest.h>
#include <aws/ec2/model/ModifyCapacityReservationRequest.h>
#include <aws/ec2/model/ModifyCapacityReservationFleetRequest.h>
#include <aws/ec2/model/ModifyClientVpnEndpointRequest.h>
#include <aws/ec2/model/ModifyDefaultCreditSpecificationRequest.h>
#include <aws/ec2/model/ModifyEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/ModifyFleetRequest.h>
#include <aws/ec2/model/ModifyFpgaImageAttributeRequest.h>
#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/ec2/model/ModifyIdFormatRequest.h>
#include <aws/ec2/model/ModifyIdentityIdFormatRequest.h>
#include <aws/ec2/model/ModifyImageAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceCapacityReservationAttributesRequest.h>
#include <aws/ec2/model/ModifyInstanceCreditSpecificationRequest.h>
#include <aws/ec2/model/ModifyInstanceEventStartTimeRequest.h>
#include <aws/ec2/model/ModifyInstanceEventWindowRequest.h>
#include <aws/ec2/model/ModifyInstanceMaintenanceOptionsRequest.h>
#include <aws/ec2/model/ModifyInstanceMetadataOptionsRequest.h>
#include <aws/ec2/model/ModifyInstancePlacementRequest.h>
#include <aws/ec2/model/ModifyIpamRequest.h>
#include <aws/ec2/model/ModifyIpamPoolRequest.h>
#include <aws/ec2/model/ModifyIpamResourceCidrRequest.h>
#include <aws/ec2/model/ModifyIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/ModifyIpamScopeRequest.h>
#include <aws/ec2/model/ModifyLaunchTemplateRequest.h>
#include <aws/ec2/model/ModifyLocalGatewayRouteRequest.h>
#include <aws/ec2/model/ModifyManagedPrefixListRequest.h>
#include <aws/ec2/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ModifyPrivateDnsNameOptionsRequest.h>
#include <aws/ec2/model/ModifyReservedInstancesRequest.h>
#include <aws/ec2/model/ModifySecurityGroupRulesRequest.h>
#include <aws/ec2/model/ModifySnapshotAttributeRequest.h>
#include <aws/ec2/model/ModifySnapshotTierRequest.h>
#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/ec2/model/ModifySubnetAttributeRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterNetworkServicesRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointPolicyRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessGroupPolicyRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessInstanceLoggingConfigurationRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/ModifyVolumeRequest.h>
#include <aws/ec2/model/ModifyVolumeAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePayerResponsibilityRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePermissionsRequest.h>
#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsRequest.h>
#include <aws/ec2/model/ModifyVpcTenancyRequest.h>
#include <aws/ec2/model/ModifyVpnConnectionRequest.h>
#include <aws/ec2/model/ModifyVpnConnectionOptionsRequest.h>
#include <aws/ec2/model/ModifyVpnTunnelCertificateRequest.h>
#include <aws/ec2/model/ModifyVpnTunnelOptionsRequest.h>
#include <aws/ec2/model/MonitorInstancesRequest.h>
#include <aws/ec2/model/MoveAddressToVpcRequest.h>
#include <aws/ec2/model/MoveByoipCidrToIpamRequest.h>
#include <aws/ec2/model/ProvisionByoipCidrRequest.h>
#include <aws/ec2/model/ProvisionIpamPoolCidrRequest.h>
#include <aws/ec2/model/ProvisionPublicIpv4PoolCidrRequest.h>
#include <aws/ec2/model/PurchaseHostReservationRequest.h>
#include <aws/ec2/model/PurchaseReservedInstancesOfferingRequest.h>
#include <aws/ec2/model/PurchaseScheduledInstancesRequest.h>
#include <aws/ec2/model/RebootInstancesRequest.h>
#include <aws/ec2/model/RegisterImageRequest.h>
#include <aws/ec2/model/RegisterInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupMembersRequest.h>
#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupSourcesRequest.h>
#include <aws/ec2/model/RejectTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/ec2/model/RejectTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/RejectTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/RejectVpcEndpointConnectionsRequest.h>
#include <aws/ec2/model/RejectVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/ReleaseAddressRequest.h>
#include <aws/ec2/model/ReleaseHostsRequest.h>
#include <aws/ec2/model/ReleaseIpamPoolAllocationRequest.h>
#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationRequest.h>
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
#include <aws/ec2/model/RevokeClientVpnIngressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupEgressRequest.h>
#include <aws/ec2/model/RevokeSecurityGroupIngressRequest.h>
#include <aws/ec2/model/RunInstancesRequest.h>
#include <aws/ec2/model/RunScheduledInstancesRequest.h>
#include <aws/ec2/model/SearchLocalGatewayRoutesRequest.h>
#include <aws/ec2/model/SearchTransitGatewayMulticastGroupsRequest.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/SendDiagnosticInterruptRequest.h>
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
#include <aws/ec2/model/UnmonitorInstancesRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressRequest.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsIngressRequest.h>
#include <aws/ec2/model/WithdrawByoipCidrRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2;
using namespace Aws::EC2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* EC2Client::SERVICE_NAME = "ec2";
const char* EC2Client::ALLOCATION_TAG = "EC2Client";

EC2Client::EC2Client(const EC2::EC2ClientConfiguration& clientConfiguration,
                     std::shared_ptr<EC2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const AWSCredentials& credentials,
                     std::shared_ptr<EC2EndpointProviderBase> endpointProvider,
                     const EC2::EC2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EC2EndpointProviderBase> endpointProvider,
                     const EC2::EC2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  EC2Client::EC2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

EC2Client::EC2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EC2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<EC2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
EC2Client::~EC2Client()
{
}

std::shared_ptr<EC2EndpointProviderBase>& EC2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void EC2Client::init(const EC2::EC2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EC2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void EC2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptAddressTransferOutcome EC2Client::AcceptAddressTransfer(const AcceptAddressTransferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptAddressTransferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptReservedInstancesExchangeQuoteOutcome EC2Client::AcceptReservedInstancesExchangeQuote(const AcceptReservedInstancesExchangeQuoteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptReservedInstancesExchangeQuoteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptTransitGatewayMulticastDomainAssociationsOutcome EC2Client::AcceptTransitGatewayMulticastDomainAssociations(const AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptTransitGatewayMulticastDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptTransitGatewayPeeringAttachmentOutcome EC2Client::AcceptTransitGatewayPeeringAttachment(const AcceptTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptTransitGatewayVpcAttachmentOutcome EC2Client::AcceptTransitGatewayVpcAttachment(const AcceptTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptVpcEndpointConnectionsOutcome EC2Client::AcceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptVpcEndpointConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptVpcPeeringConnectionOutcome EC2Client::AcceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AdvertiseByoipCidrOutcome EC2Client::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdvertiseByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdvertiseByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdvertiseByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AllocateAddressOutcome EC2Client::AllocateAddress(const AllocateAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AllocateHostsOutcome EC2Client::AllocateHosts(const AllocateHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AllocateIpamPoolCidrOutcome EC2Client::AllocateIpamPoolCidr(const AllocateIpamPoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateIpamPoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ApplySecurityGroupsToClientVpnTargetNetworkOutcome EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplySecurityGroupsToClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplySecurityGroupsToClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApplySecurityGroupsToClientVpnTargetNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssignIpv6AddressesOutcome EC2Client::AssignIpv6Addresses(const AssignIpv6AddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignIpv6AddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssignPrivateIpAddressesOutcome EC2Client::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignPrivateIpAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssignPrivateNatGatewayAddressOutcome EC2Client::AssignPrivateNatGatewayAddress(const AssignPrivateNatGatewayAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignPrivateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignPrivateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignPrivateNatGatewayAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateAddressOutcome EC2Client::AssociateAddress(const AssociateAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateClientVpnTargetNetworkOutcome EC2Client::AssociateClientVpnTargetNetwork(const AssociateClientVpnTargetNetworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateClientVpnTargetNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateDhcpOptionsOutcome EC2Client::AssociateDhcpOptions(const AssociateDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateEnclaveCertificateIamRoleOutcome EC2Client::AssociateEnclaveCertificateIamRole(const AssociateEnclaveCertificateIamRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateEnclaveCertificateIamRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateIamInstanceProfileOutcome EC2Client::AssociateIamInstanceProfile(const AssociateIamInstanceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateIamInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateInstanceEventWindowOutcome EC2Client::AssociateInstanceEventWindow(const AssociateInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateIpamResourceDiscoveryOutcome EC2Client::AssociateIpamResourceDiscovery(const AssociateIpamResourceDiscoveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateIpamResourceDiscoveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateNatGatewayAddressOutcome EC2Client::AssociateNatGatewayAddress(const AssociateNatGatewayAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateNatGatewayAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateRouteTableOutcome EC2Client::AssociateRouteTable(const AssociateRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateSubnetCidrBlockOutcome EC2Client::AssociateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSubnetCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTransitGatewayMulticastDomainOutcome EC2Client::AssociateTransitGatewayMulticastDomain(const AssociateTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTransitGatewayPolicyTableOutcome EC2Client::AssociateTransitGatewayPolicyTable(const AssociateTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTransitGatewayRouteTableOutcome EC2Client::AssociateTransitGatewayRouteTable(const AssociateTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTrunkInterfaceOutcome EC2Client::AssociateTrunkInterface(const AssociateTrunkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTrunkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateVpcCidrBlockOutcome EC2Client::AssociateVpcCidrBlock(const AssociateVpcCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateVpcCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachClassicLinkVpcOutcome EC2Client::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachClassicLinkVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachInternetGatewayOutcome EC2Client::AttachInternetGateway(const AttachInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachNetworkInterfaceOutcome EC2Client::AttachNetworkInterface(const AttachNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachVerifiedAccessTrustProviderOutcome EC2Client::AttachVerifiedAccessTrustProvider(const AttachVerifiedAccessTrustProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachVerifiedAccessTrustProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachVolumeOutcome EC2Client::AttachVolume(const AttachVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachVpnGatewayOutcome EC2Client::AttachVpnGateway(const AttachVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeClientVpnIngressOutcome EC2Client::AuthorizeClientVpnIngress(const AuthorizeClientVpnIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeClientVpnIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeSecurityGroupEgressOutcome EC2Client::AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeSecurityGroupEgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeSecurityGroupIngressOutcome EC2Client::AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

BundleInstanceOutcome EC2Client::BundleInstance(const BundleInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BundleInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BundleInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BundleInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelBundleTaskOutcome EC2Client::CancelBundleTask(const CancelBundleTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelBundleTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelBundleTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelBundleTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelCapacityReservationOutcome EC2Client::CancelCapacityReservation(const CancelCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelCapacityReservationFleetsOutcome EC2Client::CancelCapacityReservationFleets(const CancelCapacityReservationFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelCapacityReservationFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelConversionTaskOutcome EC2Client::CancelConversionTask(const CancelConversionTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelConversionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelConversionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelConversionTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelExportTaskOutcome EC2Client::CancelExportTask(const CancelExportTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelExportTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelImageLaunchPermissionOutcome EC2Client::CancelImageLaunchPermission(const CancelImageLaunchPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelImageLaunchPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelImageLaunchPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelImageLaunchPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelImportTaskOutcome EC2Client::CancelImportTask(const CancelImportTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelImportTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelReservedInstancesListingOutcome EC2Client::CancelReservedInstancesListing(const CancelReservedInstancesListingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelReservedInstancesListingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelSpotFleetRequestsOutcome EC2Client::CancelSpotFleetRequests(const CancelSpotFleetRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelSpotFleetRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelSpotInstanceRequestsOutcome EC2Client::CancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelSpotInstanceRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ConfirmProductInstanceOutcome EC2Client::ConfirmProductInstance(const ConfirmProductInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmProductInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmProductInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmProductInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopyFpgaImageOutcome EC2Client::CopyFpgaImage(const CopyFpgaImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyFpgaImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopyImageOutcome EC2Client::CopyImage(const CopyImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopySnapshotOutcome EC2Client::CopySnapshot(const CopySnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  CopySnapshotRequest newRequest = request;
  if (request.SourceRegionHasBeenSet())
  {
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPresignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{ "DestinationRegion", m_region }}, 3600));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopySnapshotOutcome(MakeRequest(newRequest, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCapacityReservationOutcome EC2Client::CreateCapacityReservation(const CreateCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCapacityReservationFleetOutcome EC2Client::CreateCapacityReservationFleet(const CreateCapacityReservationFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCapacityReservationFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCarrierGatewayOutcome EC2Client::CreateCarrierGateway(const CreateCarrierGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCarrierGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClientVpnEndpointOutcome EC2Client::CreateClientVpnEndpoint(const CreateClientVpnEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClientVpnEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClientVpnRouteOutcome EC2Client::CreateClientVpnRoute(const CreateClientVpnRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClientVpnRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCoipCidrOutcome EC2Client::CreateCoipCidr(const CreateCoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCoipPoolOutcome EC2Client::CreateCoipPool(const CreateCoipPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCoipPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCustomerGatewayOutcome EC2Client::CreateCustomerGateway(const CreateCustomerGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCustomerGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDefaultSubnetOutcome EC2Client::CreateDefaultSubnet(const CreateDefaultSubnetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDefaultSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDefaultSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDefaultSubnetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDefaultVpcOutcome EC2Client::CreateDefaultVpc(const CreateDefaultVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDefaultVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDefaultVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDefaultVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDhcpOptionsOutcome EC2Client::CreateDhcpOptions(const CreateDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateEgressOnlyInternetGatewayOutcome EC2Client::CreateEgressOnlyInternetGateway(const CreateEgressOnlyInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEgressOnlyInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFleetOutcome EC2Client::CreateFleet(const CreateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFlowLogsOutcome EC2Client::CreateFlowLogs(const CreateFlowLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFlowLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFpgaImageOutcome EC2Client::CreateFpgaImage(const CreateFpgaImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFpgaImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateImageOutcome EC2Client::CreateImage(const CreateImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInstanceEventWindowOutcome EC2Client::CreateInstanceEventWindow(const CreateInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInstanceExportTaskOutcome EC2Client::CreateInstanceExportTask(const CreateInstanceExportTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceExportTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInternetGatewayOutcome EC2Client::CreateInternetGateway(const CreateInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamOutcome EC2Client::CreateIpam(const CreateIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamPoolOutcome EC2Client::CreateIpamPool(const CreateIpamPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamResourceDiscoveryOutcome EC2Client::CreateIpamResourceDiscovery(const CreateIpamResourceDiscoveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamResourceDiscoveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamScopeOutcome EC2Client::CreateIpamScope(const CreateIpamScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateKeyPairOutcome EC2Client::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLaunchTemplateOutcome EC2Client::CreateLaunchTemplate(const CreateLaunchTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLaunchTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLaunchTemplateVersionOutcome EC2Client::CreateLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunchTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunchTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLaunchTemplateVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteOutcome EC2Client::CreateLocalGatewayRoute(const CreateLocalGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteTableOutcome EC2Client::CreateLocalGatewayRouteTable(const CreateLocalGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteTableVpcAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVpcAssociation(const CreateLocalGatewayRouteTableVpcAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteTableVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateManagedPrefixListOutcome EC2Client::CreateManagedPrefixList(const CreateManagedPrefixListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateManagedPrefixListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNatGatewayOutcome EC2Client::CreateNatGateway(const CreateNatGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNatGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkAclOutcome EC2Client::CreateNetworkAcl(const CreateNetworkAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkAclEntryOutcome EC2Client::CreateNetworkAclEntry(const CreateNetworkAclEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkAclEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInsightsAccessScopeOutcome EC2Client::CreateNetworkInsightsAccessScope(const CreateNetworkInsightsAccessScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInsightsAccessScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInsightsPathOutcome EC2Client::CreateNetworkInsightsPath(const CreateNetworkInsightsPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInsightsPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInterfaceOutcome EC2Client::CreateNetworkInterface(const CreateNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInterfacePermissionOutcome EC2Client::CreateNetworkInterfacePermission(const CreateNetworkInterfacePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInterfacePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePlacementGroupOutcome EC2Client::CreatePlacementGroup(const CreatePlacementGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePlacementGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePublicIpv4PoolOutcome EC2Client::CreatePublicIpv4Pool(const CreatePublicIpv4PoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePublicIpv4PoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateReplaceRootVolumeTaskOutcome EC2Client::CreateReplaceRootVolumeTask(const CreateReplaceRootVolumeTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplaceRootVolumeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplaceRootVolumeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplaceRootVolumeTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateReservedInstancesListingOutcome EC2Client::CreateReservedInstancesListing(const CreateReservedInstancesListingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReservedInstancesListingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRestoreImageTaskOutcome EC2Client::CreateRestoreImageTask(const CreateRestoreImageTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRestoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRestoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRestoreImageTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRouteOutcome EC2Client::CreateRoute(const CreateRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRouteTableOutcome EC2Client::CreateRouteTable(const CreateRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSecurityGroupOutcome EC2Client::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotOutcome EC2Client::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotsOutcome EC2Client::CreateSnapshots(const CreateSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSpotDatafeedSubscriptionOutcome EC2Client::CreateSpotDatafeedSubscription(const CreateSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStoreImageTaskOutcome EC2Client::CreateStoreImageTask(const CreateStoreImageTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStoreImageTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSubnetOutcome EC2Client::CreateSubnet(const CreateSubnetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSubnetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSubnetCidrReservationOutcome EC2Client::CreateSubnetCidrReservation(const CreateSubnetCidrReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSubnetCidrReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTagsOutcome EC2Client::CreateTags(const CreateTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorFilterOutcome EC2Client::CreateTrafficMirrorFilter(const CreateTrafficMirrorFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorFilterRuleOutcome EC2Client::CreateTrafficMirrorFilterRule(const CreateTrafficMirrorFilterRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorFilterRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorSessionOutcome EC2Client::CreateTrafficMirrorSession(const CreateTrafficMirrorSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorTargetOutcome EC2Client::CreateTrafficMirrorTarget(const CreateTrafficMirrorTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayOutcome EC2Client::CreateTransitGateway(const CreateTransitGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayConnectOutcome EC2Client::CreateTransitGatewayConnect(const CreateTransitGatewayConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayConnectPeerOutcome EC2Client::CreateTransitGatewayConnectPeer(const CreateTransitGatewayConnectPeerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayConnectPeerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayMulticastDomainOutcome EC2Client::CreateTransitGatewayMulticastDomain(const CreateTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayPeeringAttachmentOutcome EC2Client::CreateTransitGatewayPeeringAttachment(const CreateTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayPolicyTableOutcome EC2Client::CreateTransitGatewayPolicyTable(const CreateTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayPrefixListReferenceOutcome EC2Client::CreateTransitGatewayPrefixListReference(const CreateTransitGatewayPrefixListReferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayPrefixListReferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayRouteOutcome EC2Client::CreateTransitGatewayRoute(const CreateTransitGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayRouteTableOutcome EC2Client::CreateTransitGatewayRouteTable(const CreateTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayRouteTableAnnouncementOutcome EC2Client::CreateTransitGatewayRouteTableAnnouncement(const CreateTransitGatewayRouteTableAnnouncementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayRouteTableAnnouncementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayVpcAttachmentOutcome EC2Client::CreateTransitGatewayVpcAttachment(const CreateTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVerifiedAccessEndpointOutcome EC2Client::CreateVerifiedAccessEndpoint(const CreateVerifiedAccessEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVerifiedAccessEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVerifiedAccessEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVerifiedAccessEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVerifiedAccessGroupOutcome EC2Client::CreateVerifiedAccessGroup(const CreateVerifiedAccessGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVerifiedAccessGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVerifiedAccessGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVerifiedAccessGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVerifiedAccessInstanceOutcome EC2Client::CreateVerifiedAccessInstance(const CreateVerifiedAccessInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVerifiedAccessInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVerifiedAccessInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVerifiedAccessInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVerifiedAccessTrustProviderOutcome EC2Client::CreateVerifiedAccessTrustProvider(const CreateVerifiedAccessTrustProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVerifiedAccessTrustProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVolumeOutcome EC2Client::CreateVolume(const CreateVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcOutcome EC2Client::CreateVpc(const CreateVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcEndpointOutcome EC2Client::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcEndpointConnectionNotificationOutcome EC2Client::CreateVpcEndpointConnectionNotification(const CreateVpcEndpointConnectionNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointConnectionNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcEndpointServiceConfigurationOutcome EC2Client::CreateVpcEndpointServiceConfiguration(const CreateVpcEndpointServiceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointServiceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcPeeringConnectionOutcome EC2Client::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpnConnectionOutcome EC2Client::CreateVpnConnection(const CreateVpnConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpnConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpnConnectionRouteOutcome EC2Client::CreateVpnConnectionRoute(const CreateVpnConnectionRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpnConnectionRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpnGatewayOutcome EC2Client::CreateVpnGateway(const CreateVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCarrierGatewayOutcome EC2Client::DeleteCarrierGateway(const DeleteCarrierGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCarrierGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClientVpnEndpointOutcome EC2Client::DeleteClientVpnEndpoint(const DeleteClientVpnEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClientVpnEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClientVpnRouteOutcome EC2Client::DeleteClientVpnRoute(const DeleteClientVpnRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClientVpnRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCoipCidrOutcome EC2Client::DeleteCoipCidr(const DeleteCoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCoipPoolOutcome EC2Client::DeleteCoipPool(const DeleteCoipPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCoipPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCustomerGatewayOutcome EC2Client::DeleteCustomerGateway(const DeleteCustomerGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCustomerGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDhcpOptionsOutcome EC2Client::DeleteDhcpOptions(const DeleteDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEgressOnlyInternetGatewayOutcome EC2Client::DeleteEgressOnlyInternetGateway(const DeleteEgressOnlyInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEgressOnlyInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteFleetsOutcome EC2Client::DeleteFleets(const DeleteFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteFlowLogsOutcome EC2Client::DeleteFlowLogs(const DeleteFlowLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFlowLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteFpgaImageOutcome EC2Client::DeleteFpgaImage(const DeleteFpgaImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFpgaImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInstanceEventWindowOutcome EC2Client::DeleteInstanceEventWindow(const DeleteInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInternetGatewayOutcome EC2Client::DeleteInternetGateway(const DeleteInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamOutcome EC2Client::DeleteIpam(const DeleteIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamPoolOutcome EC2Client::DeleteIpamPool(const DeleteIpamPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamResourceDiscoveryOutcome EC2Client::DeleteIpamResourceDiscovery(const DeleteIpamResourceDiscoveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamResourceDiscoveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamScopeOutcome EC2Client::DeleteIpamScope(const DeleteIpamScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteKeyPairOutcome EC2Client::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLaunchTemplateOutcome EC2Client::DeleteLaunchTemplate(const DeleteLaunchTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLaunchTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLaunchTemplateVersionsOutcome EC2Client::DeleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLaunchTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteOutcome EC2Client::DeleteLocalGatewayRoute(const DeleteLocalGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteTableOutcome EC2Client::DeleteLocalGatewayRouteTable(const DeleteLocalGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteTableVpcAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVpcAssociation(const DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteTableVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteManagedPrefixListOutcome EC2Client::DeleteManagedPrefixList(const DeleteManagedPrefixListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteManagedPrefixListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNatGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkAclOutcome EC2Client::DeleteNetworkAcl(const DeleteNetworkAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkAclEntryOutcome EC2Client::DeleteNetworkAclEntry(const DeleteNetworkAclEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkAclEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsAccessScopeOutcome EC2Client::DeleteNetworkInsightsAccessScope(const DeleteNetworkInsightsAccessScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsAccessScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsAccessScopeAnalysisOutcome EC2Client::DeleteNetworkInsightsAccessScopeAnalysis(const DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsAccessScopeAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsAnalysisOutcome EC2Client::DeleteNetworkInsightsAnalysis(const DeleteNetworkInsightsAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsPathOutcome EC2Client::DeleteNetworkInsightsPath(const DeleteNetworkInsightsPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInterfaceOutcome EC2Client::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInterfacePermissionOutcome EC2Client::DeleteNetworkInterfacePermission(const DeleteNetworkInterfacePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInterfacePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePlacementGroupOutcome EC2Client::DeletePlacementGroup(const DeletePlacementGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePlacementGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePublicIpv4PoolOutcome EC2Client::DeletePublicIpv4Pool(const DeletePublicIpv4PoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePublicIpv4PoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteQueuedReservedInstancesOutcome EC2Client::DeleteQueuedReservedInstances(const DeleteQueuedReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueuedReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueuedReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteQueuedReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRouteOutcome EC2Client::DeleteRoute(const DeleteRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRouteTableOutcome EC2Client::DeleteRouteTable(const DeleteRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSecurityGroupOutcome EC2Client::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotOutcome EC2Client::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSpotDatafeedSubscriptionOutcome EC2Client::DeleteSpotDatafeedSubscription(const DeleteSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSubnetOutcome EC2Client::DeleteSubnet(const DeleteSubnetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSubnetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSubnetCidrReservationOutcome EC2Client::DeleteSubnetCidrReservation(const DeleteSubnetCidrReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSubnetCidrReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTagsOutcome EC2Client::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorFilterOutcome EC2Client::DeleteTrafficMirrorFilter(const DeleteTrafficMirrorFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorFilterRuleOutcome EC2Client::DeleteTrafficMirrorFilterRule(const DeleteTrafficMirrorFilterRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorFilterRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorSessionOutcome EC2Client::DeleteTrafficMirrorSession(const DeleteTrafficMirrorSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorTargetOutcome EC2Client::DeleteTrafficMirrorTarget(const DeleteTrafficMirrorTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayOutcome EC2Client::DeleteTransitGateway(const DeleteTransitGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayConnectOutcome EC2Client::DeleteTransitGatewayConnect(const DeleteTransitGatewayConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayConnectPeerOutcome EC2Client::DeleteTransitGatewayConnectPeer(const DeleteTransitGatewayConnectPeerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayConnectPeerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayMulticastDomainOutcome EC2Client::DeleteTransitGatewayMulticastDomain(const DeleteTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayPeeringAttachmentOutcome EC2Client::DeleteTransitGatewayPeeringAttachment(const DeleteTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayPolicyTableOutcome EC2Client::DeleteTransitGatewayPolicyTable(const DeleteTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayPrefixListReferenceOutcome EC2Client::DeleteTransitGatewayPrefixListReference(const DeleteTransitGatewayPrefixListReferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayPrefixListReferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayRouteOutcome EC2Client::DeleteTransitGatewayRoute(const DeleteTransitGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayRouteTableOutcome EC2Client::DeleteTransitGatewayRouteTable(const DeleteTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayRouteTableAnnouncementOutcome EC2Client::DeleteTransitGatewayRouteTableAnnouncement(const DeleteTransitGatewayRouteTableAnnouncementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayRouteTableAnnouncementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayVpcAttachmentOutcome EC2Client::DeleteTransitGatewayVpcAttachment(const DeleteTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVerifiedAccessEndpointOutcome EC2Client::DeleteVerifiedAccessEndpoint(const DeleteVerifiedAccessEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVerifiedAccessEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVerifiedAccessEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVerifiedAccessEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVerifiedAccessGroupOutcome EC2Client::DeleteVerifiedAccessGroup(const DeleteVerifiedAccessGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVerifiedAccessGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVerifiedAccessGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVerifiedAccessGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVerifiedAccessInstanceOutcome EC2Client::DeleteVerifiedAccessInstance(const DeleteVerifiedAccessInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVerifiedAccessInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVerifiedAccessInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVerifiedAccessInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVerifiedAccessTrustProviderOutcome EC2Client::DeleteVerifiedAccessTrustProvider(const DeleteVerifiedAccessTrustProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVerifiedAccessTrustProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVolumeOutcome EC2Client::DeleteVolume(const DeleteVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcOutcome EC2Client::DeleteVpc(const DeleteVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcEndpointConnectionNotificationsOutcome EC2Client::DeleteVpcEndpointConnectionNotifications(const DeleteVpcEndpointConnectionNotificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointConnectionNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcEndpointServiceConfigurationsOutcome EC2Client::DeleteVpcEndpointServiceConfigurations(const DeleteVpcEndpointServiceConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointServiceConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcEndpointsOutcome EC2Client::DeleteVpcEndpoints(const DeleteVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcPeeringConnectionOutcome EC2Client::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpnConnectionOutcome EC2Client::DeleteVpnConnection(const DeleteVpnConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpnConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpnConnectionRouteOutcome EC2Client::DeleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpnConnectionRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpnGatewayOutcome EC2Client::DeleteVpnGateway(const DeleteVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeprovisionByoipCidrOutcome EC2Client::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeprovisionIpamPoolCidrOutcome EC2Client::DeprovisionIpamPoolCidr(const DeprovisionIpamPoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionIpamPoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeprovisionPublicIpv4PoolCidrOutcome EC2Client::DeprovisionPublicIpv4PoolCidr(const DeprovisionPublicIpv4PoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionPublicIpv4PoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterImageOutcome EC2Client::DeregisterImage(const DeregisterImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterInstanceEventNotificationAttributesOutcome EC2Client::DeregisterInstanceEventNotificationAttributes(const DeregisterInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTransitGatewayMulticastGroupMembersOutcome EC2Client::DeregisterTransitGatewayMulticastGroupMembers(const DeregisterTransitGatewayMulticastGroupMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTransitGatewayMulticastGroupMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::DeregisterTransitGatewayMulticastGroupSources(const DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTransitGatewayMulticastGroupSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcome EC2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAddressTransfersOutcome EC2Client::DescribeAddressTransfers(const DescribeAddressTransfersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddressTransfers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAddressTransfers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAddressTransfersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAddressesOutcome EC2Client::DescribeAddresses(const DescribeAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAddressesAttributeOutcome EC2Client::DescribeAddressesAttribute(const DescribeAddressesAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddressesAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAddressesAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAddressesAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAggregateIdFormatOutcome EC2Client::DescribeAggregateIdFormat(const DescribeAggregateIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAggregateIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAggregateIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAggregateIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAvailabilityZonesOutcome EC2Client::DescribeAvailabilityZones(const DescribeAvailabilityZonesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAvailabilityZones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAvailabilityZones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAvailabilityZonesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome EC2Client::DescribeAwsNetworkPerformanceMetricSubscriptions(const DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAwsNetworkPerformanceMetricSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAwsNetworkPerformanceMetricSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeBundleTasksOutcome EC2Client::DescribeBundleTasks(const DescribeBundleTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBundleTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBundleTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBundleTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeByoipCidrsOutcome EC2Client::DescribeByoipCidrs(const DescribeByoipCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeByoipCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeByoipCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeByoipCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCapacityReservationFleetsOutcome EC2Client::DescribeCapacityReservationFleets(const DescribeCapacityReservationFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCapacityReservationFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCapacityReservationsOutcome EC2Client::DescribeCapacityReservations(const DescribeCapacityReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCapacityReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCapacityReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCapacityReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCarrierGatewaysOutcome EC2Client::DescribeCarrierGateways(const DescribeCarrierGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCarrierGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCarrierGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCarrierGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClassicLinkInstancesOutcome EC2Client::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClassicLinkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClassicLinkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClassicLinkInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnAuthorizationRulesOutcome EC2Client::DescribeClientVpnAuthorizationRules(const DescribeClientVpnAuthorizationRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnAuthorizationRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnAuthorizationRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnAuthorizationRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnConnectionsOutcome EC2Client::DescribeClientVpnConnections(const DescribeClientVpnConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnEndpointsOutcome EC2Client::DescribeClientVpnEndpoints(const DescribeClientVpnEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnRoutesOutcome EC2Client::DescribeClientVpnRoutes(const DescribeClientVpnRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnTargetNetworksOutcome EC2Client::DescribeClientVpnTargetNetworks(const DescribeClientVpnTargetNetworksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnTargetNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnTargetNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnTargetNetworksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCoipPoolsOutcome EC2Client::DescribeCoipPools(const DescribeCoipPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCoipPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCoipPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCoipPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConversionTasksOutcome EC2Client::DescribeConversionTasks(const DescribeConversionTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConversionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConversionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConversionTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCustomerGatewaysOutcome EC2Client::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomerGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomerGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomerGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDhcpOptionsOutcome EC2Client::DescribeDhcpOptions(const DescribeDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEgressOnlyInternetGatewaysOutcome EC2Client::DescribeEgressOnlyInternetGateways(const DescribeEgressOnlyInternetGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEgressOnlyInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEgressOnlyInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEgressOnlyInternetGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeElasticGpusOutcome EC2Client::DescribeElasticGpus(const DescribeElasticGpusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticGpus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticGpus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeElasticGpusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExportImageTasksOutcome EC2Client::DescribeExportImageTasks(const DescribeExportImageTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExportImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExportTasksOutcome EC2Client::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExportTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExportTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExportTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFastLaunchImagesOutcome EC2Client::DescribeFastLaunchImages(const DescribeFastLaunchImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFastLaunchImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFastLaunchImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFastLaunchImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFastSnapshotRestoresOutcome EC2Client::DescribeFastSnapshotRestores(const DescribeFastSnapshotRestoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFastSnapshotRestoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFleetHistoryOutcome EC2Client::DescribeFleetHistory(const DescribeFleetHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFleetInstancesOutcome EC2Client::DescribeFleetInstances(const DescribeFleetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFleetsOutcome EC2Client::DescribeFleets(const DescribeFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFlowLogsOutcome EC2Client::DescribeFlowLogs(const DescribeFlowLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFlowLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFpgaImageAttributeOutcome EC2Client::DescribeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFpgaImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFpgaImagesOutcome EC2Client::DescribeFpgaImages(const DescribeFpgaImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFpgaImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFpgaImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFpgaImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHostReservationOfferingsOutcome EC2Client::DescribeHostReservationOfferings(const DescribeHostReservationOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHostReservationOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHostReservationOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHostReservationOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHostReservationsOutcome EC2Client::DescribeHostReservations(const DescribeHostReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHostReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHostReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHostReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHostsOutcome EC2Client::DescribeHosts(const DescribeHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIamInstanceProfileAssociationsOutcome EC2Client::DescribeIamInstanceProfileAssociations(const DescribeIamInstanceProfileAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIamInstanceProfileAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIamInstanceProfileAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIamInstanceProfileAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIdFormatOutcome EC2Client::DescribeIdFormat(const DescribeIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIdentityIdFormatOutcome EC2Client::DescribeIdentityIdFormat(const DescribeIdentityIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImageAttributeOutcome EC2Client::DescribeImageAttribute(const DescribeImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImagesOutcome EC2Client::DescribeImages(const DescribeImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImportImageTasksOutcome EC2Client::DescribeImportImageTasks(const DescribeImportImageTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImportImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImportSnapshotTasksOutcome EC2Client::DescribeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImportSnapshotTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImportSnapshotTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImportSnapshotTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceAttributeOutcome EC2Client::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceCreditSpecificationsOutcome EC2Client::DescribeInstanceCreditSpecifications(const DescribeInstanceCreditSpecificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceCreditSpecifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceCreditSpecifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceCreditSpecificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceEventNotificationAttributesOutcome EC2Client::DescribeInstanceEventNotificationAttributes(const DescribeInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceEventWindowsOutcome EC2Client::DescribeInstanceEventWindows(const DescribeInstanceEventWindowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceEventWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceEventWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceEventWindowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceTypeOfferingsOutcome EC2Client::DescribeInstanceTypeOfferings(const DescribeInstanceTypeOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceTypeOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceTypesOutcome EC2Client::DescribeInstanceTypes(const DescribeInstanceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInternetGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamPoolsOutcome EC2Client::DescribeIpamPools(const DescribeIpamPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamResourceDiscoveriesOutcome EC2Client::DescribeIpamResourceDiscoveries(const DescribeIpamResourceDiscoveriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamResourceDiscoveries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamResourceDiscoveries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamResourceDiscoveriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamResourceDiscoveryAssociationsOutcome EC2Client::DescribeIpamResourceDiscoveryAssociations(const DescribeIpamResourceDiscoveryAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamResourceDiscoveryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamResourceDiscoveryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamResourceDiscoveryAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamScopesOutcome EC2Client::DescribeIpamScopes(const DescribeIpamScopesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamsOutcome EC2Client::DescribeIpams(const DescribeIpamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpv6PoolsOutcome EC2Client::DescribeIpv6Pools(const DescribeIpv6PoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpv6Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpv6Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpv6PoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeKeyPairsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLaunchTemplateVersionsOutcome EC2Client::DescribeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLaunchTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLaunchTemplatesOutcome EC2Client::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLaunchTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayRouteTableVpcAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVpcAssociations(const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayRouteTableVpcAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayRouteTablesOutcome EC2Client::DescribeLocalGatewayRouteTables(const DescribeLocalGatewayRouteTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayVirtualInterfaceGroupsOutcome EC2Client::DescribeLocalGatewayVirtualInterfaceGroups(const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayVirtualInterfaceGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayVirtualInterfacesOutcome EC2Client::DescribeLocalGatewayVirtualInterfaces(const DescribeLocalGatewayVirtualInterfacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayVirtualInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewaysOutcome EC2Client::DescribeLocalGateways(const DescribeLocalGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeManagedPrefixListsOutcome EC2Client::DescribeManagedPrefixLists(const DescribeManagedPrefixListsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeManagedPrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeManagedPrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeManagedPrefixListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMovingAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMovingAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMovingAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNatGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNatGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNatGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkAcls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkAcls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkAclsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsAccessScopeAnalysesOutcome EC2Client::DescribeNetworkInsightsAccessScopeAnalyses(const DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsAccessScopeAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsAccessScopesOutcome EC2Client::DescribeNetworkInsightsAccessScopes(const DescribeNetworkInsightsAccessScopesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsAccessScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsAnalysesOutcome EC2Client::DescribeNetworkInsightsAnalyses(const DescribeNetworkInsightsAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsPathsOutcome EC2Client::DescribeNetworkInsightsPaths(const DescribeNetworkInsightsPathsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsPathsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInterfacePermissionsOutcome EC2Client::DescribeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInterfacePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePlacementGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePrefixListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePrincipalIdFormatOutcome EC2Client::DescribePrincipalIdFormat(const DescribePrincipalIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePrincipalIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePrincipalIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePrincipalIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePublicIpv4PoolsOutcome EC2Client::DescribePublicIpv4Pools(const DescribePublicIpv4PoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePublicIpv4Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePublicIpv4Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePublicIpv4PoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRegionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReplaceRootVolumeTasksOutcome EC2Client::DescribeReplaceRootVolumeTasks(const DescribeReplaceRootVolumeTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplaceRootVolumeTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(const DescribeReservedInstancesListingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesListingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScheduledInstanceAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityGroupReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSecurityGroupRulesOutcome EC2Client::DescribeSecurityGroupRules(const DescribeSecurityGroupRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityGroupRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotTierStatusOutcome EC2Client::DescribeSnapshotTierStatus(const DescribeSnapshotTierStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotTierStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotFleetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotFleetRequestHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotFleetRequestsOutcome EC2Client::DescribeSpotFleetRequests(const DescribeSpotFleetRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotFleetRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotInstanceRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotPriceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotPriceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotPriceHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStaleSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStoreImageTasksOutcome EC2Client::DescribeStoreImageTasks(const DescribeStoreImageTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStoreImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStoreImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStoreImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSubnetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrafficMirrorFiltersOutcome EC2Client::DescribeTrafficMirrorFilters(const DescribeTrafficMirrorFiltersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrafficMirrorFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrafficMirrorSessionsOutcome EC2Client::DescribeTrafficMirrorSessions(const DescribeTrafficMirrorSessionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrafficMirrorSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrafficMirrorTargetsOutcome EC2Client::DescribeTrafficMirrorTargets(const DescribeTrafficMirrorTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrafficMirrorTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayAttachmentsOutcome EC2Client::DescribeTransitGatewayAttachments(const DescribeTransitGatewayAttachmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayConnectPeersOutcome EC2Client::DescribeTransitGatewayConnectPeers(const DescribeTransitGatewayConnectPeersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayConnectPeersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayConnectsOutcome EC2Client::DescribeTransitGatewayConnects(const DescribeTransitGatewayConnectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayMulticastDomainsOutcome EC2Client::DescribeTransitGatewayMulticastDomains(const DescribeTransitGatewayMulticastDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayMulticastDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayPeeringAttachmentsOutcome EC2Client::DescribeTransitGatewayPeeringAttachments(const DescribeTransitGatewayPeeringAttachmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayPeeringAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayPolicyTablesOutcome EC2Client::DescribeTransitGatewayPolicyTables(const DescribeTransitGatewayPolicyTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayPolicyTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayRouteTableAnnouncementsOutcome EC2Client::DescribeTransitGatewayRouteTableAnnouncements(const DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayRouteTableAnnouncementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayRouteTablesOutcome EC2Client::DescribeTransitGatewayRouteTables(const DescribeTransitGatewayRouteTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayVpcAttachmentsOutcome EC2Client::DescribeTransitGatewayVpcAttachments(const DescribeTransitGatewayVpcAttachmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayVpcAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewaysOutcome EC2Client::DescribeTransitGateways(const DescribeTransitGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrunkInterfaceAssociationsOutcome EC2Client::DescribeTrunkInterfaceAssociations(const DescribeTrunkInterfaceAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrunkInterfaceAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVerifiedAccessEndpointsOutcome EC2Client::DescribeVerifiedAccessEndpoints(const DescribeVerifiedAccessEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVerifiedAccessEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVerifiedAccessGroupsOutcome EC2Client::DescribeVerifiedAccessGroups(const DescribeVerifiedAccessGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVerifiedAccessGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome EC2Client::DescribeVerifiedAccessInstanceLoggingConfigurations(const DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessInstanceLoggingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessInstanceLoggingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVerifiedAccessInstancesOutcome EC2Client::DescribeVerifiedAccessInstances(const DescribeVerifiedAccessInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVerifiedAccessInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVerifiedAccessTrustProvidersOutcome EC2Client::DescribeVerifiedAccessTrustProviders(const DescribeVerifiedAccessTrustProvidersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessTrustProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessTrustProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVerifiedAccessTrustProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumeAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumesModificationsOutcome EC2Client::DescribeVolumesModifications(const DescribeVolumesModificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumesModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcClassicLinkOutcome EC2Client::DescribeVpcClassicLink(const DescribeVpcClassicLinkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcClassicLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcClassicLinkDnsSupportOutcome EC2Client::DescribeVpcClassicLinkDnsSupport(const DescribeVpcClassicLinkDnsSupportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcClassicLinkDnsSupportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointConnectionNotificationsOutcome EC2Client::DescribeVpcEndpointConnectionNotifications(const DescribeVpcEndpointConnectionNotificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointConnectionNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointConnectionsOutcome EC2Client::DescribeVpcEndpointConnections(const DescribeVpcEndpointConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointServiceConfigurationsOutcome EC2Client::DescribeVpcEndpointServiceConfigurations(const DescribeVpcEndpointServiceConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointServiceConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointServicePermissionsOutcome EC2Client::DescribeVpcEndpointServicePermissions(const DescribeVpcEndpointServicePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointServicePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointServicesOutcome EC2Client::DescribeVpcEndpointServices(const DescribeVpcEndpointServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointsOutcome EC2Client::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcPeeringConnectionsOutcome EC2Client::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcPeeringConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcPeeringConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcPeeringConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcsOutcome EC2Client::DescribeVpcs(const DescribeVpcsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpnConnectionsOutcome EC2Client::DescribeVpnConnections(const DescribeVpnConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpnConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpnGatewaysOutcome EC2Client::DescribeVpnGateways(const DescribeVpnGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpnGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpnGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpnGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachClassicLinkVpcOutcome EC2Client::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachClassicLinkVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachInternetGatewayOutcome EC2Client::DetachInternetGateway(const DetachInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachNetworkInterfaceOutcome EC2Client::DetachNetworkInterface(const DetachNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachVerifiedAccessTrustProviderOutcome EC2Client::DetachVerifiedAccessTrustProvider(const DetachVerifiedAccessTrustProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachVerifiedAccessTrustProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachVolumeOutcome EC2Client::DetachVolume(const DetachVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachVpnGatewayOutcome EC2Client::DetachVpnGateway(const DetachVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableAddressTransferOutcome EC2Client::DisableAddressTransfer(const DisableAddressTransferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAddressTransferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableAwsNetworkPerformanceMetricSubscriptionOutcome EC2Client::DisableAwsNetworkPerformanceMetricSubscription(const DisableAwsNetworkPerformanceMetricSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAwsNetworkPerformanceMetricSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAwsNetworkPerformanceMetricSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAwsNetworkPerformanceMetricSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableEbsEncryptionByDefaultOutcome EC2Client::DisableEbsEncryptionByDefault(const DisableEbsEncryptionByDefaultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableEbsEncryptionByDefaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableFastLaunchOutcome EC2Client::DisableFastLaunch(const DisableFastLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableFastLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableFastSnapshotRestoresOutcome EC2Client::DisableFastSnapshotRestores(const DisableFastSnapshotRestoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableFastSnapshotRestoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableImageDeprecationOutcome EC2Client::DisableImageDeprecation(const DisableImageDeprecationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableImageDeprecationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableIpamOrganizationAdminAccountOutcome EC2Client::DisableIpamOrganizationAdminAccount(const DisableIpamOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableIpamOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableSerialConsoleAccessOutcome EC2Client::DisableSerialConsoleAccess(const DisableSerialConsoleAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableSerialConsoleAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableTransitGatewayRouteTablePropagationOutcome EC2Client::DisableTransitGatewayRouteTablePropagation(const DisableTransitGatewayRouteTablePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableTransitGatewayRouteTablePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableVgwRoutePropagationOutcome EC2Client::DisableVgwRoutePropagation(const DisableVgwRoutePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableVgwRoutePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableVpcClassicLinkOutcome EC2Client::DisableVpcClassicLink(const DisableVpcClassicLinkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableVpcClassicLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableVpcClassicLinkDnsSupportOutcome EC2Client::DisableVpcClassicLinkDnsSupport(const DisableVpcClassicLinkDnsSupportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableVpcClassicLinkDnsSupportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateAddressOutcome EC2Client::DisassociateAddress(const DisassociateAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateClientVpnTargetNetworkOutcome EC2Client::DisassociateClientVpnTargetNetwork(const DisassociateClientVpnTargetNetworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateClientVpnTargetNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateEnclaveCertificateIamRoleOutcome EC2Client::DisassociateEnclaveCertificateIamRole(const DisassociateEnclaveCertificateIamRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateEnclaveCertificateIamRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateIamInstanceProfileOutcome EC2Client::DisassociateIamInstanceProfile(const DisassociateIamInstanceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateIamInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateInstanceEventWindowOutcome EC2Client::DisassociateInstanceEventWindow(const DisassociateInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateIpamResourceDiscoveryOutcome EC2Client::DisassociateIpamResourceDiscovery(const DisassociateIpamResourceDiscoveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateIpamResourceDiscoveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateNatGatewayAddressOutcome EC2Client::DisassociateNatGatewayAddress(const DisassociateNatGatewayAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateNatGatewayAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateRouteTableOutcome EC2Client::DisassociateRouteTable(const DisassociateRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateSubnetCidrBlockOutcome EC2Client::DisassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateSubnetCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTransitGatewayMulticastDomainOutcome EC2Client::DisassociateTransitGatewayMulticastDomain(const DisassociateTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTransitGatewayPolicyTableOutcome EC2Client::DisassociateTransitGatewayPolicyTable(const DisassociateTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTransitGatewayRouteTableOutcome EC2Client::DisassociateTransitGatewayRouteTable(const DisassociateTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTrunkInterfaceOutcome EC2Client::DisassociateTrunkInterface(const DisassociateTrunkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTrunkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateVpcCidrBlockOutcome EC2Client::DisassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateVpcCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableAddressTransferOutcome EC2Client::EnableAddressTransfer(const EnableAddressTransferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAddressTransferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableAwsNetworkPerformanceMetricSubscriptionOutcome EC2Client::EnableAwsNetworkPerformanceMetricSubscription(const EnableAwsNetworkPerformanceMetricSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAwsNetworkPerformanceMetricSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAwsNetworkPerformanceMetricSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAwsNetworkPerformanceMetricSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableEbsEncryptionByDefaultOutcome EC2Client::EnableEbsEncryptionByDefault(const EnableEbsEncryptionByDefaultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableEbsEncryptionByDefaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableFastLaunchOutcome EC2Client::EnableFastLaunch(const EnableFastLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableFastLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableFastSnapshotRestoresOutcome EC2Client::EnableFastSnapshotRestores(const EnableFastSnapshotRestoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableFastSnapshotRestoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableImageDeprecationOutcome EC2Client::EnableImageDeprecation(const EnableImageDeprecationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableImageDeprecationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableIpamOrganizationAdminAccountOutcome EC2Client::EnableIpamOrganizationAdminAccount(const EnableIpamOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableIpamOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableReachabilityAnalyzerOrganizationSharingOutcome EC2Client::EnableReachabilityAnalyzerOrganizationSharing(const EnableReachabilityAnalyzerOrganizationSharingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableReachabilityAnalyzerOrganizationSharing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableReachabilityAnalyzerOrganizationSharing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableReachabilityAnalyzerOrganizationSharingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableSerialConsoleAccessOutcome EC2Client::EnableSerialConsoleAccess(const EnableSerialConsoleAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableSerialConsoleAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableTransitGatewayRouteTablePropagationOutcome EC2Client::EnableTransitGatewayRouteTablePropagation(const EnableTransitGatewayRouteTablePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableTransitGatewayRouteTablePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVgwRoutePropagationOutcome EC2Client::EnableVgwRoutePropagation(const EnableVgwRoutePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVgwRoutePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVolumeIOOutcome EC2Client::EnableVolumeIO(const EnableVolumeIORequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVolumeIO, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVolumeIO, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVolumeIOOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVpcClassicLinkOutcome EC2Client::EnableVpcClassicLink(const EnableVpcClassicLinkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVpcClassicLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVpcClassicLinkDnsSupportOutcome EC2Client::EnableVpcClassicLinkDnsSupport(const EnableVpcClassicLinkDnsSupportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVpcClassicLinkDnsSupportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportClientVpnClientCertificateRevocationListOutcome EC2Client::ExportClientVpnClientCertificateRevocationList(const ExportClientVpnClientCertificateRevocationListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportClientVpnClientCertificateRevocationListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportClientVpnClientConfigurationOutcome EC2Client::ExportClientVpnClientConfiguration(const ExportClientVpnClientConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportClientVpnClientConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportClientVpnClientConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportClientVpnClientConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportImageOutcome EC2Client::ExportImage(const ExportImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportTransitGatewayRoutesOutcome EC2Client::ExportTransitGatewayRoutes(const ExportTransitGatewayRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportTransitGatewayRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAssociatedEnclaveCertificateIamRolesOutcome EC2Client::GetAssociatedEnclaveCertificateIamRoles(const GetAssociatedEnclaveCertificateIamRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociatedEnclaveCertificateIamRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociatedEnclaveCertificateIamRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAssociatedEnclaveCertificateIamRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAssociatedIpv6PoolCidrsOutcome EC2Client::GetAssociatedIpv6PoolCidrs(const GetAssociatedIpv6PoolCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociatedIpv6PoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociatedIpv6PoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAssociatedIpv6PoolCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAwsNetworkPerformanceDataOutcome EC2Client::GetAwsNetworkPerformanceData(const GetAwsNetworkPerformanceDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAwsNetworkPerformanceData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAwsNetworkPerformanceData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAwsNetworkPerformanceDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetCapacityReservationUsageOutcome EC2Client::GetCapacityReservationUsage(const GetCapacityReservationUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCapacityReservationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCapacityReservationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCapacityReservationUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetCoipPoolUsageOutcome EC2Client::GetCoipPoolUsage(const GetCoipPoolUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCoipPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCoipPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCoipPoolUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetConsoleOutputOutcome EC2Client::GetConsoleOutput(const GetConsoleOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConsoleOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConsoleOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConsoleOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetConsoleScreenshotOutcome EC2Client::GetConsoleScreenshot(const GetConsoleScreenshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConsoleScreenshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConsoleScreenshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConsoleScreenshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetDefaultCreditSpecificationOutcome EC2Client::GetDefaultCreditSpecification(const GetDefaultCreditSpecificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDefaultCreditSpecificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetEbsDefaultKmsKeyIdOutcome EC2Client::GetEbsDefaultKmsKeyId(const GetEbsDefaultKmsKeyIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEbsDefaultKmsKeyIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetEbsEncryptionByDefaultOutcome EC2Client::GetEbsEncryptionByDefault(const GetEbsEncryptionByDefaultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEbsEncryptionByDefaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetFlowLogsIntegrationTemplateOutcome EC2Client::GetFlowLogsIntegrationTemplate(const GetFlowLogsIntegrationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFlowLogsIntegrationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFlowLogsIntegrationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFlowLogsIntegrationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetGroupsForCapacityReservationOutcome EC2Client::GetGroupsForCapacityReservation(const GetGroupsForCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroupsForCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroupsForCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGroupsForCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetHostReservationPurchasePreviewOutcome EC2Client::GetHostReservationPurchasePreview(const GetHostReservationPurchasePreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostReservationPurchasePreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostReservationPurchasePreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetHostReservationPurchasePreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetInstanceTypesFromInstanceRequirementsOutcome EC2Client::GetInstanceTypesFromInstanceRequirements(const GetInstanceTypesFromInstanceRequirementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceTypesFromInstanceRequirements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceTypesFromInstanceRequirements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceTypesFromInstanceRequirementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetInstanceUefiDataOutcome EC2Client::GetInstanceUefiData(const GetInstanceUefiDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceUefiData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceUefiData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceUefiDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamAddressHistoryOutcome EC2Client::GetIpamAddressHistory(const GetIpamAddressHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamAddressHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamAddressHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamAddressHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamDiscoveredAccountsOutcome EC2Client::GetIpamDiscoveredAccounts(const GetIpamDiscoveredAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamDiscoveredAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamDiscoveredAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamDiscoveredAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamDiscoveredResourceCidrsOutcome EC2Client::GetIpamDiscoveredResourceCidrs(const GetIpamDiscoveredResourceCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamDiscoveredResourceCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamDiscoveredResourceCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamDiscoveredResourceCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamPoolAllocationsOutcome EC2Client::GetIpamPoolAllocations(const GetIpamPoolAllocationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamPoolAllocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamPoolAllocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamPoolAllocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamPoolCidrsOutcome EC2Client::GetIpamPoolCidrs(const GetIpamPoolCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamPoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamPoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamPoolCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamResourceCidrsOutcome EC2Client::GetIpamResourceCidrs(const GetIpamResourceCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamResourceCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamResourceCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamResourceCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetLaunchTemplateDataOutcome EC2Client::GetLaunchTemplateData(const GetLaunchTemplateDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchTemplateData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchTemplateData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLaunchTemplateDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetManagedPrefixListAssociationsOutcome EC2Client::GetManagedPrefixListAssociations(const GetManagedPrefixListAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedPrefixListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedPrefixListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetManagedPrefixListAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetManagedPrefixListEntriesOutcome EC2Client::GetManagedPrefixListEntries(const GetManagedPrefixListEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedPrefixListEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedPrefixListEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetManagedPrefixListEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetNetworkInsightsAccessScopeAnalysisFindingsOutcome EC2Client::GetNetworkInsightsAccessScopeAnalysisFindings(const GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkInsightsAccessScopeAnalysisFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkInsightsAccessScopeAnalysisFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNetworkInsightsAccessScopeAnalysisFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetNetworkInsightsAccessScopeContentOutcome EC2Client::GetNetworkInsightsAccessScopeContent(const GetNetworkInsightsAccessScopeContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkInsightsAccessScopeContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkInsightsAccessScopeContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNetworkInsightsAccessScopeContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetPasswordDataOutcome EC2Client::GetPasswordData(const GetPasswordDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPasswordData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPasswordData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPasswordDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetReservedInstancesExchangeQuoteOutcome EC2Client::GetReservedInstancesExchangeQuote(const GetReservedInstancesExchangeQuoteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReservedInstancesExchangeQuoteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSerialConsoleAccessStatusOutcome EC2Client::GetSerialConsoleAccessStatus(const GetSerialConsoleAccessStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSerialConsoleAccessStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSerialConsoleAccessStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSerialConsoleAccessStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSpotPlacementScoresOutcome EC2Client::GetSpotPlacementScores(const GetSpotPlacementScoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSpotPlacementScores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSpotPlacementScores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSpotPlacementScoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSubnetCidrReservationsOutcome EC2Client::GetSubnetCidrReservations(const GetSubnetCidrReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubnetCidrReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubnetCidrReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSubnetCidrReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayAttachmentPropagationsOutcome EC2Client::GetTransitGatewayAttachmentPropagations(const GetTransitGatewayAttachmentPropagationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayAttachmentPropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayAttachmentPropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayAttachmentPropagationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayMulticastDomainAssociationsOutcome EC2Client::GetTransitGatewayMulticastDomainAssociations(const GetTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayMulticastDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayPolicyTableAssociationsOutcome EC2Client::GetTransitGatewayPolicyTableAssociations(const GetTransitGatewayPolicyTableAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayPolicyTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayPolicyTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayPolicyTableAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayPolicyTableEntriesOutcome EC2Client::GetTransitGatewayPolicyTableEntries(const GetTransitGatewayPolicyTableEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayPolicyTableEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayPolicyTableEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayPolicyTableEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayPrefixListReferencesOutcome EC2Client::GetTransitGatewayPrefixListReferences(const GetTransitGatewayPrefixListReferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayPrefixListReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayPrefixListReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayPrefixListReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayRouteTableAssociationsOutcome EC2Client::GetTransitGatewayRouteTableAssociations(const GetTransitGatewayRouteTableAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayRouteTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayRouteTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayRouteTableAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayRouteTablePropagationsOutcome EC2Client::GetTransitGatewayRouteTablePropagations(const GetTransitGatewayRouteTablePropagationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayRouteTablePropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayRouteTablePropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayRouteTablePropagationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVerifiedAccessEndpointPolicyOutcome EC2Client::GetVerifiedAccessEndpointPolicy(const GetVerifiedAccessEndpointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVerifiedAccessEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVerifiedAccessEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVerifiedAccessEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVerifiedAccessGroupPolicyOutcome EC2Client::GetVerifiedAccessGroupPolicy(const GetVerifiedAccessGroupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVerifiedAccessGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVerifiedAccessGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVerifiedAccessGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVpnConnectionDeviceSampleConfigurationOutcome EC2Client::GetVpnConnectionDeviceSampleConfiguration(const GetVpnConnectionDeviceSampleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpnConnectionDeviceSampleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpnConnectionDeviceSampleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVpnConnectionDeviceSampleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVpnConnectionDeviceTypesOutcome EC2Client::GetVpnConnectionDeviceTypes(const GetVpnConnectionDeviceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpnConnectionDeviceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpnConnectionDeviceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVpnConnectionDeviceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVpnTunnelReplacementStatusOutcome EC2Client::GetVpnTunnelReplacementStatus(const GetVpnTunnelReplacementStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpnTunnelReplacementStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpnTunnelReplacementStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVpnTunnelReplacementStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportClientVpnClientCertificateRevocationListOutcome EC2Client::ImportClientVpnClientCertificateRevocationList(const ImportClientVpnClientCertificateRevocationListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportClientVpnClientCertificateRevocationListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportImageOutcome EC2Client::ImportImage(const ImportImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportInstanceOutcome EC2Client::ImportInstance(const ImportInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportKeyPairOutcome EC2Client::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportSnapshotOutcome EC2Client::ImportSnapshot(const ImportSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportVolumeOutcome EC2Client::ImportVolume(const ImportVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListImagesInRecycleBinOutcome EC2Client::ListImagesInRecycleBin(const ListImagesInRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImagesInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImagesInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImagesInRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListSnapshotsInRecycleBinOutcome EC2Client::ListSnapshotsInRecycleBin(const ListSnapshotsInRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSnapshotsInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSnapshotsInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSnapshotsInRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAddressAttributeOutcome EC2Client::ModifyAddressAttribute(const ModifyAddressAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAddressAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAvailabilityZoneGroupOutcome EC2Client::ModifyAvailabilityZoneGroup(const ModifyAvailabilityZoneGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAvailabilityZoneGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAvailabilityZoneGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAvailabilityZoneGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCapacityReservationOutcome EC2Client::ModifyCapacityReservation(const ModifyCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCapacityReservationFleetOutcome EC2Client::ModifyCapacityReservationFleet(const ModifyCapacityReservationFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCapacityReservationFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClientVpnEndpointOutcome EC2Client::ModifyClientVpnEndpoint(const ModifyClientVpnEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClientVpnEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDefaultCreditSpecificationOutcome EC2Client::ModifyDefaultCreditSpecification(const ModifyDefaultCreditSpecificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyDefaultCreditSpecificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEbsDefaultKmsKeyIdOutcome EC2Client::ModifyEbsDefaultKmsKeyId(const ModifyEbsDefaultKmsKeyIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEbsDefaultKmsKeyIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyFleetOutcome EC2Client::ModifyFleet(const ModifyFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyFpgaImageAttributeOutcome EC2Client::ModifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyFpgaImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyHostsOutcome EC2Client::ModifyHosts(const ModifyHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIdFormatOutcome EC2Client::ModifyIdFormat(const ModifyIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIdentityIdFormatOutcome EC2Client::ModifyIdentityIdFormat(const ModifyIdentityIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIdentityIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyImageAttributeOutcome EC2Client::ModifyImageAttribute(const ModifyImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceAttributeOutcome EC2Client::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceCapacityReservationAttributesOutcome EC2Client::ModifyInstanceCapacityReservationAttributes(const ModifyInstanceCapacityReservationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceCapacityReservationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceCapacityReservationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceCapacityReservationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceCreditSpecificationOutcome EC2Client::ModifyInstanceCreditSpecification(const ModifyInstanceCreditSpecificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceCreditSpecificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceEventStartTimeOutcome EC2Client::ModifyInstanceEventStartTime(const ModifyInstanceEventStartTimeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceEventStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceEventStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceEventStartTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceEventWindowOutcome EC2Client::ModifyInstanceEventWindow(const ModifyInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceMaintenanceOptionsOutcome EC2Client::ModifyInstanceMaintenanceOptions(const ModifyInstanceMaintenanceOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceMaintenanceOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceMaintenanceOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceMaintenanceOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceMetadataOptionsOutcome EC2Client::ModifyInstanceMetadataOptions(const ModifyInstanceMetadataOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceMetadataOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstancePlacementOutcome EC2Client::ModifyInstancePlacement(const ModifyInstancePlacementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstancePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstancePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstancePlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamOutcome EC2Client::ModifyIpam(const ModifyIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamPoolOutcome EC2Client::ModifyIpamPool(const ModifyIpamPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamResourceCidrOutcome EC2Client::ModifyIpamResourceCidr(const ModifyIpamResourceCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamResourceCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamResourceCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamResourceCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamResourceDiscoveryOutcome EC2Client::ModifyIpamResourceDiscovery(const ModifyIpamResourceDiscoveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamResourceDiscovery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamResourceDiscoveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamScopeOutcome EC2Client::ModifyIpamScope(const ModifyIpamScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLaunchTemplateOutcome EC2Client::ModifyLaunchTemplate(const ModifyLaunchTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyLaunchTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLocalGatewayRouteOutcome EC2Client::ModifyLocalGatewayRoute(const ModifyLocalGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyLocalGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyManagedPrefixListOutcome EC2Client::ModifyManagedPrefixList(const ModifyManagedPrefixListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyManagedPrefixListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyNetworkInterfaceAttributeOutcome EC2Client::ModifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyPrivateDnsNameOptionsOutcome EC2Client::ModifyPrivateDnsNameOptions(const ModifyPrivateDnsNameOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyPrivateDnsNameOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyPrivateDnsNameOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyPrivateDnsNameOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyReservedInstancesOutcome EC2Client::ModifyReservedInstances(const ModifyReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySecurityGroupRulesOutcome EC2Client::ModifySecurityGroupRules(const ModifySecurityGroupRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySecurityGroupRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotAttributeOutcome EC2Client::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotTierOutcome EC2Client::ModifySnapshotTier(const ModifySnapshotTierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySnapshotTierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySpotFleetRequestOutcome EC2Client::ModifySpotFleetRequest(const ModifySpotFleetRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySpotFleetRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySpotFleetRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySpotFleetRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySubnetAttributeOutcome EC2Client::ModifySubnetAttribute(const ModifySubnetAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySubnetAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySubnetAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySubnetAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTrafficMirrorFilterNetworkServicesOutcome EC2Client::ModifyTrafficMirrorFilterNetworkServices(const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTrafficMirrorFilterNetworkServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTrafficMirrorFilterNetworkServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTrafficMirrorFilterNetworkServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTrafficMirrorFilterRuleOutcome EC2Client::ModifyTrafficMirrorFilterRule(const ModifyTrafficMirrorFilterRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTrafficMirrorFilterRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTrafficMirrorSessionOutcome EC2Client::ModifyTrafficMirrorSession(const ModifyTrafficMirrorSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTrafficMirrorSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTransitGatewayOutcome EC2Client::ModifyTransitGateway(const ModifyTransitGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTransitGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTransitGatewayPrefixListReferenceOutcome EC2Client::ModifyTransitGatewayPrefixListReference(const ModifyTransitGatewayPrefixListReferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTransitGatewayPrefixListReferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTransitGatewayVpcAttachmentOutcome EC2Client::ModifyTransitGatewayVpcAttachment(const ModifyTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessEndpointOutcome EC2Client::ModifyVerifiedAccessEndpoint(const ModifyVerifiedAccessEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessEndpointPolicyOutcome EC2Client::ModifyVerifiedAccessEndpointPolicy(const ModifyVerifiedAccessEndpointPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessGroupOutcome EC2Client::ModifyVerifiedAccessGroup(const ModifyVerifiedAccessGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessGroupPolicyOutcome EC2Client::ModifyVerifiedAccessGroupPolicy(const ModifyVerifiedAccessGroupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessInstanceOutcome EC2Client::ModifyVerifiedAccessInstance(const ModifyVerifiedAccessInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessInstanceLoggingConfigurationOutcome EC2Client::ModifyVerifiedAccessInstanceLoggingConfiguration(const ModifyVerifiedAccessInstanceLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessInstanceLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessInstanceLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessInstanceLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVerifiedAccessTrustProviderOutcome EC2Client::ModifyVerifiedAccessTrustProvider(const ModifyVerifiedAccessTrustProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVerifiedAccessTrustProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVerifiedAccessTrustProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVolumeOutcome EC2Client::ModifyVolume(const ModifyVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVolumeAttributeOutcome EC2Client::ModifyVolumeAttribute(const ModifyVolumeAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVolumeAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcAttributeOutcome EC2Client::ModifyVpcAttribute(const ModifyVpcAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointOutcome EC2Client::ModifyVpcEndpoint(const ModifyVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointConnectionNotificationOutcome EC2Client::ModifyVpcEndpointConnectionNotification(const ModifyVpcEndpointConnectionNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointConnectionNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointServiceConfigurationOutcome EC2Client::ModifyVpcEndpointServiceConfiguration(const ModifyVpcEndpointServiceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointServiceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointServicePayerResponsibilityOutcome EC2Client::ModifyVpcEndpointServicePayerResponsibility(const ModifyVpcEndpointServicePayerResponsibilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointServicePayerResponsibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointServicePayerResponsibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointServicePayerResponsibilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointServicePermissionsOutcome EC2Client::ModifyVpcEndpointServicePermissions(const ModifyVpcEndpointServicePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointServicePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcPeeringConnectionOptionsOutcome EC2Client::ModifyVpcPeeringConnectionOptions(const ModifyVpcPeeringConnectionOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcPeeringConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcPeeringConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcPeeringConnectionOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcTenancyOutcome EC2Client::ModifyVpcTenancy(const ModifyVpcTenancyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcTenancy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcTenancy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcTenancyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnConnectionOutcome EC2Client::ModifyVpnConnection(const ModifyVpnConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnConnectionOptionsOutcome EC2Client::ModifyVpnConnectionOptions(const ModifyVpnConnectionOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnConnectionOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnTunnelCertificateOutcome EC2Client::ModifyVpnTunnelCertificate(const ModifyVpnTunnelCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnTunnelCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnTunnelCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnTunnelCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnTunnelOptionsOutcome EC2Client::ModifyVpnTunnelOptions(const ModifyVpnTunnelOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnTunnelOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnTunnelOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnTunnelOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

MonitorInstancesOutcome EC2Client::MonitorInstances(const MonitorInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MonitorInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

MoveAddressToVpcOutcome EC2Client::MoveAddressToVpc(const MoveAddressToVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MoveAddressToVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MoveAddressToVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MoveAddressToVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

MoveByoipCidrToIpamOutcome EC2Client::MoveByoipCidrToIpam(const MoveByoipCidrToIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MoveByoipCidrToIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MoveByoipCidrToIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MoveByoipCidrToIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ProvisionByoipCidrOutcome EC2Client::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ProvisionIpamPoolCidrOutcome EC2Client::ProvisionIpamPoolCidr(const ProvisionIpamPoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionIpamPoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ProvisionPublicIpv4PoolCidrOutcome EC2Client::ProvisionPublicIpv4PoolCidr(const ProvisionPublicIpv4PoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionPublicIpv4PoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseHostReservationOutcome EC2Client::PurchaseHostReservation(const PurchaseHostReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseHostReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseHostReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseHostReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedInstancesOfferingOutcome EC2Client::PurchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedInstancesOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseReservedInstancesOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseReservedInstancesOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseScheduledInstancesOutcome EC2Client::PurchaseScheduledInstances(const PurchaseScheduledInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RebootInstancesOutcome EC2Client::RebootInstances(const RebootInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterImageOutcome EC2Client::RegisterImage(const RegisterImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterInstanceEventNotificationAttributesOutcome EC2Client::RegisterInstanceEventNotificationAttributes(const RegisterInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTransitGatewayMulticastGroupMembersOutcome EC2Client::RegisterTransitGatewayMulticastGroupMembers(const RegisterTransitGatewayMulticastGroupMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTransitGatewayMulticastGroupMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::RegisterTransitGatewayMulticastGroupSources(const RegisterTransitGatewayMulticastGroupSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTransitGatewayMulticastGroupSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectTransitGatewayMulticastDomainAssociationsOutcome EC2Client::RejectTransitGatewayMulticastDomainAssociations(const RejectTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectTransitGatewayMulticastDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectTransitGatewayPeeringAttachmentOutcome EC2Client::RejectTransitGatewayPeeringAttachment(const RejectTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectTransitGatewayVpcAttachmentOutcome EC2Client::RejectTransitGatewayVpcAttachment(const RejectTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectVpcEndpointConnectionsOutcome EC2Client::RejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectVpcEndpointConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectVpcPeeringConnectionOutcome EC2Client::RejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReleaseAddressOutcome EC2Client::ReleaseAddress(const ReleaseAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReleaseHostsOutcome EC2Client::ReleaseHosts(const ReleaseHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReleaseIpamPoolAllocationOutcome EC2Client::ReleaseIpamPoolAllocation(const ReleaseIpamPoolAllocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseIpamPoolAllocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseIpamPoolAllocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseIpamPoolAllocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceIamInstanceProfileAssociationOutcome EC2Client::ReplaceIamInstanceProfileAssociation(const ReplaceIamInstanceProfileAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceIamInstanceProfileAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceIamInstanceProfileAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceIamInstanceProfileAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceNetworkAclAssociationOutcome EC2Client::ReplaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceNetworkAclAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceNetworkAclAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceNetworkAclAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceNetworkAclEntryOutcome EC2Client::ReplaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceNetworkAclEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceRouteOutcome EC2Client::ReplaceRoute(const ReplaceRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceRouteTableAssociationOutcome EC2Client::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceRouteTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceRouteTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceRouteTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceTransitGatewayRouteOutcome EC2Client::ReplaceTransitGatewayRoute(const ReplaceTransitGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceTransitGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceVpnTunnelOutcome EC2Client::ReplaceVpnTunnel(const ReplaceVpnTunnelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceVpnTunnel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceVpnTunnel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceVpnTunnelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReportInstanceStatusOutcome EC2Client::ReportInstanceStatus(const ReportInstanceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReportInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReportInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReportInstanceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RequestSpotFleetOutcome EC2Client::RequestSpotFleet(const RequestSpotFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestSpotFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestSpotFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestSpotFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RequestSpotInstancesOutcome EC2Client::RequestSpotInstances(const RequestSpotInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestSpotInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestSpotInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestSpotInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetAddressAttributeOutcome EC2Client::ResetAddressAttribute(const ResetAddressAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetAddressAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetEbsDefaultKmsKeyIdOutcome EC2Client::ResetEbsDefaultKmsKeyId(const ResetEbsDefaultKmsKeyIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetEbsDefaultKmsKeyIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetFpgaImageAttributeOutcome EC2Client::ResetFpgaImageAttribute(const ResetFpgaImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetFpgaImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetImageAttributeOutcome EC2Client::ResetImageAttribute(const ResetImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetInstanceAttributeOutcome EC2Client::ResetInstanceAttribute(const ResetInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetNetworkInterfaceAttributeOutcome EC2Client::ResetNetworkInterfaceAttribute(const ResetNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetSnapshotAttributeOutcome EC2Client::ResetSnapshotAttribute(const ResetSnapshotAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetSnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreAddressToClassicOutcome EC2Client::RestoreAddressToClassic(const RestoreAddressToClassicRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreAddressToClassic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreAddressToClassic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreAddressToClassicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreImageFromRecycleBinOutcome EC2Client::RestoreImageFromRecycleBin(const RestoreImageFromRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreImageFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreImageFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreImageFromRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreManagedPrefixListVersionOutcome EC2Client::RestoreManagedPrefixListVersion(const RestoreManagedPrefixListVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreManagedPrefixListVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreManagedPrefixListVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreManagedPrefixListVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreSnapshotFromRecycleBinOutcome EC2Client::RestoreSnapshotFromRecycleBin(const RestoreSnapshotFromRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreSnapshotFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreSnapshotFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreSnapshotFromRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreSnapshotTierOutcome EC2Client::RestoreSnapshotTier(const RestoreSnapshotTierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreSnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreSnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreSnapshotTierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeClientVpnIngressOutcome EC2Client::RevokeClientVpnIngress(const RevokeClientVpnIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeClientVpnIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeSecurityGroupEgressOutcome EC2Client::RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeSecurityGroupEgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeSecurityGroupIngressOutcome EC2Client::RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RunInstancesOutcome EC2Client::RunInstances(const RunInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RunScheduledInstancesOutcome EC2Client::RunScheduledInstances(const RunScheduledInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SearchLocalGatewayRoutesOutcome EC2Client::SearchLocalGatewayRoutes(const SearchLocalGatewayRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchLocalGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchLocalGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchLocalGatewayRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SearchTransitGatewayMulticastGroupsOutcome EC2Client::SearchTransitGatewayMulticastGroups(const SearchTransitGatewayMulticastGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTransitGatewayMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTransitGatewayMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchTransitGatewayMulticastGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SearchTransitGatewayRoutesOutcome EC2Client::SearchTransitGatewayRoutes(const SearchTransitGatewayRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchTransitGatewayRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SendDiagnosticInterruptOutcome EC2Client::SendDiagnosticInterrupt(const SendDiagnosticInterruptRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendDiagnosticInterrupt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendDiagnosticInterrupt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendDiagnosticInterruptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartInstancesOutcome EC2Client::StartInstances(const StartInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartNetworkInsightsAccessScopeAnalysisOutcome EC2Client::StartNetworkInsightsAccessScopeAnalysis(const StartNetworkInsightsAccessScopeAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartNetworkInsightsAccessScopeAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartNetworkInsightsAnalysisOutcome EC2Client::StartNetworkInsightsAnalysis(const StartNetworkInsightsAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartNetworkInsightsAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartVpcEndpointServicePrivateDnsVerificationOutcome EC2Client::StartVpcEndpointServicePrivateDnsVerification(const StartVpcEndpointServicePrivateDnsVerificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartVpcEndpointServicePrivateDnsVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartVpcEndpointServicePrivateDnsVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartVpcEndpointServicePrivateDnsVerificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TerminateClientVpnConnectionsOutcome EC2Client::TerminateClientVpnConnections(const TerminateClientVpnConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateClientVpnConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnassignIpv6AddressesOutcome EC2Client::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignIpv6AddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignPrivateIpAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnassignPrivateNatGatewayAddressOutcome EC2Client::UnassignPrivateNatGatewayAddress(const UnassignPrivateNatGatewayAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignPrivateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignPrivateNatGatewayAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignPrivateNatGatewayAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnmonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnmonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnmonitorInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSecurityGroupRuleDescriptionsEgressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsEgress(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityGroupRuleDescriptionsEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityGroupRuleDescriptionsEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecurityGroupRuleDescriptionsEgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSecurityGroupRuleDescriptionsIngressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsIngress(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityGroupRuleDescriptionsIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityGroupRuleDescriptionsIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecurityGroupRuleDescriptionsIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

WithdrawByoipCidrOutcome EC2Client::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WithdrawByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WithdrawByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return WithdrawByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

