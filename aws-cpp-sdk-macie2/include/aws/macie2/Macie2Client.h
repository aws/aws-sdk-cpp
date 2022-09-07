/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/macie2/model/GetBucketStatisticsResult.h>
#include <aws/macie2/model/GetClassificationExportConfigurationResult.h>
#include <aws/macie2/model/GetCustomDataIdentifierResult.h>
#include <aws/macie2/model/GetFindingStatisticsResult.h>
#include <aws/macie2/model/GetFindingsResult.h>
#include <aws/macie2/model/GetFindingsFilterResult.h>
#include <aws/macie2/model/GetFindingsPublicationConfigurationResult.h>
#include <aws/macie2/model/GetInvitationsCountResult.h>
#include <aws/macie2/model/GetMacieSessionResult.h>
#include <aws/macie2/model/GetMasterAccountResult.h>
#include <aws/macie2/model/GetMemberResult.h>
#include <aws/macie2/model/GetRevealConfigurationResult.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesResult.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityResult.h>
#include <aws/macie2/model/GetUsageStatisticsResult.h>
#include <aws/macie2/model/GetUsageTotalsResult.h>
#include <aws/macie2/model/ListAllowListsResult.h>
#include <aws/macie2/model/ListClassificationJobsResult.h>
#include <aws/macie2/model/ListCustomDataIdentifiersResult.h>
#include <aws/macie2/model/ListFindingsResult.h>
#include <aws/macie2/model/ListFindingsFiltersResult.h>
#include <aws/macie2/model/ListInvitationsResult.h>
#include <aws/macie2/model/ListManagedDataIdentifiersResult.h>
#include <aws/macie2/model/ListMembersResult.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsResult.h>
#include <aws/macie2/model/ListTagsForResourceResult.h>
#include <aws/macie2/model/PutClassificationExportConfigurationResult.h>
#include <aws/macie2/model/PutFindingsPublicationConfigurationResult.h>
#include <aws/macie2/model/SearchResourcesResult.h>
#include <aws/macie2/model/TagResourceResult.h>
#include <aws/macie2/model/TestCustomDataIdentifierResult.h>
#include <aws/macie2/model/UntagResourceResult.h>
#include <aws/macie2/model/UpdateAllowListResult.h>
#include <aws/macie2/model/UpdateClassificationJobResult.h>
#include <aws/macie2/model/UpdateFindingsFilterResult.h>
#include <aws/macie2/model/UpdateMacieSessionResult.h>
#include <aws/macie2/model/UpdateMemberSessionResult.h>
#include <aws/macie2/model/UpdateOrganizationConfigurationResult.h>
#include <aws/macie2/model/UpdateRevealConfigurationResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class GetBucketStatisticsRequest;
        class GetClassificationExportConfigurationRequest;
        class GetCustomDataIdentifierRequest;
        class GetFindingStatisticsRequest;
        class GetFindingsRequest;
        class GetFindingsFilterRequest;
        class GetFindingsPublicationConfigurationRequest;
        class GetInvitationsCountRequest;
        class GetMacieSessionRequest;
        class GetMasterAccountRequest;
        class GetMemberRequest;
        class GetRevealConfigurationRequest;
        class GetSensitiveDataOccurrencesRequest;
        class GetSensitiveDataOccurrencesAvailabilityRequest;
        class GetUsageStatisticsRequest;
        class GetUsageTotalsRequest;
        class ListAllowListsRequest;
        class ListClassificationJobsRequest;
        class ListCustomDataIdentifiersRequest;
        class ListFindingsRequest;
        class ListFindingsFiltersRequest;
        class ListInvitationsRequest;
        class ListManagedDataIdentifiersRequest;
        class ListMembersRequest;
        class ListOrganizationAdminAccountsRequest;
        class ListTagsForResourceRequest;
        class PutClassificationExportConfigurationRequest;
        class PutFindingsPublicationConfigurationRequest;
        class SearchResourcesRequest;
        class TagResourceRequest;
        class TestCustomDataIdentifierRequest;
        class UntagResourceRequest;
        class UpdateAllowListRequest;
        class UpdateClassificationJobRequest;
        class UpdateFindingsFilterRequest;
        class UpdateMacieSessionRequest;
        class UpdateMemberSessionRequest;
        class UpdateOrganizationConfigurationRequest;
        class UpdateRevealConfigurationRequest;

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
        typedef Aws::Utils::Outcome<GetBucketStatisticsResult, Macie2Error> GetBucketStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetClassificationExportConfigurationResult, Macie2Error> GetClassificationExportConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetCustomDataIdentifierResult, Macie2Error> GetCustomDataIdentifierOutcome;
        typedef Aws::Utils::Outcome<GetFindingStatisticsResult, Macie2Error> GetFindingStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsResult, Macie2Error> GetFindingsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsFilterResult, Macie2Error> GetFindingsFilterOutcome;
        typedef Aws::Utils::Outcome<GetFindingsPublicationConfigurationResult, Macie2Error> GetFindingsPublicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetInvitationsCountResult, Macie2Error> GetInvitationsCountOutcome;
        typedef Aws::Utils::Outcome<GetMacieSessionResult, Macie2Error> GetMacieSessionOutcome;
        typedef Aws::Utils::Outcome<GetMasterAccountResult, Macie2Error> GetMasterAccountOutcome;
        typedef Aws::Utils::Outcome<GetMemberResult, Macie2Error> GetMemberOutcome;
        typedef Aws::Utils::Outcome<GetRevealConfigurationResult, Macie2Error> GetRevealConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetSensitiveDataOccurrencesResult, Macie2Error> GetSensitiveDataOccurrencesOutcome;
        typedef Aws::Utils::Outcome<GetSensitiveDataOccurrencesAvailabilityResult, Macie2Error> GetSensitiveDataOccurrencesAvailabilityOutcome;
        typedef Aws::Utils::Outcome<GetUsageStatisticsResult, Macie2Error> GetUsageStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetUsageTotalsResult, Macie2Error> GetUsageTotalsOutcome;
        typedef Aws::Utils::Outcome<ListAllowListsResult, Macie2Error> ListAllowListsOutcome;
        typedef Aws::Utils::Outcome<ListClassificationJobsResult, Macie2Error> ListClassificationJobsOutcome;
        typedef Aws::Utils::Outcome<ListCustomDataIdentifiersResult, Macie2Error> ListCustomDataIdentifiersOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, Macie2Error> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListFindingsFiltersResult, Macie2Error> ListFindingsFiltersOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, Macie2Error> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListManagedDataIdentifiersResult, Macie2Error> ListManagedDataIdentifiersOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, Macie2Error> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, Macie2Error> ListOrganizationAdminAccountsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Macie2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutClassificationExportConfigurationResult, Macie2Error> PutClassificationExportConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutFindingsPublicationConfigurationResult, Macie2Error> PutFindingsPublicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<SearchResourcesResult, Macie2Error> SearchResourcesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Macie2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestCustomDataIdentifierResult, Macie2Error> TestCustomDataIdentifierOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Macie2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAllowListResult, Macie2Error> UpdateAllowListOutcome;
        typedef Aws::Utils::Outcome<UpdateClassificationJobResult, Macie2Error> UpdateClassificationJobOutcome;
        typedef Aws::Utils::Outcome<UpdateFindingsFilterResult, Macie2Error> UpdateFindingsFilterOutcome;
        typedef Aws::Utils::Outcome<UpdateMacieSessionResult, Macie2Error> UpdateMacieSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateMemberSessionResult, Macie2Error> UpdateMemberSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, Macie2Error> UpdateOrganizationConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateRevealConfigurationResult, Macie2Error> UpdateRevealConfigurationOutcome;

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
        typedef std::future<GetBucketStatisticsOutcome> GetBucketStatisticsOutcomeCallable;
        typedef std::future<GetClassificationExportConfigurationOutcome> GetClassificationExportConfigurationOutcomeCallable;
        typedef std::future<GetCustomDataIdentifierOutcome> GetCustomDataIdentifierOutcomeCallable;
        typedef std::future<GetFindingStatisticsOutcome> GetFindingStatisticsOutcomeCallable;
        typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
        typedef std::future<GetFindingsFilterOutcome> GetFindingsFilterOutcomeCallable;
        typedef std::future<GetFindingsPublicationConfigurationOutcome> GetFindingsPublicationConfigurationOutcomeCallable;
        typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
        typedef std::future<GetMacieSessionOutcome> GetMacieSessionOutcomeCallable;
        typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
        typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
        typedef std::future<GetRevealConfigurationOutcome> GetRevealConfigurationOutcomeCallable;
        typedef std::future<GetSensitiveDataOccurrencesOutcome> GetSensitiveDataOccurrencesOutcomeCallable;
        typedef std::future<GetSensitiveDataOccurrencesAvailabilityOutcome> GetSensitiveDataOccurrencesAvailabilityOutcomeCallable;
        typedef std::future<GetUsageStatisticsOutcome> GetUsageStatisticsOutcomeCallable;
        typedef std::future<GetUsageTotalsOutcome> GetUsageTotalsOutcomeCallable;
        typedef std::future<ListAllowListsOutcome> ListAllowListsOutcomeCallable;
        typedef std::future<ListClassificationJobsOutcome> ListClassificationJobsOutcomeCallable;
        typedef std::future<ListCustomDataIdentifiersOutcome> ListCustomDataIdentifiersOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListFindingsFiltersOutcome> ListFindingsFiltersOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListManagedDataIdentifiersOutcome> ListManagedDataIdentifiersOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutClassificationExportConfigurationOutcome> PutClassificationExportConfigurationOutcomeCallable;
        typedef std::future<PutFindingsPublicationConfigurationOutcome> PutFindingsPublicationConfigurationOutcomeCallable;
        typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestCustomDataIdentifierOutcome> TestCustomDataIdentifierOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAllowListOutcome> UpdateAllowListOutcomeCallable;
        typedef std::future<UpdateClassificationJobOutcome> UpdateClassificationJobOutcomeCallable;
        typedef std::future<UpdateFindingsFilterOutcome> UpdateFindingsFilterOutcomeCallable;
        typedef std::future<UpdateMacieSessionOutcome> UpdateMacieSessionOutcomeCallable;
        typedef std::future<UpdateMemberSessionOutcome> UpdateMemberSessionOutcomeCallable;
        typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
        typedef std::future<UpdateRevealConfigurationOutcome> UpdateRevealConfigurationOutcomeCallable;
} // namespace Model

  class Macie2Client;

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
    typedef std::function<void(const Macie2Client*, const Model::GetBucketStatisticsRequest&, const Model::GetBucketStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetClassificationExportConfigurationRequest&, const Model::GetClassificationExportConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassificationExportConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetCustomDataIdentifierRequest&, const Model::GetCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingStatisticsRequest&, const Model::GetFindingStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsFilterRequest&, const Model::GetFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsPublicationConfigurationRequest&, const Model::GetFindingsPublicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsPublicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMacieSessionRequest&, const Model::GetMacieSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMacieSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetRevealConfigurationRequest&, const Model::GetRevealConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRevealConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetSensitiveDataOccurrencesRequest&, const Model::GetSensitiveDataOccurrencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSensitiveDataOccurrencesResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetSensitiveDataOccurrencesAvailabilityRequest&, const Model::GetSensitiveDataOccurrencesAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetUsageStatisticsRequest&, const Model::GetUsageStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetUsageTotalsRequest&, const Model::GetUsageTotalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageTotalsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListAllowListsRequest&, const Model::ListAllowListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowListsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListClassificationJobsRequest&, const Model::ListClassificationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClassificationJobsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListCustomDataIdentifiersRequest&, const Model::ListCustomDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListFindingsFiltersRequest&, const Model::ListFindingsFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsFiltersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListManagedDataIdentifiersRequest&, const Model::ListManagedDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::PutClassificationExportConfigurationRequest&, const Model::PutClassificationExportConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutClassificationExportConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::PutFindingsPublicationConfigurationRequest&, const Model::PutFindingsPublicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFindingsPublicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::SearchResourcesRequest&, const Model::SearchResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResourcesResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::TestCustomDataIdentifierRequest&, const Model::TestCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateAllowListRequest&, const Model::UpdateAllowListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAllowListResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateClassificationJobRequest&, const Model::UpdateClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassificationJobResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateFindingsFilterRequest&, const Model::UpdateFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateMacieSessionRequest&, const Model::UpdateMacieSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMacieSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateMemberSessionRequest&, const Model::UpdateMemberSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateRevealConfigurationRequest&, const Model::UpdateRevealConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRevealConfigurationResponseReceivedHandler;

  /**
   * <p>Amazon Macie is a fully managed data security and data privacy service that
   * uses machine learning and pattern matching to discover and protect your
   * sensitive data in AWS. Macie automates the discovery of sensitive data, such as
   * PII and intellectual property, to provide you with insight into the data that
   * your organization stores in AWS. Macie also provides an inventory of your Amazon
   * S3 buckets, which it continually monitors for you. If Macie detects sensitive
   * data or potential data access issues, it generates detailed findings for you to
   * review and act upon as necessary.</p>
   */
  class AWS_MACIE2_API Macie2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Macie2Client(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Macie2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Macie2Client();


        /**
         * <p>Accepts an Amazon Macie membership invitation that was received from a
         * specific account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * An Async wrapper for AcceptInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about one or more custom data
         * identifiers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BatchGetCustomDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCustomDataIdentifiersOutcome BatchGetCustomDataIdentifiers(const Model::BatchGetCustomDataIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCustomDataIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetCustomDataIdentifiersOutcomeCallable BatchGetCustomDataIdentifiersCallable(const Model::BatchGetCustomDataIdentifiersRequest& request) const;

        /**
         * An Async wrapper for BatchGetCustomDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCustomDataIdentifiersAsync(const Model::BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the settings for an allow list.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAllowListOutcome CreateAllowList(const Model::CreateAllowListRequest& request) const;

        /**
         * A Callable wrapper for CreateAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAllowListOutcomeCallable CreateAllowListCallable(const Model::CreateAllowListRequest& request) const;

        /**
         * An Async wrapper for CreateAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAllowListAsync(const Model::CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClassificationJobOutcome CreateClassificationJob(const Model::CreateClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClassificationJobOutcomeCallable CreateClassificationJobCallable(const Model::CreateClassificationJobRequest& request) const;

        /**
         * An Async wrapper for CreateClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClassificationJobAsync(const Model::CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomDataIdentifierOutcome CreateCustomDataIdentifier(const Model::CreateCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomDataIdentifierOutcomeCallable CreateCustomDataIdentifierCallable(const Model::CreateCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for CreateCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomDataIdentifierAsync(const Model::CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingsFilterOutcome CreateFindingsFilter(const Model::CreateFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFindingsFilterOutcomeCallable CreateFindingsFilterCallable(const Model::CreateFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for CreateFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFindingsFilterAsync(const Model::CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an Amazon Macie membership invitation to one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvitationsOutcome CreateInvitations(const Model::CreateInvitationsRequest& request) const;

        /**
         * A Callable wrapper for CreateInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvitationsOutcomeCallable CreateInvitationsCallable(const Model::CreateInvitationsRequest& request) const;

        /**
         * An Async wrapper for CreateInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvitationsAsync(const Model::CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an account with an Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemberOutcome CreateMember(const Model::CreateMemberRequest& request) const;

        /**
         * A Callable wrapper for CreateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMemberOutcomeCallable CreateMemberCallable(const Model::CreateMemberRequest& request) const;

        /**
         * An Async wrapper for CreateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * A Callable wrapper for CreateSampleFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * An Async wrapper for CreateSampleFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSampleFindingsAsync(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeclineInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * An Async wrapper for DeclineInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAllowListOutcome DeleteAllowList(const Model::DeleteAllowListRequest& request) const;

        /**
         * A Callable wrapper for DeleteAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAllowListOutcomeCallable DeleteAllowListCallable(const Model::DeleteAllowListRequest& request) const;

        /**
         * An Async wrapper for DeleteAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAllowListAsync(const Model::DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDataIdentifierOutcome DeleteCustomDataIdentifier(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomDataIdentifierOutcomeCallable DeleteCustomDataIdentifierCallable(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomDataIdentifierAsync(const Model::DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingsFilterOutcome DeleteFindingsFilter(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFindingsFilterOutcomeCallable DeleteFindingsFilterCallable(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFindingsFilterAsync(const Model::DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * An Async wrapper for DeleteInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association between an Amazon Macie administrator account and an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMemberOutcome DeleteMember(const Model::DeleteMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const Model::DeleteMemberRequest& request) const;

        /**
         * An Async wrapper for DeleteMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) statistical data and other information about one or more
         * S3 buckets that Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBucketsOutcome DescribeBuckets(const Model::DescribeBucketsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBucketsOutcomeCallable DescribeBucketsCallable(const Model::DescribeBucketsRequest& request) const;

        /**
         * An Async wrapper for DescribeBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBucketsAsync(const Model::DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status and settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClassificationJobOutcome DescribeClassificationJob(const Model::DescribeClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClassificationJobOutcomeCallable DescribeClassificationJobCallable(const Model::DescribeClassificationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClassificationJobAsync(const Model::DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Amazon Macie configuration settings for an organization in
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables Amazon Macie and deletes all settings and resources for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMacieOutcome DisableMacie(const Model::DisableMacieRequest& request) const;

        /**
         * A Callable wrapper for DisableMacie that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableMacieOutcomeCallable DisableMacieCallable(const Model::DisableMacieRequest& request) const;

        /**
         * An Async wrapper for DisableMacie that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableMacieAsync(const Model::DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an account as the delegated Amazon Macie administrator account for
         * an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableOrganizationAdminAccountAsync(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a member account from its Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateFromAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromAdministratorAccountAsync(const Model::DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>(Deprecated) Disassociates a member account from its Amazon Macie
         * administrator account. This operation has been replaced by the <link 
         * linkend="DisassociateFromAdministratorAccount">DisassociateFromAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromMasterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateFromMasterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Amazon Macie administrator account from a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberOutcome DisassociateMember(const Model::DisassociateMemberRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberOutcomeCallable DisassociateMemberCallable(const Model::DisassociateMemberRequest& request) const;

        /**
         * An Async wrapper for DisassociateMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMemberAsync(const Model::DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables Amazon Macie and specifies the configuration settings for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableMacieOutcome EnableMacie(const Model::EnableMacieRequest& request) const;

        /**
         * A Callable wrapper for EnableMacie that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMacieOutcomeCallable EnableMacieCallable(const Model::EnableMacieRequest& request) const;

        /**
         * An Async wrapper for EnableMacie that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMacieAsync(const Model::EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates an account as the delegated Amazon Macie administrator account for
         * an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableOrganizationAdminAccountAsync(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the Amazon Macie administrator account for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * An Async wrapper for GetAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdministratorAccountAsync(const Model::GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the settings and status of an allow list.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAllowListOutcome GetAllowList(const Model::GetAllowListRequest& request) const;

        /**
         * A Callable wrapper for GetAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAllowListOutcomeCallable GetAllowListCallable(const Model::GetAllowListRequest& request) const;

        /**
         * An Async wrapper for GetAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAllowListAsync(const Model::GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data about S3 buckets that Amazon
         * Macie monitors and analyzes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetBucketStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketStatisticsOutcome GetBucketStatistics(const Model::GetBucketStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetBucketStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketStatisticsOutcomeCallable GetBucketStatisticsCallable(const Model::GetBucketStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetBucketStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketStatisticsAsync(const Model::GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetClassificationExportConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassificationExportConfigurationOutcome GetClassificationExportConfiguration(const Model::GetClassificationExportConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetClassificationExportConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassificationExportConfigurationOutcomeCallable GetClassificationExportConfigurationCallable(const Model::GetClassificationExportConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetClassificationExportConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassificationExportConfigurationAsync(const Model::GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomDataIdentifierOutcome GetCustomDataIdentifier(const Model::GetCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for GetCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomDataIdentifierOutcomeCallable GetCustomDataIdentifierCallable(const Model::GetCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for GetCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomDataIdentifierAsync(const Model::GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data about findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingStatisticsOutcome GetFindingStatistics(const Model::GetFindingStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetFindingStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingStatisticsOutcomeCallable GetFindingStatisticsCallable(const Model::GetFindingStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetFindingStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingStatisticsAsync(const Model::GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsFilterOutcome GetFindingsFilter(const Model::GetFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsFilterOutcomeCallable GetFindingsFilterCallable(const Model::GetFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for GetFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsFilterAsync(const Model::GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the configuration settings for publishing findings to Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsPublicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsPublicationConfigurationOutcome GetFindingsPublicationConfiguration(const Model::GetFindingsPublicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetFindingsPublicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsPublicationConfigurationOutcomeCallable GetFindingsPublicationConfigurationCallable(const Model::GetFindingsPublicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetFindingsPublicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsPublicationConfigurationAsync(const Model::GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the count of Amazon Macie membership invitations that were received
         * by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * A Callable wrapper for GetInvitationsCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * An Async wrapper for GetInvitationsCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current status and configuration settings for an Amazon Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMacieSessionOutcome GetMacieSession(const Model::GetMacieSessionRequest& request) const;

        /**
         * A Callable wrapper for GetMacieSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMacieSessionOutcomeCallable GetMacieSessionCallable(const Model::GetMacieSessionRequest& request) const;

        /**
         * An Async wrapper for GetMacieSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMacieSessionAsync(const Model::GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>(Deprecated) Retrieves information about the Amazon Macie administrator
         * account for an account. This operation has been replaced by the <link 
         * linkend="GetAdministratorAccount">GetAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;

        /**
         * A Callable wrapper for GetMasterAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * An Async wrapper for GetMasterAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMasterAccountAsync(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an account that's associated with an Amazon Macie
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberOutcome GetMember(const Model::GetMemberRequest& request) const;

        /**
         * A Callable wrapper for GetMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * An Async wrapper for GetMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberAsync(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status and configuration settings for retrieving occurrences of
         * sensitive data reported by findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetRevealConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRevealConfigurationOutcome GetRevealConfiguration(const Model::GetRevealConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRevealConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRevealConfigurationOutcomeCallable GetRevealConfigurationCallable(const Model::GetRevealConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetRevealConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRevealConfigurationAsync(const Model::GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves occurrences of sensitive data reported by a finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitiveDataOccurrences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitiveDataOccurrencesOutcome GetSensitiveDataOccurrences(const Model::GetSensitiveDataOccurrencesRequest& request) const;

        /**
         * A Callable wrapper for GetSensitiveDataOccurrences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSensitiveDataOccurrencesOutcomeCallable GetSensitiveDataOccurrencesCallable(const Model::GetSensitiveDataOccurrencesRequest& request) const;

        /**
         * An Async wrapper for GetSensitiveDataOccurrences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSensitiveDataOccurrencesAsync(const Model::GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks whether occurrences of sensitive data can be retrieved for a
         * finding.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetSensitiveDataOccurrencesAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSensitiveDataOccurrencesAvailabilityOutcome GetSensitiveDataOccurrencesAvailability(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for GetSensitiveDataOccurrencesAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSensitiveDataOccurrencesAvailabilityOutcomeCallable GetSensitiveDataOccurrencesAvailabilityCallable(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request) const;

        /**
         * An Async wrapper for GetSensitiveDataOccurrencesAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSensitiveDataOccurrencesAvailabilityAsync(const Model::GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) quotas and aggregated usage data for one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageStatisticsOutcome GetUsageStatistics(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetUsageStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetUsageStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageStatisticsAsync(const Model::GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated usage data for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageTotals">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageTotalsOutcome GetUsageTotals(const Model::GetUsageTotalsRequest& request) const;

        /**
         * A Callable wrapper for GetUsageTotals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageTotalsOutcomeCallable GetUsageTotalsCallable(const Model::GetUsageTotalsRequest& request) const;

        /**
         * An Async wrapper for GetUsageTotals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageTotalsAsync(const Model::GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about all the allow lists for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListAllowLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAllowListsOutcome ListAllowLists(const Model::ListAllowListsRequest& request) const;

        /**
         * A Callable wrapper for ListAllowLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAllowListsOutcomeCallable ListAllowListsCallable(const Model::ListAllowListsRequest& request) const;

        /**
         * An Async wrapper for ListAllowLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAllowListsAsync(const Model::ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about one or more classification
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClassificationJobsOutcome ListClassificationJobs(const Model::ListClassificationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListClassificationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClassificationJobsOutcomeCallable ListClassificationJobsCallable(const Model::ListClassificationJobsRequest& request) const;

        /**
         * An Async wrapper for ListClassificationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClassificationJobsAsync(const Model::ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about all the custom data identifiers for
         * an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListCustomDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomDataIdentifiersOutcome ListCustomDataIdentifiers(const Model::ListCustomDataIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for ListCustomDataIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomDataIdentifiersOutcomeCallable ListCustomDataIdentifiersCallable(const Model::ListCustomDataIdentifiersRequest& request) const;

        /**
         * An Async wrapper for ListCustomDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomDataIdentifiersAsync(const Model::ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about one or more findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about all the findings filters for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindingsFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsFiltersOutcome ListFindingsFilters(const Model::ListFindingsFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListFindingsFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsFiltersOutcomeCallable ListFindingsFiltersCallable(const Model::ListFindingsFiltersRequest& request) const;

        /**
         * An Async wrapper for ListFindingsFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsFiltersAsync(const Model::ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the Amazon Macie membership invitations that were
         * received by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the managed data identifiers that Amazon
         * Macie currently provides.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListManagedDataIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedDataIdentifiersOutcome ListManagedDataIdentifiers(const Model::ListManagedDataIdentifiersRequest& request) const;

        /**
         * A Callable wrapper for ListManagedDataIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedDataIdentifiersOutcomeCallable ListManagedDataIdentifiersCallable(const Model::ListManagedDataIdentifiersRequest& request) const;

        /**
         * An Async wrapper for ListManagedDataIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedDataIdentifiersAsync(const Model::ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the accounts that are associated with an Amazon
         * Macie administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the delegated Amazon Macie administrator account
         * for an organization in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tags (keys and values) that are associated with an Amazon Macie
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutClassificationExportConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutClassificationExportConfigurationOutcome PutClassificationExportConfiguration(const Model::PutClassificationExportConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutClassificationExportConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutClassificationExportConfigurationOutcomeCallable PutClassificationExportConfigurationCallable(const Model::PutClassificationExportConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutClassificationExportConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutClassificationExportConfigurationAsync(const Model::PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration settings for publishing findings to Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutFindingsPublicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFindingsPublicationConfigurationOutcome PutFindingsPublicationConfiguration(const Model::PutFindingsPublicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutFindingsPublicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFindingsPublicationConfigurationOutcomeCallable PutFindingsPublicationConfigurationCallable(const Model::PutFindingsPublicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutFindingsPublicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFindingsPublicationConfigurationAsync(const Model::PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) statistical data and other information about Amazon Web
         * Services resources that Amazon Macie monitors and analyzes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * A Callable wrapper for SearchResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const Model::SearchResourcesRequest& request) const;

        /**
         * An Async wrapper for SearchResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchResourcesAsync(const Model::SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates one or more tags (keys and values) that are associated with
         * an Amazon Macie resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::TestCustomDataIdentifierOutcome TestCustomDataIdentifier(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * A Callable wrapper for TestCustomDataIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestCustomDataIdentifierOutcomeCallable TestCustomDataIdentifierCallable(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * An Async wrapper for TestCustomDataIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestCustomDataIdentifierAsync(const Model::TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags (keys and values) from an Amazon Macie
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for an allow list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateAllowList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAllowListOutcome UpdateAllowList(const Model::UpdateAllowListRequest& request) const;

        /**
         * A Callable wrapper for UpdateAllowList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAllowListOutcomeCallable UpdateAllowListCallable(const Model::UpdateAllowListRequest& request) const;

        /**
         * An Async wrapper for UpdateAllowList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAllowListAsync(const Model::UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassificationJobOutcome UpdateClassificationJob(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateClassificationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClassificationJobOutcomeCallable UpdateClassificationJobCallable(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * An Async wrapper for UpdateClassificationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClassificationJobAsync(const Model::UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the criteria and other settings for a findings filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFilterOutcome UpdateFindingsFilter(const Model::UpdateFindingsFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindingsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsFilterOutcomeCallable UpdateFindingsFilterCallable(const Model::UpdateFindingsFilterRequest& request) const;

        /**
         * An Async wrapper for UpdateFindingsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsFilterAsync(const Model::UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends or re-enables Amazon Macie, or updates the configuration settings
         * for a Macie account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMacieSessionOutcome UpdateMacieSession(const Model::UpdateMacieSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateMacieSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMacieSessionOutcomeCallable UpdateMacieSessionCallable(const Model::UpdateMacieSessionRequest& request) const;

        /**
         * An Async wrapper for UpdateMacieSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMacieSessionAsync(const Model::UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables an Amazon Macie administrator to suspend or re-enable Macie for a
         * member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMemberSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberSessionOutcome UpdateMemberSession(const Model::UpdateMemberSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateMemberSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberSessionOutcomeCallable UpdateMemberSessionCallable(const Model::UpdateMemberSessionRequest& request) const;

        /**
         * An Async wrapper for UpdateMemberSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMemberSessionAsync(const Model::UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Amazon Macie configuration settings for an organization in
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status and configuration settings for retrieving occurrences of
         * sensitive data reported by findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateRevealConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRevealConfigurationOutcome UpdateRevealConfiguration(const Model::UpdateRevealConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRevealConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRevealConfigurationOutcomeCallable UpdateRevealConfigurationCallable(const Model::UpdateRevealConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateRevealConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRevealConfigurationAsync(const Model::UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Macie2
} // namespace Aws
