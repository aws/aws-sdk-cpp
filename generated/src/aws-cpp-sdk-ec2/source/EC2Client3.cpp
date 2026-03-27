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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFastLaunchImagesOutcome(result.GetResultWithOwnership())
                            : DescribeFastLaunchImagesOutcome(std::move(result.GetError()));
}

DescribeFastSnapshotRestoresOutcome EC2Client::DescribeFastSnapshotRestores(const DescribeFastSnapshotRestoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFastSnapshotRestoresOutcome(result.GetResultWithOwnership())
                            : DescribeFastSnapshotRestoresOutcome(std::move(result.GetError()));
}

DescribeFleetHistoryOutcome EC2Client::DescribeFleetHistory(const DescribeFleetHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetHistoryOutcome(result.GetResultWithOwnership())
                            : DescribeFleetHistoryOutcome(std::move(result.GetError()));
}

DescribeFleetInstancesOutcome EC2Client::DescribeFleetInstances(const DescribeFleetInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeFleetInstancesOutcome(std::move(result.GetError()));
}

DescribeFleetsOutcome EC2Client::DescribeFleets(const DescribeFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetsOutcome(result.GetResultWithOwnership()) : DescribeFleetsOutcome(std::move(result.GetError()));
}

DescribeFlowLogsOutcome EC2Client::DescribeFlowLogs(const DescribeFlowLogsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFlowLogsOutcome(result.GetResultWithOwnership())
                            : DescribeFlowLogsOutcome(std::move(result.GetError()));
}

DescribeFpgaImageAttributeOutcome EC2Client::DescribeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFpgaImageAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeFpgaImageAttributeOutcome(std::move(result.GetError()));
}

DescribeFpgaImagesOutcome EC2Client::DescribeFpgaImages(const DescribeFpgaImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFpgaImagesOutcome(result.GetResultWithOwnership())
                            : DescribeFpgaImagesOutcome(std::move(result.GetError()));
}

DescribeHostReservationOfferingsOutcome EC2Client::DescribeHostReservationOfferings(
    const DescribeHostReservationOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHostReservationOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeHostReservationOfferingsOutcome(std::move(result.GetError()));
}

DescribeHostReservationsOutcome EC2Client::DescribeHostReservations(const DescribeHostReservationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHostReservationsOutcome(result.GetResultWithOwnership())
                            : DescribeHostReservationsOutcome(std::move(result.GetError()));
}

DescribeHostsOutcome EC2Client::DescribeHosts(const DescribeHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHostsOutcome(result.GetResultWithOwnership()) : DescribeHostsOutcome(std::move(result.GetError()));
}

DescribeIamInstanceProfileAssociationsOutcome EC2Client::DescribeIamInstanceProfileAssociations(
    const DescribeIamInstanceProfileAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIamInstanceProfileAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeIamInstanceProfileAssociationsOutcome(std::move(result.GetError()));
}

DescribeIdFormatOutcome EC2Client::DescribeIdFormat(const DescribeIdFormatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIdFormatOutcome(result.GetResultWithOwnership())
                            : DescribeIdFormatOutcome(std::move(result.GetError()));
}

DescribeIdentityIdFormatOutcome EC2Client::DescribeIdentityIdFormat(const DescribeIdentityIdFormatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIdentityIdFormatOutcome(result.GetResultWithOwnership())
                            : DescribeIdentityIdFormatOutcome(std::move(result.GetError()));
}

DescribeImageAttributeOutcome EC2Client::DescribeImageAttribute(const DescribeImageAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeImageAttributeOutcome(std::move(result.GetError()));
}

DescribeImageReferencesOutcome EC2Client::DescribeImageReferences(const DescribeImageReferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageReferencesOutcome(result.GetResultWithOwnership())
                            : DescribeImageReferencesOutcome(std::move(result.GetError()));
}

DescribeImageUsageReportEntriesOutcome EC2Client::DescribeImageUsageReportEntries(
    const DescribeImageUsageReportEntriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageUsageReportEntriesOutcome(result.GetResultWithOwnership())
                            : DescribeImageUsageReportEntriesOutcome(std::move(result.GetError()));
}

DescribeImageUsageReportsOutcome EC2Client::DescribeImageUsageReports(const DescribeImageUsageReportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImageUsageReportsOutcome(result.GetResultWithOwnership())
                            : DescribeImageUsageReportsOutcome(std::move(result.GetError()));
}

