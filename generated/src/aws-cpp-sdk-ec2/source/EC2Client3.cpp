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
#include <aws/ec2/model/DescribeImageReferencesRequest.h>
#include <aws/ec2/model/DescribeImageUsageReportEntriesRequest.h>
#include <aws/ec2/model/DescribeImageUsageReportsRequest.h>
#include <aws/ec2/model/DescribeImagesRequest.h>
#include <aws/ec2/model/DescribeImportImageTasksRequest.h>
#include <aws/ec2/model/DescribeImportSnapshotTasksRequest.h>
#include <aws/ec2/model/DescribeInstanceAttributeRequest.h>
#include <aws/ec2/model/DescribeInstanceConnectEndpointsRequest.h>
#include <aws/ec2/model/DescribeInstanceCreditSpecificationsRequest.h>
#include <aws/ec2/model/DescribeInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/DescribeInstanceEventWindowsRequest.h>
#include <aws/ec2/model/DescribeInstanceImageMetadataRequest.h>
#include <aws/ec2/model/DescribeInstanceSqlHaHistoryStatesRequest.h>
#include <aws/ec2/model/DescribeInstanceSqlHaStatesRequest.h>
#include <aws/ec2/model/DescribeInstanceStatusRequest.h>
#include <aws/ec2/model/DescribeInstanceTopologyRequest.h>
#include <aws/ec2/model/DescribeInstanceTypeOfferingsRequest.h>
#include <aws/ec2/model/DescribeInstanceTypesRequest.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeIpamByoasnRequest.h>
#include <aws/ec2/model/DescribeIpamExternalResourceVerificationTokensRequest.h>
#include <aws/ec2/model/DescribeIpamPoliciesRequest.h>
#include <aws/ec2/model/DescribeIpamPoolsRequest.h>
#include <aws/ec2/model/DescribeIpamPrefixListResolverTargetsRequest.h>
#include <aws/ec2/model/DescribeIpamPrefixListResolversRequest.h>
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
#include <aws/ec2/model/DescribeLockedSnapshotsRequest.h>
#include <aws/ec2/model/DescribeMacHostsRequest.h>
#include <aws/ec2/model/DescribeMacModificationTasksRequest.h>
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
#include <aws/ec2/model/DescribeOutpostLagsRequest.h>
#include <aws/ec2/model/DescribePlacementGroupsRequest.h>
#include <aws/ec2/model/DescribePrefixListsRequest.h>
#include <aws/ec2/model/DescribePrincipalIdFormatRequest.h>
#include <aws/ec2/model/DescribePublicIpv4PoolsRequest.h>
#include <aws/ec2/model/DescribeRegionsRequest.h>
#include <aws/ec2/model/DescribeReplaceRootVolumeTasksRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesListingsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesRequest.h>
#include <aws/ec2/model/DescribeRouteServerEndpointsRequest.h>
#include <aws/ec2/model/DescribeRouteServerPeersRequest.h>
#include <aws/ec2/model/DescribeRouteServersRequest.h>
#include <aws/ec2/model/DescribeRouteTablesRequest.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityRequest.h>
#include <aws/ec2/model/DescribeScheduledInstancesRequest.h>
#include <aws/ec2/model/DescribeSecondaryInterfacesRequest.h>
#include <aws/ec2/model/DescribeSecondaryNetworksRequest.h>
#include <aws/ec2/model/DescribeSecondarySubnetsRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupReferencesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupRulesRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupVpcAssociationsRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeServiceLinkVirtualInterfacesRequest.h>
#include <aws/ec2/model/DescribeSnapshotAttributeRequest.h>
#include <aws/ec2/model/DescribeSnapshotTierStatusRequest.h>
#include <aws/ec2/model/DescribeSnapshotsRequest.h>
#include <aws/ec2/model/DescribeSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DescribeSpotFleetInstancesRequest.h>
#include <aws/ec2/model/DescribeSpotFleetRequestHistoryRequest.h>
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

