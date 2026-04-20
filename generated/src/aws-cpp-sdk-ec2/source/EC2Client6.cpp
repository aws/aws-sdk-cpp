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
#include <aws/ec2/model/ListImagesInRecycleBinRequest.h>
#include <aws/ec2/model/ListSnapshotsInRecycleBinRequest.h>
#include <aws/ec2/model/ListVolumesInRecycleBinRequest.h>
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

ListImagesInRecycleBinOutcome EC2Client::ListImagesInRecycleBin(const ListImagesInRecycleBinRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImagesInRecycleBinOutcome(result.GetResultWithOwnership())
                            : ListImagesInRecycleBinOutcome(std::move(result.GetError()));
}

ListSnapshotsInRecycleBinOutcome EC2Client::ListSnapshotsInRecycleBin(const ListSnapshotsInRecycleBinRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSnapshotsInRecycleBinOutcome(result.GetResultWithOwnership())
                            : ListSnapshotsInRecycleBinOutcome(std::move(result.GetError()));
}

ListVolumesInRecycleBinOutcome EC2Client::ListVolumesInRecycleBin(const ListVolumesInRecycleBinRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListVolumesInRecycleBinOutcome(result.GetResultWithOwnership())
                            : ListVolumesInRecycleBinOutcome(std::move(result.GetError()));
}

LockSnapshotOutcome EC2Client::LockSnapshot(const LockSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? LockSnapshotOutcome(result.GetResultWithOwnership()) : LockSnapshotOutcome(std::move(result.GetError()));
}

ModifyAddressAttributeOutcome EC2Client::ModifyAddressAttribute(const ModifyAddressAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyAddressAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyAddressAttributeOutcome(std::move(result.GetError()));
}

ModifyAvailabilityZoneGroupOutcome EC2Client::ModifyAvailabilityZoneGroup(const ModifyAvailabilityZoneGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyAvailabilityZoneGroupOutcome(result.GetResultWithOwnership())
                            : ModifyAvailabilityZoneGroupOutcome(std::move(result.GetError()));
}

ModifyCapacityReservationOutcome EC2Client::ModifyCapacityReservation(const ModifyCapacityReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCapacityReservationOutcome(result.GetResultWithOwnership())
                            : ModifyCapacityReservationOutcome(std::move(result.GetError()));
}

ModifyCapacityReservationFleetOutcome EC2Client::ModifyCapacityReservationFleet(
    const ModifyCapacityReservationFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCapacityReservationFleetOutcome(result.GetResultWithOwnership())
                            : ModifyCapacityReservationFleetOutcome(std::move(result.GetError()));
}

ModifyClientVpnEndpointOutcome EC2Client::ModifyClientVpnEndpoint(const ModifyClientVpnEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClientVpnEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyClientVpnEndpointOutcome(std::move(result.GetError()));
}

ModifyDefaultCreditSpecificationOutcome EC2Client::ModifyDefaultCreditSpecification(
    const ModifyDefaultCreditSpecificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDefaultCreditSpecificationOutcome(result.GetResultWithOwnership())
                            : ModifyDefaultCreditSpecificationOutcome(std::move(result.GetError()));
}

ModifyEbsDefaultKmsKeyIdOutcome EC2Client::ModifyEbsDefaultKmsKeyId(const ModifyEbsDefaultKmsKeyIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEbsDefaultKmsKeyIdOutcome(result.GetResultWithOwnership())
                            : ModifyEbsDefaultKmsKeyIdOutcome(std::move(result.GetError()));
}

ModifyFleetOutcome EC2Client::ModifyFleet(const ModifyFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyFleetOutcome(result.GetResultWithOwnership()) : ModifyFleetOutcome(std::move(result.GetError()));
}

ModifyFpgaImageAttributeOutcome EC2Client::ModifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyFpgaImageAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyFpgaImageAttributeOutcome(std::move(result.GetError()));
}

ModifyHostsOutcome EC2Client::ModifyHosts(const ModifyHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyHostsOutcome(result.GetResultWithOwnership()) : ModifyHostsOutcome(std::move(result.GetError()));
}

