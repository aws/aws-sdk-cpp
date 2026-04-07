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
#include <aws/ec2/model/GetCapacityManagerMonitoredTagKeysRequest.h>
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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableFastLaunchOutcome(result.GetResultWithOwnership())
                            : EnableFastLaunchOutcome(std::move(result.GetError()));
}

EnableFastSnapshotRestoresOutcome EC2Client::EnableFastSnapshotRestores(const EnableFastSnapshotRestoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableFastSnapshotRestoresOutcome(result.GetResultWithOwnership())
                            : EnableFastSnapshotRestoresOutcome(std::move(result.GetError()));
}

EnableImageOutcome EC2Client::EnableImage(const EnableImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableImageOutcome(result.GetResultWithOwnership()) : EnableImageOutcome(std::move(result.GetError()));
}

EnableImageBlockPublicAccessOutcome EC2Client::EnableImageBlockPublicAccess(const EnableImageBlockPublicAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableImageBlockPublicAccessOutcome(result.GetResultWithOwnership())
                            : EnableImageBlockPublicAccessOutcome(std::move(result.GetError()));
}

EnableImageDeprecationOutcome EC2Client::EnableImageDeprecation(const EnableImageDeprecationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableImageDeprecationOutcome(result.GetResultWithOwnership())
                            : EnableImageDeprecationOutcome(std::move(result.GetError()));
}

EnableImageDeregistrationProtectionOutcome EC2Client::EnableImageDeregistrationProtection(
    const EnableImageDeregistrationProtectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableImageDeregistrationProtectionOutcome(result.GetResultWithOwnership())
                            : EnableImageDeregistrationProtectionOutcome(std::move(result.GetError()));
}

EnableInstanceSqlHaStandbyDetectionsOutcome EC2Client::EnableInstanceSqlHaStandbyDetections(
    const EnableInstanceSqlHaStandbyDetectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableInstanceSqlHaStandbyDetectionsOutcome(result.GetResultWithOwnership())
                            : EnableInstanceSqlHaStandbyDetectionsOutcome(std::move(result.GetError()));
}

EnableIpamOrganizationAdminAccountOutcome EC2Client::EnableIpamOrganizationAdminAccount(
    const EnableIpamOrganizationAdminAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableIpamOrganizationAdminAccountOutcome(result.GetResultWithOwnership())
                            : EnableIpamOrganizationAdminAccountOutcome(std::move(result.GetError()));
}

EnableIpamPolicyOutcome EC2Client::EnableIpamPolicy(const EnableIpamPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableIpamPolicyOutcome(result.GetResultWithOwnership())
                            : EnableIpamPolicyOutcome(std::move(result.GetError()));
}

EnableReachabilityAnalyzerOrganizationSharingOutcome EC2Client::EnableReachabilityAnalyzerOrganizationSharing(
    const EnableReachabilityAnalyzerOrganizationSharingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableReachabilityAnalyzerOrganizationSharingOutcome(result.GetResultWithOwnership())
                            : EnableReachabilityAnalyzerOrganizationSharingOutcome(std::move(result.GetError()));
}

EnableRouteServerPropagationOutcome EC2Client::EnableRouteServerPropagation(const EnableRouteServerPropagationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableRouteServerPropagationOutcome(result.GetResultWithOwnership())
                            : EnableRouteServerPropagationOutcome(std::move(result.GetError()));
}

EnableSerialConsoleAccessOutcome EC2Client::EnableSerialConsoleAccess(const EnableSerialConsoleAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableSerialConsoleAccessOutcome(result.GetResultWithOwnership())
                            : EnableSerialConsoleAccessOutcome(std::move(result.GetError()));
}

EnableSnapshotBlockPublicAccessOutcome EC2Client::EnableSnapshotBlockPublicAccess(
    const EnableSnapshotBlockPublicAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableSnapshotBlockPublicAccessOutcome(result.GetResultWithOwnership())
                            : EnableSnapshotBlockPublicAccessOutcome(std::move(result.GetError()));
}

EnableTransitGatewayRouteTablePropagationOutcome EC2Client::EnableTransitGatewayRouteTablePropagation(
    const EnableTransitGatewayRouteTablePropagationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableTransitGatewayRouteTablePropagationOutcome(result.GetResultWithOwnership())
                            : EnableTransitGatewayRouteTablePropagationOutcome(std::move(result.GetError()));
}

