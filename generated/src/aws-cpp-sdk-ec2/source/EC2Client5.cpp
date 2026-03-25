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
#include <aws/ec2/model/EnableFastLaunchRequest.h>
#include <aws/ec2/model/EnableFastSnapshotRestoresRequest.h>
#include <aws/ec2/model/EnableImageBlockPublicAccessRequest.h>
#include <aws/ec2/model/EnableImageDeprecationRequest.h>
#include <aws/ec2/model/EnableImageDeregistrationProtectionRequest.h>
#include <aws/ec2/model/EnableImageRequest.h>
#include <aws/ec2/model/EnableInstanceSqlHaStandbyDetectionsRequest.h>
#include <aws/ec2/model/EnableIpamOrganizationAdminAccountRequest.h>
#include <aws/ec2/model/EnableIpamPolicyRequest.h>
#include <aws/ec2/model/EnableReachabilityAnalyzerOrganizationSharingRequest.h>
#include <aws/ec2/model/EnableRouteServerPropagationRequest.h>
#include <aws/ec2/model/EnableSerialConsoleAccessRequest.h>
#include <aws/ec2/model/EnableSnapshotBlockPublicAccessRequest.h>
#include <aws/ec2/model/EnableTransitGatewayRouteTablePropagationRequest.h>
#include <aws/ec2/model/EnableVgwRoutePropagationRequest.h>
#include <aws/ec2/model/EnableVolumeIORequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkDnsSupportRequest.h>
#include <aws/ec2/model/EnableVpcClassicLinkRequest.h>
#include <aws/ec2/model/ExportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/ec2/model/ExportClientVpnClientConfigurationRequest.h>
#include <aws/ec2/model/ExportImageRequest.h>
#include <aws/ec2/model/ExportTransitGatewayRoutesRequest.h>
#include <aws/ec2/model/ExportVerifiedAccessInstanceClientConfigurationRequest.h>
#include <aws/ec2/model/GetActiveVpnTunnelStatusRequest.h>
#include <aws/ec2/model/GetAllowedImagesSettingsRequest.h>
#include <aws/ec2/model/GetAssociatedEnclaveCertificateIamRolesRequest.h>
#include <aws/ec2/model/GetAssociatedIpv6PoolCidrsRequest.h>
#include <aws/ec2/model/GetAwsNetworkPerformanceDataRequest.h>
#include <aws/ec2/model/GetCapacityManagerAttributesRequest.h>
#include <aws/ec2/model/GetCapacityManagerMetricDataRequest.h>
#include <aws/ec2/model/GetCapacityManagerMetricDimensionsRequest.h>
#include <aws/ec2/model/GetCapacityReservationUsageRequest.h>
#include <aws/ec2/model/GetCoipPoolUsageRequest.h>
#include <aws/ec2/model/GetConsoleOutputRequest.h>
#include <aws/ec2/model/GetConsoleScreenshotRequest.h>
#include <aws/ec2/model/GetDeclarativePoliciesReportSummaryRequest.h>
#include <aws/ec2/model/GetDefaultCreditSpecificationRequest.h>
#include <aws/ec2/model/GetEbsDefaultKmsKeyIdRequest.h>
#include <aws/ec2/model/GetEbsEncryptionByDefaultRequest.h>
#include <aws/ec2/model/GetEnabledIpamPolicyRequest.h>
#include <aws/ec2/model/GetFlowLogsIntegrationTemplateRequest.h>
#include <aws/ec2/model/GetGroupsForCapacityReservationRequest.h>
#include <aws/ec2/model/GetHostReservationPurchasePreviewRequest.h>
#include <aws/ec2/model/GetImageAncestryRequest.h>
#include <aws/ec2/model/GetImageBlockPublicAccessStateRequest.h>
#include <aws/ec2/model/GetInstanceMetadataDefaultsRequest.h>
#include <aws/ec2/model/GetInstanceTpmEkPubRequest.h>
#include <aws/ec2/model/GetInstanceTypesFromInstanceRequirementsRequest.h>
#include <aws/ec2/model/GetInstanceUefiDataRequest.h>
#include <aws/ec2/model/GetIpamAddressHistoryRequest.h>
#include <aws/ec2/model/GetIpamDiscoveredAccountsRequest.h>
#include <aws/ec2/model/GetIpamDiscoveredPublicAddressesRequest.h>
#include <aws/ec2/model/GetIpamDiscoveredResourceCidrsRequest.h>
#include <aws/ec2/model/GetIpamPolicyAllocationRulesRequest.h>
#include <aws/ec2/model/GetIpamPolicyOrganizationTargetsRequest.h>
#include <aws/ec2/model/GetIpamPoolAllocationsRequest.h>
#include <aws/ec2/model/GetIpamPoolCidrsRequest.h>
#include <aws/ec2/model/GetIpamPrefixListResolverRulesRequest.h>
#include <aws/ec2/model/GetIpamPrefixListResolverVersionEntriesRequest.h>
#include <aws/ec2/model/GetIpamPrefixListResolverVersionsRequest.h>
#include <aws/ec2/model/GetIpamResourceCidrsRequest.h>
#include <aws/ec2/model/GetLaunchTemplateDataRequest.h>
#include <aws/ec2/model/GetManagedPrefixListAssociationsRequest.h>
#include <aws/ec2/model/GetManagedPrefixListEntriesRequest.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeAnalysisFindingsRequest.h>
#include <aws/ec2/model/GetNetworkInsightsAccessScopeContentRequest.h>
#include <aws/ec2/model/GetPasswordDataRequest.h>
#include <aws/ec2/model/GetReservedInstancesExchangeQuoteRequest.h>
#include <aws/ec2/model/GetRouteServerAssociationsRequest.h>
#include <aws/ec2/model/GetRouteServerPropagationsRequest.h>
#include <aws/ec2/model/GetRouteServerRoutingDatabaseRequest.h>
#include <aws/ec2/model/GetSecurityGroupsForVpcRequest.h>
#include <aws/ec2/model/GetSerialConsoleAccessStatusRequest.h>
#include <aws/ec2/model/GetSnapshotBlockPublicAccessStateRequest.h>
#include <aws/ec2/model/GetSpotPlacementScoresRequest.h>
#include <aws/ec2/model/GetSubnetCidrReservationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayAttachmentPropagationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayMeteringPolicyEntriesRequest.h>
#include <aws/ec2/model/GetTransitGatewayMulticastDomainAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayPolicyTableEntriesRequest.h>
#include <aws/ec2/model/GetTransitGatewayPrefixListReferencesRequest.h>
#include <aws/ec2/model/GetTransitGatewayRouteTableAssociationsRequest.h>
#include <aws/ec2/model/GetTransitGatewayRouteTablePropagationsRequest.h>
#include <aws/ec2/model/GetVerifiedAccessEndpointPolicyRequest.h>
#include <aws/ec2/model/GetVerifiedAccessEndpointTargetsRequest.h>
#include <aws/ec2/model/GetVerifiedAccessGroupPolicyRequest.h>
#include <aws/ec2/model/GetVpcResourcesBlockingEncryptionEnforcementRequest.h>
#include <aws/ec2/model/GetVpnConnectionDeviceSampleConfigurationRequest.h>
#include <aws/ec2/model/GetVpnConnectionDeviceTypesRequest.h>
#include <aws/ec2/model/GetVpnTunnelReplacementStatusRequest.h>
#include <aws/ec2/model/ImportClientVpnClientCertificateRevocationListRequest.h>
#include <aws/ec2/model/ImportImageRequest.h>
#include <aws/ec2/model/ImportInstanceRequest.h>
#include <aws/ec2/model/ImportKeyPairRequest.h>
#include <aws/ec2/model/ImportSnapshotRequest.h>
#include <aws/ec2/model/ImportVolumeRequest.h>
#include <aws/ec2/model/ListImagesInRecycleBinRequest.h>
#include <aws/ec2/model/ListSnapshotsInRecycleBinRequest.h>
#include <aws/ec2/model/ListVolumesInRecycleBinRequest.h>
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

