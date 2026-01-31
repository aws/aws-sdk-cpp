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

namespace Aws {
namespace EC2 {

using DescribeAddressesAttributePaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeAddressesAttributeRequest,
                                                                                  Pagination::DescribeAddressesAttributePaginationTraits>;
using DescribeAddressTransfersPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeAddressTransfersRequest,
                                                                                Pagination::DescribeAddressTransfersPaginationTraits>;
using DescribeAwsNetworkPerformanceMetricSubscriptionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest,
                                          Pagination::DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits>;
using DescribeByoipCidrsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeByoipCidrsRequest, Pagination::DescribeByoipCidrsPaginationTraits>;
using DescribeCapacityBlockExtensionHistoryPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityBlockExtensionHistoryRequest,
                                          Pagination::DescribeCapacityBlockExtensionHistoryPaginationTraits>;
using DescribeCapacityBlockExtensionOfferingsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityBlockExtensionOfferingsRequest,
                                          Pagination::DescribeCapacityBlockExtensionOfferingsPaginationTraits>;
using DescribeCapacityBlockOfferingsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityBlockOfferingsRequest,
                                          Pagination::DescribeCapacityBlockOfferingsPaginationTraits>;
using DescribeCapacityBlocksPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityBlocksRequest,
                                                                              Pagination::DescribeCapacityBlocksPaginationTraits>;
using DescribeCapacityBlockStatusPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityBlockStatusRequest,
                                                                                   Pagination::DescribeCapacityBlockStatusPaginationTraits>;
using DescribeCapacityManagerDataExportsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityManagerDataExportsRequest,
                                          Pagination::DescribeCapacityManagerDataExportsPaginationTraits>;
using DescribeCapacityReservationBillingRequestsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityReservationBillingRequestsRequest,
                                          Pagination::DescribeCapacityReservationBillingRequestsPaginationTraits>;
using DescribeCapacityReservationFleetsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityReservationFleetsRequest,
                                          Pagination::DescribeCapacityReservationFleetsPaginationTraits>;
using DescribeCapacityReservationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCapacityReservationsRequest,
                                          Pagination::DescribeCapacityReservationsPaginationTraits>;
using DescribeCarrierGatewaysPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCarrierGatewaysRequest,
                                                                               Pagination::DescribeCarrierGatewaysPaginationTraits>;
using DescribeClassicLinkInstancesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeClassicLinkInstancesRequest,
                                          Pagination::DescribeClassicLinkInstancesPaginationTraits>;
using DescribeClientVpnAuthorizationRulesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeClientVpnAuthorizationRulesRequest,
                                          Pagination::DescribeClientVpnAuthorizationRulesPaginationTraits>;
using DescribeClientVpnConnectionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeClientVpnConnectionsRequest,
                                          Pagination::DescribeClientVpnConnectionsPaginationTraits>;
using DescribeClientVpnEndpointsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeClientVpnEndpointsRequest,
                                                                                  Pagination::DescribeClientVpnEndpointsPaginationTraits>;
using DescribeClientVpnRoutesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeClientVpnRoutesRequest,
                                                                               Pagination::DescribeClientVpnRoutesPaginationTraits>;
using DescribeClientVpnTargetNetworksPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeClientVpnTargetNetworksRequest,
                                          Pagination::DescribeClientVpnTargetNetworksPaginationTraits>;
using DescribeCoipPoolsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeCoipPoolsRequest, Pagination::DescribeCoipPoolsPaginationTraits>;
using DescribeDhcpOptionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeDhcpOptionsRequest, Pagination::DescribeDhcpOptionsPaginationTraits>;
using DescribeEgressOnlyInternetGatewaysPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeEgressOnlyInternetGatewaysRequest,
                                          Pagination::DescribeEgressOnlyInternetGatewaysPaginationTraits>;
using DescribeExportImageTasksPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeExportImageTasksRequest,
                                                                                Pagination::DescribeExportImageTasksPaginationTraits>;
using DescribeFastLaunchImagesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeFastLaunchImagesRequest,
                                                                                Pagination::DescribeFastLaunchImagesPaginationTraits>;
using DescribeFastSnapshotRestoresPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeFastSnapshotRestoresRequest,
                                          Pagination::DescribeFastSnapshotRestoresPaginationTraits>;
using DescribeFleetsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeFleetsRequest, Pagination::DescribeFleetsPaginationTraits>;
using DescribeFlowLogsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeFlowLogsRequest, Pagination::DescribeFlowLogsPaginationTraits>;
using DescribeFpgaImagesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeFpgaImagesRequest, Pagination::DescribeFpgaImagesPaginationTraits>;
using DescribeHostReservationOfferingsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeHostReservationOfferingsRequest,
                                          Pagination::DescribeHostReservationOfferingsPaginationTraits>;
using DescribeHostReservationsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeHostReservationsRequest,
                                                                                Pagination::DescribeHostReservationsPaginationTraits>;
using DescribeHostsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeHostsRequest, Pagination::DescribeHostsPaginationTraits>;
using DescribeIamInstanceProfileAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIamInstanceProfileAssociationsRequest,
                                          Pagination::DescribeIamInstanceProfileAssociationsPaginationTraits>;
using DescribeImageReferencesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeImageReferencesRequest,
                                                                               Pagination::DescribeImageReferencesPaginationTraits>;
using DescribeImagesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits>;
using DescribeImageUsageReportEntriesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeImageUsageReportEntriesRequest,
                                          Pagination::DescribeImageUsageReportEntriesPaginationTraits>;
using DescribeImageUsageReportsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeImageUsageReportsRequest,
                                                                                 Pagination::DescribeImageUsageReportsPaginationTraits>;
using DescribeImportImageTasksPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeImportImageTasksRequest,
                                                                                Pagination::DescribeImportImageTasksPaginationTraits>;
using DescribeImportSnapshotTasksPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeImportSnapshotTasksRequest,
                                                                                   Pagination::DescribeImportSnapshotTasksPaginationTraits>;
using DescribeInstanceConnectEndpointsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceConnectEndpointsRequest,
                                          Pagination::DescribeInstanceConnectEndpointsPaginationTraits>;
using DescribeInstanceCreditSpecificationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceCreditSpecificationsRequest,
                                          Pagination::DescribeInstanceCreditSpecificationsPaginationTraits>;
using DescribeInstanceEventWindowsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceEventWindowsRequest,
                                          Pagination::DescribeInstanceEventWindowsPaginationTraits>;
using DescribeInstanceImageMetadataPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceImageMetadataRequest,
                                          Pagination::DescribeInstanceImageMetadataPaginationTraits>;
using DescribeInstancesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstancesRequest, Pagination::DescribeInstancesPaginationTraits>;
using DescribeInstanceStatusPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceStatusRequest,
                                                                              Pagination::DescribeInstanceStatusPaginationTraits>;
using DescribeInstanceTopologyPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceTopologyRequest,
                                                                                Pagination::DescribeInstanceTopologyPaginationTraits>;
using DescribeInstanceTypeOfferingsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceTypeOfferingsRequest,
                                          Pagination::DescribeInstanceTypeOfferingsPaginationTraits>;
using DescribeInstanceTypesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInstanceTypesRequest,
                                                                             Pagination::DescribeInstanceTypesPaginationTraits>;
using DescribeInternetGatewaysPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeInternetGatewaysRequest,
                                                                                Pagination::DescribeInternetGatewaysPaginationTraits>;
using DescribeIpamPoolsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamPoolsRequest, Pagination::DescribeIpamPoolsPaginationTraits>;
using DescribeIpamPrefixListResolversPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamPrefixListResolversRequest,
                                          Pagination::DescribeIpamPrefixListResolversPaginationTraits>;
using DescribeIpamPrefixListResolverTargetsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamPrefixListResolverTargetsRequest,
                                          Pagination::DescribeIpamPrefixListResolverTargetsPaginationTraits>;
using DescribeIpamResourceDiscoveriesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamResourceDiscoveriesRequest,
                                          Pagination::DescribeIpamResourceDiscoveriesPaginationTraits>;
using DescribeIpamResourceDiscoveryAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamResourceDiscoveryAssociationsRequest,
                                          Pagination::DescribeIpamResourceDiscoveryAssociationsPaginationTraits>;
using DescribeIpamsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamsRequest, Pagination::DescribeIpamsPaginationTraits>;
using DescribeIpamScopesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpamScopesRequest, Pagination::DescribeIpamScopesPaginationTraits>;
using DescribeIpv6PoolsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeIpv6PoolsRequest, Pagination::DescribeIpv6PoolsPaginationTraits>;
using DescribeLaunchTemplatesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLaunchTemplatesRequest,
                                                                               Pagination::DescribeLaunchTemplatesPaginationTraits>;
using DescribeLaunchTemplateVersionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLaunchTemplateVersionsRequest,
                                          Pagination::DescribeLaunchTemplateVersionsPaginationTraits>;
using DescribeLocalGatewayRouteTablesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLocalGatewayRouteTablesRequest,
                                          Pagination::DescribeLocalGatewayRouteTablesPaginationTraits>;
using DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest,
                                          Pagination::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits>;
using DescribeLocalGatewayRouteTableVpcAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest,
                                          Pagination::DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits>;
using DescribeLocalGatewaysPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLocalGatewaysRequest,
                                                                             Pagination::DescribeLocalGatewaysPaginationTraits>;
using DescribeLocalGatewayVirtualInterfaceGroupsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest,
                                          Pagination::DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits>;
using DescribeLocalGatewayVirtualInterfacesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeLocalGatewayVirtualInterfacesRequest,
                                          Pagination::DescribeLocalGatewayVirtualInterfacesPaginationTraits>;
using DescribeMacHostsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeMacHostsRequest, Pagination::DescribeMacHostsPaginationTraits>;
using DescribeMacModificationTasksPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeMacModificationTasksRequest,
                                          Pagination::DescribeMacModificationTasksPaginationTraits>;
using DescribeManagedPrefixListsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeManagedPrefixListsRequest,
                                                                                  Pagination::DescribeManagedPrefixListsPaginationTraits>;
using DescribeMovingAddressesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeMovingAddressesRequest,
                                                                               Pagination::DescribeMovingAddressesPaginationTraits>;
using DescribeNatGatewaysPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNatGatewaysRequest, Pagination::DescribeNatGatewaysPaginationTraits>;
using DescribeNetworkAclsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkAclsRequest, Pagination::DescribeNetworkAclsPaginationTraits>;
using DescribeNetworkInsightsAccessScopeAnalysesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkInsightsAccessScopeAnalysesRequest,
                                          Pagination::DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits>;
using DescribeNetworkInsightsAccessScopesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkInsightsAccessScopesRequest,
                                          Pagination::DescribeNetworkInsightsAccessScopesPaginationTraits>;
using DescribeNetworkInsightsAnalysesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkInsightsAnalysesRequest,
                                          Pagination::DescribeNetworkInsightsAnalysesPaginationTraits>;
using DescribeNetworkInsightsPathsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkInsightsPathsRequest,
                                          Pagination::DescribeNetworkInsightsPathsPaginationTraits>;
using DescribeNetworkInterfacePermissionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkInterfacePermissionsRequest,
                                          Pagination::DescribeNetworkInterfacePermissionsPaginationTraits>;
using DescribeNetworkInterfacesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeNetworkInterfacesRequest,
                                                                                 Pagination::DescribeNetworkInterfacesPaginationTraits>;
using DescribePrefixListsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribePrefixListsRequest, Pagination::DescribePrefixListsPaginationTraits>;
using DescribePrincipalIdFormatPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribePrincipalIdFormatRequest,
                                                                                 Pagination::DescribePrincipalIdFormatPaginationTraits>;
using DescribePublicIpv4PoolsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribePublicIpv4PoolsRequest,
                                                                               Pagination::DescribePublicIpv4PoolsPaginationTraits>;
using DescribeReplaceRootVolumeTasksPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeReplaceRootVolumeTasksRequest,
                                          Pagination::DescribeReplaceRootVolumeTasksPaginationTraits>;
using DescribeReservedInstancesModificationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeReservedInstancesModificationsRequest,
                                          Pagination::DescribeReservedInstancesModificationsPaginationTraits>;
using DescribeReservedInstancesOfferingsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeReservedInstancesOfferingsRequest,
                                          Pagination::DescribeReservedInstancesOfferingsPaginationTraits>;
using DescribeRouteServerEndpointsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeRouteServerEndpointsRequest,
                                          Pagination::DescribeRouteServerEndpointsPaginationTraits>;
using DescribeRouteServerPeersPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeRouteServerPeersRequest,
                                                                                Pagination::DescribeRouteServerPeersPaginationTraits>;
using DescribeRouteServersPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeRouteServersRequest, Pagination::DescribeRouteServersPaginationTraits>;
using DescribeRouteTablesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeRouteTablesRequest, Pagination::DescribeRouteTablesPaginationTraits>;
using DescribeScheduledInstanceAvailabilityPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeScheduledInstanceAvailabilityRequest,
                                          Pagination::DescribeScheduledInstanceAvailabilityPaginationTraits>;
using DescribeScheduledInstancesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeScheduledInstancesRequest,
                                                                                  Pagination::DescribeScheduledInstancesPaginationTraits>;
using DescribeSecurityGroupRulesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSecurityGroupRulesRequest,
                                                                                  Pagination::DescribeSecurityGroupRulesPaginationTraits>;
using DescribeSecurityGroupsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSecurityGroupsRequest,
                                                                              Pagination::DescribeSecurityGroupsPaginationTraits>;
using DescribeSecurityGroupVpcAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSecurityGroupVpcAssociationsRequest,
                                          Pagination::DescribeSecurityGroupVpcAssociationsPaginationTraits>;
using DescribeSnapshotsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSnapshotsRequest, Pagination::DescribeSnapshotsPaginationTraits>;
using DescribeSnapshotTierStatusPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSnapshotTierStatusRequest,
                                                                                  Pagination::DescribeSnapshotTierStatusPaginationTraits>;
using DescribeSpotFleetRequestsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSpotFleetRequestsRequest,
                                                                                 Pagination::DescribeSpotFleetRequestsPaginationTraits>;
using DescribeSpotInstanceRequestsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSpotInstanceRequestsRequest,
                                          Pagination::DescribeSpotInstanceRequestsPaginationTraits>;
using DescribeSpotPriceHistoryPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSpotPriceHistoryRequest,
                                                                                Pagination::DescribeSpotPriceHistoryPaginationTraits>;
using DescribeStaleSecurityGroupsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeStaleSecurityGroupsRequest,
                                                                                   Pagination::DescribeStaleSecurityGroupsPaginationTraits>;
using DescribeStoreImageTasksPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeStoreImageTasksRequest,
                                                                               Pagination::DescribeStoreImageTasksPaginationTraits>;
using DescribeSubnetsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeSubnetsRequest, Pagination::DescribeSubnetsPaginationTraits>;
using DescribeTagsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits>;
using DescribeTrafficMirrorFiltersPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTrafficMirrorFiltersRequest,
                                          Pagination::DescribeTrafficMirrorFiltersPaginationTraits>;
using DescribeTrafficMirrorSessionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTrafficMirrorSessionsRequest,
                                          Pagination::DescribeTrafficMirrorSessionsPaginationTraits>;
using DescribeTrafficMirrorTargetsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTrafficMirrorTargetsRequest,
                                          Pagination::DescribeTrafficMirrorTargetsPaginationTraits>;
using DescribeTransitGatewayAttachmentsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayAttachmentsRequest,
                                          Pagination::DescribeTransitGatewayAttachmentsPaginationTraits>;
using DescribeTransitGatewayConnectPeersPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayConnectPeersRequest,
                                          Pagination::DescribeTransitGatewayConnectPeersPaginationTraits>;
using DescribeTransitGatewayConnectsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayConnectsRequest,
                                          Pagination::DescribeTransitGatewayConnectsPaginationTraits>;
using DescribeTransitGatewayMulticastDomainsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayMulticastDomainsRequest,
                                          Pagination::DescribeTransitGatewayMulticastDomainsPaginationTraits>;
using DescribeTransitGatewayPeeringAttachmentsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayPeeringAttachmentsRequest,
                                          Pagination::DescribeTransitGatewayPeeringAttachmentsPaginationTraits>;
using DescribeTransitGatewayPolicyTablesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayPolicyTablesRequest,
                                          Pagination::DescribeTransitGatewayPolicyTablesPaginationTraits>;
using DescribeTransitGatewayRouteTableAnnouncementsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayRouteTableAnnouncementsRequest,
                                          Pagination::DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits>;
using DescribeTransitGatewayRouteTablesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayRouteTablesRequest,
                                          Pagination::DescribeTransitGatewayRouteTablesPaginationTraits>;
using DescribeTransitGatewaysPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewaysRequest,
                                                                               Pagination::DescribeTransitGatewaysPaginationTraits>;
using DescribeTransitGatewayVpcAttachmentsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTransitGatewayVpcAttachmentsRequest,
                                          Pagination::DescribeTransitGatewayVpcAttachmentsPaginationTraits>;
using DescribeTrunkInterfaceAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeTrunkInterfaceAssociationsRequest,
                                          Pagination::DescribeTrunkInterfaceAssociationsPaginationTraits>;
using DescribeVerifiedAccessEndpointsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVerifiedAccessEndpointsRequest,
                                          Pagination::DescribeVerifiedAccessEndpointsPaginationTraits>;
using DescribeVerifiedAccessGroupsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVerifiedAccessGroupsRequest,
                                          Pagination::DescribeVerifiedAccessGroupsPaginationTraits>;
using DescribeVerifiedAccessInstanceLoggingConfigurationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest,
                                          Pagination::DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits>;
using DescribeVerifiedAccessInstancesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVerifiedAccessInstancesRequest,
                                          Pagination::DescribeVerifiedAccessInstancesPaginationTraits>;
using DescribeVerifiedAccessTrustProvidersPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVerifiedAccessTrustProvidersRequest,
                                          Pagination::DescribeVerifiedAccessTrustProvidersPaginationTraits>;
using DescribeVolumesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVolumesRequest, Pagination::DescribeVolumesPaginationTraits>;
using DescribeVolumesModificationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVolumesModificationsRequest,
                                          Pagination::DescribeVolumesModificationsPaginationTraits>;
using DescribeVolumeStatusPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVolumeStatusRequest, Pagination::DescribeVolumeStatusPaginationTraits>;
using DescribeVpcClassicLinkDnsSupportPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcClassicLinkDnsSupportRequest,
                                          Pagination::DescribeVpcClassicLinkDnsSupportPaginationTraits>;
using DescribeVpcEndpointConnectionNotificationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcEndpointConnectionNotificationsRequest,
                                          Pagination::DescribeVpcEndpointConnectionNotificationsPaginationTraits>;
using DescribeVpcEndpointConnectionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcEndpointConnectionsRequest,
                                          Pagination::DescribeVpcEndpointConnectionsPaginationTraits>;
using DescribeVpcEndpointsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcEndpointsRequest, Pagination::DescribeVpcEndpointsPaginationTraits>;
using DescribeVpcEndpointServiceConfigurationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcEndpointServiceConfigurationsRequest,
                                          Pagination::DescribeVpcEndpointServiceConfigurationsPaginationTraits>;
using DescribeVpcEndpointServicePermissionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcEndpointServicePermissionsRequest,
                                          Pagination::DescribeVpcEndpointServicePermissionsPaginationTraits>;
using DescribeVpcPeeringConnectionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcPeeringConnectionsRequest,
                                          Pagination::DescribeVpcPeeringConnectionsPaginationTraits>;
using DescribeVpcsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpcsRequest, Pagination::DescribeVpcsPaginationTraits>;
using DescribeVpnConcentratorsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::DescribeVpnConcentratorsRequest,
                                                                                Pagination::DescribeVpnConcentratorsPaginationTraits>;
using GetAssociatedIpv6PoolCidrsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetAssociatedIpv6PoolCidrsRequest,
                                                                                  Pagination::GetAssociatedIpv6PoolCidrsPaginationTraits>;
using GetAwsNetworkPerformanceDataPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetAwsNetworkPerformanceDataRequest,
                                          Pagination::GetAwsNetworkPerformanceDataPaginationTraits>;
using GetCapacityManagerMetricDataPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetCapacityManagerMetricDataRequest,
                                          Pagination::GetCapacityManagerMetricDataPaginationTraits>;
using GetCapacityManagerMetricDimensionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetCapacityManagerMetricDimensionsRequest,
                                          Pagination::GetCapacityManagerMetricDimensionsPaginationTraits>;
using GetGroupsForCapacityReservationPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetGroupsForCapacityReservationRequest,
                                          Pagination::GetGroupsForCapacityReservationPaginationTraits>;
using GetInstanceTypesFromInstanceRequirementsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetInstanceTypesFromInstanceRequirementsRequest,
                                          Pagination::GetInstanceTypesFromInstanceRequirementsPaginationTraits>;
using GetIpamAddressHistoryPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamAddressHistoryRequest,
                                                                             Pagination::GetIpamAddressHistoryPaginationTraits>;
using GetIpamDiscoveredAccountsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamDiscoveredAccountsRequest,
                                                                                 Pagination::GetIpamDiscoveredAccountsPaginationTraits>;
using GetIpamDiscoveredResourceCidrsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamDiscoveredResourceCidrsRequest,
                                          Pagination::GetIpamDiscoveredResourceCidrsPaginationTraits>;
using GetIpamPoolAllocationsPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamPoolAllocationsRequest,
                                                                              Pagination::GetIpamPoolAllocationsPaginationTraits>;
using GetIpamPoolCidrsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamPoolCidrsRequest, Pagination::GetIpamPoolCidrsPaginationTraits>;
using GetIpamPrefixListResolverRulesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamPrefixListResolverRulesRequest,
                                          Pagination::GetIpamPrefixListResolverRulesPaginationTraits>;
using GetIpamPrefixListResolverVersionEntriesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamPrefixListResolverVersionEntriesRequest,
                                          Pagination::GetIpamPrefixListResolverVersionEntriesPaginationTraits>;
using GetIpamPrefixListResolverVersionsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamPrefixListResolverVersionsRequest,
                                          Pagination::GetIpamPrefixListResolverVersionsPaginationTraits>;
using GetIpamResourceCidrsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetIpamResourceCidrsRequest, Pagination::GetIpamResourceCidrsPaginationTraits>;
using GetManagedPrefixListAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetManagedPrefixListAssociationsRequest,
                                          Pagination::GetManagedPrefixListAssociationsPaginationTraits>;
using GetManagedPrefixListEntriesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetManagedPrefixListEntriesRequest,
                                                                                   Pagination::GetManagedPrefixListEntriesPaginationTraits>;
using GetNetworkInsightsAccessScopeAnalysisFindingsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest,
                                          Pagination::GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits>;
using GetSecurityGroupsForVpcPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetSecurityGroupsForVpcRequest,
                                                                               Pagination::GetSecurityGroupsForVpcPaginationTraits>;
using GetSpotPlacementScoresPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetSpotPlacementScoresRequest,
                                                                              Pagination::GetSpotPlacementScoresPaginationTraits>;
using GetTransitGatewayAttachmentPropagationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetTransitGatewayAttachmentPropagationsRequest,
                                          Pagination::GetTransitGatewayAttachmentPropagationsPaginationTraits>;
using GetTransitGatewayMulticastDomainAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetTransitGatewayMulticastDomainAssociationsRequest,
                                          Pagination::GetTransitGatewayMulticastDomainAssociationsPaginationTraits>;
using GetTransitGatewayPolicyTableAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetTransitGatewayPolicyTableAssociationsRequest,
                                          Pagination::GetTransitGatewayPolicyTableAssociationsPaginationTraits>;
using GetTransitGatewayPrefixListReferencesPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetTransitGatewayPrefixListReferencesRequest,
                                          Pagination::GetTransitGatewayPrefixListReferencesPaginationTraits>;
using GetTransitGatewayRouteTableAssociationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetTransitGatewayRouteTableAssociationsRequest,
                                          Pagination::GetTransitGatewayRouteTableAssociationsPaginationTraits>;
using GetTransitGatewayRouteTablePropagationsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetTransitGatewayRouteTablePropagationsRequest,
                                          Pagination::GetTransitGatewayRouteTablePropagationsPaginationTraits>;
using GetVpnConnectionDeviceTypesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::GetVpnConnectionDeviceTypesRequest,
                                                                                   Pagination::GetVpnConnectionDeviceTypesPaginationTraits>;
using ListImagesInRecycleBinPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::ListImagesInRecycleBinRequest,
                                                                              Pagination::ListImagesInRecycleBinPaginationTraits>;
using ListSnapshotsInRecycleBinPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::ListSnapshotsInRecycleBinRequest,
                                                                                 Pagination::ListSnapshotsInRecycleBinPaginationTraits>;
using SearchLocalGatewayRoutesPaginator = Aws::Utils::Pagination::PagePaginator<EC2Client, Model::SearchLocalGatewayRoutesRequest,
                                                                                Pagination::SearchLocalGatewayRoutesPaginationTraits>;
using SearchTransitGatewayMulticastGroupsPaginator =
    Aws::Utils::Pagination::PagePaginator<EC2Client, Model::SearchTransitGatewayMulticastGroupsRequest,
                                          Pagination::SearchTransitGatewayMulticastGroupsPaginationTraits>;

}  // namespace EC2
}  // namespace Aws
