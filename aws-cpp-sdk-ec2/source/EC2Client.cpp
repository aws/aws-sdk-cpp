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
#include <aws/ec2/model/AssociateAddressRequest.h>
#include <aws/ec2/model/AssociateClientVpnTargetNetworkRequest.h>
#include <aws/ec2/model/AssociateDhcpOptionsRequest.h>
#include <aws/ec2/model/AssociateEnclaveCertificateIamRoleRequest.h>
#include <aws/ec2/model/AssociateIamInstanceProfileRequest.h>
#include <aws/ec2/model/AssociateInstanceEventWindowRequest.h>
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
#include <aws/ec2/model/DetachVolumeRequest.h>
#include <aws/ec2/model/DetachVpnGatewayRequest.h>
#include <aws/ec2/model/DisableAddressTransferRequest.h>
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
#include <aws/ec2/model/DisassociateRouteTableRequest.h>
#include <aws/ec2/model/DisassociateSubnetCidrBlockRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/DisassociateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DisassociateTrunkInterfaceRequest.h>
#include <aws/ec2/model/DisassociateVpcCidrBlockRequest.h>
#include <aws/ec2/model/EnableAddressTransferRequest.h>
#include <aws/ec2/model/EnableEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/EnableFastLaunchRequest.h>
#include <aws/ec2/model/EnableFastSnapshotRestoresRequest.h>
#include <aws/ec2/model/EnableImageDeprecationRequest.h>
#include <aws/ec2/model/EnableIpamOrganizationAdminAccountRequest.h>
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
#include <aws/ec2/model/GetVpnConnectionDeviceSampleConfigurationRequest.h>
#include <aws/ec2/model/GetVpnConnectionDeviceTypesRequest.h>
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

