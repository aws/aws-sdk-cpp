/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/model/DescribeAddressTransfersPaginationTraits.h>
#include <aws/ec2/model/DescribeAddressesAttributePaginationTraits.h>
#include <aws/ec2/model/DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits.h>
#include <aws/ec2/model/DescribeByoipCidrsPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityBlockExtensionHistoryPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityBlockExtensionOfferingsPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityBlockOfferingsPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityBlockStatusPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityBlocksPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityManagerDataExportsPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityReservationBillingRequestsPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityReservationFleetsPaginationTraits.h>
#include <aws/ec2/model/DescribeCapacityReservationsPaginationTraits.h>
#include <aws/ec2/model/DescribeCarrierGatewaysPaginationTraits.h>
#include <aws/ec2/model/DescribeClassicLinkInstancesPaginationTraits.h>
#include <aws/ec2/model/DescribeClientVpnAuthorizationRulesPaginationTraits.h>
#include <aws/ec2/model/DescribeClientVpnConnectionsPaginationTraits.h>
#include <aws/ec2/model/DescribeClientVpnEndpointsPaginationTraits.h>
#include <aws/ec2/model/DescribeClientVpnRoutesPaginationTraits.h>
#include <aws/ec2/model/DescribeClientVpnTargetNetworksPaginationTraits.h>
#include <aws/ec2/model/DescribeCoipPoolsPaginationTraits.h>
#include <aws/ec2/model/DescribeDhcpOptionsPaginationTraits.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysPaginationTraits.h>
#include <aws/ec2/model/DescribeExportImageTasksPaginationTraits.h>
#include <aws/ec2/model/DescribeFastLaunchImagesPaginationTraits.h>
#include <aws/ec2/model/DescribeFastSnapshotRestoresPaginationTraits.h>
#include <aws/ec2/model/DescribeFleetsPaginationTraits.h>
#include <aws/ec2/model/DescribeFlowLogsPaginationTraits.h>
#include <aws/ec2/model/DescribeFpgaImagesPaginationTraits.h>
#include <aws/ec2/model/DescribeHostReservationOfferingsPaginationTraits.h>
#include <aws/ec2/model/DescribeHostReservationsPaginationTraits.h>
#include <aws/ec2/model/DescribeHostsPaginationTraits.h>
#include <aws/ec2/model/DescribeIamInstanceProfileAssociationsPaginationTraits.h>
#include <aws/ec2/model/DescribeImageReferencesPaginationTraits.h>
#include <aws/ec2/model/DescribeImageUsageReportEntriesPaginationTraits.h>
#include <aws/ec2/model/DescribeImageUsageReportsPaginationTraits.h>
#include <aws/ec2/model/DescribeImagesPaginationTraits.h>
#include <aws/ec2/model/DescribeImportImageTasksPaginationTraits.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceConnectEndpointsPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceCreditSpecificationsPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceEventWindowsPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceImageMetadataPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceStatusPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceTopologyPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceTypeOfferingsPaginationTraits.h>
#include <aws/ec2/model/DescribeInstanceTypesPaginationTraits.h>
#include <aws/ec2/model/DescribeInstancesPaginationTraits.h>
#include <aws/ec2/model/DescribeInternetGatewaysPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamPoolsPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamPrefixListResolverTargetsPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamPrefixListResolversPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamResourceDiscoveriesPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamResourceDiscoveryAssociationsPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamScopesPaginationTraits.h>
#include <aws/ec2/model/DescribeIpamsPaginationTraits.h>
#include <aws/ec2/model/DescribeIpv6PoolsPaginationTraits.h>
#include <aws/ec2/model/DescribeLaunchTemplateVersionsPaginationTraits.h>
#include <aws/ec2/model/DescribeLaunchTemplatesPaginationTraits.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits.h>
#include <aws/ec2/model/DescribeLocalGatewayRouteTablesPaginationTraits.h>
#include <aws/ec2/model/DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits.h>
#include <aws/ec2/model/DescribeLocalGatewayVirtualInterfacesPaginationTraits.h>
#include <aws/ec2/model/DescribeLocalGatewaysPaginationTraits.h>
#include <aws/ec2/model/DescribeMacHostsPaginationTraits.h>
#include <aws/ec2/model/DescribeMacModificationTasksPaginationTraits.h>
#include <aws/ec2/model/DescribeManagedPrefixListsPaginationTraits.h>
#include <aws/ec2/model/DescribeMovingAddressesPaginationTraits.h>
#include <aws/ec2/model/DescribeNatGatewaysPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkAclsPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkInsightsAccessScopesPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkInsightsAnalysesPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkInsightsPathsPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkInterfacePermissionsPaginationTraits.h>
#include <aws/ec2/model/DescribeNetworkInterfacesPaginationTraits.h>
#include <aws/ec2/model/DescribePrefixListsPaginationTraits.h>
#include <aws/ec2/model/DescribePrincipalIdFormatPaginationTraits.h>
#include <aws/ec2/model/DescribePublicIpv4PoolsPaginationTraits.h>
#include <aws/ec2/model/DescribeReplaceRootVolumeTasksPaginationTraits.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsPaginationTraits.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsPaginationTraits.h>
#include <aws/ec2/model/DescribeRouteServerEndpointsPaginationTraits.h>
#include <aws/ec2/model/DescribeRouteServerPeersPaginationTraits.h>
#include <aws/ec2/model/DescribeRouteServersPaginationTraits.h>
#include <aws/ec2/model/DescribeRouteTablesPaginationTraits.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityPaginationTraits.h>
#include <aws/ec2/model/DescribeScheduledInstancesPaginationTraits.h>
#include <aws/ec2/model/DescribeSecondaryInterfacesPaginationTraits.h>
#include <aws/ec2/model/DescribeSecondaryNetworksPaginationTraits.h>
#include <aws/ec2/model/DescribeSecondarySubnetsPaginationTraits.h>
#include <aws/ec2/model/DescribeSecurityGroupRulesPaginationTraits.h>
#include <aws/ec2/model/DescribeSecurityGroupVpcAssociationsPaginationTraits.h>
#include <aws/ec2/model/DescribeSecurityGroupsPaginationTraits.h>
#include <aws/ec2/model/DescribeSnapshotTierStatusPaginationTraits.h>
#include <aws/ec2/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsPaginationTraits.h>
#include <aws/ec2/model/DescribeSpotInstanceRequestsPaginationTraits.h>
#include <aws/ec2/model/DescribeSpotPriceHistoryPaginationTraits.h>
#include <aws/ec2/model/DescribeStaleSecurityGroupsPaginationTraits.h>
#include <aws/ec2/model/DescribeStoreImageTasksPaginationTraits.h>
#include <aws/ec2/model/DescribeSubnetsPaginationTraits.h>
#include <aws/ec2/model/DescribeTagsPaginationTraits.h>
#include <aws/ec2/model/DescribeTrafficMirrorFiltersPaginationTraits.h>
#include <aws/ec2/model/DescribeTrafficMirrorSessionsPaginationTraits.h>
#include <aws/ec2/model/DescribeTrafficMirrorTargetsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayAttachmentsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectPeersPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayConnectsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayMulticastDomainsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayPeeringAttachmentsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayPolicyTablesPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayRouteTablesPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewayVpcAttachmentsPaginationTraits.h>
#include <aws/ec2/model/DescribeTransitGatewaysPaginationTraits.h>
#include <aws/ec2/model/DescribeTrunkInterfaceAssociationsPaginationTraits.h>
#include <aws/ec2/model/DescribeVerifiedAccessEndpointsPaginationTraits.h>
#include <aws/ec2/model/DescribeVerifiedAccessGroupsPaginationTraits.h>
#include <aws/ec2/model/DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits.h>
#include <aws/ec2/model/DescribeVerifiedAccessInstancesPaginationTraits.h>
#include <aws/ec2/model/DescribeVerifiedAccessTrustProvidersPaginationTraits.h>
#include <aws/ec2/model/DescribeVolumeStatusPaginationTraits.h>
#include <aws/ec2/model/DescribeVolumesModificationsPaginationTraits.h>
#include <aws/ec2/model/DescribeVolumesPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcClassicLinkDnsSupportPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionNotificationsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcEndpointConnectionsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcEndpointServiceConfigurationsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcEndpointServicePermissionsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcEndpointsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcPeeringConnectionsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpcsPaginationTraits.h>
#include <aws/ec2/model/DescribeVpnConcentratorsPaginationTraits.h>
#include <aws/ec2/model/GetAssociatedIpv6PoolCidrsPaginationTraits.h>
#include <aws/ec2/model/GetAwsNetworkPerformanceDataPaginationTraits.h>
#include <aws/ec2/model/GetCapacityManagerMetricDataPaginationTraits.h>
#include <aws/ec2/model/GetCapacityManagerMetricDimensionsPaginationTraits.h>
#include <aws/ec2/model/GetGroupsForCapacityReservationPaginationTraits.h>
#include <aws/ec2/model/GetInstanceTypesFromInstanceRequirementsPaginationTraits.h>
#include <aws/ec2/model/GetIpamAddressHistoryPaginationTraits.h>
#include <aws/ec2/model/GetIpamDiscoveredAccountsPaginationTraits.h>
#include <aws/ec2/model/GetIpamDiscoveredResourceCidrsPaginationTraits.h>
#include <aws/ec2/model/GetIpamPoolAllocationsPaginationTraits.h>
#include <aws/ec2/model/GetIpamPoolCidrsPaginationTraits.h>
#include <aws/ec2/model/GetIpamPrefixListResolverRulesPaginationTraits.h>
#include <aws/ec2/model/GetIpamPrefixListResolverVersionEntriesPaginationTraits.h>
#include <aws/ec2/model/GetIpamPrefixListResolverVersionsPaginationTraits.h>
#include <aws/ec2/model/GetIpamResourceCidrsPaginationTraits.h>
#include <aws/ec2/model/GetManagedPrefixListAssociationsPaginationTraits.h>
#include <aws/ec2/model/GetManagedPrefixListEntriesPaginationTraits.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits.h>
#include <aws/ec2/model/GetSecurityGroupsForVpcPaginationTraits.h>
#include <aws/ec2/model/GetSpotPlacementScoresPaginationTraits.h>
#include <aws/ec2/model/GetTransitGatewayAttachmentPropagationsPaginationTraits.h>
#include <aws/ec2/model/GetTransitGatewayMulticastDomainAssociationsPaginationTraits.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableAssociationsPaginationTraits.h>
#include <aws/ec2/model/GetTransitGatewayPrefixListReferencesPaginationTraits.h>
#include <aws/ec2/model/GetTransitGatewayRouteTableAssociationsPaginationTraits.h>
#include <aws/ec2/model/GetTransitGatewayRouteTablePropagationsPaginationTraits.h>
#include <aws/ec2/model/GetVpnConnectionDeviceTypesPaginationTraits.h>
#include <aws/ec2/model/ListImagesInRecycleBinPaginationTraits.h>
#include <aws/ec2/model/ListSnapshotsInRecycleBinPaginationTraits.h>
#include <aws/ec2/model/SearchLocalGatewayRoutesPaginationTraits.h>
#include <aws/ec2/model/SearchTransitGatewayMulticastGroupsPaginationTraits.h>
#include <aws/ec2/model/SearchTransitGatewayRoutesPaginationTraits.h>