EnableVgwRoutePropagationOutcome EC2Client::EnableVgwRoutePropagation(const EnableVgwRoutePropagationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableVgwRoutePropagationOutcome(result.GetResultWithOwnership())
                            : EnableVgwRoutePropagationOutcome(std::move(result.GetError()));
}

EnableVolumeIOOutcome EC2Client::EnableVolumeIO(const EnableVolumeIORequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableVolumeIOOutcome(result.GetResultWithOwnership()) : EnableVolumeIOOutcome(std::move(result.GetError()));
}

EnableVpcClassicLinkOutcome EC2Client::EnableVpcClassicLink(const EnableVpcClassicLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableVpcClassicLinkOutcome(result.GetResultWithOwnership())
                            : EnableVpcClassicLinkOutcome(std::move(result.GetError()));
}

EnableVpcClassicLinkDnsSupportOutcome EC2Client::EnableVpcClassicLinkDnsSupport(
    const EnableVpcClassicLinkDnsSupportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableVpcClassicLinkDnsSupportOutcome(result.GetResultWithOwnership())
                            : EnableVpcClassicLinkDnsSupportOutcome(std::move(result.GetError()));
}

ExportClientVpnClientCertificateRevocationListOutcome EC2Client::ExportClientVpnClientCertificateRevocationList(
    const ExportClientVpnClientCertificateRevocationListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportClientVpnClientCertificateRevocationListOutcome(result.GetResultWithOwnership())
                            : ExportClientVpnClientCertificateRevocationListOutcome(std::move(result.GetError()));
}

ExportClientVpnClientConfigurationOutcome EC2Client::ExportClientVpnClientConfiguration(
    const ExportClientVpnClientConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportClientVpnClientConfigurationOutcome(result.GetResultWithOwnership())
                            : ExportClientVpnClientConfigurationOutcome(std::move(result.GetError()));
}

ExportImageOutcome EC2Client::ExportImage(const ExportImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportImageOutcome(result.GetResultWithOwnership()) : ExportImageOutcome(std::move(result.GetError()));
}

ExportTransitGatewayRoutesOutcome EC2Client::ExportTransitGatewayRoutes(const ExportTransitGatewayRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportTransitGatewayRoutesOutcome(result.GetResultWithOwnership())
                            : ExportTransitGatewayRoutesOutcome(std::move(result.GetError()));
}

ExportVerifiedAccessInstanceClientConfigurationOutcome EC2Client::ExportVerifiedAccessInstanceClientConfiguration(
    const ExportVerifiedAccessInstanceClientConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportVerifiedAccessInstanceClientConfigurationOutcome(result.GetResultWithOwnership())
                            : ExportVerifiedAccessInstanceClientConfigurationOutcome(std::move(result.GetError()));
}

GetActiveVpnTunnelStatusOutcome EC2Client::GetActiveVpnTunnelStatus(const GetActiveVpnTunnelStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetActiveVpnTunnelStatusOutcome(result.GetResultWithOwnership())
                            : GetActiveVpnTunnelStatusOutcome(std::move(result.GetError()));
}

GetAllowedImagesSettingsOutcome EC2Client::GetAllowedImagesSettings(const GetAllowedImagesSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAllowedImagesSettingsOutcome(result.GetResultWithOwnership())
                            : GetAllowedImagesSettingsOutcome(std::move(result.GetError()));
}

GetAssociatedEnclaveCertificateIamRolesOutcome EC2Client::GetAssociatedEnclaveCertificateIamRoles(
    const GetAssociatedEnclaveCertificateIamRolesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAssociatedEnclaveCertificateIamRolesOutcome(result.GetResultWithOwnership())
                            : GetAssociatedEnclaveCertificateIamRolesOutcome(std::move(result.GetError()));
}

GetAssociatedIpv6PoolCidrsOutcome EC2Client::GetAssociatedIpv6PoolCidrs(const GetAssociatedIpv6PoolCidrsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAssociatedIpv6PoolCidrsOutcome(result.GetResultWithOwnership())
                            : GetAssociatedIpv6PoolCidrsOutcome(std::move(result.GetError()));
}

