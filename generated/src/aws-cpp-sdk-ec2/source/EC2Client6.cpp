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
#include <aws/ec2/model/LockSnapshotRequest.h>
#include <aws/ec2/model/ModifyAddressAttributeRequest.h>
#include <aws/ec2/model/ModifyAvailabilityZoneGroupRequest.h>
#include <aws/ec2/model/ModifyCapacityReservationFleetRequest.h>
#include <aws/ec2/model/ModifyCapacityReservationRequest.h>
#include <aws/ec2/model/ModifyClientVpnEndpointRequest.h>
#include <aws/ec2/model/ModifyDefaultCreditSpecificationRequest.h>
#include <aws/ec2/model/ModifyEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/ModifyFleetRequest.h>
#include <aws/ec2/model/ModifyFpgaImageAttributeRequest.h>
#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/ec2/model/ModifyIdFormatRequest.h>
#include <aws/ec2/model/ModifyIdentityIdFormatRequest.h>
#include <aws/ec2/model/ModifyImageAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceAttributeRequest.h>
#include <aws/ec2/model/ModifyInstanceCapacityReservationAttributesRequest.h>
#include <aws/ec2/model/ModifyInstanceConnectEndpointRequest.h>
#include <aws/ec2/model/ModifyInstanceCpuOptionsRequest.h>
#include <aws/ec2/model/ModifyInstanceCreditSpecificationRequest.h>
#include <aws/ec2/model/ModifyInstanceEventStartTimeRequest.h>
#include <aws/ec2/model/ModifyInstanceEventWindowRequest.h>
#include <aws/ec2/model/ModifyInstanceMaintenanceOptionsRequest.h>
#include <aws/ec2/model/ModifyInstanceMetadataDefaultsRequest.h>
#include <aws/ec2/model/ModifyInstanceMetadataOptionsRequest.h>
#include <aws/ec2/model/ModifyInstanceNetworkPerformanceOptionsRequest.h>
#include <aws/ec2/model/ModifyInstancePlacementRequest.h>
#include <aws/ec2/model/ModifyIpamPolicyAllocationRulesRequest.h>
#include <aws/ec2/model/ModifyIpamPoolRequest.h>
#include <aws/ec2/model/ModifyIpamPrefixListResolverRequest.h>
#include <aws/ec2/model/ModifyIpamPrefixListResolverTargetRequest.h>
#include <aws/ec2/model/ModifyIpamRequest.h>
#include <aws/ec2/model/ModifyIpamResourceCidrRequest.h>
#include <aws/ec2/model/ModifyIpamResourceDiscoveryRequest.h>
#include <aws/ec2/model/ModifyIpamScopeRequest.h>
#include <aws/ec2/model/ModifyLaunchTemplateRequest.h>
#include <aws/ec2/model/ModifyLocalGatewayRouteRequest.h>
#include <aws/ec2/model/ModifyManagedPrefixListRequest.h>
#include <aws/ec2/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <aws/ec2/model/ModifyPrivateDnsNameOptionsRequest.h>
#include <aws/ec2/model/ModifyPublicIpDnsNameOptionsRequest.h>
#include <aws/ec2/model/ModifyReservedInstancesRequest.h>
#include <aws/ec2/model/ModifyRouteServerRequest.h>
#include <aws/ec2/model/ModifySecurityGroupRulesRequest.h>
#include <aws/ec2/model/ModifySnapshotAttributeRequest.h>
#include <aws/ec2/model/ModifySnapshotTierRequest.h>
#include <aws/ec2/model/ModifySpotFleetRequestRequest.h>
#include <aws/ec2/model/ModifySubnetAttributeRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterNetworkServicesRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorFilterRuleRequest.h>
#include <aws/ec2/model/ModifyTrafficMirrorSessionRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayMeteringPolicyRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayPrefixListReferenceRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayRequest.h>
#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointPolicyRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessEndpointRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessGroupPolicyRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessGroupRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessInstanceLoggingConfigurationRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessInstanceRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderRequest.h>
#include <aws/ec2/model/ModifyVolumeAttributeRequest.h>
#include <aws/ec2/model/ModifyVolumeRequest.h>
#include <aws/ec2/model/ModifyVpcAttributeRequest.h>
#include <aws/ec2/model/ModifyVpcBlockPublicAccessExclusionRequest.h>
#include <aws/ec2/model/ModifyVpcBlockPublicAccessOptionsRequest.h>
#include <aws/ec2/model/ModifyVpcEncryptionControlRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointConnectionNotificationRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServiceConfigurationRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePayerResponsibilityRequest.h>
#include <aws/ec2/model/ModifyVpcEndpointServicePermissionsRequest.h>
#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsRequest.h>
#include <aws/ec2/model/ModifyVpcTenancyRequest.h>
#include <aws/ec2/model/ModifyVpnConnectionOptionsRequest.h>
#include <aws/ec2/model/ModifyVpnConnectionRequest.h>
#include <aws/ec2/model/ModifyVpnTunnelCertificateRequest.h>
#include <aws/ec2/model/ModifyVpnTunnelOptionsRequest.h>
#include <aws/ec2/model/MonitorInstancesRequest.h>
#include <aws/ec2/model/MoveAddressToVpcRequest.h>
#include <aws/ec2/model/MoveByoipCidrToIpamRequest.h>
#include <aws/ec2/model/MoveCapacityReservationInstancesRequest.h>
#include <aws/ec2/model/ProvisionByoipCidrRequest.h>
#include <aws/ec2/model/ProvisionIpamByoasnRequest.h>
#include <aws/ec2/model/ProvisionIpamPoolCidrRequest.h>
#include <aws/ec2/model/ProvisionPublicIpv4PoolCidrRequest.h>
#include <aws/ec2/model/PurchaseCapacityBlockExtensionRequest.h>
#include <aws/ec2/model/PurchaseCapacityBlockRequest.h>
#include <aws/ec2/model/PurchaseHostReservationRequest.h>
#include <aws/ec2/model/PurchaseReservedInstancesOfferingRequest.h>
#include <aws/ec2/model/PurchaseScheduledInstancesRequest.h>
#include <aws/ec2/model/RebootInstancesRequest.h>
#include <aws/ec2/model/RegisterImageRequest.h>
#include <aws/ec2/model/RegisterInstanceEventNotificationAttributesRequest.h>
#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupMembersRequest.h>
#include <aws/ec2/model/RegisterTransitGatewayMulticastGroupSourcesRequest.h>
#include <aws/ec2/model/RejectCapacityReservationBillingOwnershipRequest.h>
#include <aws/ec2/model/RejectTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/ec2/model/RejectTransitGatewayPeeringAttachmentRequest.h>
#include <aws/ec2/model/RejectTransitGatewayVpcAttachmentRequest.h>
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