ModifyIdFormatOutcome EC2Client::ModifyIdFormat(const ModifyIdFormatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIdFormatOutcome(result.GetResultWithOwnership()) : ModifyIdFormatOutcome(std::move(result.GetError()));
}

ModifyIdentityIdFormatOutcome EC2Client::ModifyIdentityIdFormat(const ModifyIdentityIdFormatRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIdentityIdFormatOutcome(result.GetResultWithOwnership())
                            : ModifyIdentityIdFormatOutcome(std::move(result.GetError()));
}

ModifyImageAttributeOutcome EC2Client::ModifyImageAttribute(const ModifyImageAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyImageAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyImageAttributeOutcome(std::move(result.GetError()));
}

ModifyInstanceAttributeOutcome EC2Client::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceAttributeOutcome(std::move(result.GetError()));
}

ModifyInstanceCapacityReservationAttributesOutcome EC2Client::ModifyInstanceCapacityReservationAttributes(
    const ModifyInstanceCapacityReservationAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceCapacityReservationAttributesOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceCapacityReservationAttributesOutcome(std::move(result.GetError()));
}

ModifyInstanceConnectEndpointOutcome EC2Client::ModifyInstanceConnectEndpoint(const ModifyInstanceConnectEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceConnectEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceConnectEndpointOutcome(std::move(result.GetError()));
}

ModifyInstanceCpuOptionsOutcome EC2Client::ModifyInstanceCpuOptions(const ModifyInstanceCpuOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceCpuOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceCpuOptionsOutcome(std::move(result.GetError()));
}

ModifyInstanceCreditSpecificationOutcome EC2Client::ModifyInstanceCreditSpecification(
    const ModifyInstanceCreditSpecificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceCreditSpecificationOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceCreditSpecificationOutcome(std::move(result.GetError()));
}

ModifyInstanceEventStartTimeOutcome EC2Client::ModifyInstanceEventStartTime(const ModifyInstanceEventStartTimeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceEventStartTimeOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceEventStartTimeOutcome(std::move(result.GetError()));
}

ModifyInstanceEventWindowOutcome EC2Client::ModifyInstanceEventWindow(const ModifyInstanceEventWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceEventWindowOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceEventWindowOutcome(std::move(result.GetError()));
}

ModifyInstanceMaintenanceOptionsOutcome EC2Client::ModifyInstanceMaintenanceOptions(
    const ModifyInstanceMaintenanceOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceMaintenanceOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceMaintenanceOptionsOutcome(std::move(result.GetError()));
}

ModifyInstanceMetadataDefaultsOutcome EC2Client::ModifyInstanceMetadataDefaults(
    const ModifyInstanceMetadataDefaultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceMetadataDefaultsOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceMetadataDefaultsOutcome(std::move(result.GetError()));
}

ModifyInstanceMetadataOptionsOutcome EC2Client::ModifyInstanceMetadataOptions(const ModifyInstanceMetadataOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceMetadataOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceMetadataOptionsOutcome(std::move(result.GetError()));
}

ModifyInstanceNetworkPerformanceOptionsOutcome EC2Client::ModifyInstanceNetworkPerformanceOptions(
    const ModifyInstanceNetworkPerformanceOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceNetworkPerformanceOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceNetworkPerformanceOptionsOutcome(std::move(result.GetError()));
}

ModifyInstancePlacementOutcome EC2Client::ModifyInstancePlacement(const ModifyInstancePlacementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstancePlacementOutcome(result.GetResultWithOwnership())
                            : ModifyInstancePlacementOutcome(std::move(result.GetError()));
}

ModifyIpamOutcome EC2Client::ModifyIpam(const ModifyIpamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamOutcome(result.GetResultWithOwnership()) : ModifyIpamOutcome(std::move(result.GetError()));
}