GetAwsNetworkPerformanceDataOutcome EC2Client::GetAwsNetworkPerformanceData(const GetAwsNetworkPerformanceDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAwsNetworkPerformanceDataOutcome(result.GetResultWithOwnership())
                            : GetAwsNetworkPerformanceDataOutcome(std::move(result.GetError()));
}

GetCapacityManagerAttributesOutcome EC2Client::GetCapacityManagerAttributes(const GetCapacityManagerAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCapacityManagerAttributesOutcome(result.GetResultWithOwnership())
                            : GetCapacityManagerAttributesOutcome(std::move(result.GetError()));
}

GetCapacityManagerMetricDataOutcome EC2Client::GetCapacityManagerMetricData(const GetCapacityManagerMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCapacityManagerMetricDataOutcome(result.GetResultWithOwnership())
                            : GetCapacityManagerMetricDataOutcome(std::move(result.GetError()));
}

GetCapacityManagerMetricDimensionsOutcome EC2Client::GetCapacityManagerMetricDimensions(
    const GetCapacityManagerMetricDimensionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCapacityManagerMetricDimensionsOutcome(result.GetResultWithOwnership())
                            : GetCapacityManagerMetricDimensionsOutcome(std::move(result.GetError()));
}

GetCapacityManagerMonitoredTagKeysOutcome EC2Client::GetCapacityManagerMonitoredTagKeys(
    const GetCapacityManagerMonitoredTagKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCapacityManagerMonitoredTagKeysOutcome(result.GetResultWithOwnership())
                            : GetCapacityManagerMonitoredTagKeysOutcome(std::move(result.GetError()));
}

GetCapacityReservationUsageOutcome EC2Client::GetCapacityReservationUsage(const GetCapacityReservationUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCapacityReservationUsageOutcome(result.GetResultWithOwnership())
                            : GetCapacityReservationUsageOutcome(std::move(result.GetError()));
}

GetCoipPoolUsageOutcome EC2Client::GetCoipPoolUsage(const GetCoipPoolUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCoipPoolUsageOutcome(result.GetResultWithOwnership())
                            : GetCoipPoolUsageOutcome(std::move(result.GetError()));
}

GetConsoleOutputOutcome EC2Client::GetConsoleOutput(const GetConsoleOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConsoleOutputOutcome(result.GetResultWithOwnership())
                            : GetConsoleOutputOutcome(std::move(result.GetError()));
}

GetConsoleScreenshotOutcome EC2Client::GetConsoleScreenshot(const GetConsoleScreenshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConsoleScreenshotOutcome(result.GetResultWithOwnership())
                            : GetConsoleScreenshotOutcome(std::move(result.GetError()));
}

GetDeclarativePoliciesReportSummaryOutcome EC2Client::GetDeclarativePoliciesReportSummary(
    const GetDeclarativePoliciesReportSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeclarativePoliciesReportSummaryOutcome(result.GetResultWithOwnership())
                            : GetDeclarativePoliciesReportSummaryOutcome(std::move(result.GetError()));
}

GetDefaultCreditSpecificationOutcome EC2Client::GetDefaultCreditSpecification(const GetDefaultCreditSpecificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDefaultCreditSpecificationOutcome(result.GetResultWithOwnership())
                            : GetDefaultCreditSpecificationOutcome(std::move(result.GetError()));
}

GetEbsDefaultKmsKeyIdOutcome EC2Client::GetEbsDefaultKmsKeyId(const GetEbsDefaultKmsKeyIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEbsDefaultKmsKeyIdOutcome(result.GetResultWithOwnership())
                            : GetEbsDefaultKmsKeyIdOutcome(std::move(result.GetError()));
}

GetEbsEncryptionByDefaultOutcome EC2Client::GetEbsEncryptionByDefault(const GetEbsEncryptionByDefaultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEbsEncryptionByDefaultOutcome(result.GetResultWithOwnership())
                            : GetEbsEncryptionByDefaultOutcome(std::move(result.GetError()));
}

GetEnabledIpamPolicyOutcome EC2Client::GetEnabledIpamPolicy(const GetEnabledIpamPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEnabledIpamPolicyOutcome(result.GetResultWithOwnership())
                            : GetEnabledIpamPolicyOutcome(std::move(result.GetError()));
}

GetFlowLogsIntegrationTemplateOutcome EC2Client::GetFlowLogsIntegrationTemplate(
    const GetFlowLogsIntegrationTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetFlowLogsIntegrationTemplateOutcome(result.GetResultWithOwnership())
                            : GetFlowLogsIntegrationTemplateOutcome(std::move(result.GetError()));
}

