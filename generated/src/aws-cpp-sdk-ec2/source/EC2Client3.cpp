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
#include <aws/ec2/model/DescribeInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/DescribeInstanceEventWindowsRequest.h>
#include <aws/ec2/model/DescribeInstanceImageMetadataRequest.h>
#include <aws/ec2/model/DescribeInstanceStatusRequest.h>
#include <aws/ec2/model/DescribeInstanceTopologyRequest.h>
#include <aws/ec2/model/DescribeInstanceTypeOfferingsRequest.h>
#include <aws/ec2/model/DescribeInstanceTypesRequest.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeIpamByoasnRequest.h>
#include <aws/ec2/model/DescribeIpamExternalResourceVerificationTokensRequest.h>
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
#include <aws/ec2/model/DescribeReservedInstancesRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesListingsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesModificationsRequest.h>
#include <aws/ec2/model/DescribeReservedInstancesOfferingsRequest.h>
#include <aws/ec2/model/DescribeRouteServerEndpointsRequest.h>
#include <aws/ec2/model/DescribeRouteServerPeersRequest.h>
#include <aws/ec2/model/DescribeRouteServersRequest.h>
#include <aws/ec2/model/DescribeRouteTablesRequest.h>
#include <aws/ec2/model/DescribeScheduledInstanceAvailabilityRequest.h>
#include <aws/ec2/model/DescribeScheduledInstancesRequest.h>
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



