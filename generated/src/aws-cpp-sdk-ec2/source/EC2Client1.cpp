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
#include <aws/ec2/model/CreateLocalGatewayRouteTableVpcAssociationRequest.h>
#include <aws/ec2/model/CreateLocalGatewayVirtualInterfaceGroupRequest.h>
#include <aws/ec2/model/CreateLocalGatewayVirtualInterfaceRequest.h>
#include <aws/ec2/model/CreateMacSystemIntegrityProtectionModificationTaskRequest.h>
#include <aws/ec2/model/CreateManagedPrefixListRequest.h>
#include <aws/ec2/model/CreateNatGatewayRequest.h>
#include <aws/ec2/model/CreateNetworkAclEntryRequest.h>
#include <aws/ec2/model/CreateNetworkAclRequest.h>
#include <aws/ec2/model/CreateNetworkInsightsAccessScopeRequest.h>
#include <aws/ec2/model/CreateNetworkInsightsPathRequest.h>
#include <aws/ec2/model/CreateNetworkInterfacePermissionRequest.h>
#include <aws/ec2/model/CreateNetworkInterfaceRequest.h>
#include <aws/ec2/model/CreatePlacementGroupRequest.h>
#include <aws/ec2/model/CreatePublicIpv4PoolRequest.h>
#include <aws/ec2/model/CreateReplaceRootVolumeTaskRequest.h>
#include <aws/ec2/model/CreateReservedInstancesListingRequest.h>
#include <aws/ec2/model/CreateRestoreImageTaskRequest.h>
#include <aws/ec2/model/CreateRouteRequest.h>
#include <aws/ec2/model/CreateRouteServerEndpointRequest.h>
#include <aws/ec2/model/CreateRouteServerPeerRequest.h>
#include <aws/ec2/model/CreateRouteServerRequest.h>
#include <aws/ec2/model/CreateRouteTableRequest.h>
#include <aws/ec2/model/CreateSecondaryNetworkRequest.h>
#include <aws/ec2/model/CreateSecondarySubnetRequest.h>
#include <aws/ec2/model/CreateSecurityGroupRequest.h>
#include <aws/ec2/model/CreateSnapshotRequest.h>
#include <aws/ec2/model/CreateSnapshotsRequest.h>
#include <aws/ec2/model/CreateSpotDatafeedSubscriptionRequest.h>
#include <aws/ec2/model/CreateStoreImageTaskRequest.h>
#include <aws/ec2/model/CreateSubnetCidrReservationRequest.h>
#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/CreateTrafficMirrorTargetRequest.h>
#include <aws/ec2/model/CreateTransitGatewayConnectPeerRequest.h>
#include <aws/ec2/model/CreateTransitGatewayConnectRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMeteringPolicyEntryRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMeteringPolicyRequest.h>
#include <aws/ec2/model/CreateTransitGatewayMulticastDomainRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPolicyTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableAnnouncementRequest.h>
#include <aws/ec2/model/CreateTransitGatewayRouteTableRequest.h>
#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/CreateVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/CreateVolumeRequest.h>
#include <aws/ec2/model/CreateVpcBlockPublicAccessExclusionRequest.h>
#include <aws/ec2/model/CreateVpcEncryptionControlRequest.h>
#include <aws/ec2/model/CreateVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/CreateVpcEndpointRequest.h>
#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/ec2/model/CreateVpnConcentratorRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/ec2/model/CreateVpnConnectionRouteRequest.h>
#include <aws/ec2/model/CreateVpnGatewayRequest.h>
#include <aws/ec2/model/DeleteCapacityManagerDataExportRequest.h>
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
#include <aws/ec2/model/DeleteImageUsageReportRequest.h>
#include <aws/ec2/model/DeleteInstanceConnectEndpointRequest.h>
#include <aws/ec2/model/DeleteInstanceEventWindowRequest.h>
#include <aws/ec2/model/DeleteInternetGatewayRequest.h>
#include <aws/ec2/model/DeleteIpamExternalResourceVerificationTokenRequest.h>
#include <aws/ec2/model/DeleteIpamPolicyRequest.h>
#include <aws/ec2/model/DeleteIpamPoolRequest.h>
#include <aws/ec2/model/DeleteIpamPrefixListResolverRequest.h>
#include <aws/ec2/model/DeleteIpamPrefixListResolverTargetRequest.h>
#include <aws/ec2/model/DeleteIpamRequest.h>
#include <aws/ec2/model/DeleteIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/DeleteIpamScopeRequest.h>
#include <aws/ec2/model/DeleteKeyPairRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateRequest.h>
#include <aws/ec2/model/DeleteLaunchTemplateVersionsRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayRouteTableVpcAssociationRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayVirtualInterfaceGroupRequest.h>
#include <aws/ec2/model/DeleteLocalGatewayVirtualInterfaceRequest.h>
#include <aws/ec2/model/DeleteManagedPrefixListRequest.h>
#include <aws/ec2/model/DeleteNatGatewayRequest.h>
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