ModifyIpamPolicyAllocationRulesOutcome EC2Client::ModifyIpamPolicyAllocationRules(
    const ModifyIpamPolicyAllocationRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamPolicyAllocationRulesOutcome(result.GetResultWithOwnership())
                            : ModifyIpamPolicyAllocationRulesOutcome(std::move(result.GetError()));
}

ModifyIpamPoolOutcome EC2Client::ModifyIpamPool(const ModifyIpamPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamPoolOutcome(result.GetResultWithOwnership()) : ModifyIpamPoolOutcome(std::move(result.GetError()));
}

ModifyIpamPrefixListResolverOutcome EC2Client::ModifyIpamPrefixListResolver(const ModifyIpamPrefixListResolverRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamPrefixListResolverOutcome(result.GetResultWithOwnership())
                            : ModifyIpamPrefixListResolverOutcome(std::move(result.GetError()));
}

ModifyIpamPrefixListResolverTargetOutcome EC2Client::ModifyIpamPrefixListResolverTarget(
    const ModifyIpamPrefixListResolverTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamPrefixListResolverTargetOutcome(result.GetResultWithOwnership())
                            : ModifyIpamPrefixListResolverTargetOutcome(std::move(result.GetError()));
}

ModifyIpamResourceCidrOutcome EC2Client::ModifyIpamResourceCidr(const ModifyIpamResourceCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamResourceCidrOutcome(result.GetResultWithOwnership())
                            : ModifyIpamResourceCidrOutcome(std::move(result.GetError()));
}

ModifyIpamResourceDiscoveryOutcome EC2Client::ModifyIpamResourceDiscovery(const ModifyIpamResourceDiscoveryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamResourceDiscoveryOutcome(result.GetResultWithOwnership())
                            : ModifyIpamResourceDiscoveryOutcome(std::move(result.GetError()));
}

ModifyIpamScopeOutcome EC2Client::ModifyIpamScope(const ModifyIpamScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIpamScopeOutcome(result.GetResultWithOwnership())
                            : ModifyIpamScopeOutcome(std::move(result.GetError()));
}

ModifyLaunchTemplateOutcome EC2Client::ModifyLaunchTemplate(const ModifyLaunchTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyLaunchTemplateOutcome(result.GetResultWithOwnership())
                            : ModifyLaunchTemplateOutcome(std::move(result.GetError()));
}

ModifyLocalGatewayRouteOutcome EC2Client::ModifyLocalGatewayRoute(const ModifyLocalGatewayRouteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyLocalGatewayRouteOutcome(result.GetResultWithOwnership())
                            : ModifyLocalGatewayRouteOutcome(std::move(result.GetError()));
}

ModifyManagedPrefixListOutcome EC2Client::ModifyManagedPrefixList(const ModifyManagedPrefixListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyManagedPrefixListOutcome(result.GetResultWithOwnership())
                            : ModifyManagedPrefixListOutcome(std::move(result.GetError()));
}

ModifyNetworkInterfaceAttributeOutcome EC2Client::ModifyNetworkInterfaceAttribute(
    const ModifyNetworkInterfaceAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyNetworkInterfaceAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyNetworkInterfaceAttributeOutcome(std::move(result.GetError()));
}

ModifyPrivateDnsNameOptionsOutcome EC2Client::ModifyPrivateDnsNameOptions(const ModifyPrivateDnsNameOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyPrivateDnsNameOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyPrivateDnsNameOptionsOutcome(std::move(result.GetError()));
}

ModifyPublicIpDnsNameOptionsOutcome EC2Client::ModifyPublicIpDnsNameOptions(const ModifyPublicIpDnsNameOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyPublicIpDnsNameOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyPublicIpDnsNameOptionsOutcome(std::move(result.GetError()));
}

ModifyReservedInstancesOutcome EC2Client::ModifyReservedInstances(const ModifyReservedInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReservedInstancesOutcome(result.GetResultWithOwnership())
                            : ModifyReservedInstancesOutcome(std::move(result.GetError()));
}