DescribeInstanceEventNotificationAttributesOutcome EC2Client::DescribeInstanceEventNotificationAttributes(const DescribeInstanceEventNotificationAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceEventNotificationAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceEventNotificationAttributesOutcome>(
    [&]()-> DescribeInstanceEventNotificationAttributesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceEventNotificationAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceEventNotificationAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceEventWindowsOutcome EC2Client::DescribeInstanceEventWindows(const DescribeInstanceEventWindowsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceEventWindows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceEventWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceEventWindows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceEventWindows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceEventWindowsOutcome>(
    [&]()-> DescribeInstanceEventWindowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceEventWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceEventWindowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceImageMetadataOutcome EC2Client::DescribeInstanceImageMetadata(const DescribeInstanceImageMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceImageMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceImageMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceImageMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceImageMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceImageMetadataOutcome>(
    [&]()-> DescribeInstanceImageMetadataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceImageMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceImageMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceStatusOutcome EC2Client::DescribeInstanceStatus(const DescribeInstanceStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceStatusOutcome>(
    [&]()-> DescribeInstanceStatusOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceTopologyOutcome EC2Client::DescribeInstanceTopology(const DescribeInstanceTopologyRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceTopology);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTopology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceTopology, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceTopology, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceTopologyOutcome>(
    [&]()-> DescribeInstanceTopologyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTopology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceTopologyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceTypeOfferingsOutcome EC2Client::DescribeInstanceTypeOfferings(const DescribeInstanceTypeOfferingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceTypeOfferings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceTypeOfferingsOutcome>(
    [&]()-> DescribeInstanceTypeOfferingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceTypeOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstanceTypesOutcome EC2Client::DescribeInstanceTypes(const DescribeInstanceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstanceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstanceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstanceTypesOutcome>(
    [&]()-> DescribeInstanceTypesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstanceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInstancesOutcome EC2Client::DescribeInstances(const DescribeInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInstancesOutcome>(
    [&]()-> DescribeInstancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInternetGatewaysOutcome EC2Client::DescribeInternetGateways(const DescribeInternetGatewaysRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInternetGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInternetGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInternetGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInternetGatewaysOutcome>(
    [&]()-> DescribeInternetGatewaysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInternetGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeInternetGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamByoasnOutcome EC2Client::DescribeIpamByoasn(const DescribeIpamByoasnRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpamByoasn);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamByoasn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpamByoasn, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpamByoasn, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamByoasnOutcome>(
    [&]()-> DescribeIpamByoasnOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamByoasn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamByoasnOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamExternalResourceVerificationTokensOutcome EC2Client::DescribeIpamExternalResourceVerificationTokens(const DescribeIpamExternalResourceVerificationTokensRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpamExternalResourceVerificationTokens);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamExternalResourceVerificationTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpamExternalResourceVerificationTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpamExternalResourceVerificationTokens, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamExternalResourceVerificationTokensOutcome>(
    [&]()-> DescribeIpamExternalResourceVerificationTokensOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamExternalResourceVerificationTokens, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamExternalResourceVerificationTokensOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamPoolsOutcome EC2Client::DescribeIpamPools(const DescribeIpamPoolsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpamPools);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpamPools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpamPools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamPoolsOutcome>(
    [&]()-> DescribeIpamPoolsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamResourceDiscoveriesOutcome EC2Client::DescribeIpamResourceDiscoveries(const DescribeIpamResourceDiscoveriesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpamResourceDiscoveries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamResourceDiscoveries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpamResourceDiscoveries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpamResourceDiscoveries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamResourceDiscoveriesOutcome>(
    [&]()-> DescribeIpamResourceDiscoveriesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamResourceDiscoveries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamResourceDiscoveriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamResourceDiscoveryAssociationsOutcome EC2Client::DescribeIpamResourceDiscoveryAssociations(const DescribeIpamResourceDiscoveryAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpamResourceDiscoveryAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamResourceDiscoveryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpamResourceDiscoveryAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpamResourceDiscoveryAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamResourceDiscoveryAssociationsOutcome>(
    [&]()-> DescribeIpamResourceDiscoveryAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamResourceDiscoveryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamResourceDiscoveryAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamScopesOutcome EC2Client::DescribeIpamScopes(const DescribeIpamScopesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpamScopes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpamScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpamScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpamScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamScopesOutcome>(
    [&]()-> DescribeIpamScopesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpamScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpamsOutcome EC2Client::DescribeIpams(const DescribeIpamsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpams);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpamsOutcome>(
    [&]()-> DescribeIpamsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIpv6PoolsOutcome EC2Client::DescribeIpv6Pools(const DescribeIpv6PoolsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIpv6Pools);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpv6Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIpv6Pools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIpv6Pools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIpv6PoolsOutcome>(
    [&]()-> DescribeIpv6PoolsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpv6Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeIpv6PoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeKeyPairsOutcome EC2Client::DescribeKeyPairs(const DescribeKeyPairsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeKeyPairs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeKeyPairs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeKeyPairs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeKeyPairsOutcome>(
    [&]()-> DescribeKeyPairsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeKeyPairsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLaunchTemplateVersionsOutcome EC2Client::DescribeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLaunchTemplateVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLaunchTemplateVersionsOutcome>(
    [&]()-> DescribeLaunchTemplateVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLaunchTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLaunchTemplatesOutcome EC2Client::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLaunchTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLaunchTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLaunchTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLaunchTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLaunchTemplatesOutcome>(
    [&]()-> DescribeLaunchTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLaunchTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLaunchTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations(const DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome>(
    [&]()-> DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLocalGatewayRouteTableVpcAssociationsOutcome EC2Client::DescribeLocalGatewayRouteTableVpcAssociations(const DescribeLocalGatewayRouteTableVpcAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLocalGatewayRouteTableVpcAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLocalGatewayRouteTableVpcAssociationsOutcome>(
    [&]()-> DescribeLocalGatewayRouteTableVpcAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTableVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLocalGatewayRouteTableVpcAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLocalGatewayRouteTablesOutcome EC2Client::DescribeLocalGatewayRouteTables(const DescribeLocalGatewayRouteTablesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLocalGatewayRouteTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLocalGatewayRouteTablesOutcome>(
    [&]()-> DescribeLocalGatewayRouteTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLocalGatewayRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLocalGatewayVirtualInterfaceGroupsOutcome EC2Client::DescribeLocalGatewayVirtualInterfaceGroups(const DescribeLocalGatewayVirtualInterfaceGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLocalGatewayVirtualInterfaceGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLocalGatewayVirtualInterfaceGroupsOutcome>(
    [&]()-> DescribeLocalGatewayVirtualInterfaceGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayVirtualInterfaceGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLocalGatewayVirtualInterfaceGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLocalGatewayVirtualInterfacesOutcome EC2Client::DescribeLocalGatewayVirtualInterfaces(const DescribeLocalGatewayVirtualInterfacesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLocalGatewayVirtualInterfaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLocalGatewayVirtualInterfacesOutcome>(
    [&]()-> DescribeLocalGatewayVirtualInterfacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGatewayVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLocalGatewayVirtualInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLocalGatewaysOutcome EC2Client::DescribeLocalGateways(const DescribeLocalGatewaysRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLocalGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocalGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLocalGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLocalGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLocalGatewaysOutcome>(
    [&]()-> DescribeLocalGatewaysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocalGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLocalGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLockedSnapshotsOutcome EC2Client::DescribeLockedSnapshots(const DescribeLockedSnapshotsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLockedSnapshots);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLockedSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLockedSnapshots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLockedSnapshots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLockedSnapshotsOutcome>(
    [&]()-> DescribeLockedSnapshotsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLockedSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLockedSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMacHostsOutcome EC2Client::DescribeMacHosts(const DescribeMacHostsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMacHosts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMacHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeMacHosts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMacHosts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMacHostsOutcome>(
    [&]()-> DescribeMacHostsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMacHosts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeMacHostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMacModificationTasksOutcome EC2Client::DescribeMacModificationTasks(const DescribeMacModificationTasksRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMacModificationTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMacModificationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeMacModificationTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMacModificationTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMacModificationTasksOutcome>(
    [&]()-> DescribeMacModificationTasksOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMacModificationTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeMacModificationTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeManagedPrefixListsOutcome EC2Client::DescribeManagedPrefixLists(const DescribeManagedPrefixListsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeManagedPrefixLists);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeManagedPrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeManagedPrefixLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeManagedPrefixLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeManagedPrefixListsOutcome>(
    [&]()-> DescribeManagedPrefixListsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeManagedPrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeManagedPrefixListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMovingAddressesOutcome EC2Client::DescribeMovingAddresses(const DescribeMovingAddressesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMovingAddresses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMovingAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeMovingAddresses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMovingAddresses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMovingAddressesOutcome>(
    [&]()-> DescribeMovingAddressesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMovingAddresses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeMovingAddressesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNatGatewaysOutcome EC2Client::DescribeNatGateways(const DescribeNatGatewaysRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNatGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNatGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNatGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNatGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNatGatewaysOutcome>(
    [&]()-> DescribeNatGatewaysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNatGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNatGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkAclsOutcome EC2Client::DescribeNetworkAcls(const DescribeNetworkAclsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkAcls);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkAcls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkAcls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkAcls, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkAclsOutcome>(
    [&]()-> DescribeNetworkAclsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkAcls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkAclsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInsightsAccessScopeAnalysesOutcome EC2Client::DescribeNetworkInsightsAccessScopeAnalyses(const DescribeNetworkInsightsAccessScopeAnalysesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInsightsAccessScopeAnalyses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInsightsAccessScopeAnalysesOutcome>(
    [&]()-> DescribeNetworkInsightsAccessScopeAnalysesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAccessScopeAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInsightsAccessScopeAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInsightsAccessScopesOutcome EC2Client::DescribeNetworkInsightsAccessScopes(const DescribeNetworkInsightsAccessScopesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInsightsAccessScopes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInsightsAccessScopesOutcome>(
    [&]()-> DescribeNetworkInsightsAccessScopesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAccessScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInsightsAccessScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInsightsAnalysesOutcome EC2Client::DescribeNetworkInsightsAnalyses(const DescribeNetworkInsightsAnalysesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInsightsAnalyses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInsightsAnalysesOutcome>(
    [&]()-> DescribeNetworkInsightsAnalysesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInsightsAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInsightsPathsOutcome EC2Client::DescribeNetworkInsightsPaths(const DescribeNetworkInsightsPathsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInsightsPaths);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInsightsPathsOutcome>(
    [&]()-> DescribeNetworkInsightsPathsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInsightsPaths, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInsightsPathsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInterfaceAttributeOutcome EC2Client::DescribeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInterfaceAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInterfaceAttributeOutcome>(
    [&]()-> DescribeNetworkInterfaceAttributeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfaceAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInterfaceAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInterfacePermissionsOutcome EC2Client::DescribeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInterfacePermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInterfacePermissionsOutcome>(
    [&]()-> DescribeNetworkInterfacePermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfacePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInterfacePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkInterfacesOutcome EC2Client::DescribeNetworkInterfaces(const DescribeNetworkInterfacesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetworkInterfaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeNetworkInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetworkInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkInterfacesOutcome>(
    [&]()-> DescribeNetworkInterfacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeNetworkInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeOutpostLagsOutcome EC2Client::DescribeOutpostLags(const DescribeOutpostLagsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeOutpostLags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOutpostLags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeOutpostLags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeOutpostLags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeOutpostLagsOutcome>(
    [&]()-> DescribeOutpostLagsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOutpostLags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeOutpostLagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribePlacementGroupsOutcome EC2Client::DescribePlacementGroups(const DescribePlacementGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePlacementGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribePlacementGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribePlacementGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribePlacementGroupsOutcome>(
    [&]()-> DescribePlacementGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribePlacementGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribePrefixListsOutcome EC2Client::DescribePrefixLists(const DescribePrefixListsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePrefixLists);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribePrefixLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribePrefixLists, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribePrefixListsOutcome>(
    [&]()-> DescribePrefixListsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePrefixLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribePrefixListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribePrincipalIdFormatOutcome EC2Client::DescribePrincipalIdFormat(const DescribePrincipalIdFormatRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePrincipalIdFormat);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePrincipalIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribePrincipalIdFormat, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribePrincipalIdFormat, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribePrincipalIdFormatOutcome>(
    [&]()-> DescribePrincipalIdFormatOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePrincipalIdFormat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribePrincipalIdFormatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribePublicIpv4PoolsOutcome EC2Client::DescribePublicIpv4Pools(const DescribePublicIpv4PoolsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePublicIpv4Pools);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePublicIpv4Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribePublicIpv4Pools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribePublicIpv4Pools, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribePublicIpv4PoolsOutcome>(
    [&]()-> DescribePublicIpv4PoolsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePublicIpv4Pools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribePublicIpv4PoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRegionsOutcome EC2Client::DescribeRegions(const DescribeRegionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRegions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeRegions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRegions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRegionsOutcome>(
    [&]()-> DescribeRegionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeRegionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReplaceRootVolumeTasksOutcome EC2Client::DescribeReplaceRootVolumeTasks(const DescribeReplaceRootVolumeTasksRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReplaceRootVolumeTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReplaceRootVolumeTasksOutcome>(
    [&]()-> DescribeReplaceRootVolumeTasksOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReplaceRootVolumeTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeReplaceRootVolumeTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservedInstancesOutcome EC2Client::DescribeReservedInstances(const DescribeReservedInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservedInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeReservedInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservedInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservedInstancesOutcome>(
    [&]()-> DescribeReservedInstancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeReservedInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservedInstancesListingsOutcome EC2Client::DescribeReservedInstancesListings(const DescribeReservedInstancesListingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservedInstancesListings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeReservedInstancesListings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservedInstancesListings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservedInstancesListingsOutcome>(
    [&]()-> DescribeReservedInstancesListingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeReservedInstancesListingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservedInstancesModificationsOutcome EC2Client::DescribeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservedInstancesModifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservedInstancesModificationsOutcome>(
    [&]()-> DescribeReservedInstancesModificationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeReservedInstancesModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservedInstancesOfferingsOutcome EC2Client::DescribeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservedInstancesOfferings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservedInstancesOfferingsOutcome>(
    [&]()-> DescribeReservedInstancesOfferingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedInstancesOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeReservedInstancesOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRouteServerEndpointsOutcome EC2Client::DescribeRouteServerEndpoints(const DescribeRouteServerEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRouteServerEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRouteServerEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeRouteServerEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRouteServerEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRouteServerEndpointsOutcome>(
    [&]()-> DescribeRouteServerEndpointsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRouteServerEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeRouteServerEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRouteServerPeersOutcome EC2Client::DescribeRouteServerPeers(const DescribeRouteServerPeersRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRouteServerPeers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRouteServerPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeRouteServerPeers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRouteServerPeers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRouteServerPeersOutcome>(
    [&]()-> DescribeRouteServerPeersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRouteServerPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeRouteServerPeersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRouteServersOutcome EC2Client::DescribeRouteServers(const DescribeRouteServersRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRouteServers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRouteServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeRouteServers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRouteServers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRouteServersOutcome>(
    [&]()-> DescribeRouteServersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRouteServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeRouteServersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRouteTablesOutcome EC2Client::DescribeRouteTables(const DescribeRouteTablesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRouteTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeRouteTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRouteTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRouteTablesOutcome>(
    [&]()-> DescribeRouteTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeScheduledInstanceAvailabilityOutcome EC2Client::DescribeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeScheduledInstanceAvailability);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScheduledInstanceAvailabilityOutcome>(
    [&]()-> DescribeScheduledInstanceAvailabilityOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledInstanceAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeScheduledInstanceAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeScheduledInstancesOutcome EC2Client::DescribeScheduledInstances(const DescribeScheduledInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeScheduledInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeScheduledInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeScheduledInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScheduledInstancesOutcome>(
    [&]()-> DescribeScheduledInstancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeScheduledInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSecurityGroupReferencesOutcome EC2Client::DescribeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSecurityGroupReferences);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSecurityGroupReferencesOutcome>(
    [&]()-> DescribeSecurityGroupReferencesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSecurityGroupReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSecurityGroupRulesOutcome EC2Client::DescribeSecurityGroupRules(const DescribeSecurityGroupRulesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSecurityGroupRules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSecurityGroupRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSecurityGroupRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSecurityGroupRulesOutcome>(
    [&]()-> DescribeSecurityGroupRulesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSecurityGroupRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSecurityGroupVpcAssociationsOutcome EC2Client::DescribeSecurityGroupVpcAssociations(const DescribeSecurityGroupVpcAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSecurityGroupVpcAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroupVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSecurityGroupVpcAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSecurityGroupVpcAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSecurityGroupVpcAssociationsOutcome>(
    [&]()-> DescribeSecurityGroupVpcAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroupVpcAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSecurityGroupVpcAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSecurityGroupsOutcome EC2Client::DescribeSecurityGroups(const DescribeSecurityGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSecurityGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSecurityGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSecurityGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSecurityGroupsOutcome>(
    [&]()-> DescribeSecurityGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeServiceLinkVirtualInterfacesOutcome EC2Client::DescribeServiceLinkVirtualInterfaces(const DescribeServiceLinkVirtualInterfacesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeServiceLinkVirtualInterfaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeServiceLinkVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeServiceLinkVirtualInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeServiceLinkVirtualInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeServiceLinkVirtualInterfacesOutcome>(
    [&]()-> DescribeServiceLinkVirtualInterfacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeServiceLinkVirtualInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeServiceLinkVirtualInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSnapshotAttributeOutcome EC2Client::DescribeSnapshotAttribute(const DescribeSnapshotAttributeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSnapshotAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSnapshotAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSnapshotAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSnapshotAttributeOutcome>(
    [&]()-> DescribeSnapshotAttributeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSnapshotAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSnapshotTierStatusOutcome EC2Client::DescribeSnapshotTierStatus(const DescribeSnapshotTierStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSnapshotTierStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSnapshotTierStatusOutcome>(
    [&]()-> DescribeSnapshotTierStatusOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotTierStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSnapshotTierStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSnapshotsOutcome EC2Client::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSnapshots);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSnapshots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSnapshots, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSnapshotsOutcome>(
    [&]()-> DescribeSnapshotsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSpotDatafeedSubscriptionOutcome EC2Client::DescribeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSpotDatafeedSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSpotDatafeedSubscriptionOutcome>(
    [&]()-> DescribeSpotDatafeedSubscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotDatafeedSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSpotDatafeedSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSpotFleetInstancesOutcome EC2Client::DescribeSpotFleetInstances(const DescribeSpotFleetInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSpotFleetInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSpotFleetInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSpotFleetInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSpotFleetInstancesOutcome>(
    [&]()-> DescribeSpotFleetInstancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSpotFleetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSpotFleetRequestHistoryOutcome EC2Client::DescribeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSpotFleetRequestHistory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSpotFleetRequestHistoryOutcome>(
    [&]()-> DescribeSpotFleetRequestHistoryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetRequestHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSpotFleetRequestHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSpotFleetRequestsOutcome EC2Client::DescribeSpotFleetRequests(const DescribeSpotFleetRequestsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSpotFleetRequests);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSpotFleetRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSpotFleetRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSpotFleetRequestsOutcome>(
    [&]()-> DescribeSpotFleetRequestsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotFleetRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSpotFleetRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSpotInstanceRequestsOutcome EC2Client::DescribeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSpotInstanceRequests);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSpotInstanceRequestsOutcome>(
    [&]()-> DescribeSpotInstanceRequestsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotInstanceRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSpotInstanceRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSpotPriceHistoryOutcome EC2Client::DescribeSpotPriceHistory(const DescribeSpotPriceHistoryRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSpotPriceHistory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpotPriceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSpotPriceHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSpotPriceHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSpotPriceHistoryOutcome>(
    [&]()-> DescribeSpotPriceHistoryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpotPriceHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSpotPriceHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeStaleSecurityGroupsOutcome EC2Client::DescribeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeStaleSecurityGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeStaleSecurityGroupsOutcome>(
    [&]()-> DescribeStaleSecurityGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStaleSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeStaleSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeStoreImageTasksOutcome EC2Client::DescribeStoreImageTasks(const DescribeStoreImageTasksRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeStoreImageTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStoreImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeStoreImageTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeStoreImageTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeStoreImageTasksOutcome>(
    [&]()-> DescribeStoreImageTasksOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStoreImageTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeStoreImageTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeSubnetsOutcome EC2Client::DescribeSubnets(const DescribeSubnetsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSubnets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeSubnets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSubnets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeSubnetsOutcome>(
    [&]()-> DescribeSubnetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSubnets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeSubnetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTagsOutcome EC2Client::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTagsOutcome>(
    [&]()-> DescribeTagsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTrafficMirrorFilterRulesOutcome EC2Client::DescribeTrafficMirrorFilterRules(const DescribeTrafficMirrorFilterRulesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTrafficMirrorFilterRules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorFilterRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTrafficMirrorFilterRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTrafficMirrorFilterRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTrafficMirrorFilterRulesOutcome>(
    [&]()-> DescribeTrafficMirrorFilterRulesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorFilterRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTrafficMirrorFilterRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTrafficMirrorFiltersOutcome EC2Client::DescribeTrafficMirrorFilters(const DescribeTrafficMirrorFiltersRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTrafficMirrorFilters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTrafficMirrorFiltersOutcome>(
    [&]()-> DescribeTrafficMirrorFiltersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTrafficMirrorFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTrafficMirrorSessionsOutcome EC2Client::DescribeTrafficMirrorSessions(const DescribeTrafficMirrorSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTrafficMirrorSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTrafficMirrorSessionsOutcome>(
    [&]()-> DescribeTrafficMirrorSessionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTrafficMirrorSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTrafficMirrorTargetsOutcome EC2Client::DescribeTrafficMirrorTargets(const DescribeTrafficMirrorTargetsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTrafficMirrorTargets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTrafficMirrorTargetsOutcome>(
    [&]()-> DescribeTrafficMirrorTargetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrafficMirrorTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTrafficMirrorTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayAttachmentsOutcome EC2Client::DescribeTransitGatewayAttachments(const DescribeTransitGatewayAttachmentsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayAttachments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayAttachmentsOutcome>(
    [&]()-> DescribeTransitGatewayAttachmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayConnectPeersOutcome EC2Client::DescribeTransitGatewayConnectPeers(const DescribeTransitGatewayConnectPeersRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayConnectPeers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayConnectPeersOutcome>(
    [&]()-> DescribeTransitGatewayConnectPeersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayConnectPeers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayConnectPeersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayConnectsOutcome EC2Client::DescribeTransitGatewayConnects(const DescribeTransitGatewayConnectsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayConnects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayConnectsOutcome>(
    [&]()-> DescribeTransitGatewayConnectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayConnectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayMulticastDomainsOutcome EC2Client::DescribeTransitGatewayMulticastDomains(const DescribeTransitGatewayMulticastDomainsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayMulticastDomains);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayMulticastDomainsOutcome>(
    [&]()-> DescribeTransitGatewayMulticastDomainsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayMulticastDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayMulticastDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayPeeringAttachmentsOutcome EC2Client::DescribeTransitGatewayPeeringAttachments(const DescribeTransitGatewayPeeringAttachmentsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayPeeringAttachments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayPeeringAttachmentsOutcome>(
    [&]()-> DescribeTransitGatewayPeeringAttachmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayPeeringAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayPeeringAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayPolicyTablesOutcome EC2Client::DescribeTransitGatewayPolicyTables(const DescribeTransitGatewayPolicyTablesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayPolicyTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayPolicyTablesOutcome>(
    [&]()-> DescribeTransitGatewayPolicyTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayPolicyTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayPolicyTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayRouteTableAnnouncementsOutcome EC2Client::DescribeTransitGatewayRouteTableAnnouncements(const DescribeTransitGatewayRouteTableAnnouncementsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayRouteTableAnnouncements);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayRouteTableAnnouncementsOutcome>(
    [&]()-> DescribeTransitGatewayRouteTableAnnouncementsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayRouteTableAnnouncements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayRouteTableAnnouncementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayRouteTablesOutcome EC2Client::DescribeTransitGatewayRouteTables(const DescribeTransitGatewayRouteTablesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayRouteTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayRouteTablesOutcome>(
    [&]()-> DescribeTransitGatewayRouteTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayRouteTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayRouteTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewayVpcAttachmentsOutcome EC2Client::DescribeTransitGatewayVpcAttachments(const DescribeTransitGatewayVpcAttachmentsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGatewayVpcAttachments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewayVpcAttachmentsOutcome>(
    [&]()-> DescribeTransitGatewayVpcAttachmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGatewayVpcAttachments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewayVpcAttachmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTransitGatewaysOutcome EC2Client::DescribeTransitGateways(const DescribeTransitGatewaysRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTransitGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransitGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTransitGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTransitGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTransitGatewaysOutcome>(
    [&]()-> DescribeTransitGatewaysOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransitGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTransitGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTrunkInterfaceAssociationsOutcome EC2Client::DescribeTrunkInterfaceAssociations(const DescribeTrunkInterfaceAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTrunkInterfaceAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTrunkInterfaceAssociationsOutcome>(
    [&]()-> DescribeTrunkInterfaceAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrunkInterfaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTrunkInterfaceAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVerifiedAccessEndpointsOutcome EC2Client::DescribeVerifiedAccessEndpoints(const DescribeVerifiedAccessEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVerifiedAccessEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVerifiedAccessEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVerifiedAccessEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVerifiedAccessEndpointsOutcome>(
    [&]()-> DescribeVerifiedAccessEndpointsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVerifiedAccessEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVerifiedAccessGroupsOutcome EC2Client::DescribeVerifiedAccessGroups(const DescribeVerifiedAccessGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVerifiedAccessGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVerifiedAccessGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVerifiedAccessGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVerifiedAccessGroupsOutcome>(
    [&]()-> DescribeVerifiedAccessGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVerifiedAccessGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome EC2Client::DescribeVerifiedAccessInstanceLoggingConfigurations(const DescribeVerifiedAccessInstanceLoggingConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVerifiedAccessInstanceLoggingConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessInstanceLoggingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVerifiedAccessInstanceLoggingConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVerifiedAccessInstanceLoggingConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome>(
    [&]()-> DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessInstanceLoggingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVerifiedAccessInstanceLoggingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVerifiedAccessInstancesOutcome EC2Client::DescribeVerifiedAccessInstances(const DescribeVerifiedAccessInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVerifiedAccessInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVerifiedAccessInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVerifiedAccessInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVerifiedAccessInstancesOutcome>(
    [&]()-> DescribeVerifiedAccessInstancesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVerifiedAccessInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVerifiedAccessTrustProvidersOutcome EC2Client::DescribeVerifiedAccessTrustProviders(const DescribeVerifiedAccessTrustProvidersRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVerifiedAccessTrustProviders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVerifiedAccessTrustProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVerifiedAccessTrustProviders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVerifiedAccessTrustProviders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVerifiedAccessTrustProvidersOutcome>(
    [&]()-> DescribeVerifiedAccessTrustProvidersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVerifiedAccessTrustProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVerifiedAccessTrustProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVolumeAttributeOutcome EC2Client::DescribeVolumeAttribute(const DescribeVolumeAttributeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVolumeAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVolumeAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVolumeAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVolumeAttributeOutcome>(
    [&]()-> DescribeVolumeAttributeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumeAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVolumeAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVolumeStatusOutcome EC2Client::DescribeVolumeStatus(const DescribeVolumeStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVolumeStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVolumeStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVolumeStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVolumeStatusOutcome>(
    [&]()-> DescribeVolumeStatusOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVolumeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVolumesOutcome EC2Client::DescribeVolumes(const DescribeVolumesRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVolumes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVolumes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVolumes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVolumesOutcome>(
    [&]()-> DescribeVolumesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVolumesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVolumesModificationsOutcome EC2Client::DescribeVolumesModifications(const DescribeVolumesModificationsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVolumesModifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVolumesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVolumesModifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVolumesModifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVolumesModificationsOutcome>(
    [&]()-> DescribeVolumesModificationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVolumesModifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVolumesModificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVpcAttributeOutcome EC2Client::DescribeVpcAttribute(const DescribeVpcAttributeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVpcAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVpcAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVpcAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + "." + request.GetServiceRequestName(),
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVpcAttributeOutcome>(
    [&]()-> DescribeVpcAttributeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeVpcAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