DescribeFastLaunchImagesOutcome EC2Client::DescribeFastLaunchImages(const DescribeFastLaunchImagesRequest& request) const {
  return DescribeFastLaunchImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFastSnapshotRestoresOutcome EC2Client::DescribeFastSnapshotRestores(const DescribeFastSnapshotRestoresRequest& request) const {
  return DescribeFastSnapshotRestoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetHistoryOutcome EC2Client::DescribeFleetHistory(const DescribeFleetHistoryRequest& request) const {
  return DescribeFleetHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetInstancesOutcome EC2Client::DescribeFleetInstances(const DescribeFleetInstancesRequest& request) const {
  return DescribeFleetInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetsOutcome EC2Client::DescribeFleets(const DescribeFleetsRequest& request) const {
  return DescribeFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFlowLogsOutcome EC2Client::DescribeFlowLogs(const DescribeFlowLogsRequest& request) const {
  return DescribeFlowLogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFpgaImageAttributeOutcome EC2Client::DescribeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest& request) const {
  return DescribeFpgaImageAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFpgaImagesOutcome EC2Client::DescribeFpgaImages(const DescribeFpgaImagesRequest& request) const {
  return DescribeFpgaImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHostReservationOfferingsOutcome EC2Client::DescribeHostReservationOfferings(
    const DescribeHostReservationOfferingsRequest& request) const {
  return DescribeHostReservationOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHostReservationsOutcome EC2Client::DescribeHostReservations(const DescribeHostReservationsRequest& request) const {
  return DescribeHostReservationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHostsOutcome EC2Client::DescribeHosts(const DescribeHostsRequest& request) const {
  return DescribeHostsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIamInstanceProfileAssociationsOutcome EC2Client::DescribeIamInstanceProfileAssociations(
    const DescribeIamInstanceProfileAssociationsRequest& request) const {
  return DescribeIamInstanceProfileAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIdFormatOutcome EC2Client::DescribeIdFormat(const DescribeIdFormatRequest& request) const {
  return DescribeIdFormatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIdentityIdFormatOutcome EC2Client::DescribeIdentityIdFormat(const DescribeIdentityIdFormatRequest& request) const {
  return DescribeIdentityIdFormatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageAttributeOutcome EC2Client::DescribeImageAttribute(const DescribeImageAttributeRequest& request) const {
  return DescribeImageAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageReferencesOutcome EC2Client::DescribeImageReferences(const DescribeImageReferencesRequest& request) const {
  return DescribeImageReferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageUsageReportEntriesOutcome EC2Client::DescribeImageUsageReportEntries(
    const DescribeImageUsageReportEntriesRequest& request) const {
  return DescribeImageUsageReportEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImageUsageReportsOutcome EC2Client::DescribeImageUsageReports(const DescribeImageUsageReportsRequest& request) const {
  return DescribeImageUsageReportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImagesOutcome EC2Client::DescribeImages(const DescribeImagesRequest& request) const {
  return DescribeImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImportImageTasksOutcome EC2Client::DescribeImportImageTasks(const DescribeImportImageTasksRequest& request) const {
  return DescribeImportImageTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeImportSnapshotTasksOutcome EC2Client::DescribeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest& request) const {
  return DescribeImportSnapshotTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceAttributeOutcome EC2Client::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const {
  return DescribeInstanceAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceConnectEndpointsOutcome EC2Client::DescribeInstanceConnectEndpoints(
    const DescribeInstanceConnectEndpointsRequest& request) const {
  return DescribeInstanceConnectEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceCreditSpecificationsOutcome EC2Client::DescribeInstanceCreditSpecifications(
    const DescribeInstanceCreditSpecificationsRequest& request) const {
  return DescribeInstanceCreditSpecificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceEventNotificationAttributesOutcome EC2Client::DescribeInstanceEventNotificationAttributes(
    const DescribeInstanceEventNotificationAttributesRequest& request) const {
  return DescribeInstanceEventNotificationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceEventWindowsOutcome EC2Client::DescribeInstanceEventWindows(const DescribeInstanceEventWindowsRequest& request) const {
  return DescribeInstanceEventWindowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceImageMetadataOutcome EC2Client::DescribeInstanceImageMetadata(const DescribeInstanceImageMetadataRequest& request) const {
  return DescribeInstanceImageMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceSqlHaHistoryStatesOutcome EC2Client::DescribeInstanceSqlHaHistoryStates(
    const DescribeInstanceSqlHaHistoryStatesRequest& request) const {
  return DescribeInstanceSqlHaHistoryStatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceSqlHaStatesOutcome EC2Client::DescribeInstanceSqlHaStates(const DescribeInstanceSqlHaStatesRequest& request) const {
  return DescribeInstanceSqlHaStatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const {
  return DescribeInstanceStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceTopologyOutcome EC2Client::DescribeInstanceTopology(const DescribeInstanceTopologyRequest& request) const {
  return DescribeInstanceTopologyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceTypeOfferingsOutcome EC2Client::DescribeInstanceTypeOfferings(const DescribeInstanceTypeOfferingsRequest& request) const {
  return DescribeInstanceTypeOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceTypesOutcome EC2Client::DescribeInstanceTypes(const DescribeInstanceTypesRequest& request) const {
  return DescribeInstanceTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const {
  return DescribeInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const {
  return DescribeInternetGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamByoasnOutcome EC2Client::DescribeIpamByoasn(const DescribeIpamByoasnRequest& request) const {
  return DescribeIpamByoasnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamExternalResourceVerificationTokensOutcome EC2Client::DescribeIpamExternalResourceVerificationTokens(
    const DescribeIpamExternalResourceVerificationTokensRequest& request) const {
  return DescribeIpamExternalResourceVerificationTokensOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamPoliciesOutcome EC2Client::DescribeIpamPolicies(const DescribeIpamPoliciesRequest& request) const {
  return DescribeIpamPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamPoolsOutcome EC2Client::DescribeIpamPools(const DescribeIpamPoolsRequest& request) const {
  return DescribeIpamPoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamPrefixListResolverTargetsOutcome EC2Client::DescribeIpamPrefixListResolverTargets(
    const DescribeIpamPrefixListResolverTargetsRequest& request) const {
  return DescribeIpamPrefixListResolverTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamPrefixListResolversOutcome EC2Client::DescribeIpamPrefixListResolvers(
    const DescribeIpamPrefixListResolversRequest& request) const {
  return DescribeIpamPrefixListResolversOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamResourceDiscoveriesOutcome EC2Client::DescribeIpamResourceDiscoveries(
    const DescribeIpamResourceDiscoveriesRequest& request) const {
  return DescribeIpamResourceDiscoveriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamResourceDiscoveryAssociationsOutcome EC2Client::DescribeIpamResourceDiscoveryAssociations(
    const DescribeIpamResourceDiscoveryAssociationsRequest& request) const {
  return DescribeIpamResourceDiscoveryAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamScopesOutcome EC2Client::DescribeIpamScopes(const DescribeIpamScopesRequest& request) const {
  return DescribeIpamScopesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpamsOutcome EC2Client::DescribeIpams(const DescribeIpamsRequest& request) const {
  return DescribeIpamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIpv6PoolsOutcome EC2Client::DescribeIpv6Pools(const DescribeIpv6PoolsRequest& request) const {
  return DescribeIpv6PoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const {
  return DescribeKeyPairsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLaunchTemplateVersionsOutcome EC2Client::DescribeLaunchTemplateVersions(
    const DescribeLaunchTemplateVersionsRequest& request) const {
  return DescribeLaunchTemplateVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLaunchTemplatesOutcome EC2Client::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest& request) const {
  return DescribeLaunchTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome
EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(
    const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const {
  return DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome{
      InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocalGatewayRouteTableVpcAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVpcAssociations(
    const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const {
  return DescribeLocalGatewayRouteTableVpcAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocalGatewayRouteTablesOutcome EC2Client::DescribeLocalGatewayRouteTables(
    const DescribeLocalGatewayRouteTablesRequest& request) const {
  return DescribeLocalGatewayRouteTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocalGatewayVirtualInterfaceGroupsOutcome EC2Client::DescribeLocalGatewayVirtualInterfaceGroups(
    const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const {
  return DescribeLocalGatewayVirtualInterfaceGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocalGatewayVirtualInterfacesOutcome EC2Client::DescribeLocalGatewayVirtualInterfaces(
    const DescribeLocalGatewayVirtualInterfacesRequest& request) const {
  return DescribeLocalGatewayVirtualInterfacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocalGatewaysOutcome EC2Client::DescribeLocalGateways(const DescribeLocalGatewaysRequest& request) const {
  return DescribeLocalGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLockedSnapshotsOutcome EC2Client::DescribeLockedSnapshots(const DescribeLockedSnapshotsRequest& request) const {
  return DescribeLockedSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMacHostsOutcome EC2Client::DescribeMacHosts(const DescribeMacHostsRequest& request) const {
  return DescribeMacHostsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMacModificationTasksOutcome EC2Client::DescribeMacModificationTasks(const DescribeMacModificationTasksRequest& request) const {
  return DescribeMacModificationTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeManagedPrefixListsOutcome EC2Client::DescribeManagedPrefixLists(const DescribeManagedPrefixListsRequest& request) const {
  return DescribeManagedPrefixListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const {
  return DescribeMovingAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const {
  return DescribeNatGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const {
  return DescribeNetworkAclsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInsightsAccessScopeAnalysesOutcome EC2Client::DescribeNetworkInsightsAccessScopeAnalyses(
    const DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const {
  return DescribeNetworkInsightsAccessScopeAnalysesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInsightsAccessScopesOutcome EC2Client::DescribeNetworkInsightsAccessScopes(
    const DescribeNetworkInsightsAccessScopesRequest& request) const {
  return DescribeNetworkInsightsAccessScopesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInsightsAnalysesOutcome EC2Client::DescribeNetworkInsightsAnalyses(
    const DescribeNetworkInsightsAnalysesRequest& request) const {
  return DescribeNetworkInsightsAnalysesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInsightsPathsOutcome EC2Client::DescribeNetworkInsightsPaths(const DescribeNetworkInsightsPathsRequest& request) const {
  return DescribeNetworkInsightsPathsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(
    const DescribeNetworkInterfaceAttributeRequest& request) const {
  return DescribeNetworkInterfaceAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInterfacePermissionsOutcome EC2Client::DescribeNetworkInterfacePermissions(
    const DescribeNetworkInterfacePermissionsRequest& request) const {
  return DescribeNetworkInterfacePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const {
  return DescribeNetworkInterfacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOutpostLagsOutcome EC2Client::DescribeOutpostLags(const DescribeOutpostLagsRequest& request) const {
  return DescribeOutpostLagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const {
  return DescribePlacementGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const {
  return DescribePrefixListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePrincipalIdFormatOutcome EC2Client::DescribePrincipalIdFormat(const DescribePrincipalIdFormatRequest& request) const {
  return DescribePrincipalIdFormatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePublicIpv4PoolsOutcome EC2Client::DescribePublicIpv4Pools(const DescribePublicIpv4PoolsRequest& request) const {
  return DescribePublicIpv4PoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const {
  return DescribeRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplaceRootVolumeTasksOutcome EC2Client::DescribeReplaceRootVolumeTasks(
    const DescribeReplaceRootVolumeTasksRequest& request) const {
  return DescribeReplaceRootVolumeTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const {
  return DescribeReservedInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(
    const DescribeReservedInstancesListingsRequest& request) const {
  return DescribeReservedInstancesListingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(
    const DescribeReservedInstancesModificationsRequest& request) const {
  return DescribeReservedInstancesModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(
    const DescribeReservedInstancesOfferingsRequest& request) const {
  return DescribeReservedInstancesOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRouteServerEndpointsOutcome EC2Client::DescribeRouteServerEndpoints(const DescribeRouteServerEndpointsRequest& request) const {
  return DescribeRouteServerEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRouteServerPeersOutcome EC2Client::DescribeRouteServerPeers(const DescribeRouteServerPeersRequest& request) const {
  return DescribeRouteServerPeersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRouteServersOutcome EC2Client::DescribeRouteServers(const DescribeRouteServersRequest& request) const {
  return DescribeRouteServersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const {
  return DescribeRouteTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(
    const DescribeScheduledInstanceAvailabilityRequest& request) const {
  return DescribeScheduledInstanceAvailabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const {
  return DescribeScheduledInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecondaryInterfacesOutcome EC2Client::DescribeSecondaryInterfaces(const DescribeSecondaryInterfacesRequest& request) const {
  return DescribeSecondaryInterfacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecondaryNetworksOutcome EC2Client::DescribeSecondaryNetworks(const DescribeSecondaryNetworksRequest& request) const {
  return DescribeSecondaryNetworksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecondarySubnetsOutcome EC2Client::DescribeSecondarySubnets(const DescribeSecondarySubnetsRequest& request) const {
  return DescribeSecondarySubnetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(
    const DescribeSecurityGroupReferencesRequest& request) const {
  return DescribeSecurityGroupReferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecurityGroupRulesOutcome EC2Client::DescribeSecurityGroupRules(const DescribeSecurityGroupRulesRequest& request) const {
  return DescribeSecurityGroupRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecurityGroupVpcAssociationsOutcome EC2Client::DescribeSecurityGroupVpcAssociations(
    const DescribeSecurityGroupVpcAssociationsRequest& request) const {
  return DescribeSecurityGroupVpcAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const {
  return DescribeSecurityGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceLinkVirtualInterfacesOutcome EC2Client::DescribeServiceLinkVirtualInterfaces(
    const DescribeServiceLinkVirtualInterfacesRequest& request) const {
  return DescribeServiceLinkVirtualInterfacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const {
  return DescribeSnapshotAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotTierStatusOutcome EC2Client::DescribeSnapshotTierStatus(const DescribeSnapshotTierStatusRequest& request) const {
  return DescribeSnapshotTierStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  return DescribeSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(
    const DescribeSpotDatafeedSubscriptionRequest& request) const {
  return DescribeSpotDatafeedSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const {
  return DescribeSpotFleetInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(
    const DescribeSpotFleetRequestHistoryRequest& request) const {
  return DescribeSpotFleetRequestHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