DescribeImagesOutcome EC2Client::DescribeImages(const DescribeImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImagesOutcome(result.GetResultWithOwnership()) : DescribeImagesOutcome(std::move(result.GetError()));
}

DescribeImportImageTasksOutcome EC2Client::DescribeImportImageTasks(const DescribeImportImageTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImportImageTasksOutcome(result.GetResultWithOwnership())
                            : DescribeImportImageTasksOutcome(std::move(result.GetError()));
}

DescribeImportSnapshotTasksOutcome EC2Client::DescribeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImportSnapshotTasksOutcome(result.GetResultWithOwnership())
                            : DescribeImportSnapshotTasksOutcome(std::move(result.GetError()));
}

DescribeInstanceAttributeOutcome EC2Client::DescribeInstanceAttribute(const DescribeInstanceAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceAttributeOutcome(std::move(result.GetError()));
}

DescribeInstanceConnectEndpointsOutcome EC2Client::DescribeInstanceConnectEndpoints(
    const DescribeInstanceConnectEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceConnectEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceConnectEndpointsOutcome(std::move(result.GetError()));
}

DescribeInstanceCreditSpecificationsOutcome EC2Client::DescribeInstanceCreditSpecifications(
    const DescribeInstanceCreditSpecificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceCreditSpecificationsOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceCreditSpecificationsOutcome(std::move(result.GetError()));
}

DescribeInstanceEventNotificationAttributesOutcome EC2Client::DescribeInstanceEventNotificationAttributes(
    const DescribeInstanceEventNotificationAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceEventNotificationAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceEventNotificationAttributesOutcome(std::move(result.GetError()));
}

DescribeInstanceEventWindowsOutcome EC2Client::DescribeInstanceEventWindows(const DescribeInstanceEventWindowsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceEventWindowsOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceEventWindowsOutcome(std::move(result.GetError()));
}

DescribeInstanceImageMetadataOutcome EC2Client::DescribeInstanceImageMetadata(const DescribeInstanceImageMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceImageMetadataOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceImageMetadataOutcome(std::move(result.GetError()));
}

DescribeInstanceSqlHaHistoryStatesOutcome EC2Client::DescribeInstanceSqlHaHistoryStates(
    const DescribeInstanceSqlHaHistoryStatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceSqlHaHistoryStatesOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceSqlHaHistoryStatesOutcome(std::move(result.GetError()));
}

DescribeInstanceSqlHaStatesOutcome EC2Client::DescribeInstanceSqlHaStates(const DescribeInstanceSqlHaStatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceSqlHaStatesOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceSqlHaStatesOutcome(std::move(result.GetError()));
}

DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceStatusOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceStatusOutcome(std::move(result.GetError()));
}

DescribeInstanceTopologyOutcome EC2Client::DescribeInstanceTopology(const DescribeInstanceTopologyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceTopologyOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceTopologyOutcome(std::move(result.GetError()));
}

DescribeInstanceTypeOfferingsOutcome EC2Client::DescribeInstanceTypeOfferings(const DescribeInstanceTypeOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceTypeOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceTypeOfferingsOutcome(std::move(result.GetError()));
}

DescribeInstanceTypesOutcome EC2Client::DescribeInstanceTypes(const DescribeInstanceTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceTypesOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceTypesOutcome(std::move(result.GetError()));
}

DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeInstancesOutcome(std::move(result.GetError()));
}

DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInternetGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeInternetGatewaysOutcome(std::move(result.GetError()));
}

DescribeIpamByoasnOutcome EC2Client::DescribeIpamByoasn(const DescribeIpamByoasnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamByoasnOutcome(result.GetResultWithOwnership())
                            : DescribeIpamByoasnOutcome(std::move(result.GetError()));
}

DescribeIpamExternalResourceVerificationTokensOutcome EC2Client::DescribeIpamExternalResourceVerificationTokens(
    const DescribeIpamExternalResourceVerificationTokensRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamExternalResourceVerificationTokensOutcome(result.GetResultWithOwnership())
                            : DescribeIpamExternalResourceVerificationTokensOutcome(std::move(result.GetError()));
}

DescribeIpamPoliciesOutcome EC2Client::DescribeIpamPolicies(const DescribeIpamPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeIpamPoliciesOutcome(std::move(result.GetError()));
}

DescribeIpamPoolsOutcome EC2Client::DescribeIpamPools(const DescribeIpamPoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamPoolsOutcome(result.GetResultWithOwnership())
                            : DescribeIpamPoolsOutcome(std::move(result.GetError()));
}