namespace Aws {
namespace EC2 {

using DescribeAddressesAttributePaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeAddressesAttributeRequest,
                                      Pagination::DescribeAddressesAttributePaginationTraits<EC2Client>>;
using DescribeAddressTransfersPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeAddressTransfersRequest,
                                      Pagination::DescribeAddressTransfersPaginationTraits<EC2Client>>;
using DescribeAwsNetworkPerformanceMetricSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest,
                                      Pagination::DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits<EC2Client>>;
using DescribeByoipCidrsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeByoipCidrsRequest,
                                                                      Pagination::DescribeByoipCidrsPaginationTraits<EC2Client>>;
using DescribeCapacityBlockExtensionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityBlockExtensionHistoryRequest,
                                      Pagination::DescribeCapacityBlockExtensionHistoryPaginationTraits<EC2Client>>;
using DescribeCapacityBlockExtensionOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityBlockExtensionOfferingsRequest,
                                      Pagination::DescribeCapacityBlockExtensionOfferingsPaginationTraits<EC2Client>>;
using DescribeCapacityBlockOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityBlockOfferingsRequest,
                                      Pagination::DescribeCapacityBlockOfferingsPaginationTraits<EC2Client>>;
using DescribeCapacityBlocksPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityBlocksRequest,
                                                                          Pagination::DescribeCapacityBlocksPaginationTraits<EC2Client>>;
using DescribeCapacityBlockStatusPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityBlockStatusRequest,
                                      Pagination::DescribeCapacityBlockStatusPaginationTraits<EC2Client>>;
using DescribeCapacityManagerDataExportsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityManagerDataExportsRequest,
                                      Pagination::DescribeCapacityManagerDataExportsPaginationTraits<EC2Client>>;
using DescribeCapacityReservationBillingRequestsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityReservationBillingRequestsRequest,
                                      Pagination::DescribeCapacityReservationBillingRequestsPaginationTraits<EC2Client>>;
using DescribeCapacityReservationFleetsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityReservationFleetsRequest,
                                      Pagination::DescribeCapacityReservationFleetsPaginationTraits<EC2Client>>;
using DescribeCapacityReservationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCapacityReservationsRequest,
                                      Pagination::DescribeCapacityReservationsPaginationTraits<EC2Client>>;
using DescribeCarrierGatewaysPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCarrierGatewaysRequest,
                                                                           Pagination::DescribeCarrierGatewaysPaginationTraits<EC2Client>>;
using DescribeClassicLinkInstancesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeClassicLinkInstancesRequest,
                                      Pagination::DescribeClassicLinkInstancesPaginationTraits<EC2Client>>;
using DescribeClientVpnAuthorizationRulesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeClientVpnAuthorizationRulesRequest,
                                      Pagination::DescribeClientVpnAuthorizationRulesPaginationTraits<EC2Client>>;
using DescribeClientVpnConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeClientVpnConnectionsRequest,
                                      Pagination::DescribeClientVpnConnectionsPaginationTraits<EC2Client>>;
using DescribeClientVpnEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeClientVpnEndpointsRequest,
                                      Pagination::DescribeClientVpnEndpointsPaginationTraits<EC2Client>>;
using DescribeClientVpnRoutesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeClientVpnRoutesRequest,
                                                                           Pagination::DescribeClientVpnRoutesPaginationTraits<EC2Client>>;
using DescribeClientVpnTargetNetworksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeClientVpnTargetNetworksRequest,
                                      Pagination::DescribeClientVpnTargetNetworksPaginationTraits<EC2Client>>;
using DescribeCoipPoolsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeCoipPoolsRequest, Pagination::DescribeCoipPoolsPaginationTraits<EC2Client>>;
using DescribeDhcpOptionsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeDhcpOptionsRequest,
                                                                       Pagination::DescribeDhcpOptionsPaginationTraits<EC2Client>>;
using DescribeEgressOnlyInternetGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeEgressOnlyInternetGatewaysRequest,
                                      Pagination::DescribeEgressOnlyInternetGatewaysPaginationTraits<EC2Client>>;
using DescribeExportImageTasksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeExportImageTasksRequest,
                                      Pagination::DescribeExportImageTasksPaginationTraits<EC2Client>>;
using DescribeFastLaunchImagesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeFastLaunchImagesRequest,
                                      Pagination::DescribeFastLaunchImagesPaginationTraits<EC2Client>>;
using DescribeFastSnapshotRestoresPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeFastSnapshotRestoresRequest,
                                      Pagination::DescribeFastSnapshotRestoresPaginationTraits<EC2Client>>;
using DescribeFleetsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeFleetsRequest, Pagination::DescribeFleetsPaginationTraits<EC2Client>>;
using DescribeFlowLogsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeFlowLogsRequest, Pagination::DescribeFlowLogsPaginationTraits<EC2Client>>;
using DescribeFpgaImagesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeFpgaImagesRequest,
                                                                      Pagination::DescribeFpgaImagesPaginationTraits<EC2Client>>;
using DescribeHostReservationOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeHostReservationOfferingsRequest,
                                      Pagination::DescribeHostReservationOfferingsPaginationTraits<EC2Client>>;
using DescribeHostReservationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeHostReservationsRequest,
                                      Pagination::DescribeHostReservationsPaginationTraits<EC2Client>>;
using DescribeHostsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeHostsRequest, Pagination::DescribeHostsPaginationTraits<EC2Client>>;
using DescribeIamInstanceProfileAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIamInstanceProfileAssociationsRequest,
                                      Pagination::DescribeIamInstanceProfileAssociationsPaginationTraits<EC2Client>>;
using DescribeImageReferencesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeImageReferencesRequest,
                                                                           Pagination::DescribeImageReferencesPaginationTraits<EC2Client>>;
using DescribeImagesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits<EC2Client>>;
using DescribeImageUsageReportEntriesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeImageUsageReportEntriesRequest,
                                      Pagination::DescribeImageUsageReportEntriesPaginationTraits<EC2Client>>;
using DescribeImageUsageReportsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeImageUsageReportsRequest,
                                      Pagination::DescribeImageUsageReportsPaginationTraits<EC2Client>>;
using DescribeImportImageTasksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeImportImageTasksRequest,
                                      Pagination::DescribeImportImageTasksPaginationTraits<EC2Client>>;
using DescribeImportSnapshotTasksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeImportSnapshotTasksRequest,
                                      Pagination::DescribeImportSnapshotTasksPaginationTraits<EC2Client>>;
using DescribeInstanceConnectEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceConnectEndpointsRequest,
                                      Pagination::DescribeInstanceConnectEndpointsPaginationTraits<EC2Client>>;
using DescribeInstanceCreditSpecificationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceCreditSpecificationsRequest,
                                      Pagination::DescribeInstanceCreditSpecificationsPaginationTraits<EC2Client>>;
using DescribeInstanceEventWindowsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceEventWindowsRequest,
                                      Pagination::DescribeInstanceEventWindowsPaginationTraits<EC2Client>>;
using DescribeInstanceImageMetadataPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceImageMetadataRequest,
                                      Pagination::DescribeInstanceImageMetadataPaginationTraits<EC2Client>>;
using DescribeInstancesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstancesRequest, Pagination::DescribeInstancesPaginationTraits<EC2Client>>;
using DescribeInstanceStatusPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceStatusRequest,
                                                                          Pagination::DescribeInstanceStatusPaginationTraits<EC2Client>>;
using DescribeInstanceTopologyPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceTopologyRequest,
                                      Pagination::DescribeInstanceTopologyPaginationTraits<EC2Client>>;
using DescribeInstanceTypeOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceTypeOfferingsRequest,
                                      Pagination::DescribeInstanceTypeOfferingsPaginationTraits<EC2Client>>;
using DescribeInstanceTypesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInstanceTypesRequest,
                                                                         Pagination::DescribeInstanceTypesPaginationTraits<EC2Client>>;
using DescribeInternetGatewaysPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeInternetGatewaysRequest,
                                      Pagination::DescribeInternetGatewaysPaginationTraits<EC2Client>>;
using DescribeIpamPoolsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamPoolsRequest, Pagination::DescribeIpamPoolsPaginationTraits<EC2Client>>;
using DescribeIpamPrefixListResolversPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamPrefixListResolversRequest,
                                      Pagination::DescribeIpamPrefixListResolversPaginationTraits<EC2Client>>;
using DescribeIpamPrefixListResolverTargetsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamPrefixListResolverTargetsRequest,
                                      Pagination::DescribeIpamPrefixListResolverTargetsPaginationTraits<EC2Client>>;
using DescribeIpamResourceDiscoveriesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamResourceDiscoveriesRequest,
                                      Pagination::DescribeIpamResourceDiscoveriesPaginationTraits<EC2Client>>;
using DescribeIpamResourceDiscoveryAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamResourceDiscoveryAssociationsRequest,
                                      Pagination::DescribeIpamResourceDiscoveryAssociationsPaginationTraits<EC2Client>>;
using DescribeIpamsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamsRequest, Pagination::DescribeIpamsPaginationTraits<EC2Client>>;
using DescribeIpamScopesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpamScopesRequest,
                                                                      Pagination::DescribeIpamScopesPaginationTraits<EC2Client>>;
using DescribeIpv6PoolsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeIpv6PoolsRequest, Pagination::DescribeIpv6PoolsPaginationTraits<EC2Client>>;
using DescribeLaunchTemplatesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLaunchTemplatesRequest,
                                                                           Pagination::DescribeLaunchTemplatesPaginationTraits<EC2Client>>;
using DescribeLaunchTemplateVersionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLaunchTemplateVersionsRequest,
                                      Pagination::DescribeLaunchTemplateVersionsPaginationTraits<EC2Client>>;
using DescribeLocalGatewayRouteTablesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLocalGatewayRouteTablesRequest,
                                      Pagination::DescribeLocalGatewayRouteTablesPaginationTraits<EC2Client>>;
using DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginator = Aws::Utils::Pagination::Paginator<
    EC2Client, Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest,
    Pagination::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits<EC2Client>>;
using DescribeLocalGatewayRouteTableVpcAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest,
                                      Pagination::DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits<EC2Client>>;
using DescribeLocalGatewaysPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLocalGatewaysRequest,
                                                                         Pagination::DescribeLocalGatewaysPaginationTraits<EC2Client>>;
using DescribeLocalGatewayVirtualInterfaceGroupsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest,
                                      Pagination::DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits<EC2Client>>;
using DescribeLocalGatewayVirtualInterfacesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeLocalGatewayVirtualInterfacesRequest,
                                      Pagination::DescribeLocalGatewayVirtualInterfacesPaginationTraits<EC2Client>>;
using DescribeMacHostsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeMacHostsRequest, Pagination::DescribeMacHostsPaginationTraits<EC2Client>>;
using DescribeMacModificationTasksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeMacModificationTasksRequest,
                                      Pagination::DescribeMacModificationTasksPaginationTraits<EC2Client>>;
using DescribeManagedPrefixListsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeManagedPrefixListsRequest,
                                      Pagination::DescribeManagedPrefixListsPaginationTraits<EC2Client>>;
using DescribeMovingAddressesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeMovingAddressesRequest,
                                                                           Pagination::DescribeMovingAddressesPaginationTraits<EC2Client>>;
using DescribeNatGatewaysPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNatGatewaysRequest,
                                                                       Pagination::DescribeNatGatewaysPaginationTraits<EC2Client>>;
using DescribeNetworkAclsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkAclsRequest,
                                                                       Pagination::DescribeNetworkAclsPaginationTraits<EC2Client>>;
using DescribeNetworkInsightsAccessScopeAnalysesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkInsightsAccessScopeAnalysesRequest,
                                      Pagination::DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits<EC2Client>>;
using DescribeNetworkInsightsAccessScopesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkInsightsAccessScopesRequest,
                                      Pagination::DescribeNetworkInsightsAccessScopesPaginationTraits<EC2Client>>;
using DescribeNetworkInsightsAnalysesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkInsightsAnalysesRequest,
                                      Pagination::DescribeNetworkInsightsAnalysesPaginationTraits<EC2Client>>;
using DescribeNetworkInsightsPathsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkInsightsPathsRequest,
                                      Pagination::DescribeNetworkInsightsPathsPaginationTraits<EC2Client>>;
using DescribeNetworkInterfacePermissionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkInterfacePermissionsRequest,
                                      Pagination::DescribeNetworkInterfacePermissionsPaginationTraits<EC2Client>>;
using DescribeNetworkInterfacesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeNetworkInterfacesRequest,
                                      Pagination::DescribeNetworkInterfacesPaginationTraits<EC2Client>>;
using DescribePrefixListsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribePrefixListsRequest,
                                                                       Pagination::DescribePrefixListsPaginationTraits<EC2Client>>;
using DescribePrincipalIdFormatPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribePrincipalIdFormatRequest,
                                      Pagination::DescribePrincipalIdFormatPaginationTraits<EC2Client>>;
using DescribePublicIpv4PoolsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribePublicIpv4PoolsRequest,
                                                                           Pagination::DescribePublicIpv4PoolsPaginationTraits<EC2Client>>;
using DescribeReplaceRootVolumeTasksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeReplaceRootVolumeTasksRequest,
                                      Pagination::DescribeReplaceRootVolumeTasksPaginationTraits<EC2Client>>;
using DescribeReservedInstancesModificationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeReservedInstancesModificationsRequest,
                                      Pagination::DescribeReservedInstancesModificationsPaginationTraits<EC2Client>>;
using DescribeReservedInstancesOfferingsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeReservedInstancesOfferingsRequest,
                                      Pagination::DescribeReservedInstancesOfferingsPaginationTraits<EC2Client>>;
using DescribeRouteServerEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeRouteServerEndpointsRequest,
                                      Pagination::DescribeRouteServerEndpointsPaginationTraits<EC2Client>>;
using DescribeRouteServerPeersPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeRouteServerPeersRequest,
                                      Pagination::DescribeRouteServerPeersPaginationTraits<EC2Client>>;
using DescribeRouteServersPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeRouteServersRequest,
                                                                        Pagination::DescribeRouteServersPaginationTraits<EC2Client>>;
using DescribeRouteTablesPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeRouteTablesRequest,
                                                                       Pagination::DescribeRouteTablesPaginationTraits<EC2Client>>;
using DescribeScheduledInstanceAvailabilityPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeScheduledInstanceAvailabilityRequest,
                                      Pagination::DescribeScheduledInstanceAvailabilityPaginationTraits<EC2Client>>;
using DescribeScheduledInstancesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeScheduledInstancesRequest,
                                      Pagination::DescribeScheduledInstancesPaginationTraits<EC2Client>>;
using DescribeSecondaryInterfacesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSecondaryInterfacesRequest,
                                      Pagination::DescribeSecondaryInterfacesPaginationTraits<EC2Client>>;
using DescribeSecondaryNetworksPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSecondaryNetworksRequest,
                                      Pagination::DescribeSecondaryNetworksPaginationTraits<EC2Client>>;
using DescribeSecondarySubnetsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSecondarySubnetsRequest,
                                      Pagination::DescribeSecondarySubnetsPaginationTraits<EC2Client>>;
using DescribeSecurityGroupRulesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSecurityGroupRulesRequest,
                                      Pagination::DescribeSecurityGroupRulesPaginationTraits<EC2Client>>;
using DescribeSecurityGroupsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSecurityGroupsRequest,
                                                                          Pagination::DescribeSecurityGroupsPaginationTraits<EC2Client>>;
using DescribeSecurityGroupVpcAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSecurityGroupVpcAssociationsRequest,
                                      Pagination::DescribeSecurityGroupVpcAssociationsPaginationTraits<EC2Client>>;
using DescribeSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSnapshotsRequest, Pagination::DescribeSnapshotsPaginationTraits<EC2Client>>;
using DescribeSnapshotTierStatusPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSnapshotTierStatusRequest,
                                      Pagination::DescribeSnapshotTierStatusPaginationTraits<EC2Client>>;
using DescribeSpotFleetRequestsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSpotFleetRequestsRequest,
                                      Pagination::DescribeSpotFleetRequestsPaginationTraits<EC2Client>>;
using DescribeSpotInstanceRequestsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSpotInstanceRequestsRequest,
                                      Pagination::DescribeSpotInstanceRequestsPaginationTraits<EC2Client>>;
using DescribeSpotPriceHistoryPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSpotPriceHistoryRequest,
                                      Pagination::DescribeSpotPriceHistoryPaginationTraits<EC2Client>>;
using DescribeStaleSecurityGroupsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeStaleSecurityGroupsRequest,
                                      Pagination::DescribeStaleSecurityGroupsPaginationTraits<EC2Client>>;
using DescribeStoreImageTasksPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeStoreImageTasksRequest,
                                                                           Pagination::DescribeStoreImageTasksPaginationTraits<EC2Client>>;
using DescribeSubnetsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeSubnetsRequest, Pagination::DescribeSubnetsPaginationTraits<EC2Client>>;
using DescribeTagsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits<EC2Client>>;
using DescribeTrafficMirrorFiltersPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTrafficMirrorFiltersRequest,
                                      Pagination::DescribeTrafficMirrorFiltersPaginationTraits<EC2Client>>;
using DescribeTrafficMirrorSessionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTrafficMirrorSessionsRequest,
                                      Pagination::DescribeTrafficMirrorSessionsPaginationTraits<EC2Client>>;
using DescribeTrafficMirrorTargetsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTrafficMirrorTargetsRequest,
                                      Pagination::DescribeTrafficMirrorTargetsPaginationTraits<EC2Client>>;
using DescribeTransitGatewayAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayAttachmentsRequest,
                                      Pagination::DescribeTransitGatewayAttachmentsPaginationTraits<EC2Client>>;
using DescribeTransitGatewayConnectPeersPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayConnectPeersRequest,
                                      Pagination::DescribeTransitGatewayConnectPeersPaginationTraits<EC2Client>>;
using DescribeTransitGatewayConnectsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayConnectsRequest,
                                      Pagination::DescribeTransitGatewayConnectsPaginationTraits<EC2Client>>;
using DescribeTransitGatewayMulticastDomainsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayMulticastDomainsRequest,
                                      Pagination::DescribeTransitGatewayMulticastDomainsPaginationTraits<EC2Client>>;
using DescribeTransitGatewayPeeringAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayPeeringAttachmentsRequest,
                                      Pagination::DescribeTransitGatewayPeeringAttachmentsPaginationTraits<EC2Client>>;
using DescribeTransitGatewayPolicyTablesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayPolicyTablesRequest,
                                      Pagination::DescribeTransitGatewayPolicyTablesPaginationTraits<EC2Client>>;
using DescribeTransitGatewayRouteTableAnnouncementsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayRouteTableAnnouncementsRequest,
                                      Pagination::DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits<EC2Client>>;
using DescribeTransitGatewayRouteTablesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayRouteTablesRequest,
                                      Pagination::DescribeTransitGatewayRouteTablesPaginationTraits<EC2Client>>;
using DescribeTransitGatewaysPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewaysRequest,
                                                                           Pagination::DescribeTransitGatewaysPaginationTraits<EC2Client>>;
using DescribeTransitGatewayVpcAttachmentsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTransitGatewayVpcAttachmentsRequest,
                                      Pagination::DescribeTransitGatewayVpcAttachmentsPaginationTraits<EC2Client>>;
using DescribeTrunkInterfaceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeTrunkInterfaceAssociationsRequest,
                                      Pagination::DescribeTrunkInterfaceAssociationsPaginationTraits<EC2Client>>;
using DescribeVerifiedAccessEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVerifiedAccessEndpointsRequest,
                                      Pagination::DescribeVerifiedAccessEndpointsPaginationTraits<EC2Client>>;
using DescribeVerifiedAccessGroupsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVerifiedAccessGroupsRequest,
                                      Pagination::DescribeVerifiedAccessGroupsPaginationTraits<EC2Client>>;
using DescribeVerifiedAccessInstanceLoggingConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest,
                                      Pagination::DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits<EC2Client>>;
using DescribeVerifiedAccessInstancesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVerifiedAccessInstancesRequest,
                                      Pagination::DescribeVerifiedAccessInstancesPaginationTraits<EC2Client>>;
using DescribeVerifiedAccessTrustProvidersPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVerifiedAccessTrustProvidersRequest,
                                      Pagination::DescribeVerifiedAccessTrustProvidersPaginationTraits<EC2Client>>;
using DescribeVolumesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVolumesRequest, Pagination::DescribeVolumesPaginationTraits<EC2Client>>;
using DescribeVolumesModificationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVolumesModificationsRequest,
                                      Pagination::DescribeVolumesModificationsPaginationTraits<EC2Client>>;
using DescribeVolumeStatusPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVolumeStatusRequest,
                                                                        Pagination::DescribeVolumeStatusPaginationTraits<EC2Client>>;
using DescribeVpcClassicLinkDnsSupportPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcClassicLinkDnsSupportRequest,
                                      Pagination::DescribeVpcClassicLinkDnsSupportPaginationTraits<EC2Client>>;
using DescribeVpcEndpointConnectionNotificationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcEndpointConnectionNotificationsRequest,
                                      Pagination::DescribeVpcEndpointConnectionNotificationsPaginationTraits<EC2Client>>;
using DescribeVpcEndpointConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcEndpointConnectionsRequest,
                                      Pagination::DescribeVpcEndpointConnectionsPaginationTraits<EC2Client>>;
using DescribeVpcEndpointsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcEndpointsRequest,
                                                                        Pagination::DescribeVpcEndpointsPaginationTraits<EC2Client>>;
using DescribeVpcEndpointServiceConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcEndpointServiceConfigurationsRequest,
                                      Pagination::DescribeVpcEndpointServiceConfigurationsPaginationTraits<EC2Client>>;
using DescribeVpcEndpointServicePermissionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcEndpointServicePermissionsRequest,
                                      Pagination::DescribeVpcEndpointServicePermissionsPaginationTraits<EC2Client>>;
using DescribeVpcPeeringConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcPeeringConnectionsRequest,
                                      Pagination::DescribeVpcPeeringConnectionsPaginationTraits<EC2Client>>;
using DescribeVpcsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpcsRequest, Pagination::DescribeVpcsPaginationTraits<EC2Client>>;
using DescribeVpnConcentratorsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::DescribeVpnConcentratorsRequest,
                                      Pagination::DescribeVpnConcentratorsPaginationTraits<EC2Client>>;
using GetAssociatedIpv6PoolCidrsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetAssociatedIpv6PoolCidrsRequest,
                                      Pagination::GetAssociatedIpv6PoolCidrsPaginationTraits<EC2Client>>;
using GetAwsNetworkPerformanceDataPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetAwsNetworkPerformanceDataRequest,
                                      Pagination::GetAwsNetworkPerformanceDataPaginationTraits<EC2Client>>;
using GetCapacityManagerMetricDataPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetCapacityManagerMetricDataRequest,
                                      Pagination::GetCapacityManagerMetricDataPaginationTraits<EC2Client>>;
using GetCapacityManagerMetricDimensionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetCapacityManagerMetricDimensionsRequest,
                                      Pagination::GetCapacityManagerMetricDimensionsPaginationTraits<EC2Client>>;
using GetGroupsForCapacityReservationPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetGroupsForCapacityReservationRequest,
                                      Pagination::GetGroupsForCapacityReservationPaginationTraits<EC2Client>>;
using GetInstanceTypesFromInstanceRequirementsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetInstanceTypesFromInstanceRequirementsRequest,
                                      Pagination::GetInstanceTypesFromInstanceRequirementsPaginationTraits<EC2Client>>;
using GetIpamAddressHistoryPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamAddressHistoryRequest,
                                                                         Pagination::GetIpamAddressHistoryPaginationTraits<EC2Client>>;
using GetIpamDiscoveredAccountsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamDiscoveredAccountsRequest,
                                      Pagination::GetIpamDiscoveredAccountsPaginationTraits<EC2Client>>;
using GetIpamDiscoveredResourceCidrsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamDiscoveredResourceCidrsRequest,
                                      Pagination::GetIpamDiscoveredResourceCidrsPaginationTraits<EC2Client>>;
using GetIpamPoolAllocationsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamPoolAllocationsRequest,
                                                                          Pagination::GetIpamPoolAllocationsPaginationTraits<EC2Client>>;
using GetIpamPoolCidrsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamPoolCidrsRequest, Pagination::GetIpamPoolCidrsPaginationTraits<EC2Client>>;
using GetIpamPrefixListResolverRulesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamPrefixListResolverRulesRequest,
                                      Pagination::GetIpamPrefixListResolverRulesPaginationTraits<EC2Client>>;
using GetIpamPrefixListResolverVersionEntriesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamPrefixListResolverVersionEntriesRequest,
                                      Pagination::GetIpamPrefixListResolverVersionEntriesPaginationTraits<EC2Client>>;
using GetIpamPrefixListResolverVersionsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamPrefixListResolverVersionsRequest,
                                      Pagination::GetIpamPrefixListResolverVersionsPaginationTraits<EC2Client>>;
using GetIpamResourceCidrsPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::GetIpamResourceCidrsRequest,
                                                                        Pagination::GetIpamResourceCidrsPaginationTraits<EC2Client>>;
using GetManagedPrefixListAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetManagedPrefixListAssociationsRequest,
                                      Pagination::GetManagedPrefixListAssociationsPaginationTraits<EC2Client>>;
using GetManagedPrefixListEntriesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetManagedPrefixListEntriesRequest,
                                      Pagination::GetManagedPrefixListEntriesPaginationTraits<EC2Client>>;
using GetNetworkInsightsAccessScopeAnalysisFindingsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest,
                                      Pagination::GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits<EC2Client>>;
using GetSecurityGroupsForVpcPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::GetSecurityGroupsForVpcRequest,
                                                                           Pagination::GetSecurityGroupsForVpcPaginationTraits<EC2Client>>;
using GetSpotPlacementScoresPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::GetSpotPlacementScoresRequest,
                                                                          Pagination::GetSpotPlacementScoresPaginationTraits<EC2Client>>;
using GetTransitGatewayAttachmentPropagationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetTransitGatewayAttachmentPropagationsRequest,
                                      Pagination::GetTransitGatewayAttachmentPropagationsPaginationTraits<EC2Client>>;
using GetTransitGatewayMulticastDomainAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetTransitGatewayMulticastDomainAssociationsRequest,
                                      Pagination::GetTransitGatewayMulticastDomainAssociationsPaginationTraits<EC2Client>>;
using GetTransitGatewayPolicyTableAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetTransitGatewayPolicyTableAssociationsRequest,
                                      Pagination::GetTransitGatewayPolicyTableAssociationsPaginationTraits<EC2Client>>;
using GetTransitGatewayPrefixListReferencesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetTransitGatewayPrefixListReferencesRequest,
                                      Pagination::GetTransitGatewayPrefixListReferencesPaginationTraits<EC2Client>>;
using GetTransitGatewayRouteTableAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetTransitGatewayRouteTableAssociationsRequest,
                                      Pagination::GetTransitGatewayRouteTableAssociationsPaginationTraits<EC2Client>>;
using GetTransitGatewayRouteTablePropagationsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetTransitGatewayRouteTablePropagationsRequest,
                                      Pagination::GetTransitGatewayRouteTablePropagationsPaginationTraits<EC2Client>>;
using GetVpnConnectionDeviceTypesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::GetVpnConnectionDeviceTypesRequest,
                                      Pagination::GetVpnConnectionDeviceTypesPaginationTraits<EC2Client>>;
using ListImagesInRecycleBinPaginator = Aws::Utils::Pagination::Paginator<EC2Client, Model::ListImagesInRecycleBinRequest,
                                                                          Pagination::ListImagesInRecycleBinPaginationTraits<EC2Client>>;
using ListSnapshotsInRecycleBinPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::ListSnapshotsInRecycleBinRequest,
                                      Pagination::ListSnapshotsInRecycleBinPaginationTraits<EC2Client>>;
using SearchLocalGatewayRoutesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::SearchLocalGatewayRoutesRequest,
                                      Pagination::SearchLocalGatewayRoutesPaginationTraits<EC2Client>>;
using SearchTransitGatewayMulticastGroupsPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::SearchTransitGatewayMulticastGroupsRequest,
                                      Pagination::SearchTransitGatewayMulticastGroupsPaginationTraits<EC2Client>>;
using SearchTransitGatewayRoutesPaginator =
    Aws::Utils::Pagination::Paginator<EC2Client, Model::SearchTransitGatewayRoutesRequest,
                                      Pagination::SearchTransitGatewayRoutesPaginationTraits<EC2Client>>;

}  // namespace EC2
}  // namespace Aws
