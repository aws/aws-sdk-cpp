/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ec2/EC2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ec2/EC2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EC2Client header */
#include <aws/ec2/model/AcceptAddressTransferResponse.h>
#include <aws/ec2/model/AcceptReservedInstancesExchangeQuoteResponse.h>
#include <aws/ec2/model/AcceptTransitGatewayMulticastDomainAssociationsResponse.h>
#include <aws/ec2/model/AcceptTransitGatewayPeeringAttachmentResponse.h>
#include <aws/ec2/model/AcceptTransitGatewayVpcAttachmentResponse.h>
#include <aws/ec2/model/AcceptVpcEndpointConnectionsResponse.h>
#include <aws/ec2/model/AcceptVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/AdvertiseByoipCidrResponse.h>
#include <aws/ec2/model/AllocateAddressResponse.h>
#include <aws/ec2/model/AllocateHostsResponse.h>
#include <aws/ec2/model/AllocateIpamPoolCidrResponse.h>
#include <aws/ec2/model/ApplySecurityGroupsToClientVpnTargetNetworkResponse.h>
#include <aws/ec2/model/AssignIpv6AddressesResponse.h>
#include <aws/ec2/model/AssignPrivateIpAddressesResponse.h>
#include <aws/ec2/model/AssociateAddressResponse.h>
#include <aws/ec2/model/AssociateClientVpnTargetNetworkResponse.h>
#include <aws/ec2/model/AssociateEnclaveCertificateIamRoleResponse.h>
#include <aws/ec2/model/AssociateIamInstanceProfileResponse.h>
#include <aws/ec2/model/AssociateInstanceEventWindowResponse.h>
#include <aws/ec2/model/AssociateRouteTableResponse.h>
#include <aws/ec2/model/AssociateSubnetCidrBlockResponse.h>
#include <aws/ec2/model/AssociateTransitGatewayMulticastDomainResponse.h>
#include <aws/ec2/model/AssociateTransitGatewayPolicyTableResponse.h>
#include <aws/ec2/model/AssociateTransitGatewayRouteTableResponse.h>
#include <aws/ec2/model/AssociateTrunkInterfaceResponse.h>
#include <aws/ec2/model/AssociateVpcCidrBlockResponse.h>
#include <aws/ec2/model/AttachClassicLinkVpcResponse.h>
#include <aws/ec2/model/AttachNetworkInterfaceResponse.h>
#include <aws/ec2/model/AttachVerifiedAccessTrustProviderResponse.h>
#include <aws/ec2/model/AttachVolumeResponse.h>
#include <aws/ec2/model/AttachVpnGatewayResponse.h>
#include <aws/ec2/model/AuthorizeClientVpnIngressResponse.h>
#include <aws/ec2/model/AuthorizeSecurityGroupEgressResponse.h>
#include <aws/ec2/model/AuthorizeSecurityGroupIngressResponse.h>
#include <aws/ec2/model/BundleInstanceResponse.h>
#include <aws/ec2/model/CancelBundleTaskResponse.h>
#include <aws/ec2/model/CancelCapacityReservationResponse.h>
#include <aws/ec2/model/CancelCapacityReservationFleetsResponse.h>
#include <aws/ec2/model/CancelImageLaunchPermissionResponse.h>
#include <aws/ec2/model/CancelImportTaskResponse.h>
#include <aws/ec2/model/CancelReservedInstancesListingResponse.h>
#include <aws/ec2/model/CancelSpotFleetRequestsResponse.h>
#include <aws/ec2/model/CancelSpotInstanceRequestsResponse.h>
#include <aws/ec2/model/ConfirmProductInstanceResponse.h>
#include <aws/ec2/model/CopyFpgaImageResponse.h>
#include <aws/ec2/model/CopyImageResponse.h>
#include <aws/ec2/model/CopySnapshotResponse.h>
#include <aws/ec2/model/CreateCapacityReservationResponse.h>
#include <aws/ec2/model/CreateCapacityReservationFleetResponse.h>
#include <aws/ec2/model/CreateCarrierGatewayResponse.h>
#include <aws/ec2/model/CreateClientVpnEndpointResponse.h>
#include <aws/ec2/model/CreateClientVpnRouteResponse.h>
#include <aws/ec2/model/CreateCoipCidrResponse.h>
#include <aws/ec2/model/CreateCoipPoolResponse.h>
#include <aws/ec2/model/CreateCustomerGatewayResponse.h>
#include <aws/ec2/model/CreateDefaultSubnetResponse.h>
#include <aws/ec2/model/CreateDefaultVpcResponse.h>
#include <aws/ec2/model/CreateDhcpOptionsResponse.h>
#include <aws/ec2/model/CreateEgressOnlyInternetGatewayResponse.h>
#include <aws/ec2/model/CreateFleetResponse.h>
#include <aws/ec2/model/CreateFlowLogsResponse.h>
#include <aws/ec2/model/CreateFpgaImageResponse.h>
#include <aws/ec2/model/CreateImageResponse.h>
#include <aws/ec2/model/CreateInstanceEventWindowResponse.h>
#include <aws/ec2/model/CreateInstanceExportTaskResponse.h>
#include <aws/ec2/model/CreateInternetGatewayResponse.h>
#include <aws/ec2/model/CreateIpamResponse.h>
#include <aws/ec2/model/CreateIpamPoolResponse.h>
#include <aws/ec2/model/CreateIpamScopeResponse.h>
#include <aws/ec2/model/CreateKeyPairResponse.h>
#include <aws/ec2/model/CreateLaunchTemplateResponse.h>
#include <aws/ec2/model/CreateLaunchTemplateVersionResponse.h>
#include <aws/ec2/model/CreateLocalGatewayRouteResponse.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableResponse.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse.h>
#include <aws/ec2/model/CreateLocalGatewayRouteTableVpcAssociationResponse.h>
#include <aws/ec2/model/CreateManagedPrefixListResponse.h>
#include <aws/ec2/model/CreateNatGatewayResponse.h>
#include <aws/ec2/model/CreateNetworkAclResponse.h>
#include <aws/ec2/model/CreateNetworkInsightsAccessScopeResponse.h>
#include <aws/ec2/model/CreateNetworkInsightsPathResponse.h>
#include <aws/ec2/model/CreateNetworkInterfaceResponse.h>
#include <aws/ec2/model/CreateNetworkInterfacePermissionResponse.h>
#include <aws/ec2/model/CreatePlacementGroupResponse.h>
#include <aws/ec2/model/CreatePublicIpv4PoolResponse.h>
#include <aws/ec2/model/CreateReplaceRootVolumeTaskResponse.h>
#include <aws/ec2/model/CreateReservedInstancesListingResponse.h>
#include <aws/ec2/model/CreateRestoreImageTaskResponse.h>
#include <aws/ec2/model/CreateRouteResponse.h>
#include <aws/ec2/model/CreateRouteTableResponse.h>
#include <aws/ec2/model/CreateSecurityGroupResponse.h>
#include <aws/ec2/model/CreateSnapshotResponse.h>
#include <aws/ec2/model/CreateSnapshotsResponse.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionResponse.h>
#include <aws/ec2/model/CreateStoreImageTaskResponse.h>
#include <aws/ec2/model/CreateSubnetResponse.h>
#include <aws/ec2/model/CreateSubnetCidrReservationResponse.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterResponse.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRuleResponse.h>
#include <aws/ec2/model/CreateTrafficMirrorSessionResponse.h>
#include <aws/ec2/model/CreateTrafficMirrorTargetResponse.h>
#include <aws/ec2/model/CreateTransitGatewayResponse.h>
#include <aws/ec2/model/CreateTransitGatewayConnectResponse.h>
#include <aws/ec2/model/CreateTransitGatewayConnectPeerResponse.h>
#include <aws/ec2/model/CreateTransitGatewayMulticastDomainResponse.h>
#include <aws/ec2/model/CreateTransitGatewayPeeringAttachmentResponse.h>
#include <aws/ec2/model/CreateTransitGatewayPolicyTableResponse.h>
#include <aws/ec2/model/CreateTransitGatewayPrefixListReferenceResponse.h>
#include <aws/ec2/model/CreateTransitGatewayRouteResponse.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableResponse.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableAnnouncementResponse.h>
#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentResponse.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointResponse.h>
#include <aws/ec2/model/CreateVerifiedAccessGroupResponse.h>
#include <aws/ec2/model/CreateVerifiedAccessInstanceResponse.h>
#include <aws/ec2/model/CreateVerifiedAccessTrustProviderResponse.h>
#include <aws/ec2/model/CreateVolumeResponse.h>
#include <aws/ec2/model/CreateVpcResponse.h>
#include <aws/ec2/model/CreateVpcEndpointResponse.h>
#include <aws/ec2/model/CreateVpcEndpointConnectionNotificationResponse.h>
#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationResponse.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/CreateVpnConnectionResponse.h>
#include <aws/ec2/model/CreateVpnGatewayResponse.h>
#include <aws/ec2/model/DeleteCarrierGatewayResponse.h>
#include <aws/ec2/model/DeleteClientVpnEndpointResponse.h>
#include <aws/ec2/model/DeleteClientVpnRouteResponse.h>
#include <aws/ec2/model/DeleteCoipCidrResponse.h>
#include <aws/ec2/model/DeleteCoipPoolResponse.h>
#include <aws/ec2/model/DeleteEgressOnlyInternetGatewayResponse.h>
#include <aws/ec2/model/DeleteFleetsResponse.h>
#include <aws/ec2/model/DeleteFlowLogsResponse.h>
#include <aws/ec2/model/DeleteFpgaImageResponse.h>
#include <aws/ec2/model/DeleteInstanceEventWindowResponse.h>
#include <aws/ec2/model/DeleteIpamResponse.h>
#include <aws/ec2/model/DeleteIpamPoolResponse.h>
#include <aws/ec2/model/DeleteIpamScopeResponse.h>
#include <aws/ec2/model/DeleteLaunchTemplateResponse.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsResponse.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteResponse.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableResponse.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVpcAssociationResponse.h>
#include <aws/ec2/model/DeleteManagedPrefixListResponse.h>
#include <aws/ec2/model/DeleteNatGatewayResponse.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeResponse.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeAnalysisResponse.h>
#include <aws/ec2/model/DeleteNetworkInsightsAnalysisResponse.h>
#include <aws/ec2/model/DeleteNetworkInsightsPathResponse.h>
#include <aws/ec2/model/DeleteNetworkInterfacePermissionResponse.h>
#include <aws/ec2/model/DeletePublicIpv4PoolResponse.h>
#include <aws/ec2/model/DeleteQueuedReservedInstancesResponse.h>
#include <aws/ec2/model/DeleteSubnetCidrReservationResponse.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterResponse.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRuleResponse.h>
#include <aws/ec2/model/DeleteTrafficMirrorSessionResponse.h>
#include <aws/ec2/model/DeleteTrafficMirrorTargetResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectPeerResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayMulticastDomainResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayPeeringAttachmentResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayPolicyTableResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayPrefixListReferenceResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableAnnouncementResponse.h>
#include <aws/ec2/model/DeleteTransitGatewayVpcAttachmentResponse.h>
#include <aws/ec2/model/DeleteVerifiedAccessEndpointResponse.h>
#include <aws/ec2/model/DeleteVerifiedAccessGroupResponse.h>
#include <aws/ec2/model/DeleteVerifiedAccessInstanceResponse.h>
#include <aws/ec2/model/DeleteVerifiedAccessTrustProviderResponse.h>
#include <aws/ec2/model/DeleteVpcEndpointConnectionNotificationsResponse.h>
#include <aws/ec2/model/DeleteVpcEndpointServiceConfigurationsResponse.h>
#include <aws/ec2/model/DeleteVpcEndpointsResponse.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/DeprovisionByoipCidrResponse.h>
#include <aws/ec2/model/DeprovisionIpamPoolCidrResponse.h>
#include <aws/ec2/model/DeprovisionPublicIpv4PoolCidrResponse.h>
#include <aws/ec2/model/DeregisterInstanceEventNotificationAttributesResponse.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupMembersResponse.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupSourcesResponse.h>
#include <aws/ec2/model/DescribeAccountAttributesResponse.h>
#include <aws/ec2/model/DescribeAddressTransfersResponse.h>
#include <aws/ec2/model/DescribeAddressesResponse.h>
#include <aws/ec2/model/DescribeAddressesAttributeResponse.h>
#include <aws/ec2/model/DescribeAggregateIdFormatResponse.h>
#include <aws/ec2/model/DescribeAvailabilityZonesResponse.h>
#include <aws/ec2/model/DescribeAwsNetworkPerformanceMetricSubscriptionsResponse.h>
#include <aws/ec2/model/DescribeBundleTasksResponse.h>
#include <aws/ec2/model/DescribeByoipCidrsResponse.h>
#include <aws/ec2/model/DescribeCapacityReservationFleetsResponse.h>
#include <aws/ec2/model/DescribeCapacityReservationsResponse.h>
#include <aws/ec2/model/DescribeCarrierGatewaysResponse.h>
#include <aws/ec2/model/DescribeClassicLinkInstancesResponse.h>
#include <aws/ec2/model/DescribeClientVpnAuthorizationRulesResponse.h>
#include <aws/ec2/model/DescribeClientVpnConnectionsResponse.h>
#include <aws/ec2/model/DescribeClientVpnEndpointsResponse.h>
#include <aws/ec2/model/DescribeClientVpnRoutesResponse.h>
#include <aws/ec2/model/DescribeClientVpnTargetNetworksResponse.h>
#include <aws/ec2/model/DescribeCoipPoolsResponse.h>
#include <aws/ec2/model/DescribeConversionTasksResponse.h>
#include <aws/ec2/model/DescribeCustomerGatewaysResponse.h>
#include <aws/ec2/model/DescribeDhcpOptionsResponse.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysResponse.h>
#include <aws/ec2/model/DescribeElasticGpusResponse.h>
#include <aws/ec2/model/DescribeExportImageTasksResponse.h>
#include <aws/ec2/model/DescribeExportTasksResponse.h>
#include <aws/ec2/model/DescribeFastLaunchImagesResponse.h>
#include <aws/ec2/model/DescribeFastSnapshotRestoresResponse.h>
#include <aws/ec2/model/DescribeFleetHistoryResponse.h>
#include <aws/ec2/model/DescribeFleetInstancesResponse.h>
#include <aws/ec2/model/DescribeFleetsResponse.h>
#include <aws/ec2/model/DescribeFlowLogsResponse.h>
#include <aws/ec2/model/DescribeFpgaImageAttributeResponse.h>
#include <aws/ec2/model/DescribeFpgaImagesResponse.h>
#include <aws/ec2/model/DescribeHostReservationOfferingsResponse.h>
#include <aws/ec2/model/DescribeHostReservationsResponse.h>
#include <aws/ec2/model/DescribeHostsResponse.h>
#include <aws/ec2/model/DescribeIamInstanceProfileAssociationsResponse.h>
#include <aws/ec2/model/DescribeIdFormatResponse.h>
#include <aws/ec2/model/DescribeIdentityIdFormatResponse.h>
#include <aws/ec2/model/DescribeImageAttributeResponse.h>
#include <aws/ec2/model/DescribeImagesResponse.h>
#include <aws/ec2/model/DescribeImportImageTasksResponse.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksResponse.h>
#include <aws/ec2/model/DescribeInstanceAttributeResponse.h>
#include <aws/ec2/model/DescribeInstanceCreditSpecificationsResponse.h>
#include <aws/ec2/model/DescribeInstanceEventNotificationAttributesResponse.h>
#include <aws/ec2/model/DescribeInstanceEventWindowsResponse.h>
#include <aws/ec2/model/DescribeInstanceStatusResponse.h>
#include <aws/ec2/model/DescribeInstanceTypeOfferingsResponse.h>
#include <aws/ec2/model/DescribeInstanceTypesResponse.h>
#include <aws/ec2/model/DescribeInstancesResponse.h>
#include <aws/ec2/model/DescribeInternetGatewaysResponse.h>
#include <aws/ec2/model/DescribeIpamPoolsResponse.h>
#include <aws/ec2/model/DescribeIpamScopesResponse.h>
#include <aws/ec2/model/DescribeIpamsResponse.h>
#include <aws/ec2/model/DescribeIpv6PoolsResponse.h>
#include <aws/ec2/model/DescribeKeyPairsResponse.h>
#include <aws/ec2/model/DescribeLaunchTemplateVersionsResponse.h>
#include <aws/ec2/model/DescribeLaunchTemplatesResponse.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTableVpcAssociationsResponse.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTablesResponse.h>
#include <aws/ec2/model/DescribeLocalGatewayVirtualInterfaceGroupsResponse.h>
#include <aws/ec2/model/DescribeLocalGatewayVirtualInterfacesResponse.h>
#include <aws/ec2/model/DescribeLocalGatewaysResponse.h>
#include <aws/ec2/model/DescribeManagedPrefixListsResponse.h>
#include <aws/ec2/model/DescribeMovingAddressesResponse.h>
#include <aws/ec2/model/DescribeNatGatewaysResponse.h>
#include <aws/ec2/model/DescribeNetworkAclsResponse.h>
#include <aws/ec2/model/DescribeNetworkInsightsAccessScopeAnalysesResponse.h>
#include <aws/ec2/model/DescribeNetworkInsightsAccessScopesResponse.h>
#include <aws/ec2/model/DescribeNetworkInsightsAnalysesResponse.h>
#include <aws/ec2/model/DescribeNetworkInsightsPathsResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfaceAttributeResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfacePermissionsResponse.h>
#include <aws/ec2/model/DescribeNetworkInterfacesResponse.h>
#include <aws/ec2/model/DescribePlacementGroupsResponse.h>
#include <aws/ec2/model/DescribePrefixListsResponse.h>
#include <aws/ec2/model/DescribePrincipalIdFormatResponse.h>
#include <aws/ec2/model/DescribePublicIpv4PoolsResponse.h>
#include <aws/ec2/model/DescribeRegionsResponse.h>
#include <aws/ec2/model/DescribeReplaceRootVolumeTasksResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesListingsResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsResponse.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsResponse.h>
#include <aws/ec2/model/DescribeRouteTablesResponse.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityResponse.h>
#include <aws/ec2/model/DescribeScheduledInstancesResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupReferencesResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupRulesResponse.h>
#include <aws/ec2/model/DescribeSecurityGroupsResponse.h>
#include <aws/ec2/model/DescribeSnapshotAttributeResponse.h>
#include <aws/ec2/model/DescribeSnapshotTierStatusResponse.h>
#include <aws/ec2/model/DescribeSnapshotsResponse.h>
#include <aws/ec2/model/DescribeSpotDatafeedSubscriptionResponse.h>
#include <aws/ec2/model/DescribeSpotFleetInstancesResponse.h>
#include <aws/ec2/model/DescribeSpotFleetRequestHistoryResponse.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsResponse.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsResponse.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryResponse.h>
#include <aws/ec2/model/DescribeStaleSecurityGroupsResponse.h>
#include <aws/ec2/model/DescribeStoreImageTasksResponse.h>
#include <aws/ec2/model/DescribeSubnetsResponse.h>
#include <aws/ec2/model/DescribeTagsResponse.h>
#include <aws/ec2/model/DescribeTrafficMirrorFiltersResponse.h>
#include <aws/ec2/model/DescribeTrafficMirrorSessionsResponse.h>
#include <aws/ec2/model/DescribeTrafficMirrorTargetsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayAttachmentsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectPeersResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayMulticastDomainsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayPeeringAttachmentsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayPolicyTablesResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTableAnnouncementsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTablesResponse.h>
#include <aws/ec2/model/DescribeTransitGatewayVpcAttachmentsResponse.h>
#include <aws/ec2/model/DescribeTransitGatewaysResponse.h>
#include <aws/ec2/model/DescribeTrunkInterfaceAssociationsResponse.h>
#include <aws/ec2/model/DescribeVerifiedAccessEndpointsResponse.h>
#include <aws/ec2/model/DescribeVerifiedAccessGroupsResponse.h>
#include <aws/ec2/model/DescribeVerifiedAccessInstanceLoggingConfigurationsResponse.h>
#include <aws/ec2/model/DescribeVerifiedAccessInstancesResponse.h>
#include <aws/ec2/model/DescribeVerifiedAccessTrustProvidersResponse.h>
#include <aws/ec2/model/DescribeVolumeAttributeResponse.h>
#include <aws/ec2/model/DescribeVolumeStatusResponse.h>
#include <aws/ec2/model/DescribeVolumesResponse.h>
#include <aws/ec2/model/DescribeVolumesModificationsResponse.h>
#include <aws/ec2/model/DescribeVpcAttributeResponse.h>
#include <aws/ec2/model/DescribeVpcClassicLinkResponse.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionNotificationsResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionsResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointServiceConfigurationsResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointServicePermissionsResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointServicesResponse.h>
#include <aws/ec2/model/DescribeVpcEndpointsResponse.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsResponse.h>
#include <aws/ec2/model/DescribeVpcsResponse.h>
#include <aws/ec2/model/DescribeVpnConnectionsResponse.h>
#include <aws/ec2/model/DescribeVpnGatewaysResponse.h>
#include <aws/ec2/model/DetachClassicLinkVpcResponse.h>
#include <aws/ec2/model/DetachVerifiedAccessTrustProviderResponse.h>
#include <aws/ec2/model/DetachVolumeResponse.h>
#include <aws/ec2/model/DisableAddressTransferResponse.h>
#include <aws/ec2/model/DisableAwsNetworkPerformanceMetricSubscriptionResponse.h>
#include <aws/ec2/model/DisableEbsEncryptionByDefaultResponse.h>
#include <aws/ec2/model/DisableFastLaunchResponse.h>
#include <aws/ec2/model/DisableFastSnapshotRestoresResponse.h>
#include <aws/ec2/model/DisableImageDeprecationResponse.h>
#include <aws/ec2/model/DisableIpamOrganizationAdminAccountResponse.h>
#include <aws/ec2/model/DisableSerialConsoleAccessResponse.h>
#include <aws/ec2/model/DisableTransitGatewayRouteTablePropagationResponse.h>
#include <aws/ec2/model/DisableVpcClassicLinkResponse.h>
#include <aws/ec2/model/DisableVpcClassicLinkDnsSupportResponse.h>
#include <aws/ec2/model/DisassociateClientVpnTargetNetworkResponse.h>
#include <aws/ec2/model/DisassociateEnclaveCertificateIamRoleResponse.h>
#include <aws/ec2/model/DisassociateIamInstanceProfileResponse.h>
#include <aws/ec2/model/DisassociateInstanceEventWindowResponse.h>
#include <aws/ec2/model/DisassociateSubnetCidrBlockResponse.h>
#include <aws/ec2/model/DisassociateTransitGatewayMulticastDomainResponse.h>
#include <aws/ec2/model/DisassociateTransitGatewayPolicyTableResponse.h>
#include <aws/ec2/model/DisassociateTransitGatewayRouteTableResponse.h>
#include <aws/ec2/model/DisassociateTrunkInterfaceResponse.h>
#include <aws/ec2/model/DisassociateVpcCidrBlockResponse.h>
#include <aws/ec2/model/EnableAddressTransferResponse.h>
#include <aws/ec2/model/EnableAwsNetworkPerformanceMetricSubscriptionResponse.h>
#include <aws/ec2/model/EnableEbsEncryptionByDefaultResponse.h>
#include <aws/ec2/model/EnableFastLaunchResponse.h>
#include <aws/ec2/model/EnableFastSnapshotRestoresResponse.h>
#include <aws/ec2/model/EnableImageDeprecationResponse.h>
#include <aws/ec2/model/EnableIpamOrganizationAdminAccountResponse.h>
#include <aws/ec2/model/EnableReachabilityAnalyzerOrganizationSharingResponse.h>
#include <aws/ec2/model/EnableSerialConsoleAccessResponse.h>
#include <aws/ec2/model/EnableTransitGatewayRouteTablePropagationResponse.h>
#include <aws/ec2/model/EnableVpcClassicLinkResponse.h>
#include <aws/ec2/model/EnableVpcClassicLinkDnsSupportResponse.h>
#include <aws/ec2/model/ExportClientVpnClientCertificateRevocationListResponse.h>
#include <aws/ec2/model/ExportClientVpnClientConfigurationResponse.h>
#include <aws/ec2/model/ExportImageResponse.h>
#include <aws/ec2/model/ExportTransitGatewayRoutesResponse.h>
#include <aws/ec2/model/GetAssociatedEnclaveCertificateIamRolesResponse.h>
#include <aws/ec2/model/GetAssociatedIpv6PoolCidrsResponse.h>
#include <aws/ec2/model/GetAwsNetworkPerformanceDataResponse.h>
#include <aws/ec2/model/GetCapacityReservationUsageResponse.h>
#include <aws/ec2/model/GetCoipPoolUsageResponse.h>
#include <aws/ec2/model/GetConsoleOutputResponse.h>
#include <aws/ec2/model/GetConsoleScreenshotResponse.h>
#include <aws/ec2/model/GetDefaultCreditSpecificationResponse.h>
#include <aws/ec2/model/GetEbsDefaultKmsKeyIdResponse.h>
#include <aws/ec2/model/GetEbsEncryptionByDefaultResponse.h>
#include <aws/ec2/model/GetFlowLogsIntegrationTemplateResponse.h>
#include <aws/ec2/model/GetGroupsForCapacityReservationResponse.h>
#include <aws/ec2/model/GetHostReservationPurchasePreviewResponse.h>
#include <aws/ec2/model/GetInstanceTypesFromInstanceRequirementsResponse.h>
#include <aws/ec2/model/GetInstanceUefiDataResponse.h>
#include <aws/ec2/model/GetIpamAddressHistoryResponse.h>
#include <aws/ec2/model/GetIpamPoolAllocationsResponse.h>
#include <aws/ec2/model/GetIpamPoolCidrsResponse.h>
#include <aws/ec2/model/GetIpamResourceCidrsResponse.h>
#include <aws/ec2/model/GetLaunchTemplateDataResponse.h>
#include <aws/ec2/model/GetManagedPrefixListAssociationsResponse.h>
#include <aws/ec2/model/GetManagedPrefixListEntriesResponse.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeAnalysisFindingsResponse.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeContentResponse.h>
#include <aws/ec2/model/GetPasswordDataResponse.h>
#include <aws/ec2/model/GetReservedInstancesExchangeQuoteResponse.h>
#include <aws/ec2/model/GetSerialConsoleAccessStatusResponse.h>
#include <aws/ec2/model/GetSpotPlacementScoresResponse.h>
#include <aws/ec2/model/GetSubnetCidrReservationsResponse.h>
#include <aws/ec2/model/GetTransitGatewayAttachmentPropagationsResponse.h>
#include <aws/ec2/model/GetTransitGatewayMulticastDomainAssociationsResponse.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableAssociationsResponse.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableEntriesResponse.h>
#include <aws/ec2/model/GetTransitGatewayPrefixListReferencesResponse.h>
#include <aws/ec2/model/GetTransitGatewayRouteTableAssociationsResponse.h>
#include <aws/ec2/model/GetTransitGatewayRouteTablePropagationsResponse.h>
#include <aws/ec2/model/GetVerifiedAccessEndpointPolicyResponse.h>
#include <aws/ec2/model/GetVerifiedAccessGroupPolicyResponse.h>
#include <aws/ec2/model/GetVpnConnectionDeviceSampleConfigurationResponse.h>
#include <aws/ec2/model/GetVpnConnectionDeviceTypesResponse.h>
#include <aws/ec2/model/ImportClientVpnClientCertificateRevocationListResponse.h>
#include <aws/ec2/model/ImportImageResponse.h>
#include <aws/ec2/model/ImportInstanceResponse.h>
#include <aws/ec2/model/ImportKeyPairResponse.h>
#include <aws/ec2/model/ImportSnapshotResponse.h>
#include <aws/ec2/model/ImportVolumeResponse.h>
#include <aws/ec2/model/ListImagesInRecycleBinResponse.h>
#include <aws/ec2/model/ListSnapshotsInRecycleBinResponse.h>
#include <aws/ec2/model/ModifyAddressAttributeResponse.h>
#include <aws/ec2/model/ModifyAvailabilityZoneGroupResponse.h>
#include <aws/ec2/model/ModifyCapacityReservationResponse.h>
#include <aws/ec2/model/ModifyCapacityReservationFleetResponse.h>
#include <aws/ec2/model/ModifyClientVpnEndpointResponse.h>
#include <aws/ec2/model/ModifyDefaultCreditSpecificationResponse.h>
#include <aws/ec2/model/ModifyEbsDefaultKmsKeyIdResponse.h>
#include <aws/ec2/model/ModifyFleetResponse.h>
#include <aws/ec2/model/ModifyFpgaImageAttributeResponse.h>
#include <aws/ec2/model/ModifyHostsResponse.h>
#include <aws/ec2/model/ModifyInstanceCapacityReservationAttributesResponse.h>
#include <aws/ec2/model/ModifyInstanceCreditSpecificationResponse.h>
#include <aws/ec2/model/ModifyInstanceEventStartTimeResponse.h>
#include <aws/ec2/model/ModifyInstanceEventWindowResponse.h>
#include <aws/ec2/model/ModifyInstanceMaintenanceOptionsResponse.h>
#include <aws/ec2/model/ModifyInstanceMetadataOptionsResponse.h>
#include <aws/ec2/model/ModifyInstancePlacementResponse.h>
#include <aws/ec2/model/ModifyIpamResponse.h>
#include <aws/ec2/model/ModifyIpamPoolResponse.h>
#include <aws/ec2/model/ModifyIpamResourceCidrResponse.h>
#include <aws/ec2/model/ModifyIpamScopeResponse.h>
#include <aws/ec2/model/ModifyLaunchTemplateResponse.h>
#include <aws/ec2/model/ModifyLocalGatewayRouteResponse.h>
#include <aws/ec2/model/ModifyManagedPrefixListResponse.h>
#include <aws/ec2/model/ModifyPrivateDnsNameOptionsResponse.h>
#include <aws/ec2/model/ModifyReservedInstancesResponse.h>
#include <aws/ec2/model/ModifySecurityGroupRulesResponse.h>
#include <aws/ec2/model/ModifySnapshotTierResponse.h>
#include <aws/ec2/model/ModifySpotFleetRequestResponse.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterNetworkServicesResponse.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterRuleResponse.h>
#include <aws/ec2/model/ModifyTrafficMirrorSessionResponse.h>
#include <aws/ec2/model/ModifyTransitGatewayResponse.h>
#include <aws/ec2/model/ModifyTransitGatewayPrefixListReferenceResponse.h>
#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointPolicyResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessGroupResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessGroupPolicyResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessInstanceResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessInstanceLoggingConfigurationResponse.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderResponse.h>
#include <aws/ec2/model/ModifyVolumeResponse.h>
#include <aws/ec2/model/ModifyVpcEndpointResponse.h>
#include <aws/ec2/model/ModifyVpcEndpointConnectionNotificationResponse.h>
#include <aws/ec2/model/ModifyVpcEndpointServiceConfigurationResponse.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePayerResponsibilityResponse.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePermissionsResponse.h>
#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsResponse.h>
#include <aws/ec2/model/ModifyVpcTenancyResponse.h>
#include <aws/ec2/model/ModifyVpnConnectionResponse.h>
#include <aws/ec2/model/ModifyVpnConnectionOptionsResponse.h>
#include <aws/ec2/model/ModifyVpnTunnelCertificateResponse.h>
#include <aws/ec2/model/ModifyVpnTunnelOptionsResponse.h>
#include <aws/ec2/model/MonitorInstancesResponse.h>
#include <aws/ec2/model/MoveAddressToVpcResponse.h>
#include <aws/ec2/model/MoveByoipCidrToIpamResponse.h>
#include <aws/ec2/model/ProvisionByoipCidrResponse.h>
#include <aws/ec2/model/ProvisionIpamPoolCidrResponse.h>
#include <aws/ec2/model/ProvisionPublicIpv4PoolCidrResponse.h>
#include <aws/ec2/model/PurchaseHostReservationResponse.h>
#include <aws/ec2/model/PurchaseReservedInstancesOfferingResponse.h>
#include <aws/ec2/model/PurchaseScheduledInstancesResponse.h>
#include <aws/ec2/model/RegisterImageResponse.h>
#include <aws/ec2/model/RegisterInstanceEventNotificationAttributesResponse.h>
#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupMembersResponse.h>
#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupSourcesResponse.h>
#include <aws/ec2/model/RejectTransitGatewayMulticastDomainAssociationsResponse.h>
#include <aws/ec2/model/RejectTransitGatewayPeeringAttachmentResponse.h>
#include <aws/ec2/model/RejectTransitGatewayVpcAttachmentResponse.h>
#include <aws/ec2/model/RejectVpcEndpointConnectionsResponse.h>
#include <aws/ec2/model/RejectVpcPeeringConnectionResponse.h>
#include <aws/ec2/model/ReleaseHostsResponse.h>
#include <aws/ec2/model/ReleaseIpamPoolAllocationResponse.h>
#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationResponse.h>
#include <aws/ec2/model/ReplaceNetworkAclAssociationResponse.h>
#include <aws/ec2/model/ReplaceRouteTableAssociationResponse.h>
#include <aws/ec2/model/ReplaceTransitGatewayRouteResponse.h>
#include <aws/ec2/model/RequestSpotFleetResponse.h>
#include <aws/ec2/model/RequestSpotInstancesResponse.h>
#include <aws/ec2/model/ResetAddressAttributeResponse.h>
#include <aws/ec2/model/ResetEbsDefaultKmsKeyIdResponse.h>
#include <aws/ec2/model/ResetFpgaImageAttributeResponse.h>
#include <aws/ec2/model/RestoreAddressToClassicResponse.h>
#include <aws/ec2/model/RestoreImageFromRecycleBinResponse.h>
#include <aws/ec2/model/RestoreManagedPrefixListVersionResponse.h>
#include <aws/ec2/model/RestoreSnapshotFromRecycleBinResponse.h>
#include <aws/ec2/model/RestoreSnapshotTierResponse.h>
#include <aws/ec2/model/RevokeClientVpnIngressResponse.h>
#include <aws/ec2/model/RevokeSecurityGroupEgressResponse.h>
#include <aws/ec2/model/RevokeSecurityGroupIngressResponse.h>
#include <aws/ec2/model/RunInstancesResponse.h>
#include <aws/ec2/model/RunScheduledInstancesResponse.h>
#include <aws/ec2/model/SearchLocalGatewayRoutesResponse.h>
#include <aws/ec2/model/SearchTransitGatewayMulticastGroupsResponse.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesResponse.h>
#include <aws/ec2/model/StartInstancesResponse.h>
#include <aws/ec2/model/StartNetworkInsightsAccessScopeAnalysisResponse.h>
#include <aws/ec2/model/StartNetworkInsightsAnalysisResponse.h>
#include <aws/ec2/model/StartVpcEndpointServicePrivateDnsVerificationResponse.h>
#include <aws/ec2/model/StopInstancesResponse.h>
#include <aws/ec2/model/TerminateClientVpnConnectionsResponse.h>
#include <aws/ec2/model/TerminateInstancesResponse.h>
#include <aws/ec2/model/UnassignIpv6AddressesResponse.h>
#include <aws/ec2/model/UnmonitorInstancesResponse.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsEgressResponse.h>
#include <aws/ec2/model/UpdateSecurityGroupRuleDescriptionsIngressResponse.h>
#include <aws/ec2/model/WithdrawByoipCidrResponse.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in EC2Client header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace EC2
  {
    using EC2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EC2EndpointProviderBase = Aws::EC2::Endpoint::EC2EndpointProviderBase;
    using EC2EndpointProvider = Aws::EC2::Endpoint::EC2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EC2Client header */
      class AcceptAddressTransferRequest;
      class AcceptReservedInstancesExchangeQuoteRequest;
      class AcceptTransitGatewayMulticastDomainAssociationsRequest;
      class AcceptTransitGatewayPeeringAttachmentRequest;
      class AcceptTransitGatewayVpcAttachmentRequest;
      class AcceptVpcEndpointConnectionsRequest;
      class AcceptVpcPeeringConnectionRequest;
      class AdvertiseByoipCidrRequest;
      class AllocateAddressRequest;
      class AllocateHostsRequest;
      class AllocateIpamPoolCidrRequest;
      class ApplySecurityGroupsToClientVpnTargetNetworkRequest;
      class AssignIpv6AddressesRequest;
      class AssignPrivateIpAddressesRequest;
      class AssociateAddressRequest;
      class AssociateClientVpnTargetNetworkRequest;
      class AssociateDhcpOptionsRequest;
      class AssociateEnclaveCertificateIamRoleRequest;
      class AssociateIamInstanceProfileRequest;
      class AssociateInstanceEventWindowRequest;
      class AssociateRouteTableRequest;
      class AssociateSubnetCidrBlockRequest;
      class AssociateTransitGatewayMulticastDomainRequest;
      class AssociateTransitGatewayPolicyTableRequest;
      class AssociateTransitGatewayRouteTableRequest;
      class AssociateTrunkInterfaceRequest;
      class AssociateVpcCidrBlockRequest;
      class AttachClassicLinkVpcRequest;
      class AttachInternetGatewayRequest;
      class AttachNetworkInterfaceRequest;
      class AttachVerifiedAccessTrustProviderRequest;
      class AttachVolumeRequest;
      class AttachVpnGatewayRequest;
      class AuthorizeClientVpnIngressRequest;
      class AuthorizeSecurityGroupEgressRequest;
      class AuthorizeSecurityGroupIngressRequest;
      class BundleInstanceRequest;
      class CancelBundleTaskRequest;
      class CancelCapacityReservationRequest;
      class CancelCapacityReservationFleetsRequest;
      class CancelConversionTaskRequest;
      class CancelExportTaskRequest;
      class CancelImageLaunchPermissionRequest;
      class CancelImportTaskRequest;
      class CancelReservedInstancesListingRequest;
      class CancelSpotFleetRequestsRequest;
      class CancelSpotInstanceRequestsRequest;
      class ConfirmProductInstanceRequest;
      class CopyFpgaImageRequest;
      class CopyImageRequest;
      class CopySnapshotRequest;
      class CreateCapacityReservationRequest;
      class CreateCapacityReservationFleetRequest;
      class CreateCarrierGatewayRequest;
      class CreateClientVpnEndpointRequest;
      class CreateClientVpnRouteRequest;
      class CreateCoipCidrRequest;
      class CreateCoipPoolRequest;
      class CreateCustomerGatewayRequest;
      class CreateDefaultSubnetRequest;
      class CreateDefaultVpcRequest;
      class CreateDhcpOptionsRequest;
      class CreateEgressOnlyInternetGatewayRequest;
      class CreateFleetRequest;
      class CreateFlowLogsRequest;
      class CreateFpgaImageRequest;
      class CreateImageRequest;
      class CreateInstanceEventWindowRequest;
      class CreateInstanceExportTaskRequest;
      class CreateInternetGatewayRequest;
      class CreateIpamRequest;
      class CreateIpamPoolRequest;
      class CreateIpamScopeRequest;
      class CreateKeyPairRequest;
      class CreateLaunchTemplateRequest;
      class CreateLaunchTemplateVersionRequest;
      class CreateLocalGatewayRouteRequest;
      class CreateLocalGatewayRouteTableRequest;
      class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest;
      class CreateLocalGatewayRouteTableVpcAssociationRequest;
      class CreateManagedPrefixListRequest;
      class CreateNatGatewayRequest;
      class CreateNetworkAclRequest;
      class CreateNetworkAclEntryRequest;
      class CreateNetworkInsightsAccessScopeRequest;
      class CreateNetworkInsightsPathRequest;
      class CreateNetworkInterfaceRequest;
      class CreateNetworkInterfacePermissionRequest;
      class CreatePlacementGroupRequest;
      class CreatePublicIpv4PoolRequest;
      class CreateReplaceRootVolumeTaskRequest;
      class CreateReservedInstancesListingRequest;
      class CreateRestoreImageTaskRequest;
      class CreateRouteRequest;
      class CreateRouteTableRequest;
      class CreateSecurityGroupRequest;
      class CreateSnapshotRequest;
      class CreateSnapshotsRequest;
      class CreateSpotDatafeedSubscriptionRequest;
      class CreateStoreImageTaskRequest;
      class CreateSubnetRequest;
      class CreateSubnetCidrReservationRequest;
      class CreateTagsRequest;
      class CreateTrafficMirrorFilterRequest;
      class CreateTrafficMirrorFilterRuleRequest;
      class CreateTrafficMirrorSessionRequest;
      class CreateTrafficMirrorTargetRequest;
      class CreateTransitGatewayRequest;
      class CreateTransitGatewayConnectRequest;
      class CreateTransitGatewayConnectPeerRequest;
      class CreateTransitGatewayMulticastDomainRequest;
      class CreateTransitGatewayPeeringAttachmentRequest;
      class CreateTransitGatewayPolicyTableRequest;
      class CreateTransitGatewayPrefixListReferenceRequest;
      class CreateTransitGatewayRouteRequest;
      class CreateTransitGatewayRouteTableRequest;
      class CreateTransitGatewayRouteTableAnnouncementRequest;
      class CreateTransitGatewayVpcAttachmentRequest;
      class CreateVerifiedAccessEndpointRequest;
      class CreateVerifiedAccessGroupRequest;
      class CreateVerifiedAccessInstanceRequest;
      class CreateVerifiedAccessTrustProviderRequest;
      class CreateVolumeRequest;
      class CreateVpcRequest;
      class CreateVpcEndpointRequest;
      class CreateVpcEndpointConnectionNotificationRequest;
      class CreateVpcEndpointServiceConfigurationRequest;
      class CreateVpcPeeringConnectionRequest;
      class CreateVpnConnectionRequest;
      class CreateVpnConnectionRouteRequest;
      class CreateVpnGatewayRequest;
      class DeleteCarrierGatewayRequest;
      class DeleteClientVpnEndpointRequest;
      class DeleteClientVpnRouteRequest;
      class DeleteCoipCidrRequest;
      class DeleteCoipPoolRequest;
      class DeleteCustomerGatewayRequest;
      class DeleteDhcpOptionsRequest;
      class DeleteEgressOnlyInternetGatewayRequest;
      class DeleteFleetsRequest;
      class DeleteFlowLogsRequest;
      class DeleteFpgaImageRequest;
      class DeleteInstanceEventWindowRequest;
      class DeleteInternetGatewayRequest;
      class DeleteIpamRequest;
      class DeleteIpamPoolRequest;
      class DeleteIpamScopeRequest;
      class DeleteKeyPairRequest;
      class DeleteLaunchTemplateRequest;
      class DeleteLaunchTemplateVersionsRequest;
      class DeleteLocalGatewayRouteRequest;
      class DeleteLocalGatewayRouteTableRequest;
      class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest;
      class DeleteLocalGatewayRouteTableVpcAssociationRequest;
      class DeleteManagedPrefixListRequest;
      class DeleteNatGatewayRequest;
      class DeleteNetworkAclRequest;
      class DeleteNetworkAclEntryRequest;
      class DeleteNetworkInsightsAccessScopeRequest;
      class DeleteNetworkInsightsAccessScopeAnalysisRequest;
      class DeleteNetworkInsightsAnalysisRequest;
      class DeleteNetworkInsightsPathRequest;
      class DeleteNetworkInterfaceRequest;
      class DeleteNetworkInterfacePermissionRequest;
      class DeletePlacementGroupRequest;
      class DeletePublicIpv4PoolRequest;
      class DeleteQueuedReservedInstancesRequest;
      class DeleteRouteRequest;
      class DeleteRouteTableRequest;
      class DeleteSecurityGroupRequest;
      class DeleteSnapshotRequest;
      class DeleteSpotDatafeedSubscriptionRequest;
      class DeleteSubnetRequest;
      class DeleteSubnetCidrReservationRequest;
      class DeleteTagsRequest;
      class DeleteTrafficMirrorFilterRequest;
      class DeleteTrafficMirrorFilterRuleRequest;
      class DeleteTrafficMirrorSessionRequest;
      class DeleteTrafficMirrorTargetRequest;
      class DeleteTransitGatewayRequest;
      class DeleteTransitGatewayConnectRequest;
      class DeleteTransitGatewayConnectPeerRequest;
      class DeleteTransitGatewayMulticastDomainRequest;
      class DeleteTransitGatewayPeeringAttachmentRequest;
      class DeleteTransitGatewayPolicyTableRequest;
      class DeleteTransitGatewayPrefixListReferenceRequest;
      class DeleteTransitGatewayRouteRequest;
      class DeleteTransitGatewayRouteTableRequest;
      class DeleteTransitGatewayRouteTableAnnouncementRequest;
      class DeleteTransitGatewayVpcAttachmentRequest;
      class DeleteVerifiedAccessEndpointRequest;
      class DeleteVerifiedAccessGroupRequest;
      class DeleteVerifiedAccessInstanceRequest;
      class DeleteVerifiedAccessTrustProviderRequest;
      class DeleteVolumeRequest;
      class DeleteVpcRequest;
      class DeleteVpcEndpointConnectionNotificationsRequest;
      class DeleteVpcEndpointServiceConfigurationsRequest;
      class DeleteVpcEndpointsRequest;
      class DeleteVpcPeeringConnectionRequest;
      class DeleteVpnConnectionRequest;
      class DeleteVpnConnectionRouteRequest;
      class DeleteVpnGatewayRequest;
      class DeprovisionByoipCidrRequest;
      class DeprovisionIpamPoolCidrRequest;
      class DeprovisionPublicIpv4PoolCidrRequest;
      class DeregisterImageRequest;
      class DeregisterInstanceEventNotificationAttributesRequest;
      class DeregisterTransitGatewayMulticastGroupMembersRequest;
      class DeregisterTransitGatewayMulticastGroupSourcesRequest;
      class DescribeAccountAttributesRequest;
      class DescribeAddressTransfersRequest;
      class DescribeAddressesRequest;
      class DescribeAddressesAttributeRequest;
      class DescribeAggregateIdFormatRequest;
      class DescribeAvailabilityZonesRequest;
      class DescribeAwsNetworkPerformanceMetricSubscriptionsRequest;
      class DescribeBundleTasksRequest;
      class DescribeByoipCidrsRequest;
      class DescribeCapacityReservationFleetsRequest;
      class DescribeCapacityReservationsRequest;
      class DescribeCarrierGatewaysRequest;
      class DescribeClassicLinkInstancesRequest;
      class DescribeClientVpnAuthorizationRulesRequest;
      class DescribeClientVpnConnectionsRequest;
      class DescribeClientVpnEndpointsRequest;
      class DescribeClientVpnRoutesRequest;
      class DescribeClientVpnTargetNetworksRequest;
      class DescribeCoipPoolsRequest;
      class DescribeConversionTasksRequest;
      class DescribeCustomerGatewaysRequest;
      class DescribeDhcpOptionsRequest;
      class DescribeEgressOnlyInternetGatewaysRequest;
      class DescribeElasticGpusRequest;
      class DescribeExportImageTasksRequest;
      class DescribeExportTasksRequest;
      class DescribeFastLaunchImagesRequest;
      class DescribeFastSnapshotRestoresRequest;
      class DescribeFleetHistoryRequest;
      class DescribeFleetInstancesRequest;
      class DescribeFleetsRequest;
      class DescribeFlowLogsRequest;
      class DescribeFpgaImageAttributeRequest;
      class DescribeFpgaImagesRequest;
      class DescribeHostReservationOfferingsRequest;
      class DescribeHostReservationsRequest;
      class DescribeHostsRequest;
      class DescribeIamInstanceProfileAssociationsRequest;
      class DescribeIdFormatRequest;
      class DescribeIdentityIdFormatRequest;
      class DescribeImageAttributeRequest;
      class DescribeImagesRequest;
      class DescribeImportImageTasksRequest;
      class DescribeImportSnapshotTasksRequest;
      class DescribeInstanceAttributeRequest;
      class DescribeInstanceCreditSpecificationsRequest;
      class DescribeInstanceEventNotificationAttributesRequest;
      class DescribeInstanceEventWindowsRequest;
      class DescribeInstanceStatusRequest;
      class DescribeInstanceTypeOfferingsRequest;
      class DescribeInstanceTypesRequest;
      class DescribeInstancesRequest;
      class DescribeInternetGatewaysRequest;
      class DescribeIpamPoolsRequest;
      class DescribeIpamScopesRequest;
      class DescribeIpamsRequest;
      class DescribeIpv6PoolsRequest;
      class DescribeKeyPairsRequest;
      class DescribeLaunchTemplateVersionsRequest;
      class DescribeLaunchTemplatesRequest;
      class DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest;
      class DescribeLocalGatewayRouteTableVpcAssociationsRequest;
      class DescribeLocalGatewayRouteTablesRequest;
      class DescribeLocalGatewayVirtualInterfaceGroupsRequest;
      class DescribeLocalGatewayVirtualInterfacesRequest;
      class DescribeLocalGatewaysRequest;
      class DescribeManagedPrefixListsRequest;
      class DescribeMovingAddressesRequest;
      class DescribeNatGatewaysRequest;
      class DescribeNetworkAclsRequest;
      class DescribeNetworkInsightsAccessScopeAnalysesRequest;
      class DescribeNetworkInsightsAccessScopesRequest;
      class DescribeNetworkInsightsAnalysesRequest;
      class DescribeNetworkInsightsPathsRequest;
      class DescribeNetworkInterfaceAttributeRequest;
      class DescribeNetworkInterfacePermissionsRequest;
      class DescribeNetworkInterfacesRequest;
      class DescribePlacementGroupsRequest;
      class DescribePrefixListsRequest;
      class DescribePrincipalIdFormatRequest;
      class DescribePublicIpv4PoolsRequest;
      class DescribeRegionsRequest;
      class DescribeReplaceRootVolumeTasksRequest;
      class DescribeReservedInstancesRequest;
      class DescribeReservedInstancesListingsRequest;
      class DescribeReservedInstancesModificationsRequest;
      class DescribeReservedInstancesOfferingsRequest;
      class DescribeRouteTablesRequest;
      class DescribeScheduledInstanceAvailabilityRequest;
      class DescribeScheduledInstancesRequest;
      class DescribeSecurityGroupReferencesRequest;
      class DescribeSecurityGroupRulesRequest;
      class DescribeSecurityGroupsRequest;
      class DescribeSnapshotAttributeRequest;
      class DescribeSnapshotTierStatusRequest;
      class DescribeSnapshotsRequest;
      class DescribeSpotDatafeedSubscriptionRequest;
      class DescribeSpotFleetInstancesRequest;
      class DescribeSpotFleetRequestHistoryRequest;
      class DescribeSpotFleetRequestsRequest;
      class DescribeSpotInstanceRequestsRequest;
      class DescribeSpotPriceHistoryRequest;
      class DescribeStaleSecurityGroupsRequest;
      class DescribeStoreImageTasksRequest;
      class DescribeSubnetsRequest;
      class DescribeTagsRequest;
      class DescribeTrafficMirrorFiltersRequest;
      class DescribeTrafficMirrorSessionsRequest;
      class DescribeTrafficMirrorTargetsRequest;
      class DescribeTransitGatewayAttachmentsRequest;
      class DescribeTransitGatewayConnectPeersRequest;
      class DescribeTransitGatewayConnectsRequest;
      class DescribeTransitGatewayMulticastDomainsRequest;
      class DescribeTransitGatewayPeeringAttachmentsRequest;
      class DescribeTransitGatewayPolicyTablesRequest;
      class DescribeTransitGatewayRouteTableAnnouncementsRequest;
      class DescribeTransitGatewayRouteTablesRequest;
      class DescribeTransitGatewayVpcAttachmentsRequest;
      class DescribeTransitGatewaysRequest;
      class DescribeTrunkInterfaceAssociationsRequest;
      class DescribeVerifiedAccessEndpointsRequest;
      class DescribeVerifiedAccessGroupsRequest;
      class DescribeVerifiedAccessInstanceLoggingConfigurationsRequest;
      class DescribeVerifiedAccessInstancesRequest;
      class DescribeVerifiedAccessTrustProvidersRequest;
      class DescribeVolumeAttributeRequest;
      class DescribeVolumeStatusRequest;
      class DescribeVolumesRequest;
      class DescribeVolumesModificationsRequest;
      class DescribeVpcAttributeRequest;
      class DescribeVpcClassicLinkRequest;
      class DescribeVpcClassicLinkDnsSupportRequest;
      class DescribeVpcEndpointConnectionNotificationsRequest;
      class DescribeVpcEndpointConnectionsRequest;
      class DescribeVpcEndpointServiceConfigurationsRequest;
      class DescribeVpcEndpointServicePermissionsRequest;
      class DescribeVpcEndpointServicesRequest;
      class DescribeVpcEndpointsRequest;
      class DescribeVpcPeeringConnectionsRequest;
      class DescribeVpcsRequest;
      class DescribeVpnConnectionsRequest;
      class DescribeVpnGatewaysRequest;
      class DetachClassicLinkVpcRequest;
      class DetachInternetGatewayRequest;
      class DetachNetworkInterfaceRequest;
      class DetachVerifiedAccessTrustProviderRequest;
      class DetachVolumeRequest;
      class DetachVpnGatewayRequest;
      class DisableAddressTransferRequest;
      class DisableAwsNetworkPerformanceMetricSubscriptionRequest;
      class DisableEbsEncryptionByDefaultRequest;
      class DisableFastLaunchRequest;
      class DisableFastSnapshotRestoresRequest;
      class DisableImageDeprecationRequest;
      class DisableIpamOrganizationAdminAccountRequest;
      class DisableSerialConsoleAccessRequest;
      class DisableTransitGatewayRouteTablePropagationRequest;
      class DisableVgwRoutePropagationRequest;
      class DisableVpcClassicLinkRequest;
      class DisableVpcClassicLinkDnsSupportRequest;
      class DisassociateAddressRequest;
      class DisassociateClientVpnTargetNetworkRequest;
      class DisassociateEnclaveCertificateIamRoleRequest;
      class DisassociateIamInstanceProfileRequest;
      class DisassociateInstanceEventWindowRequest;
      class DisassociateRouteTableRequest;
      class DisassociateSubnetCidrBlockRequest;
      class DisassociateTransitGatewayMulticastDomainRequest;
      class DisassociateTransitGatewayPolicyTableRequest;
      class DisassociateTransitGatewayRouteTableRequest;
      class DisassociateTrunkInterfaceRequest;
      class DisassociateVpcCidrBlockRequest;
      class EnableAddressTransferRequest;
      class EnableAwsNetworkPerformanceMetricSubscriptionRequest;
      class EnableEbsEncryptionByDefaultRequest;
      class EnableFastLaunchRequest;
      class EnableFastSnapshotRestoresRequest;
      class EnableImageDeprecationRequest;
      class EnableIpamOrganizationAdminAccountRequest;
      class EnableReachabilityAnalyzerOrganizationSharingRequest;
      class EnableSerialConsoleAccessRequest;
      class EnableTransitGatewayRouteTablePropagationRequest;
      class EnableVgwRoutePropagationRequest;
      class EnableVolumeIORequest;
      class EnableVpcClassicLinkRequest;
      class EnableVpcClassicLinkDnsSupportRequest;
      class ExportClientVpnClientCertificateRevocationListRequest;
      class ExportClientVpnClientConfigurationRequest;
      class ExportImageRequest;
      class ExportTransitGatewayRoutesRequest;
      class GetAssociatedEnclaveCertificateIamRolesRequest;
      class GetAssociatedIpv6PoolCidrsRequest;
      class GetAwsNetworkPerformanceDataRequest;
      class GetCapacityReservationUsageRequest;
      class GetCoipPoolUsageRequest;
      class GetConsoleOutputRequest;
      class GetConsoleScreenshotRequest;
      class GetDefaultCreditSpecificationRequest;
      class GetEbsDefaultKmsKeyIdRequest;
      class GetEbsEncryptionByDefaultRequest;
      class GetFlowLogsIntegrationTemplateRequest;
      class GetGroupsForCapacityReservationRequest;
      class GetHostReservationPurchasePreviewRequest;
      class GetInstanceTypesFromInstanceRequirementsRequest;
      class GetInstanceUefiDataRequest;
      class GetIpamAddressHistoryRequest;
      class GetIpamPoolAllocationsRequest;
      class GetIpamPoolCidrsRequest;
      class GetIpamResourceCidrsRequest;
      class GetLaunchTemplateDataRequest;
      class GetManagedPrefixListAssociationsRequest;
      class GetManagedPrefixListEntriesRequest;
      class GetNetworkInsightsAccessScopeAnalysisFindingsRequest;
      class GetNetworkInsightsAccessScopeContentRequest;
      class GetPasswordDataRequest;
      class GetReservedInstancesExchangeQuoteRequest;
      class GetSerialConsoleAccessStatusRequest;
      class GetSpotPlacementScoresRequest;
      class GetSubnetCidrReservationsRequest;
      class GetTransitGatewayAttachmentPropagationsRequest;
      class GetTransitGatewayMulticastDomainAssociationsRequest;
      class GetTransitGatewayPolicyTableAssociationsRequest;
      class GetTransitGatewayPolicyTableEntriesRequest;
      class GetTransitGatewayPrefixListReferencesRequest;
      class GetTransitGatewayRouteTableAssociationsRequest;
      class GetTransitGatewayRouteTablePropagationsRequest;
      class GetVerifiedAccessEndpointPolicyRequest;
      class GetVerifiedAccessGroupPolicyRequest;
      class GetVpnConnectionDeviceSampleConfigurationRequest;
      class GetVpnConnectionDeviceTypesRequest;
      class ImportClientVpnClientCertificateRevocationListRequest;
      class ImportImageRequest;
      class ImportInstanceRequest;
      class ImportKeyPairRequest;
      class ImportSnapshotRequest;
      class ImportVolumeRequest;
      class ListImagesInRecycleBinRequest;
      class ListSnapshotsInRecycleBinRequest;
      class ModifyAddressAttributeRequest;
      class ModifyAvailabilityZoneGroupRequest;
      class ModifyCapacityReservationRequest;
      class ModifyCapacityReservationFleetRequest;
      class ModifyClientVpnEndpointRequest;
      class ModifyDefaultCreditSpecificationRequest;
      class ModifyEbsDefaultKmsKeyIdRequest;
      class ModifyFleetRequest;
      class ModifyFpgaImageAttributeRequest;
      class ModifyHostsRequest;
      class ModifyIdFormatRequest;
      class ModifyIdentityIdFormatRequest;
      class ModifyImageAttributeRequest;
      class ModifyInstanceAttributeRequest;
      class ModifyInstanceCapacityReservationAttributesRequest;
      class ModifyInstanceCreditSpecificationRequest;
      class ModifyInstanceEventStartTimeRequest;
      class ModifyInstanceEventWindowRequest;
      class ModifyInstanceMaintenanceOptionsRequest;
      class ModifyInstanceMetadataOptionsRequest;
      class ModifyInstancePlacementRequest;
      class ModifyIpamRequest;
      class ModifyIpamPoolRequest;
      class ModifyIpamResourceCidrRequest;
      class ModifyIpamScopeRequest;
      class ModifyLaunchTemplateRequest;
      class ModifyLocalGatewayRouteRequest;
      class ModifyManagedPrefixListRequest;
      class ModifyNetworkInterfaceAttributeRequest;
      class ModifyPrivateDnsNameOptionsRequest;
      class ModifyReservedInstancesRequest;
      class ModifySecurityGroupRulesRequest;
      class ModifySnapshotAttributeRequest;
      class ModifySnapshotTierRequest;
      class ModifySpotFleetRequestRequest;
      class ModifySubnetAttributeRequest;
      class ModifyTrafficMirrorFilterNetworkServicesRequest;
      class ModifyTrafficMirrorFilterRuleRequest;
      class ModifyTrafficMirrorSessionRequest;
      class ModifyTransitGatewayRequest;
      class ModifyTransitGatewayPrefixListReferenceRequest;
      class ModifyTransitGatewayVpcAttachmentRequest;
      class ModifyVerifiedAccessEndpointRequest;
      class ModifyVerifiedAccessEndpointPolicyRequest;
      class ModifyVerifiedAccessGroupRequest;
      class ModifyVerifiedAccessGroupPolicyRequest;
      class ModifyVerifiedAccessInstanceRequest;
      class ModifyVerifiedAccessInstanceLoggingConfigurationRequest;
      class ModifyVerifiedAccessTrustProviderRequest;
      class ModifyVolumeRequest;
      class ModifyVolumeAttributeRequest;
      class ModifyVpcAttributeRequest;
      class ModifyVpcEndpointRequest;
      class ModifyVpcEndpointConnectionNotificationRequest;
      class ModifyVpcEndpointServiceConfigurationRequest;
      class ModifyVpcEndpointServicePayerResponsibilityRequest;
      class ModifyVpcEndpointServicePermissionsRequest;
      class ModifyVpcPeeringConnectionOptionsRequest;
      class ModifyVpcTenancyRequest;
      class ModifyVpnConnectionRequest;
      class ModifyVpnConnectionOptionsRequest;
      class ModifyVpnTunnelCertificateRequest;
      class ModifyVpnTunnelOptionsRequest;
      class MonitorInstancesRequest;
      class MoveAddressToVpcRequest;
      class MoveByoipCidrToIpamRequest;
      class ProvisionByoipCidrRequest;
      class ProvisionIpamPoolCidrRequest;
      class ProvisionPublicIpv4PoolCidrRequest;
      class PurchaseHostReservationRequest;
      class PurchaseReservedInstancesOfferingRequest;
      class PurchaseScheduledInstancesRequest;
      class RebootInstancesRequest;
      class RegisterImageRequest;
      class RegisterInstanceEventNotificationAttributesRequest;
      class RegisterTransitGatewayMulticastGroupMembersRequest;
      class RegisterTransitGatewayMulticastGroupSourcesRequest;
      class RejectTransitGatewayMulticastDomainAssociationsRequest;
      class RejectTransitGatewayPeeringAttachmentRequest;
      class RejectTransitGatewayVpcAttachmentRequest;
      class RejectVpcEndpointConnectionsRequest;
      class RejectVpcPeeringConnectionRequest;
      class ReleaseAddressRequest;
      class ReleaseHostsRequest;
      class ReleaseIpamPoolAllocationRequest;
      class ReplaceIamInstanceProfileAssociationRequest;
      class ReplaceNetworkAclAssociationRequest;
      class ReplaceNetworkAclEntryRequest;
      class ReplaceRouteRequest;
      class ReplaceRouteTableAssociationRequest;
      class ReplaceTransitGatewayRouteRequest;
      class ReportInstanceStatusRequest;
      class RequestSpotFleetRequest;
      class RequestSpotInstancesRequest;
      class ResetAddressAttributeRequest;
      class ResetEbsDefaultKmsKeyIdRequest;
      class ResetFpgaImageAttributeRequest;
      class ResetImageAttributeRequest;
      class ResetInstanceAttributeRequest;
      class ResetNetworkInterfaceAttributeRequest;
      class ResetSnapshotAttributeRequest;
      class RestoreAddressToClassicRequest;
      class RestoreImageFromRecycleBinRequest;
      class RestoreManagedPrefixListVersionRequest;
      class RestoreSnapshotFromRecycleBinRequest;
      class RestoreSnapshotTierRequest;
      class RevokeClientVpnIngressRequest;
      class RevokeSecurityGroupEgressRequest;
      class RevokeSecurityGroupIngressRequest;
      class RunInstancesRequest;
      class RunScheduledInstancesRequest;
      class SearchLocalGatewayRoutesRequest;
      class SearchTransitGatewayMulticastGroupsRequest;
      class SearchTransitGatewayRoutesRequest;
      class SendDiagnosticInterruptRequest;
      class StartInstancesRequest;
      class StartNetworkInsightsAccessScopeAnalysisRequest;
      class StartNetworkInsightsAnalysisRequest;
      class StartVpcEndpointServicePrivateDnsVerificationRequest;
      class StopInstancesRequest;
      class TerminateClientVpnConnectionsRequest;
      class TerminateInstancesRequest;
      class UnassignIpv6AddressesRequest;
      class UnassignPrivateIpAddressesRequest;
      class UnmonitorInstancesRequest;
      class UpdateSecurityGroupRuleDescriptionsEgressRequest;
      class UpdateSecurityGroupRuleDescriptionsIngressRequest;
      class WithdrawByoipCidrRequest;
      /* End of service model forward declarations required in EC2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptAddressTransferResponse, EC2Error> AcceptAddressTransferOutcome;
      typedef Aws::Utils::Outcome<AcceptReservedInstancesExchangeQuoteResponse, EC2Error> AcceptReservedInstancesExchangeQuoteOutcome;
      typedef Aws::Utils::Outcome<AcceptTransitGatewayMulticastDomainAssociationsResponse, EC2Error> AcceptTransitGatewayMulticastDomainAssociationsOutcome;
      typedef Aws::Utils::Outcome<AcceptTransitGatewayPeeringAttachmentResponse, EC2Error> AcceptTransitGatewayPeeringAttachmentOutcome;
      typedef Aws::Utils::Outcome<AcceptTransitGatewayVpcAttachmentResponse, EC2Error> AcceptTransitGatewayVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<AcceptVpcEndpointConnectionsResponse, EC2Error> AcceptVpcEndpointConnectionsOutcome;
      typedef Aws::Utils::Outcome<AcceptVpcPeeringConnectionResponse, EC2Error> AcceptVpcPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<AdvertiseByoipCidrResponse, EC2Error> AdvertiseByoipCidrOutcome;
      typedef Aws::Utils::Outcome<AllocateAddressResponse, EC2Error> AllocateAddressOutcome;
      typedef Aws::Utils::Outcome<AllocateHostsResponse, EC2Error> AllocateHostsOutcome;
      typedef Aws::Utils::Outcome<AllocateIpamPoolCidrResponse, EC2Error> AllocateIpamPoolCidrOutcome;
      typedef Aws::Utils::Outcome<ApplySecurityGroupsToClientVpnTargetNetworkResponse, EC2Error> ApplySecurityGroupsToClientVpnTargetNetworkOutcome;
      typedef Aws::Utils::Outcome<AssignIpv6AddressesResponse, EC2Error> AssignIpv6AddressesOutcome;
      typedef Aws::Utils::Outcome<AssignPrivateIpAddressesResponse, EC2Error> AssignPrivateIpAddressesOutcome;
      typedef Aws::Utils::Outcome<AssociateAddressResponse, EC2Error> AssociateAddressOutcome;
      typedef Aws::Utils::Outcome<AssociateClientVpnTargetNetworkResponse, EC2Error> AssociateClientVpnTargetNetworkOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> AssociateDhcpOptionsOutcome;
      typedef Aws::Utils::Outcome<AssociateEnclaveCertificateIamRoleResponse, EC2Error> AssociateEnclaveCertificateIamRoleOutcome;
      typedef Aws::Utils::Outcome<AssociateIamInstanceProfileResponse, EC2Error> AssociateIamInstanceProfileOutcome;
      typedef Aws::Utils::Outcome<AssociateInstanceEventWindowResponse, EC2Error> AssociateInstanceEventWindowOutcome;
      typedef Aws::Utils::Outcome<AssociateRouteTableResponse, EC2Error> AssociateRouteTableOutcome;
      typedef Aws::Utils::Outcome<AssociateSubnetCidrBlockResponse, EC2Error> AssociateSubnetCidrBlockOutcome;
      typedef Aws::Utils::Outcome<AssociateTransitGatewayMulticastDomainResponse, EC2Error> AssociateTransitGatewayMulticastDomainOutcome;
      typedef Aws::Utils::Outcome<AssociateTransitGatewayPolicyTableResponse, EC2Error> AssociateTransitGatewayPolicyTableOutcome;
      typedef Aws::Utils::Outcome<AssociateTransitGatewayRouteTableResponse, EC2Error> AssociateTransitGatewayRouteTableOutcome;
      typedef Aws::Utils::Outcome<AssociateTrunkInterfaceResponse, EC2Error> AssociateTrunkInterfaceOutcome;
      typedef Aws::Utils::Outcome<AssociateVpcCidrBlockResponse, EC2Error> AssociateVpcCidrBlockOutcome;
      typedef Aws::Utils::Outcome<AttachClassicLinkVpcResponse, EC2Error> AttachClassicLinkVpcOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> AttachInternetGatewayOutcome;
      typedef Aws::Utils::Outcome<AttachNetworkInterfaceResponse, EC2Error> AttachNetworkInterfaceOutcome;
      typedef Aws::Utils::Outcome<AttachVerifiedAccessTrustProviderResponse, EC2Error> AttachVerifiedAccessTrustProviderOutcome;
      typedef Aws::Utils::Outcome<AttachVolumeResponse, EC2Error> AttachVolumeOutcome;
      typedef Aws::Utils::Outcome<AttachVpnGatewayResponse, EC2Error> AttachVpnGatewayOutcome;
      typedef Aws::Utils::Outcome<AuthorizeClientVpnIngressResponse, EC2Error> AuthorizeClientVpnIngressOutcome;
      typedef Aws::Utils::Outcome<AuthorizeSecurityGroupEgressResponse, EC2Error> AuthorizeSecurityGroupEgressOutcome;
      typedef Aws::Utils::Outcome<AuthorizeSecurityGroupIngressResponse, EC2Error> AuthorizeSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<BundleInstanceResponse, EC2Error> BundleInstanceOutcome;
      typedef Aws::Utils::Outcome<CancelBundleTaskResponse, EC2Error> CancelBundleTaskOutcome;
      typedef Aws::Utils::Outcome<CancelCapacityReservationResponse, EC2Error> CancelCapacityReservationOutcome;
      typedef Aws::Utils::Outcome<CancelCapacityReservationFleetsResponse, EC2Error> CancelCapacityReservationFleetsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> CancelConversionTaskOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> CancelExportTaskOutcome;
      typedef Aws::Utils::Outcome<CancelImageLaunchPermissionResponse, EC2Error> CancelImageLaunchPermissionOutcome;
      typedef Aws::Utils::Outcome<CancelImportTaskResponse, EC2Error> CancelImportTaskOutcome;
      typedef Aws::Utils::Outcome<CancelReservedInstancesListingResponse, EC2Error> CancelReservedInstancesListingOutcome;
      typedef Aws::Utils::Outcome<CancelSpotFleetRequestsResponse, EC2Error> CancelSpotFleetRequestsOutcome;
      typedef Aws::Utils::Outcome<CancelSpotInstanceRequestsResponse, EC2Error> CancelSpotInstanceRequestsOutcome;
      typedef Aws::Utils::Outcome<ConfirmProductInstanceResponse, EC2Error> ConfirmProductInstanceOutcome;
      typedef Aws::Utils::Outcome<CopyFpgaImageResponse, EC2Error> CopyFpgaImageOutcome;
      typedef Aws::Utils::Outcome<CopyImageResponse, EC2Error> CopyImageOutcome;
      typedef Aws::Utils::Outcome<CopySnapshotResponse, EC2Error> CopySnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateCapacityReservationResponse, EC2Error> CreateCapacityReservationOutcome;
      typedef Aws::Utils::Outcome<CreateCapacityReservationFleetResponse, EC2Error> CreateCapacityReservationFleetOutcome;
      typedef Aws::Utils::Outcome<CreateCarrierGatewayResponse, EC2Error> CreateCarrierGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateClientVpnEndpointResponse, EC2Error> CreateClientVpnEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateClientVpnRouteResponse, EC2Error> CreateClientVpnRouteOutcome;
      typedef Aws::Utils::Outcome<CreateCoipCidrResponse, EC2Error> CreateCoipCidrOutcome;
      typedef Aws::Utils::Outcome<CreateCoipPoolResponse, EC2Error> CreateCoipPoolOutcome;
      typedef Aws::Utils::Outcome<CreateCustomerGatewayResponse, EC2Error> CreateCustomerGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateDefaultSubnetResponse, EC2Error> CreateDefaultSubnetOutcome;
      typedef Aws::Utils::Outcome<CreateDefaultVpcResponse, EC2Error> CreateDefaultVpcOutcome;
      typedef Aws::Utils::Outcome<CreateDhcpOptionsResponse, EC2Error> CreateDhcpOptionsOutcome;
      typedef Aws::Utils::Outcome<CreateEgressOnlyInternetGatewayResponse, EC2Error> CreateEgressOnlyInternetGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateFleetResponse, EC2Error> CreateFleetOutcome;
      typedef Aws::Utils::Outcome<CreateFlowLogsResponse, EC2Error> CreateFlowLogsOutcome;
      typedef Aws::Utils::Outcome<CreateFpgaImageResponse, EC2Error> CreateFpgaImageOutcome;
      typedef Aws::Utils::Outcome<CreateImageResponse, EC2Error> CreateImageOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceEventWindowResponse, EC2Error> CreateInstanceEventWindowOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceExportTaskResponse, EC2Error> CreateInstanceExportTaskOutcome;
      typedef Aws::Utils::Outcome<CreateInternetGatewayResponse, EC2Error> CreateInternetGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateIpamResponse, EC2Error> CreateIpamOutcome;
      typedef Aws::Utils::Outcome<CreateIpamPoolResponse, EC2Error> CreateIpamPoolOutcome;
      typedef Aws::Utils::Outcome<CreateIpamScopeResponse, EC2Error> CreateIpamScopeOutcome;
      typedef Aws::Utils::Outcome<CreateKeyPairResponse, EC2Error> CreateKeyPairOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchTemplateResponse, EC2Error> CreateLaunchTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchTemplateVersionResponse, EC2Error> CreateLaunchTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<CreateLocalGatewayRouteResponse, EC2Error> CreateLocalGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<CreateLocalGatewayRouteTableResponse, EC2Error> CreateLocalGatewayRouteTableOutcome;
      typedef Aws::Utils::Outcome<CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse, EC2Error> CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateLocalGatewayRouteTableVpcAssociationResponse, EC2Error> CreateLocalGatewayRouteTableVpcAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateManagedPrefixListResponse, EC2Error> CreateManagedPrefixListOutcome;
      typedef Aws::Utils::Outcome<CreateNatGatewayResponse, EC2Error> CreateNatGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkAclResponse, EC2Error> CreateNetworkAclOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> CreateNetworkAclEntryOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkInsightsAccessScopeResponse, EC2Error> CreateNetworkInsightsAccessScopeOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkInsightsPathResponse, EC2Error> CreateNetworkInsightsPathOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkInterfaceResponse, EC2Error> CreateNetworkInterfaceOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkInterfacePermissionResponse, EC2Error> CreateNetworkInterfacePermissionOutcome;
      typedef Aws::Utils::Outcome<CreatePlacementGroupResponse, EC2Error> CreatePlacementGroupOutcome;
      typedef Aws::Utils::Outcome<CreatePublicIpv4PoolResponse, EC2Error> CreatePublicIpv4PoolOutcome;
      typedef Aws::Utils::Outcome<CreateReplaceRootVolumeTaskResponse, EC2Error> CreateReplaceRootVolumeTaskOutcome;
      typedef Aws::Utils::Outcome<CreateReservedInstancesListingResponse, EC2Error> CreateReservedInstancesListingOutcome;
      typedef Aws::Utils::Outcome<CreateRestoreImageTaskResponse, EC2Error> CreateRestoreImageTaskOutcome;
      typedef Aws::Utils::Outcome<CreateRouteResponse, EC2Error> CreateRouteOutcome;
      typedef Aws::Utils::Outcome<CreateRouteTableResponse, EC2Error> CreateRouteTableOutcome;
      typedef Aws::Utils::Outcome<CreateSecurityGroupResponse, EC2Error> CreateSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResponse, EC2Error> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotsResponse, EC2Error> CreateSnapshotsOutcome;
      typedef Aws::Utils::Outcome<CreateSpotDatafeedSubscriptionResponse, EC2Error> CreateSpotDatafeedSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateStoreImageTaskResponse, EC2Error> CreateStoreImageTaskOutcome;
      typedef Aws::Utils::Outcome<CreateSubnetResponse, EC2Error> CreateSubnetOutcome;
      typedef Aws::Utils::Outcome<CreateSubnetCidrReservationResponse, EC2Error> CreateSubnetCidrReservationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficMirrorFilterResponse, EC2Error> CreateTrafficMirrorFilterOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficMirrorFilterRuleResponse, EC2Error> CreateTrafficMirrorFilterRuleOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficMirrorSessionResponse, EC2Error> CreateTrafficMirrorSessionOutcome;
      typedef Aws::Utils::Outcome<CreateTrafficMirrorTargetResponse, EC2Error> CreateTrafficMirrorTargetOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayResponse, EC2Error> CreateTransitGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayConnectResponse, EC2Error> CreateTransitGatewayConnectOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayConnectPeerResponse, EC2Error> CreateTransitGatewayConnectPeerOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayMulticastDomainResponse, EC2Error> CreateTransitGatewayMulticastDomainOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayPeeringAttachmentResponse, EC2Error> CreateTransitGatewayPeeringAttachmentOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayPolicyTableResponse, EC2Error> CreateTransitGatewayPolicyTableOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayPrefixListReferenceResponse, EC2Error> CreateTransitGatewayPrefixListReferenceOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayRouteResponse, EC2Error> CreateTransitGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayRouteTableResponse, EC2Error> CreateTransitGatewayRouteTableOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayRouteTableAnnouncementResponse, EC2Error> CreateTransitGatewayRouteTableAnnouncementOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayVpcAttachmentResponse, EC2Error> CreateTransitGatewayVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<CreateVerifiedAccessEndpointResponse, EC2Error> CreateVerifiedAccessEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateVerifiedAccessGroupResponse, EC2Error> CreateVerifiedAccessGroupOutcome;
      typedef Aws::Utils::Outcome<CreateVerifiedAccessInstanceResponse, EC2Error> CreateVerifiedAccessInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateVerifiedAccessTrustProviderResponse, EC2Error> CreateVerifiedAccessTrustProviderOutcome;
      typedef Aws::Utils::Outcome<CreateVolumeResponse, EC2Error> CreateVolumeOutcome;
      typedef Aws::Utils::Outcome<CreateVpcResponse, EC2Error> CreateVpcOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointResponse, EC2Error> CreateVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointConnectionNotificationResponse, EC2Error> CreateVpcEndpointConnectionNotificationOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointServiceConfigurationResponse, EC2Error> CreateVpcEndpointServiceConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateVpcPeeringConnectionResponse, EC2Error> CreateVpcPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateVpnConnectionResponse, EC2Error> CreateVpnConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> CreateVpnConnectionRouteOutcome;
      typedef Aws::Utils::Outcome<CreateVpnGatewayResponse, EC2Error> CreateVpnGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteCarrierGatewayResponse, EC2Error> DeleteCarrierGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteClientVpnEndpointResponse, EC2Error> DeleteClientVpnEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteClientVpnRouteResponse, EC2Error> DeleteClientVpnRouteOutcome;
      typedef Aws::Utils::Outcome<DeleteCoipCidrResponse, EC2Error> DeleteCoipCidrOutcome;
      typedef Aws::Utils::Outcome<DeleteCoipPoolResponse, EC2Error> DeleteCoipPoolOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteCustomerGatewayOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteDhcpOptionsOutcome;
      typedef Aws::Utils::Outcome<DeleteEgressOnlyInternetGatewayResponse, EC2Error> DeleteEgressOnlyInternetGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteFleetsResponse, EC2Error> DeleteFleetsOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowLogsResponse, EC2Error> DeleteFlowLogsOutcome;
      typedef Aws::Utils::Outcome<DeleteFpgaImageResponse, EC2Error> DeleteFpgaImageOutcome;
      typedef Aws::Utils::Outcome<DeleteInstanceEventWindowResponse, EC2Error> DeleteInstanceEventWindowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteInternetGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteIpamResponse, EC2Error> DeleteIpamOutcome;
      typedef Aws::Utils::Outcome<DeleteIpamPoolResponse, EC2Error> DeleteIpamPoolOutcome;
      typedef Aws::Utils::Outcome<DeleteIpamScopeResponse, EC2Error> DeleteIpamScopeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteKeyPairOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchTemplateResponse, EC2Error> DeleteLaunchTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchTemplateVersionsResponse, EC2Error> DeleteLaunchTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<DeleteLocalGatewayRouteResponse, EC2Error> DeleteLocalGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<DeleteLocalGatewayRouteTableResponse, EC2Error> DeleteLocalGatewayRouteTableOutcome;
      typedef Aws::Utils::Outcome<DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponse, EC2Error> DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteLocalGatewayRouteTableVpcAssociationResponse, EC2Error> DeleteLocalGatewayRouteTableVpcAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteManagedPrefixListResponse, EC2Error> DeleteManagedPrefixListOutcome;
      typedef Aws::Utils::Outcome<DeleteNatGatewayResponse, EC2Error> DeleteNatGatewayOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteNetworkAclOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteNetworkAclEntryOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkInsightsAccessScopeResponse, EC2Error> DeleteNetworkInsightsAccessScopeOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkInsightsAccessScopeAnalysisResponse, EC2Error> DeleteNetworkInsightsAccessScopeAnalysisOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkInsightsAnalysisResponse, EC2Error> DeleteNetworkInsightsAnalysisOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkInsightsPathResponse, EC2Error> DeleteNetworkInsightsPathOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteNetworkInterfaceOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkInterfacePermissionResponse, EC2Error> DeleteNetworkInterfacePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeletePlacementGroupOutcome;
      typedef Aws::Utils::Outcome<DeletePublicIpv4PoolResponse, EC2Error> DeletePublicIpv4PoolOutcome;
      typedef Aws::Utils::Outcome<DeleteQueuedReservedInstancesResponse, EC2Error> DeleteQueuedReservedInstancesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteRouteOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteRouteTableOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteSpotDatafeedSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteSubnetOutcome;
      typedef Aws::Utils::Outcome<DeleteSubnetCidrReservationResponse, EC2Error> DeleteSubnetCidrReservationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficMirrorFilterResponse, EC2Error> DeleteTrafficMirrorFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficMirrorFilterRuleResponse, EC2Error> DeleteTrafficMirrorFilterRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficMirrorSessionResponse, EC2Error> DeleteTrafficMirrorSessionOutcome;
      typedef Aws::Utils::Outcome<DeleteTrafficMirrorTargetResponse, EC2Error> DeleteTrafficMirrorTargetOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayResponse, EC2Error> DeleteTransitGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayConnectResponse, EC2Error> DeleteTransitGatewayConnectOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayConnectPeerResponse, EC2Error> DeleteTransitGatewayConnectPeerOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayMulticastDomainResponse, EC2Error> DeleteTransitGatewayMulticastDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayPeeringAttachmentResponse, EC2Error> DeleteTransitGatewayPeeringAttachmentOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayPolicyTableResponse, EC2Error> DeleteTransitGatewayPolicyTableOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayPrefixListReferenceResponse, EC2Error> DeleteTransitGatewayPrefixListReferenceOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayRouteResponse, EC2Error> DeleteTransitGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayRouteTableResponse, EC2Error> DeleteTransitGatewayRouteTableOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayRouteTableAnnouncementResponse, EC2Error> DeleteTransitGatewayRouteTableAnnouncementOutcome;
      typedef Aws::Utils::Outcome<DeleteTransitGatewayVpcAttachmentResponse, EC2Error> DeleteTransitGatewayVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<DeleteVerifiedAccessEndpointResponse, EC2Error> DeleteVerifiedAccessEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteVerifiedAccessGroupResponse, EC2Error> DeleteVerifiedAccessGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteVerifiedAccessInstanceResponse, EC2Error> DeleteVerifiedAccessInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteVerifiedAccessTrustProviderResponse, EC2Error> DeleteVerifiedAccessTrustProviderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteVolumeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteVpcOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointConnectionNotificationsResponse, EC2Error> DeleteVpcEndpointConnectionNotificationsOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointServiceConfigurationsResponse, EC2Error> DeleteVpcEndpointServiceConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointsResponse, EC2Error> DeleteVpcEndpointsOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcPeeringConnectionResponse, EC2Error> DeleteVpcPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteVpnConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteVpnConnectionRouteOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeleteVpnGatewayOutcome;
      typedef Aws::Utils::Outcome<DeprovisionByoipCidrResponse, EC2Error> DeprovisionByoipCidrOutcome;
      typedef Aws::Utils::Outcome<DeprovisionIpamPoolCidrResponse, EC2Error> DeprovisionIpamPoolCidrOutcome;
      typedef Aws::Utils::Outcome<DeprovisionPublicIpv4PoolCidrResponse, EC2Error> DeprovisionPublicIpv4PoolCidrOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DeregisterImageOutcome;
      typedef Aws::Utils::Outcome<DeregisterInstanceEventNotificationAttributesResponse, EC2Error> DeregisterInstanceEventNotificationAttributesOutcome;
      typedef Aws::Utils::Outcome<DeregisterTransitGatewayMulticastGroupMembersResponse, EC2Error> DeregisterTransitGatewayMulticastGroupMembersOutcome;
      typedef Aws::Utils::Outcome<DeregisterTransitGatewayMulticastGroupSourcesResponse, EC2Error> DeregisterTransitGatewayMulticastGroupSourcesOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResponse, EC2Error> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeAddressTransfersResponse, EC2Error> DescribeAddressTransfersOutcome;
      typedef Aws::Utils::Outcome<DescribeAddressesResponse, EC2Error> DescribeAddressesOutcome;
      typedef Aws::Utils::Outcome<DescribeAddressesAttributeResponse, EC2Error> DescribeAddressesAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeAggregateIdFormatResponse, EC2Error> DescribeAggregateIdFormatOutcome;
      typedef Aws::Utils::Outcome<DescribeAvailabilityZonesResponse, EC2Error> DescribeAvailabilityZonesOutcome;
      typedef Aws::Utils::Outcome<DescribeAwsNetworkPerformanceMetricSubscriptionsResponse, EC2Error> DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeBundleTasksResponse, EC2Error> DescribeBundleTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeByoipCidrsResponse, EC2Error> DescribeByoipCidrsOutcome;
      typedef Aws::Utils::Outcome<DescribeCapacityReservationFleetsResponse, EC2Error> DescribeCapacityReservationFleetsOutcome;
      typedef Aws::Utils::Outcome<DescribeCapacityReservationsResponse, EC2Error> DescribeCapacityReservationsOutcome;
      typedef Aws::Utils::Outcome<DescribeCarrierGatewaysResponse, EC2Error> DescribeCarrierGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeClassicLinkInstancesResponse, EC2Error> DescribeClassicLinkInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeClientVpnAuthorizationRulesResponse, EC2Error> DescribeClientVpnAuthorizationRulesOutcome;
      typedef Aws::Utils::Outcome<DescribeClientVpnConnectionsResponse, EC2Error> DescribeClientVpnConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeClientVpnEndpointsResponse, EC2Error> DescribeClientVpnEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeClientVpnRoutesResponse, EC2Error> DescribeClientVpnRoutesOutcome;
      typedef Aws::Utils::Outcome<DescribeClientVpnTargetNetworksResponse, EC2Error> DescribeClientVpnTargetNetworksOutcome;
      typedef Aws::Utils::Outcome<DescribeCoipPoolsResponse, EC2Error> DescribeCoipPoolsOutcome;
      typedef Aws::Utils::Outcome<DescribeConversionTasksResponse, EC2Error> DescribeConversionTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeCustomerGatewaysResponse, EC2Error> DescribeCustomerGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeDhcpOptionsResponse, EC2Error> DescribeDhcpOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEgressOnlyInternetGatewaysResponse, EC2Error> DescribeEgressOnlyInternetGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeElasticGpusResponse, EC2Error> DescribeElasticGpusOutcome;
      typedef Aws::Utils::Outcome<DescribeExportImageTasksResponse, EC2Error> DescribeExportImageTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeExportTasksResponse, EC2Error> DescribeExportTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeFastLaunchImagesResponse, EC2Error> DescribeFastLaunchImagesOutcome;
      typedef Aws::Utils::Outcome<DescribeFastSnapshotRestoresResponse, EC2Error> DescribeFastSnapshotRestoresOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetHistoryResponse, EC2Error> DescribeFleetHistoryOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetInstancesResponse, EC2Error> DescribeFleetInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetsResponse, EC2Error> DescribeFleetsOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowLogsResponse, EC2Error> DescribeFlowLogsOutcome;
      typedef Aws::Utils::Outcome<DescribeFpgaImageAttributeResponse, EC2Error> DescribeFpgaImageAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeFpgaImagesResponse, EC2Error> DescribeFpgaImagesOutcome;
      typedef Aws::Utils::Outcome<DescribeHostReservationOfferingsResponse, EC2Error> DescribeHostReservationOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeHostReservationsResponse, EC2Error> DescribeHostReservationsOutcome;
      typedef Aws::Utils::Outcome<DescribeHostsResponse, EC2Error> DescribeHostsOutcome;
      typedef Aws::Utils::Outcome<DescribeIamInstanceProfileAssociationsResponse, EC2Error> DescribeIamInstanceProfileAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeIdFormatResponse, EC2Error> DescribeIdFormatOutcome;
      typedef Aws::Utils::Outcome<DescribeIdentityIdFormatResponse, EC2Error> DescribeIdentityIdFormatOutcome;
      typedef Aws::Utils::Outcome<DescribeImageAttributeResponse, EC2Error> DescribeImageAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeImagesResponse, EC2Error> DescribeImagesOutcome;
      typedef Aws::Utils::Outcome<DescribeImportImageTasksResponse, EC2Error> DescribeImportImageTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeImportSnapshotTasksResponse, EC2Error> DescribeImportSnapshotTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceAttributeResponse, EC2Error> DescribeInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceCreditSpecificationsResponse, EC2Error> DescribeInstanceCreditSpecificationsOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceEventNotificationAttributesResponse, EC2Error> DescribeInstanceEventNotificationAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceEventWindowsResponse, EC2Error> DescribeInstanceEventWindowsOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceStatusResponse, EC2Error> DescribeInstanceStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceTypeOfferingsResponse, EC2Error> DescribeInstanceTypeOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceTypesResponse, EC2Error> DescribeInstanceTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeInstancesResponse, EC2Error> DescribeInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeInternetGatewaysResponse, EC2Error> DescribeInternetGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeIpamPoolsResponse, EC2Error> DescribeIpamPoolsOutcome;
      typedef Aws::Utils::Outcome<DescribeIpamScopesResponse, EC2Error> DescribeIpamScopesOutcome;
      typedef Aws::Utils::Outcome<DescribeIpamsResponse, EC2Error> DescribeIpamsOutcome;
      typedef Aws::Utils::Outcome<DescribeIpv6PoolsResponse, EC2Error> DescribeIpv6PoolsOutcome;
      typedef Aws::Utils::Outcome<DescribeKeyPairsResponse, EC2Error> DescribeKeyPairsOutcome;
      typedef Aws::Utils::Outcome<DescribeLaunchTemplateVersionsResponse, EC2Error> DescribeLaunchTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeLaunchTemplatesResponse, EC2Error> DescribeLaunchTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponse, EC2Error> DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocalGatewayRouteTableVpcAssociationsResponse, EC2Error> DescribeLocalGatewayRouteTableVpcAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocalGatewayRouteTablesResponse, EC2Error> DescribeLocalGatewayRouteTablesOutcome;
      typedef Aws::Utils::Outcome<DescribeLocalGatewayVirtualInterfaceGroupsResponse, EC2Error> DescribeLocalGatewayVirtualInterfaceGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocalGatewayVirtualInterfacesResponse, EC2Error> DescribeLocalGatewayVirtualInterfacesOutcome;
      typedef Aws::Utils::Outcome<DescribeLocalGatewaysResponse, EC2Error> DescribeLocalGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeManagedPrefixListsResponse, EC2Error> DescribeManagedPrefixListsOutcome;
      typedef Aws::Utils::Outcome<DescribeMovingAddressesResponse, EC2Error> DescribeMovingAddressesOutcome;
      typedef Aws::Utils::Outcome<DescribeNatGatewaysResponse, EC2Error> DescribeNatGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkAclsResponse, EC2Error> DescribeNetworkAclsOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInsightsAccessScopeAnalysesResponse, EC2Error> DescribeNetworkInsightsAccessScopeAnalysesOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInsightsAccessScopesResponse, EC2Error> DescribeNetworkInsightsAccessScopesOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInsightsAnalysesResponse, EC2Error> DescribeNetworkInsightsAnalysesOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInsightsPathsResponse, EC2Error> DescribeNetworkInsightsPathsOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInterfaceAttributeResponse, EC2Error> DescribeNetworkInterfaceAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInterfacePermissionsResponse, EC2Error> DescribeNetworkInterfacePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkInterfacesResponse, EC2Error> DescribeNetworkInterfacesOutcome;
      typedef Aws::Utils::Outcome<DescribePlacementGroupsResponse, EC2Error> DescribePlacementGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribePrefixListsResponse, EC2Error> DescribePrefixListsOutcome;
      typedef Aws::Utils::Outcome<DescribePrincipalIdFormatResponse, EC2Error> DescribePrincipalIdFormatOutcome;
      typedef Aws::Utils::Outcome<DescribePublicIpv4PoolsResponse, EC2Error> DescribePublicIpv4PoolsOutcome;
      typedef Aws::Utils::Outcome<DescribeRegionsResponse, EC2Error> DescribeRegionsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplaceRootVolumeTasksResponse, EC2Error> DescribeReplaceRootVolumeTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedInstancesResponse, EC2Error> DescribeReservedInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedInstancesListingsResponse, EC2Error> DescribeReservedInstancesListingsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedInstancesModificationsResponse, EC2Error> DescribeReservedInstancesModificationsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedInstancesOfferingsResponse, EC2Error> DescribeReservedInstancesOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeRouteTablesResponse, EC2Error> DescribeRouteTablesOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledInstanceAvailabilityResponse, EC2Error> DescribeScheduledInstanceAvailabilityOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledInstancesResponse, EC2Error> DescribeScheduledInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityGroupReferencesResponse, EC2Error> DescribeSecurityGroupReferencesOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityGroupRulesResponse, EC2Error> DescribeSecurityGroupRulesOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityGroupsResponse, EC2Error> DescribeSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotAttributeResponse, EC2Error> DescribeSnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotTierStatusResponse, EC2Error> DescribeSnapshotTierStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotsResponse, EC2Error> DescribeSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeSpotDatafeedSubscriptionResponse, EC2Error> DescribeSpotDatafeedSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DescribeSpotFleetInstancesResponse, EC2Error> DescribeSpotFleetInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeSpotFleetRequestHistoryResponse, EC2Error> DescribeSpotFleetRequestHistoryOutcome;
      typedef Aws::Utils::Outcome<DescribeSpotFleetRequestsResponse, EC2Error> DescribeSpotFleetRequestsOutcome;
      typedef Aws::Utils::Outcome<DescribeSpotInstanceRequestsResponse, EC2Error> DescribeSpotInstanceRequestsOutcome;
      typedef Aws::Utils::Outcome<DescribeSpotPriceHistoryResponse, EC2Error> DescribeSpotPriceHistoryOutcome;
      typedef Aws::Utils::Outcome<DescribeStaleSecurityGroupsResponse, EC2Error> DescribeStaleSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeStoreImageTasksResponse, EC2Error> DescribeStoreImageTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeSubnetsResponse, EC2Error> DescribeSubnetsOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResponse, EC2Error> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeTrafficMirrorFiltersResponse, EC2Error> DescribeTrafficMirrorFiltersOutcome;
      typedef Aws::Utils::Outcome<DescribeTrafficMirrorSessionsResponse, EC2Error> DescribeTrafficMirrorSessionsOutcome;
      typedef Aws::Utils::Outcome<DescribeTrafficMirrorTargetsResponse, EC2Error> DescribeTrafficMirrorTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayAttachmentsResponse, EC2Error> DescribeTransitGatewayAttachmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayConnectPeersResponse, EC2Error> DescribeTransitGatewayConnectPeersOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayConnectsResponse, EC2Error> DescribeTransitGatewayConnectsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayMulticastDomainsResponse, EC2Error> DescribeTransitGatewayMulticastDomainsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayPeeringAttachmentsResponse, EC2Error> DescribeTransitGatewayPeeringAttachmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayPolicyTablesResponse, EC2Error> DescribeTransitGatewayPolicyTablesOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayRouteTableAnnouncementsResponse, EC2Error> DescribeTransitGatewayRouteTableAnnouncementsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayRouteTablesResponse, EC2Error> DescribeTransitGatewayRouteTablesOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewayVpcAttachmentsResponse, EC2Error> DescribeTransitGatewayVpcAttachmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeTransitGatewaysResponse, EC2Error> DescribeTransitGatewaysOutcome;
      typedef Aws::Utils::Outcome<DescribeTrunkInterfaceAssociationsResponse, EC2Error> DescribeTrunkInterfaceAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeVerifiedAccessEndpointsResponse, EC2Error> DescribeVerifiedAccessEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeVerifiedAccessGroupsResponse, EC2Error> DescribeVerifiedAccessGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeVerifiedAccessInstanceLoggingConfigurationsResponse, EC2Error> DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeVerifiedAccessInstancesResponse, EC2Error> DescribeVerifiedAccessInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeVerifiedAccessTrustProvidersResponse, EC2Error> DescribeVerifiedAccessTrustProvidersOutcome;
      typedef Aws::Utils::Outcome<DescribeVolumeAttributeResponse, EC2Error> DescribeVolumeAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeVolumeStatusResponse, EC2Error> DescribeVolumeStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeVolumesResponse, EC2Error> DescribeVolumesOutcome;
      typedef Aws::Utils::Outcome<DescribeVolumesModificationsResponse, EC2Error> DescribeVolumesModificationsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcAttributeResponse, EC2Error> DescribeVpcAttributeOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcClassicLinkResponse, EC2Error> DescribeVpcClassicLinkOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcClassicLinkDnsSupportResponse, EC2Error> DescribeVpcClassicLinkDnsSupportOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointConnectionNotificationsResponse, EC2Error> DescribeVpcEndpointConnectionNotificationsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointConnectionsResponse, EC2Error> DescribeVpcEndpointConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointServiceConfigurationsResponse, EC2Error> DescribeVpcEndpointServiceConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointServicePermissionsResponse, EC2Error> DescribeVpcEndpointServicePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointServicesResponse, EC2Error> DescribeVpcEndpointServicesOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointsResponse, EC2Error> DescribeVpcEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcPeeringConnectionsResponse, EC2Error> DescribeVpcPeeringConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcsResponse, EC2Error> DescribeVpcsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpnConnectionsResponse, EC2Error> DescribeVpnConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeVpnGatewaysResponse, EC2Error> DescribeVpnGatewaysOutcome;
      typedef Aws::Utils::Outcome<DetachClassicLinkVpcResponse, EC2Error> DetachClassicLinkVpcOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DetachInternetGatewayOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DetachNetworkInterfaceOutcome;
      typedef Aws::Utils::Outcome<DetachVerifiedAccessTrustProviderResponse, EC2Error> DetachVerifiedAccessTrustProviderOutcome;
      typedef Aws::Utils::Outcome<DetachVolumeResponse, EC2Error> DetachVolumeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DetachVpnGatewayOutcome;
      typedef Aws::Utils::Outcome<DisableAddressTransferResponse, EC2Error> DisableAddressTransferOutcome;
      typedef Aws::Utils::Outcome<DisableAwsNetworkPerformanceMetricSubscriptionResponse, EC2Error> DisableAwsNetworkPerformanceMetricSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DisableEbsEncryptionByDefaultResponse, EC2Error> DisableEbsEncryptionByDefaultOutcome;
      typedef Aws::Utils::Outcome<DisableFastLaunchResponse, EC2Error> DisableFastLaunchOutcome;
      typedef Aws::Utils::Outcome<DisableFastSnapshotRestoresResponse, EC2Error> DisableFastSnapshotRestoresOutcome;
      typedef Aws::Utils::Outcome<DisableImageDeprecationResponse, EC2Error> DisableImageDeprecationOutcome;
      typedef Aws::Utils::Outcome<DisableIpamOrganizationAdminAccountResponse, EC2Error> DisableIpamOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisableSerialConsoleAccessResponse, EC2Error> DisableSerialConsoleAccessOutcome;
      typedef Aws::Utils::Outcome<DisableTransitGatewayRouteTablePropagationResponse, EC2Error> DisableTransitGatewayRouteTablePropagationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DisableVgwRoutePropagationOutcome;
      typedef Aws::Utils::Outcome<DisableVpcClassicLinkResponse, EC2Error> DisableVpcClassicLinkOutcome;
      typedef Aws::Utils::Outcome<DisableVpcClassicLinkDnsSupportResponse, EC2Error> DisableVpcClassicLinkDnsSupportOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DisassociateAddressOutcome;
      typedef Aws::Utils::Outcome<DisassociateClientVpnTargetNetworkResponse, EC2Error> DisassociateClientVpnTargetNetworkOutcome;
      typedef Aws::Utils::Outcome<DisassociateEnclaveCertificateIamRoleResponse, EC2Error> DisassociateEnclaveCertificateIamRoleOutcome;
      typedef Aws::Utils::Outcome<DisassociateIamInstanceProfileResponse, EC2Error> DisassociateIamInstanceProfileOutcome;
      typedef Aws::Utils::Outcome<DisassociateInstanceEventWindowResponse, EC2Error> DisassociateInstanceEventWindowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> DisassociateRouteTableOutcome;
      typedef Aws::Utils::Outcome<DisassociateSubnetCidrBlockResponse, EC2Error> DisassociateSubnetCidrBlockOutcome;
      typedef Aws::Utils::Outcome<DisassociateTransitGatewayMulticastDomainResponse, EC2Error> DisassociateTransitGatewayMulticastDomainOutcome;
      typedef Aws::Utils::Outcome<DisassociateTransitGatewayPolicyTableResponse, EC2Error> DisassociateTransitGatewayPolicyTableOutcome;
      typedef Aws::Utils::Outcome<DisassociateTransitGatewayRouteTableResponse, EC2Error> DisassociateTransitGatewayRouteTableOutcome;
      typedef Aws::Utils::Outcome<DisassociateTrunkInterfaceResponse, EC2Error> DisassociateTrunkInterfaceOutcome;
      typedef Aws::Utils::Outcome<DisassociateVpcCidrBlockResponse, EC2Error> DisassociateVpcCidrBlockOutcome;
      typedef Aws::Utils::Outcome<EnableAddressTransferResponse, EC2Error> EnableAddressTransferOutcome;
      typedef Aws::Utils::Outcome<EnableAwsNetworkPerformanceMetricSubscriptionResponse, EC2Error> EnableAwsNetworkPerformanceMetricSubscriptionOutcome;
      typedef Aws::Utils::Outcome<EnableEbsEncryptionByDefaultResponse, EC2Error> EnableEbsEncryptionByDefaultOutcome;
      typedef Aws::Utils::Outcome<EnableFastLaunchResponse, EC2Error> EnableFastLaunchOutcome;
      typedef Aws::Utils::Outcome<EnableFastSnapshotRestoresResponse, EC2Error> EnableFastSnapshotRestoresOutcome;
      typedef Aws::Utils::Outcome<EnableImageDeprecationResponse, EC2Error> EnableImageDeprecationOutcome;
      typedef Aws::Utils::Outcome<EnableIpamOrganizationAdminAccountResponse, EC2Error> EnableIpamOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<EnableReachabilityAnalyzerOrganizationSharingResponse, EC2Error> EnableReachabilityAnalyzerOrganizationSharingOutcome;
      typedef Aws::Utils::Outcome<EnableSerialConsoleAccessResponse, EC2Error> EnableSerialConsoleAccessOutcome;
      typedef Aws::Utils::Outcome<EnableTransitGatewayRouteTablePropagationResponse, EC2Error> EnableTransitGatewayRouteTablePropagationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> EnableVgwRoutePropagationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> EnableVolumeIOOutcome;
      typedef Aws::Utils::Outcome<EnableVpcClassicLinkResponse, EC2Error> EnableVpcClassicLinkOutcome;
      typedef Aws::Utils::Outcome<EnableVpcClassicLinkDnsSupportResponse, EC2Error> EnableVpcClassicLinkDnsSupportOutcome;
      typedef Aws::Utils::Outcome<ExportClientVpnClientCertificateRevocationListResponse, EC2Error> ExportClientVpnClientCertificateRevocationListOutcome;
      typedef Aws::Utils::Outcome<ExportClientVpnClientConfigurationResponse, EC2Error> ExportClientVpnClientConfigurationOutcome;
      typedef Aws::Utils::Outcome<ExportImageResponse, EC2Error> ExportImageOutcome;
      typedef Aws::Utils::Outcome<ExportTransitGatewayRoutesResponse, EC2Error> ExportTransitGatewayRoutesOutcome;
      typedef Aws::Utils::Outcome<GetAssociatedEnclaveCertificateIamRolesResponse, EC2Error> GetAssociatedEnclaveCertificateIamRolesOutcome;
      typedef Aws::Utils::Outcome<GetAssociatedIpv6PoolCidrsResponse, EC2Error> GetAssociatedIpv6PoolCidrsOutcome;
      typedef Aws::Utils::Outcome<GetAwsNetworkPerformanceDataResponse, EC2Error> GetAwsNetworkPerformanceDataOutcome;
      typedef Aws::Utils::Outcome<GetCapacityReservationUsageResponse, EC2Error> GetCapacityReservationUsageOutcome;
      typedef Aws::Utils::Outcome<GetCoipPoolUsageResponse, EC2Error> GetCoipPoolUsageOutcome;
      typedef Aws::Utils::Outcome<GetConsoleOutputResponse, EC2Error> GetConsoleOutputOutcome;
      typedef Aws::Utils::Outcome<GetConsoleScreenshotResponse, EC2Error> GetConsoleScreenshotOutcome;
      typedef Aws::Utils::Outcome<GetDefaultCreditSpecificationResponse, EC2Error> GetDefaultCreditSpecificationOutcome;
      typedef Aws::Utils::Outcome<GetEbsDefaultKmsKeyIdResponse, EC2Error> GetEbsDefaultKmsKeyIdOutcome;
      typedef Aws::Utils::Outcome<GetEbsEncryptionByDefaultResponse, EC2Error> GetEbsEncryptionByDefaultOutcome;
      typedef Aws::Utils::Outcome<GetFlowLogsIntegrationTemplateResponse, EC2Error> GetFlowLogsIntegrationTemplateOutcome;
      typedef Aws::Utils::Outcome<GetGroupsForCapacityReservationResponse, EC2Error> GetGroupsForCapacityReservationOutcome;
      typedef Aws::Utils::Outcome<GetHostReservationPurchasePreviewResponse, EC2Error> GetHostReservationPurchasePreviewOutcome;
      typedef Aws::Utils::Outcome<GetInstanceTypesFromInstanceRequirementsResponse, EC2Error> GetInstanceTypesFromInstanceRequirementsOutcome;
      typedef Aws::Utils::Outcome<GetInstanceUefiDataResponse, EC2Error> GetInstanceUefiDataOutcome;
      typedef Aws::Utils::Outcome<GetIpamAddressHistoryResponse, EC2Error> GetIpamAddressHistoryOutcome;
      typedef Aws::Utils::Outcome<GetIpamPoolAllocationsResponse, EC2Error> GetIpamPoolAllocationsOutcome;
      typedef Aws::Utils::Outcome<GetIpamPoolCidrsResponse, EC2Error> GetIpamPoolCidrsOutcome;
      typedef Aws::Utils::Outcome<GetIpamResourceCidrsResponse, EC2Error> GetIpamResourceCidrsOutcome;
      typedef Aws::Utils::Outcome<GetLaunchTemplateDataResponse, EC2Error> GetLaunchTemplateDataOutcome;
      typedef Aws::Utils::Outcome<GetManagedPrefixListAssociationsResponse, EC2Error> GetManagedPrefixListAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetManagedPrefixListEntriesResponse, EC2Error> GetManagedPrefixListEntriesOutcome;
      typedef Aws::Utils::Outcome<GetNetworkInsightsAccessScopeAnalysisFindingsResponse, EC2Error> GetNetworkInsightsAccessScopeAnalysisFindingsOutcome;
      typedef Aws::Utils::Outcome<GetNetworkInsightsAccessScopeContentResponse, EC2Error> GetNetworkInsightsAccessScopeContentOutcome;
      typedef Aws::Utils::Outcome<GetPasswordDataResponse, EC2Error> GetPasswordDataOutcome;
      typedef Aws::Utils::Outcome<GetReservedInstancesExchangeQuoteResponse, EC2Error> GetReservedInstancesExchangeQuoteOutcome;
      typedef Aws::Utils::Outcome<GetSerialConsoleAccessStatusResponse, EC2Error> GetSerialConsoleAccessStatusOutcome;
      typedef Aws::Utils::Outcome<GetSpotPlacementScoresResponse, EC2Error> GetSpotPlacementScoresOutcome;
      typedef Aws::Utils::Outcome<GetSubnetCidrReservationsResponse, EC2Error> GetSubnetCidrReservationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayAttachmentPropagationsResponse, EC2Error> GetTransitGatewayAttachmentPropagationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayMulticastDomainAssociationsResponse, EC2Error> GetTransitGatewayMulticastDomainAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayPolicyTableAssociationsResponse, EC2Error> GetTransitGatewayPolicyTableAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayPolicyTableEntriesResponse, EC2Error> GetTransitGatewayPolicyTableEntriesOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayPrefixListReferencesResponse, EC2Error> GetTransitGatewayPrefixListReferencesOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayRouteTableAssociationsResponse, EC2Error> GetTransitGatewayRouteTableAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayRouteTablePropagationsResponse, EC2Error> GetTransitGatewayRouteTablePropagationsOutcome;
      typedef Aws::Utils::Outcome<GetVerifiedAccessEndpointPolicyResponse, EC2Error> GetVerifiedAccessEndpointPolicyOutcome;
      typedef Aws::Utils::Outcome<GetVerifiedAccessGroupPolicyResponse, EC2Error> GetVerifiedAccessGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<GetVpnConnectionDeviceSampleConfigurationResponse, EC2Error> GetVpnConnectionDeviceSampleConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetVpnConnectionDeviceTypesResponse, EC2Error> GetVpnConnectionDeviceTypesOutcome;
      typedef Aws::Utils::Outcome<ImportClientVpnClientCertificateRevocationListResponse, EC2Error> ImportClientVpnClientCertificateRevocationListOutcome;
      typedef Aws::Utils::Outcome<ImportImageResponse, EC2Error> ImportImageOutcome;
      typedef Aws::Utils::Outcome<ImportInstanceResponse, EC2Error> ImportInstanceOutcome;
      typedef Aws::Utils::Outcome<ImportKeyPairResponse, EC2Error> ImportKeyPairOutcome;
      typedef Aws::Utils::Outcome<ImportSnapshotResponse, EC2Error> ImportSnapshotOutcome;
      typedef Aws::Utils::Outcome<ImportVolumeResponse, EC2Error> ImportVolumeOutcome;
      typedef Aws::Utils::Outcome<ListImagesInRecycleBinResponse, EC2Error> ListImagesInRecycleBinOutcome;
      typedef Aws::Utils::Outcome<ListSnapshotsInRecycleBinResponse, EC2Error> ListSnapshotsInRecycleBinOutcome;
      typedef Aws::Utils::Outcome<ModifyAddressAttributeResponse, EC2Error> ModifyAddressAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyAvailabilityZoneGroupResponse, EC2Error> ModifyAvailabilityZoneGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyCapacityReservationResponse, EC2Error> ModifyCapacityReservationOutcome;
      typedef Aws::Utils::Outcome<ModifyCapacityReservationFleetResponse, EC2Error> ModifyCapacityReservationFleetOutcome;
      typedef Aws::Utils::Outcome<ModifyClientVpnEndpointResponse, EC2Error> ModifyClientVpnEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyDefaultCreditSpecificationResponse, EC2Error> ModifyDefaultCreditSpecificationOutcome;
      typedef Aws::Utils::Outcome<ModifyEbsDefaultKmsKeyIdResponse, EC2Error> ModifyEbsDefaultKmsKeyIdOutcome;
      typedef Aws::Utils::Outcome<ModifyFleetResponse, EC2Error> ModifyFleetOutcome;
      typedef Aws::Utils::Outcome<ModifyFpgaImageAttributeResponse, EC2Error> ModifyFpgaImageAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyHostsResponse, EC2Error> ModifyHostsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyIdFormatOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyIdentityIdFormatOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyImageAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceCapacityReservationAttributesResponse, EC2Error> ModifyInstanceCapacityReservationAttributesOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceCreditSpecificationResponse, EC2Error> ModifyInstanceCreditSpecificationOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceEventStartTimeResponse, EC2Error> ModifyInstanceEventStartTimeOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceEventWindowResponse, EC2Error> ModifyInstanceEventWindowOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceMaintenanceOptionsResponse, EC2Error> ModifyInstanceMaintenanceOptionsOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceMetadataOptionsResponse, EC2Error> ModifyInstanceMetadataOptionsOutcome;
      typedef Aws::Utils::Outcome<ModifyInstancePlacementResponse, EC2Error> ModifyInstancePlacementOutcome;
      typedef Aws::Utils::Outcome<ModifyIpamResponse, EC2Error> ModifyIpamOutcome;
      typedef Aws::Utils::Outcome<ModifyIpamPoolResponse, EC2Error> ModifyIpamPoolOutcome;
      typedef Aws::Utils::Outcome<ModifyIpamResourceCidrResponse, EC2Error> ModifyIpamResourceCidrOutcome;
      typedef Aws::Utils::Outcome<ModifyIpamScopeResponse, EC2Error> ModifyIpamScopeOutcome;
      typedef Aws::Utils::Outcome<ModifyLaunchTemplateResponse, EC2Error> ModifyLaunchTemplateOutcome;
      typedef Aws::Utils::Outcome<ModifyLocalGatewayRouteResponse, EC2Error> ModifyLocalGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<ModifyManagedPrefixListResponse, EC2Error> ModifyManagedPrefixListOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyNetworkInterfaceAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyPrivateDnsNameOptionsResponse, EC2Error> ModifyPrivateDnsNameOptionsOutcome;
      typedef Aws::Utils::Outcome<ModifyReservedInstancesResponse, EC2Error> ModifyReservedInstancesOutcome;
      typedef Aws::Utils::Outcome<ModifySecurityGroupRulesResponse, EC2Error> ModifySecurityGroupRulesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifySnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifySnapshotTierResponse, EC2Error> ModifySnapshotTierOutcome;
      typedef Aws::Utils::Outcome<ModifySpotFleetRequestResponse, EC2Error> ModifySpotFleetRequestOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifySubnetAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyTrafficMirrorFilterNetworkServicesResponse, EC2Error> ModifyTrafficMirrorFilterNetworkServicesOutcome;
      typedef Aws::Utils::Outcome<ModifyTrafficMirrorFilterRuleResponse, EC2Error> ModifyTrafficMirrorFilterRuleOutcome;
      typedef Aws::Utils::Outcome<ModifyTrafficMirrorSessionResponse, EC2Error> ModifyTrafficMirrorSessionOutcome;
      typedef Aws::Utils::Outcome<ModifyTransitGatewayResponse, EC2Error> ModifyTransitGatewayOutcome;
      typedef Aws::Utils::Outcome<ModifyTransitGatewayPrefixListReferenceResponse, EC2Error> ModifyTransitGatewayPrefixListReferenceOutcome;
      typedef Aws::Utils::Outcome<ModifyTransitGatewayVpcAttachmentResponse, EC2Error> ModifyTransitGatewayVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessEndpointResponse, EC2Error> ModifyVerifiedAccessEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessEndpointPolicyResponse, EC2Error> ModifyVerifiedAccessEndpointPolicyOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessGroupResponse, EC2Error> ModifyVerifiedAccessGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessGroupPolicyResponse, EC2Error> ModifyVerifiedAccessGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessInstanceResponse, EC2Error> ModifyVerifiedAccessInstanceOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessInstanceLoggingConfigurationResponse, EC2Error> ModifyVerifiedAccessInstanceLoggingConfigurationOutcome;
      typedef Aws::Utils::Outcome<ModifyVerifiedAccessTrustProviderResponse, EC2Error> ModifyVerifiedAccessTrustProviderOutcome;
      typedef Aws::Utils::Outcome<ModifyVolumeResponse, EC2Error> ModifyVolumeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyVolumeAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ModifyVpcAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcEndpointResponse, EC2Error> ModifyVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcEndpointConnectionNotificationResponse, EC2Error> ModifyVpcEndpointConnectionNotificationOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcEndpointServiceConfigurationResponse, EC2Error> ModifyVpcEndpointServiceConfigurationOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcEndpointServicePayerResponsibilityResponse, EC2Error> ModifyVpcEndpointServicePayerResponsibilityOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcEndpointServicePermissionsResponse, EC2Error> ModifyVpcEndpointServicePermissionsOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcPeeringConnectionOptionsResponse, EC2Error> ModifyVpcPeeringConnectionOptionsOutcome;
      typedef Aws::Utils::Outcome<ModifyVpcTenancyResponse, EC2Error> ModifyVpcTenancyOutcome;
      typedef Aws::Utils::Outcome<ModifyVpnConnectionResponse, EC2Error> ModifyVpnConnectionOutcome;
      typedef Aws::Utils::Outcome<ModifyVpnConnectionOptionsResponse, EC2Error> ModifyVpnConnectionOptionsOutcome;
      typedef Aws::Utils::Outcome<ModifyVpnTunnelCertificateResponse, EC2Error> ModifyVpnTunnelCertificateOutcome;
      typedef Aws::Utils::Outcome<ModifyVpnTunnelOptionsResponse, EC2Error> ModifyVpnTunnelOptionsOutcome;
      typedef Aws::Utils::Outcome<MonitorInstancesResponse, EC2Error> MonitorInstancesOutcome;
      typedef Aws::Utils::Outcome<MoveAddressToVpcResponse, EC2Error> MoveAddressToVpcOutcome;
      typedef Aws::Utils::Outcome<MoveByoipCidrToIpamResponse, EC2Error> MoveByoipCidrToIpamOutcome;
      typedef Aws::Utils::Outcome<ProvisionByoipCidrResponse, EC2Error> ProvisionByoipCidrOutcome;
      typedef Aws::Utils::Outcome<ProvisionIpamPoolCidrResponse, EC2Error> ProvisionIpamPoolCidrOutcome;
      typedef Aws::Utils::Outcome<ProvisionPublicIpv4PoolCidrResponse, EC2Error> ProvisionPublicIpv4PoolCidrOutcome;
      typedef Aws::Utils::Outcome<PurchaseHostReservationResponse, EC2Error> PurchaseHostReservationOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedInstancesOfferingResponse, EC2Error> PurchaseReservedInstancesOfferingOutcome;
      typedef Aws::Utils::Outcome<PurchaseScheduledInstancesResponse, EC2Error> PurchaseScheduledInstancesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> RebootInstancesOutcome;
      typedef Aws::Utils::Outcome<RegisterImageResponse, EC2Error> RegisterImageOutcome;
      typedef Aws::Utils::Outcome<RegisterInstanceEventNotificationAttributesResponse, EC2Error> RegisterInstanceEventNotificationAttributesOutcome;
      typedef Aws::Utils::Outcome<RegisterTransitGatewayMulticastGroupMembersResponse, EC2Error> RegisterTransitGatewayMulticastGroupMembersOutcome;
      typedef Aws::Utils::Outcome<RegisterTransitGatewayMulticastGroupSourcesResponse, EC2Error> RegisterTransitGatewayMulticastGroupSourcesOutcome;
      typedef Aws::Utils::Outcome<RejectTransitGatewayMulticastDomainAssociationsResponse, EC2Error> RejectTransitGatewayMulticastDomainAssociationsOutcome;
      typedef Aws::Utils::Outcome<RejectTransitGatewayPeeringAttachmentResponse, EC2Error> RejectTransitGatewayPeeringAttachmentOutcome;
      typedef Aws::Utils::Outcome<RejectTransitGatewayVpcAttachmentResponse, EC2Error> RejectTransitGatewayVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<RejectVpcEndpointConnectionsResponse, EC2Error> RejectVpcEndpointConnectionsOutcome;
      typedef Aws::Utils::Outcome<RejectVpcPeeringConnectionResponse, EC2Error> RejectVpcPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ReleaseAddressOutcome;
      typedef Aws::Utils::Outcome<ReleaseHostsResponse, EC2Error> ReleaseHostsOutcome;
      typedef Aws::Utils::Outcome<ReleaseIpamPoolAllocationResponse, EC2Error> ReleaseIpamPoolAllocationOutcome;
      typedef Aws::Utils::Outcome<ReplaceIamInstanceProfileAssociationResponse, EC2Error> ReplaceIamInstanceProfileAssociationOutcome;
      typedef Aws::Utils::Outcome<ReplaceNetworkAclAssociationResponse, EC2Error> ReplaceNetworkAclAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ReplaceNetworkAclEntryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ReplaceRouteOutcome;
      typedef Aws::Utils::Outcome<ReplaceRouteTableAssociationResponse, EC2Error> ReplaceRouteTableAssociationOutcome;
      typedef Aws::Utils::Outcome<ReplaceTransitGatewayRouteResponse, EC2Error> ReplaceTransitGatewayRouteOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ReportInstanceStatusOutcome;
      typedef Aws::Utils::Outcome<RequestSpotFleetResponse, EC2Error> RequestSpotFleetOutcome;
      typedef Aws::Utils::Outcome<RequestSpotInstancesResponse, EC2Error> RequestSpotInstancesOutcome;
      typedef Aws::Utils::Outcome<ResetAddressAttributeResponse, EC2Error> ResetAddressAttributeOutcome;
      typedef Aws::Utils::Outcome<ResetEbsDefaultKmsKeyIdResponse, EC2Error> ResetEbsDefaultKmsKeyIdOutcome;
      typedef Aws::Utils::Outcome<ResetFpgaImageAttributeResponse, EC2Error> ResetFpgaImageAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ResetImageAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ResetInstanceAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ResetNetworkInterfaceAttributeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> ResetSnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<RestoreAddressToClassicResponse, EC2Error> RestoreAddressToClassicOutcome;
      typedef Aws::Utils::Outcome<RestoreImageFromRecycleBinResponse, EC2Error> RestoreImageFromRecycleBinOutcome;
      typedef Aws::Utils::Outcome<RestoreManagedPrefixListVersionResponse, EC2Error> RestoreManagedPrefixListVersionOutcome;
      typedef Aws::Utils::Outcome<RestoreSnapshotFromRecycleBinResponse, EC2Error> RestoreSnapshotFromRecycleBinOutcome;
      typedef Aws::Utils::Outcome<RestoreSnapshotTierResponse, EC2Error> RestoreSnapshotTierOutcome;
      typedef Aws::Utils::Outcome<RevokeClientVpnIngressResponse, EC2Error> RevokeClientVpnIngressOutcome;
      typedef Aws::Utils::Outcome<RevokeSecurityGroupEgressResponse, EC2Error> RevokeSecurityGroupEgressOutcome;
      typedef Aws::Utils::Outcome<RevokeSecurityGroupIngressResponse, EC2Error> RevokeSecurityGroupIngressOutcome;
      typedef Aws::Utils::Outcome<RunInstancesResponse, EC2Error> RunInstancesOutcome;
      typedef Aws::Utils::Outcome<RunScheduledInstancesResponse, EC2Error> RunScheduledInstancesOutcome;
      typedef Aws::Utils::Outcome<SearchLocalGatewayRoutesResponse, EC2Error> SearchLocalGatewayRoutesOutcome;
      typedef Aws::Utils::Outcome<SearchTransitGatewayMulticastGroupsResponse, EC2Error> SearchTransitGatewayMulticastGroupsOutcome;
      typedef Aws::Utils::Outcome<SearchTransitGatewayRoutesResponse, EC2Error> SearchTransitGatewayRoutesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> SendDiagnosticInterruptOutcome;
      typedef Aws::Utils::Outcome<StartInstancesResponse, EC2Error> StartInstancesOutcome;
      typedef Aws::Utils::Outcome<StartNetworkInsightsAccessScopeAnalysisResponse, EC2Error> StartNetworkInsightsAccessScopeAnalysisOutcome;
      typedef Aws::Utils::Outcome<StartNetworkInsightsAnalysisResponse, EC2Error> StartNetworkInsightsAnalysisOutcome;
      typedef Aws::Utils::Outcome<StartVpcEndpointServicePrivateDnsVerificationResponse, EC2Error> StartVpcEndpointServicePrivateDnsVerificationOutcome;
      typedef Aws::Utils::Outcome<StopInstancesResponse, EC2Error> StopInstancesOutcome;
      typedef Aws::Utils::Outcome<TerminateClientVpnConnectionsResponse, EC2Error> TerminateClientVpnConnectionsOutcome;
      typedef Aws::Utils::Outcome<TerminateInstancesResponse, EC2Error> TerminateInstancesOutcome;
      typedef Aws::Utils::Outcome<UnassignIpv6AddressesResponse, EC2Error> UnassignIpv6AddressesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, EC2Error> UnassignPrivateIpAddressesOutcome;
      typedef Aws::Utils::Outcome<UnmonitorInstancesResponse, EC2Error> UnmonitorInstancesOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityGroupRuleDescriptionsEgressResponse, EC2Error> UpdateSecurityGroupRuleDescriptionsEgressOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityGroupRuleDescriptionsIngressResponse, EC2Error> UpdateSecurityGroupRuleDescriptionsIngressOutcome;
      typedef Aws::Utils::Outcome<WithdrawByoipCidrResponse, EC2Error> WithdrawByoipCidrOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptAddressTransferOutcome> AcceptAddressTransferOutcomeCallable;
      typedef std::future<AcceptReservedInstancesExchangeQuoteOutcome> AcceptReservedInstancesExchangeQuoteOutcomeCallable;
      typedef std::future<AcceptTransitGatewayMulticastDomainAssociationsOutcome> AcceptTransitGatewayMulticastDomainAssociationsOutcomeCallable;
      typedef std::future<AcceptTransitGatewayPeeringAttachmentOutcome> AcceptTransitGatewayPeeringAttachmentOutcomeCallable;
      typedef std::future<AcceptTransitGatewayVpcAttachmentOutcome> AcceptTransitGatewayVpcAttachmentOutcomeCallable;
      typedef std::future<AcceptVpcEndpointConnectionsOutcome> AcceptVpcEndpointConnectionsOutcomeCallable;
      typedef std::future<AcceptVpcPeeringConnectionOutcome> AcceptVpcPeeringConnectionOutcomeCallable;
      typedef std::future<AdvertiseByoipCidrOutcome> AdvertiseByoipCidrOutcomeCallable;
      typedef std::future<AllocateAddressOutcome> AllocateAddressOutcomeCallable;
      typedef std::future<AllocateHostsOutcome> AllocateHostsOutcomeCallable;
      typedef std::future<AllocateIpamPoolCidrOutcome> AllocateIpamPoolCidrOutcomeCallable;
      typedef std::future<ApplySecurityGroupsToClientVpnTargetNetworkOutcome> ApplySecurityGroupsToClientVpnTargetNetworkOutcomeCallable;
      typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
      typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
      typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
      typedef std::future<AssociateClientVpnTargetNetworkOutcome> AssociateClientVpnTargetNetworkOutcomeCallable;
      typedef std::future<AssociateDhcpOptionsOutcome> AssociateDhcpOptionsOutcomeCallable;
      typedef std::future<AssociateEnclaveCertificateIamRoleOutcome> AssociateEnclaveCertificateIamRoleOutcomeCallable;
      typedef std::future<AssociateIamInstanceProfileOutcome> AssociateIamInstanceProfileOutcomeCallable;
      typedef std::future<AssociateInstanceEventWindowOutcome> AssociateInstanceEventWindowOutcomeCallable;
      typedef std::future<AssociateRouteTableOutcome> AssociateRouteTableOutcomeCallable;
      typedef std::future<AssociateSubnetCidrBlockOutcome> AssociateSubnetCidrBlockOutcomeCallable;
      typedef std::future<AssociateTransitGatewayMulticastDomainOutcome> AssociateTransitGatewayMulticastDomainOutcomeCallable;
      typedef std::future<AssociateTransitGatewayPolicyTableOutcome> AssociateTransitGatewayPolicyTableOutcomeCallable;
      typedef std::future<AssociateTransitGatewayRouteTableOutcome> AssociateTransitGatewayRouteTableOutcomeCallable;
      typedef std::future<AssociateTrunkInterfaceOutcome> AssociateTrunkInterfaceOutcomeCallable;
      typedef std::future<AssociateVpcCidrBlockOutcome> AssociateVpcCidrBlockOutcomeCallable;
      typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
      typedef std::future<AttachInternetGatewayOutcome> AttachInternetGatewayOutcomeCallable;
      typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
      typedef std::future<AttachVerifiedAccessTrustProviderOutcome> AttachVerifiedAccessTrustProviderOutcomeCallable;
      typedef std::future<AttachVolumeOutcome> AttachVolumeOutcomeCallable;
      typedef std::future<AttachVpnGatewayOutcome> AttachVpnGatewayOutcomeCallable;
      typedef std::future<AuthorizeClientVpnIngressOutcome> AuthorizeClientVpnIngressOutcomeCallable;
      typedef std::future<AuthorizeSecurityGroupEgressOutcome> AuthorizeSecurityGroupEgressOutcomeCallable;
      typedef std::future<AuthorizeSecurityGroupIngressOutcome> AuthorizeSecurityGroupIngressOutcomeCallable;
      typedef std::future<BundleInstanceOutcome> BundleInstanceOutcomeCallable;
      typedef std::future<CancelBundleTaskOutcome> CancelBundleTaskOutcomeCallable;
      typedef std::future<CancelCapacityReservationOutcome> CancelCapacityReservationOutcomeCallable;
      typedef std::future<CancelCapacityReservationFleetsOutcome> CancelCapacityReservationFleetsOutcomeCallable;
      typedef std::future<CancelConversionTaskOutcome> CancelConversionTaskOutcomeCallable;
      typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
      typedef std::future<CancelImageLaunchPermissionOutcome> CancelImageLaunchPermissionOutcomeCallable;
      typedef std::future<CancelImportTaskOutcome> CancelImportTaskOutcomeCallable;
      typedef std::future<CancelReservedInstancesListingOutcome> CancelReservedInstancesListingOutcomeCallable;
      typedef std::future<CancelSpotFleetRequestsOutcome> CancelSpotFleetRequestsOutcomeCallable;
      typedef std::future<CancelSpotInstanceRequestsOutcome> CancelSpotInstanceRequestsOutcomeCallable;
      typedef std::future<ConfirmProductInstanceOutcome> ConfirmProductInstanceOutcomeCallable;
      typedef std::future<CopyFpgaImageOutcome> CopyFpgaImageOutcomeCallable;
      typedef std::future<CopyImageOutcome> CopyImageOutcomeCallable;
      typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
      typedef std::future<CreateCapacityReservationOutcome> CreateCapacityReservationOutcomeCallable;
      typedef std::future<CreateCapacityReservationFleetOutcome> CreateCapacityReservationFleetOutcomeCallable;
      typedef std::future<CreateCarrierGatewayOutcome> CreateCarrierGatewayOutcomeCallable;
      typedef std::future<CreateClientVpnEndpointOutcome> CreateClientVpnEndpointOutcomeCallable;
      typedef std::future<CreateClientVpnRouteOutcome> CreateClientVpnRouteOutcomeCallable;
      typedef std::future<CreateCoipCidrOutcome> CreateCoipCidrOutcomeCallable;
      typedef std::future<CreateCoipPoolOutcome> CreateCoipPoolOutcomeCallable;
      typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
      typedef std::future<CreateDefaultSubnetOutcome> CreateDefaultSubnetOutcomeCallable;
      typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
      typedef std::future<CreateDhcpOptionsOutcome> CreateDhcpOptionsOutcomeCallable;
      typedef std::future<CreateEgressOnlyInternetGatewayOutcome> CreateEgressOnlyInternetGatewayOutcomeCallable;
      typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
      typedef std::future<CreateFlowLogsOutcome> CreateFlowLogsOutcomeCallable;
      typedef std::future<CreateFpgaImageOutcome> CreateFpgaImageOutcomeCallable;
      typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
      typedef std::future<CreateInstanceEventWindowOutcome> CreateInstanceEventWindowOutcomeCallable;
      typedef std::future<CreateInstanceExportTaskOutcome> CreateInstanceExportTaskOutcomeCallable;
      typedef std::future<CreateInternetGatewayOutcome> CreateInternetGatewayOutcomeCallable;
      typedef std::future<CreateIpamOutcome> CreateIpamOutcomeCallable;
      typedef std::future<CreateIpamPoolOutcome> CreateIpamPoolOutcomeCallable;
      typedef std::future<CreateIpamScopeOutcome> CreateIpamScopeOutcomeCallable;
      typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
      typedef std::future<CreateLaunchTemplateOutcome> CreateLaunchTemplateOutcomeCallable;
      typedef std::future<CreateLaunchTemplateVersionOutcome> CreateLaunchTemplateVersionOutcomeCallable;
      typedef std::future<CreateLocalGatewayRouteOutcome> CreateLocalGatewayRouteOutcomeCallable;
      typedef std::future<CreateLocalGatewayRouteTableOutcome> CreateLocalGatewayRouteTableOutcomeCallable;
      typedef std::future<CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome> CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcomeCallable;
      typedef std::future<CreateLocalGatewayRouteTableVpcAssociationOutcome> CreateLocalGatewayRouteTableVpcAssociationOutcomeCallable;
      typedef std::future<CreateManagedPrefixListOutcome> CreateManagedPrefixListOutcomeCallable;
      typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
      typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
      typedef std::future<CreateNetworkAclEntryOutcome> CreateNetworkAclEntryOutcomeCallable;
      typedef std::future<CreateNetworkInsightsAccessScopeOutcome> CreateNetworkInsightsAccessScopeOutcomeCallable;
      typedef std::future<CreateNetworkInsightsPathOutcome> CreateNetworkInsightsPathOutcomeCallable;
      typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
      typedef std::future<CreateNetworkInterfacePermissionOutcome> CreateNetworkInterfacePermissionOutcomeCallable;
      typedef std::future<CreatePlacementGroupOutcome> CreatePlacementGroupOutcomeCallable;
      typedef std::future<CreatePublicIpv4PoolOutcome> CreatePublicIpv4PoolOutcomeCallable;
      typedef std::future<CreateReplaceRootVolumeTaskOutcome> CreateReplaceRootVolumeTaskOutcomeCallable;
      typedef std::future<CreateReservedInstancesListingOutcome> CreateReservedInstancesListingOutcomeCallable;
      typedef std::future<CreateRestoreImageTaskOutcome> CreateRestoreImageTaskOutcomeCallable;
      typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
      typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
      typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateSnapshotsOutcome> CreateSnapshotsOutcomeCallable;
      typedef std::future<CreateSpotDatafeedSubscriptionOutcome> CreateSpotDatafeedSubscriptionOutcomeCallable;
      typedef std::future<CreateStoreImageTaskOutcome> CreateStoreImageTaskOutcomeCallable;
      typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
      typedef std::future<CreateSubnetCidrReservationOutcome> CreateSubnetCidrReservationOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<CreateTrafficMirrorFilterOutcome> CreateTrafficMirrorFilterOutcomeCallable;
      typedef std::future<CreateTrafficMirrorFilterRuleOutcome> CreateTrafficMirrorFilterRuleOutcomeCallable;
      typedef std::future<CreateTrafficMirrorSessionOutcome> CreateTrafficMirrorSessionOutcomeCallable;
      typedef std::future<CreateTrafficMirrorTargetOutcome> CreateTrafficMirrorTargetOutcomeCallable;
      typedef std::future<CreateTransitGatewayOutcome> CreateTransitGatewayOutcomeCallable;
      typedef std::future<CreateTransitGatewayConnectOutcome> CreateTransitGatewayConnectOutcomeCallable;
      typedef std::future<CreateTransitGatewayConnectPeerOutcome> CreateTransitGatewayConnectPeerOutcomeCallable;
      typedef std::future<CreateTransitGatewayMulticastDomainOutcome> CreateTransitGatewayMulticastDomainOutcomeCallable;
      typedef std::future<CreateTransitGatewayPeeringAttachmentOutcome> CreateTransitGatewayPeeringAttachmentOutcomeCallable;
      typedef std::future<CreateTransitGatewayPolicyTableOutcome> CreateTransitGatewayPolicyTableOutcomeCallable;
      typedef std::future<CreateTransitGatewayPrefixListReferenceOutcome> CreateTransitGatewayPrefixListReferenceOutcomeCallable;
      typedef std::future<CreateTransitGatewayRouteOutcome> CreateTransitGatewayRouteOutcomeCallable;
      typedef std::future<CreateTransitGatewayRouteTableOutcome> CreateTransitGatewayRouteTableOutcomeCallable;
      typedef std::future<CreateTransitGatewayRouteTableAnnouncementOutcome> CreateTransitGatewayRouteTableAnnouncementOutcomeCallable;
      typedef std::future<CreateTransitGatewayVpcAttachmentOutcome> CreateTransitGatewayVpcAttachmentOutcomeCallable;
      typedef std::future<CreateVerifiedAccessEndpointOutcome> CreateVerifiedAccessEndpointOutcomeCallable;
      typedef std::future<CreateVerifiedAccessGroupOutcome> CreateVerifiedAccessGroupOutcomeCallable;
      typedef std::future<CreateVerifiedAccessInstanceOutcome> CreateVerifiedAccessInstanceOutcomeCallable;
      typedef std::future<CreateVerifiedAccessTrustProviderOutcome> CreateVerifiedAccessTrustProviderOutcomeCallable;
      typedef std::future<CreateVolumeOutcome> CreateVolumeOutcomeCallable;
      typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
      typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
      typedef std::future<CreateVpcEndpointConnectionNotificationOutcome> CreateVpcEndpointConnectionNotificationOutcomeCallable;
      typedef std::future<CreateVpcEndpointServiceConfigurationOutcome> CreateVpcEndpointServiceConfigurationOutcomeCallable;
      typedef std::future<CreateVpcPeeringConnectionOutcome> CreateVpcPeeringConnectionOutcomeCallable;
      typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
      typedef std::future<CreateVpnConnectionRouteOutcome> CreateVpnConnectionRouteOutcomeCallable;
      typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
      typedef std::future<DeleteCarrierGatewayOutcome> DeleteCarrierGatewayOutcomeCallable;
      typedef std::future<DeleteClientVpnEndpointOutcome> DeleteClientVpnEndpointOutcomeCallable;
      typedef std::future<DeleteClientVpnRouteOutcome> DeleteClientVpnRouteOutcomeCallable;
      typedef std::future<DeleteCoipCidrOutcome> DeleteCoipCidrOutcomeCallable;
      typedef std::future<DeleteCoipPoolOutcome> DeleteCoipPoolOutcomeCallable;
      typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
      typedef std::future<DeleteDhcpOptionsOutcome> DeleteDhcpOptionsOutcomeCallable;
      typedef std::future<DeleteEgressOnlyInternetGatewayOutcome> DeleteEgressOnlyInternetGatewayOutcomeCallable;
      typedef std::future<DeleteFleetsOutcome> DeleteFleetsOutcomeCallable;
      typedef std::future<DeleteFlowLogsOutcome> DeleteFlowLogsOutcomeCallable;
      typedef std::future<DeleteFpgaImageOutcome> DeleteFpgaImageOutcomeCallable;
      typedef std::future<DeleteInstanceEventWindowOutcome> DeleteInstanceEventWindowOutcomeCallable;
      typedef std::future<DeleteInternetGatewayOutcome> DeleteInternetGatewayOutcomeCallable;
      typedef std::future<DeleteIpamOutcome> DeleteIpamOutcomeCallable;
      typedef std::future<DeleteIpamPoolOutcome> DeleteIpamPoolOutcomeCallable;
      typedef std::future<DeleteIpamScopeOutcome> DeleteIpamScopeOutcomeCallable;
      typedef std::future<DeleteKeyPairOutcome> DeleteKeyPairOutcomeCallable;
      typedef std::future<DeleteLaunchTemplateOutcome> DeleteLaunchTemplateOutcomeCallable;
      typedef std::future<DeleteLaunchTemplateVersionsOutcome> DeleteLaunchTemplateVersionsOutcomeCallable;
      typedef std::future<DeleteLocalGatewayRouteOutcome> DeleteLocalGatewayRouteOutcomeCallable;
      typedef std::future<DeleteLocalGatewayRouteTableOutcome> DeleteLocalGatewayRouteTableOutcomeCallable;
      typedef std::future<DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome> DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcomeCallable;
      typedef std::future<DeleteLocalGatewayRouteTableVpcAssociationOutcome> DeleteLocalGatewayRouteTableVpcAssociationOutcomeCallable;
      typedef std::future<DeleteManagedPrefixListOutcome> DeleteManagedPrefixListOutcomeCallable;
      typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
      typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
      typedef std::future<DeleteNetworkAclEntryOutcome> DeleteNetworkAclEntryOutcomeCallable;
      typedef std::future<DeleteNetworkInsightsAccessScopeOutcome> DeleteNetworkInsightsAccessScopeOutcomeCallable;
      typedef std::future<DeleteNetworkInsightsAccessScopeAnalysisOutcome> DeleteNetworkInsightsAccessScopeAnalysisOutcomeCallable;
      typedef std::future<DeleteNetworkInsightsAnalysisOutcome> DeleteNetworkInsightsAnalysisOutcomeCallable;
      typedef std::future<DeleteNetworkInsightsPathOutcome> DeleteNetworkInsightsPathOutcomeCallable;
      typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
      typedef std::future<DeleteNetworkInterfacePermissionOutcome> DeleteNetworkInterfacePermissionOutcomeCallable;
      typedef std::future<DeletePlacementGroupOutcome> DeletePlacementGroupOutcomeCallable;
      typedef std::future<DeletePublicIpv4PoolOutcome> DeletePublicIpv4PoolOutcomeCallable;
      typedef std::future<DeleteQueuedReservedInstancesOutcome> DeleteQueuedReservedInstancesOutcomeCallable;
      typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
      typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
      typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
      typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
      typedef std::future<DeleteSpotDatafeedSubscriptionOutcome> DeleteSpotDatafeedSubscriptionOutcomeCallable;
      typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
      typedef std::future<DeleteSubnetCidrReservationOutcome> DeleteSubnetCidrReservationOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DeleteTrafficMirrorFilterOutcome> DeleteTrafficMirrorFilterOutcomeCallable;
      typedef std::future<DeleteTrafficMirrorFilterRuleOutcome> DeleteTrafficMirrorFilterRuleOutcomeCallable;
      typedef std::future<DeleteTrafficMirrorSessionOutcome> DeleteTrafficMirrorSessionOutcomeCallable;
      typedef std::future<DeleteTrafficMirrorTargetOutcome> DeleteTrafficMirrorTargetOutcomeCallable;
      typedef std::future<DeleteTransitGatewayOutcome> DeleteTransitGatewayOutcomeCallable;
      typedef std::future<DeleteTransitGatewayConnectOutcome> DeleteTransitGatewayConnectOutcomeCallable;
      typedef std::future<DeleteTransitGatewayConnectPeerOutcome> DeleteTransitGatewayConnectPeerOutcomeCallable;
      typedef std::future<DeleteTransitGatewayMulticastDomainOutcome> DeleteTransitGatewayMulticastDomainOutcomeCallable;
      typedef std::future<DeleteTransitGatewayPeeringAttachmentOutcome> DeleteTransitGatewayPeeringAttachmentOutcomeCallable;
      typedef std::future<DeleteTransitGatewayPolicyTableOutcome> DeleteTransitGatewayPolicyTableOutcomeCallable;
      typedef std::future<DeleteTransitGatewayPrefixListReferenceOutcome> DeleteTransitGatewayPrefixListReferenceOutcomeCallable;
      typedef std::future<DeleteTransitGatewayRouteOutcome> DeleteTransitGatewayRouteOutcomeCallable;
      typedef std::future<DeleteTransitGatewayRouteTableOutcome> DeleteTransitGatewayRouteTableOutcomeCallable;
      typedef std::future<DeleteTransitGatewayRouteTableAnnouncementOutcome> DeleteTransitGatewayRouteTableAnnouncementOutcomeCallable;
      typedef std::future<DeleteTransitGatewayVpcAttachmentOutcome> DeleteTransitGatewayVpcAttachmentOutcomeCallable;
      typedef std::future<DeleteVerifiedAccessEndpointOutcome> DeleteVerifiedAccessEndpointOutcomeCallable;
      typedef std::future<DeleteVerifiedAccessGroupOutcome> DeleteVerifiedAccessGroupOutcomeCallable;
      typedef std::future<DeleteVerifiedAccessInstanceOutcome> DeleteVerifiedAccessInstanceOutcomeCallable;
      typedef std::future<DeleteVerifiedAccessTrustProviderOutcome> DeleteVerifiedAccessTrustProviderOutcomeCallable;
      typedef std::future<DeleteVolumeOutcome> DeleteVolumeOutcomeCallable;
      typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
      typedef std::future<DeleteVpcEndpointConnectionNotificationsOutcome> DeleteVpcEndpointConnectionNotificationsOutcomeCallable;
      typedef std::future<DeleteVpcEndpointServiceConfigurationsOutcome> DeleteVpcEndpointServiceConfigurationsOutcomeCallable;
      typedef std::future<DeleteVpcEndpointsOutcome> DeleteVpcEndpointsOutcomeCallable;
      typedef std::future<DeleteVpcPeeringConnectionOutcome> DeleteVpcPeeringConnectionOutcomeCallable;
      typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
      typedef std::future<DeleteVpnConnectionRouteOutcome> DeleteVpnConnectionRouteOutcomeCallable;
      typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
      typedef std::future<DeprovisionByoipCidrOutcome> DeprovisionByoipCidrOutcomeCallable;
      typedef std::future<DeprovisionIpamPoolCidrOutcome> DeprovisionIpamPoolCidrOutcomeCallable;
      typedef std::future<DeprovisionPublicIpv4PoolCidrOutcome> DeprovisionPublicIpv4PoolCidrOutcomeCallable;
      typedef std::future<DeregisterImageOutcome> DeregisterImageOutcomeCallable;
      typedef std::future<DeregisterInstanceEventNotificationAttributesOutcome> DeregisterInstanceEventNotificationAttributesOutcomeCallable;
      typedef std::future<DeregisterTransitGatewayMulticastGroupMembersOutcome> DeregisterTransitGatewayMulticastGroupMembersOutcomeCallable;
      typedef std::future<DeregisterTransitGatewayMulticastGroupSourcesOutcome> DeregisterTransitGatewayMulticastGroupSourcesOutcomeCallable;
      typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
      typedef std::future<DescribeAddressTransfersOutcome> DescribeAddressTransfersOutcomeCallable;
      typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
      typedef std::future<DescribeAddressesAttributeOutcome> DescribeAddressesAttributeOutcomeCallable;
      typedef std::future<DescribeAggregateIdFormatOutcome> DescribeAggregateIdFormatOutcomeCallable;
      typedef std::future<DescribeAvailabilityZonesOutcome> DescribeAvailabilityZonesOutcomeCallable;
      typedef std::future<DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome> DescribeAwsNetworkPerformanceMetricSubscriptionsOutcomeCallable;
      typedef std::future<DescribeBundleTasksOutcome> DescribeBundleTasksOutcomeCallable;
      typedef std::future<DescribeByoipCidrsOutcome> DescribeByoipCidrsOutcomeCallable;
      typedef std::future<DescribeCapacityReservationFleetsOutcome> DescribeCapacityReservationFleetsOutcomeCallable;
      typedef std::future<DescribeCapacityReservationsOutcome> DescribeCapacityReservationsOutcomeCallable;
      typedef std::future<DescribeCarrierGatewaysOutcome> DescribeCarrierGatewaysOutcomeCallable;
      typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
      typedef std::future<DescribeClientVpnAuthorizationRulesOutcome> DescribeClientVpnAuthorizationRulesOutcomeCallable;
      typedef std::future<DescribeClientVpnConnectionsOutcome> DescribeClientVpnConnectionsOutcomeCallable;
      typedef std::future<DescribeClientVpnEndpointsOutcome> DescribeClientVpnEndpointsOutcomeCallable;
      typedef std::future<DescribeClientVpnRoutesOutcome> DescribeClientVpnRoutesOutcomeCallable;
      typedef std::future<DescribeClientVpnTargetNetworksOutcome> DescribeClientVpnTargetNetworksOutcomeCallable;
      typedef std::future<DescribeCoipPoolsOutcome> DescribeCoipPoolsOutcomeCallable;
      typedef std::future<DescribeConversionTasksOutcome> DescribeConversionTasksOutcomeCallable;
      typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
      typedef std::future<DescribeDhcpOptionsOutcome> DescribeDhcpOptionsOutcomeCallable;
      typedef std::future<DescribeEgressOnlyInternetGatewaysOutcome> DescribeEgressOnlyInternetGatewaysOutcomeCallable;
      typedef std::future<DescribeElasticGpusOutcome> DescribeElasticGpusOutcomeCallable;
      typedef std::future<DescribeExportImageTasksOutcome> DescribeExportImageTasksOutcomeCallable;
      typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
      typedef std::future<DescribeFastLaunchImagesOutcome> DescribeFastLaunchImagesOutcomeCallable;
      typedef std::future<DescribeFastSnapshotRestoresOutcome> DescribeFastSnapshotRestoresOutcomeCallable;
      typedef std::future<DescribeFleetHistoryOutcome> DescribeFleetHistoryOutcomeCallable;
      typedef std::future<DescribeFleetInstancesOutcome> DescribeFleetInstancesOutcomeCallable;
      typedef std::future<DescribeFleetsOutcome> DescribeFleetsOutcomeCallable;
      typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
      typedef std::future<DescribeFpgaImageAttributeOutcome> DescribeFpgaImageAttributeOutcomeCallable;
      typedef std::future<DescribeFpgaImagesOutcome> DescribeFpgaImagesOutcomeCallable;
      typedef std::future<DescribeHostReservationOfferingsOutcome> DescribeHostReservationOfferingsOutcomeCallable;
      typedef std::future<DescribeHostReservationsOutcome> DescribeHostReservationsOutcomeCallable;
      typedef std::future<DescribeHostsOutcome> DescribeHostsOutcomeCallable;
      typedef std::future<DescribeIamInstanceProfileAssociationsOutcome> DescribeIamInstanceProfileAssociationsOutcomeCallable;
      typedef std::future<DescribeIdFormatOutcome> DescribeIdFormatOutcomeCallable;
      typedef std::future<DescribeIdentityIdFormatOutcome> DescribeIdentityIdFormatOutcomeCallable;
      typedef std::future<DescribeImageAttributeOutcome> DescribeImageAttributeOutcomeCallable;
      typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
      typedef std::future<DescribeImportImageTasksOutcome> DescribeImportImageTasksOutcomeCallable;
      typedef std::future<DescribeImportSnapshotTasksOutcome> DescribeImportSnapshotTasksOutcomeCallable;
      typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
      typedef std::future<DescribeInstanceCreditSpecificationsOutcome> DescribeInstanceCreditSpecificationsOutcomeCallable;
      typedef std::future<DescribeInstanceEventNotificationAttributesOutcome> DescribeInstanceEventNotificationAttributesOutcomeCallable;
      typedef std::future<DescribeInstanceEventWindowsOutcome> DescribeInstanceEventWindowsOutcomeCallable;
      typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
      typedef std::future<DescribeInstanceTypeOfferingsOutcome> DescribeInstanceTypeOfferingsOutcomeCallable;
      typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
      typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
      typedef std::future<DescribeInternetGatewaysOutcome> DescribeInternetGatewaysOutcomeCallable;
      typedef std::future<DescribeIpamPoolsOutcome> DescribeIpamPoolsOutcomeCallable;
      typedef std::future<DescribeIpamScopesOutcome> DescribeIpamScopesOutcomeCallable;
      typedef std::future<DescribeIpamsOutcome> DescribeIpamsOutcomeCallable;
      typedef std::future<DescribeIpv6PoolsOutcome> DescribeIpv6PoolsOutcomeCallable;
      typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
      typedef std::future<DescribeLaunchTemplateVersionsOutcome> DescribeLaunchTemplateVersionsOutcomeCallable;
      typedef std::future<DescribeLaunchTemplatesOutcome> DescribeLaunchTemplatesOutcomeCallable;
      typedef std::future<DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome> DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcomeCallable;
      typedef std::future<DescribeLocalGatewayRouteTableVpcAssociationsOutcome> DescribeLocalGatewayRouteTableVpcAssociationsOutcomeCallable;
      typedef std::future<DescribeLocalGatewayRouteTablesOutcome> DescribeLocalGatewayRouteTablesOutcomeCallable;
      typedef std::future<DescribeLocalGatewayVirtualInterfaceGroupsOutcome> DescribeLocalGatewayVirtualInterfaceGroupsOutcomeCallable;
      typedef std::future<DescribeLocalGatewayVirtualInterfacesOutcome> DescribeLocalGatewayVirtualInterfacesOutcomeCallable;
      typedef std::future<DescribeLocalGatewaysOutcome> DescribeLocalGatewaysOutcomeCallable;
      typedef std::future<DescribeManagedPrefixListsOutcome> DescribeManagedPrefixListsOutcomeCallable;
      typedef std::future<DescribeMovingAddressesOutcome> DescribeMovingAddressesOutcomeCallable;
      typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
      typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
      typedef std::future<DescribeNetworkInsightsAccessScopeAnalysesOutcome> DescribeNetworkInsightsAccessScopeAnalysesOutcomeCallable;
      typedef std::future<DescribeNetworkInsightsAccessScopesOutcome> DescribeNetworkInsightsAccessScopesOutcomeCallable;
      typedef std::future<DescribeNetworkInsightsAnalysesOutcome> DescribeNetworkInsightsAnalysesOutcomeCallable;
      typedef std::future<DescribeNetworkInsightsPathsOutcome> DescribeNetworkInsightsPathsOutcomeCallable;
      typedef std::future<DescribeNetworkInterfaceAttributeOutcome> DescribeNetworkInterfaceAttributeOutcomeCallable;
      typedef std::future<DescribeNetworkInterfacePermissionsOutcome> DescribeNetworkInterfacePermissionsOutcomeCallable;
      typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
      typedef std::future<DescribePlacementGroupsOutcome> DescribePlacementGroupsOutcomeCallable;
      typedef std::future<DescribePrefixListsOutcome> DescribePrefixListsOutcomeCallable;
      typedef std::future<DescribePrincipalIdFormatOutcome> DescribePrincipalIdFormatOutcomeCallable;
      typedef std::future<DescribePublicIpv4PoolsOutcome> DescribePublicIpv4PoolsOutcomeCallable;
      typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
      typedef std::future<DescribeReplaceRootVolumeTasksOutcome> DescribeReplaceRootVolumeTasksOutcomeCallable;
      typedef std::future<DescribeReservedInstancesOutcome> DescribeReservedInstancesOutcomeCallable;
      typedef std::future<DescribeReservedInstancesListingsOutcome> DescribeReservedInstancesListingsOutcomeCallable;
      typedef std::future<DescribeReservedInstancesModificationsOutcome> DescribeReservedInstancesModificationsOutcomeCallable;
      typedef std::future<DescribeReservedInstancesOfferingsOutcome> DescribeReservedInstancesOfferingsOutcomeCallable;
      typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
      typedef std::future<DescribeScheduledInstanceAvailabilityOutcome> DescribeScheduledInstanceAvailabilityOutcomeCallable;
      typedef std::future<DescribeScheduledInstancesOutcome> DescribeScheduledInstancesOutcomeCallable;
      typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
      typedef std::future<DescribeSecurityGroupRulesOutcome> DescribeSecurityGroupRulesOutcomeCallable;
      typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
      typedef std::future<DescribeSnapshotAttributeOutcome> DescribeSnapshotAttributeOutcomeCallable;
      typedef std::future<DescribeSnapshotTierStatusOutcome> DescribeSnapshotTierStatusOutcomeCallable;
      typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
      typedef std::future<DescribeSpotDatafeedSubscriptionOutcome> DescribeSpotDatafeedSubscriptionOutcomeCallable;
      typedef std::future<DescribeSpotFleetInstancesOutcome> DescribeSpotFleetInstancesOutcomeCallable;
      typedef std::future<DescribeSpotFleetRequestHistoryOutcome> DescribeSpotFleetRequestHistoryOutcomeCallable;
      typedef std::future<DescribeSpotFleetRequestsOutcome> DescribeSpotFleetRequestsOutcomeCallable;
      typedef std::future<DescribeSpotInstanceRequestsOutcome> DescribeSpotInstanceRequestsOutcomeCallable;
      typedef std::future<DescribeSpotPriceHistoryOutcome> DescribeSpotPriceHistoryOutcomeCallable;
      typedef std::future<DescribeStaleSecurityGroupsOutcome> DescribeStaleSecurityGroupsOutcomeCallable;
      typedef std::future<DescribeStoreImageTasksOutcome> DescribeStoreImageTasksOutcomeCallable;
      typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<DescribeTrafficMirrorFiltersOutcome> DescribeTrafficMirrorFiltersOutcomeCallable;
      typedef std::future<DescribeTrafficMirrorSessionsOutcome> DescribeTrafficMirrorSessionsOutcomeCallable;
      typedef std::future<DescribeTrafficMirrorTargetsOutcome> DescribeTrafficMirrorTargetsOutcomeCallable;
      typedef std::future<DescribeTransitGatewayAttachmentsOutcome> DescribeTransitGatewayAttachmentsOutcomeCallable;
      typedef std::future<DescribeTransitGatewayConnectPeersOutcome> DescribeTransitGatewayConnectPeersOutcomeCallable;
      typedef std::future<DescribeTransitGatewayConnectsOutcome> DescribeTransitGatewayConnectsOutcomeCallable;
      typedef std::future<DescribeTransitGatewayMulticastDomainsOutcome> DescribeTransitGatewayMulticastDomainsOutcomeCallable;
      typedef std::future<DescribeTransitGatewayPeeringAttachmentsOutcome> DescribeTransitGatewayPeeringAttachmentsOutcomeCallable;
      typedef std::future<DescribeTransitGatewayPolicyTablesOutcome> DescribeTransitGatewayPolicyTablesOutcomeCallable;
      typedef std::future<DescribeTransitGatewayRouteTableAnnouncementsOutcome> DescribeTransitGatewayRouteTableAnnouncementsOutcomeCallable;
      typedef std::future<DescribeTransitGatewayRouteTablesOutcome> DescribeTransitGatewayRouteTablesOutcomeCallable;
      typedef std::future<DescribeTransitGatewayVpcAttachmentsOutcome> DescribeTransitGatewayVpcAttachmentsOutcomeCallable;
      typedef std::future<DescribeTransitGatewaysOutcome> DescribeTransitGatewaysOutcomeCallable;
      typedef std::future<DescribeTrunkInterfaceAssociationsOutcome> DescribeTrunkInterfaceAssociationsOutcomeCallable;
      typedef std::future<DescribeVerifiedAccessEndpointsOutcome> DescribeVerifiedAccessEndpointsOutcomeCallable;
      typedef std::future<DescribeVerifiedAccessGroupsOutcome> DescribeVerifiedAccessGroupsOutcomeCallable;
      typedef std::future<DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome> DescribeVerifiedAccessInstanceLoggingConfigurationsOutcomeCallable;
      typedef std::future<DescribeVerifiedAccessInstancesOutcome> DescribeVerifiedAccessInstancesOutcomeCallable;
      typedef std::future<DescribeVerifiedAccessTrustProvidersOutcome> DescribeVerifiedAccessTrustProvidersOutcomeCallable;
      typedef std::future<DescribeVolumeAttributeOutcome> DescribeVolumeAttributeOutcomeCallable;
      typedef std::future<DescribeVolumeStatusOutcome> DescribeVolumeStatusOutcomeCallable;
      typedef std::future<DescribeVolumesOutcome> DescribeVolumesOutcomeCallable;
      typedef std::future<DescribeVolumesModificationsOutcome> DescribeVolumesModificationsOutcomeCallable;
      typedef std::future<DescribeVpcAttributeOutcome> DescribeVpcAttributeOutcomeCallable;
      typedef std::future<DescribeVpcClassicLinkOutcome> DescribeVpcClassicLinkOutcomeCallable;
      typedef std::future<DescribeVpcClassicLinkDnsSupportOutcome> DescribeVpcClassicLinkDnsSupportOutcomeCallable;
      typedef std::future<DescribeVpcEndpointConnectionNotificationsOutcome> DescribeVpcEndpointConnectionNotificationsOutcomeCallable;
      typedef std::future<DescribeVpcEndpointConnectionsOutcome> DescribeVpcEndpointConnectionsOutcomeCallable;
      typedef std::future<DescribeVpcEndpointServiceConfigurationsOutcome> DescribeVpcEndpointServiceConfigurationsOutcomeCallable;
      typedef std::future<DescribeVpcEndpointServicePermissionsOutcome> DescribeVpcEndpointServicePermissionsOutcomeCallable;
      typedef std::future<DescribeVpcEndpointServicesOutcome> DescribeVpcEndpointServicesOutcomeCallable;
      typedef std::future<DescribeVpcEndpointsOutcome> DescribeVpcEndpointsOutcomeCallable;
      typedef std::future<DescribeVpcPeeringConnectionsOutcome> DescribeVpcPeeringConnectionsOutcomeCallable;
      typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
      typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
      typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
      typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
      typedef std::future<DetachInternetGatewayOutcome> DetachInternetGatewayOutcomeCallable;
      typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
      typedef std::future<DetachVerifiedAccessTrustProviderOutcome> DetachVerifiedAccessTrustProviderOutcomeCallable;
      typedef std::future<DetachVolumeOutcome> DetachVolumeOutcomeCallable;
      typedef std::future<DetachVpnGatewayOutcome> DetachVpnGatewayOutcomeCallable;
      typedef std::future<DisableAddressTransferOutcome> DisableAddressTransferOutcomeCallable;
      typedef std::future<DisableAwsNetworkPerformanceMetricSubscriptionOutcome> DisableAwsNetworkPerformanceMetricSubscriptionOutcomeCallable;
      typedef std::future<DisableEbsEncryptionByDefaultOutcome> DisableEbsEncryptionByDefaultOutcomeCallable;
      typedef std::future<DisableFastLaunchOutcome> DisableFastLaunchOutcomeCallable;
      typedef std::future<DisableFastSnapshotRestoresOutcome> DisableFastSnapshotRestoresOutcomeCallable;
      typedef std::future<DisableImageDeprecationOutcome> DisableImageDeprecationOutcomeCallable;
      typedef std::future<DisableIpamOrganizationAdminAccountOutcome> DisableIpamOrganizationAdminAccountOutcomeCallable;
      typedef std::future<DisableSerialConsoleAccessOutcome> DisableSerialConsoleAccessOutcomeCallable;
      typedef std::future<DisableTransitGatewayRouteTablePropagationOutcome> DisableTransitGatewayRouteTablePropagationOutcomeCallable;
      typedef std::future<DisableVgwRoutePropagationOutcome> DisableVgwRoutePropagationOutcomeCallable;
      typedef std::future<DisableVpcClassicLinkOutcome> DisableVpcClassicLinkOutcomeCallable;
      typedef std::future<DisableVpcClassicLinkDnsSupportOutcome> DisableVpcClassicLinkDnsSupportOutcomeCallable;
      typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
      typedef std::future<DisassociateClientVpnTargetNetworkOutcome> DisassociateClientVpnTargetNetworkOutcomeCallable;
      typedef std::future<DisassociateEnclaveCertificateIamRoleOutcome> DisassociateEnclaveCertificateIamRoleOutcomeCallable;
      typedef std::future<DisassociateIamInstanceProfileOutcome> DisassociateIamInstanceProfileOutcomeCallable;
      typedef std::future<DisassociateInstanceEventWindowOutcome> DisassociateInstanceEventWindowOutcomeCallable;
      typedef std::future<DisassociateRouteTableOutcome> DisassociateRouteTableOutcomeCallable;
      typedef std::future<DisassociateSubnetCidrBlockOutcome> DisassociateSubnetCidrBlockOutcomeCallable;
      typedef std::future<DisassociateTransitGatewayMulticastDomainOutcome> DisassociateTransitGatewayMulticastDomainOutcomeCallable;
      typedef std::future<DisassociateTransitGatewayPolicyTableOutcome> DisassociateTransitGatewayPolicyTableOutcomeCallable;
      typedef std::future<DisassociateTransitGatewayRouteTableOutcome> DisassociateTransitGatewayRouteTableOutcomeCallable;
      typedef std::future<DisassociateTrunkInterfaceOutcome> DisassociateTrunkInterfaceOutcomeCallable;
      typedef std::future<DisassociateVpcCidrBlockOutcome> DisassociateVpcCidrBlockOutcomeCallable;
      typedef std::future<EnableAddressTransferOutcome> EnableAddressTransferOutcomeCallable;
      typedef std::future<EnableAwsNetworkPerformanceMetricSubscriptionOutcome> EnableAwsNetworkPerformanceMetricSubscriptionOutcomeCallable;
      typedef std::future<EnableEbsEncryptionByDefaultOutcome> EnableEbsEncryptionByDefaultOutcomeCallable;
      typedef std::future<EnableFastLaunchOutcome> EnableFastLaunchOutcomeCallable;
      typedef std::future<EnableFastSnapshotRestoresOutcome> EnableFastSnapshotRestoresOutcomeCallable;
      typedef std::future<EnableImageDeprecationOutcome> EnableImageDeprecationOutcomeCallable;
      typedef std::future<EnableIpamOrganizationAdminAccountOutcome> EnableIpamOrganizationAdminAccountOutcomeCallable;
      typedef std::future<EnableReachabilityAnalyzerOrganizationSharingOutcome> EnableReachabilityAnalyzerOrganizationSharingOutcomeCallable;
      typedef std::future<EnableSerialConsoleAccessOutcome> EnableSerialConsoleAccessOutcomeCallable;
      typedef std::future<EnableTransitGatewayRouteTablePropagationOutcome> EnableTransitGatewayRouteTablePropagationOutcomeCallable;
      typedef std::future<EnableVgwRoutePropagationOutcome> EnableVgwRoutePropagationOutcomeCallable;
      typedef std::future<EnableVolumeIOOutcome> EnableVolumeIOOutcomeCallable;
      typedef std::future<EnableVpcClassicLinkOutcome> EnableVpcClassicLinkOutcomeCallable;
      typedef std::future<EnableVpcClassicLinkDnsSupportOutcome> EnableVpcClassicLinkDnsSupportOutcomeCallable;
      typedef std::future<ExportClientVpnClientCertificateRevocationListOutcome> ExportClientVpnClientCertificateRevocationListOutcomeCallable;
      typedef std::future<ExportClientVpnClientConfigurationOutcome> ExportClientVpnClientConfigurationOutcomeCallable;
      typedef std::future<ExportImageOutcome> ExportImageOutcomeCallable;
      typedef std::future<ExportTransitGatewayRoutesOutcome> ExportTransitGatewayRoutesOutcomeCallable;
      typedef std::future<GetAssociatedEnclaveCertificateIamRolesOutcome> GetAssociatedEnclaveCertificateIamRolesOutcomeCallable;
      typedef std::future<GetAssociatedIpv6PoolCidrsOutcome> GetAssociatedIpv6PoolCidrsOutcomeCallable;
      typedef std::future<GetAwsNetworkPerformanceDataOutcome> GetAwsNetworkPerformanceDataOutcomeCallable;
      typedef std::future<GetCapacityReservationUsageOutcome> GetCapacityReservationUsageOutcomeCallable;
      typedef std::future<GetCoipPoolUsageOutcome> GetCoipPoolUsageOutcomeCallable;
      typedef std::future<GetConsoleOutputOutcome> GetConsoleOutputOutcomeCallable;
      typedef std::future<GetConsoleScreenshotOutcome> GetConsoleScreenshotOutcomeCallable;
      typedef std::future<GetDefaultCreditSpecificationOutcome> GetDefaultCreditSpecificationOutcomeCallable;
      typedef std::future<GetEbsDefaultKmsKeyIdOutcome> GetEbsDefaultKmsKeyIdOutcomeCallable;
      typedef std::future<GetEbsEncryptionByDefaultOutcome> GetEbsEncryptionByDefaultOutcomeCallable;
      typedef std::future<GetFlowLogsIntegrationTemplateOutcome> GetFlowLogsIntegrationTemplateOutcomeCallable;
      typedef std::future<GetGroupsForCapacityReservationOutcome> GetGroupsForCapacityReservationOutcomeCallable;
      typedef std::future<GetHostReservationPurchasePreviewOutcome> GetHostReservationPurchasePreviewOutcomeCallable;
      typedef std::future<GetInstanceTypesFromInstanceRequirementsOutcome> GetInstanceTypesFromInstanceRequirementsOutcomeCallable;
      typedef std::future<GetInstanceUefiDataOutcome> GetInstanceUefiDataOutcomeCallable;
      typedef std::future<GetIpamAddressHistoryOutcome> GetIpamAddressHistoryOutcomeCallable;
      typedef std::future<GetIpamPoolAllocationsOutcome> GetIpamPoolAllocationsOutcomeCallable;
      typedef std::future<GetIpamPoolCidrsOutcome> GetIpamPoolCidrsOutcomeCallable;
      typedef std::future<GetIpamResourceCidrsOutcome> GetIpamResourceCidrsOutcomeCallable;
      typedef std::future<GetLaunchTemplateDataOutcome> GetLaunchTemplateDataOutcomeCallable;
      typedef std::future<GetManagedPrefixListAssociationsOutcome> GetManagedPrefixListAssociationsOutcomeCallable;
      typedef std::future<GetManagedPrefixListEntriesOutcome> GetManagedPrefixListEntriesOutcomeCallable;
      typedef std::future<GetNetworkInsightsAccessScopeAnalysisFindingsOutcome> GetNetworkInsightsAccessScopeAnalysisFindingsOutcomeCallable;
      typedef std::future<GetNetworkInsightsAccessScopeContentOutcome> GetNetworkInsightsAccessScopeContentOutcomeCallable;
      typedef std::future<GetPasswordDataOutcome> GetPasswordDataOutcomeCallable;
      typedef std::future<GetReservedInstancesExchangeQuoteOutcome> GetReservedInstancesExchangeQuoteOutcomeCallable;
      typedef std::future<GetSerialConsoleAccessStatusOutcome> GetSerialConsoleAccessStatusOutcomeCallable;
      typedef std::future<GetSpotPlacementScoresOutcome> GetSpotPlacementScoresOutcomeCallable;
      typedef std::future<GetSubnetCidrReservationsOutcome> GetSubnetCidrReservationsOutcomeCallable;
      typedef std::future<GetTransitGatewayAttachmentPropagationsOutcome> GetTransitGatewayAttachmentPropagationsOutcomeCallable;
      typedef std::future<GetTransitGatewayMulticastDomainAssociationsOutcome> GetTransitGatewayMulticastDomainAssociationsOutcomeCallable;
      typedef std::future<GetTransitGatewayPolicyTableAssociationsOutcome> GetTransitGatewayPolicyTableAssociationsOutcomeCallable;
      typedef std::future<GetTransitGatewayPolicyTableEntriesOutcome> GetTransitGatewayPolicyTableEntriesOutcomeCallable;
      typedef std::future<GetTransitGatewayPrefixListReferencesOutcome> GetTransitGatewayPrefixListReferencesOutcomeCallable;
      typedef std::future<GetTransitGatewayRouteTableAssociationsOutcome> GetTransitGatewayRouteTableAssociationsOutcomeCallable;
      typedef std::future<GetTransitGatewayRouteTablePropagationsOutcome> GetTransitGatewayRouteTablePropagationsOutcomeCallable;
      typedef std::future<GetVerifiedAccessEndpointPolicyOutcome> GetVerifiedAccessEndpointPolicyOutcomeCallable;
      typedef std::future<GetVerifiedAccessGroupPolicyOutcome> GetVerifiedAccessGroupPolicyOutcomeCallable;
      typedef std::future<GetVpnConnectionDeviceSampleConfigurationOutcome> GetVpnConnectionDeviceSampleConfigurationOutcomeCallable;
      typedef std::future<GetVpnConnectionDeviceTypesOutcome> GetVpnConnectionDeviceTypesOutcomeCallable;
      typedef std::future<ImportClientVpnClientCertificateRevocationListOutcome> ImportClientVpnClientCertificateRevocationListOutcomeCallable;
      typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
      typedef std::future<ImportInstanceOutcome> ImportInstanceOutcomeCallable;
      typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
      typedef std::future<ImportSnapshotOutcome> ImportSnapshotOutcomeCallable;
      typedef std::future<ImportVolumeOutcome> ImportVolumeOutcomeCallable;
      typedef std::future<ListImagesInRecycleBinOutcome> ListImagesInRecycleBinOutcomeCallable;
      typedef std::future<ListSnapshotsInRecycleBinOutcome> ListSnapshotsInRecycleBinOutcomeCallable;
      typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
      typedef std::future<ModifyAvailabilityZoneGroupOutcome> ModifyAvailabilityZoneGroupOutcomeCallable;
      typedef std::future<ModifyCapacityReservationOutcome> ModifyCapacityReservationOutcomeCallable;
      typedef std::future<ModifyCapacityReservationFleetOutcome> ModifyCapacityReservationFleetOutcomeCallable;
      typedef std::future<ModifyClientVpnEndpointOutcome> ModifyClientVpnEndpointOutcomeCallable;
      typedef std::future<ModifyDefaultCreditSpecificationOutcome> ModifyDefaultCreditSpecificationOutcomeCallable;
      typedef std::future<ModifyEbsDefaultKmsKeyIdOutcome> ModifyEbsDefaultKmsKeyIdOutcomeCallable;
      typedef std::future<ModifyFleetOutcome> ModifyFleetOutcomeCallable;
      typedef std::future<ModifyFpgaImageAttributeOutcome> ModifyFpgaImageAttributeOutcomeCallable;
      typedef std::future<ModifyHostsOutcome> ModifyHostsOutcomeCallable;
      typedef std::future<ModifyIdFormatOutcome> ModifyIdFormatOutcomeCallable;
      typedef std::future<ModifyIdentityIdFormatOutcome> ModifyIdentityIdFormatOutcomeCallable;
      typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
      typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
      typedef std::future<ModifyInstanceCapacityReservationAttributesOutcome> ModifyInstanceCapacityReservationAttributesOutcomeCallable;
      typedef std::future<ModifyInstanceCreditSpecificationOutcome> ModifyInstanceCreditSpecificationOutcomeCallable;
      typedef std::future<ModifyInstanceEventStartTimeOutcome> ModifyInstanceEventStartTimeOutcomeCallable;
      typedef std::future<ModifyInstanceEventWindowOutcome> ModifyInstanceEventWindowOutcomeCallable;
      typedef std::future<ModifyInstanceMaintenanceOptionsOutcome> ModifyInstanceMaintenanceOptionsOutcomeCallable;
      typedef std::future<ModifyInstanceMetadataOptionsOutcome> ModifyInstanceMetadataOptionsOutcomeCallable;
      typedef std::future<ModifyInstancePlacementOutcome> ModifyInstancePlacementOutcomeCallable;
      typedef std::future<ModifyIpamOutcome> ModifyIpamOutcomeCallable;
      typedef std::future<ModifyIpamPoolOutcome> ModifyIpamPoolOutcomeCallable;
      typedef std::future<ModifyIpamResourceCidrOutcome> ModifyIpamResourceCidrOutcomeCallable;
      typedef std::future<ModifyIpamScopeOutcome> ModifyIpamScopeOutcomeCallable;
      typedef std::future<ModifyLaunchTemplateOutcome> ModifyLaunchTemplateOutcomeCallable;
      typedef std::future<ModifyLocalGatewayRouteOutcome> ModifyLocalGatewayRouteOutcomeCallable;
      typedef std::future<ModifyManagedPrefixListOutcome> ModifyManagedPrefixListOutcomeCallable;
      typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
      typedef std::future<ModifyPrivateDnsNameOptionsOutcome> ModifyPrivateDnsNameOptionsOutcomeCallable;
      typedef std::future<ModifyReservedInstancesOutcome> ModifyReservedInstancesOutcomeCallable;
      typedef std::future<ModifySecurityGroupRulesOutcome> ModifySecurityGroupRulesOutcomeCallable;
      typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
      typedef std::future<ModifySnapshotTierOutcome> ModifySnapshotTierOutcomeCallable;
      typedef std::future<ModifySpotFleetRequestOutcome> ModifySpotFleetRequestOutcomeCallable;
      typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
      typedef std::future<ModifyTrafficMirrorFilterNetworkServicesOutcome> ModifyTrafficMirrorFilterNetworkServicesOutcomeCallable;
      typedef std::future<ModifyTrafficMirrorFilterRuleOutcome> ModifyTrafficMirrorFilterRuleOutcomeCallable;
      typedef std::future<ModifyTrafficMirrorSessionOutcome> ModifyTrafficMirrorSessionOutcomeCallable;
      typedef std::future<ModifyTransitGatewayOutcome> ModifyTransitGatewayOutcomeCallable;
      typedef std::future<ModifyTransitGatewayPrefixListReferenceOutcome> ModifyTransitGatewayPrefixListReferenceOutcomeCallable;
      typedef std::future<ModifyTransitGatewayVpcAttachmentOutcome> ModifyTransitGatewayVpcAttachmentOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessEndpointOutcome> ModifyVerifiedAccessEndpointOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessEndpointPolicyOutcome> ModifyVerifiedAccessEndpointPolicyOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessGroupOutcome> ModifyVerifiedAccessGroupOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessGroupPolicyOutcome> ModifyVerifiedAccessGroupPolicyOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessInstanceOutcome> ModifyVerifiedAccessInstanceOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessInstanceLoggingConfigurationOutcome> ModifyVerifiedAccessInstanceLoggingConfigurationOutcomeCallable;
      typedef std::future<ModifyVerifiedAccessTrustProviderOutcome> ModifyVerifiedAccessTrustProviderOutcomeCallable;
      typedef std::future<ModifyVolumeOutcome> ModifyVolumeOutcomeCallable;
      typedef std::future<ModifyVolumeAttributeOutcome> ModifyVolumeAttributeOutcomeCallable;
      typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
      typedef std::future<ModifyVpcEndpointOutcome> ModifyVpcEndpointOutcomeCallable;
      typedef std::future<ModifyVpcEndpointConnectionNotificationOutcome> ModifyVpcEndpointConnectionNotificationOutcomeCallable;
      typedef std::future<ModifyVpcEndpointServiceConfigurationOutcome> ModifyVpcEndpointServiceConfigurationOutcomeCallable;
      typedef std::future<ModifyVpcEndpointServicePayerResponsibilityOutcome> ModifyVpcEndpointServicePayerResponsibilityOutcomeCallable;
      typedef std::future<ModifyVpcEndpointServicePermissionsOutcome> ModifyVpcEndpointServicePermissionsOutcomeCallable;
      typedef std::future<ModifyVpcPeeringConnectionOptionsOutcome> ModifyVpcPeeringConnectionOptionsOutcomeCallable;
      typedef std::future<ModifyVpcTenancyOutcome> ModifyVpcTenancyOutcomeCallable;
      typedef std::future<ModifyVpnConnectionOutcome> ModifyVpnConnectionOutcomeCallable;
      typedef std::future<ModifyVpnConnectionOptionsOutcome> ModifyVpnConnectionOptionsOutcomeCallable;
      typedef std::future<ModifyVpnTunnelCertificateOutcome> ModifyVpnTunnelCertificateOutcomeCallable;
      typedef std::future<ModifyVpnTunnelOptionsOutcome> ModifyVpnTunnelOptionsOutcomeCallable;
      typedef std::future<MonitorInstancesOutcome> MonitorInstancesOutcomeCallable;
      typedef std::future<MoveAddressToVpcOutcome> MoveAddressToVpcOutcomeCallable;
      typedef std::future<MoveByoipCidrToIpamOutcome> MoveByoipCidrToIpamOutcomeCallable;
      typedef std::future<ProvisionByoipCidrOutcome> ProvisionByoipCidrOutcomeCallable;
      typedef std::future<ProvisionIpamPoolCidrOutcome> ProvisionIpamPoolCidrOutcomeCallable;
      typedef std::future<ProvisionPublicIpv4PoolCidrOutcome> ProvisionPublicIpv4PoolCidrOutcomeCallable;
      typedef std::future<PurchaseHostReservationOutcome> PurchaseHostReservationOutcomeCallable;
      typedef std::future<PurchaseReservedInstancesOfferingOutcome> PurchaseReservedInstancesOfferingOutcomeCallable;
      typedef std::future<PurchaseScheduledInstancesOutcome> PurchaseScheduledInstancesOutcomeCallable;
      typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
      typedef std::future<RegisterImageOutcome> RegisterImageOutcomeCallable;
      typedef std::future<RegisterInstanceEventNotificationAttributesOutcome> RegisterInstanceEventNotificationAttributesOutcomeCallable;
      typedef std::future<RegisterTransitGatewayMulticastGroupMembersOutcome> RegisterTransitGatewayMulticastGroupMembersOutcomeCallable;
      typedef std::future<RegisterTransitGatewayMulticastGroupSourcesOutcome> RegisterTransitGatewayMulticastGroupSourcesOutcomeCallable;
      typedef std::future<RejectTransitGatewayMulticastDomainAssociationsOutcome> RejectTransitGatewayMulticastDomainAssociationsOutcomeCallable;
      typedef std::future<RejectTransitGatewayPeeringAttachmentOutcome> RejectTransitGatewayPeeringAttachmentOutcomeCallable;
      typedef std::future<RejectTransitGatewayVpcAttachmentOutcome> RejectTransitGatewayVpcAttachmentOutcomeCallable;
      typedef std::future<RejectVpcEndpointConnectionsOutcome> RejectVpcEndpointConnectionsOutcomeCallable;
      typedef std::future<RejectVpcPeeringConnectionOutcome> RejectVpcPeeringConnectionOutcomeCallable;
      typedef std::future<ReleaseAddressOutcome> ReleaseAddressOutcomeCallable;
      typedef std::future<ReleaseHostsOutcome> ReleaseHostsOutcomeCallable;
      typedef std::future<ReleaseIpamPoolAllocationOutcome> ReleaseIpamPoolAllocationOutcomeCallable;
      typedef std::future<ReplaceIamInstanceProfileAssociationOutcome> ReplaceIamInstanceProfileAssociationOutcomeCallable;
      typedef std::future<ReplaceNetworkAclAssociationOutcome> ReplaceNetworkAclAssociationOutcomeCallable;
      typedef std::future<ReplaceNetworkAclEntryOutcome> ReplaceNetworkAclEntryOutcomeCallable;
      typedef std::future<ReplaceRouteOutcome> ReplaceRouteOutcomeCallable;
      typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
      typedef std::future<ReplaceTransitGatewayRouteOutcome> ReplaceTransitGatewayRouteOutcomeCallable;
      typedef std::future<ReportInstanceStatusOutcome> ReportInstanceStatusOutcomeCallable;
      typedef std::future<RequestSpotFleetOutcome> RequestSpotFleetOutcomeCallable;
      typedef std::future<RequestSpotInstancesOutcome> RequestSpotInstancesOutcomeCallable;
      typedef std::future<ResetAddressAttributeOutcome> ResetAddressAttributeOutcomeCallable;
      typedef std::future<ResetEbsDefaultKmsKeyIdOutcome> ResetEbsDefaultKmsKeyIdOutcomeCallable;
      typedef std::future<ResetFpgaImageAttributeOutcome> ResetFpgaImageAttributeOutcomeCallable;
      typedef std::future<ResetImageAttributeOutcome> ResetImageAttributeOutcomeCallable;
      typedef std::future<ResetInstanceAttributeOutcome> ResetInstanceAttributeOutcomeCallable;
      typedef std::future<ResetNetworkInterfaceAttributeOutcome> ResetNetworkInterfaceAttributeOutcomeCallable;
      typedef std::future<ResetSnapshotAttributeOutcome> ResetSnapshotAttributeOutcomeCallable;
      typedef std::future<RestoreAddressToClassicOutcome> RestoreAddressToClassicOutcomeCallable;
      typedef std::future<RestoreImageFromRecycleBinOutcome> RestoreImageFromRecycleBinOutcomeCallable;
      typedef std::future<RestoreManagedPrefixListVersionOutcome> RestoreManagedPrefixListVersionOutcomeCallable;
      typedef std::future<RestoreSnapshotFromRecycleBinOutcome> RestoreSnapshotFromRecycleBinOutcomeCallable;
      typedef std::future<RestoreSnapshotTierOutcome> RestoreSnapshotTierOutcomeCallable;
      typedef std::future<RevokeClientVpnIngressOutcome> RevokeClientVpnIngressOutcomeCallable;
      typedef std::future<RevokeSecurityGroupEgressOutcome> RevokeSecurityGroupEgressOutcomeCallable;
      typedef std::future<RevokeSecurityGroupIngressOutcome> RevokeSecurityGroupIngressOutcomeCallable;
      typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
      typedef std::future<RunScheduledInstancesOutcome> RunScheduledInstancesOutcomeCallable;
      typedef std::future<SearchLocalGatewayRoutesOutcome> SearchLocalGatewayRoutesOutcomeCallable;
      typedef std::future<SearchTransitGatewayMulticastGroupsOutcome> SearchTransitGatewayMulticastGroupsOutcomeCallable;
      typedef std::future<SearchTransitGatewayRoutesOutcome> SearchTransitGatewayRoutesOutcomeCallable;
      typedef std::future<SendDiagnosticInterruptOutcome> SendDiagnosticInterruptOutcomeCallable;
      typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
      typedef std::future<StartNetworkInsightsAccessScopeAnalysisOutcome> StartNetworkInsightsAccessScopeAnalysisOutcomeCallable;
      typedef std::future<StartNetworkInsightsAnalysisOutcome> StartNetworkInsightsAnalysisOutcomeCallable;
      typedef std::future<StartVpcEndpointServicePrivateDnsVerificationOutcome> StartVpcEndpointServicePrivateDnsVerificationOutcomeCallable;
      typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
      typedef std::future<TerminateClientVpnConnectionsOutcome> TerminateClientVpnConnectionsOutcomeCallable;
      typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
      typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
      typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
      typedef std::future<UnmonitorInstancesOutcome> UnmonitorInstancesOutcomeCallable;
      typedef std::future<UpdateSecurityGroupRuleDescriptionsEgressOutcome> UpdateSecurityGroupRuleDescriptionsEgressOutcomeCallable;
      typedef std::future<UpdateSecurityGroupRuleDescriptionsIngressOutcome> UpdateSecurityGroupRuleDescriptionsIngressOutcomeCallable;
      typedef std::future<WithdrawByoipCidrOutcome> WithdrawByoipCidrOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EC2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const EC2Client*, const Model::AcceptAddressTransferRequest&, const Model::AcceptAddressTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptAddressTransferResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptReservedInstancesExchangeQuoteRequest&, const Model::AcceptReservedInstancesExchangeQuoteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptReservedInstancesExchangeQuoteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptTransitGatewayMulticastDomainAssociationsRequest&, const Model::AcceptTransitGatewayMulticastDomainAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptTransitGatewayMulticastDomainAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptTransitGatewayPeeringAttachmentRequest&, const Model::AcceptTransitGatewayPeeringAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptTransitGatewayPeeringAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptTransitGatewayVpcAttachmentRequest&, const Model::AcceptTransitGatewayVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptTransitGatewayVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptVpcEndpointConnectionsRequest&, const Model::AcceptVpcEndpointConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptVpcEndpointConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AcceptVpcPeeringConnectionRequest&, const Model::AcceptVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AdvertiseByoipCidrRequest&, const Model::AdvertiseByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AdvertiseByoipCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AllocateAddressRequest&, const Model::AllocateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AllocateHostsRequest&, const Model::AllocateHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AllocateIpamPoolCidrRequest&, const Model::AllocateIpamPoolCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateIpamPoolCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ApplySecurityGroupsToClientVpnTargetNetworkRequest&, const Model::ApplySecurityGroupsToClientVpnTargetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplySecurityGroupsToClientVpnTargetNetworkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssignIpv6AddressesRequest&, const Model::AssignIpv6AddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignIpv6AddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssignPrivateIpAddressesRequest&, const Model::AssignPrivateIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignPrivateIpAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateAddressRequest&, const Model::AssociateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateClientVpnTargetNetworkRequest&, const Model::AssociateClientVpnTargetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateClientVpnTargetNetworkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateDhcpOptionsRequest&, const Model::AssociateDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateEnclaveCertificateIamRoleRequest&, const Model::AssociateEnclaveCertificateIamRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEnclaveCertificateIamRoleResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateIamInstanceProfileRequest&, const Model::AssociateIamInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIamInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateInstanceEventWindowRequest&, const Model::AssociateInstanceEventWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateInstanceEventWindowResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateRouteTableRequest&, const Model::AssociateRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateSubnetCidrBlockRequest&, const Model::AssociateSubnetCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSubnetCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateTransitGatewayMulticastDomainRequest&, const Model::AssociateTransitGatewayMulticastDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTransitGatewayMulticastDomainResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateTransitGatewayPolicyTableRequest&, const Model::AssociateTransitGatewayPolicyTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTransitGatewayPolicyTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateTransitGatewayRouteTableRequest&, const Model::AssociateTransitGatewayRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTransitGatewayRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateTrunkInterfaceRequest&, const Model::AssociateTrunkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrunkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AssociateVpcCidrBlockRequest&, const Model::AssociateVpcCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateVpcCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachClassicLinkVpcRequest&, const Model::AttachClassicLinkVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachClassicLinkVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachInternetGatewayRequest&, const Model::AttachInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachNetworkInterfaceRequest&, const Model::AttachNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachVerifiedAccessTrustProviderRequest&, const Model::AttachVerifiedAccessTrustProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachVerifiedAccessTrustProviderResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachVolumeRequest&, const Model::AttachVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AttachVpnGatewayRequest&, const Model::AttachVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AuthorizeClientVpnIngressRequest&, const Model::AuthorizeClientVpnIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeClientVpnIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AuthorizeSecurityGroupEgressRequest&, const Model::AuthorizeSecurityGroupEgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeSecurityGroupEgressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::AuthorizeSecurityGroupIngressRequest&, const Model::AuthorizeSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::BundleInstanceRequest&, const Model::BundleInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BundleInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelBundleTaskRequest&, const Model::CancelBundleTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelBundleTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelCapacityReservationRequest&, const Model::CancelCapacityReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCapacityReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelCapacityReservationFleetsRequest&, const Model::CancelCapacityReservationFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCapacityReservationFleetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelConversionTaskRequest&, const Model::CancelConversionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelConversionTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelExportTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelImageLaunchPermissionRequest&, const Model::CancelImageLaunchPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelImageLaunchPermissionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelImportTaskRequest&, const Model::CancelImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelImportTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelReservedInstancesListingRequest&, const Model::CancelReservedInstancesListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelReservedInstancesListingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelSpotFleetRequestsRequest&, const Model::CancelSpotFleetRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSpotFleetRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CancelSpotInstanceRequestsRequest&, const Model::CancelSpotInstanceRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSpotInstanceRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ConfirmProductInstanceRequest&, const Model::ConfirmProductInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmProductInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CopyFpgaImageRequest&, const Model::CopyFpgaImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyFpgaImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CopyImageRequest&, const Model::CopyImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCapacityReservationRequest&, const Model::CreateCapacityReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCapacityReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCapacityReservationFleetRequest&, const Model::CreateCapacityReservationFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCapacityReservationFleetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCarrierGatewayRequest&, const Model::CreateCarrierGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCarrierGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateClientVpnEndpointRequest&, const Model::CreateClientVpnEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClientVpnEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateClientVpnRouteRequest&, const Model::CreateClientVpnRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClientVpnRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCoipCidrRequest&, const Model::CreateCoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCoipCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCoipPoolRequest&, const Model::CreateCoipPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCoipPoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateCustomerGatewayRequest&, const Model::CreateCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateDefaultSubnetRequest&, const Model::CreateDefaultSubnetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDefaultSubnetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateDefaultVpcRequest&, const Model::CreateDefaultVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDefaultVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateDhcpOptionsRequest&, const Model::CreateDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateEgressOnlyInternetGatewayRequest&, const Model::CreateEgressOnlyInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEgressOnlyInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateFleetRequest&, const Model::CreateFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateFlowLogsRequest&, const Model::CreateFlowLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowLogsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateFpgaImageRequest&, const Model::CreateFpgaImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFpgaImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateImageRequest&, const Model::CreateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateInstanceEventWindowRequest&, const Model::CreateInstanceEventWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceEventWindowResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateInstanceExportTaskRequest&, const Model::CreateInstanceExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceExportTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateInternetGatewayRequest&, const Model::CreateInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateIpamRequest&, const Model::CreateIpamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpamResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateIpamPoolRequest&, const Model::CreateIpamPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpamPoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateIpamScopeRequest&, const Model::CreateIpamScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpamScopeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateKeyPairRequest&, const Model::CreateKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyPairResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateLaunchTemplateRequest&, const Model::CreateLaunchTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchTemplateResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateLaunchTemplateVersionRequest&, const Model::CreateLaunchTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateLocalGatewayRouteRequest&, const Model::CreateLocalGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocalGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateLocalGatewayRouteTableRequest&, const Model::CreateLocalGatewayRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocalGatewayRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest&, const Model::CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateLocalGatewayRouteTableVpcAssociationRequest&, const Model::CreateLocalGatewayRouteTableVpcAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocalGatewayRouteTableVpcAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateManagedPrefixListRequest&, const Model::CreateManagedPrefixListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateManagedPrefixListResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNatGatewayRequest&, const Model::CreateNatGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNatGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkAclRequest&, const Model::CreateNetworkAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkAclResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkAclEntryRequest&, const Model::CreateNetworkAclEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkAclEntryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkInsightsAccessScopeRequest&, const Model::CreateNetworkInsightsAccessScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkInsightsAccessScopeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkInsightsPathRequest&, const Model::CreateNetworkInsightsPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkInsightsPathResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkInterfaceRequest&, const Model::CreateNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateNetworkInterfacePermissionRequest&, const Model::CreateNetworkInterfacePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkInterfacePermissionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreatePlacementGroupRequest&, const Model::CreatePlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlacementGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreatePublicIpv4PoolRequest&, const Model::CreatePublicIpv4PoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicIpv4PoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateReplaceRootVolumeTaskRequest&, const Model::CreateReplaceRootVolumeTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplaceRootVolumeTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateReservedInstancesListingRequest&, const Model::CreateReservedInstancesListingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReservedInstancesListingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateRestoreImageTaskRequest&, const Model::CreateRestoreImageTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRestoreImageTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateRouteTableRequest&, const Model::CreateRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSecurityGroupRequest&, const Model::CreateSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSnapshotsRequest&, const Model::CreateSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSpotDatafeedSubscriptionRequest&, const Model::CreateSpotDatafeedSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSpotDatafeedSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateStoreImageTaskRequest&, const Model::CreateStoreImageTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStoreImageTaskResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSubnetRequest&, const Model::CreateSubnetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateSubnetCidrReservationRequest&, const Model::CreateSubnetCidrReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetCidrReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTrafficMirrorFilterRequest&, const Model::CreateTrafficMirrorFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficMirrorFilterResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTrafficMirrorFilterRuleRequest&, const Model::CreateTrafficMirrorFilterRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficMirrorFilterRuleResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTrafficMirrorSessionRequest&, const Model::CreateTrafficMirrorSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficMirrorSessionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTrafficMirrorTargetRequest&, const Model::CreateTrafficMirrorTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrafficMirrorTargetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayRequest&, const Model::CreateTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayConnectRequest&, const Model::CreateTransitGatewayConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayConnectResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayConnectPeerRequest&, const Model::CreateTransitGatewayConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayConnectPeerResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayMulticastDomainRequest&, const Model::CreateTransitGatewayMulticastDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayMulticastDomainResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayPeeringAttachmentRequest&, const Model::CreateTransitGatewayPeeringAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayPeeringAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayPolicyTableRequest&, const Model::CreateTransitGatewayPolicyTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayPolicyTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayPrefixListReferenceRequest&, const Model::CreateTransitGatewayPrefixListReferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayPrefixListReferenceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayRouteRequest&, const Model::CreateTransitGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayRouteTableRequest&, const Model::CreateTransitGatewayRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayRouteTableAnnouncementRequest&, const Model::CreateTransitGatewayRouteTableAnnouncementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayRouteTableAnnouncementResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateTransitGatewayVpcAttachmentRequest&, const Model::CreateTransitGatewayVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVerifiedAccessEndpointRequest&, const Model::CreateVerifiedAccessEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVerifiedAccessEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVerifiedAccessGroupRequest&, const Model::CreateVerifiedAccessGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVerifiedAccessGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVerifiedAccessInstanceRequest&, const Model::CreateVerifiedAccessInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVerifiedAccessInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVerifiedAccessTrustProviderRequest&, const Model::CreateVerifiedAccessTrustProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVerifiedAccessTrustProviderResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVolumeRequest&, const Model::CreateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcRequest&, const Model::CreateVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcEndpointRequest&, const Model::CreateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcEndpointConnectionNotificationRequest&, const Model::CreateVpcEndpointConnectionNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointConnectionNotificationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcEndpointServiceConfigurationRequest&, const Model::CreateVpcEndpointServiceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointServiceConfigurationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpcPeeringConnectionRequest&, const Model::CreateVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpnConnectionRequest&, const Model::CreateVpnConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpnConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpnConnectionRouteRequest&, const Model::CreateVpnConnectionRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpnConnectionRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::CreateVpnGatewayRequest&, const Model::CreateVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteCarrierGatewayRequest&, const Model::DeleteCarrierGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCarrierGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteClientVpnEndpointRequest&, const Model::DeleteClientVpnEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClientVpnEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteClientVpnRouteRequest&, const Model::DeleteClientVpnRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClientVpnRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteCoipCidrRequest&, const Model::DeleteCoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoipCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteCoipPoolRequest&, const Model::DeleteCoipPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoipPoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteCustomerGatewayRequest&, const Model::DeleteCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteDhcpOptionsRequest&, const Model::DeleteDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteEgressOnlyInternetGatewayRequest&, const Model::DeleteEgressOnlyInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEgressOnlyInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteFleetsRequest&, const Model::DeleteFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteFlowLogsRequest&, const Model::DeleteFlowLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowLogsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteFpgaImageRequest&, const Model::DeleteFpgaImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFpgaImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteInstanceEventWindowRequest&, const Model::DeleteInstanceEventWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceEventWindowResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteInternetGatewayRequest&, const Model::DeleteInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteIpamRequest&, const Model::DeleteIpamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpamResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteIpamPoolRequest&, const Model::DeleteIpamPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpamPoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteIpamScopeRequest&, const Model::DeleteIpamScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpamScopeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteKeyPairRequest&, const Model::DeleteKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyPairResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteLaunchTemplateRequest&, const Model::DeleteLaunchTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchTemplateResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteLaunchTemplateVersionsRequest&, const Model::DeleteLaunchTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteLocalGatewayRouteRequest&, const Model::DeleteLocalGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocalGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteLocalGatewayRouteTableRequest&, const Model::DeleteLocalGatewayRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocalGatewayRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest&, const Model::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteLocalGatewayRouteTableVpcAssociationRequest&, const Model::DeleteLocalGatewayRouteTableVpcAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocalGatewayRouteTableVpcAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteManagedPrefixListRequest&, const Model::DeleteManagedPrefixListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteManagedPrefixListResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNatGatewayRequest&, const Model::DeleteNatGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNatGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkAclRequest&, const Model::DeleteNetworkAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkAclResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkAclEntryRequest&, const Model::DeleteNetworkAclEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkAclEntryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInsightsAccessScopeRequest&, const Model::DeleteNetworkInsightsAccessScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInsightsAccessScopeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInsightsAccessScopeAnalysisRequest&, const Model::DeleteNetworkInsightsAccessScopeAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInsightsAccessScopeAnalysisResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInsightsAnalysisRequest&, const Model::DeleteNetworkInsightsAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInsightsAnalysisResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInsightsPathRequest&, const Model::DeleteNetworkInsightsPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInsightsPathResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInterfaceRequest&, const Model::DeleteNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteNetworkInterfacePermissionRequest&, const Model::DeleteNetworkInterfacePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkInterfacePermissionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeletePlacementGroupRequest&, const Model::DeletePlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlacementGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeletePublicIpv4PoolRequest&, const Model::DeletePublicIpv4PoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicIpv4PoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteQueuedReservedInstancesRequest&, const Model::DeleteQueuedReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueuedReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteRouteTableRequest&, const Model::DeleteRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSecurityGroupRequest&, const Model::DeleteSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSpotDatafeedSubscriptionRequest&, const Model::DeleteSpotDatafeedSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpotDatafeedSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSubnetRequest&, const Model::DeleteSubnetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteSubnetCidrReservationRequest&, const Model::DeleteSubnetCidrReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetCidrReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTrafficMirrorFilterRequest&, const Model::DeleteTrafficMirrorFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficMirrorFilterResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTrafficMirrorFilterRuleRequest&, const Model::DeleteTrafficMirrorFilterRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficMirrorFilterRuleResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTrafficMirrorSessionRequest&, const Model::DeleteTrafficMirrorSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficMirrorSessionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTrafficMirrorTargetRequest&, const Model::DeleteTrafficMirrorTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrafficMirrorTargetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayRequest&, const Model::DeleteTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayConnectRequest&, const Model::DeleteTransitGatewayConnectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayConnectResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayConnectPeerRequest&, const Model::DeleteTransitGatewayConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayConnectPeerResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayMulticastDomainRequest&, const Model::DeleteTransitGatewayMulticastDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayMulticastDomainResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayPeeringAttachmentRequest&, const Model::DeleteTransitGatewayPeeringAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayPeeringAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayPolicyTableRequest&, const Model::DeleteTransitGatewayPolicyTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayPolicyTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayPrefixListReferenceRequest&, const Model::DeleteTransitGatewayPrefixListReferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayPrefixListReferenceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayRouteRequest&, const Model::DeleteTransitGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayRouteTableRequest&, const Model::DeleteTransitGatewayRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayRouteTableAnnouncementRequest&, const Model::DeleteTransitGatewayRouteTableAnnouncementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayRouteTableAnnouncementResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteTransitGatewayVpcAttachmentRequest&, const Model::DeleteTransitGatewayVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTransitGatewayVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVerifiedAccessEndpointRequest&, const Model::DeleteVerifiedAccessEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVerifiedAccessEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVerifiedAccessGroupRequest&, const Model::DeleteVerifiedAccessGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVerifiedAccessGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVerifiedAccessInstanceRequest&, const Model::DeleteVerifiedAccessInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVerifiedAccessInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVerifiedAccessTrustProviderRequest&, const Model::DeleteVerifiedAccessTrustProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVerifiedAccessTrustProviderResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVolumeRequest&, const Model::DeleteVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcRequest&, const Model::DeleteVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcEndpointConnectionNotificationsRequest&, const Model::DeleteVpcEndpointConnectionNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointConnectionNotificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcEndpointServiceConfigurationsRequest&, const Model::DeleteVpcEndpointServiceConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointServiceConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcEndpointsRequest&, const Model::DeleteVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpcPeeringConnectionRequest&, const Model::DeleteVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpnConnectionRequest&, const Model::DeleteVpnConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpnConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpnConnectionRouteRequest&, const Model::DeleteVpnConnectionRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpnConnectionRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeleteVpnGatewayRequest&, const Model::DeleteVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeprovisionByoipCidrRequest&, const Model::DeprovisionByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprovisionByoipCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeprovisionIpamPoolCidrRequest&, const Model::DeprovisionIpamPoolCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprovisionIpamPoolCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeprovisionPublicIpv4PoolCidrRequest&, const Model::DeprovisionPublicIpv4PoolCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprovisionPublicIpv4PoolCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeregisterImageRequest&, const Model::DeregisterImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeregisterInstanceEventNotificationAttributesRequest&, const Model::DeregisterInstanceEventNotificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterInstanceEventNotificationAttributesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeregisterTransitGatewayMulticastGroupMembersRequest&, const Model::DeregisterTransitGatewayMulticastGroupMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTransitGatewayMulticastGroupMembersResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DeregisterTransitGatewayMulticastGroupSourcesRequest&, const Model::DeregisterTransitGatewayMulticastGroupSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTransitGatewayMulticastGroupSourcesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAddressTransfersRequest&, const Model::DescribeAddressTransfersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressTransfersResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAddressesRequest&, const Model::DescribeAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAddressesAttributeRequest&, const Model::DescribeAddressesAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddressesAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAggregateIdFormatRequest&, const Model::DescribeAggregateIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAggregateIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAvailabilityZonesRequest&, const Model::DescribeAvailabilityZonesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAvailabilityZonesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest&, const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAwsNetworkPerformanceMetricSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeBundleTasksRequest&, const Model::DescribeBundleTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBundleTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeByoipCidrsRequest&, const Model::DescribeByoipCidrsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeByoipCidrsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeCapacityReservationFleetsRequest&, const Model::DescribeCapacityReservationFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCapacityReservationFleetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeCapacityReservationsRequest&, const Model::DescribeCapacityReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCapacityReservationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeCarrierGatewaysRequest&, const Model::DescribeCarrierGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCarrierGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClassicLinkInstancesRequest&, const Model::DescribeClassicLinkInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClassicLinkInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClientVpnAuthorizationRulesRequest&, const Model::DescribeClientVpnAuthorizationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientVpnAuthorizationRulesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClientVpnConnectionsRequest&, const Model::DescribeClientVpnConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientVpnConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClientVpnEndpointsRequest&, const Model::DescribeClientVpnEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientVpnEndpointsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClientVpnRoutesRequest&, const Model::DescribeClientVpnRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientVpnRoutesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeClientVpnTargetNetworksRequest&, const Model::DescribeClientVpnTargetNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientVpnTargetNetworksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeCoipPoolsRequest&, const Model::DescribeCoipPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCoipPoolsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeConversionTasksRequest&, const Model::DescribeConversionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConversionTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeCustomerGatewaysRequest&, const Model::DescribeCustomerGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomerGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeDhcpOptionsRequest&, const Model::DescribeDhcpOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDhcpOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeEgressOnlyInternetGatewaysRequest&, const Model::DescribeEgressOnlyInternetGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEgressOnlyInternetGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeElasticGpusRequest&, const Model::DescribeElasticGpusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticGpusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeExportImageTasksRequest&, const Model::DescribeExportImageTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportImageTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFastLaunchImagesRequest&, const Model::DescribeFastLaunchImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFastLaunchImagesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFastSnapshotRestoresRequest&, const Model::DescribeFastSnapshotRestoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFastSnapshotRestoresResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFleetHistoryRequest&, const Model::DescribeFleetHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetHistoryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFleetInstancesRequest&, const Model::DescribeFleetInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFleetsRequest&, const Model::DescribeFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFlowLogsRequest&, const Model::DescribeFlowLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowLogsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFpgaImageAttributeRequest&, const Model::DescribeFpgaImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFpgaImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeFpgaImagesRequest&, const Model::DescribeFpgaImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFpgaImagesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeHostReservationOfferingsRequest&, const Model::DescribeHostReservationOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostReservationOfferingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeHostReservationsRequest&, const Model::DescribeHostReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostReservationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeHostsRequest&, const Model::DescribeHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIamInstanceProfileAssociationsRequest&, const Model::DescribeIamInstanceProfileAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIamInstanceProfileAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIdFormatRequest&, const Model::DescribeIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIdentityIdFormatRequest&, const Model::DescribeIdentityIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImageAttributeRequest&, const Model::DescribeImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImportImageTasksRequest&, const Model::DescribeImportImageTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportImageTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeImportSnapshotTasksRequest&, const Model::DescribeImportSnapshotTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportSnapshotTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceAttributeRequest&, const Model::DescribeInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceCreditSpecificationsRequest&, const Model::DescribeInstanceCreditSpecificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceCreditSpecificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceEventNotificationAttributesRequest&, const Model::DescribeInstanceEventNotificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceEventNotificationAttributesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceEventWindowsRequest&, const Model::DescribeInstanceEventWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceEventWindowsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceStatusRequest&, const Model::DescribeInstanceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceTypeOfferingsRequest&, const Model::DescribeInstanceTypeOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceTypeOfferingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstanceTypesRequest&, const Model::DescribeInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeInternetGatewaysRequest&, const Model::DescribeInternetGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInternetGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIpamPoolsRequest&, const Model::DescribeIpamPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpamPoolsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIpamScopesRequest&, const Model::DescribeIpamScopesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpamScopesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIpamsRequest&, const Model::DescribeIpamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpamsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeIpv6PoolsRequest&, const Model::DescribeIpv6PoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpv6PoolsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeKeyPairsRequest&, const Model::DescribeKeyPairsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeyPairsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLaunchTemplateVersionsRequest&, const Model::DescribeLaunchTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLaunchTemplatesRequest&, const Model::DescribeLaunchTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchTemplatesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest&, const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest&, const Model::DescribeLocalGatewayRouteTableVpcAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocalGatewayRouteTableVpcAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLocalGatewayRouteTablesRequest&, const Model::DescribeLocalGatewayRouteTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocalGatewayRouteTablesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest&, const Model::DescribeLocalGatewayVirtualInterfaceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocalGatewayVirtualInterfaceGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLocalGatewayVirtualInterfacesRequest&, const Model::DescribeLocalGatewayVirtualInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocalGatewayVirtualInterfacesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeLocalGatewaysRequest&, const Model::DescribeLocalGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocalGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeManagedPrefixListsRequest&, const Model::DescribeManagedPrefixListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeManagedPrefixListsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeMovingAddressesRequest&, const Model::DescribeMovingAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMovingAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNatGatewaysRequest&, const Model::DescribeNatGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNatGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkAclsRequest&, const Model::DescribeNetworkAclsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkAclsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest&, const Model::DescribeNetworkInsightsAccessScopeAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInsightsAccessScopeAnalysesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInsightsAccessScopesRequest&, const Model::DescribeNetworkInsightsAccessScopesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInsightsAccessScopesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInsightsAnalysesRequest&, const Model::DescribeNetworkInsightsAnalysesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInsightsAnalysesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInsightsPathsRequest&, const Model::DescribeNetworkInsightsPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInsightsPathsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInterfaceAttributeRequest&, const Model::DescribeNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInterfaceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInterfacePermissionsRequest&, const Model::DescribeNetworkInterfacePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInterfacePermissionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeNetworkInterfacesRequest&, const Model::DescribeNetworkInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkInterfacesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribePlacementGroupsRequest&, const Model::DescribePlacementGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlacementGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribePrefixListsRequest&, const Model::DescribePrefixListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePrefixListsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribePrincipalIdFormatRequest&, const Model::DescribePrincipalIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePrincipalIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribePublicIpv4PoolsRequest&, const Model::DescribePublicIpv4PoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePublicIpv4PoolsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeRegionsRequest&, const Model::DescribeRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReplaceRootVolumeTasksRequest&, const Model::DescribeReplaceRootVolumeTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplaceRootVolumeTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesRequest&, const Model::DescribeReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesListingsRequest&, const Model::DescribeReservedInstancesListingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesListingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesModificationsRequest&, const Model::DescribeReservedInstancesModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesModificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeReservedInstancesOfferingsRequest&, const Model::DescribeReservedInstancesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesOfferingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeRouteTablesRequest&, const Model::DescribeRouteTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouteTablesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeScheduledInstanceAvailabilityRequest&, const Model::DescribeScheduledInstanceAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledInstanceAvailabilityResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeScheduledInstancesRequest&, const Model::DescribeScheduledInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSecurityGroupReferencesRequest&, const Model::DescribeSecurityGroupReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityGroupReferencesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSecurityGroupRulesRequest&, const Model::DescribeSecurityGroupRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityGroupRulesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSecurityGroupsRequest&, const Model::DescribeSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSnapshotAttributeRequest&, const Model::DescribeSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSnapshotTierStatusRequest&, const Model::DescribeSnapshotTierStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotTierStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotDatafeedSubscriptionRequest&, const Model::DescribeSpotDatafeedSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotDatafeedSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotFleetInstancesRequest&, const Model::DescribeSpotFleetInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotFleetInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotFleetRequestHistoryRequest&, const Model::DescribeSpotFleetRequestHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotFleetRequestHistoryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotFleetRequestsRequest&, const Model::DescribeSpotFleetRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotFleetRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotInstanceRequestsRequest&, const Model::DescribeSpotInstanceRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotInstanceRequestsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSpotPriceHistoryRequest&, const Model::DescribeSpotPriceHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpotPriceHistoryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeStaleSecurityGroupsRequest&, const Model::DescribeStaleSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStaleSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeStoreImageTasksRequest&, const Model::DescribeStoreImageTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStoreImageTasksResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeSubnetsRequest&, const Model::DescribeSubnetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubnetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTrafficMirrorFiltersRequest&, const Model::DescribeTrafficMirrorFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrafficMirrorFiltersResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTrafficMirrorSessionsRequest&, const Model::DescribeTrafficMirrorSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrafficMirrorSessionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTrafficMirrorTargetsRequest&, const Model::DescribeTrafficMirrorTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrafficMirrorTargetsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayAttachmentsRequest&, const Model::DescribeTransitGatewayAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayAttachmentsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayConnectPeersRequest&, const Model::DescribeTransitGatewayConnectPeersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayConnectPeersResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayConnectsRequest&, const Model::DescribeTransitGatewayConnectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayConnectsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayMulticastDomainsRequest&, const Model::DescribeTransitGatewayMulticastDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayMulticastDomainsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayPeeringAttachmentsRequest&, const Model::DescribeTransitGatewayPeeringAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayPeeringAttachmentsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayPolicyTablesRequest&, const Model::DescribeTransitGatewayPolicyTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayPolicyTablesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest&, const Model::DescribeTransitGatewayRouteTableAnnouncementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayRouteTableAnnouncementsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayRouteTablesRequest&, const Model::DescribeTransitGatewayRouteTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayRouteTablesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewayVpcAttachmentsRequest&, const Model::DescribeTransitGatewayVpcAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewayVpcAttachmentsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTransitGatewaysRequest&, const Model::DescribeTransitGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransitGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeTrunkInterfaceAssociationsRequest&, const Model::DescribeTrunkInterfaceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrunkInterfaceAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVerifiedAccessEndpointsRequest&, const Model::DescribeVerifiedAccessEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVerifiedAccessEndpointsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVerifiedAccessGroupsRequest&, const Model::DescribeVerifiedAccessGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVerifiedAccessGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest&, const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVerifiedAccessInstanceLoggingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVerifiedAccessInstancesRequest&, const Model::DescribeVerifiedAccessInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVerifiedAccessInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVerifiedAccessTrustProvidersRequest&, const Model::DescribeVerifiedAccessTrustProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVerifiedAccessTrustProvidersResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumeAttributeRequest&, const Model::DescribeVolumeAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumeAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumeStatusRequest&, const Model::DescribeVolumeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumeStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumesRequest&, const Model::DescribeVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVolumesModificationsRequest&, const Model::DescribeVolumesModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesModificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcAttributeRequest&, const Model::DescribeVpcAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcClassicLinkRequest&, const Model::DescribeVpcClassicLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcClassicLinkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcClassicLinkDnsSupportRequest&, const Model::DescribeVpcClassicLinkDnsSupportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcClassicLinkDnsSupportResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointConnectionNotificationsRequest&, const Model::DescribeVpcEndpointConnectionNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointConnectionNotificationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointConnectionsRequest&, const Model::DescribeVpcEndpointConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointServiceConfigurationsRequest&, const Model::DescribeVpcEndpointServiceConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointServiceConfigurationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointServicePermissionsRequest&, const Model::DescribeVpcEndpointServicePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointServicePermissionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointServicesRequest&, const Model::DescribeVpcEndpointServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointServicesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcEndpointsRequest&, const Model::DescribeVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcPeeringConnectionsRequest&, const Model::DescribeVpcPeeringConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcPeeringConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpcsRequest&, const Model::DescribeVpcsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpnConnectionsRequest&, const Model::DescribeVpnConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpnConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DescribeVpnGatewaysRequest&, const Model::DescribeVpnGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpnGatewaysResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachClassicLinkVpcRequest&, const Model::DetachClassicLinkVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachClassicLinkVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachInternetGatewayRequest&, const Model::DetachInternetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInternetGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachNetworkInterfaceRequest&, const Model::DetachNetworkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachNetworkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachVerifiedAccessTrustProviderRequest&, const Model::DetachVerifiedAccessTrustProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachVerifiedAccessTrustProviderResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachVolumeRequest&, const Model::DetachVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DetachVpnGatewayRequest&, const Model::DetachVpnGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachVpnGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableAddressTransferRequest&, const Model::DisableAddressTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAddressTransferResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableAwsNetworkPerformanceMetricSubscriptionRequest&, const Model::DisableAwsNetworkPerformanceMetricSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAwsNetworkPerformanceMetricSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableEbsEncryptionByDefaultRequest&, const Model::DisableEbsEncryptionByDefaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableEbsEncryptionByDefaultResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableFastLaunchRequest&, const Model::DisableFastLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableFastLaunchResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableFastSnapshotRestoresRequest&, const Model::DisableFastSnapshotRestoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableFastSnapshotRestoresResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableImageDeprecationRequest&, const Model::DisableImageDeprecationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableImageDeprecationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableIpamOrganizationAdminAccountRequest&, const Model::DisableIpamOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableIpamOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableSerialConsoleAccessRequest&, const Model::DisableSerialConsoleAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSerialConsoleAccessResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableTransitGatewayRouteTablePropagationRequest&, const Model::DisableTransitGatewayRouteTablePropagationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableTransitGatewayRouteTablePropagationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableVgwRoutePropagationRequest&, const Model::DisableVgwRoutePropagationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableVgwRoutePropagationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableVpcClassicLinkRequest&, const Model::DisableVpcClassicLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableVpcClassicLinkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisableVpcClassicLinkDnsSupportRequest&, const Model::DisableVpcClassicLinkDnsSupportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableVpcClassicLinkDnsSupportResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateAddressRequest&, const Model::DisassociateAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateClientVpnTargetNetworkRequest&, const Model::DisassociateClientVpnTargetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateClientVpnTargetNetworkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateEnclaveCertificateIamRoleRequest&, const Model::DisassociateEnclaveCertificateIamRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateEnclaveCertificateIamRoleResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateIamInstanceProfileRequest&, const Model::DisassociateIamInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIamInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateInstanceEventWindowRequest&, const Model::DisassociateInstanceEventWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateInstanceEventWindowResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateRouteTableRequest&, const Model::DisassociateRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateSubnetCidrBlockRequest&, const Model::DisassociateSubnetCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSubnetCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateTransitGatewayMulticastDomainRequest&, const Model::DisassociateTransitGatewayMulticastDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTransitGatewayMulticastDomainResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateTransitGatewayPolicyTableRequest&, const Model::DisassociateTransitGatewayPolicyTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTransitGatewayPolicyTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateTransitGatewayRouteTableRequest&, const Model::DisassociateTransitGatewayRouteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTransitGatewayRouteTableResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateTrunkInterfaceRequest&, const Model::DisassociateTrunkInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrunkInterfaceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::DisassociateVpcCidrBlockRequest&, const Model::DisassociateVpcCidrBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateVpcCidrBlockResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableAddressTransferRequest&, const Model::EnableAddressTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAddressTransferResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableAwsNetworkPerformanceMetricSubscriptionRequest&, const Model::EnableAwsNetworkPerformanceMetricSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAwsNetworkPerformanceMetricSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableEbsEncryptionByDefaultRequest&, const Model::EnableEbsEncryptionByDefaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableEbsEncryptionByDefaultResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableFastLaunchRequest&, const Model::EnableFastLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableFastLaunchResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableFastSnapshotRestoresRequest&, const Model::EnableFastSnapshotRestoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableFastSnapshotRestoresResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableImageDeprecationRequest&, const Model::EnableImageDeprecationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableImageDeprecationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableIpamOrganizationAdminAccountRequest&, const Model::EnableIpamOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableIpamOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableReachabilityAnalyzerOrganizationSharingRequest&, const Model::EnableReachabilityAnalyzerOrganizationSharingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableReachabilityAnalyzerOrganizationSharingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableSerialConsoleAccessRequest&, const Model::EnableSerialConsoleAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSerialConsoleAccessResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableTransitGatewayRouteTablePropagationRequest&, const Model::EnableTransitGatewayRouteTablePropagationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableTransitGatewayRouteTablePropagationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVgwRoutePropagationRequest&, const Model::EnableVgwRoutePropagationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVgwRoutePropagationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVolumeIORequest&, const Model::EnableVolumeIOOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVolumeIOResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVpcClassicLinkRequest&, const Model::EnableVpcClassicLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVpcClassicLinkResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::EnableVpcClassicLinkDnsSupportRequest&, const Model::EnableVpcClassicLinkDnsSupportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableVpcClassicLinkDnsSupportResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ExportClientVpnClientCertificateRevocationListRequest&, const Model::ExportClientVpnClientCertificateRevocationListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportClientVpnClientCertificateRevocationListResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ExportClientVpnClientConfigurationRequest&, const Model::ExportClientVpnClientConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportClientVpnClientConfigurationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ExportImageRequest&, const Model::ExportImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ExportTransitGatewayRoutesRequest&, const Model::ExportTransitGatewayRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportTransitGatewayRoutesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetAssociatedEnclaveCertificateIamRolesRequest&, const Model::GetAssociatedEnclaveCertificateIamRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssociatedEnclaveCertificateIamRolesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetAssociatedIpv6PoolCidrsRequest&, const Model::GetAssociatedIpv6PoolCidrsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssociatedIpv6PoolCidrsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetAwsNetworkPerformanceDataRequest&, const Model::GetAwsNetworkPerformanceDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAwsNetworkPerformanceDataResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetCapacityReservationUsageRequest&, const Model::GetCapacityReservationUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCapacityReservationUsageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetCoipPoolUsageRequest&, const Model::GetCoipPoolUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoipPoolUsageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetConsoleOutputRequest&, const Model::GetConsoleOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConsoleOutputResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetConsoleScreenshotRequest&, const Model::GetConsoleScreenshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConsoleScreenshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetDefaultCreditSpecificationRequest&, const Model::GetDefaultCreditSpecificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultCreditSpecificationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetEbsDefaultKmsKeyIdRequest&, const Model::GetEbsDefaultKmsKeyIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEbsDefaultKmsKeyIdResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetEbsEncryptionByDefaultRequest&, const Model::GetEbsEncryptionByDefaultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEbsEncryptionByDefaultResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetFlowLogsIntegrationTemplateRequest&, const Model::GetFlowLogsIntegrationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowLogsIntegrationTemplateResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetGroupsForCapacityReservationRequest&, const Model::GetGroupsForCapacityReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupsForCapacityReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetHostReservationPurchasePreviewRequest&, const Model::GetHostReservationPurchasePreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostReservationPurchasePreviewResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetInstanceTypesFromInstanceRequirementsRequest&, const Model::GetInstanceTypesFromInstanceRequirementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceTypesFromInstanceRequirementsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetInstanceUefiDataRequest&, const Model::GetInstanceUefiDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceUefiDataResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetIpamAddressHistoryRequest&, const Model::GetIpamAddressHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIpamAddressHistoryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetIpamPoolAllocationsRequest&, const Model::GetIpamPoolAllocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIpamPoolAllocationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetIpamPoolCidrsRequest&, const Model::GetIpamPoolCidrsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIpamPoolCidrsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetIpamResourceCidrsRequest&, const Model::GetIpamResourceCidrsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIpamResourceCidrsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetLaunchTemplateDataRequest&, const Model::GetLaunchTemplateDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchTemplateDataResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetManagedPrefixListAssociationsRequest&, const Model::GetManagedPrefixListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedPrefixListAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetManagedPrefixListEntriesRequest&, const Model::GetManagedPrefixListEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedPrefixListEntriesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest&, const Model::GetNetworkInsightsAccessScopeAnalysisFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkInsightsAccessScopeAnalysisFindingsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetNetworkInsightsAccessScopeContentRequest&, const Model::GetNetworkInsightsAccessScopeContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkInsightsAccessScopeContentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetPasswordDataRequest&, const Model::GetPasswordDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPasswordDataResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetReservedInstancesExchangeQuoteRequest&, const Model::GetReservedInstancesExchangeQuoteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReservedInstancesExchangeQuoteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetSerialConsoleAccessStatusRequest&, const Model::GetSerialConsoleAccessStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSerialConsoleAccessStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetSpotPlacementScoresRequest&, const Model::GetSpotPlacementScoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpotPlacementScoresResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetSubnetCidrReservationsRequest&, const Model::GetSubnetCidrReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubnetCidrReservationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayAttachmentPropagationsRequest&, const Model::GetTransitGatewayAttachmentPropagationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayAttachmentPropagationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayMulticastDomainAssociationsRequest&, const Model::GetTransitGatewayMulticastDomainAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayMulticastDomainAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayPolicyTableAssociationsRequest&, const Model::GetTransitGatewayPolicyTableAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayPolicyTableAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayPolicyTableEntriesRequest&, const Model::GetTransitGatewayPolicyTableEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayPolicyTableEntriesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayPrefixListReferencesRequest&, const Model::GetTransitGatewayPrefixListReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayPrefixListReferencesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayRouteTableAssociationsRequest&, const Model::GetTransitGatewayRouteTableAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayRouteTableAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetTransitGatewayRouteTablePropagationsRequest&, const Model::GetTransitGatewayRouteTablePropagationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayRouteTablePropagationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetVerifiedAccessEndpointPolicyRequest&, const Model::GetVerifiedAccessEndpointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVerifiedAccessEndpointPolicyResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetVerifiedAccessGroupPolicyRequest&, const Model::GetVerifiedAccessGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVerifiedAccessGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetVpnConnectionDeviceSampleConfigurationRequest&, const Model::GetVpnConnectionDeviceSampleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpnConnectionDeviceSampleConfigurationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::GetVpnConnectionDeviceTypesRequest&, const Model::GetVpnConnectionDeviceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpnConnectionDeviceTypesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportClientVpnClientCertificateRevocationListRequest&, const Model::ImportClientVpnClientCertificateRevocationListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportClientVpnClientCertificateRevocationListResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportImageRequest&, const Model::ImportImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportInstanceRequest&, const Model::ImportInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportKeyPairRequest&, const Model::ImportKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportKeyPairResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportSnapshotRequest&, const Model::ImportSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportSnapshotResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ImportVolumeRequest&, const Model::ImportVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ListImagesInRecycleBinRequest&, const Model::ListImagesInRecycleBinOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesInRecycleBinResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ListSnapshotsInRecycleBinRequest&, const Model::ListSnapshotsInRecycleBinOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSnapshotsInRecycleBinResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyAddressAttributeRequest&, const Model::ModifyAddressAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAddressAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyAvailabilityZoneGroupRequest&, const Model::ModifyAvailabilityZoneGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAvailabilityZoneGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyCapacityReservationRequest&, const Model::ModifyCapacityReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCapacityReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyCapacityReservationFleetRequest&, const Model::ModifyCapacityReservationFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyCapacityReservationFleetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyClientVpnEndpointRequest&, const Model::ModifyClientVpnEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClientVpnEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyDefaultCreditSpecificationRequest&, const Model::ModifyDefaultCreditSpecificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDefaultCreditSpecificationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyEbsDefaultKmsKeyIdRequest&, const Model::ModifyEbsDefaultKmsKeyIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEbsDefaultKmsKeyIdResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyFleetRequest&, const Model::ModifyFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyFleetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyFpgaImageAttributeRequest&, const Model::ModifyFpgaImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyFpgaImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyHostsRequest&, const Model::ModifyHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIdFormatRequest&, const Model::ModifyIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIdentityIdFormatRequest&, const Model::ModifyIdentityIdFormatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIdentityIdFormatResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyImageAttributeRequest&, const Model::ModifyImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceAttributeRequest&, const Model::ModifyInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceCapacityReservationAttributesRequest&, const Model::ModifyInstanceCapacityReservationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceCapacityReservationAttributesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceCreditSpecificationRequest&, const Model::ModifyInstanceCreditSpecificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceCreditSpecificationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceEventStartTimeRequest&, const Model::ModifyInstanceEventStartTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceEventStartTimeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceEventWindowRequest&, const Model::ModifyInstanceEventWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceEventWindowResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceMaintenanceOptionsRequest&, const Model::ModifyInstanceMaintenanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceMaintenanceOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstanceMetadataOptionsRequest&, const Model::ModifyInstanceMetadataOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceMetadataOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyInstancePlacementRequest&, const Model::ModifyInstancePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstancePlacementResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIpamRequest&, const Model::ModifyIpamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIpamResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIpamPoolRequest&, const Model::ModifyIpamPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIpamPoolResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIpamResourceCidrRequest&, const Model::ModifyIpamResourceCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIpamResourceCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyIpamScopeRequest&, const Model::ModifyIpamScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIpamScopeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyLaunchTemplateRequest&, const Model::ModifyLaunchTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyLaunchTemplateResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyLocalGatewayRouteRequest&, const Model::ModifyLocalGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyLocalGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyManagedPrefixListRequest&, const Model::ModifyManagedPrefixListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyManagedPrefixListResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyNetworkInterfaceAttributeRequest&, const Model::ModifyNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyNetworkInterfaceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyPrivateDnsNameOptionsRequest&, const Model::ModifyPrivateDnsNameOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyPrivateDnsNameOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyReservedInstancesRequest&, const Model::ModifyReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySecurityGroupRulesRequest&, const Model::ModifySecurityGroupRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySecurityGroupRulesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySnapshotAttributeRequest&, const Model::ModifySnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySnapshotTierRequest&, const Model::ModifySnapshotTierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySnapshotTierResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySpotFleetRequestRequest&, const Model::ModifySpotFleetRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySpotFleetRequestResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifySubnetAttributeRequest&, const Model::ModifySubnetAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySubnetAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyTrafficMirrorFilterNetworkServicesRequest&, const Model::ModifyTrafficMirrorFilterNetworkServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTrafficMirrorFilterNetworkServicesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyTrafficMirrorFilterRuleRequest&, const Model::ModifyTrafficMirrorFilterRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTrafficMirrorFilterRuleResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyTrafficMirrorSessionRequest&, const Model::ModifyTrafficMirrorSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTrafficMirrorSessionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyTransitGatewayRequest&, const Model::ModifyTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyTransitGatewayPrefixListReferenceRequest&, const Model::ModifyTransitGatewayPrefixListReferenceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTransitGatewayPrefixListReferenceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyTransitGatewayVpcAttachmentRequest&, const Model::ModifyTransitGatewayVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyTransitGatewayVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessEndpointRequest&, const Model::ModifyVerifiedAccessEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessEndpointPolicyRequest&, const Model::ModifyVerifiedAccessEndpointPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessEndpointPolicyResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessGroupRequest&, const Model::ModifyVerifiedAccessGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessGroupResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessGroupPolicyRequest&, const Model::ModifyVerifiedAccessGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessInstanceRequest&, const Model::ModifyVerifiedAccessInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessInstanceResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessInstanceLoggingConfigurationRequest&, const Model::ModifyVerifiedAccessInstanceLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessInstanceLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVerifiedAccessTrustProviderRequest&, const Model::ModifyVerifiedAccessTrustProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVerifiedAccessTrustProviderResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVolumeRequest&, const Model::ModifyVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVolumeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVolumeAttributeRequest&, const Model::ModifyVolumeAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVolumeAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcAttributeRequest&, const Model::ModifyVpcAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcEndpointRequest&, const Model::ModifyVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcEndpointConnectionNotificationRequest&, const Model::ModifyVpcEndpointConnectionNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcEndpointConnectionNotificationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcEndpointServiceConfigurationRequest&, const Model::ModifyVpcEndpointServiceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcEndpointServiceConfigurationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcEndpointServicePayerResponsibilityRequest&, const Model::ModifyVpcEndpointServicePayerResponsibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcEndpointServicePayerResponsibilityResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcEndpointServicePermissionsRequest&, const Model::ModifyVpcEndpointServicePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcEndpointServicePermissionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcPeeringConnectionOptionsRequest&, const Model::ModifyVpcPeeringConnectionOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcPeeringConnectionOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpcTenancyRequest&, const Model::ModifyVpcTenancyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpcTenancyResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpnConnectionRequest&, const Model::ModifyVpnConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpnConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpnConnectionOptionsRequest&, const Model::ModifyVpnConnectionOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpnConnectionOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpnTunnelCertificateRequest&, const Model::ModifyVpnTunnelCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpnTunnelCertificateResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ModifyVpnTunnelOptionsRequest&, const Model::ModifyVpnTunnelOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyVpnTunnelOptionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::MonitorInstancesRequest&, const Model::MonitorInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MonitorInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::MoveAddressToVpcRequest&, const Model::MoveAddressToVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MoveAddressToVpcResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::MoveByoipCidrToIpamRequest&, const Model::MoveByoipCidrToIpamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MoveByoipCidrToIpamResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ProvisionByoipCidrRequest&, const Model::ProvisionByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionByoipCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ProvisionIpamPoolCidrRequest&, const Model::ProvisionIpamPoolCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionIpamPoolCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ProvisionPublicIpv4PoolCidrRequest&, const Model::ProvisionPublicIpv4PoolCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionPublicIpv4PoolCidrResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::PurchaseHostReservationRequest&, const Model::PurchaseHostReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseHostReservationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::PurchaseReservedInstancesOfferingRequest&, const Model::PurchaseReservedInstancesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedInstancesOfferingResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::PurchaseScheduledInstancesRequest&, const Model::PurchaseScheduledInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseScheduledInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RebootInstancesRequest&, const Model::RebootInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RegisterImageRequest&, const Model::RegisterImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterImageResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RegisterInstanceEventNotificationAttributesRequest&, const Model::RegisterInstanceEventNotificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterInstanceEventNotificationAttributesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RegisterTransitGatewayMulticastGroupMembersRequest&, const Model::RegisterTransitGatewayMulticastGroupMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTransitGatewayMulticastGroupMembersResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RegisterTransitGatewayMulticastGroupSourcesRequest&, const Model::RegisterTransitGatewayMulticastGroupSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTransitGatewayMulticastGroupSourcesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RejectTransitGatewayMulticastDomainAssociationsRequest&, const Model::RejectTransitGatewayMulticastDomainAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectTransitGatewayMulticastDomainAssociationsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RejectTransitGatewayPeeringAttachmentRequest&, const Model::RejectTransitGatewayPeeringAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectTransitGatewayPeeringAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RejectTransitGatewayVpcAttachmentRequest&, const Model::RejectTransitGatewayVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectTransitGatewayVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RejectVpcEndpointConnectionsRequest&, const Model::RejectVpcEndpointConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectVpcEndpointConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RejectVpcPeeringConnectionRequest&, const Model::RejectVpcPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectVpcPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReleaseAddressRequest&, const Model::ReleaseAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseAddressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReleaseHostsRequest&, const Model::ReleaseHostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseHostsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReleaseIpamPoolAllocationRequest&, const Model::ReleaseIpamPoolAllocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseIpamPoolAllocationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceIamInstanceProfileAssociationRequest&, const Model::ReplaceIamInstanceProfileAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceIamInstanceProfileAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceNetworkAclAssociationRequest&, const Model::ReplaceNetworkAclAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceNetworkAclAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceNetworkAclEntryRequest&, const Model::ReplaceNetworkAclEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceNetworkAclEntryResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceRouteRequest&, const Model::ReplaceRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceRouteTableAssociationRequest&, const Model::ReplaceRouteTableAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceRouteTableAssociationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReplaceTransitGatewayRouteRequest&, const Model::ReplaceTransitGatewayRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplaceTransitGatewayRouteResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ReportInstanceStatusRequest&, const Model::ReportInstanceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReportInstanceStatusResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RequestSpotFleetRequest&, const Model::RequestSpotFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestSpotFleetResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RequestSpotInstancesRequest&, const Model::RequestSpotInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestSpotInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetAddressAttributeRequest&, const Model::ResetAddressAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetAddressAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetEbsDefaultKmsKeyIdRequest&, const Model::ResetEbsDefaultKmsKeyIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetEbsDefaultKmsKeyIdResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetFpgaImageAttributeRequest&, const Model::ResetFpgaImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetFpgaImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetImageAttributeRequest&, const Model::ResetImageAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetImageAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetInstanceAttributeRequest&, const Model::ResetInstanceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetInstanceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetNetworkInterfaceAttributeRequest&, const Model::ResetNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetNetworkInterfaceAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::ResetSnapshotAttributeRequest&, const Model::ResetSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RestoreAddressToClassicRequest&, const Model::RestoreAddressToClassicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreAddressToClassicResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RestoreImageFromRecycleBinRequest&, const Model::RestoreImageFromRecycleBinOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreImageFromRecycleBinResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RestoreManagedPrefixListVersionRequest&, const Model::RestoreManagedPrefixListVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreManagedPrefixListVersionResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RestoreSnapshotFromRecycleBinRequest&, const Model::RestoreSnapshotFromRecycleBinOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreSnapshotFromRecycleBinResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RestoreSnapshotTierRequest&, const Model::RestoreSnapshotTierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreSnapshotTierResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RevokeClientVpnIngressRequest&, const Model::RevokeClientVpnIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeClientVpnIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RevokeSecurityGroupEgressRequest&, const Model::RevokeSecurityGroupEgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSecurityGroupEgressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RevokeSecurityGroupIngressRequest&, const Model::RevokeSecurityGroupIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeSecurityGroupIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RunInstancesRequest&, const Model::RunInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::RunScheduledInstancesRequest&, const Model::RunScheduledInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunScheduledInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::SearchLocalGatewayRoutesRequest&, const Model::SearchLocalGatewayRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchLocalGatewayRoutesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::SearchTransitGatewayMulticastGroupsRequest&, const Model::SearchTransitGatewayMulticastGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTransitGatewayMulticastGroupsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::SearchTransitGatewayRoutesRequest&, const Model::SearchTransitGatewayRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTransitGatewayRoutesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::SendDiagnosticInterruptRequest&, const Model::SendDiagnosticInterruptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendDiagnosticInterruptResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StartInstancesRequest&, const Model::StartInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StartNetworkInsightsAccessScopeAnalysisRequest&, const Model::StartNetworkInsightsAccessScopeAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNetworkInsightsAccessScopeAnalysisResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StartNetworkInsightsAnalysisRequest&, const Model::StartNetworkInsightsAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNetworkInsightsAnalysisResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StartVpcEndpointServicePrivateDnsVerificationRequest&, const Model::StartVpcEndpointServicePrivateDnsVerificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartVpcEndpointServicePrivateDnsVerificationResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::StopInstancesRequest&, const Model::StopInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::TerminateClientVpnConnectionsRequest&, const Model::TerminateClientVpnConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateClientVpnConnectionsResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::TerminateInstancesRequest&, const Model::TerminateInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UnassignIpv6AddressesRequest&, const Model::UnassignIpv6AddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignIpv6AddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UnassignPrivateIpAddressesRequest&, const Model::UnassignPrivateIpAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignPrivateIpAddressesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UnmonitorInstancesRequest&, const Model::UnmonitorInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnmonitorInstancesResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UpdateSecurityGroupRuleDescriptionsEgressRequest&, const Model::UpdateSecurityGroupRuleDescriptionsEgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityGroupRuleDescriptionsEgressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::UpdateSecurityGroupRuleDescriptionsIngressRequest&, const Model::UpdateSecurityGroupRuleDescriptionsIngressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityGroupRuleDescriptionsIngressResponseReceivedHandler;
    typedef std::function<void(const EC2Client*, const Model::WithdrawByoipCidrRequest&, const Model::WithdrawByoipCidrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > WithdrawByoipCidrResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EC2
} // namespace Aws
