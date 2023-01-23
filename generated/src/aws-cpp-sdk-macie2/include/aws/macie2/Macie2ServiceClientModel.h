/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/macie2/Macie2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/macie2/Macie2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Macie2Client header */
#include <aws/macie2/model/AcceptInvitationResult.h>
#include <aws/macie2/model/BatchGetCustomDataIdentifiersResult.h>
#include <aws/macie2/model/CreateAllowListResult.h>
#include <aws/macie2/model/CreateClassificationJobResult.h>
#include <aws/macie2/model/CreateCustomDataIdentifierResult.h>
#include <aws/macie2/model/CreateFindingsFilterResult.h>
#include <aws/macie2/model/CreateInvitationsResult.h>
#include <aws/macie2/model/CreateMemberResult.h>
#include <aws/macie2/model/CreateSampleFindingsResult.h>
#include <aws/macie2/model/DeclineInvitationsResult.h>
#include <aws/macie2/model/DeleteAllowListResult.h>
#include <aws/macie2/model/DeleteCustomDataIdentifierResult.h>
#include <aws/macie2/model/DeleteFindingsFilterResult.h>
#include <aws/macie2/model/DeleteInvitationsResult.h>
#include <aws/macie2/model/DeleteMemberResult.h>
#include <aws/macie2/model/DescribeBucketsResult.h>
#include <aws/macie2/model/DescribeClassificationJobResult.h>
#include <aws/macie2/model/DescribeOrganizationConfigurationResult.h>
#include <aws/macie2/model/DisableMacieResult.h>
#include <aws/macie2/model/DisableOrganizationAdminAccountResult.h>
#include <aws/macie2/model/DisassociateFromAdministratorAccountResult.h>
#include <aws/macie2/model/DisassociateFromMasterAccountResult.h>
#include <aws/macie2/model/DisassociateMemberResult.h>
#include <aws/macie2/model/EnableMacieResult.h>
#include <aws/macie2/model/EnableOrganizationAdminAccountResult.h>
#include <aws/macie2/model/GetAdministratorAccountResult.h>
#include <aws/macie2/model/GetAllowListResult.h>
#include <aws/macie2/model/GetAutomatedDiscoveryConfigurationResult.h>
#include <aws/macie2/model/GetBucketStatisticsResult.h>
#include <aws/macie2/model/GetClassificationExportConfigurationResult.h>
#include <aws/macie2/model/GetClassificationScopeResult.h>
#include <aws/macie2/model/GetCustomDataIdentifierResult.h>
#include <aws/macie2/model/GetFindingStatisticsResult.h>
#include <aws/macie2/model/GetFindingsResult.h>
#include <aws/macie2/model/GetFindingsFilterResult.h>
#include <aws/macie2/model/GetFindingsPublicationConfigurationResult.h>
#include <aws/macie2/model/GetInvitationsCountResult.h>
#include <aws/macie2/model/GetMacieSessionResult.h>
#include <aws/macie2/model/GetMasterAccountResult.h>
#include <aws/macie2/model/GetMemberResult.h>
#include <aws/macie2/model/GetResourceProfileResult.h>
#include <aws/macie2/model/GetRevealConfigurationResult.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesResult.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityResult.h>
#include <aws/macie2/model/GetSensitivityInspectionTemplateResult.h>
#include <aws/macie2/model/GetUsageStatisticsResult.h>
#include <aws/macie2/model/GetUsageTotalsResult.h>
#include <aws/macie2/model/ListAllowListsResult.h>
#include <aws/macie2/model/ListClassificationJobsResult.h>
#include <aws/macie2/model/ListClassificationScopesResult.h>
#include <aws/macie2/model/ListCustomDataIdentifiersResult.h>
#include <aws/macie2/model/ListFindingsResult.h>
#include <aws/macie2/model/ListFindingsFiltersResult.h>
#include <aws/macie2/model/ListInvitationsResult.h>
#include <aws/macie2/model/ListManagedDataIdentifiersResult.h>
#include <aws/macie2/model/ListMembersResult.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsResult.h>
#include <aws/macie2/model/ListResourceProfileArtifactsResult.h>
#include <aws/macie2/model/ListResourceProfileDetectionsResult.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesResult.h>
#include <aws/macie2/model/ListTagsForResourceResult.h>
#include <aws/macie2/model/PutClassificationExportConfigurationResult.h>
#include <aws/macie2/model/PutFindingsPublicationConfigurationResult.h>
#include <aws/macie2/model/SearchResourcesResult.h>
#include <aws/macie2/model/TagResourceResult.h>
#include <aws/macie2/model/TestCustomDataIdentifierResult.h>
#include <aws/macie2/model/UntagResourceResult.h>
#include <aws/macie2/model/UpdateAllowListResult.h>
#include <aws/macie2/model/UpdateAutomatedDiscoveryConfigurationResult.h>
#include <aws/macie2/model/UpdateClassificationJobResult.h>
#include <aws/macie2/model/UpdateClassificationScopeResult.h>
#include <aws/macie2/model/UpdateFindingsFilterResult.h>
#include <aws/macie2/model/UpdateMacieSessionResult.h>
#include <aws/macie2/model/UpdateMemberSessionResult.h>
#include <aws/macie2/model/UpdateOrganizationConfigurationResult.h>
#include <aws/macie2/model/UpdateResourceProfileResult.h>
#include <aws/macie2/model/UpdateResourceProfileDetectionsResult.h>
#include <aws/macie2/model/UpdateRevealConfigurationResult.h>
#include <aws/macie2/model/UpdateSensitivityInspectionTemplateResult.h>
/* End of service model headers required in Macie2Client header */

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

  namespace Macie2
  {
    using Macie2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Macie2EndpointProviderBase = Aws::Macie2::Endpoint::Macie2EndpointProviderBase;
    using Macie2EndpointProvider = Aws::Macie2::Endpoint::Macie2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Macie2Client header */
      class AcceptInvitationRequest;
      class BatchGetCustomDataIdentifiersRequest;
      class CreateAllowListRequest;
      class CreateClassificationJobRequest;
      class CreateCustomDataIdentifierRequest;
      class CreateFindingsFilterRequest;
      class CreateInvitationsRequest;
      class CreateMemberRequest;
      class CreateSampleFindingsRequest;
      class DeclineInvitationsRequest;
      class DeleteAllowListRequest;
      class DeleteCustomDataIdentifierRequest;
      class DeleteFindingsFilterRequest;
      class DeleteInvitationsRequest;
      class DeleteMemberRequest;
      class DescribeBucketsRequest;
      class DescribeClassificationJobRequest;
      class DescribeOrganizationConfigurationRequest;
      class DisableMacieRequest;
      class DisableOrganizationAdminAccountRequest;
      class DisassociateFromAdministratorAccountRequest;
      class DisassociateFromMasterAccountRequest;
      class DisassociateMemberRequest;
      class EnableMacieRequest;
      class EnableOrganizationAdminAccountRequest;
      class GetAdministratorAccountRequest;
      class GetAllowListRequest;
      class GetAutomatedDiscoveryConfigurationRequest;
      class GetBucketStatisticsRequest;
      class GetClassificationExportConfigurationRequest;
      class GetClassificationScopeRequest;
      class GetCustomDataIdentifierRequest;
      class GetFindingStatisticsRequest;
      class GetFindingsRequest;
      class GetFindingsFilterRequest;
      class GetFindingsPublicationConfigurationRequest;
      class GetInvitationsCountRequest;
      class GetMacieSessionRequest;
      class GetMasterAccountRequest;
      class GetMemberRequest;
      class GetResourceProfileRequest;
      class GetRevealConfigurationRequest;
      class GetSensitiveDataOccurrencesRequest;
      class GetSensitiveDataOccurrencesAvailabilityRequest;
      class GetSensitivityInspectionTemplateRequest;
      class GetUsageStatisticsRequest;
      class GetUsageTotalsRequest;
      class ListAllowListsRequest;
      class ListClassificationJobsRequest;
      class ListClassificationScopesRequest;
      class ListCustomDataIdentifiersRequest;
      class ListFindingsRequest;
      class ListFindingsFiltersRequest;
      class ListInvitationsRequest;
      class ListManagedDataIdentifiersRequest;
      class ListMembersRequest;
      class ListOrganizationAdminAccountsRequest;
      class ListResourceProfileArtifactsRequest;
      class ListResourceProfileDetectionsRequest;
      class ListSensitivityInspectionTemplatesRequest;
      class ListTagsForResourceRequest;
      class PutClassificationExportConfigurationRequest;
      class PutFindingsPublicationConfigurationRequest;
      class SearchResourcesRequest;
      class TagResourceRequest;
      class TestCustomDataIdentifierRequest;
      class UntagResourceRequest;
      class UpdateAllowListRequest;
      class UpdateAutomatedDiscoveryConfigurationRequest;
      class UpdateClassificationJobRequest;
      class UpdateClassificationScopeRequest;
      class UpdateFindingsFilterRequest;
      class UpdateMacieSessionRequest;
      class UpdateMemberSessionRequest;
      class UpdateOrganizationConfigurationRequest;
      class UpdateResourceProfileRequest;
      class UpdateResourceProfileDetectionsRequest;
      class UpdateRevealConfigurationRequest;
      class UpdateSensitivityInspectionTemplateRequest;
      /* End of service model forward declarations required in Macie2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptInvitationResult, Macie2Error> AcceptInvitationOutcome;
      typedef Aws::Utils::Outcome<BatchGetCustomDataIdentifiersResult, Macie2Error> BatchGetCustomDataIdentifiersOutcome;
      typedef Aws::Utils::Outcome<CreateAllowListResult, Macie2Error> CreateAllowListOutcome;
      typedef Aws::Utils::Outcome<CreateClassificationJobResult, Macie2Error> CreateClassificationJobOutcome;
      typedef Aws::Utils::Outcome<CreateCustomDataIdentifierResult, Macie2Error> CreateCustomDataIdentifierOutcome;
      typedef Aws::Utils::Outcome<CreateFindingsFilterResult, Macie2Error> CreateFindingsFilterOutcome;
      typedef Aws::Utils::Outcome<CreateInvitationsResult, Macie2Error> CreateInvitationsOutcome;
      typedef Aws::Utils::Outcome<CreateMemberResult, Macie2Error> CreateMemberOutcome;
      typedef Aws::Utils::Outcome<CreateSampleFindingsResult, Macie2Error> CreateSampleFindingsOutcome;
      typedef Aws::Utils::Outcome<DeclineInvitationsResult, Macie2Error> DeclineInvitationsOutcome;
      typedef Aws::Utils::Outcome<DeleteAllowListResult, Macie2Error> DeleteAllowListOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomDataIdentifierResult, Macie2Error> DeleteCustomDataIdentifierOutcome;
      typedef Aws::Utils::Outcome<DeleteFindingsFilterResult, Macie2Error> DeleteFindingsFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteInvitationsResult, Macie2Error> DeleteInvitationsOutcome;
      typedef Aws::Utils::Outcome<DeleteMemberResult, Macie2Error> DeleteMemberOutcome;
      typedef Aws::Utils::Outcome<DescribeBucketsResult, Macie2Error> DescribeBucketsOutcome;
      typedef Aws::Utils::Outcome<DescribeClassificationJobResult, Macie2Error> DescribeClassificationJobOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, Macie2Error> DescribeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DisableMacieResult, Macie2Error> DisableMacieOutcome;
      typedef Aws::Utils::Outcome<DisableOrganizationAdminAccountResult, Macie2Error> DisableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateFromAdministratorAccountResult, Macie2Error> DisassociateFromAdministratorAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateFromMasterAccountResult, Macie2Error> DisassociateFromMasterAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateMemberResult, Macie2Error> DisassociateMemberOutcome;
      typedef Aws::Utils::Outcome<EnableMacieResult, Macie2Error> EnableMacieOutcome;
      typedef Aws::Utils::Outcome<EnableOrganizationAdminAccountResult, Macie2Error> EnableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetAdministratorAccountResult, Macie2Error> GetAdministratorAccountOutcome;
      typedef Aws::Utils::Outcome<GetAllowListResult, Macie2Error> GetAllowListOutcome;
      typedef Aws::Utils::Outcome<GetAutomatedDiscoveryConfigurationResult, Macie2Error> GetAutomatedDiscoveryConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetBucketStatisticsResult, Macie2Error> GetBucketStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetClassificationExportConfigurationResult, Macie2Error> GetClassificationExportConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetClassificationScopeResult, Macie2Error> GetClassificationScopeOutcome;
      typedef Aws::Utils::Outcome<GetCustomDataIdentifierResult, Macie2Error> GetCustomDataIdentifierOutcome;
      typedef Aws::Utils::Outcome<GetFindingStatisticsResult, Macie2Error> GetFindingStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetFindingsResult, Macie2Error> GetFindingsOutcome;
      typedef Aws::Utils::Outcome<GetFindingsFilterResult, Macie2Error> GetFindingsFilterOutcome;
      typedef Aws::Utils::Outcome<GetFindingsPublicationConfigurationResult, Macie2Error> GetFindingsPublicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetInvitationsCountResult, Macie2Error> GetInvitationsCountOutcome;
      typedef Aws::Utils::Outcome<GetMacieSessionResult, Macie2Error> GetMacieSessionOutcome;
      typedef Aws::Utils::Outcome<GetMasterAccountResult, Macie2Error> GetMasterAccountOutcome;
      typedef Aws::Utils::Outcome<GetMemberResult, Macie2Error> GetMemberOutcome;
      typedef Aws::Utils::Outcome<GetResourceProfileResult, Macie2Error> GetResourceProfileOutcome;
      typedef Aws::Utils::Outcome<GetRevealConfigurationResult, Macie2Error> GetRevealConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetSensitiveDataOccurrencesResult, Macie2Error> GetSensitiveDataOccurrencesOutcome;
      typedef Aws::Utils::Outcome<GetSensitiveDataOccurrencesAvailabilityResult, Macie2Error> GetSensitiveDataOccurrencesAvailabilityOutcome;
      typedef Aws::Utils::Outcome<GetSensitivityInspectionTemplateResult, Macie2Error> GetSensitivityInspectionTemplateOutcome;
      typedef Aws::Utils::Outcome<GetUsageStatisticsResult, Macie2Error> GetUsageStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetUsageTotalsResult, Macie2Error> GetUsageTotalsOutcome;
      typedef Aws::Utils::Outcome<ListAllowListsResult, Macie2Error> ListAllowListsOutcome;
      typedef Aws::Utils::Outcome<ListClassificationJobsResult, Macie2Error> ListClassificationJobsOutcome;
      typedef Aws::Utils::Outcome<ListClassificationScopesResult, Macie2Error> ListClassificationScopesOutcome;
      typedef Aws::Utils::Outcome<ListCustomDataIdentifiersResult, Macie2Error> ListCustomDataIdentifiersOutcome;
      typedef Aws::Utils::Outcome<ListFindingsResult, Macie2Error> ListFindingsOutcome;
      typedef Aws::Utils::Outcome<ListFindingsFiltersResult, Macie2Error> ListFindingsFiltersOutcome;
      typedef Aws::Utils::Outcome<ListInvitationsResult, Macie2Error> ListInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListManagedDataIdentifiersResult, Macie2Error> ListManagedDataIdentifiersOutcome;
      typedef Aws::Utils::Outcome<ListMembersResult, Macie2Error> ListMembersOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, Macie2Error> ListOrganizationAdminAccountsOutcome;
      typedef Aws::Utils::Outcome<ListResourceProfileArtifactsResult, Macie2Error> ListResourceProfileArtifactsOutcome;
      typedef Aws::Utils::Outcome<ListResourceProfileDetectionsResult, Macie2Error> ListResourceProfileDetectionsOutcome;
      typedef Aws::Utils::Outcome<ListSensitivityInspectionTemplatesResult, Macie2Error> ListSensitivityInspectionTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Macie2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutClassificationExportConfigurationResult, Macie2Error> PutClassificationExportConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutFindingsPublicationConfigurationResult, Macie2Error> PutFindingsPublicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<SearchResourcesResult, Macie2Error> SearchResourcesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Macie2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestCustomDataIdentifierResult, Macie2Error> TestCustomDataIdentifierOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Macie2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAllowListResult, Macie2Error> UpdateAllowListOutcome;
      typedef Aws::Utils::Outcome<UpdateAutomatedDiscoveryConfigurationResult, Macie2Error> UpdateAutomatedDiscoveryConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateClassificationJobResult, Macie2Error> UpdateClassificationJobOutcome;
      typedef Aws::Utils::Outcome<UpdateClassificationScopeResult, Macie2Error> UpdateClassificationScopeOutcome;
      typedef Aws::Utils::Outcome<UpdateFindingsFilterResult, Macie2Error> UpdateFindingsFilterOutcome;
      typedef Aws::Utils::Outcome<UpdateMacieSessionResult, Macie2Error> UpdateMacieSessionOutcome;
      typedef Aws::Utils::Outcome<UpdateMemberSessionResult, Macie2Error> UpdateMemberSessionOutcome;
      typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, Macie2Error> UpdateOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceProfileResult, Macie2Error> UpdateResourceProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceProfileDetectionsResult, Macie2Error> UpdateResourceProfileDetectionsOutcome;
      typedef Aws::Utils::Outcome<UpdateRevealConfigurationResult, Macie2Error> UpdateRevealConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateSensitivityInspectionTemplateResult, Macie2Error> UpdateSensitivityInspectionTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
      typedef std::future<BatchGetCustomDataIdentifiersOutcome> BatchGetCustomDataIdentifiersOutcomeCallable;
      typedef std::future<CreateAllowListOutcome> CreateAllowListOutcomeCallable;
      typedef std::future<CreateClassificationJobOutcome> CreateClassificationJobOutcomeCallable;
      typedef std::future<CreateCustomDataIdentifierOutcome> CreateCustomDataIdentifierOutcomeCallable;
      typedef std::future<CreateFindingsFilterOutcome> CreateFindingsFilterOutcomeCallable;
      typedef std::future<CreateInvitationsOutcome> CreateInvitationsOutcomeCallable;
      typedef std::future<CreateMemberOutcome> CreateMemberOutcomeCallable;
      typedef std::future<CreateSampleFindingsOutcome> CreateSampleFindingsOutcomeCallable;
      typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
      typedef std::future<DeleteAllowListOutcome> DeleteAllowListOutcomeCallable;
      typedef std::future<DeleteCustomDataIdentifierOutcome> DeleteCustomDataIdentifierOutcomeCallable;
      typedef std::future<DeleteFindingsFilterOutcome> DeleteFindingsFilterOutcomeCallable;
      typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
      typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
      typedef std::future<DescribeBucketsOutcome> DescribeBucketsOutcomeCallable;
      typedef std::future<DescribeClassificationJobOutcome> DescribeClassificationJobOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DisableMacieOutcome> DisableMacieOutcomeCallable;
      typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<DisassociateFromAdministratorAccountOutcome> DisassociateFromAdministratorAccountOutcomeCallable;
      typedef std::future<DisassociateFromMasterAccountOutcome> DisassociateFromMasterAccountOutcomeCallable;
      typedef std::future<DisassociateMemberOutcome> DisassociateMemberOutcomeCallable;
      typedef std::future<EnableMacieOutcome> EnableMacieOutcomeCallable;
      typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<GetAdministratorAccountOutcome> GetAdministratorAccountOutcomeCallable;
      typedef std::future<GetAllowListOutcome> GetAllowListOutcomeCallable;
      typedef std::future<GetAutomatedDiscoveryConfigurationOutcome> GetAutomatedDiscoveryConfigurationOutcomeCallable;
      typedef std::future<GetBucketStatisticsOutcome> GetBucketStatisticsOutcomeCallable;
      typedef std::future<GetClassificationExportConfigurationOutcome> GetClassificationExportConfigurationOutcomeCallable;
      typedef std::future<GetClassificationScopeOutcome> GetClassificationScopeOutcomeCallable;
      typedef std::future<GetCustomDataIdentifierOutcome> GetCustomDataIdentifierOutcomeCallable;
      typedef std::future<GetFindingStatisticsOutcome> GetFindingStatisticsOutcomeCallable;
      typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
      typedef std::future<GetFindingsFilterOutcome> GetFindingsFilterOutcomeCallable;
      typedef std::future<GetFindingsPublicationConfigurationOutcome> GetFindingsPublicationConfigurationOutcomeCallable;
      typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
      typedef std::future<GetMacieSessionOutcome> GetMacieSessionOutcomeCallable;
      typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
      typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
      typedef std::future<GetResourceProfileOutcome> GetResourceProfileOutcomeCallable;
      typedef std::future<GetRevealConfigurationOutcome> GetRevealConfigurationOutcomeCallable;
      typedef std::future<GetSensitiveDataOccurrencesOutcome> GetSensitiveDataOccurrencesOutcomeCallable;
      typedef std::future<GetSensitiveDataOccurrencesAvailabilityOutcome> GetSensitiveDataOccurrencesAvailabilityOutcomeCallable;
      typedef std::future<GetSensitivityInspectionTemplateOutcome> GetSensitivityInspectionTemplateOutcomeCallable;
      typedef std::future<GetUsageStatisticsOutcome> GetUsageStatisticsOutcomeCallable;
      typedef std::future<GetUsageTotalsOutcome> GetUsageTotalsOutcomeCallable;
      typedef std::future<ListAllowListsOutcome> ListAllowListsOutcomeCallable;
      typedef std::future<ListClassificationJobsOutcome> ListClassificationJobsOutcomeCallable;
      typedef std::future<ListClassificationScopesOutcome> ListClassificationScopesOutcomeCallable;
      typedef std::future<ListCustomDataIdentifiersOutcome> ListCustomDataIdentifiersOutcomeCallable;
      typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
      typedef std::future<ListFindingsFiltersOutcome> ListFindingsFiltersOutcomeCallable;
      typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
      typedef std::future<ListManagedDataIdentifiersOutcome> ListManagedDataIdentifiersOutcomeCallable;
      typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
      typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
      typedef std::future<ListResourceProfileArtifactsOutcome> ListResourceProfileArtifactsOutcomeCallable;
      typedef std::future<ListResourceProfileDetectionsOutcome> ListResourceProfileDetectionsOutcomeCallable;
      typedef std::future<ListSensitivityInspectionTemplatesOutcome> ListSensitivityInspectionTemplatesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutClassificationExportConfigurationOutcome> PutClassificationExportConfigurationOutcomeCallable;
      typedef std::future<PutFindingsPublicationConfigurationOutcome> PutFindingsPublicationConfigurationOutcomeCallable;
      typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestCustomDataIdentifierOutcome> TestCustomDataIdentifierOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAllowListOutcome> UpdateAllowListOutcomeCallable;
      typedef std::future<UpdateAutomatedDiscoveryConfigurationOutcome> UpdateAutomatedDiscoveryConfigurationOutcomeCallable;
      typedef std::future<UpdateClassificationJobOutcome> UpdateClassificationJobOutcomeCallable;
      typedef std::future<UpdateClassificationScopeOutcome> UpdateClassificationScopeOutcomeCallable;
      typedef std::future<UpdateFindingsFilterOutcome> UpdateFindingsFilterOutcomeCallable;
      typedef std::future<UpdateMacieSessionOutcome> UpdateMacieSessionOutcomeCallable;
      typedef std::future<UpdateMemberSessionOutcome> UpdateMemberSessionOutcomeCallable;
      typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
      typedef std::future<UpdateResourceProfileOutcome> UpdateResourceProfileOutcomeCallable;
      typedef std::future<UpdateResourceProfileDetectionsOutcome> UpdateResourceProfileDetectionsOutcomeCallable;
      typedef std::future<UpdateRevealConfigurationOutcome> UpdateRevealConfigurationOutcomeCallable;
      typedef std::future<UpdateSensitivityInspectionTemplateOutcome> UpdateSensitivityInspectionTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Macie2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const Macie2Client*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::BatchGetCustomDataIdentifiersRequest&, const Model::BatchGetCustomDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCustomDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateAllowListRequest&, const Model::CreateAllowListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAllowListResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateClassificationJobRequest&, const Model::CreateClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClassificationJobResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateCustomDataIdentifierRequest&, const Model::CreateCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateFindingsFilterRequest&, const Model::CreateFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateInvitationsRequest&, const Model::CreateInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateMemberRequest&, const Model::CreateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateSampleFindingsRequest&, const Model::CreateSampleFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSampleFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeleteAllowListRequest&, const Model::DeleteAllowListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAllowListResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeleteCustomDataIdentifierRequest&, const Model::DeleteCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeleteFindingsFilterRequest&, const Model::DeleteFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeleteMemberRequest&, const Model::DeleteMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DescribeBucketsRequest&, const Model::DescribeBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBucketsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DescribeClassificationJobRequest&, const Model::DescribeClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClassificationJobResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DisableMacieRequest&, const Model::DisableMacieOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableMacieResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DisableOrganizationAdminAccountRequest&, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DisassociateFromAdministratorAccountRequest&, const Model::DisassociateFromAdministratorAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromAdministratorAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DisassociateFromMasterAccountRequest&, const Model::DisassociateFromMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromMasterAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DisassociateMemberRequest&, const Model::DisassociateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::EnableMacieRequest&, const Model::EnableMacieOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableMacieResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetAdministratorAccountRequest&, const Model::GetAdministratorAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdministratorAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetAllowListRequest&, const Model::GetAllowListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAllowListResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetAutomatedDiscoveryConfigurationRequest&, const Model::GetAutomatedDiscoveryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutomatedDiscoveryConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetBucketStatisticsRequest&, const Model::GetBucketStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetClassificationExportConfigurationRequest&, const Model::GetClassificationExportConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassificationExportConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetClassificationScopeRequest&, const Model::GetClassificationScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassificationScopeResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetCustomDataIdentifierRequest&, const Model::GetCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingStatisticsRequest&, const Model::GetFindingStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsFilterRequest&, const Model::GetFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsPublicationConfigurationRequest&, const Model::GetFindingsPublicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsPublicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMacieSessionRequest&, const Model::GetMacieSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMacieSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetResourceProfileRequest&, const Model::GetResourceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceProfileResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetRevealConfigurationRequest&, const Model::GetRevealConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRevealConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetSensitiveDataOccurrencesRequest&, const Model::GetSensitiveDataOccurrencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSensitiveDataOccurrencesResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetSensitiveDataOccurrencesAvailabilityRequest&, const Model::GetSensitiveDataOccurrencesAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetSensitivityInspectionTemplateRequest&, const Model::GetSensitivityInspectionTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSensitivityInspectionTemplateResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetUsageStatisticsRequest&, const Model::GetUsageStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetUsageTotalsRequest&, const Model::GetUsageTotalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageTotalsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListAllowListsRequest&, const Model::ListAllowListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowListsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListClassificationJobsRequest&, const Model::ListClassificationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClassificationJobsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListClassificationScopesRequest&, const Model::ListClassificationScopesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClassificationScopesResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListCustomDataIdentifiersRequest&, const Model::ListCustomDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListFindingsFiltersRequest&, const Model::ListFindingsFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsFiltersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListManagedDataIdentifiersRequest&, const Model::ListManagedDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListResourceProfileArtifactsRequest&, const Model::ListResourceProfileArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceProfileArtifactsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListResourceProfileDetectionsRequest&, const Model::ListResourceProfileDetectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceProfileDetectionsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListSensitivityInspectionTemplatesRequest&, const Model::ListSensitivityInspectionTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSensitivityInspectionTemplatesResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::PutClassificationExportConfigurationRequest&, const Model::PutClassificationExportConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutClassificationExportConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::PutFindingsPublicationConfigurationRequest&, const Model::PutFindingsPublicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFindingsPublicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::SearchResourcesRequest&, const Model::SearchResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResourcesResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::TestCustomDataIdentifierRequest&, const Model::TestCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateAllowListRequest&, const Model::UpdateAllowListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAllowListResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateAutomatedDiscoveryConfigurationRequest&, const Model::UpdateAutomatedDiscoveryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAutomatedDiscoveryConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateClassificationJobRequest&, const Model::UpdateClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassificationJobResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateClassificationScopeRequest&, const Model::UpdateClassificationScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassificationScopeResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateFindingsFilterRequest&, const Model::UpdateFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateMacieSessionRequest&, const Model::UpdateMacieSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMacieSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateMemberSessionRequest&, const Model::UpdateMemberSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateResourceProfileRequest&, const Model::UpdateResourceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceProfileResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateResourceProfileDetectionsRequest&, const Model::UpdateResourceProfileDetectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceProfileDetectionsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateRevealConfigurationRequest&, const Model::UpdateRevealConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRevealConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateSensitivityInspectionTemplateRequest&, const Model::UpdateSensitivityInspectionTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSensitivityInspectionTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Macie2
} // namespace Aws
