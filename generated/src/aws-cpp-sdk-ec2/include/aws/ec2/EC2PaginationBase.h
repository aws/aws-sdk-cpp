/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace EC2 {

class EC2Client;

template <typename DerivedClient>
class EC2PaginationBase {
 public:
  /**
   * Create a paginator for DescribeAddressesAttribute operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeAddressesAttributeRequest,
                                        Pagination::DescribeAddressesAttributePaginationTraits>
  DescribeAddressesAttributePaginator(const Model::DescribeAddressesAttributeRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeAddressesAttributeRequest,
                                                 Pagination::DescribeAddressesAttributePaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeAddressTransfers operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeAddressTransfersRequest,
                                        Pagination::DescribeAddressTransfersPaginationTraits>
  DescribeAddressTransfersPaginator(const Model::DescribeAddressTransfersRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeAddressTransfersRequest,
                                                 Pagination::DescribeAddressTransfersPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeAwsNetworkPerformanceMetricSubscriptions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest,
                                        Pagination::DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits>
  DescribeAwsNetworkPerformanceMetricSubscriptionsPaginator(const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest,
                                                 Pagination::DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeByoipCidrs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeByoipCidrsRequest, Pagination::DescribeByoipCidrsPaginationTraits>
  DescribeByoipCidrsPaginator(const Model::DescribeByoipCidrsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeByoipCidrsRequest,
                                                 Pagination::DescribeByoipCidrsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockExtensionHistory operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockExtensionHistoryRequest,
                                        Pagination::DescribeCapacityBlockExtensionHistoryPaginationTraits>
  DescribeCapacityBlockExtensionHistoryPaginator(const Model::DescribeCapacityBlockExtensionHistoryRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockExtensionHistoryRequest,
                                                 Pagination::DescribeCapacityBlockExtensionHistoryPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockExtensionOfferings operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockExtensionOfferingsRequest,
                                        Pagination::DescribeCapacityBlockExtensionOfferingsPaginationTraits>
  DescribeCapacityBlockExtensionOfferingsPaginator(const Model::DescribeCapacityBlockExtensionOfferingsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockExtensionOfferingsRequest,
                                                 Pagination::DescribeCapacityBlockExtensionOfferingsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockOfferings operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockOfferingsRequest,
                                        Pagination::DescribeCapacityBlockOfferingsPaginationTraits>
  DescribeCapacityBlockOfferingsPaginator(const Model::DescribeCapacityBlockOfferingsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockOfferingsRequest,
                                                 Pagination::DescribeCapacityBlockOfferingsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlocks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlocksRequest,
                                        Pagination::DescribeCapacityBlocksPaginationTraits>
  DescribeCapacityBlocksPaginator(const Model::DescribeCapacityBlocksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlocksRequest,
                                                 Pagination::DescribeCapacityBlocksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockStatus operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockStatusRequest,
                                        Pagination::DescribeCapacityBlockStatusPaginationTraits>
  DescribeCapacityBlockStatusPaginator(const Model::DescribeCapacityBlockStatusRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityBlockStatusRequest,
                                                 Pagination::DescribeCapacityBlockStatusPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityManagerDataExports operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityManagerDataExportsRequest,
                                        Pagination::DescribeCapacityManagerDataExportsPaginationTraits>
  DescribeCapacityManagerDataExportsPaginator(const Model::DescribeCapacityManagerDataExportsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityManagerDataExportsRequest,
                                                 Pagination::DescribeCapacityManagerDataExportsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityReservationBillingRequests operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityReservationBillingRequestsRequest,
                                        Pagination::DescribeCapacityReservationBillingRequestsPaginationTraits>
  DescribeCapacityReservationBillingRequestsPaginator(const Model::DescribeCapacityReservationBillingRequestsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityReservationBillingRequestsRequest,
                                                 Pagination::DescribeCapacityReservationBillingRequestsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityReservationFleets operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityReservationFleetsRequest,
                                        Pagination::DescribeCapacityReservationFleetsPaginationTraits>
  DescribeCapacityReservationFleetsPaginator(const Model::DescribeCapacityReservationFleetsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityReservationFleetsRequest,
                                                 Pagination::DescribeCapacityReservationFleetsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCapacityReservations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityReservationsRequest,
                                        Pagination::DescribeCapacityReservationsPaginationTraits>
  DescribeCapacityReservationsPaginator(const Model::DescribeCapacityReservationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCapacityReservationsRequest,
                                                 Pagination::DescribeCapacityReservationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCarrierGateways operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCarrierGatewaysRequest,
                                        Pagination::DescribeCarrierGatewaysPaginationTraits>
  DescribeCarrierGatewaysPaginator(const Model::DescribeCarrierGatewaysRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCarrierGatewaysRequest,
                                                 Pagination::DescribeCarrierGatewaysPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeClassicLinkInstances operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClassicLinkInstancesRequest,
                                        Pagination::DescribeClassicLinkInstancesPaginationTraits>
  DescribeClassicLinkInstancesPaginator(const Model::DescribeClassicLinkInstancesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClassicLinkInstancesRequest,
                                                 Pagination::DescribeClassicLinkInstancesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeClientVpnAuthorizationRules operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnAuthorizationRulesRequest,
                                        Pagination::DescribeClientVpnAuthorizationRulesPaginationTraits>
  DescribeClientVpnAuthorizationRulesPaginator(const Model::DescribeClientVpnAuthorizationRulesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnAuthorizationRulesRequest,
                                                 Pagination::DescribeClientVpnAuthorizationRulesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeClientVpnConnections operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnConnectionsRequest,
                                        Pagination::DescribeClientVpnConnectionsPaginationTraits>
  DescribeClientVpnConnectionsPaginator(const Model::DescribeClientVpnConnectionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnConnectionsRequest,
                                                 Pagination::DescribeClientVpnConnectionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeClientVpnEndpoints operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnEndpointsRequest,
                                        Pagination::DescribeClientVpnEndpointsPaginationTraits>
  DescribeClientVpnEndpointsPaginator(const Model::DescribeClientVpnEndpointsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnEndpointsRequest,
                                                 Pagination::DescribeClientVpnEndpointsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeClientVpnRoutes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnRoutesRequest,
                                        Pagination::DescribeClientVpnRoutesPaginationTraits>
  DescribeClientVpnRoutesPaginator(const Model::DescribeClientVpnRoutesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnRoutesRequest,
                                                 Pagination::DescribeClientVpnRoutesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeClientVpnTargetNetworks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnTargetNetworksRequest,
                                        Pagination::DescribeClientVpnTargetNetworksPaginationTraits>
  DescribeClientVpnTargetNetworksPaginator(const Model::DescribeClientVpnTargetNetworksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeClientVpnTargetNetworksRequest,
                                                 Pagination::DescribeClientVpnTargetNetworksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeCoipPools operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCoipPoolsRequest, Pagination::DescribeCoipPoolsPaginationTraits>
  DescribeCoipPoolsPaginator(const Model::DescribeCoipPoolsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeCoipPoolsRequest,
                                                 Pagination::DescribeCoipPoolsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeDhcpOptions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeDhcpOptionsRequest, Pagination::DescribeDhcpOptionsPaginationTraits>
  DescribeDhcpOptionsPaginator(const Model::DescribeDhcpOptionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeDhcpOptionsRequest,
                                                 Pagination::DescribeDhcpOptionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeEgressOnlyInternetGateways operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeEgressOnlyInternetGatewaysRequest,
                                        Pagination::DescribeEgressOnlyInternetGatewaysPaginationTraits>
  DescribeEgressOnlyInternetGatewaysPaginator(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeEgressOnlyInternetGatewaysRequest,
                                                 Pagination::DescribeEgressOnlyInternetGatewaysPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeExportImageTasks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeExportImageTasksRequest,
                                        Pagination::DescribeExportImageTasksPaginationTraits>
  DescribeExportImageTasksPaginator(const Model::DescribeExportImageTasksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeExportImageTasksRequest,
                                                 Pagination::DescribeExportImageTasksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeFastLaunchImages operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFastLaunchImagesRequest,
                                        Pagination::DescribeFastLaunchImagesPaginationTraits>
  DescribeFastLaunchImagesPaginator(const Model::DescribeFastLaunchImagesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFastLaunchImagesRequest,
                                                 Pagination::DescribeFastLaunchImagesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeFastSnapshotRestores operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFastSnapshotRestoresRequest,
                                        Pagination::DescribeFastSnapshotRestoresPaginationTraits>
  DescribeFastSnapshotRestoresPaginator(const Model::DescribeFastSnapshotRestoresRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFastSnapshotRestoresRequest,
                                                 Pagination::DescribeFastSnapshotRestoresPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeFleets operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFleetsRequest, Pagination::DescribeFleetsPaginationTraits>
  DescribeFleetsPaginator(const Model::DescribeFleetsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFleetsRequest, Pagination::DescribeFleetsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeFlowLogs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFlowLogsRequest, Pagination::DescribeFlowLogsPaginationTraits>
  DescribeFlowLogsPaginator(const Model::DescribeFlowLogsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFlowLogsRequest,
                                                 Pagination::DescribeFlowLogsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeFpgaImages operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFpgaImagesRequest, Pagination::DescribeFpgaImagesPaginationTraits>
  DescribeFpgaImagesPaginator(const Model::DescribeFpgaImagesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeFpgaImagesRequest,
                                                 Pagination::DescribeFpgaImagesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeHostReservationOfferings operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeHostReservationOfferingsRequest,
                                        Pagination::DescribeHostReservationOfferingsPaginationTraits>
  DescribeHostReservationOfferingsPaginator(const Model::DescribeHostReservationOfferingsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeHostReservationOfferingsRequest,
                                                 Pagination::DescribeHostReservationOfferingsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeHostReservations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeHostReservationsRequest,
                                        Pagination::DescribeHostReservationsPaginationTraits>
  DescribeHostReservationsPaginator(const Model::DescribeHostReservationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeHostReservationsRequest,
                                                 Pagination::DescribeHostReservationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeHosts operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeHostsRequest, Pagination::DescribeHostsPaginationTraits>
  DescribeHostsPaginator(const Model::DescribeHostsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeHostsRequest, Pagination::DescribeHostsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIamInstanceProfileAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIamInstanceProfileAssociationsRequest,
                                        Pagination::DescribeIamInstanceProfileAssociationsPaginationTraits>
  DescribeIamInstanceProfileAssociationsPaginator(const Model::DescribeIamInstanceProfileAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIamInstanceProfileAssociationsRequest,
                                                 Pagination::DescribeIamInstanceProfileAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeImageReferences operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImageReferencesRequest,
                                        Pagination::DescribeImageReferencesPaginationTraits>
  DescribeImageReferencesPaginator(const Model::DescribeImageReferencesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImageReferencesRequest,
                                                 Pagination::DescribeImageReferencesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeImages operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits>
  DescribeImagesPaginator(const Model::DescribeImagesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeImageUsageReportEntries operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImageUsageReportEntriesRequest,
                                        Pagination::DescribeImageUsageReportEntriesPaginationTraits>
  DescribeImageUsageReportEntriesPaginator(const Model::DescribeImageUsageReportEntriesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImageUsageReportEntriesRequest,
                                                 Pagination::DescribeImageUsageReportEntriesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeImageUsageReports operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImageUsageReportsRequest,
                                        Pagination::DescribeImageUsageReportsPaginationTraits>
  DescribeImageUsageReportsPaginator(const Model::DescribeImageUsageReportsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImageUsageReportsRequest,
                                                 Pagination::DescribeImageUsageReportsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeImportImageTasks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImportImageTasksRequest,
                                        Pagination::DescribeImportImageTasksPaginationTraits>
  DescribeImportImageTasksPaginator(const Model::DescribeImportImageTasksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImportImageTasksRequest,
                                                 Pagination::DescribeImportImageTasksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeImportSnapshotTasks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImportSnapshotTasksRequest,
                                        Pagination::DescribeImportSnapshotTasksPaginationTraits>
  DescribeImportSnapshotTasksPaginator(const Model::DescribeImportSnapshotTasksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeImportSnapshotTasksRequest,
                                                 Pagination::DescribeImportSnapshotTasksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceConnectEndpoints operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceConnectEndpointsRequest,
                                        Pagination::DescribeInstanceConnectEndpointsPaginationTraits>
  DescribeInstanceConnectEndpointsPaginator(const Model::DescribeInstanceConnectEndpointsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceConnectEndpointsRequest,
                                                 Pagination::DescribeInstanceConnectEndpointsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceCreditSpecifications operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceCreditSpecificationsRequest,
                                        Pagination::DescribeInstanceCreditSpecificationsPaginationTraits>
  DescribeInstanceCreditSpecificationsPaginator(const Model::DescribeInstanceCreditSpecificationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceCreditSpecificationsRequest,
                                                 Pagination::DescribeInstanceCreditSpecificationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceEventWindows operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceEventWindowsRequest,
                                        Pagination::DescribeInstanceEventWindowsPaginationTraits>
  DescribeInstanceEventWindowsPaginator(const Model::DescribeInstanceEventWindowsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceEventWindowsRequest,
                                                 Pagination::DescribeInstanceEventWindowsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceImageMetadata operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceImageMetadataRequest,
                                        Pagination::DescribeInstanceImageMetadataPaginationTraits>
  DescribeInstanceImageMetadataPaginator(const Model::DescribeInstanceImageMetadataRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceImageMetadataRequest,
                                                 Pagination::DescribeInstanceImageMetadataPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstances operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstancesRequest, Pagination::DescribeInstancesPaginationTraits>
  DescribeInstancesPaginator(const Model::DescribeInstancesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstancesRequest,
                                                 Pagination::DescribeInstancesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceStatus operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceStatusRequest,
                                        Pagination::DescribeInstanceStatusPaginationTraits>
  DescribeInstanceStatusPaginator(const Model::DescribeInstanceStatusRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceStatusRequest,
                                                 Pagination::DescribeInstanceStatusPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceTopology operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceTopologyRequest,
                                        Pagination::DescribeInstanceTopologyPaginationTraits>
  DescribeInstanceTopologyPaginator(const Model::DescribeInstanceTopologyRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceTopologyRequest,
                                                 Pagination::DescribeInstanceTopologyPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceTypeOfferings operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceTypeOfferingsRequest,
                                        Pagination::DescribeInstanceTypeOfferingsPaginationTraits>
  DescribeInstanceTypeOfferingsPaginator(const Model::DescribeInstanceTypeOfferingsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceTypeOfferingsRequest,
                                                 Pagination::DescribeInstanceTypeOfferingsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInstanceTypes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceTypesRequest,
                                        Pagination::DescribeInstanceTypesPaginationTraits>
  DescribeInstanceTypesPaginator(const Model::DescribeInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInstanceTypesRequest,
                                                 Pagination::DescribeInstanceTypesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeInternetGateways operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInternetGatewaysRequest,
                                        Pagination::DescribeInternetGatewaysPaginationTraits>
  DescribeInternetGatewaysPaginator(const Model::DescribeInternetGatewaysRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeInternetGatewaysRequest,
                                                 Pagination::DescribeInternetGatewaysPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpamPools operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamPoolsRequest, Pagination::DescribeIpamPoolsPaginationTraits>
  DescribeIpamPoolsPaginator(const Model::DescribeIpamPoolsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamPoolsRequest,
                                                 Pagination::DescribeIpamPoolsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpamPrefixListResolvers operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamPrefixListResolversRequest,
                                        Pagination::DescribeIpamPrefixListResolversPaginationTraits>
  DescribeIpamPrefixListResolversPaginator(const Model::DescribeIpamPrefixListResolversRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamPrefixListResolversRequest,
                                                 Pagination::DescribeIpamPrefixListResolversPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpamPrefixListResolverTargets operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamPrefixListResolverTargetsRequest,
                                        Pagination::DescribeIpamPrefixListResolverTargetsPaginationTraits>
  DescribeIpamPrefixListResolverTargetsPaginator(const Model::DescribeIpamPrefixListResolverTargetsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamPrefixListResolverTargetsRequest,
                                                 Pagination::DescribeIpamPrefixListResolverTargetsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpamResourceDiscoveries operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamResourceDiscoveriesRequest,
                                        Pagination::DescribeIpamResourceDiscoveriesPaginationTraits>
  DescribeIpamResourceDiscoveriesPaginator(const Model::DescribeIpamResourceDiscoveriesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamResourceDiscoveriesRequest,
                                                 Pagination::DescribeIpamResourceDiscoveriesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpamResourceDiscoveryAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamResourceDiscoveryAssociationsRequest,
                                        Pagination::DescribeIpamResourceDiscoveryAssociationsPaginationTraits>
  DescribeIpamResourceDiscoveryAssociationsPaginator(const Model::DescribeIpamResourceDiscoveryAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamResourceDiscoveryAssociationsRequest,
                                                 Pagination::DescribeIpamResourceDiscoveryAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpams operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamsRequest, Pagination::DescribeIpamsPaginationTraits>
  DescribeIpamsPaginator(const Model::DescribeIpamsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamsRequest, Pagination::DescribeIpamsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpamScopes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamScopesRequest, Pagination::DescribeIpamScopesPaginationTraits>
  DescribeIpamScopesPaginator(const Model::DescribeIpamScopesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpamScopesRequest,
                                                 Pagination::DescribeIpamScopesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeIpv6Pools operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpv6PoolsRequest, Pagination::DescribeIpv6PoolsPaginationTraits>
  DescribeIpv6PoolsPaginator(const Model::DescribeIpv6PoolsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeIpv6PoolsRequest,
                                                 Pagination::DescribeIpv6PoolsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLaunchTemplates operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLaunchTemplatesRequest,
                                        Pagination::DescribeLaunchTemplatesPaginationTraits>
  DescribeLaunchTemplatesPaginator(const Model::DescribeLaunchTemplatesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLaunchTemplatesRequest,
                                                 Pagination::DescribeLaunchTemplatesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLaunchTemplateVersions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLaunchTemplateVersionsRequest,
                                        Pagination::DescribeLaunchTemplateVersionsPaginationTraits>
  DescribeLaunchTemplateVersionsPaginator(const Model::DescribeLaunchTemplateVersionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLaunchTemplateVersionsRequest,
                                                 Pagination::DescribeLaunchTemplateVersionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayRouteTables operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayRouteTablesRequest,
                                        Pagination::DescribeLocalGatewayRouteTablesPaginationTraits>
  DescribeLocalGatewayRouteTablesPaginator(const Model::DescribeLocalGatewayRouteTablesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayRouteTablesRequest,
                                                 Pagination::DescribeLocalGatewayRouteTablesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest,
                                        Pagination::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits>
  DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginator(
      const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<
        DerivedClient, Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest,
        Pagination::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayRouteTableVpcAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest,
                                        Pagination::DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits>
  DescribeLocalGatewayRouteTableVpcAssociationsPaginator(const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest,
                                                 Pagination::DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLocalGateways operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewaysRequest,
                                        Pagination::DescribeLocalGatewaysPaginationTraits>
  DescribeLocalGatewaysPaginator(const Model::DescribeLocalGatewaysRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewaysRequest,
                                                 Pagination::DescribeLocalGatewaysPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayVirtualInterfaceGroups operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest,
                                        Pagination::DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits>
  DescribeLocalGatewayVirtualInterfaceGroupsPaginator(const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest,
                                                 Pagination::DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayVirtualInterfaces operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfacesRequest,
                                        Pagination::DescribeLocalGatewayVirtualInterfacesPaginationTraits>
  DescribeLocalGatewayVirtualInterfacesPaginator(const Model::DescribeLocalGatewayVirtualInterfacesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfacesRequest,
                                                 Pagination::DescribeLocalGatewayVirtualInterfacesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeMacHosts operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeMacHostsRequest, Pagination::DescribeMacHostsPaginationTraits>
  DescribeMacHostsPaginator(const Model::DescribeMacHostsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeMacHostsRequest,
                                                 Pagination::DescribeMacHostsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeMacModificationTasks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeMacModificationTasksRequest,
                                        Pagination::DescribeMacModificationTasksPaginationTraits>
  DescribeMacModificationTasksPaginator(const Model::DescribeMacModificationTasksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeMacModificationTasksRequest,
                                                 Pagination::DescribeMacModificationTasksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeManagedPrefixLists operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeManagedPrefixListsRequest,
                                        Pagination::DescribeManagedPrefixListsPaginationTraits>
  DescribeManagedPrefixListsPaginator(const Model::DescribeManagedPrefixListsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeManagedPrefixListsRequest,
                                                 Pagination::DescribeManagedPrefixListsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeMovingAddresses operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeMovingAddressesRequest,
                                        Pagination::DescribeMovingAddressesPaginationTraits>
  DescribeMovingAddressesPaginator(const Model::DescribeMovingAddressesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeMovingAddressesRequest,
                                                 Pagination::DescribeMovingAddressesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNatGateways operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNatGatewaysRequest, Pagination::DescribeNatGatewaysPaginationTraits>
  DescribeNatGatewaysPaginator(const Model::DescribeNatGatewaysRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNatGatewaysRequest,
                                                 Pagination::DescribeNatGatewaysPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkAcls operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkAclsRequest, Pagination::DescribeNetworkAclsPaginationTraits>
  DescribeNetworkAclsPaginator(const Model::DescribeNetworkAclsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkAclsRequest,
                                                 Pagination::DescribeNetworkAclsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsAccessScopeAnalyses operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopeAnalysesRequest,
                                        Pagination::DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits>
  DescribeNetworkInsightsAccessScopeAnalysesPaginator(const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopeAnalysesRequest,
                                                 Pagination::DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsAccessScopes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopesRequest,
                                        Pagination::DescribeNetworkInsightsAccessScopesPaginationTraits>
  DescribeNetworkInsightsAccessScopesPaginator(const Model::DescribeNetworkInsightsAccessScopesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopesRequest,
                                                 Pagination::DescribeNetworkInsightsAccessScopesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsAnalyses operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsAnalysesRequest,
                                        Pagination::DescribeNetworkInsightsAnalysesPaginationTraits>
  DescribeNetworkInsightsAnalysesPaginator(const Model::DescribeNetworkInsightsAnalysesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsAnalysesRequest,
                                                 Pagination::DescribeNetworkInsightsAnalysesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsPaths operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsPathsRequest,
                                        Pagination::DescribeNetworkInsightsPathsPaginationTraits>
  DescribeNetworkInsightsPathsPaginator(const Model::DescribeNetworkInsightsPathsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInsightsPathsRequest,
                                                 Pagination::DescribeNetworkInsightsPathsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkInterfacePermissions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInterfacePermissionsRequest,
                                        Pagination::DescribeNetworkInterfacePermissionsPaginationTraits>
  DescribeNetworkInterfacePermissionsPaginator(const Model::DescribeNetworkInterfacePermissionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInterfacePermissionsRequest,
                                                 Pagination::DescribeNetworkInterfacePermissionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeNetworkInterfaces operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInterfacesRequest,
                                        Pagination::DescribeNetworkInterfacesPaginationTraits>
  DescribeNetworkInterfacesPaginator(const Model::DescribeNetworkInterfacesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeNetworkInterfacesRequest,
                                                 Pagination::DescribeNetworkInterfacesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribePrefixLists operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribePrefixListsRequest, Pagination::DescribePrefixListsPaginationTraits>
  DescribePrefixListsPaginator(const Model::DescribePrefixListsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribePrefixListsRequest,
                                                 Pagination::DescribePrefixListsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribePrincipalIdFormat operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribePrincipalIdFormatRequest,
                                        Pagination::DescribePrincipalIdFormatPaginationTraits>
  DescribePrincipalIdFormatPaginator(const Model::DescribePrincipalIdFormatRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribePrincipalIdFormatRequest,
                                                 Pagination::DescribePrincipalIdFormatPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribePublicIpv4Pools operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribePublicIpv4PoolsRequest,
                                        Pagination::DescribePublicIpv4PoolsPaginationTraits>
  DescribePublicIpv4PoolsPaginator(const Model::DescribePublicIpv4PoolsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribePublicIpv4PoolsRequest,
                                                 Pagination::DescribePublicIpv4PoolsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeReplaceRootVolumeTasks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeReplaceRootVolumeTasksRequest,
                                        Pagination::DescribeReplaceRootVolumeTasksPaginationTraits>
  DescribeReplaceRootVolumeTasksPaginator(const Model::DescribeReplaceRootVolumeTasksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeReplaceRootVolumeTasksRequest,
                                                 Pagination::DescribeReplaceRootVolumeTasksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeReservedInstancesModifications operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeReservedInstancesModificationsRequest,
                                        Pagination::DescribeReservedInstancesModificationsPaginationTraits>
  DescribeReservedInstancesModificationsPaginator(const Model::DescribeReservedInstancesModificationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeReservedInstancesModificationsRequest,
                                                 Pagination::DescribeReservedInstancesModificationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeReservedInstancesOfferings operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeReservedInstancesOfferingsRequest,
                                        Pagination::DescribeReservedInstancesOfferingsPaginationTraits>
  DescribeReservedInstancesOfferingsPaginator(const Model::DescribeReservedInstancesOfferingsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeReservedInstancesOfferingsRequest,
                                                 Pagination::DescribeReservedInstancesOfferingsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeRouteServerEndpoints operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteServerEndpointsRequest,
                                        Pagination::DescribeRouteServerEndpointsPaginationTraits>
  DescribeRouteServerEndpointsPaginator(const Model::DescribeRouteServerEndpointsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteServerEndpointsRequest,
                                                 Pagination::DescribeRouteServerEndpointsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeRouteServerPeers operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteServerPeersRequest,
                                        Pagination::DescribeRouteServerPeersPaginationTraits>
  DescribeRouteServerPeersPaginator(const Model::DescribeRouteServerPeersRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteServerPeersRequest,
                                                 Pagination::DescribeRouteServerPeersPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeRouteServers operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteServersRequest, Pagination::DescribeRouteServersPaginationTraits>
  DescribeRouteServersPaginator(const Model::DescribeRouteServersRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteServersRequest,
                                                 Pagination::DescribeRouteServersPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeRouteTables operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteTablesRequest, Pagination::DescribeRouteTablesPaginationTraits>
  DescribeRouteTablesPaginator(const Model::DescribeRouteTablesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeRouteTablesRequest,
                                                 Pagination::DescribeRouteTablesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeScheduledInstanceAvailability operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeScheduledInstanceAvailabilityRequest,
                                        Pagination::DescribeScheduledInstanceAvailabilityPaginationTraits>
  DescribeScheduledInstanceAvailabilityPaginator(const Model::DescribeScheduledInstanceAvailabilityRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeScheduledInstanceAvailabilityRequest,
                                                 Pagination::DescribeScheduledInstanceAvailabilityPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeScheduledInstances operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeScheduledInstancesRequest,
                                        Pagination::DescribeScheduledInstancesPaginationTraits>
  DescribeScheduledInstancesPaginator(const Model::DescribeScheduledInstancesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeScheduledInstancesRequest,
                                                 Pagination::DescribeScheduledInstancesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSecurityGroupRules operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSecurityGroupRulesRequest,
                                        Pagination::DescribeSecurityGroupRulesPaginationTraits>
  DescribeSecurityGroupRulesPaginator(const Model::DescribeSecurityGroupRulesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSecurityGroupRulesRequest,
                                                 Pagination::DescribeSecurityGroupRulesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSecurityGroups operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSecurityGroupsRequest,
                                        Pagination::DescribeSecurityGroupsPaginationTraits>
  DescribeSecurityGroupsPaginator(const Model::DescribeSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSecurityGroupsRequest,
                                                 Pagination::DescribeSecurityGroupsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSecurityGroupVpcAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSecurityGroupVpcAssociationsRequest,
                                        Pagination::DescribeSecurityGroupVpcAssociationsPaginationTraits>
  DescribeSecurityGroupVpcAssociationsPaginator(const Model::DescribeSecurityGroupVpcAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSecurityGroupVpcAssociationsRequest,
                                                 Pagination::DescribeSecurityGroupVpcAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSnapshots operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSnapshotsRequest, Pagination::DescribeSnapshotsPaginationTraits>
  DescribeSnapshotsPaginator(const Model::DescribeSnapshotsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                                 Pagination::DescribeSnapshotsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSnapshotTierStatus operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSnapshotTierStatusRequest,
                                        Pagination::DescribeSnapshotTierStatusPaginationTraits>
  DescribeSnapshotTierStatusPaginator(const Model::DescribeSnapshotTierStatusRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSnapshotTierStatusRequest,
                                                 Pagination::DescribeSnapshotTierStatusPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSpotFleetRequests operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSpotFleetRequestsRequest,
                                        Pagination::DescribeSpotFleetRequestsPaginationTraits>
  DescribeSpotFleetRequestsPaginator(const Model::DescribeSpotFleetRequestsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSpotFleetRequestsRequest,
                                                 Pagination::DescribeSpotFleetRequestsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSpotInstanceRequests operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSpotInstanceRequestsRequest,
                                        Pagination::DescribeSpotInstanceRequestsPaginationTraits>
  DescribeSpotInstanceRequestsPaginator(const Model::DescribeSpotInstanceRequestsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSpotInstanceRequestsRequest,
                                                 Pagination::DescribeSpotInstanceRequestsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSpotPriceHistory operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSpotPriceHistoryRequest,
                                        Pagination::DescribeSpotPriceHistoryPaginationTraits>
  DescribeSpotPriceHistoryPaginator(const Model::DescribeSpotPriceHistoryRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSpotPriceHistoryRequest,
                                                 Pagination::DescribeSpotPriceHistoryPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeStaleSecurityGroups operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeStaleSecurityGroupsRequest,
                                        Pagination::DescribeStaleSecurityGroupsPaginationTraits>
  DescribeStaleSecurityGroupsPaginator(const Model::DescribeStaleSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeStaleSecurityGroupsRequest,
                                                 Pagination::DescribeStaleSecurityGroupsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeStoreImageTasks operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeStoreImageTasksRequest,
                                        Pagination::DescribeStoreImageTasksPaginationTraits>
  DescribeStoreImageTasksPaginator(const Model::DescribeStoreImageTasksRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeStoreImageTasksRequest,
                                                 Pagination::DescribeStoreImageTasksPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeSubnets operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSubnetsRequest, Pagination::DescribeSubnetsPaginationTraits>
  DescribeSubnetsPaginator(const Model::DescribeSubnetsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeSubnetsRequest, Pagination::DescribeSubnetsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTags operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits>
  DescribeTagsPaginator(const Model::DescribeTagsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTrafficMirrorFilters operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrafficMirrorFiltersRequest,
                                        Pagination::DescribeTrafficMirrorFiltersPaginationTraits>
  DescribeTrafficMirrorFiltersPaginator(const Model::DescribeTrafficMirrorFiltersRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrafficMirrorFiltersRequest,
                                                 Pagination::DescribeTrafficMirrorFiltersPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTrafficMirrorSessions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrafficMirrorSessionsRequest,
                                        Pagination::DescribeTrafficMirrorSessionsPaginationTraits>
  DescribeTrafficMirrorSessionsPaginator(const Model::DescribeTrafficMirrorSessionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrafficMirrorSessionsRequest,
                                                 Pagination::DescribeTrafficMirrorSessionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTrafficMirrorTargets operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrafficMirrorTargetsRequest,
                                        Pagination::DescribeTrafficMirrorTargetsPaginationTraits>
  DescribeTrafficMirrorTargetsPaginator(const Model::DescribeTrafficMirrorTargetsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrafficMirrorTargetsRequest,
                                                 Pagination::DescribeTrafficMirrorTargetsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayAttachments operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayAttachmentsRequest,
                                        Pagination::DescribeTransitGatewayAttachmentsPaginationTraits>
  DescribeTransitGatewayAttachmentsPaginator(const Model::DescribeTransitGatewayAttachmentsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayAttachmentsRequest,
                                                 Pagination::DescribeTransitGatewayAttachmentsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayConnectPeers operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayConnectPeersRequest,
                                        Pagination::DescribeTransitGatewayConnectPeersPaginationTraits>
  DescribeTransitGatewayConnectPeersPaginator(const Model::DescribeTransitGatewayConnectPeersRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayConnectPeersRequest,
                                                 Pagination::DescribeTransitGatewayConnectPeersPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayConnects operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayConnectsRequest,
                                        Pagination::DescribeTransitGatewayConnectsPaginationTraits>
  DescribeTransitGatewayConnectsPaginator(const Model::DescribeTransitGatewayConnectsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayConnectsRequest,
                                                 Pagination::DescribeTransitGatewayConnectsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayMulticastDomains operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayMulticastDomainsRequest,
                                        Pagination::DescribeTransitGatewayMulticastDomainsPaginationTraits>
  DescribeTransitGatewayMulticastDomainsPaginator(const Model::DescribeTransitGatewayMulticastDomainsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayMulticastDomainsRequest,
                                                 Pagination::DescribeTransitGatewayMulticastDomainsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayPeeringAttachments operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayPeeringAttachmentsRequest,
                                        Pagination::DescribeTransitGatewayPeeringAttachmentsPaginationTraits>
  DescribeTransitGatewayPeeringAttachmentsPaginator(const Model::DescribeTransitGatewayPeeringAttachmentsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayPeeringAttachmentsRequest,
                                                 Pagination::DescribeTransitGatewayPeeringAttachmentsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayPolicyTables operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayPolicyTablesRequest,
                                        Pagination::DescribeTransitGatewayPolicyTablesPaginationTraits>
  DescribeTransitGatewayPolicyTablesPaginator(const Model::DescribeTransitGatewayPolicyTablesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayPolicyTablesRequest,
                                                 Pagination::DescribeTransitGatewayPolicyTablesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayRouteTableAnnouncements operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayRouteTableAnnouncementsRequest,
                                        Pagination::DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits>
  DescribeTransitGatewayRouteTableAnnouncementsPaginator(const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayRouteTableAnnouncementsRequest,
                                                 Pagination::DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayRouteTables operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayRouteTablesRequest,
                                        Pagination::DescribeTransitGatewayRouteTablesPaginationTraits>
  DescribeTransitGatewayRouteTablesPaginator(const Model::DescribeTransitGatewayRouteTablesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayRouteTablesRequest,
                                                 Pagination::DescribeTransitGatewayRouteTablesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGateways operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewaysRequest,
                                        Pagination::DescribeTransitGatewaysPaginationTraits>
  DescribeTransitGatewaysPaginator(const Model::DescribeTransitGatewaysRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewaysRequest,
                                                 Pagination::DescribeTransitGatewaysPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayVpcAttachments operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayVpcAttachmentsRequest,
                                        Pagination::DescribeTransitGatewayVpcAttachmentsPaginationTraits>
  DescribeTransitGatewayVpcAttachmentsPaginator(const Model::DescribeTransitGatewayVpcAttachmentsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTransitGatewayVpcAttachmentsRequest,
                                                 Pagination::DescribeTransitGatewayVpcAttachmentsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeTrunkInterfaceAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrunkInterfaceAssociationsRequest,
                                        Pagination::DescribeTrunkInterfaceAssociationsPaginationTraits>
  DescribeTrunkInterfaceAssociationsPaginator(const Model::DescribeTrunkInterfaceAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeTrunkInterfaceAssociationsRequest,
                                                 Pagination::DescribeTrunkInterfaceAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessEndpoints operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessEndpointsRequest,
                                        Pagination::DescribeVerifiedAccessEndpointsPaginationTraits>
  DescribeVerifiedAccessEndpointsPaginator(const Model::DescribeVerifiedAccessEndpointsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessEndpointsRequest,
                                                 Pagination::DescribeVerifiedAccessEndpointsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessGroups operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessGroupsRequest,
                                        Pagination::DescribeVerifiedAccessGroupsPaginationTraits>
  DescribeVerifiedAccessGroupsPaginator(const Model::DescribeVerifiedAccessGroupsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessGroupsRequest,
                                                 Pagination::DescribeVerifiedAccessGroupsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessInstanceLoggingConfigurations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest,
                                        Pagination::DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits>
  DescribeVerifiedAccessInstanceLoggingConfigurationsPaginator(
      const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest,
                                                 Pagination::DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessInstances operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessInstancesRequest,
                                        Pagination::DescribeVerifiedAccessInstancesPaginationTraits>
  DescribeVerifiedAccessInstancesPaginator(const Model::DescribeVerifiedAccessInstancesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessInstancesRequest,
                                                 Pagination::DescribeVerifiedAccessInstancesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessTrustProviders operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessTrustProvidersRequest,
                                        Pagination::DescribeVerifiedAccessTrustProvidersPaginationTraits>
  DescribeVerifiedAccessTrustProvidersPaginator(const Model::DescribeVerifiedAccessTrustProvidersRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVerifiedAccessTrustProvidersRequest,
                                                 Pagination::DescribeVerifiedAccessTrustProvidersPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVolumes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVolumesRequest, Pagination::DescribeVolumesPaginationTraits>
  DescribeVolumesPaginator(const Model::DescribeVolumesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVolumesRequest, Pagination::DescribeVolumesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVolumesModifications operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVolumesModificationsRequest,
                                        Pagination::DescribeVolumesModificationsPaginationTraits>
  DescribeVolumesModificationsPaginator(const Model::DescribeVolumesModificationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVolumesModificationsRequest,
                                                 Pagination::DescribeVolumesModificationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVolumeStatus operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVolumeStatusRequest, Pagination::DescribeVolumeStatusPaginationTraits>
  DescribeVolumeStatusPaginator(const Model::DescribeVolumeStatusRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVolumeStatusRequest,
                                                 Pagination::DescribeVolumeStatusPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcClassicLinkDnsSupport operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcClassicLinkDnsSupportRequest,
                                        Pagination::DescribeVpcClassicLinkDnsSupportPaginationTraits>
  DescribeVpcClassicLinkDnsSupportPaginator(const Model::DescribeVpcClassicLinkDnsSupportRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcClassicLinkDnsSupportRequest,
                                                 Pagination::DescribeVpcClassicLinkDnsSupportPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointConnectionNotifications operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointConnectionNotificationsRequest,
                                        Pagination::DescribeVpcEndpointConnectionNotificationsPaginationTraits>
  DescribeVpcEndpointConnectionNotificationsPaginator(const Model::DescribeVpcEndpointConnectionNotificationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointConnectionNotificationsRequest,
                                                 Pagination::DescribeVpcEndpointConnectionNotificationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointConnections operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointConnectionsRequest,
                                        Pagination::DescribeVpcEndpointConnectionsPaginationTraits>
  DescribeVpcEndpointConnectionsPaginator(const Model::DescribeVpcEndpointConnectionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointConnectionsRequest,
                                                 Pagination::DescribeVpcEndpointConnectionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpoints operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointsRequest, Pagination::DescribeVpcEndpointsPaginationTraits>
  DescribeVpcEndpointsPaginator(const Model::DescribeVpcEndpointsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointsRequest,
                                                 Pagination::DescribeVpcEndpointsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointServiceConfigurations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointServiceConfigurationsRequest,
                                        Pagination::DescribeVpcEndpointServiceConfigurationsPaginationTraits>
  DescribeVpcEndpointServiceConfigurationsPaginator(const Model::DescribeVpcEndpointServiceConfigurationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointServiceConfigurationsRequest,
                                                 Pagination::DescribeVpcEndpointServiceConfigurationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointServicePermissions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointServicePermissionsRequest,
                                        Pagination::DescribeVpcEndpointServicePermissionsPaginationTraits>
  DescribeVpcEndpointServicePermissionsPaginator(const Model::DescribeVpcEndpointServicePermissionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcEndpointServicePermissionsRequest,
                                                 Pagination::DescribeVpcEndpointServicePermissionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcPeeringConnections operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcPeeringConnectionsRequest,
                                        Pagination::DescribeVpcPeeringConnectionsPaginationTraits>
  DescribeVpcPeeringConnectionsPaginator(const Model::DescribeVpcPeeringConnectionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcPeeringConnectionsRequest,
                                                 Pagination::DescribeVpcPeeringConnectionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpcs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcsRequest, Pagination::DescribeVpcsPaginationTraits>
  DescribeVpcsPaginator(const Model::DescribeVpcsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpcsRequest, Pagination::DescribeVpcsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for DescribeVpnConcentrators operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpnConcentratorsRequest,
                                        Pagination::DescribeVpnConcentratorsPaginationTraits>
  DescribeVpnConcentratorsPaginator(const Model::DescribeVpnConcentratorsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::DescribeVpnConcentratorsRequest,
                                                 Pagination::DescribeVpnConcentratorsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetAssociatedIpv6PoolCidrs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetAssociatedIpv6PoolCidrsRequest,
                                        Pagination::GetAssociatedIpv6PoolCidrsPaginationTraits>
  GetAssociatedIpv6PoolCidrsPaginator(const Model::GetAssociatedIpv6PoolCidrsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetAssociatedIpv6PoolCidrsRequest,
                                                 Pagination::GetAssociatedIpv6PoolCidrsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetAwsNetworkPerformanceData operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetAwsNetworkPerformanceDataRequest,
                                        Pagination::GetAwsNetworkPerformanceDataPaginationTraits>
  GetAwsNetworkPerformanceDataPaginator(const Model::GetAwsNetworkPerformanceDataRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetAwsNetworkPerformanceDataRequest,
                                                 Pagination::GetAwsNetworkPerformanceDataPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetCapacityManagerMetricData operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetCapacityManagerMetricDataRequest,
                                        Pagination::GetCapacityManagerMetricDataPaginationTraits>
  GetCapacityManagerMetricDataPaginator(const Model::GetCapacityManagerMetricDataRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetCapacityManagerMetricDataRequest,
                                                 Pagination::GetCapacityManagerMetricDataPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetCapacityManagerMetricDimensions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetCapacityManagerMetricDimensionsRequest,
                                        Pagination::GetCapacityManagerMetricDimensionsPaginationTraits>
  GetCapacityManagerMetricDimensionsPaginator(const Model::GetCapacityManagerMetricDimensionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetCapacityManagerMetricDimensionsRequest,
                                                 Pagination::GetCapacityManagerMetricDimensionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetGroupsForCapacityReservation operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetGroupsForCapacityReservationRequest,
                                        Pagination::GetGroupsForCapacityReservationPaginationTraits>
  GetGroupsForCapacityReservationPaginator(const Model::GetGroupsForCapacityReservationRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetGroupsForCapacityReservationRequest,
                                                 Pagination::GetGroupsForCapacityReservationPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetInstanceTypesFromInstanceRequirements operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetInstanceTypesFromInstanceRequirementsRequest,
                                        Pagination::GetInstanceTypesFromInstanceRequirementsPaginationTraits>
  GetInstanceTypesFromInstanceRequirementsPaginator(const Model::GetInstanceTypesFromInstanceRequirementsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetInstanceTypesFromInstanceRequirementsRequest,
                                                 Pagination::GetInstanceTypesFromInstanceRequirementsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamAddressHistory operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamAddressHistoryRequest,
                                        Pagination::GetIpamAddressHistoryPaginationTraits>
  GetIpamAddressHistoryPaginator(const Model::GetIpamAddressHistoryRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamAddressHistoryRequest,
                                                 Pagination::GetIpamAddressHistoryPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamDiscoveredAccounts operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamDiscoveredAccountsRequest,
                                        Pagination::GetIpamDiscoveredAccountsPaginationTraits>
  GetIpamDiscoveredAccountsPaginator(const Model::GetIpamDiscoveredAccountsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamDiscoveredAccountsRequest,
                                                 Pagination::GetIpamDiscoveredAccountsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamDiscoveredResourceCidrs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamDiscoveredResourceCidrsRequest,
                                        Pagination::GetIpamDiscoveredResourceCidrsPaginationTraits>
  GetIpamDiscoveredResourceCidrsPaginator(const Model::GetIpamDiscoveredResourceCidrsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamDiscoveredResourceCidrsRequest,
                                                 Pagination::GetIpamDiscoveredResourceCidrsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamPoolAllocations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPoolAllocationsRequest,
                                        Pagination::GetIpamPoolAllocationsPaginationTraits>
  GetIpamPoolAllocationsPaginator(const Model::GetIpamPoolAllocationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPoolAllocationsRequest,
                                                 Pagination::GetIpamPoolAllocationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamPoolCidrs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPoolCidrsRequest, Pagination::GetIpamPoolCidrsPaginationTraits>
  GetIpamPoolCidrsPaginator(const Model::GetIpamPoolCidrsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPoolCidrsRequest,
                                                 Pagination::GetIpamPoolCidrsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamPrefixListResolverRules operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPrefixListResolverRulesRequest,
                                        Pagination::GetIpamPrefixListResolverRulesPaginationTraits>
  GetIpamPrefixListResolverRulesPaginator(const Model::GetIpamPrefixListResolverRulesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPrefixListResolverRulesRequest,
                                                 Pagination::GetIpamPrefixListResolverRulesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamPrefixListResolverVersionEntries operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPrefixListResolverVersionEntriesRequest,
                                        Pagination::GetIpamPrefixListResolverVersionEntriesPaginationTraits>
  GetIpamPrefixListResolverVersionEntriesPaginator(const Model::GetIpamPrefixListResolverVersionEntriesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPrefixListResolverVersionEntriesRequest,
                                                 Pagination::GetIpamPrefixListResolverVersionEntriesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamPrefixListResolverVersions operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPrefixListResolverVersionsRequest,
                                        Pagination::GetIpamPrefixListResolverVersionsPaginationTraits>
  GetIpamPrefixListResolverVersionsPaginator(const Model::GetIpamPrefixListResolverVersionsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamPrefixListResolverVersionsRequest,
                                                 Pagination::GetIpamPrefixListResolverVersionsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetIpamResourceCidrs operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamResourceCidrsRequest, Pagination::GetIpamResourceCidrsPaginationTraits>
  GetIpamResourceCidrsPaginator(const Model::GetIpamResourceCidrsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetIpamResourceCidrsRequest,
                                                 Pagination::GetIpamResourceCidrsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetManagedPrefixListAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetManagedPrefixListAssociationsRequest,
                                        Pagination::GetManagedPrefixListAssociationsPaginationTraits>
  GetManagedPrefixListAssociationsPaginator(const Model::GetManagedPrefixListAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetManagedPrefixListAssociationsRequest,
                                                 Pagination::GetManagedPrefixListAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetManagedPrefixListEntries operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetManagedPrefixListEntriesRequest,
                                        Pagination::GetManagedPrefixListEntriesPaginationTraits>
  GetManagedPrefixListEntriesPaginator(const Model::GetManagedPrefixListEntriesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetManagedPrefixListEntriesRequest,
                                                 Pagination::GetManagedPrefixListEntriesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetNetworkInsightsAccessScopeAnalysisFindings operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest,
                                        Pagination::GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits>
  GetNetworkInsightsAccessScopeAnalysisFindingsPaginator(const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest,
                                                 Pagination::GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetSecurityGroupsForVpc operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetSecurityGroupsForVpcRequest,
                                        Pagination::GetSecurityGroupsForVpcPaginationTraits>
  GetSecurityGroupsForVpcPaginator(const Model::GetSecurityGroupsForVpcRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetSecurityGroupsForVpcRequest,
                                                 Pagination::GetSecurityGroupsForVpcPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetSpotPlacementScores operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetSpotPlacementScoresRequest,
                                        Pagination::GetSpotPlacementScoresPaginationTraits>
  GetSpotPlacementScoresPaginator(const Model::GetSpotPlacementScoresRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetSpotPlacementScoresRequest,
                                                 Pagination::GetSpotPlacementScoresPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetTransitGatewayAttachmentPropagations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayAttachmentPropagationsRequest,
                                        Pagination::GetTransitGatewayAttachmentPropagationsPaginationTraits>
  GetTransitGatewayAttachmentPropagationsPaginator(const Model::GetTransitGatewayAttachmentPropagationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayAttachmentPropagationsRequest,
                                                 Pagination::GetTransitGatewayAttachmentPropagationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetTransitGatewayMulticastDomainAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayMulticastDomainAssociationsRequest,
                                        Pagination::GetTransitGatewayMulticastDomainAssociationsPaginationTraits>
  GetTransitGatewayMulticastDomainAssociationsPaginator(const Model::GetTransitGatewayMulticastDomainAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayMulticastDomainAssociationsRequest,
                                                 Pagination::GetTransitGatewayMulticastDomainAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetTransitGatewayPolicyTableAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayPolicyTableAssociationsRequest,
                                        Pagination::GetTransitGatewayPolicyTableAssociationsPaginationTraits>
  GetTransitGatewayPolicyTableAssociationsPaginator(const Model::GetTransitGatewayPolicyTableAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayPolicyTableAssociationsRequest,
                                                 Pagination::GetTransitGatewayPolicyTableAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetTransitGatewayPrefixListReferences operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayPrefixListReferencesRequest,
                                        Pagination::GetTransitGatewayPrefixListReferencesPaginationTraits>
  GetTransitGatewayPrefixListReferencesPaginator(const Model::GetTransitGatewayPrefixListReferencesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayPrefixListReferencesRequest,
                                                 Pagination::GetTransitGatewayPrefixListReferencesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetTransitGatewayRouteTableAssociations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayRouteTableAssociationsRequest,
                                        Pagination::GetTransitGatewayRouteTableAssociationsPaginationTraits>
  GetTransitGatewayRouteTableAssociationsPaginator(const Model::GetTransitGatewayRouteTableAssociationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayRouteTableAssociationsRequest,
                                                 Pagination::GetTransitGatewayRouteTableAssociationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetTransitGatewayRouteTablePropagations operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayRouteTablePropagationsRequest,
                                        Pagination::GetTransitGatewayRouteTablePropagationsPaginationTraits>
  GetTransitGatewayRouteTablePropagationsPaginator(const Model::GetTransitGatewayRouteTablePropagationsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetTransitGatewayRouteTablePropagationsRequest,
                                                 Pagination::GetTransitGatewayRouteTablePropagationsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for GetVpnConnectionDeviceTypes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetVpnConnectionDeviceTypesRequest,
                                        Pagination::GetVpnConnectionDeviceTypesPaginationTraits>
  GetVpnConnectionDeviceTypesPaginator(const Model::GetVpnConnectionDeviceTypesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::GetVpnConnectionDeviceTypesRequest,
                                                 Pagination::GetVpnConnectionDeviceTypesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for ListImagesInRecycleBin operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListImagesInRecycleBinRequest,
                                        Pagination::ListImagesInRecycleBinPaginationTraits>
  ListImagesInRecycleBinPaginator(const Model::ListImagesInRecycleBinRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListImagesInRecycleBinRequest,
                                                 Pagination::ListImagesInRecycleBinPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for ListSnapshotsInRecycleBin operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListSnapshotsInRecycleBinRequest,
                                        Pagination::ListSnapshotsInRecycleBinPaginationTraits>
  ListSnapshotsInRecycleBinPaginator(const Model::ListSnapshotsInRecycleBinRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListSnapshotsInRecycleBinRequest,
                                                 Pagination::ListSnapshotsInRecycleBinPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for SearchLocalGatewayRoutes operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::SearchLocalGatewayRoutesRequest,
                                        Pagination::SearchLocalGatewayRoutesPaginationTraits>
  SearchLocalGatewayRoutesPaginator(const Model::SearchLocalGatewayRoutesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::SearchLocalGatewayRoutesRequest,
                                                 Pagination::SearchLocalGatewayRoutesPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for SearchTransitGatewayMulticastGroups operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::SearchTransitGatewayMulticastGroupsRequest,
                                        Pagination::SearchTransitGatewayMulticastGroupsPaginationTraits>
  SearchTransitGatewayMulticastGroupsPaginator(const Model::SearchTransitGatewayMulticastGroupsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::SearchTransitGatewayMulticastGroupsRequest,
                                                 Pagination::SearchTransitGatewayMulticastGroupsPaginationTraits>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }
};
}  // namespace EC2
}  // namespace Aws
