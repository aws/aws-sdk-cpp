/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/inspector2/Inspector2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/inspector2/Inspector2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Inspector2Client header */
#include <aws/inspector2/model/AssociateMemberResult.h>
#include <aws/inspector2/model/BatchAssociateCodeSecurityScanConfigurationResult.h>
#include <aws/inspector2/model/BatchDisassociateCodeSecurityScanConfigurationResult.h>
#include <aws/inspector2/model/BatchGetAccountStatusResult.h>
#include <aws/inspector2/model/BatchGetCodeSnippetResult.h>
#include <aws/inspector2/model/BatchGetFindingDetailsResult.h>
#include <aws/inspector2/model/BatchGetFreeTrialInfoResult.h>
#include <aws/inspector2/model/BatchGetMemberEc2DeepInspectionStatusResult.h>
#include <aws/inspector2/model/BatchUpdateMemberEc2DeepInspectionStatusResult.h>
#include <aws/inspector2/model/CancelFindingsReportResult.h>
#include <aws/inspector2/model/CancelSbomExportResult.h>
#include <aws/inspector2/model/CreateCisScanConfigurationResult.h>
#include <aws/inspector2/model/CreateCodeSecurityIntegrationResult.h>
#include <aws/inspector2/model/CreateCodeSecurityScanConfigurationResult.h>
#include <aws/inspector2/model/CreateFilterResult.h>
#include <aws/inspector2/model/CreateFindingsReportResult.h>
#include <aws/inspector2/model/CreateSbomExportResult.h>
#include <aws/inspector2/model/DeleteCisScanConfigurationResult.h>
#include <aws/inspector2/model/DeleteCodeSecurityIntegrationResult.h>
#include <aws/inspector2/model/DeleteCodeSecurityScanConfigurationResult.h>
#include <aws/inspector2/model/DeleteFilterResult.h>
#include <aws/inspector2/model/DescribeOrganizationConfigurationResult.h>
#include <aws/inspector2/model/DisableResult.h>
#include <aws/inspector2/model/DisableDelegatedAdminAccountResult.h>
#include <aws/inspector2/model/DisassociateMemberResult.h>
#include <aws/inspector2/model/EnableResult.h>
#include <aws/inspector2/model/EnableDelegatedAdminAccountResult.h>
#include <aws/inspector2/model/GetCisScanReportResult.h>
#include <aws/inspector2/model/GetCisScanResultDetailsResult.h>
#include <aws/inspector2/model/GetClustersForImageResult.h>
#include <aws/inspector2/model/GetCodeSecurityIntegrationResult.h>
#include <aws/inspector2/model/GetCodeSecurityScanResult.h>
#include <aws/inspector2/model/GetCodeSecurityScanConfigurationResult.h>
#include <aws/inspector2/model/GetConfigurationResult.h>
#include <aws/inspector2/model/GetDelegatedAdminAccountResult.h>
#include <aws/inspector2/model/GetEc2DeepInspectionConfigurationResult.h>
#include <aws/inspector2/model/GetEncryptionKeyResult.h>
#include <aws/inspector2/model/GetFindingsReportStatusResult.h>
#include <aws/inspector2/model/GetMemberResult.h>
#include <aws/inspector2/model/GetSbomExportResult.h>
#include <aws/inspector2/model/ListAccountPermissionsResult.h>
#include <aws/inspector2/model/ListCisScanConfigurationsResult.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksResult.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByTargetResourceResult.h>
#include <aws/inspector2/model/ListCisScansResult.h>
#include <aws/inspector2/model/ListCodeSecurityIntegrationsResult.h>
#include <aws/inspector2/model/ListCodeSecurityScanConfigurationAssociationsResult.h>
#include <aws/inspector2/model/ListCodeSecurityScanConfigurationsResult.h>
#include <aws/inspector2/model/ListCoverageResult.h>
#include <aws/inspector2/model/ListCoverageStatisticsResult.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsResult.h>
#include <aws/inspector2/model/ListFiltersResult.h>
#include <aws/inspector2/model/ListFindingAggregationsResult.h>
#include <aws/inspector2/model/ListFindingsResult.h>
#include <aws/inspector2/model/ListMembersResult.h>
#include <aws/inspector2/model/ListTagsForResourceResult.h>
#include <aws/inspector2/model/ListUsageTotalsResult.h>
#include <aws/inspector2/model/ResetEncryptionKeyResult.h>
#include <aws/inspector2/model/SearchVulnerabilitiesResult.h>
#include <aws/inspector2/model/SendCisSessionHealthResult.h>
#include <aws/inspector2/model/SendCisSessionTelemetryResult.h>
#include <aws/inspector2/model/StartCisSessionResult.h>
#include <aws/inspector2/model/StartCodeSecurityScanResult.h>
#include <aws/inspector2/model/StopCisSessionResult.h>
#include <aws/inspector2/model/TagResourceResult.h>
#include <aws/inspector2/model/UntagResourceResult.h>
#include <aws/inspector2/model/UpdateCisScanConfigurationResult.h>
#include <aws/inspector2/model/UpdateCodeSecurityIntegrationResult.h>
#include <aws/inspector2/model/UpdateCodeSecurityScanConfigurationResult.h>
#include <aws/inspector2/model/UpdateConfigurationResult.h>
#include <aws/inspector2/model/UpdateEc2DeepInspectionConfigurationResult.h>
#include <aws/inspector2/model/UpdateEncryptionKeyResult.h>
#include <aws/inspector2/model/UpdateFilterResult.h>
#include <aws/inspector2/model/UpdateOrgEc2DeepInspectionConfigurationResult.h>
#include <aws/inspector2/model/UpdateOrganizationConfigurationResult.h>
#include <aws/inspector2/model/ListCodeSecurityScanConfigurationsRequest.h>
#include <aws/inspector2/model/ListCisScansRequest.h>
#include <aws/inspector2/model/GetEc2DeepInspectionConfigurationRequest.h>
#include <aws/inspector2/model/GetFindingsReportStatusRequest.h>
#include <aws/inspector2/model/UpdateEc2DeepInspectionConfigurationRequest.h>
#include <aws/inspector2/model/ListMembersRequest.h>
#include <aws/inspector2/model/UpdateConfigurationRequest.h>
#include <aws/inspector2/model/ListCoverageRequest.h>
#include <aws/inspector2/model/ListFiltersRequest.h>
#include <aws/inspector2/model/ListCoverageStatisticsRequest.h>
#include <aws/inspector2/model/ListCisScanConfigurationsRequest.h>
#include <aws/inspector2/model/ListAccountPermissionsRequest.h>
#include <aws/inspector2/model/BatchGetAccountStatusRequest.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsRequest.h>
#include <aws/inspector2/model/GetConfigurationRequest.h>
#include <aws/inspector2/model/GetDelegatedAdminAccountRequest.h>
#include <aws/inspector2/model/ListCodeSecurityIntegrationsRequest.h>
#include <aws/inspector2/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/inspector2/model/BatchGetMemberEc2DeepInspectionStatusRequest.h>
#include <aws/inspector2/model/ListFindingsRequest.h>
#include <aws/inspector2/model/ListUsageTotalsRequest.h>
#include <aws/inspector2/model/DisableRequest.h>
/* End of service model headers required in Inspector2Client header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Inspector2
  {
    using Inspector2ClientConfiguration = Aws::Client::GenericClientConfiguration;
    using Inspector2EndpointProviderBase = Aws::Inspector2::Endpoint::Inspector2EndpointProviderBase;
    using Inspector2EndpointProvider = Aws::Inspector2::Endpoint::Inspector2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Inspector2Client header */
      class AssociateMemberRequest;
      class BatchAssociateCodeSecurityScanConfigurationRequest;
      class BatchDisassociateCodeSecurityScanConfigurationRequest;
      class BatchGetAccountStatusRequest;
      class BatchGetCodeSnippetRequest;
      class BatchGetFindingDetailsRequest;
      class BatchGetFreeTrialInfoRequest;
      class BatchGetMemberEc2DeepInspectionStatusRequest;
      class BatchUpdateMemberEc2DeepInspectionStatusRequest;
      class CancelFindingsReportRequest;
      class CancelSbomExportRequest;
      class CreateCisScanConfigurationRequest;
      class CreateCodeSecurityIntegrationRequest;
      class CreateCodeSecurityScanConfigurationRequest;
      class CreateFilterRequest;
      class CreateFindingsReportRequest;
      class CreateSbomExportRequest;
      class DeleteCisScanConfigurationRequest;
      class DeleteCodeSecurityIntegrationRequest;
      class DeleteCodeSecurityScanConfigurationRequest;
      class DeleteFilterRequest;
      class DescribeOrganizationConfigurationRequest;
      class DisableRequest;
      class DisableDelegatedAdminAccountRequest;
      class DisassociateMemberRequest;
      class EnableRequest;
      class EnableDelegatedAdminAccountRequest;
      class GetCisScanReportRequest;
      class GetCisScanResultDetailsRequest;
      class GetClustersForImageRequest;
      class GetCodeSecurityIntegrationRequest;
      class GetCodeSecurityScanRequest;
      class GetCodeSecurityScanConfigurationRequest;
      class GetConfigurationRequest;
      class GetDelegatedAdminAccountRequest;
      class GetEc2DeepInspectionConfigurationRequest;
      class GetEncryptionKeyRequest;
      class GetFindingsReportStatusRequest;
      class GetMemberRequest;
      class GetSbomExportRequest;
      class ListAccountPermissionsRequest;
      class ListCisScanConfigurationsRequest;
      class ListCisScanResultsAggregatedByChecksRequest;
      class ListCisScanResultsAggregatedByTargetResourceRequest;
      class ListCisScansRequest;
      class ListCodeSecurityIntegrationsRequest;
      class ListCodeSecurityScanConfigurationAssociationsRequest;
      class ListCodeSecurityScanConfigurationsRequest;
      class ListCoverageRequest;
      class ListCoverageStatisticsRequest;
      class ListDelegatedAdminAccountsRequest;
      class ListFiltersRequest;
      class ListFindingAggregationsRequest;
      class ListFindingsRequest;
      class ListMembersRequest;
      class ListTagsForResourceRequest;
      class ListUsageTotalsRequest;
      class ResetEncryptionKeyRequest;
      class SearchVulnerabilitiesRequest;
      class SendCisSessionHealthRequest;
      class SendCisSessionTelemetryRequest;
      class StartCisSessionRequest;
      class StartCodeSecurityScanRequest;
      class StopCisSessionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCisScanConfigurationRequest;
      class UpdateCodeSecurityIntegrationRequest;
      class UpdateCodeSecurityScanConfigurationRequest;
      class UpdateConfigurationRequest;
      class UpdateEc2DeepInspectionConfigurationRequest;
      class UpdateEncryptionKeyRequest;
      class UpdateFilterRequest;
      class UpdateOrgEc2DeepInspectionConfigurationRequest;
      class UpdateOrganizationConfigurationRequest;
      /* End of service model forward declarations required in Inspector2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateMemberResult, Inspector2Error> AssociateMemberOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateCodeSecurityScanConfigurationResult, Inspector2Error> BatchAssociateCodeSecurityScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateCodeSecurityScanConfigurationResult, Inspector2Error> BatchDisassociateCodeSecurityScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<BatchGetAccountStatusResult, Inspector2Error> BatchGetAccountStatusOutcome;
      typedef Aws::Utils::Outcome<BatchGetCodeSnippetResult, Inspector2Error> BatchGetCodeSnippetOutcome;
      typedef Aws::Utils::Outcome<BatchGetFindingDetailsResult, Inspector2Error> BatchGetFindingDetailsOutcome;
      typedef Aws::Utils::Outcome<BatchGetFreeTrialInfoResult, Inspector2Error> BatchGetFreeTrialInfoOutcome;
      typedef Aws::Utils::Outcome<BatchGetMemberEc2DeepInspectionStatusResult, Inspector2Error> BatchGetMemberEc2DeepInspectionStatusOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateMemberEc2DeepInspectionStatusResult, Inspector2Error> BatchUpdateMemberEc2DeepInspectionStatusOutcome;
      typedef Aws::Utils::Outcome<CancelFindingsReportResult, Inspector2Error> CancelFindingsReportOutcome;
      typedef Aws::Utils::Outcome<CancelSbomExportResult, Inspector2Error> CancelSbomExportOutcome;
      typedef Aws::Utils::Outcome<CreateCisScanConfigurationResult, Inspector2Error> CreateCisScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateCodeSecurityIntegrationResult, Inspector2Error> CreateCodeSecurityIntegrationOutcome;
      typedef Aws::Utils::Outcome<CreateCodeSecurityScanConfigurationResult, Inspector2Error> CreateCodeSecurityScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateFilterResult, Inspector2Error> CreateFilterOutcome;
      typedef Aws::Utils::Outcome<CreateFindingsReportResult, Inspector2Error> CreateFindingsReportOutcome;
      typedef Aws::Utils::Outcome<CreateSbomExportResult, Inspector2Error> CreateSbomExportOutcome;
      typedef Aws::Utils::Outcome<DeleteCisScanConfigurationResult, Inspector2Error> DeleteCisScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteCodeSecurityIntegrationResult, Inspector2Error> DeleteCodeSecurityIntegrationOutcome;
      typedef Aws::Utils::Outcome<DeleteCodeSecurityScanConfigurationResult, Inspector2Error> DeleteCodeSecurityScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteFilterResult, Inspector2Error> DeleteFilterOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, Inspector2Error> DescribeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DisableResult, Inspector2Error> DisableOutcome;
      typedef Aws::Utils::Outcome<DisableDelegatedAdminAccountResult, Inspector2Error> DisableDelegatedAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberResult, Inspector2Error> DisassociateMemberOutcome;
      typedef Aws::Utils::Outcome<EnableResult, Inspector2Error> EnableOutcome;
      typedef Aws::Utils::Outcome<EnableDelegatedAdminAccountResult, Inspector2Error> EnableDelegatedAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetCisScanReportResult, Inspector2Error> GetCisScanReportOutcome;
      typedef Aws::Utils::Outcome<GetCisScanResultDetailsResult, Inspector2Error> GetCisScanResultDetailsOutcome;
      typedef Aws::Utils::Outcome<GetClustersForImageResult, Inspector2Error> GetClustersForImageOutcome;
      typedef Aws::Utils::Outcome<GetCodeSecurityIntegrationResult, Inspector2Error> GetCodeSecurityIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetCodeSecurityScanResult, Inspector2Error> GetCodeSecurityScanOutcome;
      typedef Aws::Utils::Outcome<GetCodeSecurityScanConfigurationResult, Inspector2Error> GetCodeSecurityScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationResult, Inspector2Error> GetConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDelegatedAdminAccountResult, Inspector2Error> GetDelegatedAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetEc2DeepInspectionConfigurationResult, Inspector2Error> GetEc2DeepInspectionConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetEncryptionKeyResult, Inspector2Error> GetEncryptionKeyOutcome;
      typedef Aws::Utils::Outcome<GetFindingsReportStatusResult, Inspector2Error> GetFindingsReportStatusOutcome;
      typedef Aws::Utils::Outcome<GetMemberResult, Inspector2Error> GetMemberOutcome;
      typedef Aws::Utils::Outcome<GetSbomExportResult, Inspector2Error> GetSbomExportOutcome;
      typedef Aws::Utils::Outcome<ListAccountPermissionsResult, Inspector2Error> ListAccountPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListCisScanConfigurationsResult, Inspector2Error> ListCisScanConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListCisScanResultsAggregatedByChecksResult, Inspector2Error> ListCisScanResultsAggregatedByChecksOutcome;
      typedef Aws::Utils::Outcome<ListCisScanResultsAggregatedByTargetResourceResult, Inspector2Error> ListCisScanResultsAggregatedByTargetResourceOutcome;
      typedef Aws::Utils::Outcome<ListCisScansResult, Inspector2Error> ListCisScansOutcome;
      typedef Aws::Utils::Outcome<ListCodeSecurityIntegrationsResult, Inspector2Error> ListCodeSecurityIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListCodeSecurityScanConfigurationAssociationsResult, Inspector2Error> ListCodeSecurityScanConfigurationAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListCodeSecurityScanConfigurationsResult, Inspector2Error> ListCodeSecurityScanConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListCoverageResult, Inspector2Error> ListCoverageOutcome;
      typedef Aws::Utils::Outcome<ListCoverageStatisticsResult, Inspector2Error> ListCoverageStatisticsOutcome;
      typedef Aws::Utils::Outcome<ListDelegatedAdminAccountsResult, Inspector2Error> ListDelegatedAdminAccountsOutcome;
      typedef Aws::Utils::Outcome<ListFiltersResult, Inspector2Error> ListFiltersOutcome;
      typedef Aws::Utils::Outcome<ListFindingAggregationsResult, Inspector2Error> ListFindingAggregationsOutcome;
      typedef Aws::Utils::Outcome<ListFindingsResult, Inspector2Error> ListFindingsOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, Inspector2Error> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Inspector2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUsageTotalsResult, Inspector2Error> ListUsageTotalsOutcome;
      typedef Aws::Utils::Outcome<ResetEncryptionKeyResult, Inspector2Error> ResetEncryptionKeyOutcome;
      typedef Aws::Utils::Outcome<SearchVulnerabilitiesResult, Inspector2Error> SearchVulnerabilitiesOutcome;
      typedef Aws::Utils::Outcome<SendCisSessionHealthResult, Inspector2Error> SendCisSessionHealthOutcome;
      typedef Aws::Utils::Outcome<SendCisSessionTelemetryResult, Inspector2Error> SendCisSessionTelemetryOutcome;
      typedef Aws::Utils::Outcome<StartCisSessionResult, Inspector2Error> StartCisSessionOutcome;
      typedef Aws::Utils::Outcome<StartCodeSecurityScanResult, Inspector2Error> StartCodeSecurityScanOutcome;
      typedef Aws::Utils::Outcome<StopCisSessionResult, Inspector2Error> StopCisSessionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Inspector2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Inspector2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCisScanConfigurationResult, Inspector2Error> UpdateCisScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateCodeSecurityIntegrationResult, Inspector2Error> UpdateCodeSecurityIntegrationOutcome;
      typedef Aws::Utils::Outcome<UpdateCodeSecurityScanConfigurationResult, Inspector2Error> UpdateCodeSecurityScanConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationResult, Inspector2Error> UpdateConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateEc2DeepInspectionConfigurationResult, Inspector2Error> UpdateEc2DeepInspectionConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateEncryptionKeyResult, Inspector2Error> UpdateEncryptionKeyOutcome;
      typedef Aws::Utils::Outcome<UpdateFilterResult, Inspector2Error> UpdateFilterOutcome;
      typedef Aws::Utils::Outcome<UpdateOrgEc2DeepInspectionConfigurationResult, Inspector2Error> UpdateOrgEc2DeepInspectionConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, Inspector2Error> UpdateOrganizationConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateMemberOutcome> AssociateMemberOutcomeCallable;
      typedef std::future<BatchAssociateCodeSecurityScanConfigurationOutcome> BatchAssociateCodeSecurityScanConfigurationOutcomeCallable;
      typedef std::future<BatchDisassociateCodeSecurityScanConfigurationOutcome> BatchDisassociateCodeSecurityScanConfigurationOutcomeCallable;
      typedef std::future<BatchGetAccountStatusOutcome> BatchGetAccountStatusOutcomeCallable;
      typedef std::future<BatchGetCodeSnippetOutcome> BatchGetCodeSnippetOutcomeCallable;
      typedef std::future<BatchGetFindingDetailsOutcome> BatchGetFindingDetailsOutcomeCallable;
      typedef std::future<BatchGetFreeTrialInfoOutcome> BatchGetFreeTrialInfoOutcomeCallable;
      typedef std::future<BatchGetMemberEc2DeepInspectionStatusOutcome> BatchGetMemberEc2DeepInspectionStatusOutcomeCallable;
      typedef std::future<BatchUpdateMemberEc2DeepInspectionStatusOutcome> BatchUpdateMemberEc2DeepInspectionStatusOutcomeCallable;
      typedef std::future<CancelFindingsReportOutcome> CancelFindingsReportOutcomeCallable;
      typedef std::future<CancelSbomExportOutcome> CancelSbomExportOutcomeCallable;
      typedef std::future<CreateCisScanConfigurationOutcome> CreateCisScanConfigurationOutcomeCallable;
      typedef std::future<CreateCodeSecurityIntegrationOutcome> CreateCodeSecurityIntegrationOutcomeCallable;
      typedef std::future<CreateCodeSecurityScanConfigurationOutcome> CreateCodeSecurityScanConfigurationOutcomeCallable;
      typedef std::future<CreateFilterOutcome> CreateFilterOutcomeCallable;
      typedef std::future<CreateFindingsReportOutcome> CreateFindingsReportOutcomeCallable;
      typedef std::future<CreateSbomExportOutcome> CreateSbomExportOutcomeCallable;
      typedef std::future<DeleteCisScanConfigurationOutcome> DeleteCisScanConfigurationOutcomeCallable;
      typedef std::future<DeleteCodeSecurityIntegrationOutcome> DeleteCodeSecurityIntegrationOutcomeCallable;
      typedef std::future<DeleteCodeSecurityScanConfigurationOutcome> DeleteCodeSecurityScanConfigurationOutcomeCallable;
      typedef std::future<DeleteFilterOutcome> DeleteFilterOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DisableOutcome> DisableOutcomeCallable;
      typedef std::future<DisableDelegatedAdminAccountOutcome> DisableDelegatedAdminAccountOutcomeCallable;
      typedef std::future<DisassociateMemberOutcome> DisassociateMemberOutcomeCallable;
      typedef std::future<EnableOutcome> EnableOutcomeCallable;
      typedef std::future<EnableDelegatedAdminAccountOutcome> EnableDelegatedAdminAccountOutcomeCallable;
      typedef std::future<GetCisScanReportOutcome> GetCisScanReportOutcomeCallable;
      typedef std::future<GetCisScanResultDetailsOutcome> GetCisScanResultDetailsOutcomeCallable;
      typedef std::future<GetClustersForImageOutcome> GetClustersForImageOutcomeCallable;
      typedef std::future<GetCodeSecurityIntegrationOutcome> GetCodeSecurityIntegrationOutcomeCallable;
      typedef std::future<GetCodeSecurityScanOutcome> GetCodeSecurityScanOutcomeCallable;
      typedef std::future<GetCodeSecurityScanConfigurationOutcome> GetCodeSecurityScanConfigurationOutcomeCallable;
      typedef std::future<GetConfigurationOutcome> GetConfigurationOutcomeCallable;
      typedef std::future<GetDelegatedAdminAccountOutcome> GetDelegatedAdminAccountOutcomeCallable;
      typedef std::future<GetEc2DeepInspectionConfigurationOutcome> GetEc2DeepInspectionConfigurationOutcomeCallable;
      typedef std::future<GetEncryptionKeyOutcome> GetEncryptionKeyOutcomeCallable;
      typedef std::future<GetFindingsReportStatusOutcome> GetFindingsReportStatusOutcomeCallable;
      typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
      typedef std::future<GetSbomExportOutcome> GetSbomExportOutcomeCallable;
      typedef std::future<ListAccountPermissionsOutcome> ListAccountPermissionsOutcomeCallable;
      typedef std::future<ListCisScanConfigurationsOutcome> ListCisScanConfigurationsOutcomeCallable;
      typedef std::future<ListCisScanResultsAggregatedByChecksOutcome> ListCisScanResultsAggregatedByChecksOutcomeCallable;
      typedef std::future<ListCisScanResultsAggregatedByTargetResourceOutcome> ListCisScanResultsAggregatedByTargetResourceOutcomeCallable;
      typedef std::future<ListCisScansOutcome> ListCisScansOutcomeCallable;
      typedef std::future<ListCodeSecurityIntegrationsOutcome> ListCodeSecurityIntegrationsOutcomeCallable;
      typedef std::future<ListCodeSecurityScanConfigurationAssociationsOutcome> ListCodeSecurityScanConfigurationAssociationsOutcomeCallable;
      typedef std::future<ListCodeSecurityScanConfigurationsOutcome> ListCodeSecurityScanConfigurationsOutcomeCallable;
      typedef std::future<ListCoverageOutcome> ListCoverageOutcomeCallable;
      typedef std::future<ListCoverageStatisticsOutcome> ListCoverageStatisticsOutcomeCallable;
      typedef std::future<ListDelegatedAdminAccountsOutcome> ListDelegatedAdminAccountsOutcomeCallable;
      typedef std::future<ListFiltersOutcome> ListFiltersOutcomeCallable;
      typedef std::future<ListFindingAggregationsOutcome> ListFindingAggregationsOutcomeCallable;
      typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUsageTotalsOutcome> ListUsageTotalsOutcomeCallable;
      typedef std::future<ResetEncryptionKeyOutcome> ResetEncryptionKeyOutcomeCallable;
      typedef std::future<SearchVulnerabilitiesOutcome> SearchVulnerabilitiesOutcomeCallable;
      typedef std::future<SendCisSessionHealthOutcome> SendCisSessionHealthOutcomeCallable;
      typedef std::future<SendCisSessionTelemetryOutcome> SendCisSessionTelemetryOutcomeCallable;
      typedef std::future<StartCisSessionOutcome> StartCisSessionOutcomeCallable;
      typedef std::future<StartCodeSecurityScanOutcome> StartCodeSecurityScanOutcomeCallable;
      typedef std::future<StopCisSessionOutcome> StopCisSessionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCisScanConfigurationOutcome> UpdateCisScanConfigurationOutcomeCallable;
      typedef std::future<UpdateCodeSecurityIntegrationOutcome> UpdateCodeSecurityIntegrationOutcomeCallable;
      typedef std::future<UpdateCodeSecurityScanConfigurationOutcome> UpdateCodeSecurityScanConfigurationOutcomeCallable;
      typedef std::future<UpdateConfigurationOutcome> UpdateConfigurationOutcomeCallable;
      typedef std::future<UpdateEc2DeepInspectionConfigurationOutcome> UpdateEc2DeepInspectionConfigurationOutcomeCallable;
      typedef std::future<UpdateEncryptionKeyOutcome> UpdateEncryptionKeyOutcomeCallable;
      typedef std::future<UpdateFilterOutcome> UpdateFilterOutcomeCallable;
      typedef std::future<UpdateOrgEc2DeepInspectionConfigurationOutcome> UpdateOrgEc2DeepInspectionConfigurationOutcomeCallable;
      typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Inspector2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const Inspector2Client*, const Model::AssociateMemberRequest&, const Model::AssociateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchAssociateCodeSecurityScanConfigurationRequest&, const Model::BatchAssociateCodeSecurityScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateCodeSecurityScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchDisassociateCodeSecurityScanConfigurationRequest&, const Model::BatchDisassociateCodeSecurityScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateCodeSecurityScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetAccountStatusRequest&, const Model::BatchGetAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetAccountStatusResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetCodeSnippetRequest&, const Model::BatchGetCodeSnippetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCodeSnippetResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetFindingDetailsRequest&, const Model::BatchGetFindingDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFindingDetailsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetFreeTrialInfoRequest&, const Model::BatchGetFreeTrialInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFreeTrialInfoResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchGetMemberEc2DeepInspectionStatusRequest&, const Model::BatchGetMemberEc2DeepInspectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetMemberEc2DeepInspectionStatusResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::BatchUpdateMemberEc2DeepInspectionStatusRequest&, const Model::BatchUpdateMemberEc2DeepInspectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateMemberEc2DeepInspectionStatusResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CancelFindingsReportRequest&, const Model::CancelFindingsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelFindingsReportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CancelSbomExportRequest&, const Model::CancelSbomExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSbomExportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateCisScanConfigurationRequest&, const Model::CreateCisScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCisScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateCodeSecurityIntegrationRequest&, const Model::CreateCodeSecurityIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeSecurityIntegrationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateCodeSecurityScanConfigurationRequest&, const Model::CreateCodeSecurityScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeSecurityScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateFilterRequest&, const Model::CreateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFilterResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateFindingsReportRequest&, const Model::CreateFindingsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFindingsReportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::CreateSbomExportRequest&, const Model::CreateSbomExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSbomExportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DeleteCisScanConfigurationRequest&, const Model::DeleteCisScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCisScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DeleteCodeSecurityIntegrationRequest&, const Model::DeleteCodeSecurityIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCodeSecurityIntegrationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DeleteCodeSecurityScanConfigurationRequest&, const Model::DeleteCodeSecurityScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCodeSecurityScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DeleteFilterRequest&, const Model::DeleteFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFilterResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DisableRequest&, const Model::DisableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DisableDelegatedAdminAccountRequest&, const Model::DisableDelegatedAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDelegatedAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::DisassociateMemberRequest&, const Model::DisassociateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::EnableRequest&, const Model::EnableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::EnableDelegatedAdminAccountRequest&, const Model::EnableDelegatedAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDelegatedAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetCisScanReportRequest&, const Model::GetCisScanReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCisScanReportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetCisScanResultDetailsRequest&, const Model::GetCisScanResultDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCisScanResultDetailsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetClustersForImageRequest&, const Model::GetClustersForImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClustersForImageResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetCodeSecurityIntegrationRequest&, const Model::GetCodeSecurityIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCodeSecurityIntegrationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetCodeSecurityScanRequest&, const Model::GetCodeSecurityScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCodeSecurityScanResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetCodeSecurityScanConfigurationRequest&, const Model::GetCodeSecurityScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCodeSecurityScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetConfigurationRequest&, const Model::GetConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetDelegatedAdminAccountRequest&, const Model::GetDelegatedAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDelegatedAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetEc2DeepInspectionConfigurationRequest&, const Model::GetEc2DeepInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEc2DeepInspectionConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetEncryptionKeyRequest&, const Model::GetEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEncryptionKeyResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetFindingsReportStatusRequest&, const Model::GetFindingsReportStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsReportStatusResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::GetSbomExportRequest&, const Model::GetSbomExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSbomExportResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListAccountPermissionsRequest&, const Model::ListAccountPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountPermissionsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCisScanConfigurationsRequest&, const Model::ListCisScanConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCisScanConfigurationsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCisScanResultsAggregatedByChecksRequest&, const Model::ListCisScanResultsAggregatedByChecksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCisScanResultsAggregatedByChecksResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCisScanResultsAggregatedByTargetResourceRequest&, const Model::ListCisScanResultsAggregatedByTargetResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCisScanResultsAggregatedByTargetResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCisScansRequest&, const Model::ListCisScansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCisScansResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCodeSecurityIntegrationsRequest&, const Model::ListCodeSecurityIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeSecurityIntegrationsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCodeSecurityScanConfigurationAssociationsRequest&, const Model::ListCodeSecurityScanConfigurationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeSecurityScanConfigurationAssociationsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCodeSecurityScanConfigurationsRequest&, const Model::ListCodeSecurityScanConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeSecurityScanConfigurationsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCoverageRequest&, const Model::ListCoverageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoverageResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListCoverageStatisticsRequest&, const Model::ListCoverageStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoverageStatisticsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListDelegatedAdminAccountsRequest&, const Model::ListDelegatedAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDelegatedAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListFiltersRequest&, const Model::ListFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFiltersResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListFindingAggregationsRequest&, const Model::ListFindingAggregationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingAggregationsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ListUsageTotalsRequest&, const Model::ListUsageTotalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageTotalsResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::ResetEncryptionKeyRequest&, const Model::ResetEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetEncryptionKeyResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::SearchVulnerabilitiesRequest&, const Model::SearchVulnerabilitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchVulnerabilitiesResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::SendCisSessionHealthRequest&, const Model::SendCisSessionHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCisSessionHealthResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::SendCisSessionTelemetryRequest&, const Model::SendCisSessionTelemetryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCisSessionTelemetryResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::StartCisSessionRequest&, const Model::StartCisSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCisSessionResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::StartCodeSecurityScanRequest&, const Model::StartCodeSecurityScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCodeSecurityScanResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::StopCisSessionRequest&, const Model::StopCisSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCisSessionResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateCisScanConfigurationRequest&, const Model::UpdateCisScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCisScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateCodeSecurityIntegrationRequest&, const Model::UpdateCodeSecurityIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCodeSecurityIntegrationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateCodeSecurityScanConfigurationRequest&, const Model::UpdateCodeSecurityScanConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCodeSecurityScanConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateConfigurationRequest&, const Model::UpdateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateEc2DeepInspectionConfigurationRequest&, const Model::UpdateEc2DeepInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEc2DeepInspectionConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateEncryptionKeyRequest&, const Model::UpdateEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEncryptionKeyResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateFilterRequest&, const Model::UpdateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFilterResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateOrgEc2DeepInspectionConfigurationRequest&, const Model::UpdateOrgEc2DeepInspectionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrgEc2DeepInspectionConfigurationResponseReceivedHandler;
    typedef std::function<void(const Inspector2Client*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Inspector2
} // namespace Aws