DescribeIpamPrefixListResolverTargetsOutcome EC2Client::DescribeIpamPrefixListResolverTargets(
    const DescribeIpamPrefixListResolverTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamPrefixListResolverTargetsOutcome(result.GetResultWithOwnership())
                            : DescribeIpamPrefixListResolverTargetsOutcome(std::move(result.GetError()));
}

DescribeIpamPrefixListResolversOutcome EC2Client::DescribeIpamPrefixListResolvers(
    const DescribeIpamPrefixListResolversRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamPrefixListResolversOutcome(result.GetResultWithOwnership())
                            : DescribeIpamPrefixListResolversOutcome(std::move(result.GetError()));
}

DescribeIpamResourceDiscoveriesOutcome EC2Client::DescribeIpamResourceDiscoveries(
    const DescribeIpamResourceDiscoveriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamResourceDiscoveriesOutcome(result.GetResultWithOwnership())
                            : DescribeIpamResourceDiscoveriesOutcome(std::move(result.GetError()));
}

DescribeIpamResourceDiscoveryAssociationsOutcome EC2Client::DescribeIpamResourceDiscoveryAssociations(
    const DescribeIpamResourceDiscoveryAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamResourceDiscoveryAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeIpamResourceDiscoveryAssociationsOutcome(std::move(result.GetError()));
}

DescribeIpamScopesOutcome EC2Client::DescribeIpamScopes(const DescribeIpamScopesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamScopesOutcome(result.GetResultWithOwnership())
                            : DescribeIpamScopesOutcome(std::move(result.GetError()));
}

DescribeIpamsOutcome EC2Client::DescribeIpams(const DescribeIpamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpamsOutcome(result.GetResultWithOwnership()) : DescribeIpamsOutcome(std::move(result.GetError()));
}

DescribeIpv6PoolsOutcome EC2Client::DescribeIpv6Pools(const DescribeIpv6PoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIpv6PoolsOutcome(result.GetResultWithOwnership())
                            : DescribeIpv6PoolsOutcome(std::move(result.GetError()));
}

DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeKeyPairsOutcome(result.GetResultWithOwnership())
                            : DescribeKeyPairsOutcome(std::move(result.GetError()));
}

DescribeLaunchTemplateVersionsOutcome EC2Client::DescribeLaunchTemplateVersions(
    const DescribeLaunchTemplateVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLaunchTemplateVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeLaunchTemplateVersionsOutcome(std::move(result.GetError()));
}

DescribeLaunchTemplatesOutcome EC2Client::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLaunchTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeLaunchTemplatesOutcome(std::move(result.GetError()));
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome
EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(
    const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome(std::move(result.GetError()));
}

DescribeLocalGatewayRouteTableVpcAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVpcAssociations(
    const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLocalGatewayRouteTableVpcAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeLocalGatewayRouteTableVpcAssociationsOutcome(std::move(result.GetError()));
}

DescribeLocalGatewayRouteTablesOutcome EC2Client::DescribeLocalGatewayRouteTables(
    const DescribeLocalGatewayRouteTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLocalGatewayRouteTablesOutcome(result.GetResultWithOwnership())
                            : DescribeLocalGatewayRouteTablesOutcome(std::move(result.GetError()));
}

DescribeLocalGatewayVirtualInterfaceGroupsOutcome EC2Client::DescribeLocalGatewayVirtualInterfaceGroups(
    const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLocalGatewayVirtualInterfaceGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeLocalGatewayVirtualInterfaceGroupsOutcome(std::move(result.GetError()));
}

DescribeLocalGatewayVirtualInterfacesOutcome EC2Client::DescribeLocalGatewayVirtualInterfaces(
    const DescribeLocalGatewayVirtualInterfacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLocalGatewayVirtualInterfacesOutcome(result.GetResultWithOwnership())
                            : DescribeLocalGatewayVirtualInterfacesOutcome(std::move(result.GetError()));
}

DescribeLocalGatewaysOutcome EC2Client::DescribeLocalGateways(const DescribeLocalGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLocalGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeLocalGatewaysOutcome(std::move(result.GetError()));
}

DescribeLockedSnapshotsOutcome EC2Client::DescribeLockedSnapshots(const DescribeLockedSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLockedSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeLockedSnapshotsOutcome(std::move(result.GetError()));
}

DescribeMacHostsOutcome EC2Client::DescribeMacHosts(const DescribeMacHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMacHostsOutcome(result.GetResultWithOwnership())
                            : DescribeMacHostsOutcome(std::move(result.GetError()));
}

