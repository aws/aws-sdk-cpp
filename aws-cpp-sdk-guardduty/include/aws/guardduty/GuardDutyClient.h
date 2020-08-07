/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/AcceptInvitationResult.h>
#include <aws/guardduty/model/ArchiveFindingsResult.h>
#include <aws/guardduty/model/CreateDetectorResult.h>
#include <aws/guardduty/model/CreateFilterResult.h>
#include <aws/guardduty/model/CreateIPSetResult.h>
#include <aws/guardduty/model/CreateMembersResult.h>
#include <aws/guardduty/model/CreatePublishingDestinationResult.h>
#include <aws/guardduty/model/CreateSampleFindingsResult.h>
#include <aws/guardduty/model/CreateThreatIntelSetResult.h>
#include <aws/guardduty/model/DeclineInvitationsResult.h>
#include <aws/guardduty/model/DeleteDetectorResult.h>
#include <aws/guardduty/model/DeleteFilterResult.h>
#include <aws/guardduty/model/DeleteIPSetResult.h>
#include <aws/guardduty/model/DeleteInvitationsResult.h>
#include <aws/guardduty/model/DeleteMembersResult.h>
#include <aws/guardduty/model/DeletePublishingDestinationResult.h>
#include <aws/guardduty/model/DeleteThreatIntelSetResult.h>
#include <aws/guardduty/model/DescribeOrganizationConfigurationResult.h>
#include <aws/guardduty/model/DescribePublishingDestinationResult.h>
#include <aws/guardduty/model/DisableOrganizationAdminAccountResult.h>
#include <aws/guardduty/model/DisassociateFromMasterAccountResult.h>
#include <aws/guardduty/model/DisassociateMembersResult.h>
#include <aws/guardduty/model/EnableOrganizationAdminAccountResult.h>
#include <aws/guardduty/model/GetDetectorResult.h>
#include <aws/guardduty/model/GetFilterResult.h>
#include <aws/guardduty/model/GetFindingsResult.h>
#include <aws/guardduty/model/GetFindingsStatisticsResult.h>
#include <aws/guardduty/model/GetIPSetResult.h>
#include <aws/guardduty/model/GetInvitationsCountResult.h>
#include <aws/guardduty/model/GetMasterAccountResult.h>
#include <aws/guardduty/model/GetMemberDetectorsResult.h>
#include <aws/guardduty/model/GetMembersResult.h>
#include <aws/guardduty/model/GetThreatIntelSetResult.h>
#include <aws/guardduty/model/GetUsageStatisticsResult.h>
#include <aws/guardduty/model/InviteMembersResult.h>
#include <aws/guardduty/model/ListDetectorsResult.h>
#include <aws/guardduty/model/ListFiltersResult.h>
#include <aws/guardduty/model/ListFindingsResult.h>
#include <aws/guardduty/model/ListIPSetsResult.h>
#include <aws/guardduty/model/ListInvitationsResult.h>
#include <aws/guardduty/model/ListMembersResult.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsResult.h>
#include <aws/guardduty/model/ListPublishingDestinationsResult.h>
#include <aws/guardduty/model/ListTagsForResourceResult.h>
#include <aws/guardduty/model/ListThreatIntelSetsResult.h>
#include <aws/guardduty/model/StartMonitoringMembersResult.h>
#include <aws/guardduty/model/StopMonitoringMembersResult.h>
#include <aws/guardduty/model/TagResourceResult.h>
#include <aws/guardduty/model/UnarchiveFindingsResult.h>
#include <aws/guardduty/model/UntagResourceResult.h>
#include <aws/guardduty/model/UpdateDetectorResult.h>
#include <aws/guardduty/model/UpdateFilterResult.h>
#include <aws/guardduty/model/UpdateFindingsFeedbackResult.h>
#include <aws/guardduty/model/UpdateIPSetResult.h>
#include <aws/guardduty/model/UpdateMemberDetectorsResult.h>
#include <aws/guardduty/model/UpdateOrganizationConfigurationResult.h>
#include <aws/guardduty/model/UpdatePublishingDestinationResult.h>
#include <aws/guardduty/model/UpdateThreatIntelSetResult.h>
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

namespace GuardDuty
{

namespace Model
{
        class AcceptInvitationRequest;
        class ArchiveFindingsRequest;
        class CreateDetectorRequest;
        class CreateFilterRequest;
        class CreateIPSetRequest;
        class CreateMembersRequest;
        class CreatePublishingDestinationRequest;
        class CreateSampleFindingsRequest;
        class CreateThreatIntelSetRequest;
        class DeclineInvitationsRequest;
        class DeleteDetectorRequest;
        class DeleteFilterRequest;
        class DeleteIPSetRequest;
        class DeleteInvitationsRequest;
        class DeleteMembersRequest;
        class DeletePublishingDestinationRequest;
        class DeleteThreatIntelSetRequest;
        class DescribeOrganizationConfigurationRequest;
        class DescribePublishingDestinationRequest;
        class DisableOrganizationAdminAccountRequest;
        class DisassociateFromMasterAccountRequest;
        class DisassociateMembersRequest;
        class EnableOrganizationAdminAccountRequest;
        class GetDetectorRequest;
        class GetFilterRequest;
        class GetFindingsRequest;
        class GetFindingsStatisticsRequest;
        class GetIPSetRequest;
        class GetInvitationsCountRequest;
        class GetMasterAccountRequest;
        class GetMemberDetectorsRequest;
        class GetMembersRequest;
        class GetThreatIntelSetRequest;
        class GetUsageStatisticsRequest;
        class InviteMembersRequest;
        class ListDetectorsRequest;
        class ListFiltersRequest;
        class ListFindingsRequest;
        class ListIPSetsRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListOrganizationAdminAccountsRequest;
        class ListPublishingDestinationsRequest;
        class ListTagsForResourceRequest;
        class ListThreatIntelSetsRequest;
        class StartMonitoringMembersRequest;
        class StopMonitoringMembersRequest;
        class TagResourceRequest;
        class UnarchiveFindingsRequest;
        class UntagResourceRequest;
        class UpdateDetectorRequest;
        class UpdateFilterRequest;
        class UpdateFindingsFeedbackRequest;
        class UpdateIPSetRequest;
        class UpdateMemberDetectorsRequest;
        class UpdateOrganizationConfigurationRequest;
        class UpdatePublishingDestinationRequest;
        class UpdateThreatIntelSetRequest;