GetGroupsForCapacityReservationOutcome EC2Client::GetGroupsForCapacityReservation(
    const GetGroupsForCapacityReservationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGroupsForCapacityReservationOutcome(result.GetResultWithOwnership())
                            : GetGroupsForCapacityReservationOutcome(std::move(result.GetError()));
}

GetHostReservationPurchasePreviewOutcome EC2Client::GetHostReservationPurchasePreview(
    const GetHostReservationPurchasePreviewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetHostReservationPurchasePreviewOutcome(result.GetResultWithOwnership())
                            : GetHostReservationPurchasePreviewOutcome(std::move(result.GetError()));
}

GetImageAncestryOutcome EC2Client::GetImageAncestry(const GetImageAncestryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetImageAncestryOutcome(result.GetResultWithOwnership())
                            : GetImageAncestryOutcome(std::move(result.GetError()));
}

GetImageBlockPublicAccessStateOutcome EC2Client::GetImageBlockPublicAccessState(
    const GetImageBlockPublicAccessStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetImageBlockPublicAccessStateOutcome(result.GetResultWithOwnership())
                            : GetImageBlockPublicAccessStateOutcome(std::move(result.GetError()));
}

GetInstanceMetadataDefaultsOutcome EC2Client::GetInstanceMetadataDefaults(const GetInstanceMetadataDefaultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceMetadataDefaultsOutcome(result.GetResultWithOwnership())
                            : GetInstanceMetadataDefaultsOutcome(std::move(result.GetError()));
}

GetInstanceTpmEkPubOutcome EC2Client::GetInstanceTpmEkPub(const GetInstanceTpmEkPubRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceTpmEkPubOutcome(result.GetResultWithOwnership())
                            : GetInstanceTpmEkPubOutcome(std::move(result.GetError()));
}

GetInstanceTypesFromInstanceRequirementsOutcome EC2Client::GetInstanceTypesFromInstanceRequirements(
    const GetInstanceTypesFromInstanceRequirementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceTypesFromInstanceRequirementsOutcome(result.GetResultWithOwnership())
                            : GetInstanceTypesFromInstanceRequirementsOutcome(std::move(result.GetError()));
}

GetInstanceUefiDataOutcome EC2Client::GetInstanceUefiData(const GetInstanceUefiDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceUefiDataOutcome(result.GetResultWithOwnership())
                            : GetInstanceUefiDataOutcome(std::move(result.GetError()));
}

GetIpamAddressHistoryOutcome EC2Client::GetIpamAddressHistory(const GetIpamAddressHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamAddressHistoryOutcome(result.GetResultWithOwnership())
                            : GetIpamAddressHistoryOutcome(std::move(result.GetError()));
}

GetIpamDiscoveredAccountsOutcome EC2Client::GetIpamDiscoveredAccounts(const GetIpamDiscoveredAccountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamDiscoveredAccountsOutcome(result.GetResultWithOwnership())
                            : GetIpamDiscoveredAccountsOutcome(std::move(result.GetError()));
}

GetIpamDiscoveredPublicAddressesOutcome EC2Client::GetIpamDiscoveredPublicAddresses(
    const GetIpamDiscoveredPublicAddressesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamDiscoveredPublicAddressesOutcome(result.GetResultWithOwnership())
                            : GetIpamDiscoveredPublicAddressesOutcome(std::move(result.GetError()));
}

GetIpamDiscoveredResourceCidrsOutcome EC2Client::GetIpamDiscoveredResourceCidrs(
    const GetIpamDiscoveredResourceCidrsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamDiscoveredResourceCidrsOutcome(result.GetResultWithOwnership())
                            : GetIpamDiscoveredResourceCidrsOutcome(std::move(result.GetError()));
}

GetIpamPolicyAllocationRulesOutcome EC2Client::GetIpamPolicyAllocationRules(const GetIpamPolicyAllocationRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPolicyAllocationRulesOutcome(result.GetResultWithOwnership())
                            : GetIpamPolicyAllocationRulesOutcome(std::move(result.GetError()));
}

GetIpamPolicyOrganizationTargetsOutcome EC2Client::GetIpamPolicyOrganizationTargets(
    const GetIpamPolicyOrganizationTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPolicyOrganizationTargetsOutcome(result.GetResultWithOwnership())
                            : GetIpamPolicyOrganizationTargetsOutcome(std::move(result.GetError()));
}