AcceptAddressTransferOutcomeCallable EC2Client::AcceptAddressTransferCallable(const AcceptAddressTransferRequest& request) const
{
  std::shared_ptr<AcceptAddressTransferRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptAddressTransferOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptAddressTransfer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptAddressTransferAsync(const AcceptAddressTransferRequest& request, const AcceptAddressTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptAddressTransferRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptAddressTransfer(*pRequest), context);
    } );
}
AcceptReservedInstancesExchangeQuoteOutcome EC2Client::AcceptReservedInstancesExchangeQuote(const AcceptReservedInstancesExchangeQuoteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptReservedInstancesExchangeQuoteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptReservedInstancesExchangeQuoteOutcomeCallable EC2Client::AcceptReservedInstancesExchangeQuoteCallable(const AcceptReservedInstancesExchangeQuoteRequest& request) const
{
  std::shared_ptr<AcceptReservedInstancesExchangeQuoteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptReservedInstancesExchangeQuoteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptReservedInstancesExchangeQuote(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptReservedInstancesExchangeQuoteAsync(const AcceptReservedInstancesExchangeQuoteRequest& request, const AcceptReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptReservedInstancesExchangeQuoteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptReservedInstancesExchangeQuote(*pRequest), context);
    } );
}
AcceptTransitGatewayMulticastDomainAssociationsOutcome EC2Client::AcceptTransitGatewayMulticastDomainAssociations(const AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptTransitGatewayMulticastDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptTransitGatewayMulticastDomainAssociationsOutcomeCallable EC2Client::AcceptTransitGatewayMulticastDomainAssociationsCallable(const AcceptTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  std::shared_ptr<AcceptTransitGatewayMulticastDomainAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptTransitGatewayMulticastDomainAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptTransitGatewayMulticastDomainAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptTransitGatewayMulticastDomainAssociationsAsync(const AcceptTransitGatewayMulticastDomainAssociationsRequest& request, const AcceptTransitGatewayMulticastDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptTransitGatewayMulticastDomainAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptTransitGatewayMulticastDomainAssociations(*pRequest), context);
    } );
}
AcceptTransitGatewayPeeringAttachmentOutcome EC2Client::AcceptTransitGatewayPeeringAttachment(const AcceptTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptTransitGatewayPeeringAttachmentOutcomeCallable EC2Client::AcceptTransitGatewayPeeringAttachmentCallable(const AcceptTransitGatewayPeeringAttachmentRequest& request) const
{
  std::shared_ptr<AcceptTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptTransitGatewayPeeringAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptTransitGatewayPeeringAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptTransitGatewayPeeringAttachmentAsync(const AcceptTransitGatewayPeeringAttachmentRequest& request, const AcceptTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptTransitGatewayPeeringAttachment(*pRequest), context);
    } );
}
AcceptTransitGatewayVpcAttachmentOutcome EC2Client::AcceptTransitGatewayVpcAttachment(const AcceptTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptTransitGatewayVpcAttachmentOutcomeCallable EC2Client::AcceptTransitGatewayVpcAttachmentCallable(const AcceptTransitGatewayVpcAttachmentRequest& request) const
{
  std::shared_ptr<AcceptTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptTransitGatewayVpcAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptTransitGatewayVpcAttachmentAsync(const AcceptTransitGatewayVpcAttachmentRequest& request, const AcceptTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptTransitGatewayVpcAttachment(*pRequest), context);
    } );
}
AcceptVpcEndpointConnectionsOutcome EC2Client::AcceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptVpcEndpointConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptVpcEndpointConnectionsOutcomeCallable EC2Client::AcceptVpcEndpointConnectionsCallable(const AcceptVpcEndpointConnectionsRequest& request) const
{
  std::shared_ptr<AcceptVpcEndpointConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptVpcEndpointConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptVpcEndpointConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptVpcEndpointConnectionsAsync(const AcceptVpcEndpointConnectionsRequest& request, const AcceptVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptVpcEndpointConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptVpcEndpointConnections(*pRequest), context);
    } );
}
AcceptVpcPeeringConnectionOutcome EC2Client::AcceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AcceptVpcPeeringConnectionOutcomeCallable EC2Client::AcceptVpcPeeringConnectionCallable(const AcceptVpcPeeringConnectionRequest& request) const
{
  std::shared_ptr<AcceptVpcPeeringConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AcceptVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AcceptVpcPeeringConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AcceptVpcPeeringConnectionAsync(const AcceptVpcPeeringConnectionRequest& request, const AcceptVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AcceptVpcPeeringConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AcceptVpcPeeringConnection(*pRequest), context);
    } );
}
AdvertiseByoipCidrOutcome EC2Client::AdvertiseByoipCidr(const AdvertiseByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdvertiseByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdvertiseByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdvertiseByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AdvertiseByoipCidrOutcomeCallable EC2Client::AdvertiseByoipCidrCallable(const AdvertiseByoipCidrRequest& request) const
{
  std::shared_ptr<AdvertiseByoipCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdvertiseByoipCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdvertiseByoipCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AdvertiseByoipCidrAsync(const AdvertiseByoipCidrRequest& request, const AdvertiseByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdvertiseByoipCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdvertiseByoipCidr(*pRequest), context);
    } );
}
AllocateAddressOutcome EC2Client::AllocateAddress(const AllocateAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AllocateAddressOutcomeCallable EC2Client::AllocateAddressCallable(const AllocateAddressRequest& request) const
{
  std::shared_ptr<AllocateAddressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AllocateAddressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AllocateAddress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AllocateAddressAsync(const AllocateAddressRequest& request, const AllocateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AllocateAddressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AllocateAddress(*pRequest), context);
    } );
}
AllocateHostsOutcome EC2Client::AllocateHosts(const AllocateHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AllocateHostsOutcomeCallable EC2Client::AllocateHostsCallable(const AllocateHostsRequest& request) const
{
  std::shared_ptr<AllocateHostsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AllocateHostsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AllocateHosts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AllocateHostsAsync(const AllocateHostsRequest& request, const AllocateHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AllocateHostsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AllocateHosts(*pRequest), context);
    } );
}
AllocateIpamPoolCidrOutcome EC2Client::AllocateIpamPoolCidr(const AllocateIpamPoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateIpamPoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AllocateIpamPoolCidrOutcomeCallable EC2Client::AllocateIpamPoolCidrCallable(const AllocateIpamPoolCidrRequest& request) const
{
  std::shared_ptr<AllocateIpamPoolCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AllocateIpamPoolCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AllocateIpamPoolCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AllocateIpamPoolCidrAsync(const AllocateIpamPoolCidrRequest& request, const AllocateIpamPoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AllocateIpamPoolCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AllocateIpamPoolCidr(*pRequest), context);
    } );
}
ApplySecurityGroupsToClientVpnTargetNetworkOutcome EC2Client::ApplySecurityGroupsToClientVpnTargetNetwork(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplySecurityGroupsToClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplySecurityGroupsToClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ApplySecurityGroupsToClientVpnTargetNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ApplySecurityGroupsToClientVpnTargetNetworkOutcomeCallable EC2Client::ApplySecurityGroupsToClientVpnTargetNetworkCallable(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request) const
{
  std::shared_ptr<ApplySecurityGroupsToClientVpnTargetNetworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ApplySecurityGroupsToClientVpnTargetNetworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ApplySecurityGroupsToClientVpnTargetNetwork(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ApplySecurityGroupsToClientVpnTargetNetworkAsync(const ApplySecurityGroupsToClientVpnTargetNetworkRequest& request, const ApplySecurityGroupsToClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ApplySecurityGroupsToClientVpnTargetNetworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ApplySecurityGroupsToClientVpnTargetNetwork(*pRequest), context);
    } );
}
AssignIpv6AddressesOutcome EC2Client::AssignIpv6Addresses(const AssignIpv6AddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignIpv6AddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssignIpv6AddressesOutcomeCallable EC2Client::AssignIpv6AddressesCallable(const AssignIpv6AddressesRequest& request) const
{
  std::shared_ptr<AssignIpv6AddressesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssignIpv6AddressesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssignIpv6Addresses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssignIpv6AddressesAsync(const AssignIpv6AddressesRequest& request, const AssignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssignIpv6AddressesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssignIpv6Addresses(*pRequest), context);
    } );
}
AssignPrivateIpAddressesOutcome EC2Client::AssignPrivateIpAddresses(const AssignPrivateIpAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssignPrivateIpAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssignPrivateIpAddressesOutcomeCallable EC2Client::AssignPrivateIpAddressesCallable(const AssignPrivateIpAddressesRequest& request) const
{
  std::shared_ptr<AssignPrivateIpAddressesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssignPrivateIpAddressesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssignPrivateIpAddresses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssignPrivateIpAddressesAsync(const AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssignPrivateIpAddressesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssignPrivateIpAddresses(*pRequest), context);
    } );
}
AssociateAddressOutcome EC2Client::AssociateAddress(const AssociateAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateAddressOutcomeCallable EC2Client::AssociateAddressCallable(const AssociateAddressRequest& request) const
{
  std::shared_ptr<AssociateAddressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateAddressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateAddress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateAddressAsync(const AssociateAddressRequest& request, const AssociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateAddressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateAddress(*pRequest), context);
    } );
}
AssociateClientVpnTargetNetworkOutcome EC2Client::AssociateClientVpnTargetNetwork(const AssociateClientVpnTargetNetworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateClientVpnTargetNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateClientVpnTargetNetworkOutcomeCallable EC2Client::AssociateClientVpnTargetNetworkCallable(const AssociateClientVpnTargetNetworkRequest& request) const
{
  std::shared_ptr<AssociateClientVpnTargetNetworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateClientVpnTargetNetworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateClientVpnTargetNetwork(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateClientVpnTargetNetworkAsync(const AssociateClientVpnTargetNetworkRequest& request, const AssociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateClientVpnTargetNetworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateClientVpnTargetNetwork(*pRequest), context);
    } );
}
AssociateDhcpOptionsOutcome EC2Client::AssociateDhcpOptions(const AssociateDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateDhcpOptionsOutcomeCallable EC2Client::AssociateDhcpOptionsCallable(const AssociateDhcpOptionsRequest& request) const
{
  std::shared_ptr<AssociateDhcpOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateDhcpOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateDhcpOptionsAsync(const AssociateDhcpOptionsRequest& request, const AssociateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateDhcpOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateDhcpOptions(*pRequest), context);
    } );
}
AssociateEnclaveCertificateIamRoleOutcome EC2Client::AssociateEnclaveCertificateIamRole(const AssociateEnclaveCertificateIamRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateEnclaveCertificateIamRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateEnclaveCertificateIamRoleOutcomeCallable EC2Client::AssociateEnclaveCertificateIamRoleCallable(const AssociateEnclaveCertificateIamRoleRequest& request) const
{
  std::shared_ptr<AssociateEnclaveCertificateIamRoleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateEnclaveCertificateIamRoleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateEnclaveCertificateIamRole(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateEnclaveCertificateIamRoleAsync(const AssociateEnclaveCertificateIamRoleRequest& request, const AssociateEnclaveCertificateIamRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateEnclaveCertificateIamRoleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateEnclaveCertificateIamRole(*pRequest), context);
    } );
}
AssociateIamInstanceProfileOutcome EC2Client::AssociateIamInstanceProfile(const AssociateIamInstanceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateIamInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateIamInstanceProfileOutcomeCallable EC2Client::AssociateIamInstanceProfileCallable(const AssociateIamInstanceProfileRequest& request) const
{
  std::shared_ptr<AssociateIamInstanceProfileRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateIamInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateIamInstanceProfile(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateIamInstanceProfileAsync(const AssociateIamInstanceProfileRequest& request, const AssociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateIamInstanceProfileRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateIamInstanceProfile(*pRequest), context);
    } );
}
AssociateInstanceEventWindowOutcome EC2Client::AssociateInstanceEventWindow(const AssociateInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateInstanceEventWindowOutcomeCallable EC2Client::AssociateInstanceEventWindowCallable(const AssociateInstanceEventWindowRequest& request) const
{
  std::shared_ptr<AssociateInstanceEventWindowRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateInstanceEventWindowOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateInstanceEventWindow(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateInstanceEventWindowAsync(const AssociateInstanceEventWindowRequest& request, const AssociateInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateInstanceEventWindowRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateInstanceEventWindow(*pRequest), context);
    } );
}
AssociateRouteTableOutcome EC2Client::AssociateRouteTable(const AssociateRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateRouteTableOutcomeCallable EC2Client::AssociateRouteTableCallable(const AssociateRouteTableRequest& request) const
{
  std::shared_ptr<AssociateRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateRouteTableAsync(const AssociateRouteTableRequest& request, const AssociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateRouteTable(*pRequest), context);
    } );
}
AssociateSubnetCidrBlockOutcome EC2Client::AssociateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSubnetCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateSubnetCidrBlockOutcomeCallable EC2Client::AssociateSubnetCidrBlockCallable(const AssociateSubnetCidrBlockRequest& request) const
{
  std::shared_ptr<AssociateSubnetCidrBlockRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateSubnetCidrBlockOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateSubnetCidrBlock(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateSubnetCidrBlockAsync(const AssociateSubnetCidrBlockRequest& request, const AssociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateSubnetCidrBlockRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateSubnetCidrBlock(*pRequest), context);
    } );
}
AssociateTransitGatewayMulticastDomainOutcome EC2Client::AssociateTransitGatewayMulticastDomain(const AssociateTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTransitGatewayMulticastDomainOutcomeCallable EC2Client::AssociateTransitGatewayMulticastDomainCallable(const AssociateTransitGatewayMulticastDomainRequest& request) const
{
  std::shared_ptr<AssociateTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateTransitGatewayMulticastDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateTransitGatewayMulticastDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateTransitGatewayMulticastDomainAsync(const AssociateTransitGatewayMulticastDomainRequest& request, const AssociateTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateTransitGatewayMulticastDomain(*pRequest), context);
    } );
}
AssociateTransitGatewayPolicyTableOutcome EC2Client::AssociateTransitGatewayPolicyTable(const AssociateTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTransitGatewayPolicyTableOutcomeCallable EC2Client::AssociateTransitGatewayPolicyTableCallable(const AssociateTransitGatewayPolicyTableRequest& request) const
{
  std::shared_ptr<AssociateTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateTransitGatewayPolicyTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateTransitGatewayPolicyTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateTransitGatewayPolicyTableAsync(const AssociateTransitGatewayPolicyTableRequest& request, const AssociateTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateTransitGatewayPolicyTable(*pRequest), context);
    } );
}
AssociateTransitGatewayRouteTableOutcome EC2Client::AssociateTransitGatewayRouteTable(const AssociateTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTransitGatewayRouteTableOutcomeCallable EC2Client::AssociateTransitGatewayRouteTableCallable(const AssociateTransitGatewayRouteTableRequest& request) const
{
  std::shared_ptr<AssociateTransitGatewayRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateTransitGatewayRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateTransitGatewayRouteTableAsync(const AssociateTransitGatewayRouteTableRequest& request, const AssociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateTransitGatewayRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateTransitGatewayRouteTable(*pRequest), context);
    } );
}
AssociateTrunkInterfaceOutcome EC2Client::AssociateTrunkInterface(const AssociateTrunkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTrunkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateTrunkInterfaceOutcomeCallable EC2Client::AssociateTrunkInterfaceCallable(const AssociateTrunkInterfaceRequest& request) const
{
  std::shared_ptr<AssociateTrunkInterfaceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrunkInterfaceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateTrunkInterface(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateTrunkInterfaceAsync(const AssociateTrunkInterfaceRequest& request, const AssociateTrunkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateTrunkInterfaceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateTrunkInterface(*pRequest), context);
    } );
}
AssociateVpcCidrBlockOutcome EC2Client::AssociateVpcCidrBlock(const AssociateVpcCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateVpcCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateVpcCidrBlockOutcomeCallable EC2Client::AssociateVpcCidrBlockCallable(const AssociateVpcCidrBlockRequest& request) const
{
  std::shared_ptr<AssociateVpcCidrBlockRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateVpcCidrBlockOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateVpcCidrBlock(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AssociateVpcCidrBlockAsync(const AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateVpcCidrBlockRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateVpcCidrBlock(*pRequest), context);
    } );
}
AttachClassicLinkVpcOutcome EC2Client::AttachClassicLinkVpc(const AttachClassicLinkVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachClassicLinkVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachClassicLinkVpcOutcomeCallable EC2Client::AttachClassicLinkVpcCallable(const AttachClassicLinkVpcRequest& request) const
{
  std::shared_ptr<AttachClassicLinkVpcRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AttachClassicLinkVpcOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AttachClassicLinkVpc(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AttachClassicLinkVpcAsync(const AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AttachClassicLinkVpcRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AttachClassicLinkVpc(*pRequest), context);
    } );
}
AttachInternetGatewayOutcome EC2Client::AttachInternetGateway(const AttachInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachInternetGatewayOutcomeCallable EC2Client::AttachInternetGatewayCallable(const AttachInternetGatewayRequest& request) const
{
  std::shared_ptr<AttachInternetGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AttachInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AttachInternetGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AttachInternetGatewayAsync(const AttachInternetGatewayRequest& request, const AttachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AttachInternetGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AttachInternetGateway(*pRequest), context);
    } );
}
AttachNetworkInterfaceOutcome EC2Client::AttachNetworkInterface(const AttachNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachNetworkInterfaceOutcomeCallable EC2Client::AttachNetworkInterfaceCallable(const AttachNetworkInterfaceRequest& request) const
{
  std::shared_ptr<AttachNetworkInterfaceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AttachNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AttachNetworkInterface(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AttachNetworkInterfaceAsync(const AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AttachNetworkInterfaceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AttachNetworkInterface(*pRequest), context);
    } );
}
AttachVolumeOutcome EC2Client::AttachVolume(const AttachVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachVolumeOutcomeCallable EC2Client::AttachVolumeCallable(const AttachVolumeRequest& request) const
{
  std::shared_ptr<AttachVolumeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AttachVolumeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AttachVolume(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AttachVolumeAsync(const AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AttachVolumeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AttachVolume(*pRequest), context);
    } );
}
AttachVpnGatewayOutcome EC2Client::AttachVpnGateway(const AttachVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AttachVpnGatewayOutcomeCallable EC2Client::AttachVpnGatewayCallable(const AttachVpnGatewayRequest& request) const
{
  std::shared_ptr<AttachVpnGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AttachVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AttachVpnGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AttachVpnGatewayAsync(const AttachVpnGatewayRequest& request, const AttachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AttachVpnGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AttachVpnGateway(*pRequest), context);
    } );
}
AuthorizeClientVpnIngressOutcome EC2Client::AuthorizeClientVpnIngress(const AuthorizeClientVpnIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeClientVpnIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeClientVpnIngressOutcomeCallable EC2Client::AuthorizeClientVpnIngressCallable(const AuthorizeClientVpnIngressRequest& request) const
{
  std::shared_ptr<AuthorizeClientVpnIngressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeClientVpnIngressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AuthorizeClientVpnIngress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AuthorizeClientVpnIngressAsync(const AuthorizeClientVpnIngressRequest& request, const AuthorizeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AuthorizeClientVpnIngressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AuthorizeClientVpnIngress(*pRequest), context);
    } );
}
AuthorizeSecurityGroupEgressOutcome EC2Client::AuthorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeSecurityGroupEgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeSecurityGroupEgressOutcomeCallable EC2Client::AuthorizeSecurityGroupEgressCallable(const AuthorizeSecurityGroupEgressRequest& request) const
{
  std::shared_ptr<AuthorizeSecurityGroupEgressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeSecurityGroupEgressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AuthorizeSecurityGroupEgress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AuthorizeSecurityGroupEgressAsync(const AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AuthorizeSecurityGroupEgressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AuthorizeSecurityGroupEgress(*pRequest), context);
    } );
}
AuthorizeSecurityGroupIngressOutcome EC2Client::AuthorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeSecurityGroupIngressOutcomeCallable EC2Client::AuthorizeSecurityGroupIngressCallable(const AuthorizeSecurityGroupIngressRequest& request) const
{
  std::shared_ptr<AuthorizeSecurityGroupIngressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AuthorizeSecurityGroupIngress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::AuthorizeSecurityGroupIngressAsync(const AuthorizeSecurityGroupIngressRequest& request, const AuthorizeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AuthorizeSecurityGroupIngressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AuthorizeSecurityGroupIngress(*pRequest), context);
    } );
}
BundleInstanceOutcome EC2Client::BundleInstance(const BundleInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BundleInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BundleInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BundleInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

BundleInstanceOutcomeCallable EC2Client::BundleInstanceCallable(const BundleInstanceRequest& request) const
{
  std::shared_ptr<BundleInstanceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< BundleInstanceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->BundleInstance(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::BundleInstanceAsync(const BundleInstanceRequest& request, const BundleInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<BundleInstanceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, BundleInstance(*pRequest), context);
    } );
}
CancelBundleTaskOutcome EC2Client::CancelBundleTask(const CancelBundleTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelBundleTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelBundleTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelBundleTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelBundleTaskOutcomeCallable EC2Client::CancelBundleTaskCallable(const CancelBundleTaskRequest& request) const
{
  std::shared_ptr<CancelBundleTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelBundleTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelBundleTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelBundleTaskAsync(const CancelBundleTaskRequest& request, const CancelBundleTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelBundleTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelBundleTask(*pRequest), context);
    } );
}
CancelCapacityReservationOutcome EC2Client::CancelCapacityReservation(const CancelCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelCapacityReservationOutcomeCallable EC2Client::CancelCapacityReservationCallable(const CancelCapacityReservationRequest& request) const
{
  std::shared_ptr<CancelCapacityReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelCapacityReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelCapacityReservationAsync(const CancelCapacityReservationRequest& request, const CancelCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelCapacityReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelCapacityReservation(*pRequest), context);
    } );
}
CancelCapacityReservationFleetsOutcome EC2Client::CancelCapacityReservationFleets(const CancelCapacityReservationFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelCapacityReservationFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelCapacityReservationFleetsOutcomeCallable EC2Client::CancelCapacityReservationFleetsCallable(const CancelCapacityReservationFleetsRequest& request) const
{
  std::shared_ptr<CancelCapacityReservationFleetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelCapacityReservationFleetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelCapacityReservationFleets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelCapacityReservationFleetsAsync(const CancelCapacityReservationFleetsRequest& request, const CancelCapacityReservationFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelCapacityReservationFleetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelCapacityReservationFleets(*pRequest), context);
    } );
}
CancelConversionTaskOutcome EC2Client::CancelConversionTask(const CancelConversionTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelConversionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelConversionTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelConversionTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelConversionTaskOutcomeCallable EC2Client::CancelConversionTaskCallable(const CancelConversionTaskRequest& request) const
{
  std::shared_ptr<CancelConversionTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelConversionTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelConversionTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelConversionTaskAsync(const CancelConversionTaskRequest& request, const CancelConversionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelConversionTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelConversionTask(*pRequest), context);
    } );
}
CancelExportTaskOutcome EC2Client::CancelExportTask(const CancelExportTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelExportTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelExportTaskOutcomeCallable EC2Client::CancelExportTaskCallable(const CancelExportTaskRequest& request) const
{
  std::shared_ptr<CancelExportTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelExportTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelExportTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelExportTaskAsync(const CancelExportTaskRequest& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelExportTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelExportTask(*pRequest), context);
    } );
}
CancelImageLaunchPermissionOutcome EC2Client::CancelImageLaunchPermission(const CancelImageLaunchPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelImageLaunchPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelImageLaunchPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelImageLaunchPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelImageLaunchPermissionOutcomeCallable EC2Client::CancelImageLaunchPermissionCallable(const CancelImageLaunchPermissionRequest& request) const
{
  std::shared_ptr<CancelImageLaunchPermissionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelImageLaunchPermissionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelImageLaunchPermission(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelImageLaunchPermissionAsync(const CancelImageLaunchPermissionRequest& request, const CancelImageLaunchPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelImageLaunchPermissionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelImageLaunchPermission(*pRequest), context);
    } );
}
CancelImportTaskOutcome EC2Client::CancelImportTask(const CancelImportTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelImportTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelImportTaskOutcomeCallable EC2Client::CancelImportTaskCallable(const CancelImportTaskRequest& request) const
{
  std::shared_ptr<CancelImportTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelImportTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelImportTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelImportTaskAsync(const CancelImportTaskRequest& request, const CancelImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelImportTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelImportTask(*pRequest), context);
    } );
}
CancelReservedInstancesListingOutcome EC2Client::CancelReservedInstancesListing(const CancelReservedInstancesListingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelReservedInstancesListingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelReservedInstancesListingOutcomeCallable EC2Client::CancelReservedInstancesListingCallable(const CancelReservedInstancesListingRequest& request) const
{
  std::shared_ptr<CancelReservedInstancesListingRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelReservedInstancesListingOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelReservedInstancesListing(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelReservedInstancesListingAsync(const CancelReservedInstancesListingRequest& request, const CancelReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelReservedInstancesListingRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelReservedInstancesListing(*pRequest), context);
    } );
}
CancelSpotFleetRequestsOutcome EC2Client::CancelSpotFleetRequests(const CancelSpotFleetRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelSpotFleetRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelSpotFleetRequestsOutcomeCallable EC2Client::CancelSpotFleetRequestsCallable(const CancelSpotFleetRequestsRequest& request) const
{
  std::shared_ptr<CancelSpotFleetRequestsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelSpotFleetRequestsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelSpotFleetRequests(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelSpotFleetRequestsAsync(const CancelSpotFleetRequestsRequest& request, const CancelSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelSpotFleetRequestsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelSpotFleetRequests(*pRequest), context);
    } );
}
CancelSpotInstanceRequestsOutcome EC2Client::CancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelSpotInstanceRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelSpotInstanceRequestsOutcomeCallable EC2Client::CancelSpotInstanceRequestsCallable(const CancelSpotInstanceRequestsRequest& request) const
{
  std::shared_ptr<CancelSpotInstanceRequestsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CancelSpotInstanceRequestsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CancelSpotInstanceRequests(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CancelSpotInstanceRequestsAsync(const CancelSpotInstanceRequestsRequest& request, const CancelSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CancelSpotInstanceRequestsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CancelSpotInstanceRequests(*pRequest), context);
    } );
}
ConfirmProductInstanceOutcome EC2Client::ConfirmProductInstance(const ConfirmProductInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmProductInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmProductInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmProductInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ConfirmProductInstanceOutcomeCallable EC2Client::ConfirmProductInstanceCallable(const ConfirmProductInstanceRequest& request) const
{
  std::shared_ptr<ConfirmProductInstanceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ConfirmProductInstanceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ConfirmProductInstance(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ConfirmProductInstanceAsync(const ConfirmProductInstanceRequest& request, const ConfirmProductInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ConfirmProductInstanceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ConfirmProductInstance(*pRequest), context);
    } );
}
CopyFpgaImageOutcome EC2Client::CopyFpgaImage(const CopyFpgaImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyFpgaImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopyFpgaImageOutcomeCallable EC2Client::CopyFpgaImageCallable(const CopyFpgaImageRequest& request) const
{
  std::shared_ptr<CopyFpgaImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CopyFpgaImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CopyFpgaImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CopyFpgaImageAsync(const CopyFpgaImageRequest& request, const CopyFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CopyFpgaImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CopyFpgaImage(*pRequest), context);
    } );
}
CopyImageOutcome EC2Client::CopyImage(const CopyImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopyImageOutcomeCallable EC2Client::CopyImageCallable(const CopyImageRequest& request) const
{
  std::shared_ptr<CopyImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CopyImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CopyImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CopyImageAsync(const CopyImageRequest& request, const CopyImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CopyImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CopyImage(*pRequest), context);
    } );
}
CopySnapshotOutcome EC2Client::CopySnapshot(const CopySnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopySnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopySnapshotOutcomeCallable EC2Client::CopySnapshotCallable(const CopySnapshotRequest& request) const
{
  std::shared_ptr<CopySnapshotRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CopySnapshotOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CopySnapshot(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CopySnapshotRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CopySnapshot(*pRequest), context);
    } );
}
CreateCapacityReservationOutcome EC2Client::CreateCapacityReservation(const CreateCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCapacityReservationOutcomeCallable EC2Client::CreateCapacityReservationCallable(const CreateCapacityReservationRequest& request) const
{
  std::shared_ptr<CreateCapacityReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCapacityReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateCapacityReservationAsync(const CreateCapacityReservationRequest& request, const CreateCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCapacityReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCapacityReservation(*pRequest), context);
    } );
}
CreateCapacityReservationFleetOutcome EC2Client::CreateCapacityReservationFleet(const CreateCapacityReservationFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCapacityReservationFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCapacityReservationFleetOutcomeCallable EC2Client::CreateCapacityReservationFleetCallable(const CreateCapacityReservationFleetRequest& request) const
{
  std::shared_ptr<CreateCapacityReservationFleetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCapacityReservationFleetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCapacityReservationFleet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateCapacityReservationFleetAsync(const CreateCapacityReservationFleetRequest& request, const CreateCapacityReservationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCapacityReservationFleetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCapacityReservationFleet(*pRequest), context);
    } );
}
CreateCarrierGatewayOutcome EC2Client::CreateCarrierGateway(const CreateCarrierGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCarrierGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCarrierGatewayOutcomeCallable EC2Client::CreateCarrierGatewayCallable(const CreateCarrierGatewayRequest& request) const
{
  std::shared_ptr<CreateCarrierGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCarrierGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCarrierGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateCarrierGatewayAsync(const CreateCarrierGatewayRequest& request, const CreateCarrierGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCarrierGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCarrierGateway(*pRequest), context);
    } );
}
CreateClientVpnEndpointOutcome EC2Client::CreateClientVpnEndpoint(const CreateClientVpnEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClientVpnEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClientVpnEndpointOutcomeCallable EC2Client::CreateClientVpnEndpointCallable(const CreateClientVpnEndpointRequest& request) const
{
  std::shared_ptr<CreateClientVpnEndpointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateClientVpnEndpointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateClientVpnEndpoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateClientVpnEndpointAsync(const CreateClientVpnEndpointRequest& request, const CreateClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateClientVpnEndpointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateClientVpnEndpoint(*pRequest), context);
    } );
}
CreateClientVpnRouteOutcome EC2Client::CreateClientVpnRoute(const CreateClientVpnRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClientVpnRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClientVpnRouteOutcomeCallable EC2Client::CreateClientVpnRouteCallable(const CreateClientVpnRouteRequest& request) const
{
  std::shared_ptr<CreateClientVpnRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateClientVpnRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateClientVpnRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateClientVpnRouteAsync(const CreateClientVpnRouteRequest& request, const CreateClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateClientVpnRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateClientVpnRoute(*pRequest), context);
    } );
}
CreateCoipCidrOutcome EC2Client::CreateCoipCidr(const CreateCoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCoipCidrOutcomeCallable EC2Client::CreateCoipCidrCallable(const CreateCoipCidrRequest& request) const
{
  std::shared_ptr<CreateCoipCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCoipCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCoipCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateCoipCidrAsync(const CreateCoipCidrRequest& request, const CreateCoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCoipCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCoipCidr(*pRequest), context);
    } );
}
CreateCoipPoolOutcome EC2Client::CreateCoipPool(const CreateCoipPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCoipPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCoipPoolOutcomeCallable EC2Client::CreateCoipPoolCallable(const CreateCoipPoolRequest& request) const
{
  std::shared_ptr<CreateCoipPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCoipPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCoipPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateCoipPoolAsync(const CreateCoipPoolRequest& request, const CreateCoipPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCoipPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCoipPool(*pRequest), context);
    } );
}
CreateCustomerGatewayOutcome EC2Client::CreateCustomerGateway(const CreateCustomerGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCustomerGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCustomerGatewayOutcomeCallable EC2Client::CreateCustomerGatewayCallable(const CreateCustomerGatewayRequest& request) const
{
  std::shared_ptr<CreateCustomerGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomerGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateCustomerGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateCustomerGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateCustomerGateway(*pRequest), context);
    } );
}
CreateDefaultSubnetOutcome EC2Client::CreateDefaultSubnet(const CreateDefaultSubnetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDefaultSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDefaultSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDefaultSubnetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDefaultSubnetOutcomeCallable EC2Client::CreateDefaultSubnetCallable(const CreateDefaultSubnetRequest& request) const
{
  std::shared_ptr<CreateDefaultSubnetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateDefaultSubnetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateDefaultSubnet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateDefaultSubnetAsync(const CreateDefaultSubnetRequest& request, const CreateDefaultSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateDefaultSubnetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateDefaultSubnet(*pRequest), context);
    } );
}
CreateDefaultVpcOutcome EC2Client::CreateDefaultVpc(const CreateDefaultVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDefaultVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDefaultVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDefaultVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDefaultVpcOutcomeCallable EC2Client::CreateDefaultVpcCallable(const CreateDefaultVpcRequest& request) const
{
  std::shared_ptr<CreateDefaultVpcRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateDefaultVpcOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateDefaultVpc(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateDefaultVpcAsync(const CreateDefaultVpcRequest& request, const CreateDefaultVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateDefaultVpcRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateDefaultVpc(*pRequest), context);
    } );
}
CreateDhcpOptionsOutcome EC2Client::CreateDhcpOptions(const CreateDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDhcpOptionsOutcomeCallable EC2Client::CreateDhcpOptionsCallable(const CreateDhcpOptionsRequest& request) const
{
  std::shared_ptr<CreateDhcpOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateDhcpOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateDhcpOptionsAsync(const CreateDhcpOptionsRequest& request, const CreateDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateDhcpOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateDhcpOptions(*pRequest), context);
    } );
}
CreateEgressOnlyInternetGatewayOutcome EC2Client::CreateEgressOnlyInternetGateway(const CreateEgressOnlyInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEgressOnlyInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateEgressOnlyInternetGatewayOutcomeCallable EC2Client::CreateEgressOnlyInternetGatewayCallable(const CreateEgressOnlyInternetGatewayRequest& request) const
{
  std::shared_ptr<CreateEgressOnlyInternetGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateEgressOnlyInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateEgressOnlyInternetGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateEgressOnlyInternetGatewayAsync(const CreateEgressOnlyInternetGatewayRequest& request, const CreateEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateEgressOnlyInternetGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateEgressOnlyInternetGateway(*pRequest), context);
    } );
}
CreateFleetOutcome EC2Client::CreateFleet(const CreateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFleetOutcomeCallable EC2Client::CreateFleetCallable(const CreateFleetRequest& request) const
{
  std::shared_ptr<CreateFleetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateFleet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateFleetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateFleet(*pRequest), context);
    } );
}
CreateFlowLogsOutcome EC2Client::CreateFlowLogs(const CreateFlowLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFlowLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFlowLogsOutcomeCallable EC2Client::CreateFlowLogsCallable(const CreateFlowLogsRequest& request) const
{
  std::shared_ptr<CreateFlowLogsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowLogsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateFlowLogs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateFlowLogsAsync(const CreateFlowLogsRequest& request, const CreateFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateFlowLogsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateFlowLogs(*pRequest), context);
    } );
}
CreateFpgaImageOutcome EC2Client::CreateFpgaImage(const CreateFpgaImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFpgaImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFpgaImageOutcomeCallable EC2Client::CreateFpgaImageCallable(const CreateFpgaImageRequest& request) const
{
  std::shared_ptr<CreateFpgaImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateFpgaImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateFpgaImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateFpgaImageAsync(const CreateFpgaImageRequest& request, const CreateFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateFpgaImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateFpgaImage(*pRequest), context);
    } );
}
CreateImageOutcome EC2Client::CreateImage(const CreateImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateImageOutcomeCallable EC2Client::CreateImageCallable(const CreateImageRequest& request) const
{
  std::shared_ptr<CreateImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateImage(*pRequest), context);
    } );
}
CreateInstanceEventWindowOutcome EC2Client::CreateInstanceEventWindow(const CreateInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInstanceEventWindowOutcomeCallable EC2Client::CreateInstanceEventWindowCallable(const CreateInstanceEventWindowRequest& request) const
{
  std::shared_ptr<CreateInstanceEventWindowRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceEventWindowOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateInstanceEventWindow(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateInstanceEventWindowAsync(const CreateInstanceEventWindowRequest& request, const CreateInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateInstanceEventWindowRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateInstanceEventWindow(*pRequest), context);
    } );
}
CreateInstanceExportTaskOutcome EC2Client::CreateInstanceExportTask(const CreateInstanceExportTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceExportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceExportTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInstanceExportTaskOutcomeCallable EC2Client::CreateInstanceExportTaskCallable(const CreateInstanceExportTaskRequest& request) const
{
  std::shared_ptr<CreateInstanceExportTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceExportTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateInstanceExportTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateInstanceExportTaskAsync(const CreateInstanceExportTaskRequest& request, const CreateInstanceExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateInstanceExportTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateInstanceExportTask(*pRequest), context);
    } );
}
CreateInternetGatewayOutcome EC2Client::CreateInternetGateway(const CreateInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInternetGatewayOutcomeCallable EC2Client::CreateInternetGatewayCallable(const CreateInternetGatewayRequest& request) const
{
  std::shared_ptr<CreateInternetGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateInternetGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateInternetGatewayAsync(const CreateInternetGatewayRequest& request, const CreateInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateInternetGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateInternetGateway(*pRequest), context);
    } );
}
CreateIpamOutcome EC2Client::CreateIpam(const CreateIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamOutcomeCallable EC2Client::CreateIpamCallable(const CreateIpamRequest& request) const
{
  std::shared_ptr<CreateIpamRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateIpamOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateIpam(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateIpamAsync(const CreateIpamRequest& request, const CreateIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateIpamRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateIpam(*pRequest), context);
    } );
}
CreateIpamPoolOutcome EC2Client::CreateIpamPool(const CreateIpamPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamPoolOutcomeCallable EC2Client::CreateIpamPoolCallable(const CreateIpamPoolRequest& request) const
{
  std::shared_ptr<CreateIpamPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateIpamPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateIpamPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateIpamPoolAsync(const CreateIpamPoolRequest& request, const CreateIpamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateIpamPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateIpamPool(*pRequest), context);
    } );
}
CreateIpamScopeOutcome EC2Client::CreateIpamScope(const CreateIpamScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIpamScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateIpamScopeOutcomeCallable EC2Client::CreateIpamScopeCallable(const CreateIpamScopeRequest& request) const
{
  std::shared_ptr<CreateIpamScopeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateIpamScopeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateIpamScope(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateIpamScopeAsync(const CreateIpamScopeRequest& request, const CreateIpamScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateIpamScopeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateIpamScope(*pRequest), context);
    } );
}
CreateKeyPairOutcome EC2Client::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateKeyPairOutcomeCallable EC2Client::CreateKeyPairCallable(const CreateKeyPairRequest& request) const
{
  std::shared_ptr<CreateKeyPairRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyPairOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateKeyPair(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateKeyPairRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateKeyPair(*pRequest), context);
    } );
}
CreateLaunchTemplateOutcome EC2Client::CreateLaunchTemplate(const CreateLaunchTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLaunchTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLaunchTemplateOutcomeCallable EC2Client::CreateLaunchTemplateCallable(const CreateLaunchTemplateRequest& request) const
{
  std::shared_ptr<CreateLaunchTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateLaunchTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateLaunchTemplateAsync(const CreateLaunchTemplateRequest& request, const CreateLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateLaunchTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateLaunchTemplate(*pRequest), context);
    } );
}
CreateLaunchTemplateVersionOutcome EC2Client::CreateLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunchTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunchTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLaunchTemplateVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLaunchTemplateVersionOutcomeCallable EC2Client::CreateLaunchTemplateVersionCallable(const CreateLaunchTemplateVersionRequest& request) const
{
  std::shared_ptr<CreateLaunchTemplateVersionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchTemplateVersionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateLaunchTemplateVersion(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateLaunchTemplateVersionAsync(const CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateLaunchTemplateVersionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateLaunchTemplateVersion(*pRequest), context);
    } );
}
CreateLocalGatewayRouteOutcome EC2Client::CreateLocalGatewayRoute(const CreateLocalGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteOutcomeCallable EC2Client::CreateLocalGatewayRouteCallable(const CreateLocalGatewayRouteRequest& request) const
{
  std::shared_ptr<CreateLocalGatewayRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateLocalGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateLocalGatewayRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateLocalGatewayRouteAsync(const CreateLocalGatewayRouteRequest& request, const CreateLocalGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateLocalGatewayRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateLocalGatewayRoute(*pRequest), context);
    } );
}
CreateLocalGatewayRouteTableOutcome EC2Client::CreateLocalGatewayRouteTable(const CreateLocalGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteTableOutcomeCallable EC2Client::CreateLocalGatewayRouteTableCallable(const CreateLocalGatewayRouteTableRequest& request) const
{
  std::shared_ptr<CreateLocalGatewayRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateLocalGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateLocalGatewayRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateLocalGatewayRouteTableAsync(const CreateLocalGatewayRouteTableRequest& request, const CreateLocalGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateLocalGatewayRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateLocalGatewayRouteTable(*pRequest), context);
    } );
}
CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcomeCallable EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationCallable(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const
{
  std::shared_ptr<CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationAsync(const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request, const CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation(*pRequest), context);
    } );
}
CreateLocalGatewayRouteTableVpcAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVpcAssociation(const CreateLocalGatewayRouteTableVpcAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocalGatewayRouteTableVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateLocalGatewayRouteTableVpcAssociationOutcomeCallable EC2Client::CreateLocalGatewayRouteTableVpcAssociationCallable(const CreateLocalGatewayRouteTableVpcAssociationRequest& request) const
{
  std::shared_ptr<CreateLocalGatewayRouteTableVpcAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateLocalGatewayRouteTableVpcAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateLocalGatewayRouteTableVpcAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateLocalGatewayRouteTableVpcAssociationAsync(const CreateLocalGatewayRouteTableVpcAssociationRequest& request, const CreateLocalGatewayRouteTableVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateLocalGatewayRouteTableVpcAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateLocalGatewayRouteTableVpcAssociation(*pRequest), context);
    } );
}
CreateManagedPrefixListOutcome EC2Client::CreateManagedPrefixList(const CreateManagedPrefixListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateManagedPrefixListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateManagedPrefixListOutcomeCallable EC2Client::CreateManagedPrefixListCallable(const CreateManagedPrefixListRequest& request) const
{
  std::shared_ptr<CreateManagedPrefixListRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateManagedPrefixListOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateManagedPrefixList(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateManagedPrefixListAsync(const CreateManagedPrefixListRequest& request, const CreateManagedPrefixListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateManagedPrefixListRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateManagedPrefixList(*pRequest), context);
    } );
}
CreateNatGatewayOutcome EC2Client::CreateNatGateway(const CreateNatGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNatGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNatGatewayOutcomeCallable EC2Client::CreateNatGatewayCallable(const CreateNatGatewayRequest& request) const
{
  std::shared_ptr<CreateNatGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNatGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNatGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNatGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNatGateway(*pRequest), context);
    } );
}
CreateNetworkAclOutcome EC2Client::CreateNetworkAcl(const CreateNetworkAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkAclOutcomeCallable EC2Client::CreateNetworkAclCallable(const CreateNetworkAclRequest& request) const
{
  std::shared_ptr<CreateNetworkAclRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkAclOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNetworkAcl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNetworkAclAsync(const CreateNetworkAclRequest& request, const CreateNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNetworkAclRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNetworkAcl(*pRequest), context);
    } );
}
CreateNetworkAclEntryOutcome EC2Client::CreateNetworkAclEntry(const CreateNetworkAclEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkAclEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkAclEntryOutcomeCallable EC2Client::CreateNetworkAclEntryCallable(const CreateNetworkAclEntryRequest& request) const
{
  std::shared_ptr<CreateNetworkAclEntryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkAclEntryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNetworkAclEntry(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNetworkAclEntryAsync(const CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNetworkAclEntryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNetworkAclEntry(*pRequest), context);
    } );
}
CreateNetworkInsightsAccessScopeOutcome EC2Client::CreateNetworkInsightsAccessScope(const CreateNetworkInsightsAccessScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInsightsAccessScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInsightsAccessScopeOutcomeCallable EC2Client::CreateNetworkInsightsAccessScopeCallable(const CreateNetworkInsightsAccessScopeRequest& request) const
{
  std::shared_ptr<CreateNetworkInsightsAccessScopeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkInsightsAccessScopeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNetworkInsightsAccessScope(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNetworkInsightsAccessScopeAsync(const CreateNetworkInsightsAccessScopeRequest& request, const CreateNetworkInsightsAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNetworkInsightsAccessScopeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNetworkInsightsAccessScope(*pRequest), context);
    } );
}
CreateNetworkInsightsPathOutcome EC2Client::CreateNetworkInsightsPath(const CreateNetworkInsightsPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInsightsPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInsightsPathOutcomeCallable EC2Client::CreateNetworkInsightsPathCallable(const CreateNetworkInsightsPathRequest& request) const
{
  std::shared_ptr<CreateNetworkInsightsPathRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkInsightsPathOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNetworkInsightsPath(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNetworkInsightsPathAsync(const CreateNetworkInsightsPathRequest& request, const CreateNetworkInsightsPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNetworkInsightsPathRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNetworkInsightsPath(*pRequest), context);
    } );
}
CreateNetworkInterfaceOutcome EC2Client::CreateNetworkInterface(const CreateNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInterfaceOutcomeCallable EC2Client::CreateNetworkInterfaceCallable(const CreateNetworkInterfaceRequest& request) const
{
  std::shared_ptr<CreateNetworkInterfaceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNetworkInterface(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNetworkInterfaceAsync(const CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNetworkInterfaceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNetworkInterface(*pRequest), context);
    } );
}
CreateNetworkInterfacePermissionOutcome EC2Client::CreateNetworkInterfacePermission(const CreateNetworkInterfacePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkInterfacePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateNetworkInterfacePermissionOutcomeCallable EC2Client::CreateNetworkInterfacePermissionCallable(const CreateNetworkInterfacePermissionRequest& request) const
{
  std::shared_ptr<CreateNetworkInterfacePermissionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkInterfacePermissionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateNetworkInterfacePermission(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateNetworkInterfacePermissionAsync(const CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateNetworkInterfacePermissionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateNetworkInterfacePermission(*pRequest), context);
    } );
}
CreatePlacementGroupOutcome EC2Client::CreatePlacementGroup(const CreatePlacementGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePlacementGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePlacementGroupOutcomeCallable EC2Client::CreatePlacementGroupCallable(const CreatePlacementGroupRequest& request) const
{
  std::shared_ptr<CreatePlacementGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreatePlacementGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreatePlacementGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreatePlacementGroupAsync(const CreatePlacementGroupRequest& request, const CreatePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreatePlacementGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreatePlacementGroup(*pRequest), context);
    } );
}
CreatePublicIpv4PoolOutcome EC2Client::CreatePublicIpv4Pool(const CreatePublicIpv4PoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePublicIpv4PoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePublicIpv4PoolOutcomeCallable EC2Client::CreatePublicIpv4PoolCallable(const CreatePublicIpv4PoolRequest& request) const
{
  std::shared_ptr<CreatePublicIpv4PoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicIpv4PoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreatePublicIpv4Pool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreatePublicIpv4PoolAsync(const CreatePublicIpv4PoolRequest& request, const CreatePublicIpv4PoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreatePublicIpv4PoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreatePublicIpv4Pool(*pRequest), context);
    } );
}
CreateReplaceRootVolumeTaskOutcome EC2Client::CreateReplaceRootVolumeTask(const CreateReplaceRootVolumeTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplaceRootVolumeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplaceRootVolumeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplaceRootVolumeTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateReplaceRootVolumeTaskOutcomeCallable EC2Client::CreateReplaceRootVolumeTaskCallable(const CreateReplaceRootVolumeTaskRequest& request) const
{
  std::shared_ptr<CreateReplaceRootVolumeTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateReplaceRootVolumeTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateReplaceRootVolumeTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateReplaceRootVolumeTaskAsync(const CreateReplaceRootVolumeTaskRequest& request, const CreateReplaceRootVolumeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateReplaceRootVolumeTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateReplaceRootVolumeTask(*pRequest), context);
    } );
}
CreateReservedInstancesListingOutcome EC2Client::CreateReservedInstancesListing(const CreateReservedInstancesListingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReservedInstancesListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReservedInstancesListingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateReservedInstancesListingOutcomeCallable EC2Client::CreateReservedInstancesListingCallable(const CreateReservedInstancesListingRequest& request) const
{
  std::shared_ptr<CreateReservedInstancesListingRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateReservedInstancesListingOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateReservedInstancesListing(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateReservedInstancesListingAsync(const CreateReservedInstancesListingRequest& request, const CreateReservedInstancesListingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateReservedInstancesListingRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateReservedInstancesListing(*pRequest), context);
    } );
}
CreateRestoreImageTaskOutcome EC2Client::CreateRestoreImageTask(const CreateRestoreImageTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRestoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRestoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRestoreImageTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRestoreImageTaskOutcomeCallable EC2Client::CreateRestoreImageTaskCallable(const CreateRestoreImageTaskRequest& request) const
{
  std::shared_ptr<CreateRestoreImageTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateRestoreImageTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateRestoreImageTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateRestoreImageTaskAsync(const CreateRestoreImageTaskRequest& request, const CreateRestoreImageTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateRestoreImageTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateRestoreImageTask(*pRequest), context);
    } );
}
CreateRouteOutcome EC2Client::CreateRoute(const CreateRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRouteOutcomeCallable EC2Client::CreateRouteCallable(const CreateRouteRequest& request) const
{
  std::shared_ptr<CreateRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateRoute(*pRequest), context);
    } );
}
CreateRouteTableOutcome EC2Client::CreateRouteTable(const CreateRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRouteTableOutcomeCallable EC2Client::CreateRouteTableCallable(const CreateRouteTableRequest& request) const
{
  std::shared_ptr<CreateRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateRouteTableAsync(const CreateRouteTableRequest& request, const CreateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateRouteTable(*pRequest), context);
    } );
}
CreateSecurityGroupOutcome EC2Client::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSecurityGroupOutcomeCallable EC2Client::CreateSecurityGroupCallable(const CreateSecurityGroupRequest& request) const
{
  std::shared_ptr<CreateSecurityGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateSecurityGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateSecurityGroupAsync(const CreateSecurityGroupRequest& request, const CreateSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateSecurityGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateSecurityGroup(*pRequest), context);
    } );
}
CreateSnapshotOutcome EC2Client::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotOutcomeCallable EC2Client::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  std::shared_ptr<CreateSnapshotRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateSnapshot(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateSnapshotRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateSnapshot(*pRequest), context);
    } );
}
CreateSnapshotsOutcome EC2Client::CreateSnapshots(const CreateSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotsOutcomeCallable EC2Client::CreateSnapshotsCallable(const CreateSnapshotsRequest& request) const
{
  std::shared_ptr<CreateSnapshotsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateSnapshots(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateSnapshotsAsync(const CreateSnapshotsRequest& request, const CreateSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateSnapshotsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateSnapshots(*pRequest), context);
    } );
}
CreateSpotDatafeedSubscriptionOutcome EC2Client::CreateSpotDatafeedSubscription(const CreateSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSpotDatafeedSubscriptionOutcomeCallable EC2Client::CreateSpotDatafeedSubscriptionCallable(const CreateSpotDatafeedSubscriptionRequest& request) const
{
  std::shared_ptr<CreateSpotDatafeedSubscriptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateSpotDatafeedSubscriptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateSpotDatafeedSubscription(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateSpotDatafeedSubscriptionAsync(const CreateSpotDatafeedSubscriptionRequest& request, const CreateSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateSpotDatafeedSubscriptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateSpotDatafeedSubscription(*pRequest), context);
    } );
}
CreateStoreImageTaskOutcome EC2Client::CreateStoreImageTask(const CreateStoreImageTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStoreImageTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStoreImageTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStoreImageTaskOutcomeCallable EC2Client::CreateStoreImageTaskCallable(const CreateStoreImageTaskRequest& request) const
{
  std::shared_ptr<CreateStoreImageTaskRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateStoreImageTaskOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateStoreImageTask(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateStoreImageTaskAsync(const CreateStoreImageTaskRequest& request, const CreateStoreImageTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateStoreImageTaskRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateStoreImageTask(*pRequest), context);
    } );
}
CreateSubnetOutcome EC2Client::CreateSubnet(const CreateSubnetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSubnetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSubnetOutcomeCallable EC2Client::CreateSubnetCallable(const CreateSubnetRequest& request) const
{
  std::shared_ptr<CreateSubnetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateSubnetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateSubnet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateSubnetAsync(const CreateSubnetRequest& request, const CreateSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateSubnetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateSubnet(*pRequest), context);
    } );
}
CreateSubnetCidrReservationOutcome EC2Client::CreateSubnetCidrReservation(const CreateSubnetCidrReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSubnetCidrReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSubnetCidrReservationOutcomeCallable EC2Client::CreateSubnetCidrReservationCallable(const CreateSubnetCidrReservationRequest& request) const
{
  std::shared_ptr<CreateSubnetCidrReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateSubnetCidrReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateSubnetCidrReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateSubnetCidrReservationAsync(const CreateSubnetCidrReservationRequest& request, const CreateSubnetCidrReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateSubnetCidrReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateSubnetCidrReservation(*pRequest), context);
    } );
}
CreateTagsOutcome EC2Client::CreateTags(const CreateTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTagsOutcomeCallable EC2Client::CreateTagsCallable(const CreateTagsRequest& request) const
{
  std::shared_ptr<CreateTagsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTags(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTagsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTags(*pRequest), context);
    } );
}
CreateTrafficMirrorFilterOutcome EC2Client::CreateTrafficMirrorFilter(const CreateTrafficMirrorFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorFilterOutcomeCallable EC2Client::CreateTrafficMirrorFilterCallable(const CreateTrafficMirrorFilterRequest& request) const
{
  std::shared_ptr<CreateTrafficMirrorFilterRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorFilterOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTrafficMirrorFilter(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTrafficMirrorFilterAsync(const CreateTrafficMirrorFilterRequest& request, const CreateTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTrafficMirrorFilterRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTrafficMirrorFilter(*pRequest), context);
    } );
}
CreateTrafficMirrorFilterRuleOutcome EC2Client::CreateTrafficMirrorFilterRule(const CreateTrafficMirrorFilterRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorFilterRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorFilterRuleOutcomeCallable EC2Client::CreateTrafficMirrorFilterRuleCallable(const CreateTrafficMirrorFilterRuleRequest& request) const
{
  std::shared_ptr<CreateTrafficMirrorFilterRuleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorFilterRuleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTrafficMirrorFilterRule(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTrafficMirrorFilterRuleAsync(const CreateTrafficMirrorFilterRuleRequest& request, const CreateTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTrafficMirrorFilterRuleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTrafficMirrorFilterRule(*pRequest), context);
    } );
}
CreateTrafficMirrorSessionOutcome EC2Client::CreateTrafficMirrorSession(const CreateTrafficMirrorSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorSessionOutcomeCallable EC2Client::CreateTrafficMirrorSessionCallable(const CreateTrafficMirrorSessionRequest& request) const
{
  std::shared_ptr<CreateTrafficMirrorSessionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorSessionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTrafficMirrorSession(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTrafficMirrorSessionAsync(const CreateTrafficMirrorSessionRequest& request, const CreateTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTrafficMirrorSessionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTrafficMirrorSession(*pRequest), context);
    } );
}
CreateTrafficMirrorTargetOutcome EC2Client::CreateTrafficMirrorTarget(const CreateTrafficMirrorTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrafficMirrorTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTrafficMirrorTargetOutcomeCallable EC2Client::CreateTrafficMirrorTargetCallable(const CreateTrafficMirrorTargetRequest& request) const
{
  std::shared_ptr<CreateTrafficMirrorTargetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficMirrorTargetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTrafficMirrorTarget(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTrafficMirrorTargetAsync(const CreateTrafficMirrorTargetRequest& request, const CreateTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTrafficMirrorTargetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTrafficMirrorTarget(*pRequest), context);
    } );
}
CreateTransitGatewayOutcome EC2Client::CreateTransitGateway(const CreateTransitGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayOutcomeCallable EC2Client::CreateTransitGatewayCallable(const CreateTransitGatewayRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayAsync(const CreateTransitGatewayRequest& request, const CreateTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGateway(*pRequest), context);
    } );
}
CreateTransitGatewayConnectOutcome EC2Client::CreateTransitGatewayConnect(const CreateTransitGatewayConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayConnectOutcomeCallable EC2Client::CreateTransitGatewayConnectCallable(const CreateTransitGatewayConnectRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayConnectRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayConnectOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayConnect(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayConnectAsync(const CreateTransitGatewayConnectRequest& request, const CreateTransitGatewayConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayConnectRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayConnect(*pRequest), context);
    } );
}
CreateTransitGatewayConnectPeerOutcome EC2Client::CreateTransitGatewayConnectPeer(const CreateTransitGatewayConnectPeerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayConnectPeerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayConnectPeerOutcomeCallable EC2Client::CreateTransitGatewayConnectPeerCallable(const CreateTransitGatewayConnectPeerRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayConnectPeerRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayConnectPeerOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayConnectPeer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayConnectPeerAsync(const CreateTransitGatewayConnectPeerRequest& request, const CreateTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayConnectPeerRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayConnectPeer(*pRequest), context);
    } );
}
CreateTransitGatewayMulticastDomainOutcome EC2Client::CreateTransitGatewayMulticastDomain(const CreateTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayMulticastDomainOutcomeCallable EC2Client::CreateTransitGatewayMulticastDomainCallable(const CreateTransitGatewayMulticastDomainRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayMulticastDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayMulticastDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayMulticastDomainAsync(const CreateTransitGatewayMulticastDomainRequest& request, const CreateTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayMulticastDomain(*pRequest), context);
    } );
}
CreateTransitGatewayPeeringAttachmentOutcome EC2Client::CreateTransitGatewayPeeringAttachment(const CreateTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayPeeringAttachmentOutcomeCallable EC2Client::CreateTransitGatewayPeeringAttachmentCallable(const CreateTransitGatewayPeeringAttachmentRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayPeeringAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayPeeringAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayPeeringAttachmentAsync(const CreateTransitGatewayPeeringAttachmentRequest& request, const CreateTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayPeeringAttachment(*pRequest), context);
    } );
}
CreateTransitGatewayPolicyTableOutcome EC2Client::CreateTransitGatewayPolicyTable(const CreateTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayPolicyTableOutcomeCallable EC2Client::CreateTransitGatewayPolicyTableCallable(const CreateTransitGatewayPolicyTableRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayPolicyTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayPolicyTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayPolicyTableAsync(const CreateTransitGatewayPolicyTableRequest& request, const CreateTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayPolicyTable(*pRequest), context);
    } );
}
CreateTransitGatewayPrefixListReferenceOutcome EC2Client::CreateTransitGatewayPrefixListReference(const CreateTransitGatewayPrefixListReferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayPrefixListReferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayPrefixListReferenceOutcomeCallable EC2Client::CreateTransitGatewayPrefixListReferenceCallable(const CreateTransitGatewayPrefixListReferenceRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayPrefixListReferenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayPrefixListReferenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayPrefixListReference(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayPrefixListReferenceAsync(const CreateTransitGatewayPrefixListReferenceRequest& request, const CreateTransitGatewayPrefixListReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayPrefixListReferenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayPrefixListReference(*pRequest), context);
    } );
}
CreateTransitGatewayRouteOutcome EC2Client::CreateTransitGatewayRoute(const CreateTransitGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayRouteOutcomeCallable EC2Client::CreateTransitGatewayRouteCallable(const CreateTransitGatewayRouteRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayRouteAsync(const CreateTransitGatewayRouteRequest& request, const CreateTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayRoute(*pRequest), context);
    } );
}
CreateTransitGatewayRouteTableOutcome EC2Client::CreateTransitGatewayRouteTable(const CreateTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayRouteTableOutcomeCallable EC2Client::CreateTransitGatewayRouteTableCallable(const CreateTransitGatewayRouteTableRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayRouteTableAsync(const CreateTransitGatewayRouteTableRequest& request, const CreateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayRouteTable(*pRequest), context);
    } );
}
CreateTransitGatewayRouteTableAnnouncementOutcome EC2Client::CreateTransitGatewayRouteTableAnnouncement(const CreateTransitGatewayRouteTableAnnouncementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayRouteTableAnnouncementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayRouteTableAnnouncementOutcomeCallable EC2Client::CreateTransitGatewayRouteTableAnnouncementCallable(const CreateTransitGatewayRouteTableAnnouncementRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayRouteTableAnnouncementRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayRouteTableAnnouncementOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayRouteTableAnnouncement(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayRouteTableAnnouncementAsync(const CreateTransitGatewayRouteTableAnnouncementRequest& request, const CreateTransitGatewayRouteTableAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayRouteTableAnnouncementRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayRouteTableAnnouncement(*pRequest), context);
    } );
}
CreateTransitGatewayVpcAttachmentOutcome EC2Client::CreateTransitGatewayVpcAttachment(const CreateTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTransitGatewayVpcAttachmentOutcomeCallable EC2Client::CreateTransitGatewayVpcAttachmentCallable(const CreateTransitGatewayVpcAttachmentRequest& request) const
{
  std::shared_ptr<CreateTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateTransitGatewayVpcAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateTransitGatewayVpcAttachmentAsync(const CreateTransitGatewayVpcAttachmentRequest& request, const CreateTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateTransitGatewayVpcAttachment(*pRequest), context);
    } );
}
CreateVolumeOutcome EC2Client::CreateVolume(const CreateVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVolumeOutcomeCallable EC2Client::CreateVolumeCallable(const CreateVolumeRequest& request) const
{
  std::shared_ptr<CreateVolumeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVolumeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVolume(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVolumeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVolume(*pRequest), context);
    } );
}
CreateVpcOutcome EC2Client::CreateVpc(const CreateVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcOutcomeCallable EC2Client::CreateVpcCallable(const CreateVpcRequest& request) const
{
  std::shared_ptr<CreateVpcRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpc(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpcAsync(const CreateVpcRequest& request, const CreateVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpcRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpc(*pRequest), context);
    } );
}
CreateVpcEndpointOutcome EC2Client::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcEndpointOutcomeCallable EC2Client::CreateVpcEndpointCallable(const CreateVpcEndpointRequest& request) const
{
  std::shared_ptr<CreateVpcEndpointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpcEndpoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpcEndpointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpcEndpoint(*pRequest), context);
    } );
}
CreateVpcEndpointConnectionNotificationOutcome EC2Client::CreateVpcEndpointConnectionNotification(const CreateVpcEndpointConnectionNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointConnectionNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcEndpointConnectionNotificationOutcomeCallable EC2Client::CreateVpcEndpointConnectionNotificationCallable(const CreateVpcEndpointConnectionNotificationRequest& request) const
{
  std::shared_ptr<CreateVpcEndpointConnectionNotificationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointConnectionNotificationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpcEndpointConnectionNotification(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpcEndpointConnectionNotificationAsync(const CreateVpcEndpointConnectionNotificationRequest& request, const CreateVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpcEndpointConnectionNotificationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpcEndpointConnectionNotification(*pRequest), context);
    } );
}
CreateVpcEndpointServiceConfigurationOutcome EC2Client::CreateVpcEndpointServiceConfiguration(const CreateVpcEndpointServiceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointServiceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcEndpointServiceConfigurationOutcomeCallable EC2Client::CreateVpcEndpointServiceConfigurationCallable(const CreateVpcEndpointServiceConfigurationRequest& request) const
{
  std::shared_ptr<CreateVpcEndpointServiceConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcEndpointServiceConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpcEndpointServiceConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpcEndpointServiceConfigurationAsync(const CreateVpcEndpointServiceConfigurationRequest& request, const CreateVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpcEndpointServiceConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpcEndpointServiceConfiguration(*pRequest), context);
    } );
}
CreateVpcPeeringConnectionOutcome EC2Client::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpcPeeringConnectionOutcomeCallable EC2Client::CreateVpcPeeringConnectionCallable(const CreateVpcPeeringConnectionRequest& request) const
{
  std::shared_ptr<CreateVpcPeeringConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpcPeeringConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpcPeeringConnectionAsync(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpcPeeringConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpcPeeringConnection(*pRequest), context);
    } );
}
CreateVpnConnectionOutcome EC2Client::CreateVpnConnection(const CreateVpnConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpnConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpnConnectionOutcomeCallable EC2Client::CreateVpnConnectionCallable(const CreateVpnConnectionRequest& request) const
{
  std::shared_ptr<CreateVpnConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpnConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpnConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpnConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpnConnection(*pRequest), context);
    } );
}
CreateVpnConnectionRouteOutcome EC2Client::CreateVpnConnectionRoute(const CreateVpnConnectionRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpnConnectionRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpnConnectionRouteOutcomeCallable EC2Client::CreateVpnConnectionRouteCallable(const CreateVpnConnectionRouteRequest& request) const
{
  std::shared_ptr<CreateVpnConnectionRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpnConnectionRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpnConnectionRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpnConnectionRouteAsync(const CreateVpnConnectionRouteRequest& request, const CreateVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpnConnectionRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpnConnectionRoute(*pRequest), context);
    } );
}
CreateVpnGatewayOutcome EC2Client::CreateVpnGateway(const CreateVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateVpnGatewayOutcomeCallable EC2Client::CreateVpnGatewayCallable(const CreateVpnGatewayRequest& request) const
{
  std::shared_ptr<CreateVpnGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateVpnGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::CreateVpnGatewayAsync(const CreateVpnGatewayRequest& request, const CreateVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateVpnGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateVpnGateway(*pRequest), context);
    } );
}
DeleteCarrierGatewayOutcome EC2Client::DeleteCarrierGateway(const DeleteCarrierGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCarrierGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCarrierGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCarrierGatewayOutcomeCallable EC2Client::DeleteCarrierGatewayCallable(const DeleteCarrierGatewayRequest& request) const
{
  std::shared_ptr<DeleteCarrierGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteCarrierGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteCarrierGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteCarrierGatewayAsync(const DeleteCarrierGatewayRequest& request, const DeleteCarrierGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteCarrierGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteCarrierGateway(*pRequest), context);
    } );
}
DeleteClientVpnEndpointOutcome EC2Client::DeleteClientVpnEndpoint(const DeleteClientVpnEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClientVpnEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClientVpnEndpointOutcomeCallable EC2Client::DeleteClientVpnEndpointCallable(const DeleteClientVpnEndpointRequest& request) const
{
  std::shared_ptr<DeleteClientVpnEndpointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientVpnEndpointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteClientVpnEndpoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteClientVpnEndpointAsync(const DeleteClientVpnEndpointRequest& request, const DeleteClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteClientVpnEndpointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteClientVpnEndpoint(*pRequest), context);
    } );
}
DeleteClientVpnRouteOutcome EC2Client::DeleteClientVpnRoute(const DeleteClientVpnRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClientVpnRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClientVpnRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClientVpnRouteOutcomeCallable EC2Client::DeleteClientVpnRouteCallable(const DeleteClientVpnRouteRequest& request) const
{
  std::shared_ptr<DeleteClientVpnRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientVpnRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteClientVpnRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteClientVpnRouteAsync(const DeleteClientVpnRouteRequest& request, const DeleteClientVpnRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteClientVpnRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteClientVpnRoute(*pRequest), context);
    } );
}
DeleteCoipCidrOutcome EC2Client::DeleteCoipCidr(const DeleteCoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCoipCidrOutcomeCallable EC2Client::DeleteCoipCidrCallable(const DeleteCoipCidrRequest& request) const
{
  std::shared_ptr<DeleteCoipCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoipCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteCoipCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteCoipCidrAsync(const DeleteCoipCidrRequest& request, const DeleteCoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteCoipCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteCoipCidr(*pRequest), context);
    } );
}
DeleteCoipPoolOutcome EC2Client::DeleteCoipPool(const DeleteCoipPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCoipPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCoipPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCoipPoolOutcomeCallable EC2Client::DeleteCoipPoolCallable(const DeleteCoipPoolRequest& request) const
{
  std::shared_ptr<DeleteCoipPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteCoipPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteCoipPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteCoipPoolAsync(const DeleteCoipPoolRequest& request, const DeleteCoipPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteCoipPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteCoipPool(*pRequest), context);
    } );
}
DeleteCustomerGatewayOutcome EC2Client::DeleteCustomerGateway(const DeleteCustomerGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomerGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCustomerGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteCustomerGatewayOutcomeCallable EC2Client::DeleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest& request) const
{
  std::shared_ptr<DeleteCustomerGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomerGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteCustomerGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteCustomerGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteCustomerGateway(*pRequest), context);
    } );
}
DeleteDhcpOptionsOutcome EC2Client::DeleteDhcpOptions(const DeleteDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDhcpOptionsOutcomeCallable EC2Client::DeleteDhcpOptionsCallable(const DeleteDhcpOptionsRequest& request) const
{
  std::shared_ptr<DeleteDhcpOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteDhcpOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteDhcpOptionsAsync(const DeleteDhcpOptionsRequest& request, const DeleteDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteDhcpOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteDhcpOptions(*pRequest), context);
    } );
}
DeleteEgressOnlyInternetGatewayOutcome EC2Client::DeleteEgressOnlyInternetGateway(const DeleteEgressOnlyInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEgressOnlyInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEgressOnlyInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEgressOnlyInternetGatewayOutcomeCallable EC2Client::DeleteEgressOnlyInternetGatewayCallable(const DeleteEgressOnlyInternetGatewayRequest& request) const
{
  std::shared_ptr<DeleteEgressOnlyInternetGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteEgressOnlyInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteEgressOnlyInternetGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteEgressOnlyInternetGatewayAsync(const DeleteEgressOnlyInternetGatewayRequest& request, const DeleteEgressOnlyInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteEgressOnlyInternetGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteEgressOnlyInternetGateway(*pRequest), context);
    } );
}
DeleteFleetsOutcome EC2Client::DeleteFleets(const DeleteFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteFleetsOutcomeCallable EC2Client::DeleteFleetsCallable(const DeleteFleetsRequest& request) const
{
  std::shared_ptr<DeleteFleetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteFleets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteFleetsAsync(const DeleteFleetsRequest& request, const DeleteFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteFleetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteFleets(*pRequest), context);
    } );
}
DeleteFlowLogsOutcome EC2Client::DeleteFlowLogs(const DeleteFlowLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFlowLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteFlowLogsOutcomeCallable EC2Client::DeleteFlowLogsCallable(const DeleteFlowLogsRequest& request) const
{
  std::shared_ptr<DeleteFlowLogsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowLogsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteFlowLogs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteFlowLogsAsync(const DeleteFlowLogsRequest& request, const DeleteFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteFlowLogsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteFlowLogs(*pRequest), context);
    } );
}
DeleteFpgaImageOutcome EC2Client::DeleteFpgaImage(const DeleteFpgaImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFpgaImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFpgaImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteFpgaImageOutcomeCallable EC2Client::DeleteFpgaImageCallable(const DeleteFpgaImageRequest& request) const
{
  std::shared_ptr<DeleteFpgaImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteFpgaImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteFpgaImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteFpgaImageAsync(const DeleteFpgaImageRequest& request, const DeleteFpgaImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteFpgaImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteFpgaImage(*pRequest), context);
    } );
}
DeleteInstanceEventWindowOutcome EC2Client::DeleteInstanceEventWindow(const DeleteInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInstanceEventWindowOutcomeCallable EC2Client::DeleteInstanceEventWindowCallable(const DeleteInstanceEventWindowRequest& request) const
{
  std::shared_ptr<DeleteInstanceEventWindowRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceEventWindowOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteInstanceEventWindow(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteInstanceEventWindowAsync(const DeleteInstanceEventWindowRequest& request, const DeleteInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteInstanceEventWindowRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteInstanceEventWindow(*pRequest), context);
    } );
}
DeleteInternetGatewayOutcome EC2Client::DeleteInternetGateway(const DeleteInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInternetGatewayOutcomeCallable EC2Client::DeleteInternetGatewayCallable(const DeleteInternetGatewayRequest& request) const
{
  std::shared_ptr<DeleteInternetGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteInternetGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteInternetGatewayAsync(const DeleteInternetGatewayRequest& request, const DeleteInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteInternetGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteInternetGateway(*pRequest), context);
    } );
}
DeleteIpamOutcome EC2Client::DeleteIpam(const DeleteIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamOutcomeCallable EC2Client::DeleteIpamCallable(const DeleteIpamRequest& request) const
{
  std::shared_ptr<DeleteIpamRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteIpamOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteIpam(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteIpamAsync(const DeleteIpamRequest& request, const DeleteIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteIpamRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteIpam(*pRequest), context);
    } );
}
DeleteIpamPoolOutcome EC2Client::DeleteIpamPool(const DeleteIpamPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamPoolOutcomeCallable EC2Client::DeleteIpamPoolCallable(const DeleteIpamPoolRequest& request) const
{
  std::shared_ptr<DeleteIpamPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteIpamPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteIpamPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteIpamPoolAsync(const DeleteIpamPoolRequest& request, const DeleteIpamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteIpamPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteIpamPool(*pRequest), context);
    } );
}
DeleteIpamScopeOutcome EC2Client::DeleteIpamScope(const DeleteIpamScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIpamScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIpamScopeOutcomeCallable EC2Client::DeleteIpamScopeCallable(const DeleteIpamScopeRequest& request) const
{
  std::shared_ptr<DeleteIpamScopeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteIpamScopeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteIpamScope(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteIpamScopeAsync(const DeleteIpamScopeRequest& request, const DeleteIpamScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteIpamScopeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteIpamScope(*pRequest), context);
    } );
}
DeleteKeyPairOutcome EC2Client::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteKeyPairOutcomeCallable EC2Client::DeleteKeyPairCallable(const DeleteKeyPairRequest& request) const
{
  std::shared_ptr<DeleteKeyPairRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeyPairOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteKeyPair(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteKeyPairAsync(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteKeyPairRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteKeyPair(*pRequest), context);
    } );
}
DeleteLaunchTemplateOutcome EC2Client::DeleteLaunchTemplate(const DeleteLaunchTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLaunchTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLaunchTemplateOutcomeCallable EC2Client::DeleteLaunchTemplateCallable(const DeleteLaunchTemplateRequest& request) const
{
  std::shared_ptr<DeleteLaunchTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteLaunchTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteLaunchTemplateAsync(const DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteLaunchTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteLaunchTemplate(*pRequest), context);
    } );
}
DeleteLaunchTemplateVersionsOutcome EC2Client::DeleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLaunchTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLaunchTemplateVersionsOutcomeCallable EC2Client::DeleteLaunchTemplateVersionsCallable(const DeleteLaunchTemplateVersionsRequest& request) const
{
  std::shared_ptr<DeleteLaunchTemplateVersionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteLaunchTemplateVersions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteLaunchTemplateVersionsAsync(const DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteLaunchTemplateVersionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteLaunchTemplateVersions(*pRequest), context);
    } );
}
DeleteLocalGatewayRouteOutcome EC2Client::DeleteLocalGatewayRoute(const DeleteLocalGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteOutcomeCallable EC2Client::DeleteLocalGatewayRouteCallable(const DeleteLocalGatewayRouteRequest& request) const
{
  std::shared_ptr<DeleteLocalGatewayRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteLocalGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteLocalGatewayRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteLocalGatewayRouteAsync(const DeleteLocalGatewayRouteRequest& request, const DeleteLocalGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteLocalGatewayRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteLocalGatewayRoute(*pRequest), context);
    } );
}
DeleteLocalGatewayRouteTableOutcome EC2Client::DeleteLocalGatewayRouteTable(const DeleteLocalGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteTableOutcomeCallable EC2Client::DeleteLocalGatewayRouteTableCallable(const DeleteLocalGatewayRouteTableRequest& request) const
{
  std::shared_ptr<DeleteLocalGatewayRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteLocalGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteLocalGatewayRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteLocalGatewayRouteTableAsync(const DeleteLocalGatewayRouteTableRequest& request, const DeleteLocalGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteLocalGatewayRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteLocalGatewayRouteTable(*pRequest), context);
    } );
}
DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcomeCallable EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationCallable(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const
{
  std::shared_ptr<DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationAsync(const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request, const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(*pRequest), context);
    } );
}
DeleteLocalGatewayRouteTableVpcAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVpcAssociation(const DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocalGatewayRouteTableVpcAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocalGatewayRouteTableVpcAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLocalGatewayRouteTableVpcAssociationOutcomeCallable EC2Client::DeleteLocalGatewayRouteTableVpcAssociationCallable(const DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const
{
  std::shared_ptr<DeleteLocalGatewayRouteTableVpcAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteLocalGatewayRouteTableVpcAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteLocalGatewayRouteTableVpcAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteLocalGatewayRouteTableVpcAssociationAsync(const DeleteLocalGatewayRouteTableVpcAssociationRequest& request, const DeleteLocalGatewayRouteTableVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteLocalGatewayRouteTableVpcAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteLocalGatewayRouteTableVpcAssociation(*pRequest), context);
    } );
}
DeleteManagedPrefixListOutcome EC2Client::DeleteManagedPrefixList(const DeleteManagedPrefixListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteManagedPrefixListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteManagedPrefixListOutcomeCallable EC2Client::DeleteManagedPrefixListCallable(const DeleteManagedPrefixListRequest& request) const
{
  std::shared_ptr<DeleteManagedPrefixListRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteManagedPrefixListOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteManagedPrefixList(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteManagedPrefixListAsync(const DeleteManagedPrefixListRequest& request, const DeleteManagedPrefixListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteManagedPrefixListRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteManagedPrefixList(*pRequest), context);
    } );
}
DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNatGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNatGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNatGatewayOutcomeCallable EC2Client::DeleteNatGatewayCallable(const DeleteNatGatewayRequest& request) const
{
  std::shared_ptr<DeleteNatGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNatGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNatGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNatGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNatGateway(*pRequest), context);
    } );
}
DeleteNetworkAclOutcome EC2Client::DeleteNetworkAcl(const DeleteNetworkAclRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkAcl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkAclOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkAclOutcomeCallable EC2Client::DeleteNetworkAclCallable(const DeleteNetworkAclRequest& request) const
{
  std::shared_ptr<DeleteNetworkAclRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkAclOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkAcl(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkAclAsync(const DeleteNetworkAclRequest& request, const DeleteNetworkAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkAclRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkAcl(*pRequest), context);
    } );
}
DeleteNetworkAclEntryOutcome EC2Client::DeleteNetworkAclEntry(const DeleteNetworkAclEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkAclEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkAclEntryOutcomeCallable EC2Client::DeleteNetworkAclEntryCallable(const DeleteNetworkAclEntryRequest& request) const
{
  std::shared_ptr<DeleteNetworkAclEntryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkAclEntryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkAclEntry(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkAclEntryAsync(const DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkAclEntryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkAclEntry(*pRequest), context);
    } );
}
DeleteNetworkInsightsAccessScopeOutcome EC2Client::DeleteNetworkInsightsAccessScope(const DeleteNetworkInsightsAccessScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsAccessScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsAccessScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsAccessScopeOutcomeCallable EC2Client::DeleteNetworkInsightsAccessScopeCallable(const DeleteNetworkInsightsAccessScopeRequest& request) const
{
  std::shared_ptr<DeleteNetworkInsightsAccessScopeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInsightsAccessScopeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkInsightsAccessScope(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkInsightsAccessScopeAsync(const DeleteNetworkInsightsAccessScopeRequest& request, const DeleteNetworkInsightsAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkInsightsAccessScopeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkInsightsAccessScope(*pRequest), context);
    } );
}
DeleteNetworkInsightsAccessScopeAnalysisOutcome EC2Client::DeleteNetworkInsightsAccessScopeAnalysis(const DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsAccessScopeAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsAccessScopeAnalysisOutcomeCallable EC2Client::DeleteNetworkInsightsAccessScopeAnalysisCallable(const DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const
{
  std::shared_ptr<DeleteNetworkInsightsAccessScopeAnalysisRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInsightsAccessScopeAnalysisOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkInsightsAccessScopeAnalysis(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkInsightsAccessScopeAnalysisAsync(const DeleteNetworkInsightsAccessScopeAnalysisRequest& request, const DeleteNetworkInsightsAccessScopeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkInsightsAccessScopeAnalysisRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkInsightsAccessScopeAnalysis(*pRequest), context);
    } );
}
DeleteNetworkInsightsAnalysisOutcome EC2Client::DeleteNetworkInsightsAnalysis(const DeleteNetworkInsightsAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsAnalysisOutcomeCallable EC2Client::DeleteNetworkInsightsAnalysisCallable(const DeleteNetworkInsightsAnalysisRequest& request) const
{
  std::shared_ptr<DeleteNetworkInsightsAnalysisRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInsightsAnalysisOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkInsightsAnalysis(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkInsightsAnalysisAsync(const DeleteNetworkInsightsAnalysisRequest& request, const DeleteNetworkInsightsAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkInsightsAnalysisRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkInsightsAnalysis(*pRequest), context);
    } );
}
DeleteNetworkInsightsPathOutcome EC2Client::DeleteNetworkInsightsPath(const DeleteNetworkInsightsPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInsightsPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInsightsPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInsightsPathOutcomeCallable EC2Client::DeleteNetworkInsightsPathCallable(const DeleteNetworkInsightsPathRequest& request) const
{
  std::shared_ptr<DeleteNetworkInsightsPathRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInsightsPathOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkInsightsPath(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkInsightsPathAsync(const DeleteNetworkInsightsPathRequest& request, const DeleteNetworkInsightsPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkInsightsPathRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkInsightsPath(*pRequest), context);
    } );
}
DeleteNetworkInterfaceOutcome EC2Client::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInterfaceOutcomeCallable EC2Client::DeleteNetworkInterfaceCallable(const DeleteNetworkInterfaceRequest& request) const
{
  std::shared_ptr<DeleteNetworkInterfaceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkInterface(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkInterfaceAsync(const DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkInterfaceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkInterface(*pRequest), context);
    } );
}
DeleteNetworkInterfacePermissionOutcome EC2Client::DeleteNetworkInterfacePermission(const DeleteNetworkInterfacePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkInterfacePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkInterfacePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteNetworkInterfacePermissionOutcomeCallable EC2Client::DeleteNetworkInterfacePermissionCallable(const DeleteNetworkInterfacePermissionRequest& request) const
{
  std::shared_ptr<DeleteNetworkInterfacePermissionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkInterfacePermissionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteNetworkInterfacePermission(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteNetworkInterfacePermissionAsync(const DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteNetworkInterfacePermissionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteNetworkInterfacePermission(*pRequest), context);
    } );
}
DeletePlacementGroupOutcome EC2Client::DeletePlacementGroup(const DeletePlacementGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePlacementGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePlacementGroupOutcomeCallable EC2Client::DeletePlacementGroupCallable(const DeletePlacementGroupRequest& request) const
{
  std::shared_ptr<DeletePlacementGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeletePlacementGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeletePlacementGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeletePlacementGroupAsync(const DeletePlacementGroupRequest& request, const DeletePlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeletePlacementGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeletePlacementGroup(*pRequest), context);
    } );
}
DeletePublicIpv4PoolOutcome EC2Client::DeletePublicIpv4Pool(const DeletePublicIpv4PoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicIpv4Pool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePublicIpv4PoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePublicIpv4PoolOutcomeCallable EC2Client::DeletePublicIpv4PoolCallable(const DeletePublicIpv4PoolRequest& request) const
{
  std::shared_ptr<DeletePublicIpv4PoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicIpv4PoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeletePublicIpv4Pool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeletePublicIpv4PoolAsync(const DeletePublicIpv4PoolRequest& request, const DeletePublicIpv4PoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeletePublicIpv4PoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeletePublicIpv4Pool(*pRequest), context);
    } );
}
DeleteQueuedReservedInstancesOutcome EC2Client::DeleteQueuedReservedInstances(const DeleteQueuedReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueuedReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueuedReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteQueuedReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteQueuedReservedInstancesOutcomeCallable EC2Client::DeleteQueuedReservedInstancesCallable(const DeleteQueuedReservedInstancesRequest& request) const
{
  std::shared_ptr<DeleteQueuedReservedInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueuedReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteQueuedReservedInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteQueuedReservedInstancesAsync(const DeleteQueuedReservedInstancesRequest& request, const DeleteQueuedReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteQueuedReservedInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteQueuedReservedInstances(*pRequest), context);
    } );
}
DeleteRouteOutcome EC2Client::DeleteRoute(const DeleteRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRouteOutcomeCallable EC2Client::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  std::shared_ptr<DeleteRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteRoute(*pRequest), context);
    } );
}
DeleteRouteTableOutcome EC2Client::DeleteRouteTable(const DeleteRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRouteTableOutcomeCallable EC2Client::DeleteRouteTableCallable(const DeleteRouteTableRequest& request) const
{
  std::shared_ptr<DeleteRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteRouteTableAsync(const DeleteRouteTableRequest& request, const DeleteRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteRouteTable(*pRequest), context);
    } );
}
DeleteSecurityGroupOutcome EC2Client::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSecurityGroupOutcomeCallable EC2Client::DeleteSecurityGroupCallable(const DeleteSecurityGroupRequest& request) const
{
  std::shared_ptr<DeleteSecurityGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteSecurityGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteSecurityGroupAsync(const DeleteSecurityGroupRequest& request, const DeleteSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteSecurityGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteSecurityGroup(*pRequest), context);
    } );
}
DeleteSnapshotOutcome EC2Client::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotOutcomeCallable EC2Client::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  std::shared_ptr<DeleteSnapshotRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteSnapshot(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteSnapshotRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteSnapshot(*pRequest), context);
    } );
}
DeleteSpotDatafeedSubscriptionOutcome EC2Client::DeleteSpotDatafeedSubscription(const DeleteSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSpotDatafeedSubscriptionOutcomeCallable EC2Client::DeleteSpotDatafeedSubscriptionCallable(const DeleteSpotDatafeedSubscriptionRequest& request) const
{
  std::shared_ptr<DeleteSpotDatafeedSubscriptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteSpotDatafeedSubscriptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteSpotDatafeedSubscription(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteSpotDatafeedSubscriptionAsync(const DeleteSpotDatafeedSubscriptionRequest& request, const DeleteSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteSpotDatafeedSubscriptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteSpotDatafeedSubscription(*pRequest), context);
    } );
}
DeleteSubnetOutcome EC2Client::DeleteSubnet(const DeleteSubnetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubnet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSubnetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSubnetOutcomeCallable EC2Client::DeleteSubnetCallable(const DeleteSubnetRequest& request) const
{
  std::shared_ptr<DeleteSubnetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubnetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteSubnet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteSubnetAsync(const DeleteSubnetRequest& request, const DeleteSubnetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteSubnetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteSubnet(*pRequest), context);
    } );
}
DeleteSubnetCidrReservationOutcome EC2Client::DeleteSubnetCidrReservation(const DeleteSubnetCidrReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubnetCidrReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSubnetCidrReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSubnetCidrReservationOutcomeCallable EC2Client::DeleteSubnetCidrReservationCallable(const DeleteSubnetCidrReservationRequest& request) const
{
  std::shared_ptr<DeleteSubnetCidrReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteSubnetCidrReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteSubnetCidrReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteSubnetCidrReservationAsync(const DeleteSubnetCidrReservationRequest& request, const DeleteSubnetCidrReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteSubnetCidrReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteSubnetCidrReservation(*pRequest), context);
    } );
}
DeleteTagsOutcome EC2Client::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTagsOutcomeCallable EC2Client::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  std::shared_ptr<DeleteTagsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTags(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTagsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTags(*pRequest), context);
    } );
}
DeleteTrafficMirrorFilterOutcome EC2Client::DeleteTrafficMirrorFilter(const DeleteTrafficMirrorFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorFilterOutcomeCallable EC2Client::DeleteTrafficMirrorFilterCallable(const DeleteTrafficMirrorFilterRequest& request) const
{
  std::shared_ptr<DeleteTrafficMirrorFilterRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorFilterOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTrafficMirrorFilter(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTrafficMirrorFilterAsync(const DeleteTrafficMirrorFilterRequest& request, const DeleteTrafficMirrorFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTrafficMirrorFilterRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTrafficMirrorFilter(*pRequest), context);
    } );
}
DeleteTrafficMirrorFilterRuleOutcome EC2Client::DeleteTrafficMirrorFilterRule(const DeleteTrafficMirrorFilterRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorFilterRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorFilterRuleOutcomeCallable EC2Client::DeleteTrafficMirrorFilterRuleCallable(const DeleteTrafficMirrorFilterRuleRequest& request) const
{
  std::shared_ptr<DeleteTrafficMirrorFilterRuleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorFilterRuleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTrafficMirrorFilterRule(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTrafficMirrorFilterRuleAsync(const DeleteTrafficMirrorFilterRuleRequest& request, const DeleteTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTrafficMirrorFilterRuleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTrafficMirrorFilterRule(*pRequest), context);
    } );
}
DeleteTrafficMirrorSessionOutcome EC2Client::DeleteTrafficMirrorSession(const DeleteTrafficMirrorSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorSessionOutcomeCallable EC2Client::DeleteTrafficMirrorSessionCallable(const DeleteTrafficMirrorSessionRequest& request) const
{
  std::shared_ptr<DeleteTrafficMirrorSessionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorSessionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTrafficMirrorSession(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTrafficMirrorSessionAsync(const DeleteTrafficMirrorSessionRequest& request, const DeleteTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTrafficMirrorSessionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTrafficMirrorSession(*pRequest), context);
    } );
}
DeleteTrafficMirrorTargetOutcome EC2Client::DeleteTrafficMirrorTarget(const DeleteTrafficMirrorTargetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficMirrorTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrafficMirrorTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTrafficMirrorTargetOutcomeCallable EC2Client::DeleteTrafficMirrorTargetCallable(const DeleteTrafficMirrorTargetRequest& request) const
{
  std::shared_ptr<DeleteTrafficMirrorTargetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficMirrorTargetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTrafficMirrorTarget(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTrafficMirrorTargetAsync(const DeleteTrafficMirrorTargetRequest& request, const DeleteTrafficMirrorTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTrafficMirrorTargetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTrafficMirrorTarget(*pRequest), context);
    } );
}
DeleteTransitGatewayOutcome EC2Client::DeleteTransitGateway(const DeleteTransitGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayOutcomeCallable EC2Client::DeleteTransitGatewayCallable(const DeleteTransitGatewayRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayAsync(const DeleteTransitGatewayRequest& request, const DeleteTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGateway(*pRequest), context);
    } );
}
DeleteTransitGatewayConnectOutcome EC2Client::DeleteTransitGatewayConnect(const DeleteTransitGatewayConnectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayConnectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayConnectOutcomeCallable EC2Client::DeleteTransitGatewayConnectCallable(const DeleteTransitGatewayConnectRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayConnectRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayConnectOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayConnect(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayConnectAsync(const DeleteTransitGatewayConnectRequest& request, const DeleteTransitGatewayConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayConnectRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayConnect(*pRequest), context);
    } );
}
DeleteTransitGatewayConnectPeerOutcome EC2Client::DeleteTransitGatewayConnectPeer(const DeleteTransitGatewayConnectPeerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayConnectPeer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayConnectPeerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayConnectPeerOutcomeCallable EC2Client::DeleteTransitGatewayConnectPeerCallable(const DeleteTransitGatewayConnectPeerRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayConnectPeerRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayConnectPeerOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayConnectPeer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayConnectPeerAsync(const DeleteTransitGatewayConnectPeerRequest& request, const DeleteTransitGatewayConnectPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayConnectPeerRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayConnectPeer(*pRequest), context);
    } );
}
DeleteTransitGatewayMulticastDomainOutcome EC2Client::DeleteTransitGatewayMulticastDomain(const DeleteTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayMulticastDomainOutcomeCallable EC2Client::DeleteTransitGatewayMulticastDomainCallable(const DeleteTransitGatewayMulticastDomainRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayMulticastDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayMulticastDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayMulticastDomainAsync(const DeleteTransitGatewayMulticastDomainRequest& request, const DeleteTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayMulticastDomain(*pRequest), context);
    } );
}
DeleteTransitGatewayPeeringAttachmentOutcome EC2Client::DeleteTransitGatewayPeeringAttachment(const DeleteTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayPeeringAttachmentOutcomeCallable EC2Client::DeleteTransitGatewayPeeringAttachmentCallable(const DeleteTransitGatewayPeeringAttachmentRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayPeeringAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayPeeringAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayPeeringAttachmentAsync(const DeleteTransitGatewayPeeringAttachmentRequest& request, const DeleteTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayPeeringAttachment(*pRequest), context);
    } );
}
DeleteTransitGatewayPolicyTableOutcome EC2Client::DeleteTransitGatewayPolicyTable(const DeleteTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayPolicyTableOutcomeCallable EC2Client::DeleteTransitGatewayPolicyTableCallable(const DeleteTransitGatewayPolicyTableRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayPolicyTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayPolicyTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayPolicyTableAsync(const DeleteTransitGatewayPolicyTableRequest& request, const DeleteTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayPolicyTable(*pRequest), context);
    } );
}
DeleteTransitGatewayPrefixListReferenceOutcome EC2Client::DeleteTransitGatewayPrefixListReference(const DeleteTransitGatewayPrefixListReferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayPrefixListReferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayPrefixListReferenceOutcomeCallable EC2Client::DeleteTransitGatewayPrefixListReferenceCallable(const DeleteTransitGatewayPrefixListReferenceRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayPrefixListReferenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayPrefixListReferenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayPrefixListReference(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayPrefixListReferenceAsync(const DeleteTransitGatewayPrefixListReferenceRequest& request, const DeleteTransitGatewayPrefixListReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayPrefixListReferenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayPrefixListReference(*pRequest), context);
    } );
}
DeleteTransitGatewayRouteOutcome EC2Client::DeleteTransitGatewayRoute(const DeleteTransitGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayRouteOutcomeCallable EC2Client::DeleteTransitGatewayRouteCallable(const DeleteTransitGatewayRouteRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayRouteAsync(const DeleteTransitGatewayRouteRequest& request, const DeleteTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayRoute(*pRequest), context);
    } );
}
DeleteTransitGatewayRouteTableOutcome EC2Client::DeleteTransitGatewayRouteTable(const DeleteTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayRouteTableOutcomeCallable EC2Client::DeleteTransitGatewayRouteTableCallable(const DeleteTransitGatewayRouteTableRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayRouteTableAsync(const DeleteTransitGatewayRouteTableRequest& request, const DeleteTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayRouteTable(*pRequest), context);
    } );
}
DeleteTransitGatewayRouteTableAnnouncementOutcome EC2Client::DeleteTransitGatewayRouteTableAnnouncement(const DeleteTransitGatewayRouteTableAnnouncementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayRouteTableAnnouncement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayRouteTableAnnouncementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayRouteTableAnnouncementOutcomeCallable EC2Client::DeleteTransitGatewayRouteTableAnnouncementCallable(const DeleteTransitGatewayRouteTableAnnouncementRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayRouteTableAnnouncementRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayRouteTableAnnouncementOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayRouteTableAnnouncement(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayRouteTableAnnouncementAsync(const DeleteTransitGatewayRouteTableAnnouncementRequest& request, const DeleteTransitGatewayRouteTableAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayRouteTableAnnouncementRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayRouteTableAnnouncement(*pRequest), context);
    } );
}
DeleteTransitGatewayVpcAttachmentOutcome EC2Client::DeleteTransitGatewayVpcAttachment(const DeleteTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTransitGatewayVpcAttachmentOutcomeCallable EC2Client::DeleteTransitGatewayVpcAttachmentCallable(const DeleteTransitGatewayVpcAttachmentRequest& request) const
{
  std::shared_ptr<DeleteTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteTransitGatewayVpcAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteTransitGatewayVpcAttachmentAsync(const DeleteTransitGatewayVpcAttachmentRequest& request, const DeleteTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteTransitGatewayVpcAttachment(*pRequest), context);
    } );
}
DeleteVolumeOutcome EC2Client::DeleteVolume(const DeleteVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVolumeOutcomeCallable EC2Client::DeleteVolumeCallable(const DeleteVolumeRequest& request) const
{
  std::shared_ptr<DeleteVolumeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVolumeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVolume(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVolumeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVolume(*pRequest), context);
    } );
}
DeleteVpcOutcome EC2Client::DeleteVpc(const DeleteVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcOutcomeCallable EC2Client::DeleteVpcCallable(const DeleteVpcRequest& request) const
{
  std::shared_ptr<DeleteVpcRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpc(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpcRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpc(*pRequest), context);
    } );
}
DeleteVpcEndpointConnectionNotificationsOutcome EC2Client::DeleteVpcEndpointConnectionNotifications(const DeleteVpcEndpointConnectionNotificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointConnectionNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcEndpointConnectionNotificationsOutcomeCallable EC2Client::DeleteVpcEndpointConnectionNotificationsCallable(const DeleteVpcEndpointConnectionNotificationsRequest& request) const
{
  std::shared_ptr<DeleteVpcEndpointConnectionNotificationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointConnectionNotificationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpcEndpointConnectionNotifications(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpcEndpointConnectionNotificationsAsync(const DeleteVpcEndpointConnectionNotificationsRequest& request, const DeleteVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpcEndpointConnectionNotificationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpcEndpointConnectionNotifications(*pRequest), context);
    } );
}
DeleteVpcEndpointServiceConfigurationsOutcome EC2Client::DeleteVpcEndpointServiceConfigurations(const DeleteVpcEndpointServiceConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointServiceConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcEndpointServiceConfigurationsOutcomeCallable EC2Client::DeleteVpcEndpointServiceConfigurationsCallable(const DeleteVpcEndpointServiceConfigurationsRequest& request) const
{
  std::shared_ptr<DeleteVpcEndpointServiceConfigurationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointServiceConfigurationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpcEndpointServiceConfigurations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpcEndpointServiceConfigurationsAsync(const DeleteVpcEndpointServiceConfigurationsRequest& request, const DeleteVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpcEndpointServiceConfigurationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpcEndpointServiceConfigurations(*pRequest), context);
    } );
}
DeleteVpcEndpointsOutcome EC2Client::DeleteVpcEndpoints(const DeleteVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcEndpointsOutcomeCallable EC2Client::DeleteVpcEndpointsCallable(const DeleteVpcEndpointsRequest& request) const
{
  std::shared_ptr<DeleteVpcEndpointsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpcEndpoints(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpcEndpointsAsync(const DeleteVpcEndpointsRequest& request, const DeleteVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpcEndpointsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpcEndpoints(*pRequest), context);
    } );
}
DeleteVpcPeeringConnectionOutcome EC2Client::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpcPeeringConnectionOutcomeCallable EC2Client::DeleteVpcPeeringConnectionCallable(const DeleteVpcPeeringConnectionRequest& request) const
{
  std::shared_ptr<DeleteVpcPeeringConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpcPeeringConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpcPeeringConnectionAsync(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpcPeeringConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpcPeeringConnection(*pRequest), context);
    } );
}
DeleteVpnConnectionOutcome EC2Client::DeleteVpnConnection(const DeleteVpnConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpnConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpnConnectionOutcomeCallable EC2Client::DeleteVpnConnectionCallable(const DeleteVpnConnectionRequest& request) const
{
  std::shared_ptr<DeleteVpnConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpnConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpnConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpnConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpnConnection(*pRequest), context);
    } );
}
DeleteVpnConnectionRouteOutcome EC2Client::DeleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpnConnectionRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpnConnectionRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpnConnectionRouteOutcomeCallable EC2Client::DeleteVpnConnectionRouteCallable(const DeleteVpnConnectionRouteRequest& request) const
{
  std::shared_ptr<DeleteVpnConnectionRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpnConnectionRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpnConnectionRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpnConnectionRouteAsync(const DeleteVpnConnectionRouteRequest& request, const DeleteVpnConnectionRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpnConnectionRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpnConnectionRoute(*pRequest), context);
    } );
}
DeleteVpnGatewayOutcome EC2Client::DeleteVpnGateway(const DeleteVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteVpnGatewayOutcomeCallable EC2Client::DeleteVpnGatewayCallable(const DeleteVpnGatewayRequest& request) const
{
  std::shared_ptr<DeleteVpnGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteVpnGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteVpnGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteVpnGateway(*pRequest), context);
    } );
}
DeprovisionByoipCidrOutcome EC2Client::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeprovisionByoipCidrOutcomeCallable EC2Client::DeprovisionByoipCidrCallable(const DeprovisionByoipCidrRequest& request) const
{
  std::shared_ptr<DeprovisionByoipCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeprovisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeprovisionByoipCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeprovisionByoipCidrAsync(const DeprovisionByoipCidrRequest& request, const DeprovisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeprovisionByoipCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeprovisionByoipCidr(*pRequest), context);
    } );
}
DeprovisionIpamPoolCidrOutcome EC2Client::DeprovisionIpamPoolCidr(const DeprovisionIpamPoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionIpamPoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeprovisionIpamPoolCidrOutcomeCallable EC2Client::DeprovisionIpamPoolCidrCallable(const DeprovisionIpamPoolCidrRequest& request) const
{
  std::shared_ptr<DeprovisionIpamPoolCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeprovisionIpamPoolCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeprovisionIpamPoolCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeprovisionIpamPoolCidrAsync(const DeprovisionIpamPoolCidrRequest& request, const DeprovisionIpamPoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeprovisionIpamPoolCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeprovisionIpamPoolCidr(*pRequest), context);
    } );
}
DeprovisionPublicIpv4PoolCidrOutcome EC2Client::DeprovisionPublicIpv4PoolCidr(const DeprovisionPublicIpv4PoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeprovisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeprovisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeprovisionPublicIpv4PoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeprovisionPublicIpv4PoolCidrOutcomeCallable EC2Client::DeprovisionPublicIpv4PoolCidrCallable(const DeprovisionPublicIpv4PoolCidrRequest& request) const
{
  std::shared_ptr<DeprovisionPublicIpv4PoolCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeprovisionPublicIpv4PoolCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeprovisionPublicIpv4PoolCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeprovisionPublicIpv4PoolCidrAsync(const DeprovisionPublicIpv4PoolCidrRequest& request, const DeprovisionPublicIpv4PoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeprovisionPublicIpv4PoolCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeprovisionPublicIpv4PoolCidr(*pRequest), context);
    } );
}
DeregisterImageOutcome EC2Client::DeregisterImage(const DeregisterImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterImageOutcomeCallable EC2Client::DeregisterImageCallable(const DeregisterImageRequest& request) const
{
  std::shared_ptr<DeregisterImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeregisterImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeregisterImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeregisterImageAsync(const DeregisterImageRequest& request, const DeregisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeregisterImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeregisterImage(*pRequest), context);
    } );
}
DeregisterInstanceEventNotificationAttributesOutcome EC2Client::DeregisterInstanceEventNotificationAttributes(const DeregisterInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterInstanceEventNotificationAttributesOutcomeCallable EC2Client::DeregisterInstanceEventNotificationAttributesCallable(const DeregisterInstanceEventNotificationAttributesRequest& request) const
{
  std::shared_ptr<DeregisterInstanceEventNotificationAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstanceEventNotificationAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeregisterInstanceEventNotificationAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeregisterInstanceEventNotificationAttributesAsync(const DeregisterInstanceEventNotificationAttributesRequest& request, const DeregisterInstanceEventNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeregisterInstanceEventNotificationAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeregisterInstanceEventNotificationAttributes(*pRequest), context);
    } );
}
DeregisterTransitGatewayMulticastGroupMembersOutcome EC2Client::DeregisterTransitGatewayMulticastGroupMembers(const DeregisterTransitGatewayMulticastGroupMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTransitGatewayMulticastGroupMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTransitGatewayMulticastGroupMembersOutcomeCallable EC2Client::DeregisterTransitGatewayMulticastGroupMembersCallable(const DeregisterTransitGatewayMulticastGroupMembersRequest& request) const
{
  std::shared_ptr<DeregisterTransitGatewayMulticastGroupMembersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTransitGatewayMulticastGroupMembersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeregisterTransitGatewayMulticastGroupMembers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeregisterTransitGatewayMulticastGroupMembersAsync(const DeregisterTransitGatewayMulticastGroupMembersRequest& request, const DeregisterTransitGatewayMulticastGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeregisterTransitGatewayMulticastGroupMembersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeregisterTransitGatewayMulticastGroupMembers(*pRequest), context);
    } );
}
DeregisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::DeregisterTransitGatewayMulticastGroupSources(const DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterTransitGatewayMulticastGroupSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTransitGatewayMulticastGroupSourcesOutcomeCallable EC2Client::DeregisterTransitGatewayMulticastGroupSourcesCallable(const DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const
{
  std::shared_ptr<DeregisterTransitGatewayMulticastGroupSourcesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTransitGatewayMulticastGroupSourcesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeregisterTransitGatewayMulticastGroupSources(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DeregisterTransitGatewayMulticastGroupSourcesAsync(const DeregisterTransitGatewayMulticastGroupSourcesRequest& request, const DeregisterTransitGatewayMulticastGroupSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeregisterTransitGatewayMulticastGroupSourcesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeregisterTransitGatewayMulticastGroupSources(*pRequest), context);
    } );
}
DescribeAccountAttributesOutcome EC2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcomeCallable EC2Client::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  std::shared_ptr<DescribeAccountAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAccountAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAccountAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAccountAttributes(*pRequest), context);
    } );
}
DescribeAddressTransfersOutcome EC2Client::DescribeAddressTransfers(const DescribeAddressTransfersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddressTransfers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAddressTransfers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAddressTransfersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAddressTransfersOutcomeCallable EC2Client::DescribeAddressTransfersCallable(const DescribeAddressTransfersRequest& request) const
{
  std::shared_ptr<DescribeAddressTransfersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddressTransfersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAddressTransfers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeAddressTransfersAsync(const DescribeAddressTransfersRequest& request, const DescribeAddressTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAddressTransfersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAddressTransfers(*pRequest), context);
    } );
}
DescribeAddressesOutcome EC2Client::DescribeAddresses(const DescribeAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAddressesOutcomeCallable EC2Client::DescribeAddressesCallable(const DescribeAddressesRequest& request) const
{
  std::shared_ptr<DescribeAddressesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddressesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAddresses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeAddressesAsync(const DescribeAddressesRequest& request, const DescribeAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAddressesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAddresses(*pRequest), context);
    } );
}
DescribeAddressesAttributeOutcome EC2Client::DescribeAddressesAttribute(const DescribeAddressesAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAddressesAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAddressesAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAddressesAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAddressesAttributeOutcomeCallable EC2Client::DescribeAddressesAttributeCallable(const DescribeAddressesAttributeRequest& request) const
{
  std::shared_ptr<DescribeAddressesAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAddressesAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAddressesAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeAddressesAttributeAsync(const DescribeAddressesAttributeRequest& request, const DescribeAddressesAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAddressesAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAddressesAttribute(*pRequest), context);
    } );
}
DescribeAggregateIdFormatOutcome EC2Client::DescribeAggregateIdFormat(const DescribeAggregateIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAggregateIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAggregateIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAggregateIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAggregateIdFormatOutcomeCallable EC2Client::DescribeAggregateIdFormatCallable(const DescribeAggregateIdFormatRequest& request) const
{
  std::shared_ptr<DescribeAggregateIdFormatRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAggregateIdFormatOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAggregateIdFormat(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeAggregateIdFormatAsync(const DescribeAggregateIdFormatRequest& request, const DescribeAggregateIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAggregateIdFormatRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAggregateIdFormat(*pRequest), context);
    } );
}
DescribeAvailabilityZonesOutcome EC2Client::DescribeAvailabilityZones(const DescribeAvailabilityZonesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAvailabilityZones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAvailabilityZones, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAvailabilityZonesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAvailabilityZonesOutcomeCallable EC2Client::DescribeAvailabilityZonesCallable(const DescribeAvailabilityZonesRequest& request) const
{
  std::shared_ptr<DescribeAvailabilityZonesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailabilityZonesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeAvailabilityZones(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeAvailabilityZonesAsync(const DescribeAvailabilityZonesRequest& request, const DescribeAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeAvailabilityZonesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeAvailabilityZones(*pRequest), context);
    } );
}
DescribeBundleTasksOutcome EC2Client::DescribeBundleTasks(const DescribeBundleTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBundleTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBundleTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBundleTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeBundleTasksOutcomeCallable EC2Client::DescribeBundleTasksCallable(const DescribeBundleTasksRequest& request) const
{
  std::shared_ptr<DescribeBundleTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeBundleTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeBundleTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeBundleTasksAsync(const DescribeBundleTasksRequest& request, const DescribeBundleTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeBundleTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeBundleTasks(*pRequest), context);
    } );
}
DescribeByoipCidrsOutcome EC2Client::DescribeByoipCidrs(const DescribeByoipCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeByoipCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeByoipCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeByoipCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeByoipCidrsOutcomeCallable EC2Client::DescribeByoipCidrsCallable(const DescribeByoipCidrsRequest& request) const
{
  std::shared_ptr<DescribeByoipCidrsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeByoipCidrsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeByoipCidrs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeByoipCidrsAsync(const DescribeByoipCidrsRequest& request, const DescribeByoipCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeByoipCidrsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeByoipCidrs(*pRequest), context);
    } );
}
DescribeCapacityReservationFleetsOutcome EC2Client::DescribeCapacityReservationFleets(const DescribeCapacityReservationFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCapacityReservationFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCapacityReservationFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCapacityReservationFleetsOutcomeCallable EC2Client::DescribeCapacityReservationFleetsCallable(const DescribeCapacityReservationFleetsRequest& request) const
{
  std::shared_ptr<DescribeCapacityReservationFleetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeCapacityReservationFleetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeCapacityReservationFleets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeCapacityReservationFleetsAsync(const DescribeCapacityReservationFleetsRequest& request, const DescribeCapacityReservationFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeCapacityReservationFleetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeCapacityReservationFleets(*pRequest), context);
    } );
}
DescribeCapacityReservationsOutcome EC2Client::DescribeCapacityReservations(const DescribeCapacityReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCapacityReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCapacityReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCapacityReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCapacityReservationsOutcomeCallable EC2Client::DescribeCapacityReservationsCallable(const DescribeCapacityReservationsRequest& request) const
{
  std::shared_ptr<DescribeCapacityReservationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeCapacityReservationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeCapacityReservations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeCapacityReservationsAsync(const DescribeCapacityReservationsRequest& request, const DescribeCapacityReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeCapacityReservationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeCapacityReservations(*pRequest), context);
    } );
}
DescribeCarrierGatewaysOutcome EC2Client::DescribeCarrierGateways(const DescribeCarrierGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCarrierGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCarrierGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCarrierGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCarrierGatewaysOutcomeCallable EC2Client::DescribeCarrierGatewaysCallable(const DescribeCarrierGatewaysRequest& request) const
{
  std::shared_ptr<DescribeCarrierGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeCarrierGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeCarrierGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeCarrierGatewaysAsync(const DescribeCarrierGatewaysRequest& request, const DescribeCarrierGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeCarrierGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeCarrierGateways(*pRequest), context);
    } );
}
DescribeClassicLinkInstancesOutcome EC2Client::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClassicLinkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClassicLinkInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClassicLinkInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClassicLinkInstancesOutcomeCallable EC2Client::DescribeClassicLinkInstancesCallable(const DescribeClassicLinkInstancesRequest& request) const
{
  std::shared_ptr<DescribeClassicLinkInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeClassicLinkInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeClassicLinkInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeClassicLinkInstancesAsync(const DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeClassicLinkInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeClassicLinkInstances(*pRequest), context);
    } );
}
DescribeClientVpnAuthorizationRulesOutcome EC2Client::DescribeClientVpnAuthorizationRules(const DescribeClientVpnAuthorizationRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnAuthorizationRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnAuthorizationRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnAuthorizationRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnAuthorizationRulesOutcomeCallable EC2Client::DescribeClientVpnAuthorizationRulesCallable(const DescribeClientVpnAuthorizationRulesRequest& request) const
{
  std::shared_ptr<DescribeClientVpnAuthorizationRulesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnAuthorizationRulesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeClientVpnAuthorizationRules(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeClientVpnAuthorizationRulesAsync(const DescribeClientVpnAuthorizationRulesRequest& request, const DescribeClientVpnAuthorizationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeClientVpnAuthorizationRulesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeClientVpnAuthorizationRules(*pRequest), context);
    } );
}
DescribeClientVpnConnectionsOutcome EC2Client::DescribeClientVpnConnections(const DescribeClientVpnConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnConnectionsOutcomeCallable EC2Client::DescribeClientVpnConnectionsCallable(const DescribeClientVpnConnectionsRequest& request) const
{
  std::shared_ptr<DescribeClientVpnConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeClientVpnConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeClientVpnConnectionsAsync(const DescribeClientVpnConnectionsRequest& request, const DescribeClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeClientVpnConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeClientVpnConnections(*pRequest), context);
    } );
}
DescribeClientVpnEndpointsOutcome EC2Client::DescribeClientVpnEndpoints(const DescribeClientVpnEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnEndpointsOutcomeCallable EC2Client::DescribeClientVpnEndpointsCallable(const DescribeClientVpnEndpointsRequest& request) const
{
  std::shared_ptr<DescribeClientVpnEndpointsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnEndpointsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeClientVpnEndpoints(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeClientVpnEndpointsAsync(const DescribeClientVpnEndpointsRequest& request, const DescribeClientVpnEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeClientVpnEndpointsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeClientVpnEndpoints(*pRequest), context);
    } );
}
DescribeClientVpnRoutesOutcome EC2Client::DescribeClientVpnRoutes(const DescribeClientVpnRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnRoutesOutcomeCallable EC2Client::DescribeClientVpnRoutesCallable(const DescribeClientVpnRoutesRequest& request) const
{
  std::shared_ptr<DescribeClientVpnRoutesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnRoutesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeClientVpnRoutes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeClientVpnRoutesAsync(const DescribeClientVpnRoutesRequest& request, const DescribeClientVpnRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeClientVpnRoutesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeClientVpnRoutes(*pRequest), context);
    } );
}
DescribeClientVpnTargetNetworksOutcome EC2Client::DescribeClientVpnTargetNetworks(const DescribeClientVpnTargetNetworksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClientVpnTargetNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClientVpnTargetNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClientVpnTargetNetworksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClientVpnTargetNetworksOutcomeCallable EC2Client::DescribeClientVpnTargetNetworksCallable(const DescribeClientVpnTargetNetworksRequest& request) const
{
  std::shared_ptr<DescribeClientVpnTargetNetworksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientVpnTargetNetworksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeClientVpnTargetNetworks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeClientVpnTargetNetworksAsync(const DescribeClientVpnTargetNetworksRequest& request, const DescribeClientVpnTargetNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeClientVpnTargetNetworksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeClientVpnTargetNetworks(*pRequest), context);
    } );
}
DescribeCoipPoolsOutcome EC2Client::DescribeCoipPools(const DescribeCoipPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCoipPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCoipPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCoipPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCoipPoolsOutcomeCallable EC2Client::DescribeCoipPoolsCallable(const DescribeCoipPoolsRequest& request) const
{
  std::shared_ptr<DescribeCoipPoolsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeCoipPoolsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeCoipPools(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeCoipPoolsAsync(const DescribeCoipPoolsRequest& request, const DescribeCoipPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeCoipPoolsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeCoipPools(*pRequest), context);
    } );
}
DescribeConversionTasksOutcome EC2Client::DescribeConversionTasks(const DescribeConversionTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConversionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConversionTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConversionTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeConversionTasksOutcomeCallable EC2Client::DescribeConversionTasksCallable(const DescribeConversionTasksRequest& request) const
{
  std::shared_ptr<DescribeConversionTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeConversionTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeConversionTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeConversionTasksAsync(const DescribeConversionTasksRequest& request, const DescribeConversionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeConversionTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeConversionTasks(*pRequest), context);
    } );
}
DescribeCustomerGatewaysOutcome EC2Client::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomerGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomerGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomerGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeCustomerGatewaysOutcomeCallable EC2Client::DescribeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest& request) const
{
  std::shared_ptr<DescribeCustomerGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomerGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeCustomerGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeCustomerGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeCustomerGateways(*pRequest), context);
    } );
}
DescribeDhcpOptionsOutcome EC2Client::DescribeDhcpOptions(const DescribeDhcpOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDhcpOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDhcpOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDhcpOptionsOutcomeCallable EC2Client::DescribeDhcpOptionsCallable(const DescribeDhcpOptionsRequest& request) const
{
  std::shared_ptr<DescribeDhcpOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeDhcpOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeDhcpOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeDhcpOptionsAsync(const DescribeDhcpOptionsRequest& request, const DescribeDhcpOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeDhcpOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeDhcpOptions(*pRequest), context);
    } );
}
DescribeEgressOnlyInternetGatewaysOutcome EC2Client::DescribeEgressOnlyInternetGateways(const DescribeEgressOnlyInternetGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEgressOnlyInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEgressOnlyInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEgressOnlyInternetGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEgressOnlyInternetGatewaysOutcomeCallable EC2Client::DescribeEgressOnlyInternetGatewaysCallable(const DescribeEgressOnlyInternetGatewaysRequest& request) const
{
  std::shared_ptr<DescribeEgressOnlyInternetGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeEgressOnlyInternetGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeEgressOnlyInternetGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeEgressOnlyInternetGatewaysAsync(const DescribeEgressOnlyInternetGatewaysRequest& request, const DescribeEgressOnlyInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeEgressOnlyInternetGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeEgressOnlyInternetGateways(*pRequest), context);
    } );
}
DescribeElasticGpusOutcome EC2Client::DescribeElasticGpus(const DescribeElasticGpusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeElasticGpus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeElasticGpus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeElasticGpusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeElasticGpusOutcomeCallable EC2Client::DescribeElasticGpusCallable(const DescribeElasticGpusRequest& request) const
{
  std::shared_ptr<DescribeElasticGpusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeElasticGpusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeElasticGpus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeElasticGpusAsync(const DescribeElasticGpusRequest& request, const DescribeElasticGpusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeElasticGpusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeElasticGpus(*pRequest), context);
    } );
}
DescribeExportImageTasksOutcome EC2Client::DescribeExportImageTasks(const DescribeExportImageTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExportImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExportImageTasksOutcomeCallable EC2Client::DescribeExportImageTasksCallable(const DescribeExportImageTasksRequest& request) const
{
  std::shared_ptr<DescribeExportImageTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportImageTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeExportImageTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeExportImageTasksAsync(const DescribeExportImageTasksRequest& request, const DescribeExportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeExportImageTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeExportImageTasks(*pRequest), context);
    } );
}
DescribeExportTasksOutcome EC2Client::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExportTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExportTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExportTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExportTasksOutcomeCallable EC2Client::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  std::shared_ptr<DescribeExportTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeExportTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeExportTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeExportTasks(*pRequest), context);
    } );
}
DescribeFastLaunchImagesOutcome EC2Client::DescribeFastLaunchImages(const DescribeFastLaunchImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFastLaunchImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFastLaunchImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFastLaunchImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFastLaunchImagesOutcomeCallable EC2Client::DescribeFastLaunchImagesCallable(const DescribeFastLaunchImagesRequest& request) const
{
  std::shared_ptr<DescribeFastLaunchImagesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFastLaunchImagesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFastLaunchImages(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFastLaunchImagesAsync(const DescribeFastLaunchImagesRequest& request, const DescribeFastLaunchImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFastLaunchImagesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFastLaunchImages(*pRequest), context);
    } );
}
DescribeFastSnapshotRestoresOutcome EC2Client::DescribeFastSnapshotRestores(const DescribeFastSnapshotRestoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFastSnapshotRestoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFastSnapshotRestoresOutcomeCallable EC2Client::DescribeFastSnapshotRestoresCallable(const DescribeFastSnapshotRestoresRequest& request) const
{
  std::shared_ptr<DescribeFastSnapshotRestoresRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFastSnapshotRestoresOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFastSnapshotRestores(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFastSnapshotRestoresAsync(const DescribeFastSnapshotRestoresRequest& request, const DescribeFastSnapshotRestoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFastSnapshotRestoresRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFastSnapshotRestores(*pRequest), context);
    } );
}
DescribeFleetHistoryOutcome EC2Client::DescribeFleetHistory(const DescribeFleetHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFleetHistoryOutcomeCallable EC2Client::DescribeFleetHistoryCallable(const DescribeFleetHistoryRequest& request) const
{
  std::shared_ptr<DescribeFleetHistoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetHistoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFleetHistory(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFleetHistoryAsync(const DescribeFleetHistoryRequest& request, const DescribeFleetHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFleetHistoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFleetHistory(*pRequest), context);
    } );
}
DescribeFleetInstancesOutcome EC2Client::DescribeFleetInstances(const DescribeFleetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFleetInstancesOutcomeCallable EC2Client::DescribeFleetInstancesCallable(const DescribeFleetInstancesRequest& request) const
{
  std::shared_ptr<DescribeFleetInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFleetInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFleetInstancesAsync(const DescribeFleetInstancesRequest& request, const DescribeFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFleetInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFleetInstances(*pRequest), context);
    } );
}
DescribeFleetsOutcome EC2Client::DescribeFleets(const DescribeFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFleetsOutcomeCallable EC2Client::DescribeFleetsCallable(const DescribeFleetsRequest& request) const
{
  std::shared_ptr<DescribeFleetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFleets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFleetsAsync(const DescribeFleetsRequest& request, const DescribeFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFleetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFleets(*pRequest), context);
    } );
}
DescribeFlowLogsOutcome EC2Client::DescribeFlowLogs(const DescribeFlowLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlowLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFlowLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFlowLogsOutcomeCallable EC2Client::DescribeFlowLogsCallable(const DescribeFlowLogsRequest& request) const
{
  std::shared_ptr<DescribeFlowLogsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowLogsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFlowLogs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFlowLogsAsync(const DescribeFlowLogsRequest& request, const DescribeFlowLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFlowLogsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFlowLogs(*pRequest), context);
    } );
}
DescribeFpgaImageAttributeOutcome EC2Client::DescribeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFpgaImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFpgaImageAttributeOutcomeCallable EC2Client::DescribeFpgaImageAttributeCallable(const DescribeFpgaImageAttributeRequest& request) const
{
  std::shared_ptr<DescribeFpgaImageAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFpgaImageAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFpgaImageAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFpgaImageAttributeAsync(const DescribeFpgaImageAttributeRequest& request, const DescribeFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFpgaImageAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFpgaImageAttribute(*pRequest), context);
    } );
}
DescribeFpgaImagesOutcome EC2Client::DescribeFpgaImages(const DescribeFpgaImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFpgaImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFpgaImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFpgaImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeFpgaImagesOutcomeCallable EC2Client::DescribeFpgaImagesCallable(const DescribeFpgaImagesRequest& request) const
{
  std::shared_ptr<DescribeFpgaImagesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeFpgaImagesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeFpgaImages(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeFpgaImagesAsync(const DescribeFpgaImagesRequest& request, const DescribeFpgaImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeFpgaImagesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeFpgaImages(*pRequest), context);
    } );
}
DescribeHostReservationOfferingsOutcome EC2Client::DescribeHostReservationOfferings(const DescribeHostReservationOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHostReservationOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHostReservationOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHostReservationOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHostReservationOfferingsOutcomeCallable EC2Client::DescribeHostReservationOfferingsCallable(const DescribeHostReservationOfferingsRequest& request) const
{
  std::shared_ptr<DescribeHostReservationOfferingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostReservationOfferingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeHostReservationOfferings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeHostReservationOfferingsAsync(const DescribeHostReservationOfferingsRequest& request, const DescribeHostReservationOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeHostReservationOfferingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeHostReservationOfferings(*pRequest), context);
    } );
}
DescribeHostReservationsOutcome EC2Client::DescribeHostReservations(const DescribeHostReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHostReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHostReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHostReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHostReservationsOutcomeCallable EC2Client::DescribeHostReservationsCallable(const DescribeHostReservationsRequest& request) const
{
  std::shared_ptr<DescribeHostReservationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostReservationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeHostReservations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeHostReservationsAsync(const DescribeHostReservationsRequest& request, const DescribeHostReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeHostReservationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeHostReservations(*pRequest), context);
    } );
}
DescribeHostsOutcome EC2Client::DescribeHosts(const DescribeHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHostsOutcomeCallable EC2Client::DescribeHostsCallable(const DescribeHostsRequest& request) const
{
  std::shared_ptr<DescribeHostsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeHosts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeHostsAsync(const DescribeHostsRequest& request, const DescribeHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeHostsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeHosts(*pRequest), context);
    } );
}
DescribeIamInstanceProfileAssociationsOutcome EC2Client::DescribeIamInstanceProfileAssociations(const DescribeIamInstanceProfileAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIamInstanceProfileAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIamInstanceProfileAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIamInstanceProfileAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIamInstanceProfileAssociationsOutcomeCallable EC2Client::DescribeIamInstanceProfileAssociationsCallable(const DescribeIamInstanceProfileAssociationsRequest& request) const
{
  std::shared_ptr<DescribeIamInstanceProfileAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIamInstanceProfileAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIamInstanceProfileAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIamInstanceProfileAssociationsAsync(const DescribeIamInstanceProfileAssociationsRequest& request, const DescribeIamInstanceProfileAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIamInstanceProfileAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIamInstanceProfileAssociations(*pRequest), context);
    } );
}
DescribeIdFormatOutcome EC2Client::DescribeIdFormat(const DescribeIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIdFormatOutcomeCallable EC2Client::DescribeIdFormatCallable(const DescribeIdFormatRequest& request) const
{
  std::shared_ptr<DescribeIdFormatRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdFormatOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIdFormat(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIdFormatAsync(const DescribeIdFormatRequest& request, const DescribeIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIdFormatRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIdFormat(*pRequest), context);
    } );
}
DescribeIdentityIdFormatOutcome EC2Client::DescribeIdentityIdFormat(const DescribeIdentityIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIdentityIdFormatOutcomeCallable EC2Client::DescribeIdentityIdFormatCallable(const DescribeIdentityIdFormatRequest& request) const
{
  std::shared_ptr<DescribeIdentityIdFormatRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityIdFormatOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIdentityIdFormat(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIdentityIdFormatAsync(const DescribeIdentityIdFormatRequest& request, const DescribeIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIdentityIdFormatRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIdentityIdFormat(*pRequest), context);
    } );
}
DescribeImageAttributeOutcome EC2Client::DescribeImageAttribute(const DescribeImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImageAttributeOutcomeCallable EC2Client::DescribeImageAttributeCallable(const DescribeImageAttributeRequest& request) const
{
  std::shared_ptr<DescribeImageAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeImageAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeImageAttributeAsync(const DescribeImageAttributeRequest& request, const DescribeImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeImageAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeImageAttribute(*pRequest), context);
    } );
}
DescribeImagesOutcome EC2Client::DescribeImages(const DescribeImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImagesOutcomeCallable EC2Client::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  std::shared_ptr<DescribeImagesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeImages(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeImagesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeImages(*pRequest), context);
    } );
}
DescribeImportImageTasksOutcome EC2Client::DescribeImportImageTasks(const DescribeImportImageTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImportImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImportImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImportImageTasksOutcomeCallable EC2Client::DescribeImportImageTasksCallable(const DescribeImportImageTasksRequest& request) const
{
  std::shared_ptr<DescribeImportImageTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportImageTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeImportImageTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeImportImageTasksAsync(const DescribeImportImageTasksRequest& request, const DescribeImportImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeImportImageTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeImportImageTasks(*pRequest), context);
    } );
}
DescribeImportSnapshotTasksOutcome EC2Client::DescribeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImportSnapshotTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImportSnapshotTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImportSnapshotTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeImportSnapshotTasksOutcomeCallable EC2Client::DescribeImportSnapshotTasksCallable(const DescribeImportSnapshotTasksRequest& request) const
{
  std::shared_ptr<DescribeImportSnapshotTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportSnapshotTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeImportSnapshotTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeImportSnapshotTasksAsync(const DescribeImportSnapshotTasksRequest& request, const DescribeImportSnapshotTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeImportSnapshotTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeImportSnapshotTasks(*pRequest), context);
    } );
}
DescribeInstanceAttributeOutcome EC2Client::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceAttributeOutcomeCallable EC2Client::DescribeInstanceAttributeCallable(const DescribeInstanceAttributeRequest& request) const
{
  std::shared_ptr<DescribeInstanceAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceAttributeAsync(const DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceAttribute(*pRequest), context);
    } );
}
DescribeInstanceCreditSpecificationsOutcome EC2Client::DescribeInstanceCreditSpecifications(const DescribeInstanceCreditSpecificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceCreditSpecifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceCreditSpecifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceCreditSpecificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceCreditSpecificationsOutcomeCallable EC2Client::DescribeInstanceCreditSpecificationsCallable(const DescribeInstanceCreditSpecificationsRequest& request) const
{
  std::shared_ptr<DescribeInstanceCreditSpecificationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceCreditSpecificationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceCreditSpecifications(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceCreditSpecificationsAsync(const DescribeInstanceCreditSpecificationsRequest& request, const DescribeInstanceCreditSpecificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceCreditSpecificationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceCreditSpecifications(*pRequest), context);
    } );
}
DescribeInstanceEventNotificationAttributesOutcome EC2Client::DescribeInstanceEventNotificationAttributes(const DescribeInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceEventNotificationAttributesOutcomeCallable EC2Client::DescribeInstanceEventNotificationAttributesCallable(const DescribeInstanceEventNotificationAttributesRequest& request) const
{
  std::shared_ptr<DescribeInstanceEventNotificationAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceEventNotificationAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceEventNotificationAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceEventNotificationAttributesAsync(const DescribeInstanceEventNotificationAttributesRequest& request, const DescribeInstanceEventNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceEventNotificationAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceEventNotificationAttributes(*pRequest), context);
    } );
}
DescribeInstanceEventWindowsOutcome EC2Client::DescribeInstanceEventWindows(const DescribeInstanceEventWindowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceEventWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceEventWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceEventWindowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceEventWindowsOutcomeCallable EC2Client::DescribeInstanceEventWindowsCallable(const DescribeInstanceEventWindowsRequest& request) const
{
  std::shared_ptr<DescribeInstanceEventWindowsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceEventWindowsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceEventWindows(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceEventWindowsAsync(const DescribeInstanceEventWindowsRequest& request, const DescribeInstanceEventWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceEventWindowsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceEventWindows(*pRequest), context);
    } );
}
DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceStatusOutcomeCallable EC2Client::DescribeInstanceStatusCallable(const DescribeInstanceStatusRequest& request) const
{
  std::shared_ptr<DescribeInstanceStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceStatus(*pRequest), context);
    } );
}
DescribeInstanceTypeOfferingsOutcome EC2Client::DescribeInstanceTypeOfferings(const DescribeInstanceTypeOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceTypeOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceTypeOfferingsOutcomeCallable EC2Client::DescribeInstanceTypeOfferingsCallable(const DescribeInstanceTypeOfferingsRequest& request) const
{
  std::shared_ptr<DescribeInstanceTypeOfferingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceTypeOfferingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceTypeOfferings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceTypeOfferingsAsync(const DescribeInstanceTypeOfferingsRequest& request, const DescribeInstanceTypeOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceTypeOfferingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceTypeOfferings(*pRequest), context);
    } );
}
DescribeInstanceTypesOutcome EC2Client::DescribeInstanceTypes(const DescribeInstanceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstanceTypesOutcomeCallable EC2Client::DescribeInstanceTypesCallable(const DescribeInstanceTypesRequest& request) const
{
  std::shared_ptr<DescribeInstanceTypesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceTypesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstanceTypes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstanceTypesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstanceTypes(*pRequest), context);
    } );
}
DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInstancesOutcomeCallable EC2Client::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  std::shared_ptr<DescribeInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInstances(*pRequest), context);
    } );
}
DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInternetGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInternetGatewaysOutcomeCallable EC2Client::DescribeInternetGatewaysCallable(const DescribeInternetGatewaysRequest& request) const
{
  std::shared_ptr<DescribeInternetGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeInternetGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeInternetGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeInternetGatewaysAsync(const DescribeInternetGatewaysRequest& request, const DescribeInternetGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeInternetGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeInternetGateways(*pRequest), context);
    } );
}
DescribeIpamPoolsOutcome EC2Client::DescribeIpamPools(const DescribeIpamPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamPoolsOutcomeCallable EC2Client::DescribeIpamPoolsCallable(const DescribeIpamPoolsRequest& request) const
{
  std::shared_ptr<DescribeIpamPoolsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpamPoolsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIpamPools(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIpamPoolsAsync(const DescribeIpamPoolsRequest& request, const DescribeIpamPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIpamPoolsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIpamPools(*pRequest), context);
    } );
}
DescribeIpamScopesOutcome EC2Client::DescribeIpamScopes(const DescribeIpamScopesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamScopesOutcomeCallable EC2Client::DescribeIpamScopesCallable(const DescribeIpamScopesRequest& request) const
{
  std::shared_ptr<DescribeIpamScopesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpamScopesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIpamScopes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIpamScopesAsync(const DescribeIpamScopesRequest& request, const DescribeIpamScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIpamScopesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIpamScopes(*pRequest), context);
    } );
}
DescribeIpamsOutcome EC2Client::DescribeIpams(const DescribeIpamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpamsOutcomeCallable EC2Client::DescribeIpamsCallable(const DescribeIpamsRequest& request) const
{
  std::shared_ptr<DescribeIpamsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpamsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIpams(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIpamsAsync(const DescribeIpamsRequest& request, const DescribeIpamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIpamsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIpams(*pRequest), context);
    } );
}
DescribeIpv6PoolsOutcome EC2Client::DescribeIpv6Pools(const DescribeIpv6PoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpv6Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpv6Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIpv6PoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIpv6PoolsOutcomeCallable EC2Client::DescribeIpv6PoolsCallable(const DescribeIpv6PoolsRequest& request) const
{
  std::shared_ptr<DescribeIpv6PoolsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpv6PoolsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIpv6Pools(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeIpv6PoolsAsync(const DescribeIpv6PoolsRequest& request, const DescribeIpv6PoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIpv6PoolsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIpv6Pools(*pRequest), context);
    } );
}
DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeKeyPairsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeKeyPairsOutcomeCallable EC2Client::DescribeKeyPairsCallable(const DescribeKeyPairsRequest& request) const
{
  std::shared_ptr<DescribeKeyPairsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeyPairsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeKeyPairs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeKeyPairsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeKeyPairs(*pRequest), context);
    } );
}
DescribeLaunchTemplateVersionsOutcome EC2Client::DescribeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLaunchTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLaunchTemplateVersionsOutcomeCallable EC2Client::DescribeLaunchTemplateVersionsCallable(const DescribeLaunchTemplateVersionsRequest& request) const
{
  std::shared_ptr<DescribeLaunchTemplateVersionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchTemplateVersionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLaunchTemplateVersions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLaunchTemplateVersionsAsync(const DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLaunchTemplateVersionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLaunchTemplateVersions(*pRequest), context);
    } );
}
DescribeLaunchTemplatesOutcome EC2Client::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLaunchTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLaunchTemplatesOutcomeCallable EC2Client::DescribeLaunchTemplatesCallable(const DescribeLaunchTemplatesRequest& request) const
{
  std::shared_ptr<DescribeLaunchTemplatesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLaunchTemplatesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLaunchTemplates(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLaunchTemplatesAsync(const DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLaunchTemplatesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLaunchTemplates(*pRequest), context);
    } );
}
DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcomeCallable EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsCallable(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const
{
  std::shared_ptr<DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsAsync(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request, const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(*pRequest), context);
    } );
}
DescribeLocalGatewayRouteTableVpcAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVpcAssociations(const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayRouteTableVpcAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayRouteTableVpcAssociationsOutcomeCallable EC2Client::DescribeLocalGatewayRouteTableVpcAssociationsCallable(const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const
{
  std::shared_ptr<DescribeLocalGatewayRouteTableVpcAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocalGatewayRouteTableVpcAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLocalGatewayRouteTableVpcAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLocalGatewayRouteTableVpcAssociationsAsync(const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request, const DescribeLocalGatewayRouteTableVpcAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLocalGatewayRouteTableVpcAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLocalGatewayRouteTableVpcAssociations(*pRequest), context);
    } );
}
DescribeLocalGatewayRouteTablesOutcome EC2Client::DescribeLocalGatewayRouteTables(const DescribeLocalGatewayRouteTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayRouteTablesOutcomeCallable EC2Client::DescribeLocalGatewayRouteTablesCallable(const DescribeLocalGatewayRouteTablesRequest& request) const
{
  std::shared_ptr<DescribeLocalGatewayRouteTablesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocalGatewayRouteTablesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLocalGatewayRouteTables(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLocalGatewayRouteTablesAsync(const DescribeLocalGatewayRouteTablesRequest& request, const DescribeLocalGatewayRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLocalGatewayRouteTablesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLocalGatewayRouteTables(*pRequest), context);
    } );
}
DescribeLocalGatewayVirtualInterfaceGroupsOutcome EC2Client::DescribeLocalGatewayVirtualInterfaceGroups(const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayVirtualInterfaceGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayVirtualInterfaceGroupsOutcomeCallable EC2Client::DescribeLocalGatewayVirtualInterfaceGroupsCallable(const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const
{
  std::shared_ptr<DescribeLocalGatewayVirtualInterfaceGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocalGatewayVirtualInterfaceGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLocalGatewayVirtualInterfaceGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLocalGatewayVirtualInterfaceGroupsAsync(const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request, const DescribeLocalGatewayVirtualInterfaceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLocalGatewayVirtualInterfaceGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLocalGatewayVirtualInterfaceGroups(*pRequest), context);
    } );
}
DescribeLocalGatewayVirtualInterfacesOutcome EC2Client::DescribeLocalGatewayVirtualInterfaces(const DescribeLocalGatewayVirtualInterfacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewayVirtualInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewayVirtualInterfacesOutcomeCallable EC2Client::DescribeLocalGatewayVirtualInterfacesCallable(const DescribeLocalGatewayVirtualInterfacesRequest& request) const
{
  std::shared_ptr<DescribeLocalGatewayVirtualInterfacesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocalGatewayVirtualInterfacesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLocalGatewayVirtualInterfaces(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLocalGatewayVirtualInterfacesAsync(const DescribeLocalGatewayVirtualInterfacesRequest& request, const DescribeLocalGatewayVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLocalGatewayVirtualInterfacesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLocalGatewayVirtualInterfaces(*pRequest), context);
    } );
}
DescribeLocalGatewaysOutcome EC2Client::DescribeLocalGateways(const DescribeLocalGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocalGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLocalGatewaysOutcomeCallable EC2Client::DescribeLocalGatewaysCallable(const DescribeLocalGatewaysRequest& request) const
{
  std::shared_ptr<DescribeLocalGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocalGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeLocalGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeLocalGatewaysAsync(const DescribeLocalGatewaysRequest& request, const DescribeLocalGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeLocalGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeLocalGateways(*pRequest), context);
    } );
}
DescribeManagedPrefixListsOutcome EC2Client::DescribeManagedPrefixLists(const DescribeManagedPrefixListsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeManagedPrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeManagedPrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeManagedPrefixListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeManagedPrefixListsOutcomeCallable EC2Client::DescribeManagedPrefixListsCallable(const DescribeManagedPrefixListsRequest& request) const
{
  std::shared_ptr<DescribeManagedPrefixListsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeManagedPrefixListsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeManagedPrefixLists(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeManagedPrefixListsAsync(const DescribeManagedPrefixListsRequest& request, const DescribeManagedPrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeManagedPrefixListsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeManagedPrefixLists(*pRequest), context);
    } );
}
DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMovingAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMovingAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMovingAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeMovingAddressesOutcomeCallable EC2Client::DescribeMovingAddressesCallable(const DescribeMovingAddressesRequest& request) const
{
  std::shared_ptr<DescribeMovingAddressesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeMovingAddressesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeMovingAddresses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeMovingAddressesAsync(const DescribeMovingAddressesRequest& request, const DescribeMovingAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeMovingAddressesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeMovingAddresses(*pRequest), context);
    } );
}
DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNatGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNatGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNatGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNatGatewaysOutcomeCallable EC2Client::DescribeNatGatewaysCallable(const DescribeNatGatewaysRequest& request) const
{
  std::shared_ptr<DescribeNatGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNatGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNatGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNatGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNatGateways(*pRequest), context);
    } );
}
DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkAcls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkAcls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkAclsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkAclsOutcomeCallable EC2Client::DescribeNetworkAclsCallable(const DescribeNetworkAclsRequest& request) const
{
  std::shared_ptr<DescribeNetworkAclsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkAclsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkAcls(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkAclsAsync(const DescribeNetworkAclsRequest& request, const DescribeNetworkAclsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkAclsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkAcls(*pRequest), context);
    } );
}
DescribeNetworkInsightsAccessScopeAnalysesOutcome EC2Client::DescribeNetworkInsightsAccessScopeAnalyses(const DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsAccessScopeAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsAccessScopeAnalysesOutcomeCallable EC2Client::DescribeNetworkInsightsAccessScopeAnalysesCallable(const DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const
{
  std::shared_ptr<DescribeNetworkInsightsAccessScopeAnalysesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInsightsAccessScopeAnalysesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInsightsAccessScopeAnalyses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInsightsAccessScopeAnalysesAsync(const DescribeNetworkInsightsAccessScopeAnalysesRequest& request, const DescribeNetworkInsightsAccessScopeAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInsightsAccessScopeAnalysesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInsightsAccessScopeAnalyses(*pRequest), context);
    } );
}
DescribeNetworkInsightsAccessScopesOutcome EC2Client::DescribeNetworkInsightsAccessScopes(const DescribeNetworkInsightsAccessScopesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsAccessScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsAccessScopesOutcomeCallable EC2Client::DescribeNetworkInsightsAccessScopesCallable(const DescribeNetworkInsightsAccessScopesRequest& request) const
{
  std::shared_ptr<DescribeNetworkInsightsAccessScopesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInsightsAccessScopesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInsightsAccessScopes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInsightsAccessScopesAsync(const DescribeNetworkInsightsAccessScopesRequest& request, const DescribeNetworkInsightsAccessScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInsightsAccessScopesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInsightsAccessScopes(*pRequest), context);
    } );
}
DescribeNetworkInsightsAnalysesOutcome EC2Client::DescribeNetworkInsightsAnalyses(const DescribeNetworkInsightsAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsAnalysesOutcomeCallable EC2Client::DescribeNetworkInsightsAnalysesCallable(const DescribeNetworkInsightsAnalysesRequest& request) const
{
  std::shared_ptr<DescribeNetworkInsightsAnalysesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInsightsAnalysesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInsightsAnalyses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInsightsAnalysesAsync(const DescribeNetworkInsightsAnalysesRequest& request, const DescribeNetworkInsightsAnalysesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInsightsAnalysesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInsightsAnalyses(*pRequest), context);
    } );
}
DescribeNetworkInsightsPathsOutcome EC2Client::DescribeNetworkInsightsPaths(const DescribeNetworkInsightsPathsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInsightsPathsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInsightsPathsOutcomeCallable EC2Client::DescribeNetworkInsightsPathsCallable(const DescribeNetworkInsightsPathsRequest& request) const
{
  std::shared_ptr<DescribeNetworkInsightsPathsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInsightsPathsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInsightsPaths(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInsightsPathsAsync(const DescribeNetworkInsightsPathsRequest& request, const DescribeNetworkInsightsPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInsightsPathsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInsightsPaths(*pRequest), context);
    } );
}
DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInterfaceAttributeOutcomeCallable EC2Client::DescribeNetworkInterfaceAttributeCallable(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  std::shared_ptr<DescribeNetworkInterfaceAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInterfaceAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInterfaceAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInterfaceAttributeAsync(const DescribeNetworkInterfaceAttributeRequest& request, const DescribeNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInterfaceAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInterfaceAttribute(*pRequest), context);
    } );
}
DescribeNetworkInterfacePermissionsOutcome EC2Client::DescribeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInterfacePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInterfacePermissionsOutcomeCallable EC2Client::DescribeNetworkInterfacePermissionsCallable(const DescribeNetworkInterfacePermissionsRequest& request) const
{
  std::shared_ptr<DescribeNetworkInterfacePermissionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInterfacePermissionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInterfacePermissions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInterfacePermissionsAsync(const DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInterfacePermissionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInterfacePermissions(*pRequest), context);
    } );
}
DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNetworkInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNetworkInterfacesOutcomeCallable EC2Client::DescribeNetworkInterfacesCallable(const DescribeNetworkInterfacesRequest& request) const
{
  std::shared_ptr<DescribeNetworkInterfacesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeNetworkInterfacesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeNetworkInterfaces(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeNetworkInterfacesAsync(const DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeNetworkInterfacesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeNetworkInterfaces(*pRequest), context);
    } );
}
DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePlacementGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePlacementGroupsOutcomeCallable EC2Client::DescribePlacementGroupsCallable(const DescribePlacementGroupsRequest& request) const
{
  std::shared_ptr<DescribePlacementGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePlacementGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePlacementGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribePlacementGroupsAsync(const DescribePlacementGroupsRequest& request, const DescribePlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePlacementGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePlacementGroups(*pRequest), context);
    } );
}
DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePrefixListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePrefixListsOutcomeCallable EC2Client::DescribePrefixListsCallable(const DescribePrefixListsRequest& request) const
{
  std::shared_ptr<DescribePrefixListsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePrefixListsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePrefixLists(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribePrefixListsAsync(const DescribePrefixListsRequest& request, const DescribePrefixListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePrefixListsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePrefixLists(*pRequest), context);
    } );
}
DescribePrincipalIdFormatOutcome EC2Client::DescribePrincipalIdFormat(const DescribePrincipalIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePrincipalIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePrincipalIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePrincipalIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePrincipalIdFormatOutcomeCallable EC2Client::DescribePrincipalIdFormatCallable(const DescribePrincipalIdFormatRequest& request) const
{
  std::shared_ptr<DescribePrincipalIdFormatRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePrincipalIdFormatOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePrincipalIdFormat(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribePrincipalIdFormatAsync(const DescribePrincipalIdFormatRequest& request, const DescribePrincipalIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePrincipalIdFormatRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePrincipalIdFormat(*pRequest), context);
    } );
}
DescribePublicIpv4PoolsOutcome EC2Client::DescribePublicIpv4Pools(const DescribePublicIpv4PoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePublicIpv4Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePublicIpv4Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePublicIpv4PoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePublicIpv4PoolsOutcomeCallable EC2Client::DescribePublicIpv4PoolsCallable(const DescribePublicIpv4PoolsRequest& request) const
{
  std::shared_ptr<DescribePublicIpv4PoolsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribePublicIpv4PoolsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribePublicIpv4Pools(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribePublicIpv4PoolsAsync(const DescribePublicIpv4PoolsRequest& request, const DescribePublicIpv4PoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribePublicIpv4PoolsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribePublicIpv4Pools(*pRequest), context);
    } );
}
DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRegionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeRegionsOutcomeCallable EC2Client::DescribeRegionsCallable(const DescribeRegionsRequest& request) const
{
  std::shared_ptr<DescribeRegionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeRegions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeRegionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeRegions(*pRequest), context);
    } );
}
DescribeReplaceRootVolumeTasksOutcome EC2Client::DescribeReplaceRootVolumeTasks(const DescribeReplaceRootVolumeTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReplaceRootVolumeTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReplaceRootVolumeTasksOutcomeCallable EC2Client::DescribeReplaceRootVolumeTasksCallable(const DescribeReplaceRootVolumeTasksRequest& request) const
{
  std::shared_ptr<DescribeReplaceRootVolumeTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplaceRootVolumeTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeReplaceRootVolumeTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeReplaceRootVolumeTasksAsync(const DescribeReplaceRootVolumeTasksRequest& request, const DescribeReplaceRootVolumeTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeReplaceRootVolumeTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeReplaceRootVolumeTasks(*pRequest), context);
    } );
}
DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesOutcomeCallable EC2Client::DescribeReservedInstancesCallable(const DescribeReservedInstancesRequest& request) const
{
  std::shared_ptr<DescribeReservedInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeReservedInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeReservedInstancesAsync(const DescribeReservedInstancesRequest& request, const DescribeReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeReservedInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeReservedInstances(*pRequest), context);
    } );
}
DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(const DescribeReservedInstancesListingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesListingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesListingsOutcomeCallable EC2Client::DescribeReservedInstancesListingsCallable(const DescribeReservedInstancesListingsRequest& request) const
{
  std::shared_ptr<DescribeReservedInstancesListingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesListingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeReservedInstancesListings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeReservedInstancesListingsAsync(const DescribeReservedInstancesListingsRequest& request, const DescribeReservedInstancesListingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeReservedInstancesListingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeReservedInstancesListings(*pRequest), context);
    } );
}
DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesModificationsOutcomeCallable EC2Client::DescribeReservedInstancesModificationsCallable(const DescribeReservedInstancesModificationsRequest& request) const
{
  std::shared_ptr<DescribeReservedInstancesModificationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesModificationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeReservedInstancesModifications(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeReservedInstancesModificationsAsync(const DescribeReservedInstancesModificationsRequest& request, const DescribeReservedInstancesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeReservedInstancesModificationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeReservedInstancesModifications(*pRequest), context);
    } );
}
DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedInstancesOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedInstancesOfferingsOutcomeCallable EC2Client::DescribeReservedInstancesOfferingsCallable(const DescribeReservedInstancesOfferingsRequest& request) const
{
  std::shared_ptr<DescribeReservedInstancesOfferingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservedInstancesOfferingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeReservedInstancesOfferings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeReservedInstancesOfferingsAsync(const DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeReservedInstancesOfferingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeReservedInstancesOfferings(*pRequest), context);
    } );
}
DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeRouteTablesOutcomeCallable EC2Client::DescribeRouteTablesCallable(const DescribeRouteTablesRequest& request) const
{
  std::shared_ptr<DescribeRouteTablesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeRouteTablesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeRouteTables(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeRouteTablesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeRouteTables(*pRequest), context);
    } );
}
DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScheduledInstanceAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledInstanceAvailabilityOutcomeCallable EC2Client::DescribeScheduledInstanceAvailabilityCallable(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  std::shared_ptr<DescribeScheduledInstanceAvailabilityRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledInstanceAvailabilityOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeScheduledInstanceAvailability(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeScheduledInstanceAvailabilityAsync(const DescribeScheduledInstanceAvailabilityRequest& request, const DescribeScheduledInstanceAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeScheduledInstanceAvailabilityRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeScheduledInstanceAvailability(*pRequest), context);
    } );
}
DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledInstancesOutcomeCallable EC2Client::DescribeScheduledInstancesCallable(const DescribeScheduledInstancesRequest& request) const
{
  std::shared_ptr<DescribeScheduledInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeScheduledInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeScheduledInstancesAsync(const DescribeScheduledInstancesRequest& request, const DescribeScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeScheduledInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeScheduledInstances(*pRequest), context);
    } );
}
DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityGroupReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSecurityGroupReferencesOutcomeCallable EC2Client::DescribeSecurityGroupReferencesCallable(const DescribeSecurityGroupReferencesRequest& request) const
{
  std::shared_ptr<DescribeSecurityGroupReferencesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityGroupReferencesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSecurityGroupReferences(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSecurityGroupReferencesAsync(const DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSecurityGroupReferencesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSecurityGroupReferences(*pRequest), context);
    } );
}
DescribeSecurityGroupRulesOutcome EC2Client::DescribeSecurityGroupRules(const DescribeSecurityGroupRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityGroupRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSecurityGroupRulesOutcomeCallable EC2Client::DescribeSecurityGroupRulesCallable(const DescribeSecurityGroupRulesRequest& request) const
{
  std::shared_ptr<DescribeSecurityGroupRulesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityGroupRulesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSecurityGroupRules(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSecurityGroupRulesAsync(const DescribeSecurityGroupRulesRequest& request, const DescribeSecurityGroupRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSecurityGroupRulesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSecurityGroupRules(*pRequest), context);
    } );
}
DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSecurityGroupsOutcomeCallable EC2Client::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest& request) const
{
  std::shared_ptr<DescribeSecurityGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSecurityGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSecurityGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSecurityGroups(*pRequest), context);
    } );
}
DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotAttributeOutcomeCallable EC2Client::DescribeSnapshotAttributeCallable(const DescribeSnapshotAttributeRequest& request) const
{
  std::shared_ptr<DescribeSnapshotAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSnapshotAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSnapshotAttributeAsync(const DescribeSnapshotAttributeRequest& request, const DescribeSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSnapshotAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSnapshotAttribute(*pRequest), context);
    } );
}
DescribeSnapshotTierStatusOutcome EC2Client::DescribeSnapshotTierStatus(const DescribeSnapshotTierStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotTierStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotTierStatusOutcomeCallable EC2Client::DescribeSnapshotTierStatusCallable(const DescribeSnapshotTierStatusRequest& request) const
{
  std::shared_ptr<DescribeSnapshotTierStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotTierStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSnapshotTierStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSnapshotTierStatusAsync(const DescribeSnapshotTierStatusRequest& request, const DescribeSnapshotTierStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSnapshotTierStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSnapshotTierStatus(*pRequest), context);
    } );
}
DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotsOutcomeCallable EC2Client::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  std::shared_ptr<DescribeSnapshotsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSnapshots(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSnapshotsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSnapshots(*pRequest), context);
    } );
}
DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotDatafeedSubscriptionOutcomeCallable EC2Client::DescribeSpotDatafeedSubscriptionCallable(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  std::shared_ptr<DescribeSpotDatafeedSubscriptionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotDatafeedSubscriptionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSpotDatafeedSubscription(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSpotDatafeedSubscriptionAsync(const DescribeSpotDatafeedSubscriptionRequest& request, const DescribeSpotDatafeedSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSpotDatafeedSubscriptionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSpotDatafeedSubscription(*pRequest), context);
    } );
}
DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotFleetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotFleetInstancesOutcomeCallable EC2Client::DescribeSpotFleetInstancesCallable(const DescribeSpotFleetInstancesRequest& request) const
{
  std::shared_ptr<DescribeSpotFleetInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotFleetInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSpotFleetInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSpotFleetInstancesAsync(const DescribeSpotFleetInstancesRequest& request, const DescribeSpotFleetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSpotFleetInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSpotFleetInstances(*pRequest), context);
    } );
}
DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotFleetRequestHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotFleetRequestHistoryOutcomeCallable EC2Client::DescribeSpotFleetRequestHistoryCallable(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  std::shared_ptr<DescribeSpotFleetRequestHistoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotFleetRequestHistoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSpotFleetRequestHistory(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSpotFleetRequestHistoryAsync(const DescribeSpotFleetRequestHistoryRequest& request, const DescribeSpotFleetRequestHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSpotFleetRequestHistoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSpotFleetRequestHistory(*pRequest), context);
    } );
}
DescribeSpotFleetRequestsOutcome EC2Client::DescribeSpotFleetRequests(const DescribeSpotFleetRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotFleetRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotFleetRequestsOutcomeCallable EC2Client::DescribeSpotFleetRequestsCallable(const DescribeSpotFleetRequestsRequest& request) const
{
  std::shared_ptr<DescribeSpotFleetRequestsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotFleetRequestsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSpotFleetRequests(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSpotFleetRequestsAsync(const DescribeSpotFleetRequestsRequest& request, const DescribeSpotFleetRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSpotFleetRequestsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSpotFleetRequests(*pRequest), context);
    } );
}
DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotInstanceRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotInstanceRequestsOutcomeCallable EC2Client::DescribeSpotInstanceRequestsCallable(const DescribeSpotInstanceRequestsRequest& request) const
{
  std::shared_ptr<DescribeSpotInstanceRequestsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotInstanceRequestsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSpotInstanceRequests(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSpotInstanceRequestsAsync(const DescribeSpotInstanceRequestsRequest& request, const DescribeSpotInstanceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSpotInstanceRequestsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSpotInstanceRequests(*pRequest), context);
    } );
}
DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotPriceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotPriceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpotPriceHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSpotPriceHistoryOutcomeCallable EC2Client::DescribeSpotPriceHistoryCallable(const DescribeSpotPriceHistoryRequest& request) const
{
  std::shared_ptr<DescribeSpotPriceHistoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpotPriceHistoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSpotPriceHistory(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSpotPriceHistoryAsync(const DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSpotPriceHistoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSpotPriceHistory(*pRequest), context);
    } );
}
DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStaleSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStaleSecurityGroupsOutcomeCallable EC2Client::DescribeStaleSecurityGroupsCallable(const DescribeStaleSecurityGroupsRequest& request) const
{
  std::shared_ptr<DescribeStaleSecurityGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeStaleSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeStaleSecurityGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeStaleSecurityGroupsAsync(const DescribeStaleSecurityGroupsRequest& request, const DescribeStaleSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeStaleSecurityGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeStaleSecurityGroups(*pRequest), context);
    } );
}
DescribeStoreImageTasksOutcome EC2Client::DescribeStoreImageTasks(const DescribeStoreImageTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStoreImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStoreImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStoreImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStoreImageTasksOutcomeCallable EC2Client::DescribeStoreImageTasksCallable(const DescribeStoreImageTasksRequest& request) const
{
  std::shared_ptr<DescribeStoreImageTasksRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeStoreImageTasksOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeStoreImageTasks(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeStoreImageTasksAsync(const DescribeStoreImageTasksRequest& request, const DescribeStoreImageTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeStoreImageTasksRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeStoreImageTasks(*pRequest), context);
    } );
}
DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSubnetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSubnetsOutcomeCallable EC2Client::DescribeSubnetsCallable(const DescribeSubnetsRequest& request) const
{
  std::shared_ptr<DescribeSubnetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubnetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeSubnets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeSubnetsAsync(const DescribeSubnetsRequest& request, const DescribeSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeSubnetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeSubnets(*pRequest), context);
    } );
}
DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable EC2Client::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  std::shared_ptr<DescribeTagsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTags(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTagsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTags(*pRequest), context);
    } );
}
DescribeTrafficMirrorFiltersOutcome EC2Client::DescribeTrafficMirrorFilters(const DescribeTrafficMirrorFiltersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrafficMirrorFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrafficMirrorFiltersOutcomeCallable EC2Client::DescribeTrafficMirrorFiltersCallable(const DescribeTrafficMirrorFiltersRequest& request) const
{
  std::shared_ptr<DescribeTrafficMirrorFiltersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrafficMirrorFiltersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTrafficMirrorFilters(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTrafficMirrorFiltersAsync(const DescribeTrafficMirrorFiltersRequest& request, const DescribeTrafficMirrorFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTrafficMirrorFiltersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTrafficMirrorFilters(*pRequest), context);
    } );
}
DescribeTrafficMirrorSessionsOutcome EC2Client::DescribeTrafficMirrorSessions(const DescribeTrafficMirrorSessionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrafficMirrorSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrafficMirrorSessionsOutcomeCallable EC2Client::DescribeTrafficMirrorSessionsCallable(const DescribeTrafficMirrorSessionsRequest& request) const
{
  std::shared_ptr<DescribeTrafficMirrorSessionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrafficMirrorSessionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTrafficMirrorSessions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTrafficMirrorSessionsAsync(const DescribeTrafficMirrorSessionsRequest& request, const DescribeTrafficMirrorSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTrafficMirrorSessionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTrafficMirrorSessions(*pRequest), context);
    } );
}
DescribeTrafficMirrorTargetsOutcome EC2Client::DescribeTrafficMirrorTargets(const DescribeTrafficMirrorTargetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrafficMirrorTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrafficMirrorTargetsOutcomeCallable EC2Client::DescribeTrafficMirrorTargetsCallable(const DescribeTrafficMirrorTargetsRequest& request) const
{
  std::shared_ptr<DescribeTrafficMirrorTargetsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrafficMirrorTargetsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTrafficMirrorTargets(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTrafficMirrorTargetsAsync(const DescribeTrafficMirrorTargetsRequest& request, const DescribeTrafficMirrorTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTrafficMirrorTargetsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTrafficMirrorTargets(*pRequest), context);
    } );
}
DescribeTransitGatewayAttachmentsOutcome EC2Client::DescribeTransitGatewayAttachments(const DescribeTransitGatewayAttachmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayAttachmentsOutcomeCallable EC2Client::DescribeTransitGatewayAttachmentsCallable(const DescribeTransitGatewayAttachmentsRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayAttachmentsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayAttachmentsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayAttachments(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayAttachmentsAsync(const DescribeTransitGatewayAttachmentsRequest& request, const DescribeTransitGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayAttachmentsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayAttachments(*pRequest), context);
    } );
}
DescribeTransitGatewayConnectPeersOutcome EC2Client::DescribeTransitGatewayConnectPeers(const DescribeTransitGatewayConnectPeersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayConnectPeersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayConnectPeersOutcomeCallable EC2Client::DescribeTransitGatewayConnectPeersCallable(const DescribeTransitGatewayConnectPeersRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayConnectPeersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayConnectPeersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayConnectPeers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayConnectPeersAsync(const DescribeTransitGatewayConnectPeersRequest& request, const DescribeTransitGatewayConnectPeersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayConnectPeersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayConnectPeers(*pRequest), context);
    } );
}
DescribeTransitGatewayConnectsOutcome EC2Client::DescribeTransitGatewayConnects(const DescribeTransitGatewayConnectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayConnectsOutcomeCallable EC2Client::DescribeTransitGatewayConnectsCallable(const DescribeTransitGatewayConnectsRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayConnectsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayConnectsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayConnects(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayConnectsAsync(const DescribeTransitGatewayConnectsRequest& request, const DescribeTransitGatewayConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayConnectsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayConnects(*pRequest), context);
    } );
}
DescribeTransitGatewayMulticastDomainsOutcome EC2Client::DescribeTransitGatewayMulticastDomains(const DescribeTransitGatewayMulticastDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayMulticastDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayMulticastDomainsOutcomeCallable EC2Client::DescribeTransitGatewayMulticastDomainsCallable(const DescribeTransitGatewayMulticastDomainsRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayMulticastDomainsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayMulticastDomainsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayMulticastDomains(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayMulticastDomainsAsync(const DescribeTransitGatewayMulticastDomainsRequest& request, const DescribeTransitGatewayMulticastDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayMulticastDomainsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayMulticastDomains(*pRequest), context);
    } );
}
DescribeTransitGatewayPeeringAttachmentsOutcome EC2Client::DescribeTransitGatewayPeeringAttachments(const DescribeTransitGatewayPeeringAttachmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayPeeringAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayPeeringAttachmentsOutcomeCallable EC2Client::DescribeTransitGatewayPeeringAttachmentsCallable(const DescribeTransitGatewayPeeringAttachmentsRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayPeeringAttachmentsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayPeeringAttachmentsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayPeeringAttachments(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayPeeringAttachmentsAsync(const DescribeTransitGatewayPeeringAttachmentsRequest& request, const DescribeTransitGatewayPeeringAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayPeeringAttachmentsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayPeeringAttachments(*pRequest), context);
    } );
}
DescribeTransitGatewayPolicyTablesOutcome EC2Client::DescribeTransitGatewayPolicyTables(const DescribeTransitGatewayPolicyTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayPolicyTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayPolicyTablesOutcomeCallable EC2Client::DescribeTransitGatewayPolicyTablesCallable(const DescribeTransitGatewayPolicyTablesRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayPolicyTablesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayPolicyTablesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayPolicyTables(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayPolicyTablesAsync(const DescribeTransitGatewayPolicyTablesRequest& request, const DescribeTransitGatewayPolicyTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayPolicyTablesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayPolicyTables(*pRequest), context);
    } );
}
DescribeTransitGatewayRouteTableAnnouncementsOutcome EC2Client::DescribeTransitGatewayRouteTableAnnouncements(const DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayRouteTableAnnouncementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayRouteTableAnnouncementsOutcomeCallable EC2Client::DescribeTransitGatewayRouteTableAnnouncementsCallable(const DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayRouteTableAnnouncementsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayRouteTableAnnouncementsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayRouteTableAnnouncements(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayRouteTableAnnouncementsAsync(const DescribeTransitGatewayRouteTableAnnouncementsRequest& request, const DescribeTransitGatewayRouteTableAnnouncementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayRouteTableAnnouncementsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayRouteTableAnnouncements(*pRequest), context);
    } );
}
DescribeTransitGatewayRouteTablesOutcome EC2Client::DescribeTransitGatewayRouteTables(const DescribeTransitGatewayRouteTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayRouteTablesOutcomeCallable EC2Client::DescribeTransitGatewayRouteTablesCallable(const DescribeTransitGatewayRouteTablesRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayRouteTablesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayRouteTablesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayRouteTables(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayRouteTablesAsync(const DescribeTransitGatewayRouteTablesRequest& request, const DescribeTransitGatewayRouteTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayRouteTablesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayRouteTables(*pRequest), context);
    } );
}
DescribeTransitGatewayVpcAttachmentsOutcome EC2Client::DescribeTransitGatewayVpcAttachments(const DescribeTransitGatewayVpcAttachmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewayVpcAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewayVpcAttachmentsOutcomeCallable EC2Client::DescribeTransitGatewayVpcAttachmentsCallable(const DescribeTransitGatewayVpcAttachmentsRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewayVpcAttachmentsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewayVpcAttachmentsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGatewayVpcAttachments(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewayVpcAttachmentsAsync(const DescribeTransitGatewayVpcAttachmentsRequest& request, const DescribeTransitGatewayVpcAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewayVpcAttachmentsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGatewayVpcAttachments(*pRequest), context);
    } );
}
DescribeTransitGatewaysOutcome EC2Client::DescribeTransitGateways(const DescribeTransitGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransitGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTransitGatewaysOutcomeCallable EC2Client::DescribeTransitGatewaysCallable(const DescribeTransitGatewaysRequest& request) const
{
  std::shared_ptr<DescribeTransitGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransitGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTransitGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTransitGatewaysAsync(const DescribeTransitGatewaysRequest& request, const DescribeTransitGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTransitGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTransitGateways(*pRequest), context);
    } );
}
DescribeTrunkInterfaceAssociationsOutcome EC2Client::DescribeTrunkInterfaceAssociations(const DescribeTrunkInterfaceAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrunkInterfaceAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTrunkInterfaceAssociationsOutcomeCallable EC2Client::DescribeTrunkInterfaceAssociationsCallable(const DescribeTrunkInterfaceAssociationsRequest& request) const
{
  std::shared_ptr<DescribeTrunkInterfaceAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrunkInterfaceAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeTrunkInterfaceAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeTrunkInterfaceAssociationsAsync(const DescribeTrunkInterfaceAssociationsRequest& request, const DescribeTrunkInterfaceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeTrunkInterfaceAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeTrunkInterfaceAssociations(*pRequest), context);
    } );
}
DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumeAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumeAttributeOutcomeCallable EC2Client::DescribeVolumeAttributeCallable(const DescribeVolumeAttributeRequest& request) const
{
  std::shared_ptr<DescribeVolumeAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumeAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVolumeAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVolumeAttributeAsync(const DescribeVolumeAttributeRequest& request, const DescribeVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVolumeAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVolumeAttribute(*pRequest), context);
    } );
}
DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumeStatusOutcomeCallable EC2Client::DescribeVolumeStatusCallable(const DescribeVolumeStatusRequest& request) const
{
  std::shared_ptr<DescribeVolumeStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumeStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVolumeStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVolumeStatusAsync(const DescribeVolumeStatusRequest& request, const DescribeVolumeStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVolumeStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVolumeStatus(*pRequest), context);
    } );
}
DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumesOutcomeCallable EC2Client::DescribeVolumesCallable(const DescribeVolumesRequest& request) const
{
  std::shared_ptr<DescribeVolumesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVolumes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVolumesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVolumes(*pRequest), context);
    } );
}
DescribeVolumesModificationsOutcome EC2Client::DescribeVolumesModifications(const DescribeVolumesModificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVolumesModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVolumesModificationsOutcomeCallable EC2Client::DescribeVolumesModificationsCallable(const DescribeVolumesModificationsRequest& request) const
{
  std::shared_ptr<DescribeVolumesModificationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVolumesModificationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVolumesModifications(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVolumesModificationsAsync(const DescribeVolumesModificationsRequest& request, const DescribeVolumesModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVolumesModificationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVolumesModifications(*pRequest), context);
    } );
}
DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcAttributeOutcomeCallable EC2Client::DescribeVpcAttributeCallable(const DescribeVpcAttributeRequest& request) const
{
  std::shared_ptr<DescribeVpcAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcAttributeAsync(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcAttribute(*pRequest), context);
    } );
}
DescribeVpcClassicLinkOutcome EC2Client::DescribeVpcClassicLink(const DescribeVpcClassicLinkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcClassicLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcClassicLinkOutcomeCallable EC2Client::DescribeVpcClassicLinkCallable(const DescribeVpcClassicLinkRequest& request) const
{
  std::shared_ptr<DescribeVpcClassicLinkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcClassicLinkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcClassicLink(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcClassicLinkAsync(const DescribeVpcClassicLinkRequest& request, const DescribeVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcClassicLinkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcClassicLink(*pRequest), context);
    } );
}
DescribeVpcClassicLinkDnsSupportOutcome EC2Client::DescribeVpcClassicLinkDnsSupport(const DescribeVpcClassicLinkDnsSupportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcClassicLinkDnsSupportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcClassicLinkDnsSupportOutcomeCallable EC2Client::DescribeVpcClassicLinkDnsSupportCallable(const DescribeVpcClassicLinkDnsSupportRequest& request) const
{
  std::shared_ptr<DescribeVpcClassicLinkDnsSupportRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcClassicLinkDnsSupportOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcClassicLinkDnsSupport(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcClassicLinkDnsSupportAsync(const DescribeVpcClassicLinkDnsSupportRequest& request, const DescribeVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcClassicLinkDnsSupportRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcClassicLinkDnsSupport(*pRequest), context);
    } );
}
DescribeVpcEndpointConnectionNotificationsOutcome EC2Client::DescribeVpcEndpointConnectionNotifications(const DescribeVpcEndpointConnectionNotificationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointConnectionNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointConnectionNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointConnectionNotificationsOutcomeCallable EC2Client::DescribeVpcEndpointConnectionNotificationsCallable(const DescribeVpcEndpointConnectionNotificationsRequest& request) const
{
  std::shared_ptr<DescribeVpcEndpointConnectionNotificationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointConnectionNotificationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcEndpointConnectionNotifications(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcEndpointConnectionNotificationsAsync(const DescribeVpcEndpointConnectionNotificationsRequest& request, const DescribeVpcEndpointConnectionNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcEndpointConnectionNotificationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcEndpointConnectionNotifications(*pRequest), context);
    } );
}
DescribeVpcEndpointConnectionsOutcome EC2Client::DescribeVpcEndpointConnections(const DescribeVpcEndpointConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointConnectionsOutcomeCallable EC2Client::DescribeVpcEndpointConnectionsCallable(const DescribeVpcEndpointConnectionsRequest& request) const
{
  std::shared_ptr<DescribeVpcEndpointConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcEndpointConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcEndpointConnectionsAsync(const DescribeVpcEndpointConnectionsRequest& request, const DescribeVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcEndpointConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcEndpointConnections(*pRequest), context);
    } );
}
DescribeVpcEndpointServiceConfigurationsOutcome EC2Client::DescribeVpcEndpointServiceConfigurations(const DescribeVpcEndpointServiceConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointServiceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointServiceConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointServiceConfigurationsOutcomeCallable EC2Client::DescribeVpcEndpointServiceConfigurationsCallable(const DescribeVpcEndpointServiceConfigurationsRequest& request) const
{
  std::shared_ptr<DescribeVpcEndpointServiceConfigurationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointServiceConfigurationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcEndpointServiceConfigurations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcEndpointServiceConfigurationsAsync(const DescribeVpcEndpointServiceConfigurationsRequest& request, const DescribeVpcEndpointServiceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcEndpointServiceConfigurationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcEndpointServiceConfigurations(*pRequest), context);
    } );
}
DescribeVpcEndpointServicePermissionsOutcome EC2Client::DescribeVpcEndpointServicePermissions(const DescribeVpcEndpointServicePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointServicePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointServicePermissionsOutcomeCallable EC2Client::DescribeVpcEndpointServicePermissionsCallable(const DescribeVpcEndpointServicePermissionsRequest& request) const
{
  std::shared_ptr<DescribeVpcEndpointServicePermissionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointServicePermissionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcEndpointServicePermissions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcEndpointServicePermissionsAsync(const DescribeVpcEndpointServicePermissionsRequest& request, const DescribeVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcEndpointServicePermissionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcEndpointServicePermissions(*pRequest), context);
    } );
}
DescribeVpcEndpointServicesOutcome EC2Client::DescribeVpcEndpointServices(const DescribeVpcEndpointServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpointServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpointServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointServicesOutcomeCallable EC2Client::DescribeVpcEndpointServicesCallable(const DescribeVpcEndpointServicesRequest& request) const
{
  std::shared_ptr<DescribeVpcEndpointServicesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointServicesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcEndpointServices(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcEndpointServicesAsync(const DescribeVpcEndpointServicesRequest& request, const DescribeVpcEndpointServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcEndpointServicesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcEndpointServices(*pRequest), context);
    } );
}
DescribeVpcEndpointsOutcome EC2Client::DescribeVpcEndpoints(const DescribeVpcEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcEndpointsOutcomeCallable EC2Client::DescribeVpcEndpointsCallable(const DescribeVpcEndpointsRequest& request) const
{
  std::shared_ptr<DescribeVpcEndpointsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcEndpointsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcEndpoints(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcEndpointsAsync(const DescribeVpcEndpointsRequest& request, const DescribeVpcEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcEndpointsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcEndpoints(*pRequest), context);
    } );
}
DescribeVpcPeeringConnectionsOutcome EC2Client::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcPeeringConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcPeeringConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcPeeringConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcPeeringConnectionsOutcomeCallable EC2Client::DescribeVpcPeeringConnectionsCallable(const DescribeVpcPeeringConnectionsRequest& request) const
{
  std::shared_ptr<DescribeVpcPeeringConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcPeeringConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcPeeringConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcPeeringConnectionsAsync(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcPeeringConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcPeeringConnections(*pRequest), context);
    } );
}
DescribeVpcsOutcome EC2Client::DescribeVpcs(const DescribeVpcsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpcsOutcomeCallable EC2Client::DescribeVpcsCallable(const DescribeVpcsRequest& request) const
{
  std::shared_ptr<DescribeVpcsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpcs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpcsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpcs(*pRequest), context);
    } );
}
DescribeVpnConnectionsOutcome EC2Client::DescribeVpnConnections(const DescribeVpnConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpnConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpnConnectionsOutcomeCallable EC2Client::DescribeVpnConnectionsCallable(const DescribeVpnConnectionsRequest& request) const
{
  std::shared_ptr<DescribeVpnConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpnConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpnConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpnConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpnConnections(*pRequest), context);
    } );
}
DescribeVpnGatewaysOutcome EC2Client::DescribeVpnGateways(const DescribeVpnGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpnGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpnGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpnGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeVpnGatewaysOutcomeCallable EC2Client::DescribeVpnGatewaysCallable(const DescribeVpnGatewaysRequest& request) const
{
  std::shared_ptr<DescribeVpnGatewaysRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpnGatewaysOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeVpnGateways(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DescribeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeVpnGatewaysRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeVpnGateways(*pRequest), context);
    } );
}
DetachClassicLinkVpcOutcome EC2Client::DetachClassicLinkVpc(const DetachClassicLinkVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachClassicLinkVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachClassicLinkVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachClassicLinkVpcOutcomeCallable EC2Client::DetachClassicLinkVpcCallable(const DetachClassicLinkVpcRequest& request) const
{
  std::shared_ptr<DetachClassicLinkVpcRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DetachClassicLinkVpcOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DetachClassicLinkVpc(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DetachClassicLinkVpcAsync(const DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DetachClassicLinkVpcRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DetachClassicLinkVpc(*pRequest), context);
    } );
}
DetachInternetGatewayOutcome EC2Client::DetachInternetGateway(const DetachInternetGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachInternetGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachInternetGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachInternetGatewayOutcomeCallable EC2Client::DetachInternetGatewayCallable(const DetachInternetGatewayRequest& request) const
{
  std::shared_ptr<DetachInternetGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DetachInternetGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DetachInternetGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DetachInternetGatewayAsync(const DetachInternetGatewayRequest& request, const DetachInternetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DetachInternetGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DetachInternetGateway(*pRequest), context);
    } );
}
DetachNetworkInterfaceOutcome EC2Client::DetachNetworkInterface(const DetachNetworkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachNetworkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachNetworkInterfaceOutcomeCallable EC2Client::DetachNetworkInterfaceCallable(const DetachNetworkInterfaceRequest& request) const
{
  std::shared_ptr<DetachNetworkInterfaceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DetachNetworkInterfaceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DetachNetworkInterface(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DetachNetworkInterfaceAsync(const DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DetachNetworkInterfaceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DetachNetworkInterface(*pRequest), context);
    } );
}
DetachVolumeOutcome EC2Client::DetachVolume(const DetachVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachVolumeOutcomeCallable EC2Client::DetachVolumeCallable(const DetachVolumeRequest& request) const
{
  std::shared_ptr<DetachVolumeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DetachVolumeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DetachVolume(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DetachVolumeAsync(const DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DetachVolumeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DetachVolume(*pRequest), context);
    } );
}
DetachVpnGatewayOutcome EC2Client::DetachVpnGateway(const DetachVpnGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachVpnGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachVpnGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DetachVpnGatewayOutcomeCallable EC2Client::DetachVpnGatewayCallable(const DetachVpnGatewayRequest& request) const
{
  std::shared_ptr<DetachVpnGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DetachVpnGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DetachVpnGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DetachVpnGatewayAsync(const DetachVpnGatewayRequest& request, const DetachVpnGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DetachVpnGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DetachVpnGateway(*pRequest), context);
    } );
}
DisableAddressTransferOutcome EC2Client::DisableAddressTransfer(const DisableAddressTransferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAddressTransferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableAddressTransferOutcomeCallable EC2Client::DisableAddressTransferCallable(const DisableAddressTransferRequest& request) const
{
  std::shared_ptr<DisableAddressTransferRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableAddressTransferOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableAddressTransfer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableAddressTransferAsync(const DisableAddressTransferRequest& request, const DisableAddressTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableAddressTransferRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableAddressTransfer(*pRequest), context);
    } );
}
DisableEbsEncryptionByDefaultOutcome EC2Client::DisableEbsEncryptionByDefault(const DisableEbsEncryptionByDefaultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableEbsEncryptionByDefaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableEbsEncryptionByDefaultOutcomeCallable EC2Client::DisableEbsEncryptionByDefaultCallable(const DisableEbsEncryptionByDefaultRequest& request) const
{
  std::shared_ptr<DisableEbsEncryptionByDefaultRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableEbsEncryptionByDefaultOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableEbsEncryptionByDefault(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableEbsEncryptionByDefaultAsync(const DisableEbsEncryptionByDefaultRequest& request, const DisableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableEbsEncryptionByDefaultRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableEbsEncryptionByDefault(*pRequest), context);
    } );
}
DisableFastLaunchOutcome EC2Client::DisableFastLaunch(const DisableFastLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableFastLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableFastLaunchOutcomeCallable EC2Client::DisableFastLaunchCallable(const DisableFastLaunchRequest& request) const
{
  std::shared_ptr<DisableFastLaunchRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableFastLaunchOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableFastLaunch(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableFastLaunchAsync(const DisableFastLaunchRequest& request, const DisableFastLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableFastLaunchRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableFastLaunch(*pRequest), context);
    } );
}
DisableFastSnapshotRestoresOutcome EC2Client::DisableFastSnapshotRestores(const DisableFastSnapshotRestoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableFastSnapshotRestoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableFastSnapshotRestoresOutcomeCallable EC2Client::DisableFastSnapshotRestoresCallable(const DisableFastSnapshotRestoresRequest& request) const
{
  std::shared_ptr<DisableFastSnapshotRestoresRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableFastSnapshotRestoresOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableFastSnapshotRestores(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableFastSnapshotRestoresAsync(const DisableFastSnapshotRestoresRequest& request, const DisableFastSnapshotRestoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableFastSnapshotRestoresRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableFastSnapshotRestores(*pRequest), context);
    } );
}
DisableImageDeprecationOutcome EC2Client::DisableImageDeprecation(const DisableImageDeprecationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableImageDeprecationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableImageDeprecationOutcomeCallable EC2Client::DisableImageDeprecationCallable(const DisableImageDeprecationRequest& request) const
{
  std::shared_ptr<DisableImageDeprecationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableImageDeprecationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableImageDeprecation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableImageDeprecationAsync(const DisableImageDeprecationRequest& request, const DisableImageDeprecationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableImageDeprecationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableImageDeprecation(*pRequest), context);
    } );
}
DisableIpamOrganizationAdminAccountOutcome EC2Client::DisableIpamOrganizationAdminAccount(const DisableIpamOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableIpamOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableIpamOrganizationAdminAccountOutcomeCallable EC2Client::DisableIpamOrganizationAdminAccountCallable(const DisableIpamOrganizationAdminAccountRequest& request) const
{
  std::shared_ptr<DisableIpamOrganizationAdminAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableIpamOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableIpamOrganizationAdminAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableIpamOrganizationAdminAccountAsync(const DisableIpamOrganizationAdminAccountRequest& request, const DisableIpamOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableIpamOrganizationAdminAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableIpamOrganizationAdminAccount(*pRequest), context);
    } );
}
DisableSerialConsoleAccessOutcome EC2Client::DisableSerialConsoleAccess(const DisableSerialConsoleAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableSerialConsoleAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableSerialConsoleAccessOutcomeCallable EC2Client::DisableSerialConsoleAccessCallable(const DisableSerialConsoleAccessRequest& request) const
{
  std::shared_ptr<DisableSerialConsoleAccessRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableSerialConsoleAccessOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableSerialConsoleAccess(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableSerialConsoleAccessAsync(const DisableSerialConsoleAccessRequest& request, const DisableSerialConsoleAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableSerialConsoleAccessRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableSerialConsoleAccess(*pRequest), context);
    } );
}
DisableTransitGatewayRouteTablePropagationOutcome EC2Client::DisableTransitGatewayRouteTablePropagation(const DisableTransitGatewayRouteTablePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableTransitGatewayRouteTablePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableTransitGatewayRouteTablePropagationOutcomeCallable EC2Client::DisableTransitGatewayRouteTablePropagationCallable(const DisableTransitGatewayRouteTablePropagationRequest& request) const
{
  std::shared_ptr<DisableTransitGatewayRouteTablePropagationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableTransitGatewayRouteTablePropagationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableTransitGatewayRouteTablePropagation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableTransitGatewayRouteTablePropagationAsync(const DisableTransitGatewayRouteTablePropagationRequest& request, const DisableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableTransitGatewayRouteTablePropagationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableTransitGatewayRouteTablePropagation(*pRequest), context);
    } );
}
DisableVgwRoutePropagationOutcome EC2Client::DisableVgwRoutePropagation(const DisableVgwRoutePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableVgwRoutePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableVgwRoutePropagationOutcomeCallable EC2Client::DisableVgwRoutePropagationCallable(const DisableVgwRoutePropagationRequest& request) const
{
  std::shared_ptr<DisableVgwRoutePropagationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableVgwRoutePropagationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableVgwRoutePropagation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableVgwRoutePropagationAsync(const DisableVgwRoutePropagationRequest& request, const DisableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableVgwRoutePropagationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableVgwRoutePropagation(*pRequest), context);
    } );
}
DisableVpcClassicLinkOutcome EC2Client::DisableVpcClassicLink(const DisableVpcClassicLinkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableVpcClassicLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableVpcClassicLinkOutcomeCallable EC2Client::DisableVpcClassicLinkCallable(const DisableVpcClassicLinkRequest& request) const
{
  std::shared_ptr<DisableVpcClassicLinkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableVpcClassicLinkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableVpcClassicLink(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableVpcClassicLinkAsync(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableVpcClassicLinkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableVpcClassicLink(*pRequest), context);
    } );
}
DisableVpcClassicLinkDnsSupportOutcome EC2Client::DisableVpcClassicLinkDnsSupport(const DisableVpcClassicLinkDnsSupportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableVpcClassicLinkDnsSupportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableVpcClassicLinkDnsSupportOutcomeCallable EC2Client::DisableVpcClassicLinkDnsSupportCallable(const DisableVpcClassicLinkDnsSupportRequest& request) const
{
  std::shared_ptr<DisableVpcClassicLinkDnsSupportRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisableVpcClassicLinkDnsSupportOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisableVpcClassicLinkDnsSupport(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisableVpcClassicLinkDnsSupportAsync(const DisableVpcClassicLinkDnsSupportRequest& request, const DisableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisableVpcClassicLinkDnsSupportRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisableVpcClassicLinkDnsSupport(*pRequest), context);
    } );
}
DisassociateAddressOutcome EC2Client::DisassociateAddress(const DisassociateAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateAddressOutcomeCallable EC2Client::DisassociateAddressCallable(const DisassociateAddressRequest& request) const
{
  std::shared_ptr<DisassociateAddressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAddressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateAddress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateAddressAsync(const DisassociateAddressRequest& request, const DisassociateAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateAddressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateAddress(*pRequest), context);
    } );
}
DisassociateClientVpnTargetNetworkOutcome EC2Client::DisassociateClientVpnTargetNetwork(const DisassociateClientVpnTargetNetworkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateClientVpnTargetNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateClientVpnTargetNetworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateClientVpnTargetNetworkOutcomeCallable EC2Client::DisassociateClientVpnTargetNetworkCallable(const DisassociateClientVpnTargetNetworkRequest& request) const
{
  std::shared_ptr<DisassociateClientVpnTargetNetworkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateClientVpnTargetNetworkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateClientVpnTargetNetwork(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateClientVpnTargetNetworkAsync(const DisassociateClientVpnTargetNetworkRequest& request, const DisassociateClientVpnTargetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateClientVpnTargetNetworkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateClientVpnTargetNetwork(*pRequest), context);
    } );
}
DisassociateEnclaveCertificateIamRoleOutcome EC2Client::DisassociateEnclaveCertificateIamRole(const DisassociateEnclaveCertificateIamRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateEnclaveCertificateIamRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateEnclaveCertificateIamRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateEnclaveCertificateIamRoleOutcomeCallable EC2Client::DisassociateEnclaveCertificateIamRoleCallable(const DisassociateEnclaveCertificateIamRoleRequest& request) const
{
  std::shared_ptr<DisassociateEnclaveCertificateIamRoleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateEnclaveCertificateIamRoleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateEnclaveCertificateIamRole(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateEnclaveCertificateIamRoleAsync(const DisassociateEnclaveCertificateIamRoleRequest& request, const DisassociateEnclaveCertificateIamRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateEnclaveCertificateIamRoleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateEnclaveCertificateIamRole(*pRequest), context);
    } );
}
DisassociateIamInstanceProfileOutcome EC2Client::DisassociateIamInstanceProfile(const DisassociateIamInstanceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateIamInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateIamInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateIamInstanceProfileOutcomeCallable EC2Client::DisassociateIamInstanceProfileCallable(const DisassociateIamInstanceProfileRequest& request) const
{
  std::shared_ptr<DisassociateIamInstanceProfileRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateIamInstanceProfileOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateIamInstanceProfile(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateIamInstanceProfileAsync(const DisassociateIamInstanceProfileRequest& request, const DisassociateIamInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateIamInstanceProfileRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateIamInstanceProfile(*pRequest), context);
    } );
}
DisassociateInstanceEventWindowOutcome EC2Client::DisassociateInstanceEventWindow(const DisassociateInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateInstanceEventWindowOutcomeCallable EC2Client::DisassociateInstanceEventWindowCallable(const DisassociateInstanceEventWindowRequest& request) const
{
  std::shared_ptr<DisassociateInstanceEventWindowRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateInstanceEventWindowOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateInstanceEventWindow(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateInstanceEventWindowAsync(const DisassociateInstanceEventWindowRequest& request, const DisassociateInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateInstanceEventWindowRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateInstanceEventWindow(*pRequest), context);
    } );
}
DisassociateRouteTableOutcome EC2Client::DisassociateRouteTable(const DisassociateRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateRouteTableOutcomeCallable EC2Client::DisassociateRouteTableCallable(const DisassociateRouteTableRequest& request) const
{
  std::shared_ptr<DisassociateRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateRouteTableAsync(const DisassociateRouteTableRequest& request, const DisassociateRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateRouteTable(*pRequest), context);
    } );
}
DisassociateSubnetCidrBlockOutcome EC2Client::DisassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSubnetCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateSubnetCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateSubnetCidrBlockOutcomeCallable EC2Client::DisassociateSubnetCidrBlockCallable(const DisassociateSubnetCidrBlockRequest& request) const
{
  std::shared_ptr<DisassociateSubnetCidrBlockRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSubnetCidrBlockOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateSubnetCidrBlock(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateSubnetCidrBlockAsync(const DisassociateSubnetCidrBlockRequest& request, const DisassociateSubnetCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateSubnetCidrBlockRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateSubnetCidrBlock(*pRequest), context);
    } );
}
DisassociateTransitGatewayMulticastDomainOutcome EC2Client::DisassociateTransitGatewayMulticastDomain(const DisassociateTransitGatewayMulticastDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTransitGatewayMulticastDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTransitGatewayMulticastDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTransitGatewayMulticastDomainOutcomeCallable EC2Client::DisassociateTransitGatewayMulticastDomainCallable(const DisassociateTransitGatewayMulticastDomainRequest& request) const
{
  std::shared_ptr<DisassociateTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTransitGatewayMulticastDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateTransitGatewayMulticastDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateTransitGatewayMulticastDomainAsync(const DisassociateTransitGatewayMulticastDomainRequest& request, const DisassociateTransitGatewayMulticastDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateTransitGatewayMulticastDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateTransitGatewayMulticastDomain(*pRequest), context);
    } );
}
DisassociateTransitGatewayPolicyTableOutcome EC2Client::DisassociateTransitGatewayPolicyTable(const DisassociateTransitGatewayPolicyTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTransitGatewayPolicyTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTransitGatewayPolicyTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTransitGatewayPolicyTableOutcomeCallable EC2Client::DisassociateTransitGatewayPolicyTableCallable(const DisassociateTransitGatewayPolicyTableRequest& request) const
{
  std::shared_ptr<DisassociateTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTransitGatewayPolicyTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateTransitGatewayPolicyTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateTransitGatewayPolicyTableAsync(const DisassociateTransitGatewayPolicyTableRequest& request, const DisassociateTransitGatewayPolicyTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateTransitGatewayPolicyTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateTransitGatewayPolicyTable(*pRequest), context);
    } );
}
DisassociateTransitGatewayRouteTableOutcome EC2Client::DisassociateTransitGatewayRouteTable(const DisassociateTransitGatewayRouteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTransitGatewayRouteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTransitGatewayRouteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTransitGatewayRouteTableOutcomeCallable EC2Client::DisassociateTransitGatewayRouteTableCallable(const DisassociateTransitGatewayRouteTableRequest& request) const
{
  std::shared_ptr<DisassociateTransitGatewayRouteTableRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTransitGatewayRouteTableOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateTransitGatewayRouteTable(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateTransitGatewayRouteTableAsync(const DisassociateTransitGatewayRouteTableRequest& request, const DisassociateTransitGatewayRouteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateTransitGatewayRouteTableRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateTransitGatewayRouteTable(*pRequest), context);
    } );
}
DisassociateTrunkInterfaceOutcome EC2Client::DisassociateTrunkInterface(const DisassociateTrunkInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTrunkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTrunkInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateTrunkInterfaceOutcomeCallable EC2Client::DisassociateTrunkInterfaceCallable(const DisassociateTrunkInterfaceRequest& request) const
{
  std::shared_ptr<DisassociateTrunkInterfaceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrunkInterfaceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateTrunkInterface(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateTrunkInterfaceAsync(const DisassociateTrunkInterfaceRequest& request, const DisassociateTrunkInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateTrunkInterfaceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateTrunkInterface(*pRequest), context);
    } );
}
DisassociateVpcCidrBlockOutcome EC2Client::DisassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateVpcCidrBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateVpcCidrBlockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateVpcCidrBlockOutcomeCallable EC2Client::DisassociateVpcCidrBlockCallable(const DisassociateVpcCidrBlockRequest& request) const
{
  std::shared_ptr<DisassociateVpcCidrBlockRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DisassociateVpcCidrBlockOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DisassociateVpcCidrBlock(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::DisassociateVpcCidrBlockAsync(const DisassociateVpcCidrBlockRequest& request, const DisassociateVpcCidrBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DisassociateVpcCidrBlockRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DisassociateVpcCidrBlock(*pRequest), context);
    } );
}
EnableAddressTransferOutcome EC2Client::EnableAddressTransfer(const EnableAddressTransferRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAddressTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAddressTransferOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableAddressTransferOutcomeCallable EC2Client::EnableAddressTransferCallable(const EnableAddressTransferRequest& request) const
{
  std::shared_ptr<EnableAddressTransferRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableAddressTransferOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableAddressTransfer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableAddressTransferAsync(const EnableAddressTransferRequest& request, const EnableAddressTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableAddressTransferRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableAddressTransfer(*pRequest), context);
    } );
}
EnableEbsEncryptionByDefaultOutcome EC2Client::EnableEbsEncryptionByDefault(const EnableEbsEncryptionByDefaultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableEbsEncryptionByDefaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableEbsEncryptionByDefaultOutcomeCallable EC2Client::EnableEbsEncryptionByDefaultCallable(const EnableEbsEncryptionByDefaultRequest& request) const
{
  std::shared_ptr<EnableEbsEncryptionByDefaultRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableEbsEncryptionByDefaultOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableEbsEncryptionByDefault(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableEbsEncryptionByDefaultAsync(const EnableEbsEncryptionByDefaultRequest& request, const EnableEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableEbsEncryptionByDefaultRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableEbsEncryptionByDefault(*pRequest), context);
    } );
}
EnableFastLaunchOutcome EC2Client::EnableFastLaunch(const EnableFastLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableFastLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableFastLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableFastLaunchOutcomeCallable EC2Client::EnableFastLaunchCallable(const EnableFastLaunchRequest& request) const
{
  std::shared_ptr<EnableFastLaunchRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableFastLaunchOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableFastLaunch(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableFastLaunchAsync(const EnableFastLaunchRequest& request, const EnableFastLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableFastLaunchRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableFastLaunch(*pRequest), context);
    } );
}
EnableFastSnapshotRestoresOutcome EC2Client::EnableFastSnapshotRestores(const EnableFastSnapshotRestoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableFastSnapshotRestores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableFastSnapshotRestoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableFastSnapshotRestoresOutcomeCallable EC2Client::EnableFastSnapshotRestoresCallable(const EnableFastSnapshotRestoresRequest& request) const
{
  std::shared_ptr<EnableFastSnapshotRestoresRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableFastSnapshotRestoresOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableFastSnapshotRestores(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableFastSnapshotRestoresAsync(const EnableFastSnapshotRestoresRequest& request, const EnableFastSnapshotRestoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableFastSnapshotRestoresRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableFastSnapshotRestores(*pRequest), context);
    } );
}
EnableImageDeprecationOutcome EC2Client::EnableImageDeprecation(const EnableImageDeprecationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableImageDeprecation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableImageDeprecationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableImageDeprecationOutcomeCallable EC2Client::EnableImageDeprecationCallable(const EnableImageDeprecationRequest& request) const
{
  std::shared_ptr<EnableImageDeprecationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableImageDeprecationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableImageDeprecation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableImageDeprecationAsync(const EnableImageDeprecationRequest& request, const EnableImageDeprecationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableImageDeprecationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableImageDeprecation(*pRequest), context);
    } );
}
EnableIpamOrganizationAdminAccountOutcome EC2Client::EnableIpamOrganizationAdminAccount(const EnableIpamOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableIpamOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableIpamOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableIpamOrganizationAdminAccountOutcomeCallable EC2Client::EnableIpamOrganizationAdminAccountCallable(const EnableIpamOrganizationAdminAccountRequest& request) const
{
  std::shared_ptr<EnableIpamOrganizationAdminAccountRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableIpamOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableIpamOrganizationAdminAccount(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableIpamOrganizationAdminAccountAsync(const EnableIpamOrganizationAdminAccountRequest& request, const EnableIpamOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableIpamOrganizationAdminAccountRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableIpamOrganizationAdminAccount(*pRequest), context);
    } );
}
EnableSerialConsoleAccessOutcome EC2Client::EnableSerialConsoleAccess(const EnableSerialConsoleAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableSerialConsoleAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableSerialConsoleAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableSerialConsoleAccessOutcomeCallable EC2Client::EnableSerialConsoleAccessCallable(const EnableSerialConsoleAccessRequest& request) const
{
  std::shared_ptr<EnableSerialConsoleAccessRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableSerialConsoleAccessOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableSerialConsoleAccess(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableSerialConsoleAccessAsync(const EnableSerialConsoleAccessRequest& request, const EnableSerialConsoleAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableSerialConsoleAccessRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableSerialConsoleAccess(*pRequest), context);
    } );
}
EnableTransitGatewayRouteTablePropagationOutcome EC2Client::EnableTransitGatewayRouteTablePropagation(const EnableTransitGatewayRouteTablePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableTransitGatewayRouteTablePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableTransitGatewayRouteTablePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableTransitGatewayRouteTablePropagationOutcomeCallable EC2Client::EnableTransitGatewayRouteTablePropagationCallable(const EnableTransitGatewayRouteTablePropagationRequest& request) const
{
  std::shared_ptr<EnableTransitGatewayRouteTablePropagationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableTransitGatewayRouteTablePropagationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableTransitGatewayRouteTablePropagation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableTransitGatewayRouteTablePropagationAsync(const EnableTransitGatewayRouteTablePropagationRequest& request, const EnableTransitGatewayRouteTablePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableTransitGatewayRouteTablePropagationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableTransitGatewayRouteTablePropagation(*pRequest), context);
    } );
}
EnableVgwRoutePropagationOutcome EC2Client::EnableVgwRoutePropagation(const EnableVgwRoutePropagationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVgwRoutePropagation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVgwRoutePropagationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVgwRoutePropagationOutcomeCallable EC2Client::EnableVgwRoutePropagationCallable(const EnableVgwRoutePropagationRequest& request) const
{
  std::shared_ptr<EnableVgwRoutePropagationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableVgwRoutePropagationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableVgwRoutePropagation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableVgwRoutePropagationAsync(const EnableVgwRoutePropagationRequest& request, const EnableVgwRoutePropagationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableVgwRoutePropagationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableVgwRoutePropagation(*pRequest), context);
    } );
}
EnableVolumeIOOutcome EC2Client::EnableVolumeIO(const EnableVolumeIORequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVolumeIO, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVolumeIO, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVolumeIOOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVolumeIOOutcomeCallable EC2Client::EnableVolumeIOCallable(const EnableVolumeIORequest& request) const
{
  std::shared_ptr<EnableVolumeIORequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableVolumeIOOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableVolumeIO(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableVolumeIOAsync(const EnableVolumeIORequest& request, const EnableVolumeIOResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableVolumeIORequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableVolumeIO(*pRequest), context);
    } );
}
EnableVpcClassicLinkOutcome EC2Client::EnableVpcClassicLink(const EnableVpcClassicLinkRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVpcClassicLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVpcClassicLinkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVpcClassicLinkOutcomeCallable EC2Client::EnableVpcClassicLinkCallable(const EnableVpcClassicLinkRequest& request) const
{
  std::shared_ptr<EnableVpcClassicLinkRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableVpcClassicLinkOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableVpcClassicLink(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableVpcClassicLinkAsync(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableVpcClassicLinkRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableVpcClassicLink(*pRequest), context);
    } );
}
EnableVpcClassicLinkDnsSupportOutcome EC2Client::EnableVpcClassicLinkDnsSupport(const EnableVpcClassicLinkDnsSupportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableVpcClassicLinkDnsSupport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableVpcClassicLinkDnsSupportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableVpcClassicLinkDnsSupportOutcomeCallable EC2Client::EnableVpcClassicLinkDnsSupportCallable(const EnableVpcClassicLinkDnsSupportRequest& request) const
{
  std::shared_ptr<EnableVpcClassicLinkDnsSupportRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< EnableVpcClassicLinkDnsSupportOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->EnableVpcClassicLinkDnsSupport(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::EnableVpcClassicLinkDnsSupportAsync(const EnableVpcClassicLinkDnsSupportRequest& request, const EnableVpcClassicLinkDnsSupportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<EnableVpcClassicLinkDnsSupportRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, EnableVpcClassicLinkDnsSupport(*pRequest), context);
    } );
}
ExportClientVpnClientCertificateRevocationListOutcome EC2Client::ExportClientVpnClientCertificateRevocationList(const ExportClientVpnClientCertificateRevocationListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportClientVpnClientCertificateRevocationListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportClientVpnClientCertificateRevocationListOutcomeCallable EC2Client::ExportClientVpnClientCertificateRevocationListCallable(const ExportClientVpnClientCertificateRevocationListRequest& request) const
{
  std::shared_ptr<ExportClientVpnClientCertificateRevocationListRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ExportClientVpnClientCertificateRevocationListOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ExportClientVpnClientCertificateRevocationList(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ExportClientVpnClientCertificateRevocationListAsync(const ExportClientVpnClientCertificateRevocationListRequest& request, const ExportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ExportClientVpnClientCertificateRevocationListRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ExportClientVpnClientCertificateRevocationList(*pRequest), context);
    } );
}
ExportClientVpnClientConfigurationOutcome EC2Client::ExportClientVpnClientConfiguration(const ExportClientVpnClientConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportClientVpnClientConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportClientVpnClientConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportClientVpnClientConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportClientVpnClientConfigurationOutcomeCallable EC2Client::ExportClientVpnClientConfigurationCallable(const ExportClientVpnClientConfigurationRequest& request) const
{
  std::shared_ptr<ExportClientVpnClientConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ExportClientVpnClientConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ExportClientVpnClientConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ExportClientVpnClientConfigurationAsync(const ExportClientVpnClientConfigurationRequest& request, const ExportClientVpnClientConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ExportClientVpnClientConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ExportClientVpnClientConfiguration(*pRequest), context);
    } );
}
ExportImageOutcome EC2Client::ExportImage(const ExportImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportImageOutcomeCallable EC2Client::ExportImageCallable(const ExportImageRequest& request) const
{
  std::shared_ptr<ExportImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ExportImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ExportImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ExportImageAsync(const ExportImageRequest& request, const ExportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ExportImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ExportImage(*pRequest), context);
    } );
}
ExportTransitGatewayRoutesOutcome EC2Client::ExportTransitGatewayRoutes(const ExportTransitGatewayRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportTransitGatewayRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ExportTransitGatewayRoutesOutcomeCallable EC2Client::ExportTransitGatewayRoutesCallable(const ExportTransitGatewayRoutesRequest& request) const
{
  std::shared_ptr<ExportTransitGatewayRoutesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ExportTransitGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ExportTransitGatewayRoutes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ExportTransitGatewayRoutesAsync(const ExportTransitGatewayRoutesRequest& request, const ExportTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ExportTransitGatewayRoutesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ExportTransitGatewayRoutes(*pRequest), context);
    } );
}
GetAssociatedEnclaveCertificateIamRolesOutcome EC2Client::GetAssociatedEnclaveCertificateIamRoles(const GetAssociatedEnclaveCertificateIamRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociatedEnclaveCertificateIamRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociatedEnclaveCertificateIamRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAssociatedEnclaveCertificateIamRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAssociatedEnclaveCertificateIamRolesOutcomeCallable EC2Client::GetAssociatedEnclaveCertificateIamRolesCallable(const GetAssociatedEnclaveCertificateIamRolesRequest& request) const
{
  std::shared_ptr<GetAssociatedEnclaveCertificateIamRolesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAssociatedEnclaveCertificateIamRolesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAssociatedEnclaveCertificateIamRoles(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetAssociatedEnclaveCertificateIamRolesAsync(const GetAssociatedEnclaveCertificateIamRolesRequest& request, const GetAssociatedEnclaveCertificateIamRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAssociatedEnclaveCertificateIamRolesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAssociatedEnclaveCertificateIamRoles(*pRequest), context);
    } );
}
GetAssociatedIpv6PoolCidrsOutcome EC2Client::GetAssociatedIpv6PoolCidrs(const GetAssociatedIpv6PoolCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociatedIpv6PoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociatedIpv6PoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAssociatedIpv6PoolCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAssociatedIpv6PoolCidrsOutcomeCallable EC2Client::GetAssociatedIpv6PoolCidrsCallable(const GetAssociatedIpv6PoolCidrsRequest& request) const
{
  std::shared_ptr<GetAssociatedIpv6PoolCidrsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetAssociatedIpv6PoolCidrsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetAssociatedIpv6PoolCidrs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetAssociatedIpv6PoolCidrsAsync(const GetAssociatedIpv6PoolCidrsRequest& request, const GetAssociatedIpv6PoolCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetAssociatedIpv6PoolCidrsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetAssociatedIpv6PoolCidrs(*pRequest), context);
    } );
}
GetCapacityReservationUsageOutcome EC2Client::GetCapacityReservationUsage(const GetCapacityReservationUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCapacityReservationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCapacityReservationUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCapacityReservationUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetCapacityReservationUsageOutcomeCallable EC2Client::GetCapacityReservationUsageCallable(const GetCapacityReservationUsageRequest& request) const
{
  std::shared_ptr<GetCapacityReservationUsageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCapacityReservationUsageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCapacityReservationUsage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetCapacityReservationUsageAsync(const GetCapacityReservationUsageRequest& request, const GetCapacityReservationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCapacityReservationUsageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCapacityReservationUsage(*pRequest), context);
    } );
}
GetCoipPoolUsageOutcome EC2Client::GetCoipPoolUsage(const GetCoipPoolUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCoipPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCoipPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCoipPoolUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetCoipPoolUsageOutcomeCallable EC2Client::GetCoipPoolUsageCallable(const GetCoipPoolUsageRequest& request) const
{
  std::shared_ptr<GetCoipPoolUsageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCoipPoolUsageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCoipPoolUsage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetCoipPoolUsageAsync(const GetCoipPoolUsageRequest& request, const GetCoipPoolUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCoipPoolUsageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCoipPoolUsage(*pRequest), context);
    } );
}
GetConsoleOutputOutcome EC2Client::GetConsoleOutput(const GetConsoleOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConsoleOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConsoleOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConsoleOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetConsoleOutputOutcomeCallable EC2Client::GetConsoleOutputCallable(const GetConsoleOutputRequest& request) const
{
  std::shared_ptr<GetConsoleOutputRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetConsoleOutputOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetConsoleOutput(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetConsoleOutputAsync(const GetConsoleOutputRequest& request, const GetConsoleOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetConsoleOutputRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetConsoleOutput(*pRequest), context);
    } );
}
GetConsoleScreenshotOutcome EC2Client::GetConsoleScreenshot(const GetConsoleScreenshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConsoleScreenshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConsoleScreenshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConsoleScreenshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetConsoleScreenshotOutcomeCallable EC2Client::GetConsoleScreenshotCallable(const GetConsoleScreenshotRequest& request) const
{
  std::shared_ptr<GetConsoleScreenshotRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetConsoleScreenshotOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetConsoleScreenshot(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetConsoleScreenshotAsync(const GetConsoleScreenshotRequest& request, const GetConsoleScreenshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetConsoleScreenshotRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetConsoleScreenshot(*pRequest), context);
    } );
}
GetDefaultCreditSpecificationOutcome EC2Client::GetDefaultCreditSpecification(const GetDefaultCreditSpecificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDefaultCreditSpecificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetDefaultCreditSpecificationOutcomeCallable EC2Client::GetDefaultCreditSpecificationCallable(const GetDefaultCreditSpecificationRequest& request) const
{
  std::shared_ptr<GetDefaultCreditSpecificationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetDefaultCreditSpecificationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetDefaultCreditSpecification(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetDefaultCreditSpecificationAsync(const GetDefaultCreditSpecificationRequest& request, const GetDefaultCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetDefaultCreditSpecificationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetDefaultCreditSpecification(*pRequest), context);
    } );
}
GetEbsDefaultKmsKeyIdOutcome EC2Client::GetEbsDefaultKmsKeyId(const GetEbsDefaultKmsKeyIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEbsDefaultKmsKeyIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetEbsDefaultKmsKeyIdOutcomeCallable EC2Client::GetEbsDefaultKmsKeyIdCallable(const GetEbsDefaultKmsKeyIdRequest& request) const
{
  std::shared_ptr<GetEbsDefaultKmsKeyIdRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEbsDefaultKmsKeyIdOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEbsDefaultKmsKeyId(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetEbsDefaultKmsKeyIdAsync(const GetEbsDefaultKmsKeyIdRequest& request, const GetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEbsDefaultKmsKeyIdRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEbsDefaultKmsKeyId(*pRequest), context);
    } );
}
GetEbsEncryptionByDefaultOutcome EC2Client::GetEbsEncryptionByDefault(const GetEbsEncryptionByDefaultRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEbsEncryptionByDefault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEbsEncryptionByDefaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetEbsEncryptionByDefaultOutcomeCallable EC2Client::GetEbsEncryptionByDefaultCallable(const GetEbsEncryptionByDefaultRequest& request) const
{
  std::shared_ptr<GetEbsEncryptionByDefaultRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetEbsEncryptionByDefaultOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetEbsEncryptionByDefault(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetEbsEncryptionByDefaultAsync(const GetEbsEncryptionByDefaultRequest& request, const GetEbsEncryptionByDefaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetEbsEncryptionByDefaultRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetEbsEncryptionByDefault(*pRequest), context);
    } );
}
GetFlowLogsIntegrationTemplateOutcome EC2Client::GetFlowLogsIntegrationTemplate(const GetFlowLogsIntegrationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFlowLogsIntegrationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFlowLogsIntegrationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFlowLogsIntegrationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetFlowLogsIntegrationTemplateOutcomeCallable EC2Client::GetFlowLogsIntegrationTemplateCallable(const GetFlowLogsIntegrationTemplateRequest& request) const
{
  std::shared_ptr<GetFlowLogsIntegrationTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetFlowLogsIntegrationTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetFlowLogsIntegrationTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetFlowLogsIntegrationTemplateAsync(const GetFlowLogsIntegrationTemplateRequest& request, const GetFlowLogsIntegrationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetFlowLogsIntegrationTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetFlowLogsIntegrationTemplate(*pRequest), context);
    } );
}
GetGroupsForCapacityReservationOutcome EC2Client::GetGroupsForCapacityReservation(const GetGroupsForCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroupsForCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroupsForCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGroupsForCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetGroupsForCapacityReservationOutcomeCallable EC2Client::GetGroupsForCapacityReservationCallable(const GetGroupsForCapacityReservationRequest& request) const
{
  std::shared_ptr<GetGroupsForCapacityReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetGroupsForCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetGroupsForCapacityReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetGroupsForCapacityReservationAsync(const GetGroupsForCapacityReservationRequest& request, const GetGroupsForCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetGroupsForCapacityReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetGroupsForCapacityReservation(*pRequest), context);
    } );
}
GetHostReservationPurchasePreviewOutcome EC2Client::GetHostReservationPurchasePreview(const GetHostReservationPurchasePreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHostReservationPurchasePreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHostReservationPurchasePreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetHostReservationPurchasePreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetHostReservationPurchasePreviewOutcomeCallable EC2Client::GetHostReservationPurchasePreviewCallable(const GetHostReservationPurchasePreviewRequest& request) const
{
  std::shared_ptr<GetHostReservationPurchasePreviewRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetHostReservationPurchasePreviewOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetHostReservationPurchasePreview(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetHostReservationPurchasePreviewAsync(const GetHostReservationPurchasePreviewRequest& request, const GetHostReservationPurchasePreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetHostReservationPurchasePreviewRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetHostReservationPurchasePreview(*pRequest), context);
    } );
}
GetInstanceTypesFromInstanceRequirementsOutcome EC2Client::GetInstanceTypesFromInstanceRequirements(const GetInstanceTypesFromInstanceRequirementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceTypesFromInstanceRequirements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceTypesFromInstanceRequirements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceTypesFromInstanceRequirementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetInstanceTypesFromInstanceRequirementsOutcomeCallable EC2Client::GetInstanceTypesFromInstanceRequirementsCallable(const GetInstanceTypesFromInstanceRequirementsRequest& request) const
{
  std::shared_ptr<GetInstanceTypesFromInstanceRequirementsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceTypesFromInstanceRequirementsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetInstanceTypesFromInstanceRequirements(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetInstanceTypesFromInstanceRequirementsAsync(const GetInstanceTypesFromInstanceRequirementsRequest& request, const GetInstanceTypesFromInstanceRequirementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetInstanceTypesFromInstanceRequirementsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetInstanceTypesFromInstanceRequirements(*pRequest), context);
    } );
}
GetInstanceUefiDataOutcome EC2Client::GetInstanceUefiData(const GetInstanceUefiDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceUefiData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceUefiData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceUefiDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetInstanceUefiDataOutcomeCallable EC2Client::GetInstanceUefiDataCallable(const GetInstanceUefiDataRequest& request) const
{
  std::shared_ptr<GetInstanceUefiDataRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceUefiDataOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetInstanceUefiData(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetInstanceUefiDataAsync(const GetInstanceUefiDataRequest& request, const GetInstanceUefiDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetInstanceUefiDataRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetInstanceUefiData(*pRequest), context);
    } );
}
GetIpamAddressHistoryOutcome EC2Client::GetIpamAddressHistory(const GetIpamAddressHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamAddressHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamAddressHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamAddressHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamAddressHistoryOutcomeCallable EC2Client::GetIpamAddressHistoryCallable(const GetIpamAddressHistoryRequest& request) const
{
  std::shared_ptr<GetIpamAddressHistoryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetIpamAddressHistoryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetIpamAddressHistory(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetIpamAddressHistoryAsync(const GetIpamAddressHistoryRequest& request, const GetIpamAddressHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetIpamAddressHistoryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetIpamAddressHistory(*pRequest), context);
    } );
}
GetIpamPoolAllocationsOutcome EC2Client::GetIpamPoolAllocations(const GetIpamPoolAllocationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamPoolAllocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamPoolAllocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamPoolAllocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamPoolAllocationsOutcomeCallable EC2Client::GetIpamPoolAllocationsCallable(const GetIpamPoolAllocationsRequest& request) const
{
  std::shared_ptr<GetIpamPoolAllocationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetIpamPoolAllocationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetIpamPoolAllocations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetIpamPoolAllocationsAsync(const GetIpamPoolAllocationsRequest& request, const GetIpamPoolAllocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetIpamPoolAllocationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetIpamPoolAllocations(*pRequest), context);
    } );
}
GetIpamPoolCidrsOutcome EC2Client::GetIpamPoolCidrs(const GetIpamPoolCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamPoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamPoolCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamPoolCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamPoolCidrsOutcomeCallable EC2Client::GetIpamPoolCidrsCallable(const GetIpamPoolCidrsRequest& request) const
{
  std::shared_ptr<GetIpamPoolCidrsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetIpamPoolCidrsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetIpamPoolCidrs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetIpamPoolCidrsAsync(const GetIpamPoolCidrsRequest& request, const GetIpamPoolCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetIpamPoolCidrsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetIpamPoolCidrs(*pRequest), context);
    } );
}
GetIpamResourceCidrsOutcome EC2Client::GetIpamResourceCidrs(const GetIpamResourceCidrsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpamResourceCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpamResourceCidrs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIpamResourceCidrsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetIpamResourceCidrsOutcomeCallable EC2Client::GetIpamResourceCidrsCallable(const GetIpamResourceCidrsRequest& request) const
{
  std::shared_ptr<GetIpamResourceCidrsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetIpamResourceCidrsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetIpamResourceCidrs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetIpamResourceCidrsAsync(const GetIpamResourceCidrsRequest& request, const GetIpamResourceCidrsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetIpamResourceCidrsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetIpamResourceCidrs(*pRequest), context);
    } );
}
GetLaunchTemplateDataOutcome EC2Client::GetLaunchTemplateData(const GetLaunchTemplateDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchTemplateData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchTemplateData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLaunchTemplateDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetLaunchTemplateDataOutcomeCallable EC2Client::GetLaunchTemplateDataCallable(const GetLaunchTemplateDataRequest& request) const
{
  std::shared_ptr<GetLaunchTemplateDataRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchTemplateDataOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetLaunchTemplateData(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetLaunchTemplateDataAsync(const GetLaunchTemplateDataRequest& request, const GetLaunchTemplateDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetLaunchTemplateDataRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetLaunchTemplateData(*pRequest), context);
    } );
}
GetManagedPrefixListAssociationsOutcome EC2Client::GetManagedPrefixListAssociations(const GetManagedPrefixListAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedPrefixListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedPrefixListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetManagedPrefixListAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetManagedPrefixListAssociationsOutcomeCallable EC2Client::GetManagedPrefixListAssociationsCallable(const GetManagedPrefixListAssociationsRequest& request) const
{
  std::shared_ptr<GetManagedPrefixListAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetManagedPrefixListAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetManagedPrefixListAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetManagedPrefixListAssociationsAsync(const GetManagedPrefixListAssociationsRequest& request, const GetManagedPrefixListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetManagedPrefixListAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetManagedPrefixListAssociations(*pRequest), context);
    } );
}
GetManagedPrefixListEntriesOutcome EC2Client::GetManagedPrefixListEntries(const GetManagedPrefixListEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetManagedPrefixListEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetManagedPrefixListEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetManagedPrefixListEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetManagedPrefixListEntriesOutcomeCallable EC2Client::GetManagedPrefixListEntriesCallable(const GetManagedPrefixListEntriesRequest& request) const
{
  std::shared_ptr<GetManagedPrefixListEntriesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetManagedPrefixListEntriesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetManagedPrefixListEntries(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetManagedPrefixListEntriesAsync(const GetManagedPrefixListEntriesRequest& request, const GetManagedPrefixListEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetManagedPrefixListEntriesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetManagedPrefixListEntries(*pRequest), context);
    } );
}
GetNetworkInsightsAccessScopeAnalysisFindingsOutcome EC2Client::GetNetworkInsightsAccessScopeAnalysisFindings(const GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkInsightsAccessScopeAnalysisFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkInsightsAccessScopeAnalysisFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNetworkInsightsAccessScopeAnalysisFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetNetworkInsightsAccessScopeAnalysisFindingsOutcomeCallable EC2Client::GetNetworkInsightsAccessScopeAnalysisFindingsCallable(const GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const
{
  std::shared_ptr<GetNetworkInsightsAccessScopeAnalysisFindingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkInsightsAccessScopeAnalysisFindingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetNetworkInsightsAccessScopeAnalysisFindings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetNetworkInsightsAccessScopeAnalysisFindingsAsync(const GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request, const GetNetworkInsightsAccessScopeAnalysisFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetNetworkInsightsAccessScopeAnalysisFindingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetNetworkInsightsAccessScopeAnalysisFindings(*pRequest), context);
    } );
}
GetNetworkInsightsAccessScopeContentOutcome EC2Client::GetNetworkInsightsAccessScopeContent(const GetNetworkInsightsAccessScopeContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkInsightsAccessScopeContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkInsightsAccessScopeContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNetworkInsightsAccessScopeContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetNetworkInsightsAccessScopeContentOutcomeCallable EC2Client::GetNetworkInsightsAccessScopeContentCallable(const GetNetworkInsightsAccessScopeContentRequest& request) const
{
  std::shared_ptr<GetNetworkInsightsAccessScopeContentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkInsightsAccessScopeContentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetNetworkInsightsAccessScopeContent(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetNetworkInsightsAccessScopeContentAsync(const GetNetworkInsightsAccessScopeContentRequest& request, const GetNetworkInsightsAccessScopeContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetNetworkInsightsAccessScopeContentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetNetworkInsightsAccessScopeContent(*pRequest), context);
    } );
}
GetPasswordDataOutcome EC2Client::GetPasswordData(const GetPasswordDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPasswordData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPasswordData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPasswordDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetPasswordDataOutcomeCallable EC2Client::GetPasswordDataCallable(const GetPasswordDataRequest& request) const
{
  std::shared_ptr<GetPasswordDataRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetPasswordDataOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetPasswordData(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetPasswordDataAsync(const GetPasswordDataRequest& request, const GetPasswordDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetPasswordDataRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetPasswordData(*pRequest), context);
    } );
}
GetReservedInstancesExchangeQuoteOutcome EC2Client::GetReservedInstancesExchangeQuote(const GetReservedInstancesExchangeQuoteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReservedInstancesExchangeQuote, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReservedInstancesExchangeQuoteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetReservedInstancesExchangeQuoteOutcomeCallable EC2Client::GetReservedInstancesExchangeQuoteCallable(const GetReservedInstancesExchangeQuoteRequest& request) const
{
  std::shared_ptr<GetReservedInstancesExchangeQuoteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetReservedInstancesExchangeQuoteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetReservedInstancesExchangeQuote(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetReservedInstancesExchangeQuoteAsync(const GetReservedInstancesExchangeQuoteRequest& request, const GetReservedInstancesExchangeQuoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetReservedInstancesExchangeQuoteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetReservedInstancesExchangeQuote(*pRequest), context);
    } );
}
GetSerialConsoleAccessStatusOutcome EC2Client::GetSerialConsoleAccessStatus(const GetSerialConsoleAccessStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSerialConsoleAccessStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSerialConsoleAccessStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSerialConsoleAccessStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSerialConsoleAccessStatusOutcomeCallable EC2Client::GetSerialConsoleAccessStatusCallable(const GetSerialConsoleAccessStatusRequest& request) const
{
  std::shared_ptr<GetSerialConsoleAccessStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetSerialConsoleAccessStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetSerialConsoleAccessStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetSerialConsoleAccessStatusAsync(const GetSerialConsoleAccessStatusRequest& request, const GetSerialConsoleAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetSerialConsoleAccessStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetSerialConsoleAccessStatus(*pRequest), context);
    } );
}
GetSpotPlacementScoresOutcome EC2Client::GetSpotPlacementScores(const GetSpotPlacementScoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSpotPlacementScores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSpotPlacementScores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSpotPlacementScoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSpotPlacementScoresOutcomeCallable EC2Client::GetSpotPlacementScoresCallable(const GetSpotPlacementScoresRequest& request) const
{
  std::shared_ptr<GetSpotPlacementScoresRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetSpotPlacementScoresOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetSpotPlacementScores(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetSpotPlacementScoresAsync(const GetSpotPlacementScoresRequest& request, const GetSpotPlacementScoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetSpotPlacementScoresRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetSpotPlacementScores(*pRequest), context);
    } );
}
GetSubnetCidrReservationsOutcome EC2Client::GetSubnetCidrReservations(const GetSubnetCidrReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubnetCidrReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubnetCidrReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSubnetCidrReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSubnetCidrReservationsOutcomeCallable EC2Client::GetSubnetCidrReservationsCallable(const GetSubnetCidrReservationsRequest& request) const
{
  std::shared_ptr<GetSubnetCidrReservationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetSubnetCidrReservationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetSubnetCidrReservations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetSubnetCidrReservationsAsync(const GetSubnetCidrReservationsRequest& request, const GetSubnetCidrReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetSubnetCidrReservationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetSubnetCidrReservations(*pRequest), context);
    } );
}
GetTransitGatewayAttachmentPropagationsOutcome EC2Client::GetTransitGatewayAttachmentPropagations(const GetTransitGatewayAttachmentPropagationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayAttachmentPropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayAttachmentPropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayAttachmentPropagationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayAttachmentPropagationsOutcomeCallable EC2Client::GetTransitGatewayAttachmentPropagationsCallable(const GetTransitGatewayAttachmentPropagationsRequest& request) const
{
  std::shared_ptr<GetTransitGatewayAttachmentPropagationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayAttachmentPropagationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayAttachmentPropagations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayAttachmentPropagationsAsync(const GetTransitGatewayAttachmentPropagationsRequest& request, const GetTransitGatewayAttachmentPropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayAttachmentPropagationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayAttachmentPropagations(*pRequest), context);
    } );
}
GetTransitGatewayMulticastDomainAssociationsOutcome EC2Client::GetTransitGatewayMulticastDomainAssociations(const GetTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayMulticastDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayMulticastDomainAssociationsOutcomeCallable EC2Client::GetTransitGatewayMulticastDomainAssociationsCallable(const GetTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  std::shared_ptr<GetTransitGatewayMulticastDomainAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayMulticastDomainAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayMulticastDomainAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayMulticastDomainAssociationsAsync(const GetTransitGatewayMulticastDomainAssociationsRequest& request, const GetTransitGatewayMulticastDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayMulticastDomainAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayMulticastDomainAssociations(*pRequest), context);
    } );
}
GetTransitGatewayPolicyTableAssociationsOutcome EC2Client::GetTransitGatewayPolicyTableAssociations(const GetTransitGatewayPolicyTableAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayPolicyTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayPolicyTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayPolicyTableAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayPolicyTableAssociationsOutcomeCallable EC2Client::GetTransitGatewayPolicyTableAssociationsCallable(const GetTransitGatewayPolicyTableAssociationsRequest& request) const
{
  std::shared_ptr<GetTransitGatewayPolicyTableAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayPolicyTableAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayPolicyTableAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayPolicyTableAssociationsAsync(const GetTransitGatewayPolicyTableAssociationsRequest& request, const GetTransitGatewayPolicyTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayPolicyTableAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayPolicyTableAssociations(*pRequest), context);
    } );
}
GetTransitGatewayPolicyTableEntriesOutcome EC2Client::GetTransitGatewayPolicyTableEntries(const GetTransitGatewayPolicyTableEntriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayPolicyTableEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayPolicyTableEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayPolicyTableEntriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayPolicyTableEntriesOutcomeCallable EC2Client::GetTransitGatewayPolicyTableEntriesCallable(const GetTransitGatewayPolicyTableEntriesRequest& request) const
{
  std::shared_ptr<GetTransitGatewayPolicyTableEntriesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayPolicyTableEntriesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayPolicyTableEntries(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayPolicyTableEntriesAsync(const GetTransitGatewayPolicyTableEntriesRequest& request, const GetTransitGatewayPolicyTableEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayPolicyTableEntriesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayPolicyTableEntries(*pRequest), context);
    } );
}
GetTransitGatewayPrefixListReferencesOutcome EC2Client::GetTransitGatewayPrefixListReferences(const GetTransitGatewayPrefixListReferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayPrefixListReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayPrefixListReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayPrefixListReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayPrefixListReferencesOutcomeCallable EC2Client::GetTransitGatewayPrefixListReferencesCallable(const GetTransitGatewayPrefixListReferencesRequest& request) const
{
  std::shared_ptr<GetTransitGatewayPrefixListReferencesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayPrefixListReferencesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayPrefixListReferences(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayPrefixListReferencesAsync(const GetTransitGatewayPrefixListReferencesRequest& request, const GetTransitGatewayPrefixListReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayPrefixListReferencesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayPrefixListReferences(*pRequest), context);
    } );
}
GetTransitGatewayRouteTableAssociationsOutcome EC2Client::GetTransitGatewayRouteTableAssociations(const GetTransitGatewayRouteTableAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayRouteTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayRouteTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayRouteTableAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayRouteTableAssociationsOutcomeCallable EC2Client::GetTransitGatewayRouteTableAssociationsCallable(const GetTransitGatewayRouteTableAssociationsRequest& request) const
{
  std::shared_ptr<GetTransitGatewayRouteTableAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayRouteTableAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayRouteTableAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayRouteTableAssociationsAsync(const GetTransitGatewayRouteTableAssociationsRequest& request, const GetTransitGatewayRouteTableAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayRouteTableAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayRouteTableAssociations(*pRequest), context);
    } );
}
GetTransitGatewayRouteTablePropagationsOutcome EC2Client::GetTransitGatewayRouteTablePropagations(const GetTransitGatewayRouteTablePropagationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTransitGatewayRouteTablePropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTransitGatewayRouteTablePropagations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTransitGatewayRouteTablePropagationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetTransitGatewayRouteTablePropagationsOutcomeCallable EC2Client::GetTransitGatewayRouteTablePropagationsCallable(const GetTransitGatewayRouteTablePropagationsRequest& request) const
{
  std::shared_ptr<GetTransitGatewayRouteTablePropagationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetTransitGatewayRouteTablePropagationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetTransitGatewayRouteTablePropagations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetTransitGatewayRouteTablePropagationsAsync(const GetTransitGatewayRouteTablePropagationsRequest& request, const GetTransitGatewayRouteTablePropagationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetTransitGatewayRouteTablePropagationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetTransitGatewayRouteTablePropagations(*pRequest), context);
    } );
}
GetVpnConnectionDeviceSampleConfigurationOutcome EC2Client::GetVpnConnectionDeviceSampleConfiguration(const GetVpnConnectionDeviceSampleConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpnConnectionDeviceSampleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpnConnectionDeviceSampleConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVpnConnectionDeviceSampleConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVpnConnectionDeviceSampleConfigurationOutcomeCallable EC2Client::GetVpnConnectionDeviceSampleConfigurationCallable(const GetVpnConnectionDeviceSampleConfigurationRequest& request) const
{
  std::shared_ptr<GetVpnConnectionDeviceSampleConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetVpnConnectionDeviceSampleConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetVpnConnectionDeviceSampleConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetVpnConnectionDeviceSampleConfigurationAsync(const GetVpnConnectionDeviceSampleConfigurationRequest& request, const GetVpnConnectionDeviceSampleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetVpnConnectionDeviceSampleConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetVpnConnectionDeviceSampleConfiguration(*pRequest), context);
    } );
}
GetVpnConnectionDeviceTypesOutcome EC2Client::GetVpnConnectionDeviceTypes(const GetVpnConnectionDeviceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVpnConnectionDeviceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVpnConnectionDeviceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVpnConnectionDeviceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetVpnConnectionDeviceTypesOutcomeCallable EC2Client::GetVpnConnectionDeviceTypesCallable(const GetVpnConnectionDeviceTypesRequest& request) const
{
  std::shared_ptr<GetVpnConnectionDeviceTypesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetVpnConnectionDeviceTypesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetVpnConnectionDeviceTypes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::GetVpnConnectionDeviceTypesAsync(const GetVpnConnectionDeviceTypesRequest& request, const GetVpnConnectionDeviceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetVpnConnectionDeviceTypesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetVpnConnectionDeviceTypes(*pRequest), context);
    } );
}
ImportClientVpnClientCertificateRevocationListOutcome EC2Client::ImportClientVpnClientCertificateRevocationList(const ImportClientVpnClientCertificateRevocationListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportClientVpnClientCertificateRevocationList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportClientVpnClientCertificateRevocationListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportClientVpnClientCertificateRevocationListOutcomeCallable EC2Client::ImportClientVpnClientCertificateRevocationListCallable(const ImportClientVpnClientCertificateRevocationListRequest& request) const
{
  std::shared_ptr<ImportClientVpnClientCertificateRevocationListRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportClientVpnClientCertificateRevocationListOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportClientVpnClientCertificateRevocationList(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ImportClientVpnClientCertificateRevocationListAsync(const ImportClientVpnClientCertificateRevocationListRequest& request, const ImportClientVpnClientCertificateRevocationListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportClientVpnClientCertificateRevocationListRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportClientVpnClientCertificateRevocationList(*pRequest), context);
    } );
}
ImportImageOutcome EC2Client::ImportImage(const ImportImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportImageOutcomeCallable EC2Client::ImportImageCallable(const ImportImageRequest& request) const
{
  std::shared_ptr<ImportImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ImportImageAsync(const ImportImageRequest& request, const ImportImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportImage(*pRequest), context);
    } );
}
ImportInstanceOutcome EC2Client::ImportInstance(const ImportInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportInstanceOutcomeCallable EC2Client::ImportInstanceCallable(const ImportInstanceRequest& request) const
{
  std::shared_ptr<ImportInstanceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportInstanceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportInstance(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ImportInstanceAsync(const ImportInstanceRequest& request, const ImportInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportInstanceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportInstance(*pRequest), context);
    } );
}
ImportKeyPairOutcome EC2Client::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportKeyPairOutcomeCallable EC2Client::ImportKeyPairCallable(const ImportKeyPairRequest& request) const
{
  std::shared_ptr<ImportKeyPairRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportKeyPairOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportKeyPair(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportKeyPairRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportKeyPair(*pRequest), context);
    } );
}
ImportSnapshotOutcome EC2Client::ImportSnapshot(const ImportSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportSnapshotOutcomeCallable EC2Client::ImportSnapshotCallable(const ImportSnapshotRequest& request) const
{
  std::shared_ptr<ImportSnapshotRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportSnapshotOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportSnapshot(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ImportSnapshotAsync(const ImportSnapshotRequest& request, const ImportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportSnapshotRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportSnapshot(*pRequest), context);
    } );
}
ImportVolumeOutcome EC2Client::ImportVolume(const ImportVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ImportVolumeOutcomeCallable EC2Client::ImportVolumeCallable(const ImportVolumeRequest& request) const
{
  std::shared_ptr<ImportVolumeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ImportVolumeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ImportVolume(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ImportVolumeAsync(const ImportVolumeRequest& request, const ImportVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ImportVolumeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ImportVolume(*pRequest), context);
    } );
}
ListImagesInRecycleBinOutcome EC2Client::ListImagesInRecycleBin(const ListImagesInRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImagesInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImagesInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImagesInRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListImagesInRecycleBinOutcomeCallable EC2Client::ListImagesInRecycleBinCallable(const ListImagesInRecycleBinRequest& request) const
{
  std::shared_ptr<ListImagesInRecycleBinRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListImagesInRecycleBinOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListImagesInRecycleBin(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ListImagesInRecycleBinAsync(const ListImagesInRecycleBinRequest& request, const ListImagesInRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListImagesInRecycleBinRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListImagesInRecycleBin(*pRequest), context);
    } );
}
ListSnapshotsInRecycleBinOutcome EC2Client::ListSnapshotsInRecycleBin(const ListSnapshotsInRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSnapshotsInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSnapshotsInRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSnapshotsInRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListSnapshotsInRecycleBinOutcomeCallable EC2Client::ListSnapshotsInRecycleBinCallable(const ListSnapshotsInRecycleBinRequest& request) const
{
  std::shared_ptr<ListSnapshotsInRecycleBinRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListSnapshotsInRecycleBinOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListSnapshotsInRecycleBin(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ListSnapshotsInRecycleBinAsync(const ListSnapshotsInRecycleBinRequest& request, const ListSnapshotsInRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListSnapshotsInRecycleBinRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListSnapshotsInRecycleBin(*pRequest), context);
    } );
}
ModifyAddressAttributeOutcome EC2Client::ModifyAddressAttribute(const ModifyAddressAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAddressAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAddressAttributeOutcomeCallable EC2Client::ModifyAddressAttributeCallable(const ModifyAddressAttributeRequest& request) const
{
  std::shared_ptr<ModifyAddressAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyAddressAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyAddressAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyAddressAttributeAsync(const ModifyAddressAttributeRequest& request, const ModifyAddressAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyAddressAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyAddressAttribute(*pRequest), context);
    } );
}
ModifyAvailabilityZoneGroupOutcome EC2Client::ModifyAvailabilityZoneGroup(const ModifyAvailabilityZoneGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAvailabilityZoneGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAvailabilityZoneGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAvailabilityZoneGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAvailabilityZoneGroupOutcomeCallable EC2Client::ModifyAvailabilityZoneGroupCallable(const ModifyAvailabilityZoneGroupRequest& request) const
{
  std::shared_ptr<ModifyAvailabilityZoneGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyAvailabilityZoneGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyAvailabilityZoneGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyAvailabilityZoneGroupAsync(const ModifyAvailabilityZoneGroupRequest& request, const ModifyAvailabilityZoneGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyAvailabilityZoneGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyAvailabilityZoneGroup(*pRequest), context);
    } );
}
ModifyCapacityReservationOutcome EC2Client::ModifyCapacityReservation(const ModifyCapacityReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCapacityReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCapacityReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCapacityReservationOutcomeCallable EC2Client::ModifyCapacityReservationCallable(const ModifyCapacityReservationRequest& request) const
{
  std::shared_ptr<ModifyCapacityReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyCapacityReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyCapacityReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyCapacityReservationAsync(const ModifyCapacityReservationRequest& request, const ModifyCapacityReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyCapacityReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyCapacityReservation(*pRequest), context);
    } );
}
ModifyCapacityReservationFleetOutcome EC2Client::ModifyCapacityReservationFleet(const ModifyCapacityReservationFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCapacityReservationFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyCapacityReservationFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyCapacityReservationFleetOutcomeCallable EC2Client::ModifyCapacityReservationFleetCallable(const ModifyCapacityReservationFleetRequest& request) const
{
  std::shared_ptr<ModifyCapacityReservationFleetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyCapacityReservationFleetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyCapacityReservationFleet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyCapacityReservationFleetAsync(const ModifyCapacityReservationFleetRequest& request, const ModifyCapacityReservationFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyCapacityReservationFleetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyCapacityReservationFleet(*pRequest), context);
    } );
}
ModifyClientVpnEndpointOutcome EC2Client::ModifyClientVpnEndpoint(const ModifyClientVpnEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClientVpnEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClientVpnEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClientVpnEndpointOutcomeCallable EC2Client::ModifyClientVpnEndpointCallable(const ModifyClientVpnEndpointRequest& request) const
{
  std::shared_ptr<ModifyClientVpnEndpointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyClientVpnEndpointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyClientVpnEndpoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyClientVpnEndpointAsync(const ModifyClientVpnEndpointRequest& request, const ModifyClientVpnEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyClientVpnEndpointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyClientVpnEndpoint(*pRequest), context);
    } );
}
ModifyDefaultCreditSpecificationOutcome EC2Client::ModifyDefaultCreditSpecification(const ModifyDefaultCreditSpecificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyDefaultCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyDefaultCreditSpecificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyDefaultCreditSpecificationOutcomeCallable EC2Client::ModifyDefaultCreditSpecificationCallable(const ModifyDefaultCreditSpecificationRequest& request) const
{
  std::shared_ptr<ModifyDefaultCreditSpecificationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyDefaultCreditSpecificationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyDefaultCreditSpecification(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyDefaultCreditSpecificationAsync(const ModifyDefaultCreditSpecificationRequest& request, const ModifyDefaultCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyDefaultCreditSpecificationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyDefaultCreditSpecification(*pRequest), context);
    } );
}
ModifyEbsDefaultKmsKeyIdOutcome EC2Client::ModifyEbsDefaultKmsKeyId(const ModifyEbsDefaultKmsKeyIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEbsDefaultKmsKeyIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEbsDefaultKmsKeyIdOutcomeCallable EC2Client::ModifyEbsDefaultKmsKeyIdCallable(const ModifyEbsDefaultKmsKeyIdRequest& request) const
{
  std::shared_ptr<ModifyEbsDefaultKmsKeyIdRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyEbsDefaultKmsKeyIdOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyEbsDefaultKmsKeyId(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyEbsDefaultKmsKeyIdAsync(const ModifyEbsDefaultKmsKeyIdRequest& request, const ModifyEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyEbsDefaultKmsKeyIdRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyEbsDefaultKmsKeyId(*pRequest), context);
    } );
}
ModifyFleetOutcome EC2Client::ModifyFleet(const ModifyFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyFleetOutcomeCallable EC2Client::ModifyFleetCallable(const ModifyFleetRequest& request) const
{
  std::shared_ptr<ModifyFleetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyFleetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyFleet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyFleetAsync(const ModifyFleetRequest& request, const ModifyFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyFleetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyFleet(*pRequest), context);
    } );
}
ModifyFpgaImageAttributeOutcome EC2Client::ModifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyFpgaImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyFpgaImageAttributeOutcomeCallable EC2Client::ModifyFpgaImageAttributeCallable(const ModifyFpgaImageAttributeRequest& request) const
{
  std::shared_ptr<ModifyFpgaImageAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyFpgaImageAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyFpgaImageAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyFpgaImageAttributeAsync(const ModifyFpgaImageAttributeRequest& request, const ModifyFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyFpgaImageAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyFpgaImageAttribute(*pRequest), context);
    } );
}
ModifyHostsOutcome EC2Client::ModifyHosts(const ModifyHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyHostsOutcomeCallable EC2Client::ModifyHostsCallable(const ModifyHostsRequest& request) const
{
  std::shared_ptr<ModifyHostsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyHostsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyHosts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyHostsAsync(const ModifyHostsRequest& request, const ModifyHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyHostsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyHosts(*pRequest), context);
    } );
}
ModifyIdFormatOutcome EC2Client::ModifyIdFormat(const ModifyIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIdFormatOutcomeCallable EC2Client::ModifyIdFormatCallable(const ModifyIdFormatRequest& request) const
{
  std::shared_ptr<ModifyIdFormatRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyIdFormatOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyIdFormat(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyIdFormatAsync(const ModifyIdFormatRequest& request, const ModifyIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyIdFormatRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyIdFormat(*pRequest), context);
    } );
}
ModifyIdentityIdFormatOutcome EC2Client::ModifyIdentityIdFormat(const ModifyIdentityIdFormatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIdentityIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIdentityIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIdentityIdFormatOutcomeCallable EC2Client::ModifyIdentityIdFormatCallable(const ModifyIdentityIdFormatRequest& request) const
{
  std::shared_ptr<ModifyIdentityIdFormatRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyIdentityIdFormatOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyIdentityIdFormat(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyIdentityIdFormatAsync(const ModifyIdentityIdFormatRequest& request, const ModifyIdentityIdFormatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyIdentityIdFormatRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyIdentityIdFormat(*pRequest), context);
    } );
}
ModifyImageAttributeOutcome EC2Client::ModifyImageAttribute(const ModifyImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyImageAttributeOutcomeCallable EC2Client::ModifyImageAttributeCallable(const ModifyImageAttributeRequest& request) const
{
  std::shared_ptr<ModifyImageAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyImageAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyImageAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyImageAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyImageAttribute(*pRequest), context);
    } );
}
ModifyInstanceAttributeOutcome EC2Client::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceAttributeOutcomeCallable EC2Client::ModifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest& request) const
{
  std::shared_ptr<ModifyInstanceAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceAttribute(*pRequest), context);
    } );
}
ModifyInstanceCapacityReservationAttributesOutcome EC2Client::ModifyInstanceCapacityReservationAttributes(const ModifyInstanceCapacityReservationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceCapacityReservationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceCapacityReservationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceCapacityReservationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceCapacityReservationAttributesOutcomeCallable EC2Client::ModifyInstanceCapacityReservationAttributesCallable(const ModifyInstanceCapacityReservationAttributesRequest& request) const
{
  std::shared_ptr<ModifyInstanceCapacityReservationAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceCapacityReservationAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceCapacityReservationAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceCapacityReservationAttributesAsync(const ModifyInstanceCapacityReservationAttributesRequest& request, const ModifyInstanceCapacityReservationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceCapacityReservationAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceCapacityReservationAttributes(*pRequest), context);
    } );
}
ModifyInstanceCreditSpecificationOutcome EC2Client::ModifyInstanceCreditSpecification(const ModifyInstanceCreditSpecificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceCreditSpecification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceCreditSpecificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceCreditSpecificationOutcomeCallable EC2Client::ModifyInstanceCreditSpecificationCallable(const ModifyInstanceCreditSpecificationRequest& request) const
{
  std::shared_ptr<ModifyInstanceCreditSpecificationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceCreditSpecificationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceCreditSpecification(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceCreditSpecificationAsync(const ModifyInstanceCreditSpecificationRequest& request, const ModifyInstanceCreditSpecificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceCreditSpecificationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceCreditSpecification(*pRequest), context);
    } );
}
ModifyInstanceEventStartTimeOutcome EC2Client::ModifyInstanceEventStartTime(const ModifyInstanceEventStartTimeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceEventStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceEventStartTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceEventStartTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceEventStartTimeOutcomeCallable EC2Client::ModifyInstanceEventStartTimeCallable(const ModifyInstanceEventStartTimeRequest& request) const
{
  std::shared_ptr<ModifyInstanceEventStartTimeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceEventStartTimeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceEventStartTime(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceEventStartTimeAsync(const ModifyInstanceEventStartTimeRequest& request, const ModifyInstanceEventStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceEventStartTimeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceEventStartTime(*pRequest), context);
    } );
}
ModifyInstanceEventWindowOutcome EC2Client::ModifyInstanceEventWindow(const ModifyInstanceEventWindowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceEventWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceEventWindowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceEventWindowOutcomeCallable EC2Client::ModifyInstanceEventWindowCallable(const ModifyInstanceEventWindowRequest& request) const
{
  std::shared_ptr<ModifyInstanceEventWindowRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceEventWindowOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceEventWindow(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceEventWindowAsync(const ModifyInstanceEventWindowRequest& request, const ModifyInstanceEventWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceEventWindowRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceEventWindow(*pRequest), context);
    } );
}
ModifyInstanceMaintenanceOptionsOutcome EC2Client::ModifyInstanceMaintenanceOptions(const ModifyInstanceMaintenanceOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceMaintenanceOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceMaintenanceOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceMaintenanceOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceMaintenanceOptionsOutcomeCallable EC2Client::ModifyInstanceMaintenanceOptionsCallable(const ModifyInstanceMaintenanceOptionsRequest& request) const
{
  std::shared_ptr<ModifyInstanceMaintenanceOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceMaintenanceOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceMaintenanceOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceMaintenanceOptionsAsync(const ModifyInstanceMaintenanceOptionsRequest& request, const ModifyInstanceMaintenanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceMaintenanceOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceMaintenanceOptions(*pRequest), context);
    } );
}
ModifyInstanceMetadataOptionsOutcome EC2Client::ModifyInstanceMetadataOptions(const ModifyInstanceMetadataOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstanceMetadataOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstanceMetadataOptionsOutcomeCallable EC2Client::ModifyInstanceMetadataOptionsCallable(const ModifyInstanceMetadataOptionsRequest& request) const
{
  std::shared_ptr<ModifyInstanceMetadataOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstanceMetadataOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstanceMetadataOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstanceMetadataOptionsAsync(const ModifyInstanceMetadataOptionsRequest& request, const ModifyInstanceMetadataOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstanceMetadataOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstanceMetadataOptions(*pRequest), context);
    } );
}
ModifyInstancePlacementOutcome EC2Client::ModifyInstancePlacement(const ModifyInstancePlacementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyInstancePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyInstancePlacement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyInstancePlacementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyInstancePlacementOutcomeCallable EC2Client::ModifyInstancePlacementCallable(const ModifyInstancePlacementRequest& request) const
{
  std::shared_ptr<ModifyInstancePlacementRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyInstancePlacementOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyInstancePlacement(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyInstancePlacementAsync(const ModifyInstancePlacementRequest& request, const ModifyInstancePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyInstancePlacementRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyInstancePlacement(*pRequest), context);
    } );
}
ModifyIpamOutcome EC2Client::ModifyIpam(const ModifyIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamOutcomeCallable EC2Client::ModifyIpamCallable(const ModifyIpamRequest& request) const
{
  std::shared_ptr<ModifyIpamRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyIpamOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyIpam(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyIpamAsync(const ModifyIpamRequest& request, const ModifyIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyIpamRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyIpam(*pRequest), context);
    } );
}
ModifyIpamPoolOutcome EC2Client::ModifyIpamPool(const ModifyIpamPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamPoolOutcomeCallable EC2Client::ModifyIpamPoolCallable(const ModifyIpamPoolRequest& request) const
{
  std::shared_ptr<ModifyIpamPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyIpamPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyIpamPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyIpamPoolAsync(const ModifyIpamPoolRequest& request, const ModifyIpamPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyIpamPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyIpamPool(*pRequest), context);
    } );
}
ModifyIpamResourceCidrOutcome EC2Client::ModifyIpamResourceCidr(const ModifyIpamResourceCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamResourceCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamResourceCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamResourceCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamResourceCidrOutcomeCallable EC2Client::ModifyIpamResourceCidrCallable(const ModifyIpamResourceCidrRequest& request) const
{
  std::shared_ptr<ModifyIpamResourceCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyIpamResourceCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyIpamResourceCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyIpamResourceCidrAsync(const ModifyIpamResourceCidrRequest& request, const ModifyIpamResourceCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyIpamResourceCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyIpamResourceCidr(*pRequest), context);
    } );
}
ModifyIpamScopeOutcome EC2Client::ModifyIpamScope(const ModifyIpamScopeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyIpamScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyIpamScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyIpamScopeOutcomeCallable EC2Client::ModifyIpamScopeCallable(const ModifyIpamScopeRequest& request) const
{
  std::shared_ptr<ModifyIpamScopeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyIpamScopeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyIpamScope(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyIpamScopeAsync(const ModifyIpamScopeRequest& request, const ModifyIpamScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyIpamScopeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyIpamScope(*pRequest), context);
    } );
}
ModifyLaunchTemplateOutcome EC2Client::ModifyLaunchTemplate(const ModifyLaunchTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyLaunchTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyLaunchTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLaunchTemplateOutcomeCallable EC2Client::ModifyLaunchTemplateCallable(const ModifyLaunchTemplateRequest& request) const
{
  std::shared_ptr<ModifyLaunchTemplateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyLaunchTemplateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyLaunchTemplate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyLaunchTemplateAsync(const ModifyLaunchTemplateRequest& request, const ModifyLaunchTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyLaunchTemplateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyLaunchTemplate(*pRequest), context);
    } );
}
ModifyLocalGatewayRouteOutcome EC2Client::ModifyLocalGatewayRoute(const ModifyLocalGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyLocalGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyLocalGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLocalGatewayRouteOutcomeCallable EC2Client::ModifyLocalGatewayRouteCallable(const ModifyLocalGatewayRouteRequest& request) const
{
  std::shared_ptr<ModifyLocalGatewayRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyLocalGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyLocalGatewayRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyLocalGatewayRouteAsync(const ModifyLocalGatewayRouteRequest& request, const ModifyLocalGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyLocalGatewayRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyLocalGatewayRoute(*pRequest), context);
    } );
}
ModifyManagedPrefixListOutcome EC2Client::ModifyManagedPrefixList(const ModifyManagedPrefixListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyManagedPrefixList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyManagedPrefixListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyManagedPrefixListOutcomeCallable EC2Client::ModifyManagedPrefixListCallable(const ModifyManagedPrefixListRequest& request) const
{
  std::shared_ptr<ModifyManagedPrefixListRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyManagedPrefixListOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyManagedPrefixList(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyManagedPrefixListAsync(const ModifyManagedPrefixListRequest& request, const ModifyManagedPrefixListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyManagedPrefixListRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyManagedPrefixList(*pRequest), context);
    } );
}
ModifyNetworkInterfaceAttributeOutcome EC2Client::ModifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyNetworkInterfaceAttributeOutcomeCallable EC2Client::ModifyNetworkInterfaceAttributeCallable(const ModifyNetworkInterfaceAttributeRequest& request) const
{
  std::shared_ptr<ModifyNetworkInterfaceAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyNetworkInterfaceAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyNetworkInterfaceAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyNetworkInterfaceAttributeAsync(const ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyNetworkInterfaceAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyNetworkInterfaceAttribute(*pRequest), context);
    } );
}
ModifyPrivateDnsNameOptionsOutcome EC2Client::ModifyPrivateDnsNameOptions(const ModifyPrivateDnsNameOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyPrivateDnsNameOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyPrivateDnsNameOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyPrivateDnsNameOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyPrivateDnsNameOptionsOutcomeCallable EC2Client::ModifyPrivateDnsNameOptionsCallable(const ModifyPrivateDnsNameOptionsRequest& request) const
{
  std::shared_ptr<ModifyPrivateDnsNameOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyPrivateDnsNameOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyPrivateDnsNameOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyPrivateDnsNameOptionsAsync(const ModifyPrivateDnsNameOptionsRequest& request, const ModifyPrivateDnsNameOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyPrivateDnsNameOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyPrivateDnsNameOptions(*pRequest), context);
    } );
}
ModifyReservedInstancesOutcome EC2Client::ModifyReservedInstances(const ModifyReservedInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyReservedInstancesOutcomeCallable EC2Client::ModifyReservedInstancesCallable(const ModifyReservedInstancesRequest& request) const
{
  std::shared_ptr<ModifyReservedInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyReservedInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyReservedInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyReservedInstancesAsync(const ModifyReservedInstancesRequest& request, const ModifyReservedInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyReservedInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyReservedInstances(*pRequest), context);
    } );
}
ModifySecurityGroupRulesOutcome EC2Client::ModifySecurityGroupRules(const ModifySecurityGroupRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySecurityGroupRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySecurityGroupRulesOutcomeCallable EC2Client::ModifySecurityGroupRulesCallable(const ModifySecurityGroupRulesRequest& request) const
{
  std::shared_ptr<ModifySecurityGroupRulesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifySecurityGroupRulesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifySecurityGroupRules(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifySecurityGroupRulesAsync(const ModifySecurityGroupRulesRequest& request, const ModifySecurityGroupRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifySecurityGroupRulesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifySecurityGroupRules(*pRequest), context);
    } );
}
ModifySnapshotAttributeOutcome EC2Client::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotAttributeOutcomeCallable EC2Client::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest& request) const
{
  std::shared_ptr<ModifySnapshotAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifySnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifySnapshotAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifySnapshotAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifySnapshotAttribute(*pRequest), context);
    } );
}
ModifySnapshotTierOutcome EC2Client::ModifySnapshotTier(const ModifySnapshotTierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySnapshotTierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotTierOutcomeCallable EC2Client::ModifySnapshotTierCallable(const ModifySnapshotTierRequest& request) const
{
  std::shared_ptr<ModifySnapshotTierRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifySnapshotTierOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifySnapshotTier(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifySnapshotTierAsync(const ModifySnapshotTierRequest& request, const ModifySnapshotTierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifySnapshotTierRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifySnapshotTier(*pRequest), context);
    } );
}
ModifySpotFleetRequestOutcome EC2Client::ModifySpotFleetRequest(const ModifySpotFleetRequestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySpotFleetRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySpotFleetRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySpotFleetRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySpotFleetRequestOutcomeCallable EC2Client::ModifySpotFleetRequestCallable(const ModifySpotFleetRequestRequest& request) const
{
  std::shared_ptr<ModifySpotFleetRequestRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifySpotFleetRequestOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifySpotFleetRequest(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifySpotFleetRequestAsync(const ModifySpotFleetRequestRequest& request, const ModifySpotFleetRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifySpotFleetRequestRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifySpotFleetRequest(*pRequest), context);
    } );
}
ModifySubnetAttributeOutcome EC2Client::ModifySubnetAttribute(const ModifySubnetAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySubnetAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySubnetAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySubnetAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySubnetAttributeOutcomeCallable EC2Client::ModifySubnetAttributeCallable(const ModifySubnetAttributeRequest& request) const
{
  std::shared_ptr<ModifySubnetAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifySubnetAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifySubnetAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifySubnetAttributeAsync(const ModifySubnetAttributeRequest& request, const ModifySubnetAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifySubnetAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifySubnetAttribute(*pRequest), context);
    } );
}
ModifyTrafficMirrorFilterNetworkServicesOutcome EC2Client::ModifyTrafficMirrorFilterNetworkServices(const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTrafficMirrorFilterNetworkServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTrafficMirrorFilterNetworkServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTrafficMirrorFilterNetworkServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTrafficMirrorFilterNetworkServicesOutcomeCallable EC2Client::ModifyTrafficMirrorFilterNetworkServicesCallable(const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const
{
  std::shared_ptr<ModifyTrafficMirrorFilterNetworkServicesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyTrafficMirrorFilterNetworkServicesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyTrafficMirrorFilterNetworkServices(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyTrafficMirrorFilterNetworkServicesAsync(const ModifyTrafficMirrorFilterNetworkServicesRequest& request, const ModifyTrafficMirrorFilterNetworkServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyTrafficMirrorFilterNetworkServicesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyTrafficMirrorFilterNetworkServices(*pRequest), context);
    } );
}
ModifyTrafficMirrorFilterRuleOutcome EC2Client::ModifyTrafficMirrorFilterRule(const ModifyTrafficMirrorFilterRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTrafficMirrorFilterRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTrafficMirrorFilterRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTrafficMirrorFilterRuleOutcomeCallable EC2Client::ModifyTrafficMirrorFilterRuleCallable(const ModifyTrafficMirrorFilterRuleRequest& request) const
{
  std::shared_ptr<ModifyTrafficMirrorFilterRuleRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyTrafficMirrorFilterRuleOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyTrafficMirrorFilterRule(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyTrafficMirrorFilterRuleAsync(const ModifyTrafficMirrorFilterRuleRequest& request, const ModifyTrafficMirrorFilterRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyTrafficMirrorFilterRuleRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyTrafficMirrorFilterRule(*pRequest), context);
    } );
}
ModifyTrafficMirrorSessionOutcome EC2Client::ModifyTrafficMirrorSession(const ModifyTrafficMirrorSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTrafficMirrorSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTrafficMirrorSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTrafficMirrorSessionOutcomeCallable EC2Client::ModifyTrafficMirrorSessionCallable(const ModifyTrafficMirrorSessionRequest& request) const
{
  std::shared_ptr<ModifyTrafficMirrorSessionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyTrafficMirrorSessionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyTrafficMirrorSession(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyTrafficMirrorSessionAsync(const ModifyTrafficMirrorSessionRequest& request, const ModifyTrafficMirrorSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyTrafficMirrorSessionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyTrafficMirrorSession(*pRequest), context);
    } );
}
ModifyTransitGatewayOutcome EC2Client::ModifyTransitGateway(const ModifyTransitGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTransitGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTransitGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTransitGatewayOutcomeCallable EC2Client::ModifyTransitGatewayCallable(const ModifyTransitGatewayRequest& request) const
{
  std::shared_ptr<ModifyTransitGatewayRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyTransitGatewayOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyTransitGateway(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyTransitGatewayAsync(const ModifyTransitGatewayRequest& request, const ModifyTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyTransitGatewayRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyTransitGateway(*pRequest), context);
    } );
}
ModifyTransitGatewayPrefixListReferenceOutcome EC2Client::ModifyTransitGatewayPrefixListReference(const ModifyTransitGatewayPrefixListReferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTransitGatewayPrefixListReference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTransitGatewayPrefixListReferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTransitGatewayPrefixListReferenceOutcomeCallable EC2Client::ModifyTransitGatewayPrefixListReferenceCallable(const ModifyTransitGatewayPrefixListReferenceRequest& request) const
{
  std::shared_ptr<ModifyTransitGatewayPrefixListReferenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyTransitGatewayPrefixListReferenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyTransitGatewayPrefixListReference(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyTransitGatewayPrefixListReferenceAsync(const ModifyTransitGatewayPrefixListReferenceRequest& request, const ModifyTransitGatewayPrefixListReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyTransitGatewayPrefixListReferenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyTransitGatewayPrefixListReference(*pRequest), context);
    } );
}
ModifyTransitGatewayVpcAttachmentOutcome EC2Client::ModifyTransitGatewayVpcAttachment(const ModifyTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTransitGatewayVpcAttachmentOutcomeCallable EC2Client::ModifyTransitGatewayVpcAttachmentCallable(const ModifyTransitGatewayVpcAttachmentRequest& request) const
{
  std::shared_ptr<ModifyTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyTransitGatewayVpcAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyTransitGatewayVpcAttachmentAsync(const ModifyTransitGatewayVpcAttachmentRequest& request, const ModifyTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyTransitGatewayVpcAttachment(*pRequest), context);
    } );
}
ModifyVolumeOutcome EC2Client::ModifyVolume(const ModifyVolumeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVolume, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVolumeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVolumeOutcomeCallable EC2Client::ModifyVolumeCallable(const ModifyVolumeRequest& request) const
{
  std::shared_ptr<ModifyVolumeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVolumeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVolume(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVolumeAsync(const ModifyVolumeRequest& request, const ModifyVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVolumeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVolume(*pRequest), context);
    } );
}
ModifyVolumeAttributeOutcome EC2Client::ModifyVolumeAttribute(const ModifyVolumeAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVolumeAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVolumeAttributeOutcomeCallable EC2Client::ModifyVolumeAttributeCallable(const ModifyVolumeAttributeRequest& request) const
{
  std::shared_ptr<ModifyVolumeAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVolumeAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVolumeAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVolumeAttributeAsync(const ModifyVolumeAttributeRequest& request, const ModifyVolumeAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVolumeAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVolumeAttribute(*pRequest), context);
    } );
}
ModifyVpcAttributeOutcome EC2Client::ModifyVpcAttribute(const ModifyVpcAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcAttributeOutcomeCallable EC2Client::ModifyVpcAttributeCallable(const ModifyVpcAttributeRequest& request) const
{
  std::shared_ptr<ModifyVpcAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcAttribute(*pRequest), context);
    } );
}
ModifyVpcEndpointOutcome EC2Client::ModifyVpcEndpoint(const ModifyVpcEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointOutcomeCallable EC2Client::ModifyVpcEndpointCallable(const ModifyVpcEndpointRequest& request) const
{
  std::shared_ptr<ModifyVpcEndpointRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcEndpoint(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcEndpointAsync(const ModifyVpcEndpointRequest& request, const ModifyVpcEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcEndpointRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcEndpoint(*pRequest), context);
    } );
}
ModifyVpcEndpointConnectionNotificationOutcome EC2Client::ModifyVpcEndpointConnectionNotification(const ModifyVpcEndpointConnectionNotificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointConnectionNotification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointConnectionNotificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointConnectionNotificationOutcomeCallable EC2Client::ModifyVpcEndpointConnectionNotificationCallable(const ModifyVpcEndpointConnectionNotificationRequest& request) const
{
  std::shared_ptr<ModifyVpcEndpointConnectionNotificationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointConnectionNotificationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcEndpointConnectionNotification(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcEndpointConnectionNotificationAsync(const ModifyVpcEndpointConnectionNotificationRequest& request, const ModifyVpcEndpointConnectionNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcEndpointConnectionNotificationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcEndpointConnectionNotification(*pRequest), context);
    } );
}
ModifyVpcEndpointServiceConfigurationOutcome EC2Client::ModifyVpcEndpointServiceConfiguration(const ModifyVpcEndpointServiceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointServiceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointServiceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointServiceConfigurationOutcomeCallable EC2Client::ModifyVpcEndpointServiceConfigurationCallable(const ModifyVpcEndpointServiceConfigurationRequest& request) const
{
  std::shared_ptr<ModifyVpcEndpointServiceConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointServiceConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcEndpointServiceConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcEndpointServiceConfigurationAsync(const ModifyVpcEndpointServiceConfigurationRequest& request, const ModifyVpcEndpointServiceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcEndpointServiceConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcEndpointServiceConfiguration(*pRequest), context);
    } );
}
ModifyVpcEndpointServicePayerResponsibilityOutcome EC2Client::ModifyVpcEndpointServicePayerResponsibility(const ModifyVpcEndpointServicePayerResponsibilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointServicePayerResponsibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointServicePayerResponsibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointServicePayerResponsibilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointServicePayerResponsibilityOutcomeCallable EC2Client::ModifyVpcEndpointServicePayerResponsibilityCallable(const ModifyVpcEndpointServicePayerResponsibilityRequest& request) const
{
  std::shared_ptr<ModifyVpcEndpointServicePayerResponsibilityRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointServicePayerResponsibilityOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcEndpointServicePayerResponsibility(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcEndpointServicePayerResponsibilityAsync(const ModifyVpcEndpointServicePayerResponsibilityRequest& request, const ModifyVpcEndpointServicePayerResponsibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcEndpointServicePayerResponsibilityRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcEndpointServicePayerResponsibility(*pRequest), context);
    } );
}
ModifyVpcEndpointServicePermissionsOutcome EC2Client::ModifyVpcEndpointServicePermissions(const ModifyVpcEndpointServicePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcEndpointServicePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcEndpointServicePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcEndpointServicePermissionsOutcomeCallable EC2Client::ModifyVpcEndpointServicePermissionsCallable(const ModifyVpcEndpointServicePermissionsRequest& request) const
{
  std::shared_ptr<ModifyVpcEndpointServicePermissionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcEndpointServicePermissionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcEndpointServicePermissions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcEndpointServicePermissionsAsync(const ModifyVpcEndpointServicePermissionsRequest& request, const ModifyVpcEndpointServicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcEndpointServicePermissionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcEndpointServicePermissions(*pRequest), context);
    } );
}
ModifyVpcPeeringConnectionOptionsOutcome EC2Client::ModifyVpcPeeringConnectionOptions(const ModifyVpcPeeringConnectionOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcPeeringConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcPeeringConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcPeeringConnectionOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcPeeringConnectionOptionsOutcomeCallable EC2Client::ModifyVpcPeeringConnectionOptionsCallable(const ModifyVpcPeeringConnectionOptionsRequest& request) const
{
  std::shared_ptr<ModifyVpcPeeringConnectionOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcPeeringConnectionOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcPeeringConnectionOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcPeeringConnectionOptionsAsync(const ModifyVpcPeeringConnectionOptionsRequest& request, const ModifyVpcPeeringConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcPeeringConnectionOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcPeeringConnectionOptions(*pRequest), context);
    } );
}
ModifyVpcTenancyOutcome EC2Client::ModifyVpcTenancy(const ModifyVpcTenancyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpcTenancy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpcTenancy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpcTenancyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpcTenancyOutcomeCallable EC2Client::ModifyVpcTenancyCallable(const ModifyVpcTenancyRequest& request) const
{
  std::shared_ptr<ModifyVpcTenancyRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpcTenancyOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpcTenancy(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpcTenancyAsync(const ModifyVpcTenancyRequest& request, const ModifyVpcTenancyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpcTenancyRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpcTenancy(*pRequest), context);
    } );
}
ModifyVpnConnectionOutcome EC2Client::ModifyVpnConnection(const ModifyVpnConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnConnectionOutcomeCallable EC2Client::ModifyVpnConnectionCallable(const ModifyVpnConnectionRequest& request) const
{
  std::shared_ptr<ModifyVpnConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpnConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpnConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpnConnectionAsync(const ModifyVpnConnectionRequest& request, const ModifyVpnConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpnConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpnConnection(*pRequest), context);
    } );
}
ModifyVpnConnectionOptionsOutcome EC2Client::ModifyVpnConnectionOptions(const ModifyVpnConnectionOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnConnectionOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnConnectionOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnConnectionOptionsOutcomeCallable EC2Client::ModifyVpnConnectionOptionsCallable(const ModifyVpnConnectionOptionsRequest& request) const
{
  std::shared_ptr<ModifyVpnConnectionOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpnConnectionOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpnConnectionOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpnConnectionOptionsAsync(const ModifyVpnConnectionOptionsRequest& request, const ModifyVpnConnectionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpnConnectionOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpnConnectionOptions(*pRequest), context);
    } );
}
ModifyVpnTunnelCertificateOutcome EC2Client::ModifyVpnTunnelCertificate(const ModifyVpnTunnelCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnTunnelCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnTunnelCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnTunnelCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnTunnelCertificateOutcomeCallable EC2Client::ModifyVpnTunnelCertificateCallable(const ModifyVpnTunnelCertificateRequest& request) const
{
  std::shared_ptr<ModifyVpnTunnelCertificateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpnTunnelCertificateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpnTunnelCertificate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpnTunnelCertificateAsync(const ModifyVpnTunnelCertificateRequest& request, const ModifyVpnTunnelCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpnTunnelCertificateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpnTunnelCertificate(*pRequest), context);
    } );
}
ModifyVpnTunnelOptionsOutcome EC2Client::ModifyVpnTunnelOptions(const ModifyVpnTunnelOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyVpnTunnelOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyVpnTunnelOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyVpnTunnelOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyVpnTunnelOptionsOutcomeCallable EC2Client::ModifyVpnTunnelOptionsCallable(const ModifyVpnTunnelOptionsRequest& request) const
{
  std::shared_ptr<ModifyVpnTunnelOptionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ModifyVpnTunnelOptionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ModifyVpnTunnelOptions(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ModifyVpnTunnelOptionsAsync(const ModifyVpnTunnelOptionsRequest& request, const ModifyVpnTunnelOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ModifyVpnTunnelOptionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ModifyVpnTunnelOptions(*pRequest), context);
    } );
}
MonitorInstancesOutcome EC2Client::MonitorInstances(const MonitorInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MonitorInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

MonitorInstancesOutcomeCallable EC2Client::MonitorInstancesCallable(const MonitorInstancesRequest& request) const
{
  std::shared_ptr<MonitorInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MonitorInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MonitorInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::MonitorInstancesAsync(const MonitorInstancesRequest& request, const MonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MonitorInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MonitorInstances(*pRequest), context);
    } );
}
MoveAddressToVpcOutcome EC2Client::MoveAddressToVpc(const MoveAddressToVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MoveAddressToVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MoveAddressToVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MoveAddressToVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

MoveAddressToVpcOutcomeCallable EC2Client::MoveAddressToVpcCallable(const MoveAddressToVpcRequest& request) const
{
  std::shared_ptr<MoveAddressToVpcRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MoveAddressToVpcOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MoveAddressToVpc(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::MoveAddressToVpcAsync(const MoveAddressToVpcRequest& request, const MoveAddressToVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MoveAddressToVpcRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MoveAddressToVpc(*pRequest), context);
    } );
}
MoveByoipCidrToIpamOutcome EC2Client::MoveByoipCidrToIpam(const MoveByoipCidrToIpamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MoveByoipCidrToIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MoveByoipCidrToIpam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MoveByoipCidrToIpamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

MoveByoipCidrToIpamOutcomeCallable EC2Client::MoveByoipCidrToIpamCallable(const MoveByoipCidrToIpamRequest& request) const
{
  std::shared_ptr<MoveByoipCidrToIpamRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< MoveByoipCidrToIpamOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->MoveByoipCidrToIpam(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::MoveByoipCidrToIpamAsync(const MoveByoipCidrToIpamRequest& request, const MoveByoipCidrToIpamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<MoveByoipCidrToIpamRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, MoveByoipCidrToIpam(*pRequest), context);
    } );
}
ProvisionByoipCidrOutcome EC2Client::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ProvisionByoipCidrOutcomeCallable EC2Client::ProvisionByoipCidrCallable(const ProvisionByoipCidrRequest& request) const
{
  std::shared_ptr<ProvisionByoipCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ProvisionByoipCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ProvisionByoipCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ProvisionByoipCidrAsync(const ProvisionByoipCidrRequest& request, const ProvisionByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ProvisionByoipCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ProvisionByoipCidr(*pRequest), context);
    } );
}
ProvisionIpamPoolCidrOutcome EC2Client::ProvisionIpamPoolCidr(const ProvisionIpamPoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionIpamPoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionIpamPoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ProvisionIpamPoolCidrOutcomeCallable EC2Client::ProvisionIpamPoolCidrCallable(const ProvisionIpamPoolCidrRequest& request) const
{
  std::shared_ptr<ProvisionIpamPoolCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ProvisionIpamPoolCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ProvisionIpamPoolCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ProvisionIpamPoolCidrAsync(const ProvisionIpamPoolCidrRequest& request, const ProvisionIpamPoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ProvisionIpamPoolCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ProvisionIpamPoolCidr(*pRequest), context);
    } );
}
ProvisionPublicIpv4PoolCidrOutcome EC2Client::ProvisionPublicIpv4PoolCidr(const ProvisionPublicIpv4PoolCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionPublicIpv4PoolCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionPublicIpv4PoolCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ProvisionPublicIpv4PoolCidrOutcomeCallable EC2Client::ProvisionPublicIpv4PoolCidrCallable(const ProvisionPublicIpv4PoolCidrRequest& request) const
{
  std::shared_ptr<ProvisionPublicIpv4PoolCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ProvisionPublicIpv4PoolCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ProvisionPublicIpv4PoolCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ProvisionPublicIpv4PoolCidrAsync(const ProvisionPublicIpv4PoolCidrRequest& request, const ProvisionPublicIpv4PoolCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ProvisionPublicIpv4PoolCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ProvisionPublicIpv4PoolCidr(*pRequest), context);
    } );
}
PurchaseHostReservationOutcome EC2Client::PurchaseHostReservation(const PurchaseHostReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseHostReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseHostReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseHostReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseHostReservationOutcomeCallable EC2Client::PurchaseHostReservationCallable(const PurchaseHostReservationRequest& request) const
{
  std::shared_ptr<PurchaseHostReservationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PurchaseHostReservationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PurchaseHostReservation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::PurchaseHostReservationAsync(const PurchaseHostReservationRequest& request, const PurchaseHostReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PurchaseHostReservationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PurchaseHostReservation(*pRequest), context);
    } );
}
PurchaseReservedInstancesOfferingOutcome EC2Client::PurchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedInstancesOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseReservedInstancesOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseReservedInstancesOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedInstancesOfferingOutcomeCallable EC2Client::PurchaseReservedInstancesOfferingCallable(const PurchaseReservedInstancesOfferingRequest& request) const
{
  std::shared_ptr<PurchaseReservedInstancesOfferingRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PurchaseReservedInstancesOfferingOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PurchaseReservedInstancesOffering(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::PurchaseReservedInstancesOfferingAsync(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PurchaseReservedInstancesOfferingRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PurchaseReservedInstancesOffering(*pRequest), context);
    } );
}
PurchaseScheduledInstancesOutcome EC2Client::PurchaseScheduledInstances(const PurchaseScheduledInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseScheduledInstancesOutcomeCallable EC2Client::PurchaseScheduledInstancesCallable(const PurchaseScheduledInstancesRequest& request) const
{
  std::shared_ptr<PurchaseScheduledInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< PurchaseScheduledInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->PurchaseScheduledInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::PurchaseScheduledInstancesAsync(const PurchaseScheduledInstancesRequest& request, const PurchaseScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<PurchaseScheduledInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, PurchaseScheduledInstances(*pRequest), context);
    } );
}
RebootInstancesOutcome EC2Client::RebootInstances(const RebootInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RebootInstancesOutcomeCallable EC2Client::RebootInstancesCallable(const RebootInstancesRequest& request) const
{
  std::shared_ptr<RebootInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RebootInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RebootInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RebootInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RebootInstances(*pRequest), context);
    } );
}
RegisterImageOutcome EC2Client::RegisterImage(const RegisterImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterImageOutcomeCallable EC2Client::RegisterImageCallable(const RegisterImageRequest& request) const
{
  std::shared_ptr<RegisterImageRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RegisterImageOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RegisterImage(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RegisterImageAsync(const RegisterImageRequest& request, const RegisterImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RegisterImageRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RegisterImage(*pRequest), context);
    } );
}
RegisterInstanceEventNotificationAttributesOutcome EC2Client::RegisterInstanceEventNotificationAttributes(const RegisterInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterInstanceEventNotificationAttributesOutcomeCallable EC2Client::RegisterInstanceEventNotificationAttributesCallable(const RegisterInstanceEventNotificationAttributesRequest& request) const
{
  std::shared_ptr<RegisterInstanceEventNotificationAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstanceEventNotificationAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RegisterInstanceEventNotificationAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RegisterInstanceEventNotificationAttributesAsync(const RegisterInstanceEventNotificationAttributesRequest& request, const RegisterInstanceEventNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RegisterInstanceEventNotificationAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RegisterInstanceEventNotificationAttributes(*pRequest), context);
    } );
}
RegisterTransitGatewayMulticastGroupMembersOutcome EC2Client::RegisterTransitGatewayMulticastGroupMembers(const RegisterTransitGatewayMulticastGroupMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTransitGatewayMulticastGroupMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTransitGatewayMulticastGroupMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTransitGatewayMulticastGroupMembersOutcomeCallable EC2Client::RegisterTransitGatewayMulticastGroupMembersCallable(const RegisterTransitGatewayMulticastGroupMembersRequest& request) const
{
  std::shared_ptr<RegisterTransitGatewayMulticastGroupMembersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RegisterTransitGatewayMulticastGroupMembersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RegisterTransitGatewayMulticastGroupMembers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RegisterTransitGatewayMulticastGroupMembersAsync(const RegisterTransitGatewayMulticastGroupMembersRequest& request, const RegisterTransitGatewayMulticastGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RegisterTransitGatewayMulticastGroupMembersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RegisterTransitGatewayMulticastGroupMembers(*pRequest), context);
    } );
}
RegisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::RegisterTransitGatewayMulticastGroupSources(const RegisterTransitGatewayMulticastGroupSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterTransitGatewayMulticastGroupSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterTransitGatewayMulticastGroupSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTransitGatewayMulticastGroupSourcesOutcomeCallable EC2Client::RegisterTransitGatewayMulticastGroupSourcesCallable(const RegisterTransitGatewayMulticastGroupSourcesRequest& request) const
{
  std::shared_ptr<RegisterTransitGatewayMulticastGroupSourcesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RegisterTransitGatewayMulticastGroupSourcesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RegisterTransitGatewayMulticastGroupSources(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RegisterTransitGatewayMulticastGroupSourcesAsync(const RegisterTransitGatewayMulticastGroupSourcesRequest& request, const RegisterTransitGatewayMulticastGroupSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RegisterTransitGatewayMulticastGroupSourcesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RegisterTransitGatewayMulticastGroupSources(*pRequest), context);
    } );
}
RejectTransitGatewayMulticastDomainAssociationsOutcome EC2Client::RejectTransitGatewayMulticastDomainAssociations(const RejectTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectTransitGatewayMulticastDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectTransitGatewayMulticastDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectTransitGatewayMulticastDomainAssociationsOutcomeCallable EC2Client::RejectTransitGatewayMulticastDomainAssociationsCallable(const RejectTransitGatewayMulticastDomainAssociationsRequest& request) const
{
  std::shared_ptr<RejectTransitGatewayMulticastDomainAssociationsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RejectTransitGatewayMulticastDomainAssociationsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RejectTransitGatewayMulticastDomainAssociations(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RejectTransitGatewayMulticastDomainAssociationsAsync(const RejectTransitGatewayMulticastDomainAssociationsRequest& request, const RejectTransitGatewayMulticastDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RejectTransitGatewayMulticastDomainAssociationsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RejectTransitGatewayMulticastDomainAssociations(*pRequest), context);
    } );
}
RejectTransitGatewayPeeringAttachmentOutcome EC2Client::RejectTransitGatewayPeeringAttachment(const RejectTransitGatewayPeeringAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectTransitGatewayPeeringAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectTransitGatewayPeeringAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectTransitGatewayPeeringAttachmentOutcomeCallable EC2Client::RejectTransitGatewayPeeringAttachmentCallable(const RejectTransitGatewayPeeringAttachmentRequest& request) const
{
  std::shared_ptr<RejectTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RejectTransitGatewayPeeringAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RejectTransitGatewayPeeringAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RejectTransitGatewayPeeringAttachmentAsync(const RejectTransitGatewayPeeringAttachmentRequest& request, const RejectTransitGatewayPeeringAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RejectTransitGatewayPeeringAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RejectTransitGatewayPeeringAttachment(*pRequest), context);
    } );
}
RejectTransitGatewayVpcAttachmentOutcome EC2Client::RejectTransitGatewayVpcAttachment(const RejectTransitGatewayVpcAttachmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectTransitGatewayVpcAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectTransitGatewayVpcAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectTransitGatewayVpcAttachmentOutcomeCallable EC2Client::RejectTransitGatewayVpcAttachmentCallable(const RejectTransitGatewayVpcAttachmentRequest& request) const
{
  std::shared_ptr<RejectTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RejectTransitGatewayVpcAttachmentOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RejectTransitGatewayVpcAttachment(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RejectTransitGatewayVpcAttachmentAsync(const RejectTransitGatewayVpcAttachmentRequest& request, const RejectTransitGatewayVpcAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RejectTransitGatewayVpcAttachmentRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RejectTransitGatewayVpcAttachment(*pRequest), context);
    } );
}
RejectVpcEndpointConnectionsOutcome EC2Client::RejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectVpcEndpointConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectVpcEndpointConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectVpcEndpointConnectionsOutcomeCallable EC2Client::RejectVpcEndpointConnectionsCallable(const RejectVpcEndpointConnectionsRequest& request) const
{
  std::shared_ptr<RejectVpcEndpointConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RejectVpcEndpointConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RejectVpcEndpointConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RejectVpcEndpointConnectionsAsync(const RejectVpcEndpointConnectionsRequest& request, const RejectVpcEndpointConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RejectVpcEndpointConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RejectVpcEndpointConnections(*pRequest), context);
    } );
}
RejectVpcPeeringConnectionOutcome EC2Client::RejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectVpcPeeringConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectVpcPeeringConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectVpcPeeringConnectionOutcomeCallable EC2Client::RejectVpcPeeringConnectionCallable(const RejectVpcPeeringConnectionRequest& request) const
{
  std::shared_ptr<RejectVpcPeeringConnectionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RejectVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RejectVpcPeeringConnection(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RejectVpcPeeringConnectionAsync(const RejectVpcPeeringConnectionRequest& request, const RejectVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RejectVpcPeeringConnectionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RejectVpcPeeringConnection(*pRequest), context);
    } );
}
ReleaseAddressOutcome EC2Client::ReleaseAddress(const ReleaseAddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReleaseAddressOutcomeCallable EC2Client::ReleaseAddressCallable(const ReleaseAddressRequest& request) const
{
  std::shared_ptr<ReleaseAddressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReleaseAddressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReleaseAddress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReleaseAddressAsync(const ReleaseAddressRequest& request, const ReleaseAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReleaseAddressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReleaseAddress(*pRequest), context);
    } );
}
ReleaseHostsOutcome EC2Client::ReleaseHosts(const ReleaseHostsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReleaseHostsOutcomeCallable EC2Client::ReleaseHostsCallable(const ReleaseHostsRequest& request) const
{
  std::shared_ptr<ReleaseHostsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReleaseHostsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReleaseHosts(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReleaseHostsAsync(const ReleaseHostsRequest& request, const ReleaseHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReleaseHostsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReleaseHosts(*pRequest), context);
    } );
}
ReleaseIpamPoolAllocationOutcome EC2Client::ReleaseIpamPoolAllocation(const ReleaseIpamPoolAllocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseIpamPoolAllocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseIpamPoolAllocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseIpamPoolAllocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReleaseIpamPoolAllocationOutcomeCallable EC2Client::ReleaseIpamPoolAllocationCallable(const ReleaseIpamPoolAllocationRequest& request) const
{
  std::shared_ptr<ReleaseIpamPoolAllocationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReleaseIpamPoolAllocationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReleaseIpamPoolAllocation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReleaseIpamPoolAllocationAsync(const ReleaseIpamPoolAllocationRequest& request, const ReleaseIpamPoolAllocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReleaseIpamPoolAllocationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReleaseIpamPoolAllocation(*pRequest), context);
    } );
}
ReplaceIamInstanceProfileAssociationOutcome EC2Client::ReplaceIamInstanceProfileAssociation(const ReplaceIamInstanceProfileAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceIamInstanceProfileAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceIamInstanceProfileAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceIamInstanceProfileAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceIamInstanceProfileAssociationOutcomeCallable EC2Client::ReplaceIamInstanceProfileAssociationCallable(const ReplaceIamInstanceProfileAssociationRequest& request) const
{
  std::shared_ptr<ReplaceIamInstanceProfileAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReplaceIamInstanceProfileAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReplaceIamInstanceProfileAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReplaceIamInstanceProfileAssociationAsync(const ReplaceIamInstanceProfileAssociationRequest& request, const ReplaceIamInstanceProfileAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReplaceIamInstanceProfileAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReplaceIamInstanceProfileAssociation(*pRequest), context);
    } );
}
ReplaceNetworkAclAssociationOutcome EC2Client::ReplaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceNetworkAclAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceNetworkAclAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceNetworkAclAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceNetworkAclAssociationOutcomeCallable EC2Client::ReplaceNetworkAclAssociationCallable(const ReplaceNetworkAclAssociationRequest& request) const
{
  std::shared_ptr<ReplaceNetworkAclAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReplaceNetworkAclAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReplaceNetworkAclAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReplaceNetworkAclAssociationAsync(const ReplaceNetworkAclAssociationRequest& request, const ReplaceNetworkAclAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReplaceNetworkAclAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReplaceNetworkAclAssociation(*pRequest), context);
    } );
}
ReplaceNetworkAclEntryOutcome EC2Client::ReplaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceNetworkAclEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceNetworkAclEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceNetworkAclEntryOutcomeCallable EC2Client::ReplaceNetworkAclEntryCallable(const ReplaceNetworkAclEntryRequest& request) const
{
  std::shared_ptr<ReplaceNetworkAclEntryRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReplaceNetworkAclEntryOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReplaceNetworkAclEntry(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReplaceNetworkAclEntryAsync(const ReplaceNetworkAclEntryRequest& request, const ReplaceNetworkAclEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReplaceNetworkAclEntryRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReplaceNetworkAclEntry(*pRequest), context);
    } );
}
ReplaceRouteOutcome EC2Client::ReplaceRoute(const ReplaceRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceRouteOutcomeCallable EC2Client::ReplaceRouteCallable(const ReplaceRouteRequest& request) const
{
  std::shared_ptr<ReplaceRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReplaceRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReplaceRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReplaceRouteAsync(const ReplaceRouteRequest& request, const ReplaceRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReplaceRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReplaceRoute(*pRequest), context);
    } );
}
ReplaceRouteTableAssociationOutcome EC2Client::ReplaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceRouteTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceRouteTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceRouteTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceRouteTableAssociationOutcomeCallable EC2Client::ReplaceRouteTableAssociationCallable(const ReplaceRouteTableAssociationRequest& request) const
{
  std::shared_ptr<ReplaceRouteTableAssociationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReplaceRouteTableAssociationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReplaceRouteTableAssociation(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReplaceRouteTableAssociationAsync(const ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReplaceRouteTableAssociationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReplaceRouteTableAssociation(*pRequest), context);
    } );
}
ReplaceTransitGatewayRouteOutcome EC2Client::ReplaceTransitGatewayRoute(const ReplaceTransitGatewayRouteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReplaceTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReplaceTransitGatewayRoute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReplaceTransitGatewayRouteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReplaceTransitGatewayRouteOutcomeCallable EC2Client::ReplaceTransitGatewayRouteCallable(const ReplaceTransitGatewayRouteRequest& request) const
{
  std::shared_ptr<ReplaceTransitGatewayRouteRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReplaceTransitGatewayRouteOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReplaceTransitGatewayRoute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReplaceTransitGatewayRouteAsync(const ReplaceTransitGatewayRouteRequest& request, const ReplaceTransitGatewayRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReplaceTransitGatewayRouteRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReplaceTransitGatewayRoute(*pRequest), context);
    } );
}
ReportInstanceStatusOutcome EC2Client::ReportInstanceStatus(const ReportInstanceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReportInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReportInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReportInstanceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ReportInstanceStatusOutcomeCallable EC2Client::ReportInstanceStatusCallable(const ReportInstanceStatusRequest& request) const
{
  std::shared_ptr<ReportInstanceStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ReportInstanceStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ReportInstanceStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ReportInstanceStatusAsync(const ReportInstanceStatusRequest& request, const ReportInstanceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ReportInstanceStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ReportInstanceStatus(*pRequest), context);
    } );
}
RequestSpotFleetOutcome EC2Client::RequestSpotFleet(const RequestSpotFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestSpotFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestSpotFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestSpotFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RequestSpotFleetOutcomeCallable EC2Client::RequestSpotFleetCallable(const RequestSpotFleetRequest& request) const
{
  std::shared_ptr<RequestSpotFleetRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RequestSpotFleetOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RequestSpotFleet(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RequestSpotFleetAsync(const RequestSpotFleetRequest& request, const RequestSpotFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RequestSpotFleetRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RequestSpotFleet(*pRequest), context);
    } );
}
RequestSpotInstancesOutcome EC2Client::RequestSpotInstances(const RequestSpotInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestSpotInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestSpotInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestSpotInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RequestSpotInstancesOutcomeCallable EC2Client::RequestSpotInstancesCallable(const RequestSpotInstancesRequest& request) const
{
  std::shared_ptr<RequestSpotInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RequestSpotInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RequestSpotInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RequestSpotInstancesAsync(const RequestSpotInstancesRequest& request, const RequestSpotInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RequestSpotInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RequestSpotInstances(*pRequest), context);
    } );
}
ResetAddressAttributeOutcome EC2Client::ResetAddressAttribute(const ResetAddressAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetAddressAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetAddressAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetAddressAttributeOutcomeCallable EC2Client::ResetAddressAttributeCallable(const ResetAddressAttributeRequest& request) const
{
  std::shared_ptr<ResetAddressAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetAddressAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetAddressAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetAddressAttributeAsync(const ResetAddressAttributeRequest& request, const ResetAddressAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetAddressAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetAddressAttribute(*pRequest), context);
    } );
}
ResetEbsDefaultKmsKeyIdOutcome EC2Client::ResetEbsDefaultKmsKeyId(const ResetEbsDefaultKmsKeyIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetEbsDefaultKmsKeyId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetEbsDefaultKmsKeyIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetEbsDefaultKmsKeyIdOutcomeCallable EC2Client::ResetEbsDefaultKmsKeyIdCallable(const ResetEbsDefaultKmsKeyIdRequest& request) const
{
  std::shared_ptr<ResetEbsDefaultKmsKeyIdRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetEbsDefaultKmsKeyIdOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetEbsDefaultKmsKeyId(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetEbsDefaultKmsKeyIdAsync(const ResetEbsDefaultKmsKeyIdRequest& request, const ResetEbsDefaultKmsKeyIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetEbsDefaultKmsKeyIdRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetEbsDefaultKmsKeyId(*pRequest), context);
    } );
}
ResetFpgaImageAttributeOutcome EC2Client::ResetFpgaImageAttribute(const ResetFpgaImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetFpgaImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetFpgaImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetFpgaImageAttributeOutcomeCallable EC2Client::ResetFpgaImageAttributeCallable(const ResetFpgaImageAttributeRequest& request) const
{
  std::shared_ptr<ResetFpgaImageAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetFpgaImageAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetFpgaImageAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetFpgaImageAttributeAsync(const ResetFpgaImageAttributeRequest& request, const ResetFpgaImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetFpgaImageAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetFpgaImageAttribute(*pRequest), context);
    } );
}
ResetImageAttributeOutcome EC2Client::ResetImageAttribute(const ResetImageAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetImageAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetImageAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetImageAttributeOutcomeCallable EC2Client::ResetImageAttributeCallable(const ResetImageAttributeRequest& request) const
{
  std::shared_ptr<ResetImageAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetImageAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetImageAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetImageAttributeAsync(const ResetImageAttributeRequest& request, const ResetImageAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetImageAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetImageAttribute(*pRequest), context);
    } );
}
ResetInstanceAttributeOutcome EC2Client::ResetInstanceAttribute(const ResetInstanceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetInstanceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetInstanceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetInstanceAttributeOutcomeCallable EC2Client::ResetInstanceAttributeCallable(const ResetInstanceAttributeRequest& request) const
{
  std::shared_ptr<ResetInstanceAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetInstanceAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetInstanceAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetInstanceAttributeAsync(const ResetInstanceAttributeRequest& request, const ResetInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetInstanceAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetInstanceAttribute(*pRequest), context);
    } );
}
ResetNetworkInterfaceAttributeOutcome EC2Client::ResetNetworkInterfaceAttribute(const ResetNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetNetworkInterfaceAttributeOutcomeCallable EC2Client::ResetNetworkInterfaceAttributeCallable(const ResetNetworkInterfaceAttributeRequest& request) const
{
  std::shared_ptr<ResetNetworkInterfaceAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetNetworkInterfaceAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetNetworkInterfaceAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetNetworkInterfaceAttributeAsync(const ResetNetworkInterfaceAttributeRequest& request, const ResetNetworkInterfaceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetNetworkInterfaceAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetNetworkInterfaceAttribute(*pRequest), context);
    } );
}
ResetSnapshotAttributeOutcome EC2Client::ResetSnapshotAttribute(const ResetSnapshotAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetSnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetSnapshotAttributeOutcomeCallable EC2Client::ResetSnapshotAttributeCallable(const ResetSnapshotAttributeRequest& request) const
{
  std::shared_ptr<ResetSnapshotAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResetSnapshotAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResetSnapshotAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::ResetSnapshotAttributeAsync(const ResetSnapshotAttributeRequest& request, const ResetSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResetSnapshotAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResetSnapshotAttribute(*pRequest), context);
    } );
}
RestoreAddressToClassicOutcome EC2Client::RestoreAddressToClassic(const RestoreAddressToClassicRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreAddressToClassic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreAddressToClassic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreAddressToClassicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreAddressToClassicOutcomeCallable EC2Client::RestoreAddressToClassicCallable(const RestoreAddressToClassicRequest& request) const
{
  std::shared_ptr<RestoreAddressToClassicRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RestoreAddressToClassicOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RestoreAddressToClassic(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RestoreAddressToClassicAsync(const RestoreAddressToClassicRequest& request, const RestoreAddressToClassicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RestoreAddressToClassicRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RestoreAddressToClassic(*pRequest), context);
    } );
}
RestoreImageFromRecycleBinOutcome EC2Client::RestoreImageFromRecycleBin(const RestoreImageFromRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreImageFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreImageFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreImageFromRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreImageFromRecycleBinOutcomeCallable EC2Client::RestoreImageFromRecycleBinCallable(const RestoreImageFromRecycleBinRequest& request) const
{
  std::shared_ptr<RestoreImageFromRecycleBinRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RestoreImageFromRecycleBinOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RestoreImageFromRecycleBin(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RestoreImageFromRecycleBinAsync(const RestoreImageFromRecycleBinRequest& request, const RestoreImageFromRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RestoreImageFromRecycleBinRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RestoreImageFromRecycleBin(*pRequest), context);
    } );
}
RestoreManagedPrefixListVersionOutcome EC2Client::RestoreManagedPrefixListVersion(const RestoreManagedPrefixListVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreManagedPrefixListVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreManagedPrefixListVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreManagedPrefixListVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreManagedPrefixListVersionOutcomeCallable EC2Client::RestoreManagedPrefixListVersionCallable(const RestoreManagedPrefixListVersionRequest& request) const
{
  std::shared_ptr<RestoreManagedPrefixListVersionRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RestoreManagedPrefixListVersionOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RestoreManagedPrefixListVersion(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RestoreManagedPrefixListVersionAsync(const RestoreManagedPrefixListVersionRequest& request, const RestoreManagedPrefixListVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RestoreManagedPrefixListVersionRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RestoreManagedPrefixListVersion(*pRequest), context);
    } );
}
RestoreSnapshotFromRecycleBinOutcome EC2Client::RestoreSnapshotFromRecycleBin(const RestoreSnapshotFromRecycleBinRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreSnapshotFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreSnapshotFromRecycleBin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreSnapshotFromRecycleBinOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreSnapshotFromRecycleBinOutcomeCallable EC2Client::RestoreSnapshotFromRecycleBinCallable(const RestoreSnapshotFromRecycleBinRequest& request) const
{
  std::shared_ptr<RestoreSnapshotFromRecycleBinRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RestoreSnapshotFromRecycleBinOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RestoreSnapshotFromRecycleBin(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RestoreSnapshotFromRecycleBinAsync(const RestoreSnapshotFromRecycleBinRequest& request, const RestoreSnapshotFromRecycleBinResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RestoreSnapshotFromRecycleBinRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RestoreSnapshotFromRecycleBin(*pRequest), context);
    } );
}
RestoreSnapshotTierOutcome EC2Client::RestoreSnapshotTier(const RestoreSnapshotTierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreSnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreSnapshotTier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreSnapshotTierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreSnapshotTierOutcomeCallable EC2Client::RestoreSnapshotTierCallable(const RestoreSnapshotTierRequest& request) const
{
  std::shared_ptr<RestoreSnapshotTierRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RestoreSnapshotTierOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RestoreSnapshotTier(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RestoreSnapshotTierAsync(const RestoreSnapshotTierRequest& request, const RestoreSnapshotTierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RestoreSnapshotTierRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RestoreSnapshotTier(*pRequest), context);
    } );
}
RevokeClientVpnIngressOutcome EC2Client::RevokeClientVpnIngress(const RevokeClientVpnIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeClientVpnIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeClientVpnIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeClientVpnIngressOutcomeCallable EC2Client::RevokeClientVpnIngressCallable(const RevokeClientVpnIngressRequest& request) const
{
  std::shared_ptr<RevokeClientVpnIngressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RevokeClientVpnIngressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RevokeClientVpnIngress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RevokeClientVpnIngressAsync(const RevokeClientVpnIngressRequest& request, const RevokeClientVpnIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RevokeClientVpnIngressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RevokeClientVpnIngress(*pRequest), context);
    } );
}
RevokeSecurityGroupEgressOutcome EC2Client::RevokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSecurityGroupEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeSecurityGroupEgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeSecurityGroupEgressOutcomeCallable EC2Client::RevokeSecurityGroupEgressCallable(const RevokeSecurityGroupEgressRequest& request) const
{
  std::shared_ptr<RevokeSecurityGroupEgressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RevokeSecurityGroupEgressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RevokeSecurityGroupEgress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RevokeSecurityGroupEgressAsync(const RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RevokeSecurityGroupEgressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RevokeSecurityGroupEgress(*pRequest), context);
    } );
}
RevokeSecurityGroupIngressOutcome EC2Client::RevokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeSecurityGroupIngressOutcomeCallable EC2Client::RevokeSecurityGroupIngressCallable(const RevokeSecurityGroupIngressRequest& request) const
{
  std::shared_ptr<RevokeSecurityGroupIngressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RevokeSecurityGroupIngressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RevokeSecurityGroupIngress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RevokeSecurityGroupIngressAsync(const RevokeSecurityGroupIngressRequest& request, const RevokeSecurityGroupIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RevokeSecurityGroupIngressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RevokeSecurityGroupIngress(*pRequest), context);
    } );
}
RunInstancesOutcome EC2Client::RunInstances(const RunInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RunInstancesOutcomeCallable EC2Client::RunInstancesCallable(const RunInstancesRequest& request) const
{
  std::shared_ptr<RunInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RunInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RunInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RunInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RunInstances(*pRequest), context);
    } );
}
RunScheduledInstancesOutcome EC2Client::RunScheduledInstances(const RunScheduledInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RunScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RunScheduledInstancesOutcomeCallable EC2Client::RunScheduledInstancesCallable(const RunScheduledInstancesRequest& request) const
{
  std::shared_ptr<RunScheduledInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RunScheduledInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RunScheduledInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::RunScheduledInstancesAsync(const RunScheduledInstancesRequest& request, const RunScheduledInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RunScheduledInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RunScheduledInstances(*pRequest), context);
    } );
}
SearchLocalGatewayRoutesOutcome EC2Client::SearchLocalGatewayRoutes(const SearchLocalGatewayRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchLocalGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchLocalGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchLocalGatewayRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SearchLocalGatewayRoutesOutcomeCallable EC2Client::SearchLocalGatewayRoutesCallable(const SearchLocalGatewayRoutesRequest& request) const
{
  std::shared_ptr<SearchLocalGatewayRoutesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SearchLocalGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SearchLocalGatewayRoutes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::SearchLocalGatewayRoutesAsync(const SearchLocalGatewayRoutesRequest& request, const SearchLocalGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SearchLocalGatewayRoutesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SearchLocalGatewayRoutes(*pRequest), context);
    } );
}
SearchTransitGatewayMulticastGroupsOutcome EC2Client::SearchTransitGatewayMulticastGroups(const SearchTransitGatewayMulticastGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTransitGatewayMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTransitGatewayMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchTransitGatewayMulticastGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SearchTransitGatewayMulticastGroupsOutcomeCallable EC2Client::SearchTransitGatewayMulticastGroupsCallable(const SearchTransitGatewayMulticastGroupsRequest& request) const
{
  std::shared_ptr<SearchTransitGatewayMulticastGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SearchTransitGatewayMulticastGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SearchTransitGatewayMulticastGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::SearchTransitGatewayMulticastGroupsAsync(const SearchTransitGatewayMulticastGroupsRequest& request, const SearchTransitGatewayMulticastGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SearchTransitGatewayMulticastGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SearchTransitGatewayMulticastGroups(*pRequest), context);
    } );
}
SearchTransitGatewayRoutesOutcome EC2Client::SearchTransitGatewayRoutes(const SearchTransitGatewayRoutesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTransitGatewayRoutes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchTransitGatewayRoutesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SearchTransitGatewayRoutesOutcomeCallable EC2Client::SearchTransitGatewayRoutesCallable(const SearchTransitGatewayRoutesRequest& request) const
{
  std::shared_ptr<SearchTransitGatewayRoutesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SearchTransitGatewayRoutesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SearchTransitGatewayRoutes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::SearchTransitGatewayRoutesAsync(const SearchTransitGatewayRoutesRequest& request, const SearchTransitGatewayRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SearchTransitGatewayRoutesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SearchTransitGatewayRoutes(*pRequest), context);
    } );
}
SendDiagnosticInterruptOutcome EC2Client::SendDiagnosticInterrupt(const SendDiagnosticInterruptRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendDiagnosticInterrupt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendDiagnosticInterrupt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendDiagnosticInterruptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SendDiagnosticInterruptOutcomeCallable EC2Client::SendDiagnosticInterruptCallable(const SendDiagnosticInterruptRequest& request) const
{
  std::shared_ptr<SendDiagnosticInterruptRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SendDiagnosticInterruptOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SendDiagnosticInterrupt(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::SendDiagnosticInterruptAsync(const SendDiagnosticInterruptRequest& request, const SendDiagnosticInterruptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SendDiagnosticInterruptRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SendDiagnosticInterrupt(*pRequest), context);
    } );
}
StartInstancesOutcome EC2Client::StartInstances(const StartInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartInstancesOutcomeCallable EC2Client::StartInstancesCallable(const StartInstancesRequest& request) const
{
  std::shared_ptr<StartInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StartInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StartInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StartInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StartInstances(*pRequest), context);
    } );
}
StartNetworkInsightsAccessScopeAnalysisOutcome EC2Client::StartNetworkInsightsAccessScopeAnalysis(const StartNetworkInsightsAccessScopeAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNetworkInsightsAccessScopeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartNetworkInsightsAccessScopeAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartNetworkInsightsAccessScopeAnalysisOutcomeCallable EC2Client::StartNetworkInsightsAccessScopeAnalysisCallable(const StartNetworkInsightsAccessScopeAnalysisRequest& request) const
{
  std::shared_ptr<StartNetworkInsightsAccessScopeAnalysisRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StartNetworkInsightsAccessScopeAnalysisOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StartNetworkInsightsAccessScopeAnalysis(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::StartNetworkInsightsAccessScopeAnalysisAsync(const StartNetworkInsightsAccessScopeAnalysisRequest& request, const StartNetworkInsightsAccessScopeAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StartNetworkInsightsAccessScopeAnalysisRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StartNetworkInsightsAccessScopeAnalysis(*pRequest), context);
    } );
}
StartNetworkInsightsAnalysisOutcome EC2Client::StartNetworkInsightsAnalysis(const StartNetworkInsightsAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNetworkInsightsAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartNetworkInsightsAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartNetworkInsightsAnalysisOutcomeCallable EC2Client::StartNetworkInsightsAnalysisCallable(const StartNetworkInsightsAnalysisRequest& request) const
{
  std::shared_ptr<StartNetworkInsightsAnalysisRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StartNetworkInsightsAnalysisOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StartNetworkInsightsAnalysis(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::StartNetworkInsightsAnalysisAsync(const StartNetworkInsightsAnalysisRequest& request, const StartNetworkInsightsAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StartNetworkInsightsAnalysisRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StartNetworkInsightsAnalysis(*pRequest), context);
    } );
}
StartVpcEndpointServicePrivateDnsVerificationOutcome EC2Client::StartVpcEndpointServicePrivateDnsVerification(const StartVpcEndpointServicePrivateDnsVerificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartVpcEndpointServicePrivateDnsVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartVpcEndpointServicePrivateDnsVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartVpcEndpointServicePrivateDnsVerificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartVpcEndpointServicePrivateDnsVerificationOutcomeCallable EC2Client::StartVpcEndpointServicePrivateDnsVerificationCallable(const StartVpcEndpointServicePrivateDnsVerificationRequest& request) const
{
  std::shared_ptr<StartVpcEndpointServicePrivateDnsVerificationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StartVpcEndpointServicePrivateDnsVerificationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StartVpcEndpointServicePrivateDnsVerification(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::StartVpcEndpointServicePrivateDnsVerificationAsync(const StartVpcEndpointServicePrivateDnsVerificationRequest& request, const StartVpcEndpointServicePrivateDnsVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StartVpcEndpointServicePrivateDnsVerificationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StartVpcEndpointServicePrivateDnsVerification(*pRequest), context);
    } );
}
StopInstancesOutcome EC2Client::StopInstances(const StopInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StopInstancesOutcomeCallable EC2Client::StopInstancesCallable(const StopInstancesRequest& request) const
{
  std::shared_ptr<StopInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StopInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StopInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StopInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StopInstances(*pRequest), context);
    } );
}
TerminateClientVpnConnectionsOutcome EC2Client::TerminateClientVpnConnections(const TerminateClientVpnConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateClientVpnConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateClientVpnConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TerminateClientVpnConnectionsOutcomeCallable EC2Client::TerminateClientVpnConnectionsCallable(const TerminateClientVpnConnectionsRequest& request) const
{
  std::shared_ptr<TerminateClientVpnConnectionsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TerminateClientVpnConnectionsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TerminateClientVpnConnections(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::TerminateClientVpnConnectionsAsync(const TerminateClientVpnConnectionsRequest& request, const TerminateClientVpnConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TerminateClientVpnConnectionsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TerminateClientVpnConnections(*pRequest), context);
    } );
}
TerminateInstancesOutcome EC2Client::TerminateInstances(const TerminateInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TerminateInstancesOutcomeCallable EC2Client::TerminateInstancesCallable(const TerminateInstancesRequest& request) const
{
  std::shared_ptr<TerminateInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TerminateInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TerminateInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TerminateInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TerminateInstances(*pRequest), context);
    } );
}
UnassignIpv6AddressesOutcome EC2Client::UnassignIpv6Addresses(const UnassignIpv6AddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignIpv6Addresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignIpv6AddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnassignIpv6AddressesOutcomeCallable EC2Client::UnassignIpv6AddressesCallable(const UnassignIpv6AddressesRequest& request) const
{
  std::shared_ptr<UnassignIpv6AddressesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UnassignIpv6AddressesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UnassignIpv6Addresses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::UnassignIpv6AddressesAsync(const UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UnassignIpv6AddressesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UnassignIpv6Addresses(*pRequest), context);
    } );
}
UnassignPrivateIpAddressesOutcome EC2Client::UnassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnassignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnassignPrivateIpAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnassignPrivateIpAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnassignPrivateIpAddressesOutcomeCallable EC2Client::UnassignPrivateIpAddressesCallable(const UnassignPrivateIpAddressesRequest& request) const
{
  std::shared_ptr<UnassignPrivateIpAddressesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UnassignPrivateIpAddressesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UnassignPrivateIpAddresses(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::UnassignPrivateIpAddressesAsync(const UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UnassignPrivateIpAddressesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UnassignPrivateIpAddresses(*pRequest), context);
    } );
}
UnmonitorInstancesOutcome EC2Client::UnmonitorInstances(const UnmonitorInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnmonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnmonitorInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnmonitorInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UnmonitorInstancesOutcomeCallable EC2Client::UnmonitorInstancesCallable(const UnmonitorInstancesRequest& request) const
{
  std::shared_ptr<UnmonitorInstancesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UnmonitorInstancesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UnmonitorInstances(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::UnmonitorInstancesAsync(const UnmonitorInstancesRequest& request, const UnmonitorInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UnmonitorInstancesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UnmonitorInstances(*pRequest), context);
    } );
}
UpdateSecurityGroupRuleDescriptionsEgressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsEgress(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityGroupRuleDescriptionsEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityGroupRuleDescriptionsEgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecurityGroupRuleDescriptionsEgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSecurityGroupRuleDescriptionsEgressOutcomeCallable EC2Client::UpdateSecurityGroupRuleDescriptionsEgressCallable(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request) const
{
  std::shared_ptr<UpdateSecurityGroupRuleDescriptionsEgressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityGroupRuleDescriptionsEgressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateSecurityGroupRuleDescriptionsEgress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::UpdateSecurityGroupRuleDescriptionsEgressAsync(const UpdateSecurityGroupRuleDescriptionsEgressRequest& request, const UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateSecurityGroupRuleDescriptionsEgressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateSecurityGroupRuleDescriptionsEgress(*pRequest), context);
    } );
}
UpdateSecurityGroupRuleDescriptionsIngressOutcome EC2Client::UpdateSecurityGroupRuleDescriptionsIngress(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityGroupRuleDescriptionsIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityGroupRuleDescriptionsIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecurityGroupRuleDescriptionsIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdateSecurityGroupRuleDescriptionsIngressOutcomeCallable EC2Client::UpdateSecurityGroupRuleDescriptionsIngressCallable(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request) const
{
  std::shared_ptr<UpdateSecurityGroupRuleDescriptionsIngressRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityGroupRuleDescriptionsIngressOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateSecurityGroupRuleDescriptionsIngress(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::UpdateSecurityGroupRuleDescriptionsIngressAsync(const UpdateSecurityGroupRuleDescriptionsIngressRequest& request, const UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateSecurityGroupRuleDescriptionsIngressRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateSecurityGroupRuleDescriptionsIngress(*pRequest), context);
    } );
}
WithdrawByoipCidrOutcome EC2Client::WithdrawByoipCidr(const WithdrawByoipCidrRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WithdrawByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WithdrawByoipCidr, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return WithdrawByoipCidrOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

WithdrawByoipCidrOutcomeCallable EC2Client::WithdrawByoipCidrCallable(const WithdrawByoipCidrRequest& request) const
{
  std::shared_ptr<WithdrawByoipCidrRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< WithdrawByoipCidrOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->WithdrawByoipCidr(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void EC2Client::WithdrawByoipCidrAsync(const WithdrawByoipCidrRequest& request, const WithdrawByoipCidrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<WithdrawByoipCidrRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, WithdrawByoipCidr(*pRequest), context);
    } );
}