        typedef Aws::Utils::Outcome<AcceptInvitationResult, GuardDutyError> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<ArchiveFindingsResult, GuardDutyError> ArchiveFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateDetectorResult, GuardDutyError> CreateDetectorOutcome;
        typedef Aws::Utils::Outcome<CreateFilterResult, GuardDutyError> CreateFilterOutcome;
        typedef Aws::Utils::Outcome<CreateIPSetResult, GuardDutyError> CreateIPSetOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, GuardDutyError> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<CreatePublishingDestinationResult, GuardDutyError> CreatePublishingDestinationOutcome;
        typedef Aws::Utils::Outcome<CreateSampleFindingsResult, GuardDutyError> CreateSampleFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateThreatIntelSetResult, GuardDutyError> CreateThreatIntelSetOutcome;
        typedef Aws::Utils::Outcome<DeclineInvitationsResult, GuardDutyError> DeclineInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteDetectorResult, GuardDutyError> DeleteDetectorOutcome;
        typedef Aws::Utils::Outcome<DeleteFilterResult, GuardDutyError> DeleteFilterOutcome;
        typedef Aws::Utils::Outcome<DeleteIPSetResult, GuardDutyError> DeleteIPSetOutcome;
        typedef Aws::Utils::Outcome<DeleteInvitationsResult, GuardDutyError> DeleteInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, GuardDutyError> DeleteMembersOutcome;
        typedef Aws::Utils::Outcome<DeletePublishingDestinationResult, GuardDutyError> DeletePublishingDestinationOutcome;
        typedef Aws::Utils::Outcome<DeleteThreatIntelSetResult, GuardDutyError> DeleteThreatIntelSetOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, GuardDutyError> DescribeOrganizationConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribePublishingDestinationResult, GuardDutyError> DescribePublishingDestinationOutcome;
        typedef Aws::Utils::Outcome<DisableOrganizationAdminAccountResult, GuardDutyError> DisableOrganizationAdminAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateFromMasterAccountResult, GuardDutyError> DisassociateFromMasterAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateMembersResult, GuardDutyError> DisassociateMembersOutcome;
        typedef Aws::Utils::Outcome<EnableOrganizationAdminAccountResult, GuardDutyError> EnableOrganizationAdminAccountOutcome;
        typedef Aws::Utils::Outcome<GetDetectorResult, GuardDutyError> GetDetectorOutcome;
        typedef Aws::Utils::Outcome<GetFilterResult, GuardDutyError> GetFilterOutcome;
        typedef Aws::Utils::Outcome<GetFindingsResult, GuardDutyError> GetFindingsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsStatisticsResult, GuardDutyError> GetFindingsStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetIPSetResult, GuardDutyError> GetIPSetOutcome;
        typedef Aws::Utils::Outcome<GetInvitationsCountResult, GuardDutyError> GetInvitationsCountOutcome;
        typedef Aws::Utils::Outcome<GetMasterAccountResult, GuardDutyError> GetMasterAccountOutcome;
        typedef Aws::Utils::Outcome<GetMemberDetectorsResult, GuardDutyError> GetMemberDetectorsOutcome;
        typedef Aws::Utils::Outcome<GetMembersResult, GuardDutyError> GetMembersOutcome;
        typedef Aws::Utils::Outcome<GetThreatIntelSetResult, GuardDutyError> GetThreatIntelSetOutcome;
        typedef Aws::Utils::Outcome<GetUsageStatisticsResult, GuardDutyError> GetUsageStatisticsOutcome;
        typedef Aws::Utils::Outcome<InviteMembersResult, GuardDutyError> InviteMembersOutcome;
        typedef Aws::Utils::Outcome<ListDetectorsResult, GuardDutyError> ListDetectorsOutcome;
        typedef Aws::Utils::Outcome<ListFiltersResult, GuardDutyError> ListFiltersOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, GuardDutyError> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListIPSetsResult, GuardDutyError> ListIPSetsOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, GuardDutyError> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, GuardDutyError> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationAdminAccountsResult, GuardDutyError> ListOrganizationAdminAccountsOutcome;
        typedef Aws::Utils::Outcome<ListPublishingDestinationsResult, GuardDutyError> ListPublishingDestinationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, GuardDutyError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListThreatIntelSetsResult, GuardDutyError> ListThreatIntelSetsOutcome;
        typedef Aws::Utils::Outcome<StartMonitoringMembersResult, GuardDutyError> StartMonitoringMembersOutcome;
        typedef Aws::Utils::Outcome<StopMonitoringMembersResult, GuardDutyError> StopMonitoringMembersOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, GuardDutyError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UnarchiveFindingsResult, GuardDutyError> UnarchiveFindingsOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, GuardDutyError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDetectorResult, GuardDutyError> UpdateDetectorOutcome;
        typedef Aws::Utils::Outcome<UpdateFilterResult, GuardDutyError> UpdateFilterOutcome;
        typedef Aws::Utils::Outcome<UpdateFindingsFeedbackResult, GuardDutyError> UpdateFindingsFeedbackOutcome;
        typedef Aws::Utils::Outcome<UpdateIPSetResult, GuardDutyError> UpdateIPSetOutcome;
        typedef Aws::Utils::Outcome<UpdateMemberDetectorsResult, GuardDutyError> UpdateMemberDetectorsOutcome;
        typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, GuardDutyError> UpdateOrganizationConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdatePublishingDestinationResult, GuardDutyError> UpdatePublishingDestinationOutcome;
        typedef Aws::Utils::Outcome<UpdateThreatIntelSetResult, GuardDutyError> UpdateThreatIntelSetOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<ArchiveFindingsOutcome> ArchiveFindingsOutcomeCallable;
        typedef std::future<CreateDetectorOutcome> CreateDetectorOutcomeCallable;
        typedef std::future<CreateFilterOutcome> CreateFilterOutcomeCallable;
        typedef std::future<CreateIPSetOutcome> CreateIPSetOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<CreatePublishingDestinationOutcome> CreatePublishingDestinationOutcomeCallable;
        typedef std::future<CreateSampleFindingsOutcome> CreateSampleFindingsOutcomeCallable;
        typedef std::future<CreateThreatIntelSetOutcome> CreateThreatIntelSetOutcomeCallable;
        typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
        typedef std::future<DeleteDetectorOutcome> DeleteDetectorOutcomeCallable;
        typedef std::future<DeleteFilterOutcome> DeleteFilterOutcomeCallable;
        typedef std::future<DeleteIPSetOutcome> DeleteIPSetOutcomeCallable;
        typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
        typedef std::future<DeletePublishingDestinationOutcome> DeletePublishingDestinationOutcomeCallable;
        typedef std::future<DeleteThreatIntelSetOutcome> DeleteThreatIntelSetOutcomeCallable;
        typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
        typedef std::future<DescribePublishingDestinationOutcome> DescribePublishingDestinationOutcomeCallable;
        typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
        typedef std::future<DisassociateFromMasterAccountOutcome> DisassociateFromMasterAccountOutcomeCallable;
        typedef std::future<DisassociateMembersOutcome> DisassociateMembersOutcomeCallable;
        typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
        typedef std::future<GetDetectorOutcome> GetDetectorOutcomeCallable;
        typedef std::future<GetFilterOutcome> GetFilterOutcomeCallable;
        typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
        typedef std::future<GetFindingsStatisticsOutcome> GetFindingsStatisticsOutcomeCallable;
        typedef std::future<GetIPSetOutcome> GetIPSetOutcomeCallable;
        typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
        typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
        typedef std::future<GetMemberDetectorsOutcome> GetMemberDetectorsOutcomeCallable;
        typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
        typedef std::future<GetThreatIntelSetOutcome> GetThreatIntelSetOutcomeCallable;
        typedef std::future<GetUsageStatisticsOutcome> GetUsageStatisticsOutcomeCallable;
        typedef std::future<InviteMembersOutcome> InviteMembersOutcomeCallable;
        typedef std::future<ListDetectorsOutcome> ListDetectorsOutcomeCallable;
        typedef std::future<ListFiltersOutcome> ListFiltersOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListIPSetsOutcome> ListIPSetsOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListOrganizationAdminAccountsOutcome> ListOrganizationAdminAccountsOutcomeCallable;
        typedef std::future<ListPublishingDestinationsOutcome> ListPublishingDestinationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListThreatIntelSetsOutcome> ListThreatIntelSetsOutcomeCallable;
        typedef std::future<StartMonitoringMembersOutcome> StartMonitoringMembersOutcomeCallable;
        typedef std::future<StopMonitoringMembersOutcome> StopMonitoringMembersOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UnarchiveFindingsOutcome> UnarchiveFindingsOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDetectorOutcome> UpdateDetectorOutcomeCallable;
        typedef std::future<UpdateFilterOutcome> UpdateFilterOutcomeCallable;
        typedef std::future<UpdateFindingsFeedbackOutcome> UpdateFindingsFeedbackOutcomeCallable;
        typedef std::future<UpdateIPSetOutcome> UpdateIPSetOutcomeCallable;
        typedef std::future<UpdateMemberDetectorsOutcome> UpdateMemberDetectorsOutcomeCallable;
        typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
        typedef std::future<UpdatePublishingDestinationOutcome> UpdatePublishingDestinationOutcomeCallable;
        typedef std::future<UpdateThreatIntelSetOutcome> UpdateThreatIntelSetOutcomeCallable;
} // namespace Model