GetIpamPoolAllocationsOutcome EC2Client::GetIpamPoolAllocations(const GetIpamPoolAllocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPoolAllocationsOutcome(result.GetResultWithOwnership())
                            : GetIpamPoolAllocationsOutcome(std::move(result.GetError()));
}

GetIpamPoolCidrsOutcome EC2Client::GetIpamPoolCidrs(const GetIpamPoolCidrsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPoolCidrsOutcome(result.GetResultWithOwnership())
                            : GetIpamPoolCidrsOutcome(std::move(result.GetError()));
}

GetIpamPrefixListResolverRulesOutcome EC2Client::GetIpamPrefixListResolverRules(
    const GetIpamPrefixListResolverRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPrefixListResolverRulesOutcome(result.GetResultWithOwnership())
                            : GetIpamPrefixListResolverRulesOutcome(std::move(result.GetError()));
}

GetIpamPrefixListResolverVersionEntriesOutcome EC2Client::GetIpamPrefixListResolverVersionEntries(
    const GetIpamPrefixListResolverVersionEntriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPrefixListResolverVersionEntriesOutcome(result.GetResultWithOwnership())
                            : GetIpamPrefixListResolverVersionEntriesOutcome(std::move(result.GetError()));
}

GetIpamPrefixListResolverVersionsOutcome EC2Client::GetIpamPrefixListResolverVersions(
    const GetIpamPrefixListResolverVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamPrefixListResolverVersionsOutcome(result.GetResultWithOwnership())
                            : GetIpamPrefixListResolverVersionsOutcome(std::move(result.GetError()));
}

GetIpamResourceCidrsOutcome EC2Client::GetIpamResourceCidrs(const GetIpamResourceCidrsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIpamResourceCidrsOutcome(result.GetResultWithOwnership())
                            : GetIpamResourceCidrsOutcome(std::move(result.GetError()));
}

GetLaunchTemplateDataOutcome EC2Client::GetLaunchTemplateData(const GetLaunchTemplateDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLaunchTemplateDataOutcome(result.GetResultWithOwnership())
                            : GetLaunchTemplateDataOutcome(std::move(result.GetError()));
}

GetManagedPrefixListAssociationsOutcome EC2Client::GetManagedPrefixListAssociations(
    const GetManagedPrefixListAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetManagedPrefixListAssociationsOutcome(result.GetResultWithOwnership())
                            : GetManagedPrefixListAssociationsOutcome(std::move(result.GetError()));
}

GetManagedPrefixListEntriesOutcome EC2Client::GetManagedPrefixListEntries(const GetManagedPrefixListEntriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetManagedPrefixListEntriesOutcome(result.GetResultWithOwnership())
                            : GetManagedPrefixListEntriesOutcome(std::move(result.GetError()));
}

GetNetworkInsightsAccessScopeAnalysisFindingsOutcome EC2Client::GetNetworkInsightsAccessScopeAnalysisFindings(
    const GetNetworkInsightsAccessScopeAnalysisFindingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetNetworkInsightsAccessScopeAnalysisFindingsOutcome(result.GetResultWithOwnership())
                            : GetNetworkInsightsAccessScopeAnalysisFindingsOutcome(std::move(result.GetError()));
}

GetNetworkInsightsAccessScopeContentOutcome EC2Client::GetNetworkInsightsAccessScopeContent(
    const GetNetworkInsightsAccessScopeContentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetNetworkInsightsAccessScopeContentOutcome(result.GetResultWithOwnership())
                            : GetNetworkInsightsAccessScopeContentOutcome(std::move(result.GetError()));
}

GetPasswordDataOutcome EC2Client::GetPasswordData(const GetPasswordDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPasswordDataOutcome(result.GetResultWithOwnership())
                            : GetPasswordDataOutcome(std::move(result.GetError()));
}

GetReservedInstancesExchangeQuoteOutcome EC2Client::GetReservedInstancesExchangeQuote(
    const GetReservedInstancesExchangeQuoteRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReservedInstancesExchangeQuoteOutcome(result.GetResultWithOwnership())
                            : GetReservedInstancesExchangeQuoteOutcome(std::move(result.GetError()));
}