CreateLocalGatewayRouteTableVpcAssociationOutcome EC2Client::CreateLocalGatewayRouteTableVpcAssociation(
    const CreateLocalGatewayRouteTableVpcAssociationRequest& request) const {
  return CreateLocalGatewayRouteTableVpcAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLocalGatewayVirtualInterfaceOutcome EC2Client::CreateLocalGatewayVirtualInterface(
    const CreateLocalGatewayVirtualInterfaceRequest& request) const {
  return CreateLocalGatewayVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLocalGatewayVirtualInterfaceGroupOutcome EC2Client::CreateLocalGatewayVirtualInterfaceGroup(
    const CreateLocalGatewayVirtualInterfaceGroupRequest& request) const {
  return CreateLocalGatewayVirtualInterfaceGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMacSystemIntegrityProtectionModificationTaskOutcome EC2Client::CreateMacSystemIntegrityProtectionModificationTask(
    const CreateMacSystemIntegrityProtectionModificationTaskRequest& request) const {
  return CreateMacSystemIntegrityProtectionModificationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateManagedPrefixListOutcome EC2Client::CreateManagedPrefixList(const CreateManagedPrefixListRequest& request) const {
  return CreateManagedPrefixListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNatGatewayOutcome EC2Client::CreateNatGateway(const CreateNatGatewayRequest& request) const {
  return CreateNatGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkAclOutcome EC2Client::CreateNetworkAcl(const CreateNetworkAclRequest& request) const {
  return CreateNetworkAclOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkAclEntryOutcome EC2Client::CreateNetworkAclEntry(const CreateNetworkAclEntryRequest& request) const {
  return CreateNetworkAclEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkInsightsAccessScopeOutcome EC2Client::CreateNetworkInsightsAccessScope(
    const CreateNetworkInsightsAccessScopeRequest& request) const {
  return CreateNetworkInsightsAccessScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkInsightsPathOutcome EC2Client::CreateNetworkInsightsPath(const CreateNetworkInsightsPathRequest& request) const {
  return CreateNetworkInsightsPathOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkInterfaceOutcome EC2Client::CreateNetworkInterface(const CreateNetworkInterfaceRequest& request) const {
  return CreateNetworkInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkInterfacePermissionOutcome EC2Client::CreateNetworkInterfacePermission(
    const CreateNetworkInterfacePermissionRequest& request) const {
  return CreateNetworkInterfacePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePlacementGroupOutcome EC2Client::CreatePlacementGroup(const CreatePlacementGroupRequest& request) const {
  return CreatePlacementGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePublicIpv4PoolOutcome EC2Client::CreatePublicIpv4Pool(const CreatePublicIpv4PoolRequest& request) const {
  return CreatePublicIpv4PoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateReplaceRootVolumeTaskOutcome EC2Client::CreateReplaceRootVolumeTask(const CreateReplaceRootVolumeTaskRequest& request) const {
  return CreateReplaceRootVolumeTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateReservedInstancesListingOutcome EC2Client::CreateReservedInstancesListing(
    const CreateReservedInstancesListingRequest& request) const {
  return CreateReservedInstancesListingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRestoreImageTaskOutcome EC2Client::CreateRestoreImageTask(const CreateRestoreImageTaskRequest& request) const {
  return CreateRestoreImageTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteOutcome EC2Client::CreateRoute(const CreateRouteRequest& request) const {
  return CreateRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteServerOutcome EC2Client::CreateRouteServer(const CreateRouteServerRequest& request) const {
  return CreateRouteServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteServerEndpointOutcome EC2Client::CreateRouteServerEndpoint(const CreateRouteServerEndpointRequest& request) const {
  return CreateRouteServerEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteServerPeerOutcome EC2Client::CreateRouteServerPeer(const CreateRouteServerPeerRequest& request) const {
  return CreateRouteServerPeerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouteTableOutcome EC2Client::CreateRouteTable(const CreateRouteTableRequest& request) const {
  return CreateRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSecondaryNetworkOutcome EC2Client::CreateSecondaryNetwork(const CreateSecondaryNetworkRequest& request) const {
  return CreateSecondaryNetworkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSecondarySubnetOutcome EC2Client::CreateSecondarySubnet(const CreateSecondarySubnetRequest& request) const {
  return CreateSecondarySubnetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSecurityGroupOutcome EC2Client::CreateSecurityGroup(const CreateSecurityGroupRequest& request) const {
  return CreateSecurityGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSnapshotOutcome EC2Client::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSnapshotsOutcome EC2Client::CreateSnapshots(const CreateSnapshotsRequest& request) const {
  return CreateSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSpotDatafeedSubscriptionOutcome EC2Client::CreateSpotDatafeedSubscription(
    const CreateSpotDatafeedSubscriptionRequest& request) const {
  return CreateSpotDatafeedSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStoreImageTaskOutcome EC2Client::CreateStoreImageTask(const CreateStoreImageTaskRequest& request) const {
  return CreateStoreImageTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSubnetOutcome EC2Client::CreateSubnet(const CreateSubnetRequest& request) const {
  return CreateSubnetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSubnetCidrReservationOutcome EC2Client::CreateSubnetCidrReservation(const CreateSubnetCidrReservationRequest& request) const {
  return CreateSubnetCidrReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTagsOutcome EC2Client::CreateTags(const CreateTagsRequest& request) const {
  return CreateTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrafficMirrorFilterOutcome EC2Client::CreateTrafficMirrorFilter(const CreateTrafficMirrorFilterRequest& request) const {
  return CreateTrafficMirrorFilterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrafficMirrorFilterRuleOutcome EC2Client::CreateTrafficMirrorFilterRule(const CreateTrafficMirrorFilterRuleRequest& request) const {
  return CreateTrafficMirrorFilterRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrafficMirrorSessionOutcome EC2Client::CreateTrafficMirrorSession(const CreateTrafficMirrorSessionRequest& request) const {
  return CreateTrafficMirrorSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrafficMirrorTargetOutcome EC2Client::CreateTrafficMirrorTarget(const CreateTrafficMirrorTargetRequest& request) const {
  return CreateTrafficMirrorTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayOutcome EC2Client::CreateTransitGateway(const CreateTransitGatewayRequest& request) const {
  return CreateTransitGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayConnectOutcome EC2Client::CreateTransitGatewayConnect(const CreateTransitGatewayConnectRequest& request) const {
  return CreateTransitGatewayConnectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayConnectPeerOutcome EC2Client::CreateTransitGatewayConnectPeer(
    const CreateTransitGatewayConnectPeerRequest& request) const {
  return CreateTransitGatewayConnectPeerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayMeteringPolicyOutcome EC2Client::CreateTransitGatewayMeteringPolicy(
    const CreateTransitGatewayMeteringPolicyRequest& request) const {
  return CreateTransitGatewayMeteringPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayMeteringPolicyEntryOutcome EC2Client::CreateTransitGatewayMeteringPolicyEntry(
    const CreateTransitGatewayMeteringPolicyEntryRequest& request) const {
  return CreateTransitGatewayMeteringPolicyEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayMulticastDomainOutcome EC2Client::CreateTransitGatewayMulticastDomain(
    const CreateTransitGatewayMulticastDomainRequest& request) const {
  return CreateTransitGatewayMulticastDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayPeeringAttachmentOutcome EC2Client::CreateTransitGatewayPeeringAttachment(
    const CreateTransitGatewayPeeringAttachmentRequest& request) const {
  return CreateTransitGatewayPeeringAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayPolicyTableOutcome EC2Client::CreateTransitGatewayPolicyTable(
    const CreateTransitGatewayPolicyTableRequest& request) const {
  return CreateTransitGatewayPolicyTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayPrefixListReferenceOutcome EC2Client::CreateTransitGatewayPrefixListReference(
    const CreateTransitGatewayPrefixListReferenceRequest& request) const {
  return CreateTransitGatewayPrefixListReferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayRouteOutcome EC2Client::CreateTransitGatewayRoute(const CreateTransitGatewayRouteRequest& request) const {
  return CreateTransitGatewayRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayRouteTableOutcome EC2Client::CreateTransitGatewayRouteTable(
    const CreateTransitGatewayRouteTableRequest& request) const {
  return CreateTransitGatewayRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayRouteTableAnnouncementOutcome EC2Client::CreateTransitGatewayRouteTableAnnouncement(
    const CreateTransitGatewayRouteTableAnnouncementRequest& request) const {
  return CreateTransitGatewayRouteTableAnnouncementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTransitGatewayVpcAttachmentOutcome EC2Client::CreateTransitGatewayVpcAttachment(
    const CreateTransitGatewayVpcAttachmentRequest& request) const {
  return CreateTransitGatewayVpcAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVerifiedAccessEndpointOutcome EC2Client::CreateVerifiedAccessEndpoint(const CreateVerifiedAccessEndpointRequest& request) const {
  return CreateVerifiedAccessEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVerifiedAccessGroupOutcome EC2Client::CreateVerifiedAccessGroup(const CreateVerifiedAccessGroupRequest& request) const {
  return CreateVerifiedAccessGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVerifiedAccessInstanceOutcome EC2Client::CreateVerifiedAccessInstance(const CreateVerifiedAccessInstanceRequest& request) const {
  return CreateVerifiedAccessInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVerifiedAccessTrustProviderOutcome EC2Client::CreateVerifiedAccessTrustProvider(
    const CreateVerifiedAccessTrustProviderRequest& request) const {
  return CreateVerifiedAccessTrustProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVolumeOutcome EC2Client::CreateVolume(const CreateVolumeRequest& request) const {
  return CreateVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcOutcome EC2Client::CreateVpc(const CreateVpcRequest& request) const {
  return CreateVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcBlockPublicAccessExclusionOutcome EC2Client::CreateVpcBlockPublicAccessExclusion(
    const CreateVpcBlockPublicAccessExclusionRequest& request) const {
  return CreateVpcBlockPublicAccessExclusionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcEncryptionControlOutcome EC2Client::CreateVpcEncryptionControl(const CreateVpcEncryptionControlRequest& request) const {
  return CreateVpcEncryptionControlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcEndpointOutcome EC2Client::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  return CreateVpcEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcEndpointConnectionNotificationOutcome EC2Client::CreateVpcEndpointConnectionNotification(
    const CreateVpcEndpointConnectionNotificationRequest& request) const {
  return CreateVpcEndpointConnectionNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcEndpointServiceConfigurationOutcome EC2Client::CreateVpcEndpointServiceConfiguration(
    const CreateVpcEndpointServiceConfigurationRequest& request) const {
  return CreateVpcEndpointServiceConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpcPeeringConnectionOutcome EC2Client::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const {
  return CreateVpcPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpnConcentratorOutcome EC2Client::CreateVpnConcentrator(const CreateVpnConcentratorRequest& request) const {
  return CreateVpnConcentratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpnConnectionOutcome EC2Client::CreateVpnConnection(const CreateVpnConnectionRequest& request) const {
  return CreateVpnConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpnConnectionRouteOutcome EC2Client::CreateVpnConnectionRoute(const CreateVpnConnectionRouteRequest& request) const {
  return CreateVpnConnectionRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVpnGatewayOutcome EC2Client::CreateVpnGateway(const CreateVpnGatewayRequest& request) const {
  return CreateVpnGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCapacityManagerDataExportOutcome EC2Client::DeleteCapacityManagerDataExport(
    const DeleteCapacityManagerDataExportRequest& request) const {
  return DeleteCapacityManagerDataExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCarrierGatewayOutcome EC2Client::DeleteCarrierGateway(const DeleteCarrierGatewayRequest& request) const {
  return DeleteCarrierGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteClientVpnEndpointOutcome EC2Client::DeleteClientVpnEndpoint(const DeleteClientVpnEndpointRequest& request) const {
  return DeleteClientVpnEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteClientVpnRouteOutcome EC2Client::DeleteClientVpnRoute(const DeleteClientVpnRouteRequest& request) const {
  return DeleteClientVpnRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCoipCidrOutcome EC2Client::DeleteCoipCidr(const DeleteCoipCidrRequest& request) const {
  return DeleteCoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCoipPoolOutcome EC2Client::DeleteCoipPool(const DeleteCoipPoolRequest& request) const {
  return DeleteCoipPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCustomerGatewayOutcome EC2Client::DeleteCustomerGateway(const DeleteCustomerGatewayRequest& request) const {
  return DeleteCustomerGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDhcpOptionsOutcome EC2Client::DeleteDhcpOptions(const DeleteDhcpOptionsRequest& request) const {
  return DeleteDhcpOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEgressOnlyInternetGatewayOutcome EC2Client::DeleteEgressOnlyInternetGateway(
    const DeleteEgressOnlyInternetGatewayRequest& request) const {
  return DeleteEgressOnlyInternetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFleetsOutcome EC2Client::DeleteFleets(const DeleteFleetsRequest& request) const {
  return DeleteFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFlowLogsOutcome EC2Client::DeleteFlowLogs(const DeleteFlowLogsRequest& request) const {
  return DeleteFlowLogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFpgaImageOutcome EC2Client::DeleteFpgaImage(const DeleteFpgaImageRequest& request) const {
  return DeleteFpgaImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteImageUsageReportOutcome EC2Client::DeleteImageUsageReport(const DeleteImageUsageReportRequest& request) const {
  return DeleteImageUsageReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInstanceConnectEndpointOutcome EC2Client::DeleteInstanceConnectEndpoint(const DeleteInstanceConnectEndpointRequest& request) const {
  return DeleteInstanceConnectEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInstanceEventWindowOutcome EC2Client::DeleteInstanceEventWindow(const DeleteInstanceEventWindowRequest& request) const {
  return DeleteInstanceEventWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInternetGatewayOutcome EC2Client::DeleteInternetGateway(const DeleteInternetGatewayRequest& request) const {
  return DeleteInternetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamOutcome EC2Client::DeleteIpam(const DeleteIpamRequest& request) const {
  return DeleteIpamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamExternalResourceVerificationTokenOutcome EC2Client::DeleteIpamExternalResourceVerificationToken(
    const DeleteIpamExternalResourceVerificationTokenRequest& request) const {
  return DeleteIpamExternalResourceVerificationTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamPolicyOutcome EC2Client::DeleteIpamPolicy(const DeleteIpamPolicyRequest& request) const {
  return DeleteIpamPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamPoolOutcome EC2Client::DeleteIpamPool(const DeleteIpamPoolRequest& request) const {
  return DeleteIpamPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamPrefixListResolverOutcome EC2Client::DeleteIpamPrefixListResolver(const DeleteIpamPrefixListResolverRequest& request) const {
  return DeleteIpamPrefixListResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamPrefixListResolverTargetOutcome EC2Client::DeleteIpamPrefixListResolverTarget(
    const DeleteIpamPrefixListResolverTargetRequest& request) const {
  return DeleteIpamPrefixListResolverTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamResourceDiscoveryOutcome EC2Client::DeleteIpamResourceDiscovery(const DeleteIpamResourceDiscoveryRequest& request) const {
  return DeleteIpamResourceDiscoveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIpamScopeOutcome EC2Client::DeleteIpamScope(const DeleteIpamScopeRequest& request) const {
  return DeleteIpamScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKeyPairOutcome EC2Client::DeleteKeyPair(const DeleteKeyPairRequest& request) const {
  return DeleteKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLaunchTemplateOutcome EC2Client::DeleteLaunchTemplate(const DeleteLaunchTemplateRequest& request) const {
  return DeleteLaunchTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLaunchTemplateVersionsOutcome EC2Client::DeleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest& request) const {
  return DeleteLaunchTemplateVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLocalGatewayRouteOutcome EC2Client::DeleteLocalGatewayRoute(const DeleteLocalGatewayRouteRequest& request) const {
  return DeleteLocalGatewayRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLocalGatewayRouteTableOutcome EC2Client::DeleteLocalGatewayRouteTable(const DeleteLocalGatewayRouteTableRequest& request) const {
  return DeleteLocalGatewayRouteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation(
    const DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& request) const {
  return DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationOutcome{
      InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLocalGatewayRouteTableVpcAssociationOutcome EC2Client::DeleteLocalGatewayRouteTableVpcAssociation(
    const DeleteLocalGatewayRouteTableVpcAssociationRequest& request) const {
  return DeleteLocalGatewayRouteTableVpcAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLocalGatewayVirtualInterfaceOutcome EC2Client::DeleteLocalGatewayVirtualInterface(
    const DeleteLocalGatewayVirtualInterfaceRequest& request) const {
  return DeleteLocalGatewayVirtualInterfaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLocalGatewayVirtualInterfaceGroupOutcome EC2Client::DeleteLocalGatewayVirtualInterfaceGroup(
    const DeleteLocalGatewayVirtualInterfaceGroupRequest& request) const {
  return DeleteLocalGatewayVirtualInterfaceGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteManagedPrefixListOutcome EC2Client::DeleteManagedPrefixList(const DeleteManagedPrefixListRequest& request) const {
  return DeleteManagedPrefixListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNatGatewayOutcome EC2Client::DeleteNatGateway(const DeleteNatGatewayRequest& request) const {
  return DeleteNatGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