ModifyRouteServerOutcome EC2Client::ModifyRouteServer(const ModifyRouteServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyRouteServerOutcome(result.GetResultWithOwnership())
                            : ModifyRouteServerOutcome(std::move(result.GetError()));
}

ModifySecurityGroupRulesOutcome EC2Client::ModifySecurityGroupRules(const ModifySecurityGroupRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySecurityGroupRulesOutcome(result.GetResultWithOwnership())
                            : ModifySecurityGroupRulesOutcome(std::move(result.GetError()));
}

ModifySnapshotAttributeOutcome EC2Client::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySnapshotAttributeOutcome(result.GetResultWithOwnership())
                            : ModifySnapshotAttributeOutcome(std::move(result.GetError()));
}

ModifySnapshotTierOutcome EC2Client::ModifySnapshotTier(const ModifySnapshotTierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySnapshotTierOutcome(result.GetResultWithOwnership())
                            : ModifySnapshotTierOutcome(std::move(result.GetError()));
}

ModifySpotFleetRequestOutcome EC2Client::ModifySpotFleetRequest(const ModifySpotFleetRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySpotFleetRequestOutcome(result.GetResultWithOwnership())
                            : ModifySpotFleetRequestOutcome(std::move(result.GetError()));
}

ModifySubnetAttributeOutcome EC2Client::ModifySubnetAttribute(const ModifySubnetAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySubnetAttributeOutcome(result.GetResultWithOwnership())
                            : ModifySubnetAttributeOutcome(std::move(result.GetError()));
}

ModifyTrafficMirrorFilterNetworkServicesOutcome EC2Client::ModifyTrafficMirrorFilterNetworkServices(
    const ModifyTrafficMirrorFilterNetworkServicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTrafficMirrorFilterNetworkServicesOutcome(result.GetResultWithOwnership())
                            : ModifyTrafficMirrorFilterNetworkServicesOutcome(std::move(result.GetError()));
}

ModifyTrafficMirrorFilterRuleOutcome EC2Client::ModifyTrafficMirrorFilterRule(const ModifyTrafficMirrorFilterRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTrafficMirrorFilterRuleOutcome(result.GetResultWithOwnership())
                            : ModifyTrafficMirrorFilterRuleOutcome(std::move(result.GetError()));
}

ModifyTrafficMirrorSessionOutcome EC2Client::ModifyTrafficMirrorSession(const ModifyTrafficMirrorSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTrafficMirrorSessionOutcome(result.GetResultWithOwnership())
                            : ModifyTrafficMirrorSessionOutcome(std::move(result.GetError()));
}

ModifyTransitGatewayOutcome EC2Client::ModifyTransitGateway(const ModifyTransitGatewayRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTransitGatewayOutcome(result.GetResultWithOwnership())
                            : ModifyTransitGatewayOutcome(std::move(result.GetError()));
}

ModifyTransitGatewayMeteringPolicyOutcome EC2Client::ModifyTransitGatewayMeteringPolicy(
    const ModifyTransitGatewayMeteringPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTransitGatewayMeteringPolicyOutcome(result.GetResultWithOwnership())
                            : ModifyTransitGatewayMeteringPolicyOutcome(std::move(result.GetError()));
}

ModifyTransitGatewayPrefixListReferenceOutcome EC2Client::ModifyTransitGatewayPrefixListReference(
    const ModifyTransitGatewayPrefixListReferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTransitGatewayPrefixListReferenceOutcome(result.GetResultWithOwnership())
                            : ModifyTransitGatewayPrefixListReferenceOutcome(std::move(result.GetError()));
}

