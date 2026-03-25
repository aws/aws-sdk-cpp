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
#include <aws/ec2/model/DeleteNetworkAclEntryRequest.h>
#include <aws/ec2/model/DeleteNetworkAclRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeAnalysisRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsAnalysisRequest.h>
#include <aws/ec2/model/DeleteNetworkInsightsPathRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/DeleteNetworkInterfaceRequest.h>
#include <aws/ec2/model/DeletePlacementGroupRequest.h>
#include <aws/ec2/model/DeletePublicIpv4PoolRequest.h>
#include <aws/ec2/model/DeleteQueuedReservedInstancesRequest.h>
#include <aws/ec2/model/DeleteRouteRequest.h>
#include <aws/ec2/model/DeleteRouteServerEndpointRequest.h>
#include <aws/ec2/model/DeleteRouteServerPeerRequest.h>
#include <aws/ec2/model/DeleteRouteServerRequest.h>
#include <aws/ec2/model/DeleteRouteTableRequest.h>
#include <aws/ec2/model/DeleteSecondaryNetworkRequest.h>
#include <aws/ec2/model/DeleteSecondarySubnetRequest.h>
#include <aws/ec2/model/DeleteSecurityGroupRequest.h>
#include <aws/ec2/model/DeleteSnapshotRequest.h>
#include <aws/ec2/model/DeleteSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/DeleteSubnetCidrReservationRequest.h>
#include <aws/ec2/model/DeleteSubnetRequest.h>
#include <aws/ec2/model/DeleteTagsRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/DeleteTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectPeerRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayConnectRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMeteringPolicyEntryRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMeteringPolicyRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/DeleteVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/DeleteVolumeRequest.h>
#include <aws/ec2/model/DeleteVpcBlockPublicAccessExclusionRequest.h>
#include <aws/ec2/model/DeleteVpcEncryptionControlRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointConnectionNotificationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointServiceConfigurationsRequest.h>
#include <aws/ec2/model/DeleteVpcEndpointsRequest.h>
#include <aws/ec2/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/DeleteVpcRequest.h>
#include <aws/ec2/model/DeleteVpnConcentratorRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRequest.h>
#include <aws/ec2/model/DeleteVpnConnectionRouteRequest.h>
#include <aws/ec2/model/DeleteVpnGatewayRequest.h>
#include <aws/ec2/model/DeprovisionByoipCidrRequest.h>
#include <aws/ec2/model/DeprovisionIpamByoasnRequest.h>
#include <aws/ec2/model/DeprovisionIpamPoolCidrRequest.h>
#include <aws/ec2/model/DeprovisionPublicIpv4PoolCidrRequest.h>
#include <aws/ec2/model/DeregisterImageRequest.h>
#include <aws/ec2/model/DeregisterInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupMembersRequest.h>
#include <aws/ec2/model/DeregisterTransitGatewayMulticastGroupSourcesRequest.h>
#include <aws/ec2/model/DescribeAccountAttributesRequest.h>
#include <aws/ec2/model/DescribeAddressTransfersRequest.h>
#include <aws/ec2/model/DescribeAddressesAttributeRequest.h>
#include <aws/ec2/model/DescribeAddressesRequest.h>
#include <aws/ec2/model/DescribeAggregateIdFormatRequest.h>
#include <aws/ec2/model/DescribeAvailabilityZonesRequest.h>
#include <aws/ec2/model/DescribeAwsNetworkPerformanceMetricSubscriptionsRequest.h>
#include <aws/ec2/model/DescribeBundleTasksRequest.h>
#include <aws/ec2/model/DescribeByoipCidrsRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockExtensionHistoryRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockExtensionOfferingsRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockOfferingsRequest.h>
#include <aws/ec2/model/DescribeCapacityBlockStatusRequest.h>
#include <aws/ec2/model/DescribeCapacityBlocksRequest.h>
#include <aws/ec2/model/DescribeCapacityManagerDataExportsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationBillingRequestsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationFleetsRequest.h>
#include <aws/ec2/model/DescribeCapacityReservationTopologyRequest.h>
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
#include <aws/ec2/model/DescribeDeclarativePoliciesReportsRequest.h>
#include <aws/ec2/model/DescribeDhcpOptionsRequest.h>
#include <aws/ec2/model/DescribeEgressOnlyInternetGatewaysRequest.h>
#include <aws/ec2/model/DescribeElasticGpusRequest.h>
#include <aws/ec2/model/DescribeExportImageTasksRequest.h>
#include <aws/ec2/model/DescribeExportTasksRequest.h>
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

