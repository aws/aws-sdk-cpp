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
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddressesAttributeRequest,
                                    Pagination::DescribeAddressesAttributePaginationTraits<DerivedClient>>
  DescribeAddressesAttributePaginator(const Model::DescribeAddressesAttributeRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddressesAttributeRequest,
                                             Pagination::DescribeAddressesAttributePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAddressTransfers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddressTransfersRequest,
                                    Pagination::DescribeAddressTransfersPaginationTraits<DerivedClient>>
  DescribeAddressTransfersPaginator(const Model::DescribeAddressTransfersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddressTransfersRequest,
                                             Pagination::DescribeAddressTransfersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAwsNetworkPerformanceMetricSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest,
                                    Pagination::DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits<DerivedClient>>
  DescribeAwsNetworkPerformanceMetricSubscriptionsPaginator(const Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAwsNetworkPerformanceMetricSubscriptionsRequest,
                                             Pagination::DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeByoipCidrs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeByoipCidrsRequest,
                                    Pagination::DescribeByoipCidrsPaginationTraits<DerivedClient>>
  DescribeByoipCidrsPaginator(const Model::DescribeByoipCidrsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeByoipCidrsRequest,
                                             Pagination::DescribeByoipCidrsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockExtensionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockExtensionHistoryRequest,
                                    Pagination::DescribeCapacityBlockExtensionHistoryPaginationTraits<DerivedClient>>
  DescribeCapacityBlockExtensionHistoryPaginator(const Model::DescribeCapacityBlockExtensionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockExtensionHistoryRequest,
                                             Pagination::DescribeCapacityBlockExtensionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockExtensionOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockExtensionOfferingsRequest,
                                    Pagination::DescribeCapacityBlockExtensionOfferingsPaginationTraits<DerivedClient>>
  DescribeCapacityBlockExtensionOfferingsPaginator(const Model::DescribeCapacityBlockExtensionOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockExtensionOfferingsRequest,
                                             Pagination::DescribeCapacityBlockExtensionOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockOfferingsRequest,
                                    Pagination::DescribeCapacityBlockOfferingsPaginationTraits<DerivedClient>>
  DescribeCapacityBlockOfferingsPaginator(const Model::DescribeCapacityBlockOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockOfferingsRequest,
                                             Pagination::DescribeCapacityBlockOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlocks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlocksRequest,
                                    Pagination::DescribeCapacityBlocksPaginationTraits<DerivedClient>>
  DescribeCapacityBlocksPaginator(const Model::DescribeCapacityBlocksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlocksRequest,
                                             Pagination::DescribeCapacityBlocksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityBlockStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockStatusRequest,
                                    Pagination::DescribeCapacityBlockStatusPaginationTraits<DerivedClient>>
  DescribeCapacityBlockStatusPaginator(const Model::DescribeCapacityBlockStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityBlockStatusRequest,
                                             Pagination::DescribeCapacityBlockStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityManagerDataExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityManagerDataExportsRequest,
                                    Pagination::DescribeCapacityManagerDataExportsPaginationTraits<DerivedClient>>
  DescribeCapacityManagerDataExportsPaginator(const Model::DescribeCapacityManagerDataExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityManagerDataExportsRequest,
                                             Pagination::DescribeCapacityManagerDataExportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityReservationBillingRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityReservationBillingRequestsRequest,
                                    Pagination::DescribeCapacityReservationBillingRequestsPaginationTraits<DerivedClient>>
  DescribeCapacityReservationBillingRequestsPaginator(const Model::DescribeCapacityReservationBillingRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityReservationBillingRequestsRequest,
                                             Pagination::DescribeCapacityReservationBillingRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityReservationFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityReservationFleetsRequest,
                                    Pagination::DescribeCapacityReservationFleetsPaginationTraits<DerivedClient>>
  DescribeCapacityReservationFleetsPaginator(const Model::DescribeCapacityReservationFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityReservationFleetsRequest,
                                             Pagination::DescribeCapacityReservationFleetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCapacityReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityReservationsRequest,
                                    Pagination::DescribeCapacityReservationsPaginationTraits<DerivedClient>>
  DescribeCapacityReservationsPaginator(const Model::DescribeCapacityReservationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCapacityReservationsRequest,
                                             Pagination::DescribeCapacityReservationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCarrierGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCarrierGatewaysRequest,
                                    Pagination::DescribeCarrierGatewaysPaginationTraits<DerivedClient>>
  DescribeCarrierGatewaysPaginator(const Model::DescribeCarrierGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCarrierGatewaysRequest,
                                             Pagination::DescribeCarrierGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClassicLinkInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClassicLinkInstancesRequest,
                                    Pagination::DescribeClassicLinkInstancesPaginationTraits<DerivedClient>>
  DescribeClassicLinkInstancesPaginator(const Model::DescribeClassicLinkInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClassicLinkInstancesRequest,
                                             Pagination::DescribeClassicLinkInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClientVpnAuthorizationRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnAuthorizationRulesRequest,
                                    Pagination::DescribeClientVpnAuthorizationRulesPaginationTraits<DerivedClient>>
  DescribeClientVpnAuthorizationRulesPaginator(const Model::DescribeClientVpnAuthorizationRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnAuthorizationRulesRequest,
                                             Pagination::DescribeClientVpnAuthorizationRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClientVpnConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnConnectionsRequest,
                                    Pagination::DescribeClientVpnConnectionsPaginationTraits<DerivedClient>>
  DescribeClientVpnConnectionsPaginator(const Model::DescribeClientVpnConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnConnectionsRequest,
                                             Pagination::DescribeClientVpnConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClientVpnEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnEndpointsRequest,
                                    Pagination::DescribeClientVpnEndpointsPaginationTraits<DerivedClient>>
  DescribeClientVpnEndpointsPaginator(const Model::DescribeClientVpnEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnEndpointsRequest,
                                             Pagination::DescribeClientVpnEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClientVpnRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnRoutesRequest,
                                    Pagination::DescribeClientVpnRoutesPaginationTraits<DerivedClient>>
  DescribeClientVpnRoutesPaginator(const Model::DescribeClientVpnRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnRoutesRequest,
                                             Pagination::DescribeClientVpnRoutesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClientVpnTargetNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnTargetNetworksRequest,
                                    Pagination::DescribeClientVpnTargetNetworksPaginationTraits<DerivedClient>>
  DescribeClientVpnTargetNetworksPaginator(const Model::DescribeClientVpnTargetNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClientVpnTargetNetworksRequest,
                                             Pagination::DescribeClientVpnTargetNetworksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCoipPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCoipPoolsRequest,
                                    Pagination::DescribeCoipPoolsPaginationTraits<DerivedClient>>
  DescribeCoipPoolsPaginator(const Model::DescribeCoipPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCoipPoolsRequest,
                                             Pagination::DescribeCoipPoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDhcpOptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDhcpOptionsRequest,
                                    Pagination::DescribeDhcpOptionsPaginationTraits<DerivedClient>>
  DescribeDhcpOptionsPaginator(const Model::DescribeDhcpOptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDhcpOptionsRequest,
                                             Pagination::DescribeDhcpOptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEgressOnlyInternetGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEgressOnlyInternetGatewaysRequest,
                                    Pagination::DescribeEgressOnlyInternetGatewaysPaginationTraits<DerivedClient>>
  DescribeEgressOnlyInternetGatewaysPaginator(const Model::DescribeEgressOnlyInternetGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEgressOnlyInternetGatewaysRequest,
                                             Pagination::DescribeEgressOnlyInternetGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeExportImageTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExportImageTasksRequest,
                                    Pagination::DescribeExportImageTasksPaginationTraits<DerivedClient>>
  DescribeExportImageTasksPaginator(const Model::DescribeExportImageTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExportImageTasksRequest,
                                             Pagination::DescribeExportImageTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFastLaunchImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFastLaunchImagesRequest,
                                    Pagination::DescribeFastLaunchImagesPaginationTraits<DerivedClient>>
  DescribeFastLaunchImagesPaginator(const Model::DescribeFastLaunchImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFastLaunchImagesRequest,
                                             Pagination::DescribeFastLaunchImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFastSnapshotRestores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFastSnapshotRestoresRequest,
                                    Pagination::DescribeFastSnapshotRestoresPaginationTraits<DerivedClient>>
  DescribeFastSnapshotRestoresPaginator(const Model::DescribeFastSnapshotRestoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFastSnapshotRestoresRequest,
                                             Pagination::DescribeFastSnapshotRestoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetsRequest, Pagination::DescribeFleetsPaginationTraits<DerivedClient>>
  DescribeFleetsPaginator(const Model::DescribeFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetsRequest,
                                             Pagination::DescribeFleetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeFlowLogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFlowLogsRequest,
                                    Pagination::DescribeFlowLogsPaginationTraits<DerivedClient>>
  DescribeFlowLogsPaginator(const Model::DescribeFlowLogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFlowLogsRequest,
                                             Pagination::DescribeFlowLogsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeFpgaImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFpgaImagesRequest,
                                    Pagination::DescribeFpgaImagesPaginationTraits<DerivedClient>>
  DescribeFpgaImagesPaginator(const Model::DescribeFpgaImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFpgaImagesRequest,
                                             Pagination::DescribeFpgaImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeHostReservationOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHostReservationOfferingsRequest,
                                    Pagination::DescribeHostReservationOfferingsPaginationTraits<DerivedClient>>
  DescribeHostReservationOfferingsPaginator(const Model::DescribeHostReservationOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHostReservationOfferingsRequest,
                                             Pagination::DescribeHostReservationOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeHostReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHostReservationsRequest,
                                    Pagination::DescribeHostReservationsPaginationTraits<DerivedClient>>
  DescribeHostReservationsPaginator(const Model::DescribeHostReservationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHostReservationsRequest,
                                             Pagination::DescribeHostReservationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeHosts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHostsRequest, Pagination::DescribeHostsPaginationTraits<DerivedClient>>
  DescribeHostsPaginator(const Model::DescribeHostsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeHostsRequest,
                                             Pagination::DescribeHostsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for DescribeIamInstanceProfileAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIamInstanceProfileAssociationsRequest,
                                    Pagination::DescribeIamInstanceProfileAssociationsPaginationTraits<DerivedClient>>
  DescribeIamInstanceProfileAssociationsPaginator(const Model::DescribeIamInstanceProfileAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIamInstanceProfileAssociationsRequest,
                                             Pagination::DescribeIamInstanceProfileAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImageReferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageReferencesRequest,
                                    Pagination::DescribeImageReferencesPaginationTraits<DerivedClient>>
  DescribeImageReferencesPaginator(const Model::DescribeImageReferencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageReferencesRequest,
                                             Pagination::DescribeImageReferencesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagesRequest, Pagination::DescribeImagesPaginationTraits<DerivedClient>>
  DescribeImagesPaginator(const Model::DescribeImagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImagesRequest,
                                             Pagination::DescribeImagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeImageUsageReportEntries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageUsageReportEntriesRequest,
                                    Pagination::DescribeImageUsageReportEntriesPaginationTraits<DerivedClient>>
  DescribeImageUsageReportEntriesPaginator(const Model::DescribeImageUsageReportEntriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageUsageReportEntriesRequest,
                                             Pagination::DescribeImageUsageReportEntriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImageUsageReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageUsageReportsRequest,
                                    Pagination::DescribeImageUsageReportsPaginationTraits<DerivedClient>>
  DescribeImageUsageReportsPaginator(const Model::DescribeImageUsageReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImageUsageReportsRequest,
                                             Pagination::DescribeImageUsageReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImportImageTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImportImageTasksRequest,
                                    Pagination::DescribeImportImageTasksPaginationTraits<DerivedClient>>
  DescribeImportImageTasksPaginator(const Model::DescribeImportImageTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImportImageTasksRequest,
                                             Pagination::DescribeImportImageTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImportSnapshotTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImportSnapshotTasksRequest,
                                    Pagination::DescribeImportSnapshotTasksPaginationTraits<DerivedClient>>
  DescribeImportSnapshotTasksPaginator(const Model::DescribeImportSnapshotTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImportSnapshotTasksRequest,
                                             Pagination::DescribeImportSnapshotTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceConnectEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceConnectEndpointsRequest,
                                    Pagination::DescribeInstanceConnectEndpointsPaginationTraits<DerivedClient>>
  DescribeInstanceConnectEndpointsPaginator(const Model::DescribeInstanceConnectEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceConnectEndpointsRequest,
                                             Pagination::DescribeInstanceConnectEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceCreditSpecifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceCreditSpecificationsRequest,
                                    Pagination::DescribeInstanceCreditSpecificationsPaginationTraits<DerivedClient>>
  DescribeInstanceCreditSpecificationsPaginator(const Model::DescribeInstanceCreditSpecificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceCreditSpecificationsRequest,
                                             Pagination::DescribeInstanceCreditSpecificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceEventWindows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceEventWindowsRequest,
                                    Pagination::DescribeInstanceEventWindowsPaginationTraits<DerivedClient>>
  DescribeInstanceEventWindowsPaginator(const Model::DescribeInstanceEventWindowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceEventWindowsRequest,
                                             Pagination::DescribeInstanceEventWindowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceImageMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceImageMetadataRequest,
                                    Pagination::DescribeInstanceImageMetadataPaginationTraits<DerivedClient>>
  DescribeInstanceImageMetadataPaginator(const Model::DescribeInstanceImageMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceImageMetadataRequest,
                                             Pagination::DescribeInstanceImageMetadataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancesRequest,
                                    Pagination::DescribeInstancesPaginationTraits<DerivedClient>>
  DescribeInstancesPaginator(const Model::DescribeInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancesRequest,
                                             Pagination::DescribeInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceStatusRequest,
                                    Pagination::DescribeInstanceStatusPaginationTraits<DerivedClient>>
  DescribeInstanceStatusPaginator(const Model::DescribeInstanceStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceStatusRequest,
                                             Pagination::DescribeInstanceStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceTopology operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceTopologyRequest,
                                    Pagination::DescribeInstanceTopologyPaginationTraits<DerivedClient>>
  DescribeInstanceTopologyPaginator(const Model::DescribeInstanceTopologyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceTopologyRequest,
                                             Pagination::DescribeInstanceTopologyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceTypeOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceTypeOfferingsRequest,
                                    Pagination::DescribeInstanceTypeOfferingsPaginationTraits<DerivedClient>>
  DescribeInstanceTypeOfferingsPaginator(const Model::DescribeInstanceTypeOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceTypeOfferingsRequest,
                                             Pagination::DescribeInstanceTypeOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceTypesRequest,
                                    Pagination::DescribeInstanceTypesPaginationTraits<DerivedClient>>
  DescribeInstanceTypesPaginator(const Model::DescribeInstanceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceTypesRequest,
                                             Pagination::DescribeInstanceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInternetGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInternetGatewaysRequest,
                                    Pagination::DescribeInternetGatewaysPaginationTraits<DerivedClient>>
  DescribeInternetGatewaysPaginator(const Model::DescribeInternetGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInternetGatewaysRequest,
                                             Pagination::DescribeInternetGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpamPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamPoolsRequest,
                                    Pagination::DescribeIpamPoolsPaginationTraits<DerivedClient>>
  DescribeIpamPoolsPaginator(const Model::DescribeIpamPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamPoolsRequest,
                                             Pagination::DescribeIpamPoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpamPrefixListResolvers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamPrefixListResolversRequest,
                                    Pagination::DescribeIpamPrefixListResolversPaginationTraits<DerivedClient>>
  DescribeIpamPrefixListResolversPaginator(const Model::DescribeIpamPrefixListResolversRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamPrefixListResolversRequest,
                                             Pagination::DescribeIpamPrefixListResolversPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpamPrefixListResolverTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamPrefixListResolverTargetsRequest,
                                    Pagination::DescribeIpamPrefixListResolverTargetsPaginationTraits<DerivedClient>>
  DescribeIpamPrefixListResolverTargetsPaginator(const Model::DescribeIpamPrefixListResolverTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamPrefixListResolverTargetsRequest,
                                             Pagination::DescribeIpamPrefixListResolverTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpamResourceDiscoveries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamResourceDiscoveriesRequest,
                                    Pagination::DescribeIpamResourceDiscoveriesPaginationTraits<DerivedClient>>
  DescribeIpamResourceDiscoveriesPaginator(const Model::DescribeIpamResourceDiscoveriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamResourceDiscoveriesRequest,
                                             Pagination::DescribeIpamResourceDiscoveriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpamResourceDiscoveryAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamResourceDiscoveryAssociationsRequest,
                                    Pagination::DescribeIpamResourceDiscoveryAssociationsPaginationTraits<DerivedClient>>
  DescribeIpamResourceDiscoveryAssociationsPaginator(const Model::DescribeIpamResourceDiscoveryAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamResourceDiscoveryAssociationsRequest,
                                             Pagination::DescribeIpamResourceDiscoveryAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamsRequest, Pagination::DescribeIpamsPaginationTraits<DerivedClient>>
  DescribeIpamsPaginator(const Model::DescribeIpamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamsRequest,
                                             Pagination::DescribeIpamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for DescribeIpamScopes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamScopesRequest,
                                    Pagination::DescribeIpamScopesPaginationTraits<DerivedClient>>
  DescribeIpamScopesPaginator(const Model::DescribeIpamScopesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpamScopesRequest,
                                             Pagination::DescribeIpamScopesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeIpv6Pools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpv6PoolsRequest,
                                    Pagination::DescribeIpv6PoolsPaginationTraits<DerivedClient>>
  DescribeIpv6PoolsPaginator(const Model::DescribeIpv6PoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeIpv6PoolsRequest,
                                             Pagination::DescribeIpv6PoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLaunchTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchTemplatesRequest,
                                    Pagination::DescribeLaunchTemplatesPaginationTraits<DerivedClient>>
  DescribeLaunchTemplatesPaginator(const Model::DescribeLaunchTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchTemplatesRequest,
                                             Pagination::DescribeLaunchTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLaunchTemplateVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchTemplateVersionsRequest,
                                    Pagination::DescribeLaunchTemplateVersionsPaginationTraits<DerivedClient>>
  DescribeLaunchTemplateVersionsPaginator(const Model::DescribeLaunchTemplateVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchTemplateVersionsRequest,
                                             Pagination::DescribeLaunchTemplateVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayRouteTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayRouteTablesRequest,
                                    Pagination::DescribeLocalGatewayRouteTablesPaginationTraits<DerivedClient>>
  DescribeLocalGatewayRouteTablesPaginator(const Model::DescribeLocalGatewayRouteTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayRouteTablesRequest,
                                             Pagination::DescribeLocalGatewayRouteTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations operation
   */
  Aws::Utils::Pagination::Paginator<
      DerivedClient, Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest,
      Pagination::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits<DerivedClient>>
  DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginator(
      const Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<
        DerivedClient, Model::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest,
        Pagination::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayRouteTableVpcAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest,
                                    Pagination::DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits<DerivedClient>>
  DescribeLocalGatewayRouteTableVpcAssociationsPaginator(const Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayRouteTableVpcAssociationsRequest,
                                             Pagination::DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLocalGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewaysRequest,
                                    Pagination::DescribeLocalGatewaysPaginationTraits<DerivedClient>>
  DescribeLocalGatewaysPaginator(const Model::DescribeLocalGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewaysRequest,
                                             Pagination::DescribeLocalGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayVirtualInterfaceGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest,
                                    Pagination::DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits<DerivedClient>>
  DescribeLocalGatewayVirtualInterfaceGroupsPaginator(const Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfaceGroupsRequest,
                                             Pagination::DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLocalGatewayVirtualInterfaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfacesRequest,
                                    Pagination::DescribeLocalGatewayVirtualInterfacesPaginationTraits<DerivedClient>>
  DescribeLocalGatewayVirtualInterfacesPaginator(const Model::DescribeLocalGatewayVirtualInterfacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLocalGatewayVirtualInterfacesRequest,
                                             Pagination::DescribeLocalGatewayVirtualInterfacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMacHosts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMacHostsRequest,
                                    Pagination::DescribeMacHostsPaginationTraits<DerivedClient>>
  DescribeMacHostsPaginator(const Model::DescribeMacHostsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMacHostsRequest,
                                             Pagination::DescribeMacHostsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeMacModificationTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMacModificationTasksRequest,
                                    Pagination::DescribeMacModificationTasksPaginationTraits<DerivedClient>>
  DescribeMacModificationTasksPaginator(const Model::DescribeMacModificationTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMacModificationTasksRequest,
                                             Pagination::DescribeMacModificationTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeManagedPrefixLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeManagedPrefixListsRequest,
                                    Pagination::DescribeManagedPrefixListsPaginationTraits<DerivedClient>>
  DescribeManagedPrefixListsPaginator(const Model::DescribeManagedPrefixListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeManagedPrefixListsRequest,
                                             Pagination::DescribeManagedPrefixListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMovingAddresses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMovingAddressesRequest,
                                    Pagination::DescribeMovingAddressesPaginationTraits<DerivedClient>>
  DescribeMovingAddressesPaginator(const Model::DescribeMovingAddressesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMovingAddressesRequest,
                                             Pagination::DescribeMovingAddressesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNatGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNatGatewaysRequest,
                                    Pagination::DescribeNatGatewaysPaginationTraits<DerivedClient>>
  DescribeNatGatewaysPaginator(const Model::DescribeNatGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNatGatewaysRequest,
                                             Pagination::DescribeNatGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkAcls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkAclsRequest,
                                    Pagination::DescribeNetworkAclsPaginationTraits<DerivedClient>>
  DescribeNetworkAclsPaginator(const Model::DescribeNetworkAclsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkAclsRequest,
                                             Pagination::DescribeNetworkAclsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsAccessScopeAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopeAnalysesRequest,
                                    Pagination::DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits<DerivedClient>>
  DescribeNetworkInsightsAccessScopeAnalysesPaginator(const Model::DescribeNetworkInsightsAccessScopeAnalysesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopeAnalysesRequest,
                                             Pagination::DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsAccessScopes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopesRequest,
                                    Pagination::DescribeNetworkInsightsAccessScopesPaginationTraits<DerivedClient>>
  DescribeNetworkInsightsAccessScopesPaginator(const Model::DescribeNetworkInsightsAccessScopesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsAccessScopesRequest,
                                             Pagination::DescribeNetworkInsightsAccessScopesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsAnalysesRequest,
                                    Pagination::DescribeNetworkInsightsAnalysesPaginationTraits<DerivedClient>>
  DescribeNetworkInsightsAnalysesPaginator(const Model::DescribeNetworkInsightsAnalysesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsAnalysesRequest,
                                             Pagination::DescribeNetworkInsightsAnalysesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkInsightsPaths operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsPathsRequest,
                                    Pagination::DescribeNetworkInsightsPathsPaginationTraits<DerivedClient>>
  DescribeNetworkInsightsPathsPaginator(const Model::DescribeNetworkInsightsPathsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInsightsPathsRequest,
                                             Pagination::DescribeNetworkInsightsPathsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkInterfacePermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInterfacePermissionsRequest,
                                    Pagination::DescribeNetworkInterfacePermissionsPaginationTraits<DerivedClient>>
  DescribeNetworkInterfacePermissionsPaginator(const Model::DescribeNetworkInterfacePermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInterfacePermissionsRequest,
                                             Pagination::DescribeNetworkInterfacePermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNetworkInterfaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInterfacesRequest,
                                    Pagination::DescribeNetworkInterfacesPaginationTraits<DerivedClient>>
  DescribeNetworkInterfacesPaginator(const Model::DescribeNetworkInterfacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNetworkInterfacesRequest,
                                             Pagination::DescribeNetworkInterfacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePrefixLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePrefixListsRequest,
                                    Pagination::DescribePrefixListsPaginationTraits<DerivedClient>>
  DescribePrefixListsPaginator(const Model::DescribePrefixListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePrefixListsRequest,
                                             Pagination::DescribePrefixListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePrincipalIdFormat operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePrincipalIdFormatRequest,
                                    Pagination::DescribePrincipalIdFormatPaginationTraits<DerivedClient>>
  DescribePrincipalIdFormatPaginator(const Model::DescribePrincipalIdFormatRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePrincipalIdFormatRequest,
                                             Pagination::DescribePrincipalIdFormatPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePublicIpv4Pools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePublicIpv4PoolsRequest,
                                    Pagination::DescribePublicIpv4PoolsPaginationTraits<DerivedClient>>
  DescribePublicIpv4PoolsPaginator(const Model::DescribePublicIpv4PoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePublicIpv4PoolsRequest,
                                             Pagination::DescribePublicIpv4PoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplaceRootVolumeTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplaceRootVolumeTasksRequest,
                                    Pagination::DescribeReplaceRootVolumeTasksPaginationTraits<DerivedClient>>
  DescribeReplaceRootVolumeTasksPaginator(const Model::DescribeReplaceRootVolumeTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplaceRootVolumeTasksRequest,
                                             Pagination::DescribeReplaceRootVolumeTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedInstancesModifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstancesModificationsRequest,
                                    Pagination::DescribeReservedInstancesModificationsPaginationTraits<DerivedClient>>
  DescribeReservedInstancesModificationsPaginator(const Model::DescribeReservedInstancesModificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstancesModificationsRequest,
                                             Pagination::DescribeReservedInstancesModificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReservedInstancesOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstancesOfferingsRequest,
                                    Pagination::DescribeReservedInstancesOfferingsPaginationTraits<DerivedClient>>
  DescribeReservedInstancesOfferingsPaginator(const Model::DescribeReservedInstancesOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReservedInstancesOfferingsRequest,
                                             Pagination::DescribeReservedInstancesOfferingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRouteServerEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteServerEndpointsRequest,
                                    Pagination::DescribeRouteServerEndpointsPaginationTraits<DerivedClient>>
  DescribeRouteServerEndpointsPaginator(const Model::DescribeRouteServerEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteServerEndpointsRequest,
                                             Pagination::DescribeRouteServerEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRouteServerPeers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteServerPeersRequest,
                                    Pagination::DescribeRouteServerPeersPaginationTraits<DerivedClient>>
  DescribeRouteServerPeersPaginator(const Model::DescribeRouteServerPeersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteServerPeersRequest,
                                             Pagination::DescribeRouteServerPeersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRouteServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteServersRequest,
                                    Pagination::DescribeRouteServersPaginationTraits<DerivedClient>>
  DescribeRouteServersPaginator(const Model::DescribeRouteServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteServersRequest,
                                             Pagination::DescribeRouteServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRouteTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteTablesRequest,
                                    Pagination::DescribeRouteTablesPaginationTraits<DerivedClient>>
  DescribeRouteTablesPaginator(const Model::DescribeRouteTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRouteTablesRequest,
                                             Pagination::DescribeRouteTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScheduledInstanceAvailability operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledInstanceAvailabilityRequest,
                                    Pagination::DescribeScheduledInstanceAvailabilityPaginationTraits<DerivedClient>>
  DescribeScheduledInstanceAvailabilityPaginator(const Model::DescribeScheduledInstanceAvailabilityRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledInstanceAvailabilityRequest,
                                             Pagination::DescribeScheduledInstanceAvailabilityPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScheduledInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledInstancesRequest,
                                    Pagination::DescribeScheduledInstancesPaginationTraits<DerivedClient>>
  DescribeScheduledInstancesPaginator(const Model::DescribeScheduledInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledInstancesRequest,
                                             Pagination::DescribeScheduledInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSecondaryInterfaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecondaryInterfacesRequest,
                                    Pagination::DescribeSecondaryInterfacesPaginationTraits<DerivedClient>>
  DescribeSecondaryInterfacesPaginator(const Model::DescribeSecondaryInterfacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecondaryInterfacesRequest,
                                             Pagination::DescribeSecondaryInterfacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSecondaryNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecondaryNetworksRequest,
                                    Pagination::DescribeSecondaryNetworksPaginationTraits<DerivedClient>>
  DescribeSecondaryNetworksPaginator(const Model::DescribeSecondaryNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecondaryNetworksRequest,
                                             Pagination::DescribeSecondaryNetworksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSecondarySubnets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecondarySubnetsRequest,
                                    Pagination::DescribeSecondarySubnetsPaginationTraits<DerivedClient>>
  DescribeSecondarySubnetsPaginator(const Model::DescribeSecondarySubnetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecondarySubnetsRequest,
                                             Pagination::DescribeSecondarySubnetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSecurityGroupRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecurityGroupRulesRequest,
                                    Pagination::DescribeSecurityGroupRulesPaginationTraits<DerivedClient>>
  DescribeSecurityGroupRulesPaginator(const Model::DescribeSecurityGroupRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecurityGroupRulesRequest,
                                             Pagination::DescribeSecurityGroupRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecurityGroupsRequest,
                                    Pagination::DescribeSecurityGroupsPaginationTraits<DerivedClient>>
  DescribeSecurityGroupsPaginator(const Model::DescribeSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecurityGroupsRequest,
                                             Pagination::DescribeSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSecurityGroupVpcAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecurityGroupVpcAssociationsRequest,
                                    Pagination::DescribeSecurityGroupVpcAssociationsPaginationTraits<DerivedClient>>
  DescribeSecurityGroupVpcAssociationsPaginator(const Model::DescribeSecurityGroupVpcAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSecurityGroupVpcAssociationsRequest,
                                             Pagination::DescribeSecurityGroupVpcAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                    Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>
  DescribeSnapshotsPaginator(const Model::DescribeSnapshotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotsRequest,
                                             Pagination::DescribeSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSnapshotTierStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotTierStatusRequest,
                                    Pagination::DescribeSnapshotTierStatusPaginationTraits<DerivedClient>>
  DescribeSnapshotTierStatusPaginator(const Model::DescribeSnapshotTierStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSnapshotTierStatusRequest,
                                             Pagination::DescribeSnapshotTierStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSpotFleetRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpotFleetRequestsRequest,
                                    Pagination::DescribeSpotFleetRequestsPaginationTraits<DerivedClient>>
  DescribeSpotFleetRequestsPaginator(const Model::DescribeSpotFleetRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpotFleetRequestsRequest,
                                             Pagination::DescribeSpotFleetRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSpotInstanceRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpotInstanceRequestsRequest,
                                    Pagination::DescribeSpotInstanceRequestsPaginationTraits<DerivedClient>>
  DescribeSpotInstanceRequestsPaginator(const Model::DescribeSpotInstanceRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpotInstanceRequestsRequest,
                                             Pagination::DescribeSpotInstanceRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSpotPriceHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpotPriceHistoryRequest,
                                    Pagination::DescribeSpotPriceHistoryPaginationTraits<DerivedClient>>
  DescribeSpotPriceHistoryPaginator(const Model::DescribeSpotPriceHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSpotPriceHistoryRequest,
                                             Pagination::DescribeSpotPriceHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStaleSecurityGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStaleSecurityGroupsRequest,
                                    Pagination::DescribeStaleSecurityGroupsPaginationTraits<DerivedClient>>
  DescribeStaleSecurityGroupsPaginator(const Model::DescribeStaleSecurityGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStaleSecurityGroupsRequest,
                                             Pagination::DescribeStaleSecurityGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStoreImageTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStoreImageTasksRequest,
                                    Pagination::DescribeStoreImageTasksPaginationTraits<DerivedClient>>
  DescribeStoreImageTasksPaginator(const Model::DescribeStoreImageTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStoreImageTasksRequest,
                                             Pagination::DescribeStoreImageTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSubnets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubnetsRequest,
                                    Pagination::DescribeSubnetsPaginationTraits<DerivedClient>>
  DescribeSubnetsPaginator(const Model::DescribeSubnetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubnetsRequest,
                                             Pagination::DescribeSubnetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for DescribeTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits<DerivedClient>>
  DescribeTagsPaginator(const Model::DescribeTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest,
                                             Pagination::DescribeTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeTrafficMirrorFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficMirrorFiltersRequest,
                                    Pagination::DescribeTrafficMirrorFiltersPaginationTraits<DerivedClient>>
  DescribeTrafficMirrorFiltersPaginator(const Model::DescribeTrafficMirrorFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficMirrorFiltersRequest,
                                             Pagination::DescribeTrafficMirrorFiltersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrafficMirrorSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficMirrorSessionsRequest,
                                    Pagination::DescribeTrafficMirrorSessionsPaginationTraits<DerivedClient>>
  DescribeTrafficMirrorSessionsPaginator(const Model::DescribeTrafficMirrorSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficMirrorSessionsRequest,
                                             Pagination::DescribeTrafficMirrorSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrafficMirrorTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficMirrorTargetsRequest,
                                    Pagination::DescribeTrafficMirrorTargetsPaginationTraits<DerivedClient>>
  DescribeTrafficMirrorTargetsPaginator(const Model::DescribeTrafficMirrorTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficMirrorTargetsRequest,
                                             Pagination::DescribeTrafficMirrorTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayAttachmentsRequest,
                                    Pagination::DescribeTransitGatewayAttachmentsPaginationTraits<DerivedClient>>
  DescribeTransitGatewayAttachmentsPaginator(const Model::DescribeTransitGatewayAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayAttachmentsRequest,
                                             Pagination::DescribeTransitGatewayAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayConnectPeers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayConnectPeersRequest,
                                    Pagination::DescribeTransitGatewayConnectPeersPaginationTraits<DerivedClient>>
  DescribeTransitGatewayConnectPeersPaginator(const Model::DescribeTransitGatewayConnectPeersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayConnectPeersRequest,
                                             Pagination::DescribeTransitGatewayConnectPeersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayConnects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayConnectsRequest,
                                    Pagination::DescribeTransitGatewayConnectsPaginationTraits<DerivedClient>>
  DescribeTransitGatewayConnectsPaginator(const Model::DescribeTransitGatewayConnectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayConnectsRequest,
                                             Pagination::DescribeTransitGatewayConnectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayMulticastDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayMulticastDomainsRequest,
                                    Pagination::DescribeTransitGatewayMulticastDomainsPaginationTraits<DerivedClient>>
  DescribeTransitGatewayMulticastDomainsPaginator(const Model::DescribeTransitGatewayMulticastDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayMulticastDomainsRequest,
                                             Pagination::DescribeTransitGatewayMulticastDomainsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayPeeringAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayPeeringAttachmentsRequest,
                                    Pagination::DescribeTransitGatewayPeeringAttachmentsPaginationTraits<DerivedClient>>
  DescribeTransitGatewayPeeringAttachmentsPaginator(const Model::DescribeTransitGatewayPeeringAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayPeeringAttachmentsRequest,
                                             Pagination::DescribeTransitGatewayPeeringAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayPolicyTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayPolicyTablesRequest,
                                    Pagination::DescribeTransitGatewayPolicyTablesPaginationTraits<DerivedClient>>
  DescribeTransitGatewayPolicyTablesPaginator(const Model::DescribeTransitGatewayPolicyTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayPolicyTablesRequest,
                                             Pagination::DescribeTransitGatewayPolicyTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayRouteTableAnnouncements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayRouteTableAnnouncementsRequest,
                                    Pagination::DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits<DerivedClient>>
  DescribeTransitGatewayRouteTableAnnouncementsPaginator(const Model::DescribeTransitGatewayRouteTableAnnouncementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayRouteTableAnnouncementsRequest,
                                             Pagination::DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayRouteTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayRouteTablesRequest,
                                    Pagination::DescribeTransitGatewayRouteTablesPaginationTraits<DerivedClient>>
  DescribeTransitGatewayRouteTablesPaginator(const Model::DescribeTransitGatewayRouteTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayRouteTablesRequest,
                                             Pagination::DescribeTransitGatewayRouteTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewaysRequest,
                                    Pagination::DescribeTransitGatewaysPaginationTraits<DerivedClient>>
  DescribeTransitGatewaysPaginator(const Model::DescribeTransitGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewaysRequest,
                                             Pagination::DescribeTransitGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTransitGatewayVpcAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayVpcAttachmentsRequest,
                                    Pagination::DescribeTransitGatewayVpcAttachmentsPaginationTraits<DerivedClient>>
  DescribeTransitGatewayVpcAttachmentsPaginator(const Model::DescribeTransitGatewayVpcAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTransitGatewayVpcAttachmentsRequest,
                                             Pagination::DescribeTransitGatewayVpcAttachmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrunkInterfaceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrunkInterfaceAssociationsRequest,
                                    Pagination::DescribeTrunkInterfaceAssociationsPaginationTraits<DerivedClient>>
  DescribeTrunkInterfaceAssociationsPaginator(const Model::DescribeTrunkInterfaceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrunkInterfaceAssociationsRequest,
                                             Pagination::DescribeTrunkInterfaceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessEndpointsRequest,
                                    Pagination::DescribeVerifiedAccessEndpointsPaginationTraits<DerivedClient>>
  DescribeVerifiedAccessEndpointsPaginator(const Model::DescribeVerifiedAccessEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessEndpointsRequest,
                                             Pagination::DescribeVerifiedAccessEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessGroupsRequest,
                                    Pagination::DescribeVerifiedAccessGroupsPaginationTraits<DerivedClient>>
  DescribeVerifiedAccessGroupsPaginator(const Model::DescribeVerifiedAccessGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessGroupsRequest,
                                             Pagination::DescribeVerifiedAccessGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessInstanceLoggingConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest,
                                    Pagination::DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits<DerivedClient>>
  DescribeVerifiedAccessInstanceLoggingConfigurationsPaginator(
      const Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<
        DerivedClient, Model::DescribeVerifiedAccessInstanceLoggingConfigurationsRequest,
        Pagination::DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessInstancesRequest,
                                    Pagination::DescribeVerifiedAccessInstancesPaginationTraits<DerivedClient>>
  DescribeVerifiedAccessInstancesPaginator(const Model::DescribeVerifiedAccessInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessInstancesRequest,
                                             Pagination::DescribeVerifiedAccessInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVerifiedAccessTrustProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessTrustProvidersRequest,
                                    Pagination::DescribeVerifiedAccessTrustProvidersPaginationTraits<DerivedClient>>
  DescribeVerifiedAccessTrustProvidersPaginator(const Model::DescribeVerifiedAccessTrustProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVerifiedAccessTrustProvidersRequest,
                                             Pagination::DescribeVerifiedAccessTrustProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVolumes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumesRequest,
                                    Pagination::DescribeVolumesPaginationTraits<DerivedClient>>
  DescribeVolumesPaginator(const Model::DescribeVolumesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumesRequest,
                                             Pagination::DescribeVolumesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for DescribeVolumesModifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumesModificationsRequest,
                                    Pagination::DescribeVolumesModificationsPaginationTraits<DerivedClient>>
  DescribeVolumesModificationsPaginator(const Model::DescribeVolumesModificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumesModificationsRequest,
                                             Pagination::DescribeVolumesModificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVolumeStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumeStatusRequest,
                                    Pagination::DescribeVolumeStatusPaginationTraits<DerivedClient>>
  DescribeVolumeStatusPaginator(const Model::DescribeVolumeStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVolumeStatusRequest,
                                             Pagination::DescribeVolumeStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcClassicLinkDnsSupport operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcClassicLinkDnsSupportRequest,
                                    Pagination::DescribeVpcClassicLinkDnsSupportPaginationTraits<DerivedClient>>
  DescribeVpcClassicLinkDnsSupportPaginator(const Model::DescribeVpcClassicLinkDnsSupportRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcClassicLinkDnsSupportRequest,
                                             Pagination::DescribeVpcClassicLinkDnsSupportPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointConnectionNotifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointConnectionNotificationsRequest,
                                    Pagination::DescribeVpcEndpointConnectionNotificationsPaginationTraits<DerivedClient>>
  DescribeVpcEndpointConnectionNotificationsPaginator(const Model::DescribeVpcEndpointConnectionNotificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointConnectionNotificationsRequest,
                                             Pagination::DescribeVpcEndpointConnectionNotificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointConnectionsRequest,
                                    Pagination::DescribeVpcEndpointConnectionsPaginationTraits<DerivedClient>>
  DescribeVpcEndpointConnectionsPaginator(const Model::DescribeVpcEndpointConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointConnectionsRequest,
                                             Pagination::DescribeVpcEndpointConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointsRequest,
                                    Pagination::DescribeVpcEndpointsPaginationTraits<DerivedClient>>
  DescribeVpcEndpointsPaginator(const Model::DescribeVpcEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointsRequest,
                                             Pagination::DescribeVpcEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointServiceConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointServiceConfigurationsRequest,
                                    Pagination::DescribeVpcEndpointServiceConfigurationsPaginationTraits<DerivedClient>>
  DescribeVpcEndpointServiceConfigurationsPaginator(const Model::DescribeVpcEndpointServiceConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointServiceConfigurationsRequest,
                                             Pagination::DescribeVpcEndpointServiceConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcEndpointServicePermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointServicePermissionsRequest,
                                    Pagination::DescribeVpcEndpointServicePermissionsPaginationTraits<DerivedClient>>
  DescribeVpcEndpointServicePermissionsPaginator(const Model::DescribeVpcEndpointServicePermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcEndpointServicePermissionsRequest,
                                             Pagination::DescribeVpcEndpointServicePermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcPeeringConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcPeeringConnectionsRequest,
                                    Pagination::DescribeVpcPeeringConnectionsPaginationTraits<DerivedClient>>
  DescribeVpcPeeringConnectionsPaginator(const Model::DescribeVpcPeeringConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcPeeringConnectionsRequest,
                                             Pagination::DescribeVpcPeeringConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeVpcs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcsRequest, Pagination::DescribeVpcsPaginationTraits<DerivedClient>>
  DescribeVpcsPaginator(const Model::DescribeVpcsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpcsRequest,
                                             Pagination::DescribeVpcsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeVpnConcentrators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpnConcentratorsRequest,
                                    Pagination::DescribeVpnConcentratorsPaginationTraits<DerivedClient>>
  DescribeVpnConcentratorsPaginator(const Model::DescribeVpnConcentratorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeVpnConcentratorsRequest,
                                             Pagination::DescribeVpnConcentratorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAssociatedIpv6PoolCidrs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAssociatedIpv6PoolCidrsRequest,
                                    Pagination::GetAssociatedIpv6PoolCidrsPaginationTraits<DerivedClient>>
  GetAssociatedIpv6PoolCidrsPaginator(const Model::GetAssociatedIpv6PoolCidrsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAssociatedIpv6PoolCidrsRequest,
                                             Pagination::GetAssociatedIpv6PoolCidrsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAwsNetworkPerformanceData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAwsNetworkPerformanceDataRequest,
                                    Pagination::GetAwsNetworkPerformanceDataPaginationTraits<DerivedClient>>
  GetAwsNetworkPerformanceDataPaginator(const Model::GetAwsNetworkPerformanceDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAwsNetworkPerformanceDataRequest,
                                             Pagination::GetAwsNetworkPerformanceDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCapacityManagerMetricData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCapacityManagerMetricDataRequest,
                                    Pagination::GetCapacityManagerMetricDataPaginationTraits<DerivedClient>>
  GetCapacityManagerMetricDataPaginator(const Model::GetCapacityManagerMetricDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCapacityManagerMetricDataRequest,
                                             Pagination::GetCapacityManagerMetricDataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCapacityManagerMetricDimensions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCapacityManagerMetricDimensionsRequest,
                                    Pagination::GetCapacityManagerMetricDimensionsPaginationTraits<DerivedClient>>
  GetCapacityManagerMetricDimensionsPaginator(const Model::GetCapacityManagerMetricDimensionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCapacityManagerMetricDimensionsRequest,
                                             Pagination::GetCapacityManagerMetricDimensionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetGroupsForCapacityReservation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetGroupsForCapacityReservationRequest,
                                    Pagination::GetGroupsForCapacityReservationPaginationTraits<DerivedClient>>
  GetGroupsForCapacityReservationPaginator(const Model::GetGroupsForCapacityReservationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetGroupsForCapacityReservationRequest,
                                             Pagination::GetGroupsForCapacityReservationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetInstanceTypesFromInstanceRequirements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInstanceTypesFromInstanceRequirementsRequest,
                                    Pagination::GetInstanceTypesFromInstanceRequirementsPaginationTraits<DerivedClient>>
  GetInstanceTypesFromInstanceRequirementsPaginator(const Model::GetInstanceTypesFromInstanceRequirementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInstanceTypesFromInstanceRequirementsRequest,
                                             Pagination::GetInstanceTypesFromInstanceRequirementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamAddressHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamAddressHistoryRequest,
                                    Pagination::GetIpamAddressHistoryPaginationTraits<DerivedClient>>
  GetIpamAddressHistoryPaginator(const Model::GetIpamAddressHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamAddressHistoryRequest,
                                             Pagination::GetIpamAddressHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamDiscoveredAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamDiscoveredAccountsRequest,
                                    Pagination::GetIpamDiscoveredAccountsPaginationTraits<DerivedClient>>
  GetIpamDiscoveredAccountsPaginator(const Model::GetIpamDiscoveredAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamDiscoveredAccountsRequest,
                                             Pagination::GetIpamDiscoveredAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamDiscoveredResourceCidrs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamDiscoveredResourceCidrsRequest,
                                    Pagination::GetIpamDiscoveredResourceCidrsPaginationTraits<DerivedClient>>
  GetIpamDiscoveredResourceCidrsPaginator(const Model::GetIpamDiscoveredResourceCidrsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamDiscoveredResourceCidrsRequest,
                                             Pagination::GetIpamDiscoveredResourceCidrsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamPoolAllocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPoolAllocationsRequest,
                                    Pagination::GetIpamPoolAllocationsPaginationTraits<DerivedClient>>
  GetIpamPoolAllocationsPaginator(const Model::GetIpamPoolAllocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPoolAllocationsRequest,
                                             Pagination::GetIpamPoolAllocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamPoolCidrs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPoolCidrsRequest,
                                    Pagination::GetIpamPoolCidrsPaginationTraits<DerivedClient>>
  GetIpamPoolCidrsPaginator(const Model::GetIpamPoolCidrsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPoolCidrsRequest,
                                             Pagination::GetIpamPoolCidrsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetIpamPrefixListResolverRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPrefixListResolverRulesRequest,
                                    Pagination::GetIpamPrefixListResolverRulesPaginationTraits<DerivedClient>>
  GetIpamPrefixListResolverRulesPaginator(const Model::GetIpamPrefixListResolverRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPrefixListResolverRulesRequest,
                                             Pagination::GetIpamPrefixListResolverRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamPrefixListResolverVersionEntries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPrefixListResolverVersionEntriesRequest,
                                    Pagination::GetIpamPrefixListResolverVersionEntriesPaginationTraits<DerivedClient>>
  GetIpamPrefixListResolverVersionEntriesPaginator(const Model::GetIpamPrefixListResolverVersionEntriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPrefixListResolverVersionEntriesRequest,
                                             Pagination::GetIpamPrefixListResolverVersionEntriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamPrefixListResolverVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPrefixListResolverVersionsRequest,
                                    Pagination::GetIpamPrefixListResolverVersionsPaginationTraits<DerivedClient>>
  GetIpamPrefixListResolverVersionsPaginator(const Model::GetIpamPrefixListResolverVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamPrefixListResolverVersionsRequest,
                                             Pagination::GetIpamPrefixListResolverVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetIpamResourceCidrs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamResourceCidrsRequest,
                                    Pagination::GetIpamResourceCidrsPaginationTraits<DerivedClient>>
  GetIpamResourceCidrsPaginator(const Model::GetIpamResourceCidrsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetIpamResourceCidrsRequest,
                                             Pagination::GetIpamResourceCidrsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetManagedPrefixListAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetManagedPrefixListAssociationsRequest,
                                    Pagination::GetManagedPrefixListAssociationsPaginationTraits<DerivedClient>>
  GetManagedPrefixListAssociationsPaginator(const Model::GetManagedPrefixListAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetManagedPrefixListAssociationsRequest,
                                             Pagination::GetManagedPrefixListAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetManagedPrefixListEntries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetManagedPrefixListEntriesRequest,
                                    Pagination::GetManagedPrefixListEntriesPaginationTraits<DerivedClient>>
  GetManagedPrefixListEntriesPaginator(const Model::GetManagedPrefixListEntriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetManagedPrefixListEntriesRequest,
                                             Pagination::GetManagedPrefixListEntriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetNetworkInsightsAccessScopeAnalysisFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest,
                                    Pagination::GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits<DerivedClient>>
  GetNetworkInsightsAccessScopeAnalysisFindingsPaginator(const Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkInsightsAccessScopeAnalysisFindingsRequest,
                                             Pagination::GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSecurityGroupsForVpc operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSecurityGroupsForVpcRequest,
                                    Pagination::GetSecurityGroupsForVpcPaginationTraits<DerivedClient>>
  GetSecurityGroupsForVpcPaginator(const Model::GetSecurityGroupsForVpcRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSecurityGroupsForVpcRequest,
                                             Pagination::GetSecurityGroupsForVpcPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSpotPlacementScores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSpotPlacementScoresRequest,
                                    Pagination::GetSpotPlacementScoresPaginationTraits<DerivedClient>>
  GetSpotPlacementScoresPaginator(const Model::GetSpotPlacementScoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSpotPlacementScoresRequest,
                                             Pagination::GetSpotPlacementScoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayAttachmentPropagations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayAttachmentPropagationsRequest,
                                    Pagination::GetTransitGatewayAttachmentPropagationsPaginationTraits<DerivedClient>>
  GetTransitGatewayAttachmentPropagationsPaginator(const Model::GetTransitGatewayAttachmentPropagationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayAttachmentPropagationsRequest,
                                             Pagination::GetTransitGatewayAttachmentPropagationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayMulticastDomainAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayMulticastDomainAssociationsRequest,
                                    Pagination::GetTransitGatewayMulticastDomainAssociationsPaginationTraits<DerivedClient>>
  GetTransitGatewayMulticastDomainAssociationsPaginator(const Model::GetTransitGatewayMulticastDomainAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayMulticastDomainAssociationsRequest,
                                             Pagination::GetTransitGatewayMulticastDomainAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayPolicyTableAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayPolicyTableAssociationsRequest,
                                    Pagination::GetTransitGatewayPolicyTableAssociationsPaginationTraits<DerivedClient>>
  GetTransitGatewayPolicyTableAssociationsPaginator(const Model::GetTransitGatewayPolicyTableAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayPolicyTableAssociationsRequest,
                                             Pagination::GetTransitGatewayPolicyTableAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayPrefixListReferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayPrefixListReferencesRequest,
                                    Pagination::GetTransitGatewayPrefixListReferencesPaginationTraits<DerivedClient>>
  GetTransitGatewayPrefixListReferencesPaginator(const Model::GetTransitGatewayPrefixListReferencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayPrefixListReferencesRequest,
                                             Pagination::GetTransitGatewayPrefixListReferencesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayRouteTableAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayRouteTableAssociationsRequest,
                                    Pagination::GetTransitGatewayRouteTableAssociationsPaginationTraits<DerivedClient>>
  GetTransitGatewayRouteTableAssociationsPaginator(const Model::GetTransitGatewayRouteTableAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayRouteTableAssociationsRequest,
                                             Pagination::GetTransitGatewayRouteTableAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayRouteTablePropagations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayRouteTablePropagationsRequest,
                                    Pagination::GetTransitGatewayRouteTablePropagationsPaginationTraits<DerivedClient>>
  GetTransitGatewayRouteTablePropagationsPaginator(const Model::GetTransitGatewayRouteTablePropagationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayRouteTablePropagationsRequest,
                                             Pagination::GetTransitGatewayRouteTablePropagationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetVpnConnectionDeviceTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVpnConnectionDeviceTypesRequest,
                                    Pagination::GetVpnConnectionDeviceTypesPaginationTraits<DerivedClient>>
  GetVpnConnectionDeviceTypesPaginator(const Model::GetVpnConnectionDeviceTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetVpnConnectionDeviceTypesRequest,
                                             Pagination::GetVpnConnectionDeviceTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImagesInRecycleBin operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesInRecycleBinRequest,
                                    Pagination::ListImagesInRecycleBinPaginationTraits<DerivedClient>>
  ListImagesInRecycleBinPaginator(const Model::ListImagesInRecycleBinRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesInRecycleBinRequest,
                                             Pagination::ListImagesInRecycleBinPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSnapshotsInRecycleBin operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotsInRecycleBinRequest,
                                    Pagination::ListSnapshotsInRecycleBinPaginationTraits<DerivedClient>>
  ListSnapshotsInRecycleBinPaginator(const Model::ListSnapshotsInRecycleBinRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSnapshotsInRecycleBinRequest,
                                             Pagination::ListSnapshotsInRecycleBinPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchLocalGatewayRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchLocalGatewayRoutesRequest,
                                    Pagination::SearchLocalGatewayRoutesPaginationTraits<DerivedClient>>
  SearchLocalGatewayRoutesPaginator(const Model::SearchLocalGatewayRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchLocalGatewayRoutesRequest,
                                             Pagination::SearchLocalGatewayRoutesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchTransitGatewayMulticastGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTransitGatewayMulticastGroupsRequest,
                                    Pagination::SearchTransitGatewayMulticastGroupsPaginationTraits<DerivedClient>>
  SearchTransitGatewayMulticastGroupsPaginator(const Model::SearchTransitGatewayMulticastGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTransitGatewayMulticastGroupsRequest,
                                             Pagination::SearchTransitGatewayMulticastGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchTransitGatewayRoutes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTransitGatewayRoutesRequest,
                                    Pagination::SearchTransitGatewayRoutesPaginationTraits<DerivedClient>>
  SearchTransitGatewayRoutesPaginator(const Model::SearchTransitGatewayRoutesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTransitGatewayRoutesRequest,
                                             Pagination::SearchTransitGatewayRoutesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EC2
}  // namespace Aws