ModifyTransitGatewayVpcAttachmentOutcome EC2Client::ModifyTransitGatewayVpcAttachment(
    const ModifyTransitGatewayVpcAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyTransitGatewayVpcAttachmentOutcome(result.GetResultWithOwnership())
                            : ModifyTransitGatewayVpcAttachmentOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessEndpointOutcome EC2Client::ModifyVerifiedAccessEndpoint(const ModifyVerifiedAccessEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessEndpointOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessEndpointPolicyOutcome EC2Client::ModifyVerifiedAccessEndpointPolicy(
    const ModifyVerifiedAccessEndpointPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessEndpointPolicyOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessEndpointPolicyOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessGroupOutcome EC2Client::ModifyVerifiedAccessGroup(const ModifyVerifiedAccessGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessGroupOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessGroupOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessGroupPolicyOutcome EC2Client::ModifyVerifiedAccessGroupPolicy(
    const ModifyVerifiedAccessGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessGroupPolicyOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessGroupPolicyOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessInstanceOutcome EC2Client::ModifyVerifiedAccessInstance(const ModifyVerifiedAccessInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessInstanceOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessInstanceOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessInstanceLoggingConfigurationOutcome EC2Client::ModifyVerifiedAccessInstanceLoggingConfiguration(
    const ModifyVerifiedAccessInstanceLoggingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessInstanceLoggingConfigurationOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessInstanceLoggingConfigurationOutcome(std::move(result.GetError()));
}

ModifyVerifiedAccessTrustProviderOutcome EC2Client::ModifyVerifiedAccessTrustProvider(
    const ModifyVerifiedAccessTrustProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVerifiedAccessTrustProviderOutcome(result.GetResultWithOwnership())
                            : ModifyVerifiedAccessTrustProviderOutcome(std::move(result.GetError()));
}

ModifyVolumeOutcome EC2Client::ModifyVolume(const ModifyVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVolumeOutcome(result.GetResultWithOwnership()) : ModifyVolumeOutcome(std::move(result.GetError()));
}

ModifyVolumeAttributeOutcome EC2Client::ModifyVolumeAttribute(const ModifyVolumeAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVolumeAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyVolumeAttributeOutcome(std::move(result.GetError()));
}

ModifyVpcAttributeOutcome EC2Client::ModifyVpcAttribute(const ModifyVpcAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcAttributeOutcome(result.GetResultWithOwnership())
                            : ModifyVpcAttributeOutcome(std::move(result.GetError()));
}

ModifyVpcBlockPublicAccessExclusionOutcome EC2Client::ModifyVpcBlockPublicAccessExclusion(
    const ModifyVpcBlockPublicAccessExclusionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcBlockPublicAccessExclusionOutcome(result.GetResultWithOwnership())
                            : ModifyVpcBlockPublicAccessExclusionOutcome(std::move(result.GetError()));
}

ModifyVpcBlockPublicAccessOptionsOutcome EC2Client::ModifyVpcBlockPublicAccessOptions(
    const ModifyVpcBlockPublicAccessOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcBlockPublicAccessOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyVpcBlockPublicAccessOptionsOutcome(std::move(result.GetError()));
}

ModifyVpcEncryptionControlOutcome EC2Client::ModifyVpcEncryptionControl(const ModifyVpcEncryptionControlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcEncryptionControlOutcome(result.GetResultWithOwnership())
                            : ModifyVpcEncryptionControlOutcome(std::move(result.GetError()));
}

ModifyVpcEndpointOutcome EC2Client::ModifyVpcEndpoint(const ModifyVpcEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcEndpointOutcome(result.GetResultWithOwnership())
                            : ModifyVpcEndpointOutcome(std::move(result.GetError()));
}

ModifyVpcEndpointConnectionNotificationOutcome EC2Client::ModifyVpcEndpointConnectionNotification(
    const ModifyVpcEndpointConnectionNotificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcEndpointConnectionNotificationOutcome(result.GetResultWithOwnership())
                            : ModifyVpcEndpointConnectionNotificationOutcome(std::move(result.GetError()));
}

ModifyVpcEndpointServiceConfigurationOutcome EC2Client::ModifyVpcEndpointServiceConfiguration(
    const ModifyVpcEndpointServiceConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcEndpointServiceConfigurationOutcome(result.GetResultWithOwnership())
                            : ModifyVpcEndpointServiceConfigurationOutcome(std::move(result.GetError()));
}

ModifyVpcEndpointServicePayerResponsibilityOutcome EC2Client::ModifyVpcEndpointServicePayerResponsibility(
    const ModifyVpcEndpointServicePayerResponsibilityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcEndpointServicePayerResponsibilityOutcome(result.GetResultWithOwnership())
                            : ModifyVpcEndpointServicePayerResponsibilityOutcome(std::move(result.GetError()));
}

ModifyVpcEndpointServicePermissionsOutcome EC2Client::ModifyVpcEndpointServicePermissions(
    const ModifyVpcEndpointServicePermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcEndpointServicePermissionsOutcome(result.GetResultWithOwnership())
                            : ModifyVpcEndpointServicePermissionsOutcome(std::move(result.GetError()));
}

ModifyVpcPeeringConnectionOptionsOutcome EC2Client::ModifyVpcPeeringConnectionOptions(
    const ModifyVpcPeeringConnectionOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcPeeringConnectionOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyVpcPeeringConnectionOptionsOutcome(std::move(result.GetError()));
}

ModifyVpcTenancyOutcome EC2Client::ModifyVpcTenancy(const ModifyVpcTenancyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpcTenancyOutcome(result.GetResultWithOwnership())
                            : ModifyVpcTenancyOutcome(std::move(result.GetError()));
}

ModifyVpnConnectionOutcome EC2Client::ModifyVpnConnection(const ModifyVpnConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpnConnectionOutcome(result.GetResultWithOwnership())
                            : ModifyVpnConnectionOutcome(std::move(result.GetError()));
}

ModifyVpnConnectionOptionsOutcome EC2Client::ModifyVpnConnectionOptions(const ModifyVpnConnectionOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpnConnectionOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyVpnConnectionOptionsOutcome(std::move(result.GetError()));
}

ModifyVpnTunnelCertificateOutcome EC2Client::ModifyVpnTunnelCertificate(const ModifyVpnTunnelCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpnTunnelCertificateOutcome(result.GetResultWithOwnership())
                            : ModifyVpnTunnelCertificateOutcome(std::move(result.GetError()));
}

ModifyVpnTunnelOptionsOutcome EC2Client::ModifyVpnTunnelOptions(const ModifyVpnTunnelOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyVpnTunnelOptionsOutcome(result.GetResultWithOwnership())
                            : ModifyVpnTunnelOptionsOutcome(std::move(result.GetError()));
}

MonitorInstancesOutcome EC2Client::MonitorInstances(const MonitorInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MonitorInstancesOutcome(result.GetResultWithOwnership())
                            : MonitorInstancesOutcome(std::move(result.GetError()));
}

MoveAddressToVpcOutcome EC2Client::MoveAddressToVpc(const MoveAddressToVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MoveAddressToVpcOutcome(result.GetResultWithOwnership())
                            : MoveAddressToVpcOutcome(std::move(result.GetError()));
}

MoveByoipCidrToIpamOutcome EC2Client::MoveByoipCidrToIpam(const MoveByoipCidrToIpamRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MoveByoipCidrToIpamOutcome(result.GetResultWithOwnership())
                            : MoveByoipCidrToIpamOutcome(std::move(result.GetError()));
}

MoveCapacityReservationInstancesOutcome EC2Client::MoveCapacityReservationInstances(
    const MoveCapacityReservationInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MoveCapacityReservationInstancesOutcome(result.GetResultWithOwnership())
                            : MoveCapacityReservationInstancesOutcome(std::move(result.GetError()));
}

ProvisionByoipCidrOutcome EC2Client::ProvisionByoipCidr(const ProvisionByoipCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ProvisionByoipCidrOutcome(result.GetResultWithOwnership())
                            : ProvisionByoipCidrOutcome(std::move(result.GetError()));
}

ProvisionIpamByoasnOutcome EC2Client::ProvisionIpamByoasn(const ProvisionIpamByoasnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ProvisionIpamByoasnOutcome(result.GetResultWithOwnership())
                            : ProvisionIpamByoasnOutcome(std::move(result.GetError()));
}

ProvisionIpamPoolCidrOutcome EC2Client::ProvisionIpamPoolCidr(const ProvisionIpamPoolCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ProvisionIpamPoolCidrOutcome(result.GetResultWithOwnership())
                            : ProvisionIpamPoolCidrOutcome(std::move(result.GetError()));
}

ProvisionPublicIpv4PoolCidrOutcome EC2Client::ProvisionPublicIpv4PoolCidr(const ProvisionPublicIpv4PoolCidrRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ProvisionPublicIpv4PoolCidrOutcome(result.GetResultWithOwnership())
                            : ProvisionPublicIpv4PoolCidrOutcome(std::move(result.GetError()));
}

PurchaseCapacityBlockOutcome EC2Client::PurchaseCapacityBlock(const PurchaseCapacityBlockRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseCapacityBlockOutcome(result.GetResultWithOwnership())
                            : PurchaseCapacityBlockOutcome(std::move(result.GetError()));
}

PurchaseCapacityBlockExtensionOutcome EC2Client::PurchaseCapacityBlockExtension(
    const PurchaseCapacityBlockExtensionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseCapacityBlockExtensionOutcome(result.GetResultWithOwnership())
                            : PurchaseCapacityBlockExtensionOutcome(std::move(result.GetError()));
}

PurchaseHostReservationOutcome EC2Client::PurchaseHostReservation(const PurchaseHostReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseHostReservationOutcome(result.GetResultWithOwnership())
                            : PurchaseHostReservationOutcome(std::move(result.GetError()));
}

PurchaseReservedInstancesOfferingOutcome EC2Client::PurchaseReservedInstancesOffering(
    const PurchaseReservedInstancesOfferingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseReservedInstancesOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseReservedInstancesOfferingOutcome(std::move(result.GetError()));
}

PurchaseScheduledInstancesOutcome EC2Client::PurchaseScheduledInstances(const PurchaseScheduledInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseScheduledInstancesOutcome(result.GetResultWithOwnership())
                            : PurchaseScheduledInstancesOutcome(std::move(result.GetError()));
}

RebootInstancesOutcome EC2Client::RebootInstances(const RebootInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootInstancesOutcome(result.GetResultWithOwnership())
                            : RebootInstancesOutcome(std::move(result.GetError()));
}

RegisterImageOutcome EC2Client::RegisterImage(const RegisterImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterImageOutcome(result.GetResultWithOwnership()) : RegisterImageOutcome(std::move(result.GetError()));
}

RegisterInstanceEventNotificationAttributesOutcome EC2Client::RegisterInstanceEventNotificationAttributes(
    const RegisterInstanceEventNotificationAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterInstanceEventNotificationAttributesOutcome(result.GetResultWithOwnership())
                            : RegisterInstanceEventNotificationAttributesOutcome(std::move(result.GetError()));
}

RegisterTransitGatewayMulticastGroupMembersOutcome EC2Client::RegisterTransitGatewayMulticastGroupMembers(
    const RegisterTransitGatewayMulticastGroupMembersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTransitGatewayMulticastGroupMembersOutcome(result.GetResultWithOwnership())
                            : RegisterTransitGatewayMulticastGroupMembersOutcome(std::move(result.GetError()));
}

RegisterTransitGatewayMulticastGroupSourcesOutcome EC2Client::RegisterTransitGatewayMulticastGroupSources(
    const RegisterTransitGatewayMulticastGroupSourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTransitGatewayMulticastGroupSourcesOutcome(result.GetResultWithOwnership())
                            : RegisterTransitGatewayMulticastGroupSourcesOutcome(std::move(result.GetError()));
}

RejectCapacityReservationBillingOwnershipOutcome EC2Client::RejectCapacityReservationBillingOwnership(
    const RejectCapacityReservationBillingOwnershipRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectCapacityReservationBillingOwnershipOutcome(result.GetResultWithOwnership())
                            : RejectCapacityReservationBillingOwnershipOutcome(std::move(result.GetError()));
}