GetRouteServerAssociationsOutcome EC2Client::GetRouteServerAssociations(const GetRouteServerAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRouteServerAssociationsOutcome(result.GetResultWithOwnership())
                            : GetRouteServerAssociationsOutcome(std::move(result.GetError()));
}

GetRouteServerPropagationsOutcome EC2Client::GetRouteServerPropagations(const GetRouteServerPropagationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRouteServerPropagationsOutcome(result.GetResultWithOwnership())
                            : GetRouteServerPropagationsOutcome(std::move(result.GetError()));
}

GetRouteServerRoutingDatabaseOutcome EC2Client::GetRouteServerRoutingDatabase(const GetRouteServerRoutingDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRouteServerRoutingDatabaseOutcome(result.GetResultWithOwnership())
                            : GetRouteServerRoutingDatabaseOutcome(std::move(result.GetError()));
}

GetSecurityGroupsForVpcOutcome EC2Client::GetSecurityGroupsForVpc(const GetSecurityGroupsForVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSecurityGroupsForVpcOutcome(result.GetResultWithOwnership())
                            : GetSecurityGroupsForVpcOutcome(std::move(result.GetError()));
}

GetSerialConsoleAccessStatusOutcome EC2Client::GetSerialConsoleAccessStatus(const GetSerialConsoleAccessStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSerialConsoleAccessStatusOutcome(result.GetResultWithOwnership())
                            : GetSerialConsoleAccessStatusOutcome(std::move(result.GetError()));
}

GetSnapshotBlockPublicAccessStateOutcome EC2Client::GetSnapshotBlockPublicAccessState(
    const GetSnapshotBlockPublicAccessStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSnapshotBlockPublicAccessStateOutcome(result.GetResultWithOwnership())
                            : GetSnapshotBlockPublicAccessStateOutcome(std::move(result.GetError()));
}

GetSpotPlacementScoresOutcome EC2Client::GetSpotPlacementScores(const GetSpotPlacementScoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSpotPlacementScoresOutcome(result.GetResultWithOwnership())
                            : GetSpotPlacementScoresOutcome(std::move(result.GetError()));
}

GetSubnetCidrReservationsOutcome EC2Client::GetSubnetCidrReservations(const GetSubnetCidrReservationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSubnetCidrReservationsOutcome(result.GetResultWithOwnership())
                            : GetSubnetCidrReservationsOutcome(std::move(result.GetError()));
}

GetTransitGatewayAttachmentPropagationsOutcome EC2Client::GetTransitGatewayAttachmentPropagations(
    const GetTransitGatewayAttachmentPropagationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayAttachmentPropagationsOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayAttachmentPropagationsOutcome(std::move(result.GetError()));
}

GetTransitGatewayMeteringPolicyEntriesOutcome EC2Client::GetTransitGatewayMeteringPolicyEntries(
    const GetTransitGatewayMeteringPolicyEntriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayMeteringPolicyEntriesOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayMeteringPolicyEntriesOutcome(std::move(result.GetError()));
}

GetTransitGatewayMulticastDomainAssociationsOutcome EC2Client::GetTransitGatewayMulticastDomainAssociations(
    const GetTransitGatewayMulticastDomainAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayMulticastDomainAssociationsOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayMulticastDomainAssociationsOutcome(std::move(result.GetError()));
}

GetTransitGatewayPolicyTableAssociationsOutcome EC2Client::GetTransitGatewayPolicyTableAssociations(
    const GetTransitGatewayPolicyTableAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayPolicyTableAssociationsOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayPolicyTableAssociationsOutcome(std::move(result.GetError()));
}

GetTransitGatewayPolicyTableEntriesOutcome EC2Client::GetTransitGatewayPolicyTableEntries(
    const GetTransitGatewayPolicyTableEntriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayPolicyTableEntriesOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayPolicyTableEntriesOutcome(std::move(result.GetError()));
}

GetTransitGatewayPrefixListReferencesOutcome EC2Client::GetTransitGatewayPrefixListReferences(
    const GetTransitGatewayPrefixListReferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayPrefixListReferencesOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayPrefixListReferencesOutcome(std::move(result.GetError()));
}

GetTransitGatewayRouteTableAssociationsOutcome EC2Client::GetTransitGatewayRouteTableAssociations(
    const GetTransitGatewayRouteTableAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayRouteTableAssociationsOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayRouteTableAssociationsOutcome(std::move(result.GetError()));
}