EnableFastLaunchOutcome EC2Client::EnableFastLaunch(const EnableFastLaunchRequest& request) const {
  return EnableFastLaunchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableFastSnapshotRestoresOutcome EC2Client::EnableFastSnapshotRestores(const EnableFastSnapshotRestoresRequest& request) const {
  return EnableFastSnapshotRestoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableImageOutcome EC2Client::EnableImage(const EnableImageRequest& request) const {
  return EnableImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableImageBlockPublicAccessOutcome EC2Client::EnableImageBlockPublicAccess(const EnableImageBlockPublicAccessRequest& request) const {
  return EnableImageBlockPublicAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableImageDeprecationOutcome EC2Client::EnableImageDeprecation(const EnableImageDeprecationRequest& request) const {
  return EnableImageDeprecationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableImageDeregistrationProtectionOutcome EC2Client::EnableImageDeregistrationProtection(
    const EnableImageDeregistrationProtectionRequest& request) const {
  return EnableImageDeregistrationProtectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableInstanceSqlHaStandbyDetectionsOutcome EC2Client::EnableInstanceSqlHaStandbyDetections(
    const EnableInstanceSqlHaStandbyDetectionsRequest& request) const {
  return EnableInstanceSqlHaStandbyDetectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableIpamOrganizationAdminAccountOutcome EC2Client::EnableIpamOrganizationAdminAccount(
    const EnableIpamOrganizationAdminAccountRequest& request) const {
  return EnableIpamOrganizationAdminAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableIpamPolicyOutcome EC2Client::EnableIpamPolicy(const EnableIpamPolicyRequest& request) const {
  return EnableIpamPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableReachabilityAnalyzerOrganizationSharingOutcome EC2Client::EnableReachabilityAnalyzerOrganizationSharing(
    const EnableReachabilityAnalyzerOrganizationSharingRequest& request) const {
  return EnableReachabilityAnalyzerOrganizationSharingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableRouteServerPropagationOutcome EC2Client::EnableRouteServerPropagation(const EnableRouteServerPropagationRequest& request) const {
  return EnableRouteServerPropagationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableSerialConsoleAccessOutcome EC2Client::EnableSerialConsoleAccess(const EnableSerialConsoleAccessRequest& request) const {
  return EnableSerialConsoleAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableSnapshotBlockPublicAccessOutcome EC2Client::EnableSnapshotBlockPublicAccess(
    const EnableSnapshotBlockPublicAccessRequest& request) const {
  return EnableSnapshotBlockPublicAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableTransitGatewayRouteTablePropagationOutcome EC2Client::EnableTransitGatewayRouteTablePropagation(
    const EnableTransitGatewayRouteTablePropagationRequest& request) const {
  return EnableTransitGatewayRouteTablePropagationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableVgwRoutePropagationOutcome EC2Client::EnableVgwRoutePropagation(const EnableVgwRoutePropagationRequest& request) const {
  return EnableVgwRoutePropagationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableVolumeIOOutcome EC2Client::EnableVolumeIO(const EnableVolumeIORequest& request) const {
  return EnableVolumeIOOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableVpcClassicLinkOutcome EC2Client::EnableVpcClassicLink(const EnableVpcClassicLinkRequest& request) const {
  return EnableVpcClassicLinkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableVpcClassicLinkDnsSupportOutcome EC2Client::EnableVpcClassicLinkDnsSupport(
    const EnableVpcClassicLinkDnsSupportRequest& request) const {
  return EnableVpcClassicLinkDnsSupportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportClientVpnClientCertificateRevocationListOutcome EC2Client::ExportClientVpnClientCertificateRevocationList(
    const ExportClientVpnClientCertificateRevocationListRequest& request) const {
  return ExportClientVpnClientCertificateRevocationListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportClientVpnClientConfigurationOutcome EC2Client::ExportClientVpnClientConfiguration(
    const ExportClientVpnClientConfigurationRequest& request) const {
  return ExportClientVpnClientConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportImageOutcome EC2Client::ExportImage(const ExportImageRequest& request) const {
  return ExportImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportTransitGatewayRoutesOutcome EC2Client::ExportTransitGatewayRoutes(const ExportTransitGatewayRoutesRequest& request) const {
  return ExportTransitGatewayRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportVerifiedAccessInstanceClientConfigurationOutcome EC2Client::ExportVerifiedAccessInstanceClientConfiguration(
    const ExportVerifiedAccessInstanceClientConfigurationRequest& request) const {
  return ExportVerifiedAccessInstanceClientConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetActiveVpnTunnelStatusOutcome EC2Client::GetActiveVpnTunnelStatus(const GetActiveVpnTunnelStatusRequest& request) const {
  return GetActiveVpnTunnelStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAllowedImagesSettingsOutcome EC2Client::GetAllowedImagesSettings(const GetAllowedImagesSettingsRequest& request) const {
  return GetAllowedImagesSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssociatedEnclaveCertificateIamRolesOutcome EC2Client::GetAssociatedEnclaveCertificateIamRoles(
    const GetAssociatedEnclaveCertificateIamRolesRequest& request) const {
  return GetAssociatedEnclaveCertificateIamRolesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssociatedIpv6PoolCidrsOutcome EC2Client::GetAssociatedIpv6PoolCidrs(const GetAssociatedIpv6PoolCidrsRequest& request) const {
  return GetAssociatedIpv6PoolCidrsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAwsNetworkPerformanceDataOutcome EC2Client::GetAwsNetworkPerformanceData(const GetAwsNetworkPerformanceDataRequest& request) const {
  return GetAwsNetworkPerformanceDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCapacityManagerAttributesOutcome EC2Client::GetCapacityManagerAttributes(const GetCapacityManagerAttributesRequest& request) const {
  return GetCapacityManagerAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCapacityManagerMetricDataOutcome EC2Client::GetCapacityManagerMetricData(const GetCapacityManagerMetricDataRequest& request) const {
  return GetCapacityManagerMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCapacityManagerMetricDimensionsOutcome EC2Client::GetCapacityManagerMetricDimensions(
    const GetCapacityManagerMetricDimensionsRequest& request) const {
  return GetCapacityManagerMetricDimensionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCapacityReservationUsageOutcome EC2Client::GetCapacityReservationUsage(const GetCapacityReservationUsageRequest& request) const {
  return GetCapacityReservationUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCoipPoolUsageOutcome EC2Client::GetCoipPoolUsage(const GetCoipPoolUsageRequest& request) const {
  return GetCoipPoolUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConsoleOutputOutcome EC2Client::GetConsoleOutput(const GetConsoleOutputRequest& request) const {
  return GetConsoleOutputOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConsoleScreenshotOutcome EC2Client::GetConsoleScreenshot(const GetConsoleScreenshotRequest& request) const {
  return GetConsoleScreenshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDeclarativePoliciesReportSummaryOutcome EC2Client::GetDeclarativePoliciesReportSummary(
    const GetDeclarativePoliciesReportSummaryRequest& request) const {
  return GetDeclarativePoliciesReportSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDefaultCreditSpecificationOutcome EC2Client::GetDefaultCreditSpecification(const GetDefaultCreditSpecificationRequest& request) const {
  return GetDefaultCreditSpecificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEbsDefaultKmsKeyIdOutcome EC2Client::GetEbsDefaultKmsKeyId(const GetEbsDefaultKmsKeyIdRequest& request) const {
  return GetEbsDefaultKmsKeyIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEbsEncryptionByDefaultOutcome EC2Client::GetEbsEncryptionByDefault(const GetEbsEncryptionByDefaultRequest& request) const {
  return GetEbsEncryptionByDefaultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnabledIpamPolicyOutcome EC2Client::GetEnabledIpamPolicy(const GetEnabledIpamPolicyRequest& request) const {
  return GetEnabledIpamPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFlowLogsIntegrationTemplateOutcome EC2Client::GetFlowLogsIntegrationTemplate(
    const GetFlowLogsIntegrationTemplateRequest& request) const {
  return GetFlowLogsIntegrationTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGroupsForCapacityReservationOutcome EC2Client::GetGroupsForCapacityReservation(
    const GetGroupsForCapacityReservationRequest& request) const {
  return GetGroupsForCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetHostReservationPurchasePreviewOutcome EC2Client::GetHostReservationPurchasePreview(
    const GetHostReservationPurchasePreviewRequest& request) const {
  return GetHostReservationPurchasePreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImageAncestryOutcome EC2Client::GetImageAncestry(const GetImageAncestryRequest& request) const {
  return GetImageAncestryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImageBlockPublicAccessStateOutcome EC2Client::GetImageBlockPublicAccessState(
    const GetImageBlockPublicAccessStateRequest& request) const {
  return GetImageBlockPublicAccessStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInstanceMetadataDefaultsOutcome EC2Client::GetInstanceMetadataDefaults(const GetInstanceMetadataDefaultsRequest& request) const {
  return GetInstanceMetadataDefaultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInstanceTpmEkPubOutcome EC2Client::GetInstanceTpmEkPub(const GetInstanceTpmEkPubRequest& request) const {
  return GetInstanceTpmEkPubOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInstanceTypesFromInstanceRequirementsOutcome EC2Client::GetInstanceTypesFromInstanceRequirements(
    const GetInstanceTypesFromInstanceRequirementsRequest& request) const {
  return GetInstanceTypesFromInstanceRequirementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInstanceUefiDataOutcome EC2Client::GetInstanceUefiData(const GetInstanceUefiDataRequest& request) const {
  return GetInstanceUefiDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamAddressHistoryOutcome EC2Client::GetIpamAddressHistory(const GetIpamAddressHistoryRequest& request) const {
  return GetIpamAddressHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamDiscoveredAccountsOutcome EC2Client::GetIpamDiscoveredAccounts(const GetIpamDiscoveredAccountsRequest& request) const {
  return GetIpamDiscoveredAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamDiscoveredPublicAddressesOutcome EC2Client::GetIpamDiscoveredPublicAddresses(
    const GetIpamDiscoveredPublicAddressesRequest& request) const {
  return GetIpamDiscoveredPublicAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamDiscoveredResourceCidrsOutcome EC2Client::GetIpamDiscoveredResourceCidrs(
    const GetIpamDiscoveredResourceCidrsRequest& request) const {
  return GetIpamDiscoveredResourceCidrsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPolicyAllocationRulesOutcome EC2Client::GetIpamPolicyAllocationRules(const GetIpamPolicyAllocationRulesRequest& request) const {
  return GetIpamPolicyAllocationRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPolicyOrganizationTargetsOutcome EC2Client::GetIpamPolicyOrganizationTargets(
    const GetIpamPolicyOrganizationTargetsRequest& request) const {
  return GetIpamPolicyOrganizationTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPoolAllocationsOutcome EC2Client::GetIpamPoolAllocations(const GetIpamPoolAllocationsRequest& request) const {
  return GetIpamPoolAllocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPoolCidrsOutcome EC2Client::GetIpamPoolCidrs(const GetIpamPoolCidrsRequest& request) const {
  return GetIpamPoolCidrsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPrefixListResolverRulesOutcome EC2Client::GetIpamPrefixListResolverRules(
    const GetIpamPrefixListResolverRulesRequest& request) const {
  return GetIpamPrefixListResolverRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPrefixListResolverVersionEntriesOutcome EC2Client::GetIpamPrefixListResolverVersionEntries(
    const GetIpamPrefixListResolverVersionEntriesRequest& request) const {
  return GetIpamPrefixListResolverVersionEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamPrefixListResolverVersionsOutcome EC2Client::GetIpamPrefixListResolverVersions(
    const GetIpamPrefixListResolverVersionsRequest& request) const {
  return GetIpamPrefixListResolverVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIpamResourceCidrsOutcome EC2Client::GetIpamResourceCidrs(const GetIpamResourceCidrsRequest& request) const {
  return GetIpamResourceCidrsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLaunchTemplateDataOutcome EC2Client::GetLaunchTemplateData(const GetLaunchTemplateDataRequest& request) const {
  return GetLaunchTemplateDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetManagedPrefixListAssociationsOutcome EC2Client::GetManagedPrefixListAssociations(
    const GetManagedPrefixListAssociationsRequest& request) const {
  return GetManagedPrefixListAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetManagedPrefixListEntriesOutcome EC2Client::GetManagedPrefixListEntries(const GetManagedPrefixListEntriesRequest& request) const {
  return GetManagedPrefixListEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNetworkInsightsAccessScopeAnalysisFindingsOutcome EC2Client::GetNetworkInsightsAccessScopeAnalysisFindings(
    const GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const {
  return GetNetworkInsightsAccessScopeAnalysisFindingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNetworkInsightsAccessScopeContentOutcome EC2Client::GetNetworkInsightsAccessScopeContent(
    const GetNetworkInsightsAccessScopeContentRequest& request) const {
  return GetNetworkInsightsAccessScopeContentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPasswordDataOutcome EC2Client::GetPasswordData(const GetPasswordDataRequest& request) const {
  return GetPasswordDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetReservedInstancesExchangeQuoteOutcome EC2Client::GetReservedInstancesExchangeQuote(
    const GetReservedInstancesExchangeQuoteRequest& request) const {
  return GetReservedInstancesExchangeQuoteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouteServerAssociationsOutcome EC2Client::GetRouteServerAssociations(const GetRouteServerAssociationsRequest& request) const {
  return GetRouteServerAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouteServerPropagationsOutcome EC2Client::GetRouteServerPropagations(const GetRouteServerPropagationsRequest& request) const {
  return GetRouteServerPropagationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouteServerRoutingDatabaseOutcome EC2Client::GetRouteServerRoutingDatabase(const GetRouteServerRoutingDatabaseRequest& request) const {
  return GetRouteServerRoutingDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSecurityGroupsForVpcOutcome EC2Client::GetSecurityGroupsForVpc(const GetSecurityGroupsForVpcRequest& request) const {
  return GetSecurityGroupsForVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSerialConsoleAccessStatusOutcome EC2Client::GetSerialConsoleAccessStatus(const GetSerialConsoleAccessStatusRequest& request) const {
  return GetSerialConsoleAccessStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSnapshotBlockPublicAccessStateOutcome EC2Client::GetSnapshotBlockPublicAccessState(
    const GetSnapshotBlockPublicAccessStateRequest& request) const {
  return GetSnapshotBlockPublicAccessStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSpotPlacementScoresOutcome EC2Client::GetSpotPlacementScores(const GetSpotPlacementScoresRequest& request) const {
  return GetSpotPlacementScoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubnetCidrReservationsOutcome EC2Client::GetSubnetCidrReservations(const GetSubnetCidrReservationsRequest& request) const {
  return GetSubnetCidrReservationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayAttachmentPropagationsOutcome EC2Client::GetTransitGatewayAttachmentPropagations(
    const GetTransitGatewayAttachmentPropagationsRequest& request) const {
  return GetTransitGatewayAttachmentPropagationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayMeteringPolicyEntriesOutcome EC2Client::GetTransitGatewayMeteringPolicyEntries(
    const GetTransitGatewayMeteringPolicyEntriesRequest& request) const {
  return GetTransitGatewayMeteringPolicyEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayMulticastDomainAssociationsOutcome EC2Client::GetTransitGatewayMulticastDomainAssociations(
    const GetTransitGatewayMulticastDomainAssociationsRequest& request) const {
  return GetTransitGatewayMulticastDomainAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayPolicyTableAssociationsOutcome EC2Client::GetTransitGatewayPolicyTableAssociations(
    const GetTransitGatewayPolicyTableAssociationsRequest& request) const {
  return GetTransitGatewayPolicyTableAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayPolicyTableEntriesOutcome EC2Client::GetTransitGatewayPolicyTableEntries(
    const GetTransitGatewayPolicyTableEntriesRequest& request) const {
  return GetTransitGatewayPolicyTableEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayPrefixListReferencesOutcome EC2Client::GetTransitGatewayPrefixListReferences(
    const GetTransitGatewayPrefixListReferencesRequest& request) const {
  return GetTransitGatewayPrefixListReferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayRouteTableAssociationsOutcome EC2Client::GetTransitGatewayRouteTableAssociations(
    const GetTransitGatewayRouteTableAssociationsRequest& request) const {
  return GetTransitGatewayRouteTableAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTransitGatewayRouteTablePropagationsOutcome EC2Client::GetTransitGatewayRouteTablePropagations(
    const GetTransitGatewayRouteTablePropagationsRequest& request) const {
  return GetTransitGatewayRouteTablePropagationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVerifiedAccessEndpointPolicyOutcome EC2Client::GetVerifiedAccessEndpointPolicy(
    const GetVerifiedAccessEndpointPolicyRequest& request) const {
  return GetVerifiedAccessEndpointPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVerifiedAccessEndpointTargetsOutcome EC2Client::GetVerifiedAccessEndpointTargets(
    const GetVerifiedAccessEndpointTargetsRequest& request) const {
  return GetVerifiedAccessEndpointTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVerifiedAccessGroupPolicyOutcome EC2Client::GetVerifiedAccessGroupPolicy(const GetVerifiedAccessGroupPolicyRequest& request) const {
  return GetVerifiedAccessGroupPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVpcResourcesBlockingEncryptionEnforcementOutcome EC2Client::GetVpcResourcesBlockingEncryptionEnforcement(
    const GetVpcResourcesBlockingEncryptionEnforcementRequest& request) const {
  return GetVpcResourcesBlockingEncryptionEnforcementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVpnConnectionDeviceSampleConfigurationOutcome EC2Client::GetVpnConnectionDeviceSampleConfiguration(
    const GetVpnConnectionDeviceSampleConfigurationRequest& request) const {
  return GetVpnConnectionDeviceSampleConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVpnConnectionDeviceTypesOutcome EC2Client::GetVpnConnectionDeviceTypes(const GetVpnConnectionDeviceTypesRequest& request) const {
  return GetVpnConnectionDeviceTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetVpnTunnelReplacementStatusOutcome EC2Client::GetVpnTunnelReplacementStatus(const GetVpnTunnelReplacementStatusRequest& request) const {
  return GetVpnTunnelReplacementStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportClientVpnClientCertificateRevocationListOutcome EC2Client::ImportClientVpnClientCertificateRevocationList(
    const ImportClientVpnClientCertificateRevocationListRequest& request) const {
  return ImportClientVpnClientCertificateRevocationListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportImageOutcome EC2Client::ImportImage(const ImportImageRequest& request) const {
  return ImportImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportInstanceOutcome EC2Client::ImportInstance(const ImportInstanceRequest& request) const {
  return ImportInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportKeyPairOutcome EC2Client::ImportKeyPair(const ImportKeyPairRequest& request) const {
  return ImportKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportSnapshotOutcome EC2Client::ImportSnapshot(const ImportSnapshotRequest& request) const {
  return ImportSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportVolumeOutcome EC2Client::ImportVolume(const ImportVolumeRequest& request) const {
  return ImportVolumeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImagesInRecycleBinOutcome EC2Client::ListImagesInRecycleBin(const ListImagesInRecycleBinRequest& request) const {
  return ListImagesInRecycleBinOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSnapshotsInRecycleBinOutcome EC2Client::ListSnapshotsInRecycleBin(const ListSnapshotsInRecycleBinRequest& request) const {
  return ListSnapshotsInRecycleBinOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVolumesInRecycleBinOutcome EC2Client::ListVolumesInRecycleBin(const ListVolumesInRecycleBinRequest& request) const {
  return ListVolumesInRecycleBinOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
