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
#include <aws/macie2/model/CreateClassificationJobResult.h>
#include <aws/macie2/model/CreateCustomDataIdentifierResult.h>
#include <aws/macie2/model/CreateFindingsFilterResult.h>
#include <aws/macie2/model/CreateInvitationsResult.h>
#include <aws/macie2/model/CreateMemberResult.h>
#include <aws/macie2/model/CreateSampleFindingsResult.h>
#include <aws/macie2/model/DeclineInvitationsResult.h>
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
#include <aws/macie2/model/GetBucketStatisticsResult.h>
#include <aws/macie2/model/GetClassificationExportConfigurationResult.h>
#include <aws/macie2/model/GetCustomDataIdentifierResult.h>
#include <aws/macie2/model/GetFindingStatisticsResult.h>
#include <aws/macie2/model/GetFindingsResult.h>
#include <aws/macie2/model/GetFindingsFilterResult.h>
#include <aws/macie2/model/GetInvitationsCountResult.h>
#include <aws/macie2/model/GetMacieSessionResult.h>
#include <aws/macie2/model/GetMasterAccountResult.h>
#include <aws/macie2/model/GetMemberResult.h>
#include <aws/macie2/model/GetUsageStatisticsResult.h>
#include <aws/macie2/model/GetUsageTotalsResult.h>
#include <aws/macie2/model/ListClassificationJobsResult.h>
#include <aws/macie2/model/ListCustomDataIdentifiersResult.h>
#include <aws/macie2/model/ListFindingsResult.h>
#include <aws/macie2/model/ListFindingsFiltersResult.h>
#include <aws/macie2/model/ListInvitationsResult.h>
#include <aws/macie2/model/ListMembersResult.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsResult.h>
#include <aws/macie2/model/ListTagsForResourceResult.h>
#include <aws/macie2/model/PutClassificationExportConfigurationResult.h>
#include <aws/macie2/model/TagResourceResult.h>
#include <aws/macie2/model/TestCustomDataIdentifierResult.h>
#include <aws/macie2/model/UntagResourceResult.h>
#include <aws/macie2/model/UpdateClassificationJobResult.h>
#include <aws/macie2/model/UpdateFindingsFilterResult.h>
#include <aws/macie2/model/UpdateMacieSessionResult.h>
#include <aws/macie2/model/UpdateMemberSessionResult.h>
#include <aws/macie2/model/UpdateOrganizationConfigurationResult.h>
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
        class CreateClassificationJobRequest;
        class CreateCustomDataIdentifierRequest;
        class CreateFindingsFilterRequest;
        class CreateInvitationsRequest;
        class CreateMemberRequest;
        class CreateSampleFindingsRequest;
        class DeclineInvitationsRequest;
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
        class GetBucketStatisticsRequest;
        class GetClassificationExportConfigurationRequest;
        class GetCustomDataIdentifierRequest;
        class GetFindingStatisticsRequest;
        class GetFindingsRequest;
        class GetFindingsFilterRequest;
        class GetInvitationsCountRequest;
        class GetMacieSessionRequest;
        class GetMasterAccountRequest;
        class GetMemberRequest;
        class GetUsageStatisticsRequest;
        class GetUsageTotalsRequest;
        class ListClassificationJobsRequest;
        class ListCustomDataIdentifiersRequest;
        class ListFindingsRequest;
        class ListFindingsFiltersRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListOrganizationAdminAccountsRequest;
        class ListTagsForResourceRequest;
        class PutClassificationExportConfigurationRequest;
        class TagResourceRequest;
        class TestCustomDataIdentifierRequest;
        class UntagResourceRequest;
        class UpdateClassificationJobRequest;
        class UpdateFindingsFilterRequest;
        class UpdateMacieSessionRequest;
        class UpdateMemberSessionRequest;
        class UpdateOrganizationConfigurationRequest;

        typedef Aws::Utils::Outcome<AcceptInvitationResult, Macie2Error> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<BatchGetCustomDataIdentifiersResult, Macie2Error> BatchGetCustomDataIdentifiersOutcome;
        typedef Aws::Utils::Outcome<CreateClassificationJobResult, Macie2Error> CreateClassificationJobOutcome;
        typedef Aws::Utils::Outcome<CreateCustomDataIdentifierResult, Macie2Error> CreateCustomDataIdentifierOutcome;
        typedef Aws::Utils::Outcome<CreateFindingsFilterResult, Macie2Error> CreateFindingsFilterOutcome;
        typedef Aws::Utils::Outcome<CreateInvitationsResult, Macie2Error> CreateInvitationsOutcome;
        typedef Aws::Utils::Outcome<CreateMemberResult, Macie2Error> CreateMemberOutcome;
        typedef Aws::Utils::Outcome<CreateSampleFindingsResult, Macie2Error> CreateSampleFindingsOutcome;
        typedef Aws::Utils::Outcome<DeclineInvitationsResult, Macie2Error> DeclineInvitationsOutcome;
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
        typedef Aws::Utils::Outcome<GetBucketStatisticsResult, Macie2Error> GetBucketStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetClassificationExportConfigurationResult, Macie2Error> GetClassificationExportConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetCustomDataIdentifierResult, Macie2Error> GetCustomDataIdentifierOutcome;
        typedef Aws::Utils::Outcome<GetFindingStatisticsResult, Macie2Error> GetFindingStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsResult, Macie2Error> GetFindingsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsFilterResult, Macie2Error> GetFindingsFilterOutcome;
        typedef Aws::Utils::Outcome<GetInvitationsCountResult, Macie2Error> GetInvitationsCountOutcome;
        typedef Aws::Utils::Outcome<GetMacieSessionResult, Macie2Error> GetMacieSessionOutcome;
        typedef Aws::Utils::Outcome<GetMasterAccountResult, Macie2Error> GetMasterAccountOutcome;
        typedef Aws::Utils::Outcome<GetMemberResult, Macie2Error> GetMemberOutcome;
        typedef Aws::Utils::Outcome<GetUsageStatisticsResult, Macie2Error> GetUsageStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetUsageTotalsResult, Macie2Error> GetUsageTotalsOutcome;
        typedef Aws::Utils::Outcome<ListClassificationJobsResult, Macie2Error> ListClassificationJobsOutcome;
        typedef Aws::Utils::Outcome<ListCustomDataIdentifiersResult, Macie2Error> ListCustomDataIdentifiersOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, Macie2Error> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListFindingsFiltersResult, Macie2Error> ListFindingsFiltersOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, Macie2Error> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, Macie2Error> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, Macie2Error> ListOrganizationAdminAccountsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Macie2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutClassificationExportConfigurationResult, Macie2Error> PutClassificationExportConfigurationOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Macie2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestCustomDataIdentifierResult, Macie2Error> TestCustomDataIdentifierOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Macie2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateClassificationJobResult, Macie2Error> UpdateClassificationJobOutcome;
        typedef Aws::Utils::Outcome<UpdateFindingsFilterResult, Macie2Error> UpdateFindingsFilterOutcome;
        typedef Aws::Utils::Outcome<UpdateMacieSessionResult, Macie2Error> UpdateMacieSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateMemberSessionResult, Macie2Error> UpdateMemberSessionOutcome;
        typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, Macie2Error> UpdateOrganizationConfigurationOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<BatchGetCustomDataIdentifiersOutcome> BatchGetCustomDataIdentifiersOutcomeCallable;
        typedef std::future<CreateClassificationJobOutcome> CreateClassificationJobOutcomeCallable;
        typedef std::future<CreateCustomDataIdentifierOutcome> CreateCustomDataIdentifierOutcomeCallable;
        typedef std::future<CreateFindingsFilterOutcome> CreateFindingsFilterOutcomeCallable;
        typedef std::future<CreateInvitationsOutcome> CreateInvitationsOutcomeCallable;
        typedef std::future<CreateMemberOutcome> CreateMemberOutcomeCallable;
        typedef std::future<CreateSampleFindingsOutcome> CreateSampleFindingsOutcomeCallable;
        typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
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
        typedef std::future<GetBucketStatisticsOutcome> GetBucketStatisticsOutcomeCallable;
        typedef std::future<GetClassificationExportConfigurationOutcome> GetClassificationExportConfigurationOutcomeCallable;
        typedef std::future<GetCustomDataIdentifierOutcome> GetCustomDataIdentifierOutcomeCallable;
        typedef std::future<GetFindingStatisticsOutcome> GetFindingStatisticsOutcomeCallable;
        typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
        typedef std::future<GetFindingsFilterOutcome> GetFindingsFilterOutcomeCallable;
        typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
        typedef std::future<GetMacieSessionOutcome> GetMacieSessionOutcomeCallable;
        typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
        typedef std::future<GetMemberOutcome> GetMemberOutcomeCallable;
        typedef std::future<GetUsageStatisticsOutcome> GetUsageStatisticsOutcomeCallable;
        typedef std::future<GetUsageTotalsOutcome> GetUsageTotalsOutcomeCallable;
        typedef std::future<ListClassificationJobsOutcome> ListClassificationJobsOutcomeCallable;
        typedef std::future<ListCustomDataIdentifiersOutcome> ListCustomDataIdentifiersOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListFindingsFiltersOutcome> ListFindingsFiltersOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutClassificationExportConfigurationOutcome> PutClassificationExportConfigurationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestCustomDataIdentifierOutcome> TestCustomDataIdentifierOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateClassificationJobOutcome> UpdateClassificationJobOutcomeCallable;
        typedef std::future<UpdateFindingsFilterOutcome> UpdateFindingsFilterOutcomeCallable;
        typedef std::future<UpdateMacieSessionOutcome> UpdateMacieSessionOutcomeCallable;
        typedef std::future<UpdateMemberSessionOutcome> UpdateMemberSessionOutcomeCallable;
        typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
} // namespace Model

  class Macie2Client;

    typedef std::function<void(const Macie2Client*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::BatchGetCustomDataIdentifiersRequest&, const Model::BatchGetCustomDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCustomDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateClassificationJobRequest&, const Model::CreateClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClassificationJobResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateCustomDataIdentifierRequest&, const Model::CreateCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateFindingsFilterRequest&, const Model::CreateFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateInvitationsRequest&, const Model::CreateInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateMemberRequest&, const Model::CreateMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::CreateSampleFindingsRequest&, const Model::CreateSampleFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSampleFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
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
    typedef std::function<void(const Macie2Client*, const Model::GetBucketStatisticsRequest&, const Model::GetBucketStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetClassificationExportConfigurationRequest&, const Model::GetClassificationExportConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassificationExportConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetCustomDataIdentifierRequest&, const Model::GetCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingStatisticsRequest&, const Model::GetFindingStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetFindingsFilterRequest&, const Model::GetFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMacieSessionRequest&, const Model::GetMacieSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMacieSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetMemberRequest&, const Model::GetMemberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetUsageStatisticsRequest&, const Model::GetUsageStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageStatisticsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::GetUsageTotalsRequest&, const Model::GetUsageTotalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageTotalsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListClassificationJobsRequest&, const Model::ListClassificationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClassificationJobsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListCustomDataIdentifiersRequest&, const Model::ListCustomDataIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomDataIdentifiersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListFindingsFiltersRequest&, const Model::ListFindingsFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsFiltersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::PutClassificationExportConfigurationRequest&, const Model::PutClassificationExportConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutClassificationExportConfigurationResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::TestCustomDataIdentifierRequest&, const Model::TestCustomDataIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestCustomDataIdentifierResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateClassificationJobRequest&, const Model::UpdateClassificationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassificationJobResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateFindingsFilterRequest&, const Model::UpdateFindingsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsFilterResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateMacieSessionRequest&, const Model::UpdateMacieSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMacieSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateMemberSessionRequest&, const Model::UpdateMemberSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberSessionResponseReceivedHandler;
    typedef std::function<void(const Macie2Client*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;

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
        Macie2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Accepts an Amazon Macie membership invitation that was received from a
         * specific account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts an Amazon Macie membership invitation that was received from a
         * specific account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about one or more custom data
         * identifiers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BatchGetCustomDataIdentifiers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetCustomDataIdentifiersOutcomeCallable BatchGetCustomDataIdentifiersCallable(const Model::BatchGetCustomDataIdentifiersRequest& request) const;

        /**
         * <p>Retrieves information about one or more custom data
         * identifiers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BatchGetCustomDataIdentifiers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCustomDataIdentifiersAsync(const Model::BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates and defines the settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClassificationJobOutcome CreateClassificationJob(const Model::CreateClassificationJobRequest& request) const;

        /**
         * <p>Creates and defines the settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateClassificationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClassificationJobOutcomeCallable CreateClassificationJobCallable(const Model::CreateClassificationJobRequest& request) const;

        /**
         * <p>Creates and defines the settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateClassificationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates and defines the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomDataIdentifierOutcomeCallable CreateCustomDataIdentifierCallable(const Model::CreateCustomDataIdentifierRequest& request) const;

        /**
         * <p>Creates and defines the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates and defines the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateFindingsFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFindingsFilterOutcomeCallable CreateFindingsFilterCallable(const Model::CreateFindingsFilterRequest& request) const;

        /**
         * <p>Creates and defines the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateFindingsFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Sends an Amazon Macie membership invitation to one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvitationsOutcomeCallable CreateInvitationsCallable(const Model::CreateInvitationsRequest& request) const;

        /**
         * <p>Sends an Amazon Macie membership invitation to one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Associates an account with an Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMemberOutcomeCallable CreateMemberCallable(const Model::CreateMemberRequest& request) const;

        /**
         * <p>Associates an account with an Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * <p>Creates sample findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CreateSampleFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Declines Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDataIdentifierOutcome DeleteCustomDataIdentifier(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomDataIdentifierOutcomeCallable DeleteCustomDataIdentifierCallable(const Model::DeleteCustomDataIdentifierRequest& request) const;

        /**
         * <p>Soft deletes a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomDataIdentifierAsync(const Model::DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingsFilterOutcome DeleteFindingsFilter(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFindingsFilterOutcomeCallable DeleteFindingsFilterCallable(const Model::DeleteFindingsFilterRequest& request) const;

        /**
         * <p>Deletes a findings filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteFindingsFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes Amazon Macie membership invitations that were received from specific
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the association between an Amazon Macie administrator account and an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMemberOutcomeCallable DeleteMemberCallable(const Model::DeleteMemberRequest& request) const;

        /**
         * <p>Deletes the association between an Amazon Macie administrator account and an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DeleteMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves (queries) statistical data and other information about one or more
         * S3 buckets that Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeBuckets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBucketsOutcomeCallable DescribeBucketsCallable(const Model::DescribeBucketsRequest& request) const;

        /**
         * <p>Retrieves (queries) statistical data and other information about one or more
         * S3 buckets that Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeBuckets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the status and settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeClassificationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClassificationJobOutcomeCallable DescribeClassificationJobCallable(const Model::DescribeClassificationJobRequest& request) const;

        /**
         * <p>Retrieves the status and settings for a classification job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeClassificationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClassificationJobAsync(const Model::DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Amazon Macie configuration settings for an AWS
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * <p>Retrieves the Amazon Macie configuration settings for an AWS
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * <p>Retrieves the Amazon Macie configuration settings for an AWS
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an Amazon Macie account and deletes Macie resources for the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableMacie">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableMacieOutcome DisableMacie(const Model::DisableMacieRequest& request) const;

        /**
         * <p>Disables an Amazon Macie account and deletes Macie resources for the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableMacie">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableMacieOutcomeCallable DisableMacieCallable(const Model::DisableMacieRequest& request) const;

        /**
         * <p>Disables an Amazon Macie account and deletes Macie resources for the
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableMacie">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableMacieAsync(const Model::DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an account as the delegated Amazon Macie administrator account for
         * an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Disables an account as the delegated Amazon Macie administrator account for
         * an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Disables an account as the delegated Amazon Macie administrator account for
         * an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disassociates a member account from its Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * <p>Disassociates a member account from its Amazon Macie administrator
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>(Deprecated) Disassociates a member account from its Amazon Macie
         * administrator account. This operation has been replaced by the <link 
         * linkend="DisassociateFromAdministratorAccount">DisassociateFromAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>(Deprecated) Disassociates a member account from its Amazon Macie
         * administrator account. This operation has been replaced by the <link 
         * linkend="DisassociateFromAdministratorAccount">DisassociateFromAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disassociates an Amazon Macie administrator account from a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMemberOutcomeCallable DisassociateMemberCallable(const Model::DisassociateMemberRequest& request) const;

        /**
         * <p>Disassociates an Amazon Macie administrator account from a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DisassociateMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Enables Amazon Macie and specifies the configuration settings for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableMacie">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableMacieOutcomeCallable EnableMacieCallable(const Model::EnableMacieRequest& request) const;

        /**
         * <p>Enables Amazon Macie and specifies the configuration settings for a Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableMacie">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableMacieAsync(const Model::EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Designates an account as the delegated Amazon Macie administrator account for
         * an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Designates an account as the delegated Amazon Macie administrator account for
         * an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Designates an account as the delegated Amazon Macie administrator account for
         * an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about the Amazon Macie administrator account for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAdministratorAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * <p>Retrieves information about the Amazon Macie administrator account for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetAdministratorAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAdministratorAccountAsync(const Model::GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data for all the S3 buckets that
         * Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetBucketStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketStatisticsOutcome GetBucketStatistics(const Model::GetBucketStatisticsRequest& request) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data for all the S3 buckets that
         * Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetBucketStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketStatisticsOutcomeCallable GetBucketStatisticsCallable(const Model::GetBucketStatisticsRequest& request) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data for all the S3 buckets that
         * Amazon Macie monitors and analyzes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetBucketStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetClassificationExportConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassificationExportConfigurationOutcomeCallable GetClassificationExportConfigurationCallable(const Model::GetClassificationExportConfigurationRequest& request) const;

        /**
         * <p>Retrieves the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetClassificationExportConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomDataIdentifierOutcomeCallable GetCustomDataIdentifierCallable(const Model::GetCustomDataIdentifierRequest& request) const;

        /**
         * <p>Retrieves the criteria and other settings for a custom data
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves (queries) aggregated statistical data about findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingStatisticsOutcomeCallable GetFindingStatisticsCallable(const Model::GetFindingStatisticsRequest& request) const;

        /**
         * <p>Retrieves (queries) aggregated statistical data about findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingStatisticsAsync(const Model::GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Retrieves the details of one or more findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsFilterOutcomeCallable GetFindingsFilterCallable(const Model::GetFindingsFilterRequest& request) const;

        /**
         * <p>Retrieves the criteria and other settings for a findings
         * filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetFindingsFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsFilterAsync(const Model::GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the count of Amazon Macie membership invitations that were received
         * by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Retrieves the count of Amazon Macie membership invitations that were received
         * by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Retrieves the count of Amazon Macie membership invitations that were received
         * by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves the current status and configuration settings for an Amazon Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMacieSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMacieSessionOutcomeCallable GetMacieSessionCallable(const Model::GetMacieSessionRequest& request) const;

        /**
         * <p>Retrieves the current status and configuration settings for an Amazon Macie
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMacieSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>(Deprecated) Retrieves information about the Amazon Macie administrator
         * account for an account. This operation has been replaced by the <link 
         * linkend="GetAdministratorAccount">GetAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>(Deprecated) Retrieves information about the Amazon Macie administrator
         * account for an account. This operation has been replaced by the <link 
         * linkend="GetAdministratorAccount">GetAdministratorAccount</link>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about an account that's associated with an Amazon Macie
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMember">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberOutcomeCallable GetMemberCallable(const Model::GetMemberRequest& request) const;

        /**
         * <p>Retrieves information about an account that's associated with an Amazon Macie
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetMember">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberAsync(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves (queries) quotas and aggregated usage data for one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageStatisticsOutcome GetUsageStatistics(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * <p>Retrieves (queries) quotas and aggregated usage data for one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * <p>Retrieves (queries) quotas and aggregated usage data for one or more
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves (queries) aggregated usage data for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageTotals">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageTotalsOutcomeCallable GetUsageTotalsCallable(const Model::GetUsageTotalsRequest& request) const;

        /**
         * <p>Retrieves (queries) aggregated usage data for an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GetUsageTotals">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageTotalsAsync(const Model::GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a subset of information about one or more classification
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClassificationJobsOutcome ListClassificationJobs(const Model::ListClassificationJobsRequest& request) const;

        /**
         * <p>Retrieves a subset of information about one or more classification
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClassificationJobsOutcomeCallable ListClassificationJobsCallable(const Model::ListClassificationJobsRequest& request) const;

        /**
         * <p>Retrieves a subset of information about one or more classification
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListClassificationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a subset of information about all the custom data identifiers for
         * an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListCustomDataIdentifiers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomDataIdentifiersOutcomeCallable ListCustomDataIdentifiersCallable(const Model::ListCustomDataIdentifiersRequest& request) const;

        /**
         * <p>Retrieves a subset of information about all the custom data identifiers for
         * an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListCustomDataIdentifiers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a subset of information about one or more findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Retrieves a subset of information about one or more findings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a subset of information about all the findings filters for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindingsFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsFiltersOutcomeCallable ListFindingsFiltersCallable(const Model::ListFindingsFiltersRequest& request) const;

        /**
         * <p>Retrieves a subset of information about all the findings filters for an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListFindingsFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsFiltersAsync(const Model::ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about all the Amazon Macie membership invitations that
         * were received by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Retrieves information about all the Amazon Macie membership invitations that
         * were received by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Retrieves information about all the Amazon Macie membership invitations that
         * were received by an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the accounts that are associated with an Amazon
         * Macie administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Retrieves information about the accounts that are associated with an Amazon
         * Macie administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Retrieves information about the accounts that are associated with an Amazon
         * Macie administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the delegated Amazon Macie administrator account
         * for an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * <p>Retrieves information about the delegated Amazon Macie administrator account
         * for an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * <p>Retrieves information about the delegated Amazon Macie administrator account
         * for an AWS organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the tags (keys and values) that are associated with a
         * classification job, custom data identifier, findings filter, or member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the tags (keys and values) that are associated with a
         * classification job, custom data identifier, findings filter, or member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the tags (keys and values) that are associated with a
         * classification job, custom data identifier, findings filter, or member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates or updates the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutClassificationExportConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutClassificationExportConfigurationOutcomeCallable PutClassificationExportConfigurationCallable(const Model::PutClassificationExportConfigurationRequest& request) const;

        /**
         * <p>Creates or updates the configuration settings for storing data classification
         * results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/PutClassificationExportConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutClassificationExportConfigurationAsync(const Model::PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates one or more tags (keys and values) that are associated with a
         * classification job, custom data identifier, findings filter, or member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates one or more tags (keys and values) that are associated with a
         * classification job, custom data identifier, findings filter, or member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates one or more tags (keys and values) that are associated with a
         * classification job, custom data identifier, findings filter, or member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::TestCustomDataIdentifierOutcome TestCustomDataIdentifier(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestCustomDataIdentifierOutcomeCallable TestCustomDataIdentifierCallable(const Model::TestCustomDataIdentifierRequest& request) const;

        /**
         * <p>Tests a custom data identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TestCustomDataIdentifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestCustomDataIdentifierAsync(const Model::TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags (keys and values) from a classification job, custom
         * data identifier, findings filter, or member account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags (keys and values) from a classification job, custom
         * data identifier, findings filter, or member account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags (keys and values) from a classification job, custom
         * data identifier, findings filter, or member account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassificationJobOutcome UpdateClassificationJob(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClassificationJobOutcomeCallable UpdateClassificationJobCallable(const Model::UpdateClassificationJobRequest& request) const;

        /**
         * <p>Changes the status of a classification job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateClassificationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the criteria and other settings for a findings filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateFindingsFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsFilterOutcomeCallable UpdateFindingsFilterCallable(const Model::UpdateFindingsFilterRequest& request) const;

        /**
         * <p>Updates the criteria and other settings for a findings filter.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateFindingsFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsFilterAsync(const Model::UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends or re-enables an Amazon Macie account, or updates the configuration
         * settings for a Macie account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMacieSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMacieSessionOutcome UpdateMacieSession(const Model::UpdateMacieSessionRequest& request) const;

        /**
         * <p>Suspends or re-enables an Amazon Macie account, or updates the configuration
         * settings for a Macie account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMacieSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMacieSessionOutcomeCallable UpdateMacieSessionCallable(const Model::UpdateMacieSessionRequest& request) const;

        /**
         * <p>Suspends or re-enables an Amazon Macie account, or updates the configuration
         * settings for a Macie account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMacieSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMacieSessionAsync(const Model::UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables an Amazon Macie administrator to suspend or re-enable a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMemberSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberSessionOutcome UpdateMemberSession(const Model::UpdateMemberSessionRequest& request) const;

        /**
         * <p>Enables an Amazon Macie administrator to suspend or re-enable a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMemberSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberSessionOutcomeCallable UpdateMemberSessionCallable(const Model::UpdateMemberSessionRequest& request) const;

        /**
         * <p>Enables an Amazon Macie administrator to suspend or re-enable a member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateMemberSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMemberSessionAsync(const Model::UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Amazon Macie configuration settings for an AWS
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * <p>Updates the Amazon Macie configuration settings for an AWS
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * <p>Updates the Amazon Macie configuration settings for an AWS
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetCustomDataIdentifiersAsyncHelper(const Model::BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClassificationJobAsyncHelper(const Model::CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomDataIdentifierAsyncHelper(const Model::CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFindingsFilterAsyncHelper(const Model::CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvitationsAsyncHelper(const Model::CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMemberAsyncHelper(const Model::CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSampleFindingsAsyncHelper(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineInvitationsAsyncHelper(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomDataIdentifierAsyncHelper(const Model::DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFindingsFilterAsyncHelper(const Model::DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInvitationsAsyncHelper(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMemberAsyncHelper(const Model::DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBucketsAsyncHelper(const Model::DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClassificationJobAsyncHelper(const Model::DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigurationAsyncHelper(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableMacieAsyncHelper(const Model::DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableOrganizationAdminAccountAsyncHelper(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFromAdministratorAccountAsyncHelper(const Model::DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFromMasterAccountAsyncHelper(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMemberAsyncHelper(const Model::DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableMacieAsyncHelper(const Model::EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableOrganizationAdminAccountAsyncHelper(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAdministratorAccountAsyncHelper(const Model::GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketStatisticsAsyncHelper(const Model::GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetClassificationExportConfigurationAsyncHelper(const Model::GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCustomDataIdentifierAsyncHelper(const Model::GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingStatisticsAsyncHelper(const Model::GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsAsyncHelper(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsFilterAsyncHelper(const Model::GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvitationsCountAsyncHelper(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMacieSessionAsyncHelper(const Model::GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMasterAccountAsyncHelper(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMemberAsyncHelper(const Model::GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageStatisticsAsyncHelper(const Model::GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageTotalsAsyncHelper(const Model::GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClassificationJobsAsyncHelper(const Model::ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomDataIdentifiersAsyncHelper(const Model::ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsFiltersAsyncHelper(const Model::ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationAdminAccountsAsyncHelper(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutClassificationExportConfigurationAsyncHelper(const Model::PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestCustomDataIdentifierAsyncHelper(const Model::TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClassificationJobAsyncHelper(const Model::UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFindingsFilterAsyncHelper(const Model::UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMacieSessionAsyncHelper(const Model::UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMemberSessionAsyncHelper(const Model::UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOrganizationConfigurationAsyncHelper(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Macie2
} // namespace Aws