GetTransitGatewayRouteTablePropagationsOutcome EC2Client::GetTransitGatewayRouteTablePropagations(
    const GetTransitGatewayRouteTablePropagationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTransitGatewayRouteTablePropagationsOutcome(result.GetResultWithOwnership())
                            : GetTransitGatewayRouteTablePropagationsOutcome(std::move(result.GetError()));
}

GetVerifiedAccessEndpointPolicyOutcome EC2Client::GetVerifiedAccessEndpointPolicy(
    const GetVerifiedAccessEndpointPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVerifiedAccessEndpointPolicyOutcome(result.GetResultWithOwnership())
                            : GetVerifiedAccessEndpointPolicyOutcome(std::move(result.GetError()));
}

GetVerifiedAccessEndpointTargetsOutcome EC2Client::GetVerifiedAccessEndpointTargets(
    const GetVerifiedAccessEndpointTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVerifiedAccessEndpointTargetsOutcome(result.GetResultWithOwnership())
                            : GetVerifiedAccessEndpointTargetsOutcome(std::move(result.GetError()));
}

GetVerifiedAccessGroupPolicyOutcome EC2Client::GetVerifiedAccessGroupPolicy(const GetVerifiedAccessGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVerifiedAccessGroupPolicyOutcome(result.GetResultWithOwnership())
                            : GetVerifiedAccessGroupPolicyOutcome(std::move(result.GetError()));
}

GetVpcResourcesBlockingEncryptionEnforcementOutcome EC2Client::GetVpcResourcesBlockingEncryptionEnforcement(
    const GetVpcResourcesBlockingEncryptionEnforcementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVpcResourcesBlockingEncryptionEnforcementOutcome(result.GetResultWithOwnership())
                            : GetVpcResourcesBlockingEncryptionEnforcementOutcome(std::move(result.GetError()));
}

GetVpnConnectionDeviceSampleConfigurationOutcome EC2Client::GetVpnConnectionDeviceSampleConfiguration(
    const GetVpnConnectionDeviceSampleConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVpnConnectionDeviceSampleConfigurationOutcome(result.GetResultWithOwnership())
                            : GetVpnConnectionDeviceSampleConfigurationOutcome(std::move(result.GetError()));
}

GetVpnConnectionDeviceTypesOutcome EC2Client::GetVpnConnectionDeviceTypes(const GetVpnConnectionDeviceTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVpnConnectionDeviceTypesOutcome(result.GetResultWithOwnership())
                            : GetVpnConnectionDeviceTypesOutcome(std::move(result.GetError()));
}

GetVpnTunnelReplacementStatusOutcome EC2Client::GetVpnTunnelReplacementStatus(const GetVpnTunnelReplacementStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVpnTunnelReplacementStatusOutcome(result.GetResultWithOwnership())
                            : GetVpnTunnelReplacementStatusOutcome(std::move(result.GetError()));
}

ImportClientVpnClientCertificateRevocationListOutcome EC2Client::ImportClientVpnClientCertificateRevocationList(
    const ImportClientVpnClientCertificateRevocationListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportClientVpnClientCertificateRevocationListOutcome(result.GetResultWithOwnership())
                            : ImportClientVpnClientCertificateRevocationListOutcome(std::move(result.GetError()));
}

ImportImageOutcome EC2Client::ImportImage(const ImportImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportImageOutcome(result.GetResultWithOwnership()) : ImportImageOutcome(std::move(result.GetError()));
}

ImportInstanceOutcome EC2Client::ImportInstance(const ImportInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportInstanceOutcome(result.GetResultWithOwnership()) : ImportInstanceOutcome(std::move(result.GetError()));
}

ImportKeyPairOutcome EC2Client::ImportKeyPair(const ImportKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportKeyPairOutcome(result.GetResultWithOwnership()) : ImportKeyPairOutcome(std::move(result.GetError()));
}

ImportSnapshotOutcome EC2Client::ImportSnapshot(const ImportSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportSnapshotOutcome(result.GetResultWithOwnership()) : ImportSnapshotOutcome(std::move(result.GetError()));
}

ImportVolumeOutcome EC2Client::ImportVolume(const ImportVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportVolumeOutcome(result.GetResultWithOwnership()) : ImportVolumeOutcome(std::move(result.GetError()));
}

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