  class GuardDutyClient;

    typedef std::function<void(const GuardDutyClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ArchiveFindingsRequest&, const Model::ArchiveFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ArchiveFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateDetectorRequest&, const Model::CreateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateFilterRequest&, const Model::CreateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFilterResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateIPSetRequest&, const Model::CreateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreatePublishingDestinationRequest&, const Model::CreatePublishingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublishingDestinationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateSampleFindingsRequest&, const Model::CreateSampleFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSampleFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateThreatIntelSetRequest&, const Model::CreateThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThreatIntelSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteDetectorRequest&, const Model::DeleteDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteFilterRequest&, const Model::DeleteFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFilterResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteIPSetRequest&, const Model::DeleteIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeletePublishingDestinationRequest&, const Model::DeletePublishingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublishingDestinationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteThreatIntelSetRequest&, const Model::DeleteThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThreatIntelSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DescribePublishingDestinationRequest&, const Model::DescribePublishingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePublishingDestinationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisableOrganizationAdminAccountRequest&, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisassociateFromMasterAccountRequest&, const Model::DisassociateFromMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromMasterAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisassociateMembersRequest&, const Model::DisassociateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetDetectorRequest&, const Model::GetDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFilterRequest&, const Model::GetFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFilterResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFindingsStatisticsRequest&, const Model::GetFindingsStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsStatisticsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMemberDetectorsRequest&, const Model::GetMemberDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberDetectorsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetThreatIntelSetRequest&, const Model::GetThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThreatIntelSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetUsageStatisticsRequest&, const Model::GetUsageStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageStatisticsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::InviteMembersRequest&, const Model::InviteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListDetectorsRequest&, const Model::ListDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListFiltersRequest&, const Model::ListFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFiltersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListIPSetsRequest&, const Model::ListIPSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIPSetsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListOrganizationAdminAccountsRequest&, const Model::ListOrganizationAdminAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationAdminAccountsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListPublishingDestinationsRequest&, const Model::ListPublishingDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublishingDestinationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListThreatIntelSetsRequest&, const Model::ListThreatIntelSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThreatIntelSetsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::StartMonitoringMembersRequest&, const Model::StartMonitoringMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::StopMonitoringMembersRequest&, const Model::StopMonitoringMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMonitoringMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UnarchiveFindingsRequest&, const Model::UnarchiveFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnarchiveFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateDetectorRequest&, const Model::UpdateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateFilterRequest&, const Model::UpdateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFilterResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateFindingsFeedbackRequest&, const Model::UpdateFindingsFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsFeedbackResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateIPSetRequest&, const Model::UpdateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateMemberDetectorsRequest&, const Model::UpdateMemberDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberDetectorsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdatePublishingDestinationRequest&, const Model::UpdatePublishingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublishingDestinationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateThreatIntelSetRequest&, const Model::UpdateThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThreatIntelSetResponseReceivedHandler;

  /**
   * <p>Amazon GuardDuty is a continuous security monitoring service that analyzes
   * and processes the following data sources: VPC Flow Logs, AWS CloudTrail event
   * logs, and DNS logs. It uses threat intelligence feeds (such as lists of
   * malicious IPs and domains) and machine learning to identify unexpected,
   * potentially unauthorized, and malicious activity within your AWS environment.
   * This can include issues like escalations of privileges, uses of exposed
   * credentials, or communication with malicious IPs, URLs, or domains. For example,
   * GuardDuty can detect compromised EC2 instances that serve malware or mine
   * bitcoin. </p> <p>GuardDuty also monitors AWS account access behavior for signs
   * of compromise. Some examples of this are unauthorized infrastructure deployments
   * such as EC2 instances deployed in a Region that has never been used, or unusual
   * API calls like a password policy change to reduce password strength. </p>
   * <p>GuardDuty informs you of the status of your AWS environment by producing
   * security findings that you can view in the GuardDuty console or through Amazon
   * CloudWatch events. For more information, see the <i> <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon
   * GuardDuty User Guide</a> </i>. </p>
   */
  class AWS_GUARDDUTY_API GuardDutyClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GuardDutyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GuardDutyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GuardDutyClient();


        /**
         * <p>Accepts the invitation to be monitored by a master GuardDuty
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be monitored by a master GuardDuty
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * <p>Accepts the invitation to be monitored by a master GuardDuty
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Archives GuardDuty findings that are specified by the list of finding
         * IDs.</p>  <p>Only the master account can archive findings. Member accounts
         * don't have permission to archive findings from their accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ArchiveFindingsOutcome ArchiveFindings(const Model::ArchiveFindingsRequest& request) const;

        /**
         * <p>Archives GuardDuty findings that are specified by the list of finding
         * IDs.</p>  <p>Only the master account can archive findings. Member accounts
         * don't have permission to archive findings from their accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ArchiveFindingsOutcomeCallable ArchiveFindingsCallable(const Model::ArchiveFindingsRequest& request) const;

        /**
         * <p>Archives GuardDuty findings that are specified by the list of finding
         * IDs.</p>  <p>Only the master account can archive findings. Member accounts
         * don't have permission to archive findings from their accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ArchiveFindingsAsync(const Model::ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a single Amazon GuardDuty detector. A detector is a resource that
         * represents the GuardDuty service. To start using GuardDuty, you must create a
         * detector in each Region where you enable the service. You can have only one
         * detector per account per Region. All data sources are enabled in a new detector
         * by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorOutcome CreateDetector(const Model::CreateDetectorRequest& request) const;

        /**
         * <p>Creates a single Amazon GuardDuty detector. A detector is a resource that
         * represents the GuardDuty service. To start using GuardDuty, you must create a
         * detector in each Region where you enable the service. You can have only one
         * detector per account per Region. All data sources are enabled in a new detector
         * by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDetectorOutcomeCallable CreateDetectorCallable(const Model::CreateDetectorRequest& request) const;

        /**
         * <p>Creates a single Amazon GuardDuty detector. A detector is a resource that
         * represents the GuardDuty service. To start using GuardDuty, you must create a
         * detector in each Region where you enable the service. You can have only one
         * detector per account per Region. All data sources are enabled in a new detector
         * by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDetectorAsync(const Model::CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a filter using the specified finding criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFilterOutcome CreateFilter(const Model::CreateFilterRequest& request) const;

        /**
         * <p>Creates a filter using the specified finding criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFilterOutcomeCallable CreateFilterCallable(const Model::CreateFilterRequest& request) const;

        /**
         * <p>Creates a filter using the specified finding criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFilterAsync(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new IPSet, which is called a trusted IP list in the console user
         * interface. An IPSet is a list of IP addresses that are trusted for secure
         * communication with AWS infrastructure and applications. GuardDuty doesn't
         * generate findings for IP addresses that are included in IPSets. Only users from
         * the master account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * <p>Creates a new IPSet, which is called a trusted IP list in the console user
         * interface. An IPSet is a list of IP addresses that are trusted for secure
         * communication with AWS infrastructure and applications. GuardDuty doesn't
         * generate findings for IP addresses that are included in IPSets. Only users from
         * the master account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * <p>Creates a new IPSet, which is called a trusted IP list in the console user
         * interface. An IPSet is a list of IP addresses that are trusted for secure
         * communication with AWS infrastructure and applications. GuardDuty doesn't
         * generate findings for IP addresses that are included in IPSets. Only users from
         * the master account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates member accounts of the current AWS account by specifying a list of
         * AWS account IDs. This step is a prerequisite for managing the associated member
         * accounts either by invitation or through an organization.</p> <p>When using
         * <code>Create Members</code> as an organizations delegated administrator this
         * action will enable GuardDuty in the added member accounts, with the exception of
         * the organization master account, which must enable GuardDuty prior to being
         * added as a member.</p> <p>If you are adding accounts by invitation use this
         * action after GuardDuty has been enabled in potential member accounts and before
         * using <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">
         * <code>Invite Members</code> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates member accounts of the current AWS account by specifying a list of
         * AWS account IDs. This step is a prerequisite for managing the associated member
         * accounts either by invitation or through an organization.</p> <p>When using
         * <code>Create Members</code> as an organizations delegated administrator this
         * action will enable GuardDuty in the added member accounts, with the exception of
         * the organization master account, which must enable GuardDuty prior to being
         * added as a member.</p> <p>If you are adding accounts by invitation use this
         * action after GuardDuty has been enabled in potential member accounts and before
         * using <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">
         * <code>Invite Members</code> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * <p>Creates member accounts of the current AWS account by specifying a list of
         * AWS account IDs. This step is a prerequisite for managing the associated member
         * accounts either by invitation or through an organization.</p> <p>When using
         * <code>Create Members</code> as an organizations delegated administrator this
         * action will enable GuardDuty in the added member accounts, with the exception of
         * the organization master account, which must enable GuardDuty prior to being
         * added as a member.</p> <p>If you are adding accounts by invitation use this
         * action after GuardDuty has been enabled in potential member accounts and before
         * using <a
         * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_InviteMembers.html">
         * <code>Invite Members</code> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a publishing destination to export findings to. The resource to
         * export findings to must exist before you use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreatePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublishingDestinationOutcome CreatePublishingDestination(const Model::CreatePublishingDestinationRequest& request) const;

        /**
         * <p>Creates a publishing destination to export findings to. The resource to
         * export findings to must exist before you use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreatePublishingDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublishingDestinationOutcomeCallable CreatePublishingDestinationCallable(const Model::CreatePublishingDestinationRequest& request) const;

        /**
         * <p>Creates a publishing destination to export findings to. The resource to
         * export findings to must exist before you use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreatePublishingDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublishingDestinationAsync(const Model::CreatePublishingDestinationRequest& request, const CreatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates example findings of types specified by the list of finding types.
         * If 'NULL' is specified for <code>findingTypes</code>, the API generates example
         * findings of all supported finding types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * <p>Generates example findings of types specified by the list of finding types.
         * If 'NULL' is specified for <code>findingTypes</code>, the API generates example
         * findings of all supported finding types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * <p>Generates example findings of types specified by the list of finding types.
         * If 'NULL' is specified for <code>findingTypes</code>, the API generates example
         * findings of all supported finding types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSampleFindingsAsync(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets. Only users of
         * the master account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThreatIntelSetOutcome CreateThreatIntelSet(const Model::CreateThreatIntelSetRequest& request) const;

        /**
         * <p>Creates a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets. Only users of
         * the master account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThreatIntelSetOutcomeCallable CreateThreatIntelSetCallable(const Model::CreateThreatIntelSetRequest& request) const;

        /**
         * <p>Creates a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets. Only users of
         * the master account can use this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThreatIntelSetAsync(const Model::CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines invitations sent to the current member account by AWS accounts
         * specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations sent to the current member account by AWS accounts
         * specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * <p>Declines invitations sent to the current member account by AWS accounts
         * specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon GuardDuty detector that is specified by the detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorOutcome DeleteDetector(const Model::DeleteDetectorRequest& request) const;

        /**
         * <p>Deletes an Amazon GuardDuty detector that is specified by the detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDetectorOutcomeCallable DeleteDetectorCallable(const Model::DeleteDetectorRequest& request) const;

        /**
         * <p>Deletes an Amazon GuardDuty detector that is specified by the detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorAsync(const Model::DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFilterOutcome DeleteFilter(const Model::DeleteFilterRequest& request) const;

        /**
         * <p>Deletes the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFilterOutcomeCallable DeleteFilterCallable(const Model::DeleteFilterRequest& request) const;

        /**
         * <p>Deletes the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFilterAsync(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the IPSet specified by the <code>ipSetId</code>. IPSets are called
         * trusted IP lists in the console user interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * <p>Deletes the IPSet specified by the <code>ipSetId</code>. IPSets are called
         * trusted IP lists in the console user interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * <p>Deletes the IPSet specified by the <code>ipSetId</code>. IPSets are called
         * trusted IP lists in the console user interface.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIPSetAsync(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes invitations sent to the current member account by AWS accounts
         * specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations sent to the current member account by AWS accounts
         * specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * <p>Deletes invitations sent to the current member account by AWS accounts
         * specified by their account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * <p>Deletes GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the publishing definition with the specified
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeletePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublishingDestinationOutcome DeletePublishingDestination(const Model::DeletePublishingDestinationRequest& request) const;

        /**
         * <p>Deletes the publishing definition with the specified
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeletePublishingDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublishingDestinationOutcomeCallable DeletePublishingDestinationCallable(const Model::DeletePublishingDestinationRequest& request) const;

        /**
         * <p>Deletes the publishing definition with the specified
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeletePublishingDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublishingDestinationAsync(const Model::DeletePublishingDestinationRequest& request, const DeletePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThreatIntelSetOutcome DeleteThreatIntelSet(const Model::DeleteThreatIntelSetRequest& request) const;

        /**
         * <p>Deletes the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThreatIntelSetOutcomeCallable DeleteThreatIntelSetCallable(const Model::DeleteThreatIntelSetRequest& request) const;

        /**
         * <p>Deletes the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThreatIntelSetAsync(const Model::DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the account selected as the delegated administrator
         * for GuardDuty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * <p>Returns information about the account selected as the delegated administrator
         * for GuardDuty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * <p>Returns information about the account selected as the delegated administrator
         * for GuardDuty.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationConfigurationAsync(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the publishing destination specified by the
         * provided <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePublishingDestinationOutcome DescribePublishingDestination(const Model::DescribePublishingDestinationRequest& request) const;

        /**
         * <p>Returns information about the publishing destination specified by the
         * provided <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribePublishingDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePublishingDestinationOutcomeCallable DescribePublishingDestinationCallable(const Model::DescribePublishingDestinationRequest& request) const;

        /**
         * <p>Returns information about the publishing destination specified by the
         * provided <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DescribePublishingDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePublishingDestinationAsync(const Model::DescribePublishingDestinationRequest& request, const DescribePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an AWS account within the Organization as the GuardDuty delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Disables an AWS account within the Organization as the GuardDuty delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Disables an AWS account within the Organization as the GuardDuty delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableOrganizationAdminAccountAsync(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the current GuardDuty member account from its master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current GuardDuty member account from its master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * <p>Disassociates the current GuardDuty member account from its master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates GuardDuty member accounts (to the current GuardDuty master
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates GuardDuty member accounts (to the current GuardDuty master
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const Model::DisassociateMembersRequest& request) const;

        /**
         * <p>Disassociates GuardDuty member accounts (to the current GuardDuty master
         * account) specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembersAsync(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables an AWS account within the organization as the GuardDuty delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Enables an AWS account within the organization as the GuardDuty delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * <p>Enables an AWS account within the organization as the GuardDuty delegated
         * administrator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableOrganizationAdminAccountAsync(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorOutcome GetDetector(const Model::GetDetectorRequest& request) const;

        /**
         * <p>Retrieves an Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorOutcomeCallable GetDetectorCallable(const Model::GetDetectorRequest& request) const;

        /**
         * <p>Retrieves an Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorAsync(const Model::GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the filter specified by the filter name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFilterOutcome GetFilter(const Model::GetFilterRequest& request) const;

        /**
         * <p>Returns the details of the filter specified by the filter name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFilterOutcomeCallable GetFilterCallable(const Model::GetFilterRequest& request) const;

        /**
         * <p>Returns the details of the filter specified by the filter name.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFilterAsync(const Model::GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon GuardDuty findings specified by finding IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Describes Amazon GuardDuty findings specified by finding IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * <p>Describes Amazon GuardDuty findings specified by finding IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon GuardDuty findings statistics for the specified detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsStatisticsOutcome GetFindingsStatistics(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * <p>Lists Amazon GuardDuty findings statistics for the specified detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsStatisticsOutcomeCallable GetFindingsStatisticsCallable(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * <p>Lists Amazon GuardDuty findings statistics for the specified detector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsStatisticsAsync(const Model::GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the IPSet specified by the <code>ipSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * <p>Retrieves the IPSet specified by the <code>ipSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * <p>Retrieves the IPSet specified by the <code>ipSetId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIPSetAsync(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the count of all GuardDuty membership invitations that were sent to
         * the current member account except the currently accepted
         * invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Returns the count of all GuardDuty membership invitations that were sent to
         * the current member account except the currently accepted
         * invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * <p>Returns the count of all GuardDuty membership invitations that were sent to
         * the current member account except the currently accepted
         * invitation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the details for the GuardDuty master account associated with the
         * current GuardDuty member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>Provides the details for the GuardDuty master account associated with the
         * current GuardDuty member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * <p>Provides the details for the GuardDuty master account associated with the
         * current GuardDuty member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMasterAccountAsync(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes which data sources are enabled for the member account's
         * detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemberDetectorsOutcome GetMemberDetectors(const Model::GetMemberDetectorsRequest& request) const;

        /**
         * <p>Describes which data sources are enabled for the member account's
         * detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMemberDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMemberDetectorsOutcomeCallable GetMemberDetectorsCallable(const Model::GetMemberDetectorsRequest& request) const;

        /**
         * <p>Describes which data sources are enabled for the member account's
         * detector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMemberDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMemberDetectorsAsync(const Model::GetMemberDetectorsRequest& request, const GetMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * <p>Retrieves GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * <p>Retrieves GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThreatIntelSetOutcome GetThreatIntelSet(const Model::GetThreatIntelSetRequest& request) const;

        /**
         * <p>Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThreatIntelSetOutcomeCallable GetThreatIntelSetCallable(const Model::GetThreatIntelSetRequest& request) const;

        /**
         * <p>Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThreatIntelSetAsync(const Model::GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon GuardDuty usage statistics over the last 30 days for the
         * specified detector ID. For newly enabled detectors or data sources the cost
         * returned will include only the usage so far under 30 days, this may differ from
         * the cost metrics in the console, which projects usage over 30 days to provide a
         * monthly cost estimate. For more information see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/monitoring_costs.html#usage-calculations">Understanding
         * How Usage Costs are Calculated</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetUsageStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageStatisticsOutcome GetUsageStatistics(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * <p>Lists Amazon GuardDuty usage statistics over the last 30 days for the
         * specified detector ID. For newly enabled detectors or data sources the cost
         * returned will include only the usage so far under 30 days, this may differ from
         * the cost metrics in the console, which projects usage over 30 days to provide a
         * monthly cost estimate. For more information see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/monitoring_costs.html#usage-calculations">Understanding
         * How Usage Costs are Calculated</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetUsageStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageStatisticsOutcomeCallable GetUsageStatisticsCallable(const Model::GetUsageStatisticsRequest& request) const;

        /**
         * <p>Lists Amazon GuardDuty usage statistics over the last 30 days for the
         * specified detector ID. For newly enabled detectors or data sources the cost
         * returned will include only the usage so far under 30 days, this may differ from
         * the cost metrics in the console, which projects usage over 30 days to provide a
         * monthly cost estimate. For more information see <a
         * href="https://docs.aws.amazon.com/guardduty/latest/ug/monitoring_costs.html#usage-calculations">Understanding
         * How Usage Costs are Calculated</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetUsageStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageStatisticsAsync(const Model::GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invites other AWS accounts (created as members of the current AWS account by
         * CreateMembers) to enable GuardDuty, and allow the current AWS account to view
         * and manage these accounts' GuardDuty findings on their behalf as the master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts (created as members of the current AWS account by
         * CreateMembers) to enable GuardDuty, and allow the current AWS account to view
         * and manage these accounts' GuardDuty findings on their behalf as the master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteMembersOutcomeCallable InviteMembersCallable(const Model::InviteMembersRequest& request) const;

        /**
         * <p>Invites other AWS accounts (created as members of the current AWS account by
         * CreateMembers) to enable GuardDuty, and allow the current AWS account to view
         * and manage these accounts' GuardDuty findings on their behalf as the master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;

        /**
         * <p>Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const Model::ListDetectorsRequest& request) const;

        /**
         * <p>Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorsAsync(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of the current filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFiltersOutcome ListFilters(const Model::ListFiltersRequest& request) const;

        /**
         * <p>Returns a paginated list of the current filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFiltersOutcomeCallable ListFiltersCallable(const Model::ListFiltersRequest& request) const;

        /**
         * <p>Returns a paginated list of the current filters.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFiltersAsync(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon GuardDuty findings for the specified detector ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Lists Amazon GuardDuty findings for the specified detector ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Lists Amazon GuardDuty findings for the specified detector ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IPSets of the GuardDuty service specified by the detector ID. If
         * you use this operation from a member account, the IPSets returned are the IPSets
         * from the associated master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * <p>Lists the IPSets of the GuardDuty service specified by the detector ID. If
         * you use this operation from a member account, the IPSets returned are the IPSets
         * from the associated master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * <p>Lists the IPSets of the GuardDuty service specified by the detector ID. If
         * you use this operation from a member account, the IPSets returned are the IPSets
         * from the associated master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIPSetsAsync(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all GuardDuty membership invitations that were sent to the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Lists all GuardDuty membership invitations that were sent to the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * <p>Lists all GuardDuty membership invitations that were sent to the current AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details about all member accounts for the current GuardDuty master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * <p>Lists details about all member accounts for the current GuardDuty master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * <p>Lists details about all member accounts for the current GuardDuty master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the accounts configured as GuardDuty delegated
         * administrators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * <p>Lists the accounts configured as GuardDuty delegated
         * administrators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * <p>Lists the accounts configured as GuardDuty delegated
         * administrators.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationAdminAccountsAsync(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of publishing destinations associated with the specified
         * <code>dectectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListPublishingDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublishingDestinationsOutcome ListPublishingDestinations(const Model::ListPublishingDestinationsRequest& request) const;

        /**
         * <p>Returns a list of publishing destinations associated with the specified
         * <code>dectectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListPublishingDestinations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublishingDestinationsOutcomeCallable ListPublishingDestinationsCallable(const Model::ListPublishingDestinationsRequest& request) const;

        /**
         * <p>Returns a list of publishing destinations associated with the specified
         * <code>dectectorId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListPublishingDestinations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublishingDestinationsAsync(const Model::ListPublishingDestinationsRequest& request, const ListPublishingDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for a resource. Tagging is currently supported for detectors,
         * finding filters, IP sets, and threat intel sets, with a limit of 50 tags per
         * resource. When invoked, this operation returns all assigned tags for a given
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for a resource. Tagging is currently supported for detectors,
         * finding filters, IP sets, and threat intel sets, with a limit of 50 tags per
         * resource. When invoked, this operation returns all assigned tags for a given
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for a resource. Tagging is currently supported for detectors,
         * finding filters, IP sets, and threat intel sets, with a limit of 50 tags per
         * resource. When invoked, this operation returns all assigned tags for a given
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID. If you use this operation from a member account, the ThreatIntelSets
         * associated with the master account are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThreatIntelSetsOutcome ListThreatIntelSets(const Model::ListThreatIntelSetsRequest& request) const;

        /**
         * <p>Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID. If you use this operation from a member account, the ThreatIntelSets
         * associated with the master account are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThreatIntelSetsOutcomeCallable ListThreatIntelSetsCallable(const Model::ListThreatIntelSetsRequest& request) const;

        /**
         * <p>Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID. If you use this operation from a member account, the ThreatIntelSets
         * associated with the master account are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThreatIntelSetsAsync(const Model::ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Turns on GuardDuty monitoring of the specified member accounts. Use this
         * operation to restart monitoring of accounts that you stopped monitoring with the
         * <code>StopMonitoringMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringMembersOutcome StartMonitoringMembers(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * <p>Turns on GuardDuty monitoring of the specified member accounts. Use this
         * operation to restart monitoring of accounts that you stopped monitoring with the
         * <code>StopMonitoringMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringMembersOutcomeCallable StartMonitoringMembersCallable(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * <p>Turns on GuardDuty monitoring of the specified member accounts. Use this
         * operation to restart monitoring of accounts that you stopped monitoring with the
         * <code>StopMonitoringMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringMembersAsync(const Model::StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops GuardDuty monitoring for the specified member accounts. Use the
         * <code>StartMonitoringMembers</code> operation to restart monitoring for those
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringMembersOutcome StopMonitoringMembers(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * <p>Stops GuardDuty monitoring for the specified member accounts. Use the
         * <code>StartMonitoringMembers</code> operation to restart monitoring for those
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMonitoringMembersOutcomeCallable StopMonitoringMembersCallable(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * <p>Stops GuardDuty monitoring for the specified member accounts. Use the
         * <code>StartMonitoringMembers</code> operation to restart monitoring for those
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMonitoringMembersAsync(const Model::StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unarchives GuardDuty findings specified by the
         * <code>findingIds</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UnarchiveFindingsOutcome UnarchiveFindings(const Model::UnarchiveFindingsRequest& request) const;

        /**
         * <p>Unarchives GuardDuty findings specified by the
         * <code>findingIds</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnarchiveFindingsOutcomeCallable UnarchiveFindingsCallable(const Model::UnarchiveFindingsRequest& request) const;

        /**
         * <p>Unarchives GuardDuty findings specified by the
         * <code>findingIds</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnarchiveFindingsAsync(const Model::UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorOutcome UpdateDetector(const Model::UpdateDetectorRequest& request) const;

        /**
         * <p>Updates the Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorOutcomeCallable UpdateDetectorCallable(const Model::UpdateDetectorRequest& request) const;

        /**
         * <p>Updates the Amazon GuardDuty detector specified by the
         * detectorId.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorAsync(const Model::UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFilterOutcome UpdateFilter(const Model::UpdateFilterRequest& request) const;

        /**
         * <p>Updates the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFilterOutcomeCallable UpdateFilterCallable(const Model::UpdateFilterRequest& request) const;

        /**
         * <p>Updates the filter specified by the filter name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFilterAsync(const Model::UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Marks the specified GuardDuty findings as useful or not useful.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFeedbackOutcome UpdateFindingsFeedback(const Model::UpdateFindingsFeedbackRequest& request) const;

        /**
         * <p>Marks the specified GuardDuty findings as useful or not useful.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsFeedbackOutcomeCallable UpdateFindingsFeedbackCallable(const Model::UpdateFindingsFeedbackRequest& request) const;

        /**
         * <p>Marks the specified GuardDuty findings as useful or not useful.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsFeedbackAsync(const Model::UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the IPSet specified by the IPSet ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * <p>Updates the IPSet specified by the IPSet ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * <p>Updates the IPSet specified by the IPSet ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Contains information on member accounts to be updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMemberDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemberDetectorsOutcome UpdateMemberDetectors(const Model::UpdateMemberDetectorsRequest& request) const;

        /**
         * <p>Contains information on member accounts to be updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMemberDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMemberDetectorsOutcomeCallable UpdateMemberDetectorsCallable(const Model::UpdateMemberDetectorsRequest& request) const;

        /**
         * <p>Contains information on member accounts to be updated.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateMemberDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMemberDetectorsAsync(const Model::UpdateMemberDetectorsRequest& request, const UpdateMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the delegated administrator account with the values
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * <p>Updates the delegated administrator account with the values
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * <p>Updates the delegated administrator account with the values
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationConfigurationAsync(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information about the publishing destination specified by the
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdatePublishingDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublishingDestinationOutcome UpdatePublishingDestination(const Model::UpdatePublishingDestinationRequest& request) const;

        /**
         * <p>Updates information about the publishing destination specified by the
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdatePublishingDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublishingDestinationOutcomeCallable UpdatePublishingDestinationCallable(const Model::UpdatePublishingDestinationRequest& request) const;

        /**
         * <p>Updates information about the publishing destination specified by the
         * <code>destinationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdatePublishingDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublishingDestinationAsync(const Model::UpdatePublishingDestinationRequest& request, const UpdatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThreatIntelSetOutcome UpdateThreatIntelSet(const Model::UpdateThreatIntelSetRequest& request) const;

        /**
         * <p>Updates the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThreatIntelSetOutcomeCallable UpdateThreatIntelSetCallable(const Model::UpdateThreatIntelSetRequest& request) const;

        /**
         * <p>Updates the ThreatIntelSet specified by the ThreatIntelSet ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThreatIntelSetAsync(const Model::UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ArchiveFindingsAsyncHelper(const Model::ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDetectorAsyncHelper(const Model::CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFilterAsyncHelper(const Model::CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIPSetAsyncHelper(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublishingDestinationAsyncHelper(const Model::CreatePublishingDestinationRequest& request, const CreatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSampleFindingsAsyncHelper(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThreatIntelSetAsyncHelper(const Model::CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineInvitationsAsyncHelper(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDetectorAsyncHelper(const Model::DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFilterAsyncHelper(const Model::DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIPSetAsyncHelper(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInvitationsAsyncHelper(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublishingDestinationAsyncHelper(const Model::DeletePublishingDestinationRequest& request, const DeletePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThreatIntelSetAsyncHelper(const Model::DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationConfigurationAsyncHelper(const Model::DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePublishingDestinationAsyncHelper(const Model::DescribePublishingDestinationRequest& request, const DescribePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableOrganizationAdminAccountAsyncHelper(const Model::DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFromMasterAccountAsyncHelper(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMembersAsyncHelper(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableOrganizationAdminAccountAsyncHelper(const Model::EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDetectorAsyncHelper(const Model::GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFilterAsyncHelper(const Model::GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsAsyncHelper(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsStatisticsAsyncHelper(const Model::GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIPSetAsyncHelper(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvitationsCountAsyncHelper(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMasterAccountAsyncHelper(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMemberDetectorsAsyncHelper(const Model::GetMemberDetectorsRequest& request, const GetMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMembersAsyncHelper(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetThreatIntelSetAsyncHelper(const Model::GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageStatisticsAsyncHelper(const Model::GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteMembersAsyncHelper(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDetectorsAsyncHelper(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFiltersAsyncHelper(const Model::ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIPSetsAsyncHelper(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationAdminAccountsAsyncHelper(const Model::ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublishingDestinationsAsyncHelper(const Model::ListPublishingDestinationsRequest& request, const ListPublishingDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThreatIntelSetsAsyncHelper(const Model::ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMonitoringMembersAsyncHelper(const Model::StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopMonitoringMembersAsyncHelper(const Model::StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnarchiveFindingsAsyncHelper(const Model::UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDetectorAsyncHelper(const Model::UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFilterAsyncHelper(const Model::UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFindingsFeedbackAsyncHelper(const Model::UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIPSetAsyncHelper(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMemberDetectorsAsyncHelper(const Model::UpdateMemberDetectorsRequest& request, const UpdateMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOrganizationConfigurationAsyncHelper(const Model::UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePublishingDestinationAsyncHelper(const Model::UpdatePublishingDestinationRequest& request, const UpdatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThreatIntelSetAsyncHelper(const Model::UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GuardDuty
} // namespace Aws