DescribeMacModificationTasksOutcome EC2Client::DescribeMacModificationTasks(const DescribeMacModificationTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMacModificationTasksOutcome(result.GetResultWithOwnership())
                            : DescribeMacModificationTasksOutcome(std::move(result.GetError()));
}

DescribeManagedPrefixListsOutcome EC2Client::DescribeManagedPrefixLists(const DescribeManagedPrefixListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeManagedPrefixListsOutcome(result.GetResultWithOwnership())
                            : DescribeManagedPrefixListsOutcome(std::move(result.GetError()));
}

DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMovingAddressesOutcome(result.GetResultWithOwnership())
                            : DescribeMovingAddressesOutcome(std::move(result.GetError()));
}

DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNatGatewaysOutcome(result.GetResultWithOwnership())
                            : DescribeNatGatewaysOutcome(std::move(result.GetError()));
}

DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkAclsOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkAclsOutcome(std::move(result.GetError()));
}

DescribeNetworkInsightsAccessScopeAnalysesOutcome EC2Client::DescribeNetworkInsightsAccessScopeAnalyses(
    const DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInsightsAccessScopeAnalysesOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInsightsAccessScopeAnalysesOutcome(std::move(result.GetError()));
}

DescribeNetworkInsightsAccessScopesOutcome EC2Client::DescribeNetworkInsightsAccessScopes(
    const DescribeNetworkInsightsAccessScopesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInsightsAccessScopesOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInsightsAccessScopesOutcome(std::move(result.GetError()));
}

DescribeNetworkInsightsAnalysesOutcome EC2Client::DescribeNetworkInsightsAnalyses(
    const DescribeNetworkInsightsAnalysesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInsightsAnalysesOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInsightsAnalysesOutcome(std::move(result.GetError()));
}

DescribeNetworkInsightsPathsOutcome EC2Client::DescribeNetworkInsightsPaths(const DescribeNetworkInsightsPathsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInsightsPathsOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInsightsPathsOutcome(std::move(result.GetError()));
}

DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(
    const DescribeNetworkInterfaceAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInterfaceAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInterfaceAttributeOutcome(std::move(result.GetError()));
}

DescribeNetworkInterfacePermissionsOutcome EC2Client::DescribeNetworkInterfacePermissions(
    const DescribeNetworkInterfacePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInterfacePermissionsOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInterfacePermissionsOutcome(std::move(result.GetError()));
}

DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNetworkInterfacesOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkInterfacesOutcome(std::move(result.GetError()));
}

DescribeOutpostLagsOutcome EC2Client::DescribeOutpostLags(const DescribeOutpostLagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOutpostLagsOutcome(result.GetResultWithOwnership())
                            : DescribeOutpostLagsOutcome(std::move(result.GetError()));
}

DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePlacementGroupsOutcome(result.GetResultWithOwnership())
                            : DescribePlacementGroupsOutcome(std::move(result.GetError()));
}

DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePrefixListsOutcome(result.GetResultWithOwnership())
                            : DescribePrefixListsOutcome(std::move(result.GetError()));
}

DescribePrincipalIdFormatOutcome EC2Client::DescribePrincipalIdFormat(const DescribePrincipalIdFormatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePrincipalIdFormatOutcome(result.GetResultWithOwnership())
                            : DescribePrincipalIdFormatOutcome(std::move(result.GetError()));
}

DescribePublicIpv4PoolsOutcome EC2Client::DescribePublicIpv4Pools(const DescribePublicIpv4PoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePublicIpv4PoolsOutcome(result.GetResultWithOwnership())
                            : DescribePublicIpv4PoolsOutcome(std::move(result.GetError()));
}

DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegionsOutcome(result.GetResultWithOwnership())
                            : DescribeRegionsOutcome(std::move(result.GetError()));
}

DescribeReplaceRootVolumeTasksOutcome EC2Client::DescribeReplaceRootVolumeTasks(
    const DescribeReplaceRootVolumeTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplaceRootVolumeTasksOutcome(result.GetResultWithOwnership())
                            : DescribeReplaceRootVolumeTasksOutcome(std::move(result.GetError()));
}

DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeReservedInstancesOutcome(std::move(result.GetError()));
}

DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(
    const DescribeReservedInstancesListingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedInstancesListingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedInstancesListingsOutcome(std::move(result.GetError()));
}

DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(
    const DescribeReservedInstancesModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedInstancesModificationsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedInstancesModificationsOutcome(std::move(result.GetError()));
}

DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(
    const DescribeReservedInstancesOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedInstancesOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedInstancesOfferingsOutcome(std::move(result.GetError()));
}

DescribeRouteServerEndpointsOutcome EC2Client::DescribeRouteServerEndpoints(const DescribeRouteServerEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRouteServerEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeRouteServerEndpointsOutcome(std::move(result.GetError()));
}

DescribeRouteServerPeersOutcome EC2Client::DescribeRouteServerPeers(const DescribeRouteServerPeersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRouteServerPeersOutcome(result.GetResultWithOwnership())
                            : DescribeRouteServerPeersOutcome(std::move(result.GetError()));
}

DescribeRouteServersOutcome EC2Client::DescribeRouteServers(const DescribeRouteServersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRouteServersOutcome(result.GetResultWithOwnership())
                            : DescribeRouteServersOutcome(std::move(result.GetError()));
}

DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRouteTablesOutcome(result.GetResultWithOwnership())
                            : DescribeRouteTablesOutcome(std::move(result.GetError()));
}

DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(
    const DescribeScheduledInstanceAvailabilityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScheduledInstanceAvailabilityOutcome(result.GetResultWithOwnership())
                            : DescribeScheduledInstanceAvailabilityOutcome(std::move(result.GetError()));
}

DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScheduledInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeScheduledInstancesOutcome(std::move(result.GetError()));
}

DescribeSecondaryInterfacesOutcome EC2Client::DescribeSecondaryInterfaces(const DescribeSecondaryInterfacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecondaryInterfacesOutcome(result.GetResultWithOwnership())
                            : DescribeSecondaryInterfacesOutcome(std::move(result.GetError()));
}

DescribeSecondaryNetworksOutcome EC2Client::DescribeSecondaryNetworks(const DescribeSecondaryNetworksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecondaryNetworksOutcome(result.GetResultWithOwnership())
                            : DescribeSecondaryNetworksOutcome(std::move(result.GetError()));
}

DescribeSecondarySubnetsOutcome EC2Client::DescribeSecondarySubnets(const DescribeSecondarySubnetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecondarySubnetsOutcome(result.GetResultWithOwnership())
                            : DescribeSecondarySubnetsOutcome(std::move(result.GetError()));
}

DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(
    const DescribeSecurityGroupReferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecurityGroupReferencesOutcome(result.GetResultWithOwnership())
                            : DescribeSecurityGroupReferencesOutcome(std::move(result.GetError()));
}

DescribeSecurityGroupRulesOutcome EC2Client::DescribeSecurityGroupRules(const DescribeSecurityGroupRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecurityGroupRulesOutcome(result.GetResultWithOwnership())
                            : DescribeSecurityGroupRulesOutcome(std::move(result.GetError()));
}

DescribeSecurityGroupVpcAssociationsOutcome EC2Client::DescribeSecurityGroupVpcAssociations(
    const DescribeSecurityGroupVpcAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecurityGroupVpcAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeSecurityGroupVpcAssociationsOutcome(std::move(result.GetError()));
}

DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeSecurityGroupsOutcome(std::move(result.GetError()));
}

DescribeServiceLinkVirtualInterfacesOutcome EC2Client::DescribeServiceLinkVirtualInterfaces(
    const DescribeServiceLinkVirtualInterfacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeServiceLinkVirtualInterfacesOutcome(result.GetResultWithOwnership())
                            : DescribeServiceLinkVirtualInterfacesOutcome(std::move(result.GetError()));
}

DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotAttributeOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotAttributeOutcome(std::move(result.GetError()));
}

DescribeSnapshotTierStatusOutcome EC2Client::DescribeSnapshotTierStatus(const DescribeSnapshotTierStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotTierStatusOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotTierStatusOutcome(std::move(result.GetError()));
}

DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotsOutcome(std::move(result.GetError()));
}

DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(
    const DescribeSpotDatafeedSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpotDatafeedSubscriptionOutcome(result.GetResultWithOwnership())
                            : DescribeSpotDatafeedSubscriptionOutcome(std::move(result.GetError()));
}

DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpotFleetInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeSpotFleetInstancesOutcome(std::move(result.GetError()));
}

DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(
    const DescribeSpotFleetRequestHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpotFleetRequestHistoryOutcome(result.GetResultWithOwnership())
                            : DescribeSpotFleetRequestHistoryOutcome(std::move(result.GetError()));
}