DeleteNetworkAclOutcome EC2Client::DeleteNetworkAcl(const DeleteNetworkAclRequest& request) const {
  return DeleteNetworkAclOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkAclEntryOutcome EC2Client::DeleteNetworkAclEntry(const DeleteNetworkAclEntryRequest& request) const {
  return DeleteNetworkAclEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkInsightsAccessScopeOutcome EC2Client::DeleteNetworkInsightsAccessScope(
    const DeleteNetworkInsightsAccessScopeRequest& request) const {
  return DeleteNetworkInsightsAccessScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkInsightsAccessScopeAnalysisOutcome EC2Client::DeleteNetworkInsightsAccessScopeAnalysis(
    const DeleteNetworkInsightsAccessScopeAnalysisRequest& request) const {
  return DeleteNetworkInsightsAccessScopeAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkInsightsAnalysisOutcome EC2Client::DeleteNetworkInsightsAnalysis(const DeleteNetworkInsightsAnalysisRequest& request) const {
  return DeleteNetworkInsightsAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkInsightsPathOutcome EC2Client::DeleteNetworkInsightsPath(const DeleteNetworkInsightsPathRequest& request) const {
  return DeleteNetworkInsightsPathOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkInterfaceOutcome EC2Client::DeleteNetworkInterface(const DeleteNetworkInterfaceRequest& request) const {
  return DeleteNetworkInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkInterfacePermissionOutcome EC2Client::DeleteNetworkInterfacePermission(
    const DeleteNetworkInterfacePermissionRequest& request) const {
  return DeleteNetworkInterfacePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePlacementGroupOutcome EC2Client::DeletePlacementGroup(const DeletePlacementGroupRequest& request) const {
  return DeletePlacementGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePublicIpv4PoolOutcome EC2Client::DeletePublicIpv4Pool(const DeletePublicIpv4PoolRequest& request) const {
  return DeletePublicIpv4PoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueuedReservedInstancesOutcome EC2Client::DeleteQueuedReservedInstances(const DeleteQueuedReservedInstancesRequest& request) const {
  return DeleteQueuedReservedInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteOutcome EC2Client::DeleteRoute(const DeleteRouteRequest& request) const {
  return DeleteRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteServerOutcome EC2Client::DeleteRouteServer(const DeleteRouteServerRequest& request) const {
  return DeleteRouteServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteServerEndpointOutcome EC2Client::DeleteRouteServerEndpoint(const DeleteRouteServerEndpointRequest& request) const {
  return DeleteRouteServerEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteServerPeerOutcome EC2Client::DeleteRouteServerPeer(const DeleteRouteServerPeerRequest& request) const {
  return DeleteRouteServerPeerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouteTableOutcome EC2Client::DeleteRouteTable(const DeleteRouteTableRequest& request) const {
  return DeleteRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSecondaryNetworkOutcome EC2Client::DeleteSecondaryNetwork(const DeleteSecondaryNetworkRequest& request) const {
  return DeleteSecondaryNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSecondarySubnetOutcome EC2Client::DeleteSecondarySubnet(const DeleteSecondarySubnetRequest& request) const {
  return DeleteSecondarySubnetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSecurityGroupOutcome EC2Client::DeleteSecurityGroup(const DeleteSecurityGroupRequest& request) const {
  return DeleteSecurityGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSnapshotOutcome EC2Client::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  return DeleteSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSpotDatafeedSubscriptionOutcome EC2Client::DeleteSpotDatafeedSubscription(
    const DeleteSpotDatafeedSubscriptionRequest& request) const {
  return DeleteSpotDatafeedSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSubnetOutcome EC2Client::DeleteSubnet(const DeleteSubnetRequest& request) const {
  return DeleteSubnetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSubnetCidrReservationOutcome EC2Client::DeleteSubnetCidrReservation(const DeleteSubnetCidrReservationRequest& request) const {
  return DeleteSubnetCidrReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTagsOutcome EC2Client::DeleteTags(const DeleteTagsRequest& request) const {
  return DeleteTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrafficMirrorFilterOutcome EC2Client::DeleteTrafficMirrorFilter(const DeleteTrafficMirrorFilterRequest& request) const {
  return DeleteTrafficMirrorFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrafficMirrorFilterRuleOutcome EC2Client::DeleteTrafficMirrorFilterRule(const DeleteTrafficMirrorFilterRuleRequest& request) const {
  return DeleteTrafficMirrorFilterRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrafficMirrorSessionOutcome EC2Client::DeleteTrafficMirrorSession(const DeleteTrafficMirrorSessionRequest& request) const {
  return DeleteTrafficMirrorSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrafficMirrorTargetOutcome EC2Client::DeleteTrafficMirrorTarget(const DeleteTrafficMirrorTargetRequest& request) const {
  return DeleteTrafficMirrorTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayOutcome EC2Client::DeleteTransitGateway(const DeleteTransitGatewayRequest& request) const {
  return DeleteTransitGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayConnectOutcome EC2Client::DeleteTransitGatewayConnect(const DeleteTransitGatewayConnectRequest& request) const {
  return DeleteTransitGatewayConnectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayConnectPeerOutcome EC2Client::DeleteTransitGatewayConnectPeer(
    const DeleteTransitGatewayConnectPeerRequest& request) const {
  return DeleteTransitGatewayConnectPeerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayMeteringPolicyOutcome EC2Client::DeleteTransitGatewayMeteringPolicy(
    const DeleteTransitGatewayMeteringPolicyRequest& request) const {
  return DeleteTransitGatewayMeteringPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayMeteringPolicyEntryOutcome EC2Client::DeleteTransitGatewayMeteringPolicyEntry(
    const DeleteTransitGatewayMeteringPolicyEntryRequest& request) const {
  return DeleteTransitGatewayMeteringPolicyEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayMulticastDomainOutcome EC2Client::DeleteTransitGatewayMulticastDomain(
    const DeleteTransitGatewayMulticastDomainRequest& request) const {
  return DeleteTransitGatewayMulticastDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayPeeringAttachmentOutcome EC2Client::DeleteTransitGatewayPeeringAttachment(
    const DeleteTransitGatewayPeeringAttachmentRequest& request) const {
  return DeleteTransitGatewayPeeringAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayPolicyTableOutcome EC2Client::DeleteTransitGatewayPolicyTable(
    const DeleteTransitGatewayPolicyTableRequest& request) const {
  return DeleteTransitGatewayPolicyTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayPrefixListReferenceOutcome EC2Client::DeleteTransitGatewayPrefixListReference(
    const DeleteTransitGatewayPrefixListReferenceRequest& request) const {
  return DeleteTransitGatewayPrefixListReferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayRouteOutcome EC2Client::DeleteTransitGatewayRoute(const DeleteTransitGatewayRouteRequest& request) const {
  return DeleteTransitGatewayRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayRouteTableOutcome EC2Client::DeleteTransitGatewayRouteTable(
    const DeleteTransitGatewayRouteTableRequest& request) const {
  return DeleteTransitGatewayRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayRouteTableAnnouncementOutcome EC2Client::DeleteTransitGatewayRouteTableAnnouncement(
    const DeleteTransitGatewayRouteTableAnnouncementRequest& request) const {
  return DeleteTransitGatewayRouteTableAnnouncementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTransitGatewayVpcAttachmentOutcome EC2Client::DeleteTransitGatewayVpcAttachment(
    const DeleteTransitGatewayVpcAttachmentRequest& request) const {
  return DeleteTransitGatewayVpcAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVerifiedAccessEndpointOutcome EC2Client::DeleteVerifiedAccessEndpoint(const DeleteVerifiedAccessEndpointRequest& request) const {
  return DeleteVerifiedAccessEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVerifiedAccessGroupOutcome EC2Client::DeleteVerifiedAccessGroup(const DeleteVerifiedAccessGroupRequest& request) const {
  return DeleteVerifiedAccessGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVerifiedAccessInstanceOutcome EC2Client::DeleteVerifiedAccessInstance(const DeleteVerifiedAccessInstanceRequest& request) const {
  return DeleteVerifiedAccessInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVerifiedAccessTrustProviderOutcome EC2Client::DeleteVerifiedAccessTrustProvider(
    const DeleteVerifiedAccessTrustProviderRequest& request) const {
  return DeleteVerifiedAccessTrustProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVolumeOutcome EC2Client::DeleteVolume(const DeleteVolumeRequest& request) const {
  return DeleteVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcOutcome EC2Client::DeleteVpc(const DeleteVpcRequest& request) const {
  return DeleteVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcBlockPublicAccessExclusionOutcome EC2Client::DeleteVpcBlockPublicAccessExclusion(
    const DeleteVpcBlockPublicAccessExclusionRequest& request) const {
  return DeleteVpcBlockPublicAccessExclusionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcEncryptionControlOutcome EC2Client::DeleteVpcEncryptionControl(const DeleteVpcEncryptionControlRequest& request) const {
  return DeleteVpcEncryptionControlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcEndpointConnectionNotificationsOutcome EC2Client::DeleteVpcEndpointConnectionNotifications(
    const DeleteVpcEndpointConnectionNotificationsRequest& request) const {
  return DeleteVpcEndpointConnectionNotificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcEndpointServiceConfigurationsOutcome EC2Client::DeleteVpcEndpointServiceConfigurations(
    const DeleteVpcEndpointServiceConfigurationsRequest& request) const {
  return DeleteVpcEndpointServiceConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcEndpointsOutcome EC2Client::DeleteVpcEndpoints(const DeleteVpcEndpointsRequest& request) const {
  return DeleteVpcEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpcPeeringConnectionOutcome EC2Client::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const {
  return DeleteVpcPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpnConcentratorOutcome EC2Client::DeleteVpnConcentrator(const DeleteVpnConcentratorRequest& request) const {
  return DeleteVpnConcentratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpnConnectionOutcome EC2Client::DeleteVpnConnection(const DeleteVpnConnectionRequest& request) const {
  return DeleteVpnConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpnConnectionRouteOutcome EC2Client::DeleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest& request) const {
  return DeleteVpnConnectionRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVpnGatewayOutcome EC2Client::DeleteVpnGateway(const DeleteVpnGatewayRequest& request) const {
  return DeleteVpnGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeprovisionByoipCidrOutcome EC2Client::DeprovisionByoipCidr(const DeprovisionByoipCidrRequest& request) const {
  return DeprovisionByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeprovisionIpamByoasnOutcome EC2Client::DeprovisionIpamByoasn(const DeprovisionIpamByoasnRequest& request) const {
  return DeprovisionIpamByoasnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeprovisionIpamPoolCidrOutcome EC2Client::DeprovisionIpamPoolCidr(const DeprovisionIpamPoolCidrRequest& request) const {
  return DeprovisionIpamPoolCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeprovisionPublicIpv4PoolCidrOutcome EC2Client::DeprovisionPublicIpv4PoolCidr(const DeprovisionPublicIpv4PoolCidrRequest& request) const {
  return DeprovisionPublicIpv4PoolCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterImageOutcome EC2Client::DeregisterImage(const DeregisterImageRequest& request) const {
  return DeregisterImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterInstanceEventNotificationAttributesOutcome EC2Client::DeregisterInstanceEventNotificationAttributes(
    const DeregisterInstanceEventNotificationAttributesRequest& request) const {
  return DeregisterInstanceEventNotificationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterTransitGatewayMulticastGroupMembersOutcome EC2Client::DeregisterTransitGatewayMulticastGroupMembers(
    const DeregisterTransitGatewayMulticastGroupMembersRequest& request) const {
  return DeregisterTransitGatewayMulticastGroupMembersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::DeregisterTransitGatewayMulticastGroupSources(
    const DeregisterTransitGatewayMulticastGroupSourcesRequest& request) const {
  return DeregisterTransitGatewayMulticastGroupSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAccountAttributesOutcome EC2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const {
  return DescribeAccountAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAddressTransfersOutcome EC2Client::DescribeAddressTransfers(const DescribeAddressTransfersRequest& request) const {
  return DescribeAddressTransfersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAddressesOutcome EC2Client::DescribeAddresses(const DescribeAddressesRequest& request) const {
  return DescribeAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAddressesAttributeOutcome EC2Client::DescribeAddressesAttribute(const DescribeAddressesAttributeRequest& request) const {
  return DescribeAddressesAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAggregateIdFormatOutcome EC2Client::DescribeAggregateIdFormat(const DescribeAggregateIdFormatRequest& request) const {
  return DescribeAggregateIdFormatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAvailabilityZonesOutcome EC2Client::DescribeAvailabilityZones(const DescribeAvailabilityZonesRequest& request) const {
  return DescribeAvailabilityZonesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome EC2Client::DescribeAwsNetworkPerformanceMetricSubscriptions(
    const DescribeAwsNetworkPerformanceMetricSubscriptionsRequest& request) const {
  return DescribeAwsNetworkPerformanceMetricSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBundleTasksOutcome EC2Client::DescribeBundleTasks(const DescribeBundleTasksRequest& request) const {
  return DescribeBundleTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeByoipCidrsOutcome EC2Client::DescribeByoipCidrs(const DescribeByoipCidrsRequest& request) const {
  return DescribeByoipCidrsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityBlockExtensionHistoryOutcome EC2Client::DescribeCapacityBlockExtensionHistory(
    const DescribeCapacityBlockExtensionHistoryRequest& request) const {
  return DescribeCapacityBlockExtensionHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityBlockExtensionOfferingsOutcome EC2Client::DescribeCapacityBlockExtensionOfferings(
    const DescribeCapacityBlockExtensionOfferingsRequest& request) const {
  return DescribeCapacityBlockExtensionOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityBlockOfferingsOutcome EC2Client::DescribeCapacityBlockOfferings(
    const DescribeCapacityBlockOfferingsRequest& request) const {
  return DescribeCapacityBlockOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityBlockStatusOutcome EC2Client::DescribeCapacityBlockStatus(const DescribeCapacityBlockStatusRequest& request) const {
  return DescribeCapacityBlockStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityBlocksOutcome EC2Client::DescribeCapacityBlocks(const DescribeCapacityBlocksRequest& request) const {
  return DescribeCapacityBlocksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityManagerDataExportsOutcome EC2Client::DescribeCapacityManagerDataExports(
    const DescribeCapacityManagerDataExportsRequest& request) const {
  return DescribeCapacityManagerDataExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityReservationBillingRequestsOutcome EC2Client::DescribeCapacityReservationBillingRequests(
    const DescribeCapacityReservationBillingRequestsRequest& request) const {
  return DescribeCapacityReservationBillingRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityReservationFleetsOutcome EC2Client::DescribeCapacityReservationFleets(
    const DescribeCapacityReservationFleetsRequest& request) const {
  return DescribeCapacityReservationFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityReservationTopologyOutcome EC2Client::DescribeCapacityReservationTopology(
    const DescribeCapacityReservationTopologyRequest& request) const {
  return DescribeCapacityReservationTopologyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCapacityReservationsOutcome EC2Client::DescribeCapacityReservations(const DescribeCapacityReservationsRequest& request) const {
  return DescribeCapacityReservationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCarrierGatewaysOutcome EC2Client::DescribeCarrierGateways(const DescribeCarrierGatewaysRequest& request) const {
  return DescribeCarrierGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClassicLinkInstancesOutcome EC2Client::DescribeClassicLinkInstances(const DescribeClassicLinkInstancesRequest& request) const {
  return DescribeClassicLinkInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClientVpnAuthorizationRulesOutcome EC2Client::DescribeClientVpnAuthorizationRules(
    const DescribeClientVpnAuthorizationRulesRequest& request) const {
  return DescribeClientVpnAuthorizationRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClientVpnConnectionsOutcome EC2Client::DescribeClientVpnConnections(const DescribeClientVpnConnectionsRequest& request) const {
  return DescribeClientVpnConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClientVpnEndpointsOutcome EC2Client::DescribeClientVpnEndpoints(const DescribeClientVpnEndpointsRequest& request) const {
  return DescribeClientVpnEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClientVpnRoutesOutcome EC2Client::DescribeClientVpnRoutes(const DescribeClientVpnRoutesRequest& request) const {
  return DescribeClientVpnRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClientVpnTargetNetworksOutcome EC2Client::DescribeClientVpnTargetNetworks(
    const DescribeClientVpnTargetNetworksRequest& request) const {
  return DescribeClientVpnTargetNetworksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCoipPoolsOutcome EC2Client::DescribeCoipPools(const DescribeCoipPoolsRequest& request) const {
  return DescribeCoipPoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeConversionTasksOutcome EC2Client::DescribeConversionTasks(const DescribeConversionTasksRequest& request) const {
  return DescribeConversionTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCustomerGatewaysOutcome EC2Client::DescribeCustomerGateways(const DescribeCustomerGatewaysRequest& request) const {
  return DescribeCustomerGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDeclarativePoliciesReportsOutcome EC2Client::DescribeDeclarativePoliciesReports(
    const DescribeDeclarativePoliciesReportsRequest& request) const {
  return DescribeDeclarativePoliciesReportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDhcpOptionsOutcome EC2Client::DescribeDhcpOptions(const DescribeDhcpOptionsRequest& request) const {
  return DescribeDhcpOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEgressOnlyInternetGatewaysOutcome EC2Client::DescribeEgressOnlyInternetGateways(
    const DescribeEgressOnlyInternetGatewaysRequest& request) const {
  return DescribeEgressOnlyInternetGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeElasticGpusOutcome EC2Client::DescribeElasticGpus(const DescribeElasticGpusRequest& request) const {
  return DescribeElasticGpusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeExportImageTasksOutcome EC2Client::DescribeExportImageTasks(const DescribeExportImageTasksRequest& request) const {
  return DescribeExportImageTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeExportTasksOutcome EC2Client::DescribeExportTasks(const DescribeExportTasksRequest& request) const {
  return DescribeExportTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