LockSnapshotOutcome EC2Client::LockSnapshot(const LockSnapshotRequest& request) const {
  return LockSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyAddressAttributeOutcome EC2Client::ModifyAddressAttribute(const ModifyAddressAttributeRequest& request) const {
  return ModifyAddressAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyAvailabilityZoneGroupOutcome EC2Client::ModifyAvailabilityZoneGroup(const ModifyAvailabilityZoneGroupRequest& request) const {
  return ModifyAvailabilityZoneGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyCapacityReservationOutcome EC2Client::ModifyCapacityReservation(const ModifyCapacityReservationRequest& request) const {
  return ModifyCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyCapacityReservationFleetOutcome EC2Client::ModifyCapacityReservationFleet(
    const ModifyCapacityReservationFleetRequest& request) const {
  return ModifyCapacityReservationFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyClientVpnEndpointOutcome EC2Client::ModifyClientVpnEndpoint(const ModifyClientVpnEndpointRequest& request) const {
  return ModifyClientVpnEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyDefaultCreditSpecificationOutcome EC2Client::ModifyDefaultCreditSpecification(
    const ModifyDefaultCreditSpecificationRequest& request) const {
  return ModifyDefaultCreditSpecificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyEbsDefaultKmsKeyIdOutcome EC2Client::ModifyEbsDefaultKmsKeyId(const ModifyEbsDefaultKmsKeyIdRequest& request) const {
  return ModifyEbsDefaultKmsKeyIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyFleetOutcome EC2Client::ModifyFleet(const ModifyFleetRequest& request) const {
  return ModifyFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyFpgaImageAttributeOutcome EC2Client::ModifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest& request) const {
  return ModifyFpgaImageAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyHostsOutcome EC2Client::ModifyHosts(const ModifyHostsRequest& request) const {
  return ModifyHostsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIdFormatOutcome EC2Client::ModifyIdFormat(const ModifyIdFormatRequest& request) const {
  return ModifyIdFormatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIdentityIdFormatOutcome EC2Client::ModifyIdentityIdFormat(const ModifyIdentityIdFormatRequest& request) const {
  return ModifyIdentityIdFormatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyImageAttributeOutcome EC2Client::ModifyImageAttribute(const ModifyImageAttributeRequest& request) const {
  return ModifyImageAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceAttributeOutcome EC2Client::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest& request) const {
  return ModifyInstanceAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceCapacityReservationAttributesOutcome EC2Client::ModifyInstanceCapacityReservationAttributes(
    const ModifyInstanceCapacityReservationAttributesRequest& request) const {
  return ModifyInstanceCapacityReservationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceConnectEndpointOutcome EC2Client::ModifyInstanceConnectEndpoint(const ModifyInstanceConnectEndpointRequest& request) const {
  return ModifyInstanceConnectEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceCpuOptionsOutcome EC2Client::ModifyInstanceCpuOptions(const ModifyInstanceCpuOptionsRequest& request) const {
  return ModifyInstanceCpuOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceCreditSpecificationOutcome EC2Client::ModifyInstanceCreditSpecification(
    const ModifyInstanceCreditSpecificationRequest& request) const {
  return ModifyInstanceCreditSpecificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceEventStartTimeOutcome EC2Client::ModifyInstanceEventStartTime(const ModifyInstanceEventStartTimeRequest& request) const {
  return ModifyInstanceEventStartTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceEventWindowOutcome EC2Client::ModifyInstanceEventWindow(const ModifyInstanceEventWindowRequest& request) const {
  return ModifyInstanceEventWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceMaintenanceOptionsOutcome EC2Client::ModifyInstanceMaintenanceOptions(
    const ModifyInstanceMaintenanceOptionsRequest& request) const {
  return ModifyInstanceMaintenanceOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceMetadataDefaultsOutcome EC2Client::ModifyInstanceMetadataDefaults(
    const ModifyInstanceMetadataDefaultsRequest& request) const {
  return ModifyInstanceMetadataDefaultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceMetadataOptionsOutcome EC2Client::ModifyInstanceMetadataOptions(const ModifyInstanceMetadataOptionsRequest& request) const {
  return ModifyInstanceMetadataOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstanceNetworkPerformanceOptionsOutcome EC2Client::ModifyInstanceNetworkPerformanceOptions(
    const ModifyInstanceNetworkPerformanceOptionsRequest& request) const {
  return ModifyInstanceNetworkPerformanceOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyInstancePlacementOutcome EC2Client::ModifyInstancePlacement(const ModifyInstancePlacementRequest& request) const {
  return ModifyInstancePlacementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamOutcome EC2Client::ModifyIpam(const ModifyIpamRequest& request) const {
  return ModifyIpamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamPolicyAllocationRulesOutcome EC2Client::ModifyIpamPolicyAllocationRules(
    const ModifyIpamPolicyAllocationRulesRequest& request) const {
  return ModifyIpamPolicyAllocationRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamPoolOutcome EC2Client::ModifyIpamPool(const ModifyIpamPoolRequest& request) const {
  return ModifyIpamPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamPrefixListResolverOutcome EC2Client::ModifyIpamPrefixListResolver(const ModifyIpamPrefixListResolverRequest& request) const {
  return ModifyIpamPrefixListResolverOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamPrefixListResolverTargetOutcome EC2Client::ModifyIpamPrefixListResolverTarget(
    const ModifyIpamPrefixListResolverTargetRequest& request) const {
  return ModifyIpamPrefixListResolverTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamResourceCidrOutcome EC2Client::ModifyIpamResourceCidr(const ModifyIpamResourceCidrRequest& request) const {
  return ModifyIpamResourceCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamResourceDiscoveryOutcome EC2Client::ModifyIpamResourceDiscovery(const ModifyIpamResourceDiscoveryRequest& request) const {
  return ModifyIpamResourceDiscoveryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyIpamScopeOutcome EC2Client::ModifyIpamScope(const ModifyIpamScopeRequest& request) const {
  return ModifyIpamScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyLaunchTemplateOutcome EC2Client::ModifyLaunchTemplate(const ModifyLaunchTemplateRequest& request) const {
  return ModifyLaunchTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyLocalGatewayRouteOutcome EC2Client::ModifyLocalGatewayRoute(const ModifyLocalGatewayRouteRequest& request) const {
  return ModifyLocalGatewayRouteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyManagedPrefixListOutcome EC2Client::ModifyManagedPrefixList(const ModifyManagedPrefixListRequest& request) const {
  return ModifyManagedPrefixListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyNetworkInterfaceAttributeOutcome EC2Client::ModifyNetworkInterfaceAttribute(
    const ModifyNetworkInterfaceAttributeRequest& request) const {
  return ModifyNetworkInterfaceAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyPrivateDnsNameOptionsOutcome EC2Client::ModifyPrivateDnsNameOptions(const ModifyPrivateDnsNameOptionsRequest& request) const {
  return ModifyPrivateDnsNameOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyPublicIpDnsNameOptionsOutcome EC2Client::ModifyPublicIpDnsNameOptions(const ModifyPublicIpDnsNameOptionsRequest& request) const {
  return ModifyPublicIpDnsNameOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyReservedInstancesOutcome EC2Client::ModifyReservedInstances(const ModifyReservedInstancesRequest& request) const {
  return ModifyReservedInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyRouteServerOutcome EC2Client::ModifyRouteServer(const ModifyRouteServerRequest& request) const {
  return ModifyRouteServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifySecurityGroupRulesOutcome EC2Client::ModifySecurityGroupRules(const ModifySecurityGroupRulesRequest& request) const {
  return ModifySecurityGroupRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifySnapshotAttributeOutcome EC2Client::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest& request) const {
  return ModifySnapshotAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifySnapshotTierOutcome EC2Client::ModifySnapshotTier(const ModifySnapshotTierRequest& request) const {
  return ModifySnapshotTierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifySpotFleetRequestOutcome EC2Client::ModifySpotFleetRequest(const ModifySpotFleetRequestRequest& request) const {
  return ModifySpotFleetRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifySubnetAttributeOutcome EC2Client::ModifySubnetAttribute(const ModifySubnetAttributeRequest& request) const {
  return ModifySubnetAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTrafficMirrorFilterNetworkServicesOutcome EC2Client::ModifyTrafficMirrorFilterNetworkServices(
    const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const {
  return ModifyTrafficMirrorFilterNetworkServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTrafficMirrorFilterRuleOutcome EC2Client::ModifyTrafficMirrorFilterRule(const ModifyTrafficMirrorFilterRuleRequest& request) const {
  return ModifyTrafficMirrorFilterRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTrafficMirrorSessionOutcome EC2Client::ModifyTrafficMirrorSession(const ModifyTrafficMirrorSessionRequest& request) const {
  return ModifyTrafficMirrorSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTransitGatewayOutcome EC2Client::ModifyTransitGateway(const ModifyTransitGatewayRequest& request) const {
  return ModifyTransitGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTransitGatewayMeteringPolicyOutcome EC2Client::ModifyTransitGatewayMeteringPolicy(
    const ModifyTransitGatewayMeteringPolicyRequest& request) const {
  return ModifyTransitGatewayMeteringPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTransitGatewayPrefixListReferenceOutcome EC2Client::ModifyTransitGatewayPrefixListReference(
    const ModifyTransitGatewayPrefixListReferenceRequest& request) const {
  return ModifyTransitGatewayPrefixListReferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyTransitGatewayVpcAttachmentOutcome EC2Client::ModifyTransitGatewayVpcAttachment(
    const ModifyTransitGatewayVpcAttachmentRequest& request) const {
  return ModifyTransitGatewayVpcAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessEndpointOutcome EC2Client::ModifyVerifiedAccessEndpoint(const ModifyVerifiedAccessEndpointRequest& request) const {
  return ModifyVerifiedAccessEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessEndpointPolicyOutcome EC2Client::ModifyVerifiedAccessEndpointPolicy(
    const ModifyVerifiedAccessEndpointPolicyRequest& request) const {
  return ModifyVerifiedAccessEndpointPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessGroupOutcome EC2Client::ModifyVerifiedAccessGroup(const ModifyVerifiedAccessGroupRequest& request) const {
  return ModifyVerifiedAccessGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessGroupPolicyOutcome EC2Client::ModifyVerifiedAccessGroupPolicy(
    const ModifyVerifiedAccessGroupPolicyRequest& request) const {
  return ModifyVerifiedAccessGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessInstanceOutcome EC2Client::ModifyVerifiedAccessInstance(const ModifyVerifiedAccessInstanceRequest& request) const {
  return ModifyVerifiedAccessInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessInstanceLoggingConfigurationOutcome EC2Client::ModifyVerifiedAccessInstanceLoggingConfiguration(
    const ModifyVerifiedAccessInstanceLoggingConfigurationRequest& request) const {
  return ModifyVerifiedAccessInstanceLoggingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVerifiedAccessTrustProviderOutcome EC2Client::ModifyVerifiedAccessTrustProvider(
    const ModifyVerifiedAccessTrustProviderRequest& request) const {
  return ModifyVerifiedAccessTrustProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVolumeOutcome EC2Client::ModifyVolume(const ModifyVolumeRequest& request) const {
  return ModifyVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVolumeAttributeOutcome EC2Client::ModifyVolumeAttribute(const ModifyVolumeAttributeRequest& request) const {
  return ModifyVolumeAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcAttributeOutcome EC2Client::ModifyVpcAttribute(const ModifyVpcAttributeRequest& request) const {
  return ModifyVpcAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcBlockPublicAccessExclusionOutcome EC2Client::ModifyVpcBlockPublicAccessExclusion(
    const ModifyVpcBlockPublicAccessExclusionRequest& request) const {
  return ModifyVpcBlockPublicAccessExclusionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcBlockPublicAccessOptionsOutcome EC2Client::ModifyVpcBlockPublicAccessOptions(
    const ModifyVpcBlockPublicAccessOptionsRequest& request) const {
  return ModifyVpcBlockPublicAccessOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcEncryptionControlOutcome EC2Client::ModifyVpcEncryptionControl(const ModifyVpcEncryptionControlRequest& request) const {
  return ModifyVpcEncryptionControlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcEndpointOutcome EC2Client::ModifyVpcEndpoint(const ModifyVpcEndpointRequest& request) const {
  return ModifyVpcEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcEndpointConnectionNotificationOutcome EC2Client::ModifyVpcEndpointConnectionNotification(
    const ModifyVpcEndpointConnectionNotificationRequest& request) const {
  return ModifyVpcEndpointConnectionNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcEndpointServiceConfigurationOutcome EC2Client::ModifyVpcEndpointServiceConfiguration(
    const ModifyVpcEndpointServiceConfigurationRequest& request) const {
  return ModifyVpcEndpointServiceConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcEndpointServicePayerResponsibilityOutcome EC2Client::ModifyVpcEndpointServicePayerResponsibility(
    const ModifyVpcEndpointServicePayerResponsibilityRequest& request) const {
  return ModifyVpcEndpointServicePayerResponsibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcEndpointServicePermissionsOutcome EC2Client::ModifyVpcEndpointServicePermissions(
    const ModifyVpcEndpointServicePermissionsRequest& request) const {
  return ModifyVpcEndpointServicePermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcPeeringConnectionOptionsOutcome EC2Client::ModifyVpcPeeringConnectionOptions(
    const ModifyVpcPeeringConnectionOptionsRequest& request) const {
  return ModifyVpcPeeringConnectionOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpcTenancyOutcome EC2Client::ModifyVpcTenancy(const ModifyVpcTenancyRequest& request) const {
  return ModifyVpcTenancyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpnConnectionOutcome EC2Client::ModifyVpnConnection(const ModifyVpnConnectionRequest& request) const {
  return ModifyVpnConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpnConnectionOptionsOutcome EC2Client::ModifyVpnConnectionOptions(const ModifyVpnConnectionOptionsRequest& request) const {
  return ModifyVpnConnectionOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpnTunnelCertificateOutcome EC2Client::ModifyVpnTunnelCertificate(const ModifyVpnTunnelCertificateRequest& request) const {
  return ModifyVpnTunnelCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ModifyVpnTunnelOptionsOutcome EC2Client::ModifyVpnTunnelOptions(const ModifyVpnTunnelOptionsRequest& request) const {
  return ModifyVpnTunnelOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

MonitorInstancesOutcome EC2Client::MonitorInstances(const MonitorInstancesRequest& request) const {
  return MonitorInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

MoveAddressToVpcOutcome EC2Client::MoveAddressToVpc(const MoveAddressToVpcRequest& request) const {
  return MoveAddressToVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

MoveByoipCidrToIpamOutcome EC2Client::MoveByoipCidrToIpam(const MoveByoipCidrToIpamRequest& request) const {
  return MoveByoipCidrToIpamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

MoveCapacityReservationInstancesOutcome EC2Client::MoveCapacityReservationInstances(
    const MoveCapacityReservationInstancesRequest& request) const {
  return MoveCapacityReservationInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ProvisionByoipCidrOutcome EC2Client::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const {
  return ProvisionByoipCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ProvisionIpamByoasnOutcome EC2Client::ProvisionIpamByoasn(const ProvisionIpamByoasnRequest& request) const {
  return ProvisionIpamByoasnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ProvisionIpamPoolCidrOutcome EC2Client::ProvisionIpamPoolCidr(const ProvisionIpamPoolCidrRequest& request) const {
  return ProvisionIpamPoolCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ProvisionPublicIpv4PoolCidrOutcome EC2Client::ProvisionPublicIpv4PoolCidr(const ProvisionPublicIpv4PoolCidrRequest& request) const {
  return ProvisionPublicIpv4PoolCidrOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseCapacityBlockOutcome EC2Client::PurchaseCapacityBlock(const PurchaseCapacityBlockRequest& request) const {
  return PurchaseCapacityBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseCapacityBlockExtensionOutcome EC2Client::PurchaseCapacityBlockExtension(
    const PurchaseCapacityBlockExtensionRequest& request) const {
  return PurchaseCapacityBlockExtensionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseHostReservationOutcome EC2Client::PurchaseHostReservation(const PurchaseHostReservationRequest& request) const {
  return PurchaseHostReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseReservedInstancesOfferingOutcome EC2Client::PurchaseReservedInstancesOffering(
    const PurchaseReservedInstancesOfferingRequest& request) const {
  return PurchaseReservedInstancesOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseScheduledInstancesOutcome EC2Client::PurchaseScheduledInstances(const PurchaseScheduledInstancesRequest& request) const {
  return PurchaseScheduledInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RebootInstancesOutcome EC2Client::RebootInstances(const RebootInstancesRequest& request) const {
  return RebootInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterImageOutcome EC2Client::RegisterImage(const RegisterImageRequest& request) const {
  return RegisterImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterInstanceEventNotificationAttributesOutcome EC2Client::RegisterInstanceEventNotificationAttributes(
    const RegisterInstanceEventNotificationAttributesRequest& request) const {
  return RegisterInstanceEventNotificationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterTransitGatewayMulticastGroupMembersOutcome EC2Client::RegisterTransitGatewayMulticastGroupMembers(
    const RegisterTransitGatewayMulticastGroupMembersRequest& request) const {
  return RegisterTransitGatewayMulticastGroupMembersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::RegisterTransitGatewayMulticastGroupSources(
    const RegisterTransitGatewayMulticastGroupSourcesRequest& request) const {
  return RegisterTransitGatewayMulticastGroupSourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectCapacityReservationBillingOwnershipOutcome EC2Client::RejectCapacityReservationBillingOwnership(
    const RejectCapacityReservationBillingOwnershipRequest& request) const {
  return RejectCapacityReservationBillingOwnershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectTransitGatewayMulticastDomainAssociationsOutcome EC2Client::RejectTransitGatewayMulticastDomainAssociations(
    const RejectTransitGatewayMulticastDomainAssociationsRequest& request) const {
  return RejectTransitGatewayMulticastDomainAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectTransitGatewayPeeringAttachmentOutcome EC2Client::RejectTransitGatewayPeeringAttachment(
    const RejectTransitGatewayPeeringAttachmentRequest& request) const {
  return RejectTransitGatewayPeeringAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectTransitGatewayVpcAttachmentOutcome EC2Client::RejectTransitGatewayVpcAttachment(
    const RejectTransitGatewayVpcAttachmentRequest& request) const {
  return RejectTransitGatewayVpcAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
