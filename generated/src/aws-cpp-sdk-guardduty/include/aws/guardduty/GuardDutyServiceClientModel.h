/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/guardduty/GuardDutyErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/guardduty/GuardDutyEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GuardDutyClient header */
#include <aws/guardduty/model/AcceptAdministratorInvitationResult.h>
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
#include <aws/guardduty/model/DescribeMalwareScansResult.h>
#include <aws/guardduty/model/DescribeOrganizationConfigurationResult.h>
#include <aws/guardduty/model/DescribePublishingDestinationResult.h>
#include <aws/guardduty/model/DisableOrganizationAdminAccountResult.h>
#include <aws/guardduty/model/DisassociateFromAdministratorAccountResult.h>
#include <aws/guardduty/model/DisassociateMembersResult.h>
#include <aws/guardduty/model/EnableOrganizationAdminAccountResult.h>
#include <aws/guardduty/model/GetAdministratorAccountResult.h>
#include <aws/guardduty/model/GetDetectorResult.h>
#include <aws/guardduty/model/GetFilterResult.h>
#include <aws/guardduty/model/GetFindingsResult.h>
#include <aws/guardduty/model/GetFindingsStatisticsResult.h>
#include <aws/guardduty/model/GetIPSetResult.h>
#include <aws/guardduty/model/GetInvitationsCountResult.h>
#include <aws/guardduty/model/GetMalwareScanSettingsResult.h>
#include <aws/guardduty/model/GetMemberDetectorsResult.h>
#include <aws/guardduty/model/GetMembersResult.h>
#include <aws/guardduty/model/GetRemainingFreeTrialDaysResult.h>
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
#include <aws/guardduty/model/UpdateMalwareScanSettingsResult.h>
#include <aws/guardduty/model/UpdateMemberDetectorsResult.h>
#include <aws/guardduty/model/UpdateOrganizationConfigurationResult.h>
#include <aws/guardduty/model/UpdatePublishingDestinationResult.h>
#include <aws/guardduty/model/UpdateThreatIntelSetResult.h>
/* End of service model headers required in GuardDutyClient header */

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
    using GuardDutyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GuardDutyEndpointProviderBase = Aws::GuardDuty::Endpoint::GuardDutyEndpointProviderBase;
    using GuardDutyEndpointProvider = Aws::GuardDuty::Endpoint::GuardDutyEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GuardDutyClient header */
      class AcceptAdministratorInvitationRequest;
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
      class DescribeMalwareScansRequest;
      class DescribeOrganizationConfigurationRequest;
      class DescribePublishingDestinationRequest;
      class DisableOrganizationAdminAccountRequest;
      class DisassociateFromAdministratorAccountRequest;
      class DisassociateMembersRequest;
      class EnableOrganizationAdminAccountRequest;
      class GetAdministratorAccountRequest;
      class GetDetectorRequest;
      class GetFilterRequest;
      class GetFindingsRequest;
      class GetFindingsStatisticsRequest;
      class GetIPSetRequest;
      class GetInvitationsCountRequest;
      class GetMalwareScanSettingsRequest;
      class GetMemberDetectorsRequest;
      class GetMembersRequest;
      class GetRemainingFreeTrialDaysRequest;
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
      class UpdateMalwareScanSettingsRequest;
      class UpdateMemberDetectorsRequest;
      class UpdateOrganizationConfigurationRequest;
      class UpdatePublishingDestinationRequest;
      class UpdateThreatIntelSetRequest;
      /* End of service model forward declarations required in GuardDutyClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptAdministratorInvitationResult, GuardDutyError> AcceptAdministratorInvitationOutcome;
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
      typedef Aws::Utils::Outcome<DescribeMalwareScansResult, GuardDutyError> DescribeMalwareScansOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationConfigurationResult, GuardDutyError> DescribeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribePublishingDestinationResult, GuardDutyError> DescribePublishingDestinationOutcome;
      typedef Aws::Utils::Outcome<DisableOrganizationAdminAccountResult, GuardDutyError> DisableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateFromAdministratorAccountResult, GuardDutyError> DisassociateFromAdministratorAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateMembersResult, GuardDutyError> DisassociateMembersOutcome;
      typedef Aws::Utils::Outcome<EnableOrganizationAdminAccountResult, GuardDutyError> EnableOrganizationAdminAccountOutcome;
      typedef Aws::Utils::Outcome<GetAdministratorAccountResult, GuardDutyError> GetAdministratorAccountOutcome;
      typedef Aws::Utils::Outcome<GetDetectorResult, GuardDutyError> GetDetectorOutcome;
      typedef Aws::Utils::Outcome<GetFilterResult, GuardDutyError> GetFilterOutcome;
      typedef Aws::Utils::Outcome<GetFindingsResult, GuardDutyError> GetFindingsOutcome;
      typedef Aws::Utils::Outcome<GetFindingsStatisticsResult, GuardDutyError> GetFindingsStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetIPSetResult, GuardDutyError> GetIPSetOutcome;
      typedef Aws::Utils::Outcome<GetInvitationsCountResult, GuardDutyError> GetInvitationsCountOutcome;
      typedef Aws::Utils::Outcome<GetMalwareScanSettingsResult, GuardDutyError> GetMalwareScanSettingsOutcome;
      typedef Aws::Utils::Outcome<GetMemberDetectorsResult, GuardDutyError> GetMemberDetectorsOutcome;
      typedef Aws::Utils::Outcome<GetMembersResult, GuardDutyError> GetMembersOutcome;
      typedef Aws::Utils::Outcome<GetRemainingFreeTrialDaysResult, GuardDutyError> GetRemainingFreeTrialDaysOutcome;
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
      typedef Aws::Utils::Outcome<UpdateMalwareScanSettingsResult, GuardDutyError> UpdateMalwareScanSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateMemberDetectorsResult, GuardDutyError> UpdateMemberDetectorsOutcome;
      typedef Aws::Utils::Outcome<UpdateOrganizationConfigurationResult, GuardDutyError> UpdateOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdatePublishingDestinationResult, GuardDutyError> UpdatePublishingDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdateThreatIntelSetResult, GuardDutyError> UpdateThreatIntelSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptAdministratorInvitationOutcome> AcceptAdministratorInvitationOutcomeCallable;
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
      typedef std::future<DescribeMalwareScansOutcome> DescribeMalwareScansOutcomeCallable;
      typedef std::future<DescribeOrganizationConfigurationOutcome> DescribeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DescribePublishingDestinationOutcome> DescribePublishingDestinationOutcomeCallable;
      typedef std::future<DisableOrganizationAdminAccountOutcome> DisableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<DisassociateFromAdministratorAccountOutcome> DisassociateFromAdministratorAccountOutcomeCallable;
      typedef std::future<DisassociateMembersOutcome> DisassociateMembersOutcomeCallable;
      typedef std::future<EnableOrganizationAdminAccountOutcome> EnableOrganizationAdminAccountOutcomeCallable;
      typedef std::future<GetAdministratorAccountOutcome> GetAdministratorAccountOutcomeCallable;
      typedef std::future<GetDetectorOutcome> GetDetectorOutcomeCallable;
      typedef std::future<GetFilterOutcome> GetFilterOutcomeCallable;
      typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
      typedef std::future<GetFindingsStatisticsOutcome> GetFindingsStatisticsOutcomeCallable;
      typedef std::future<GetIPSetOutcome> GetIPSetOutcomeCallable;
      typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
      typedef std::future<GetMalwareScanSettingsOutcome> GetMalwareScanSettingsOutcomeCallable;
      typedef std::future<GetMemberDetectorsOutcome> GetMemberDetectorsOutcomeCallable;
      typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
      typedef std::future<GetRemainingFreeTrialDaysOutcome> GetRemainingFreeTrialDaysOutcomeCallable;
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
      typedef std::future<UpdateMalwareScanSettingsOutcome> UpdateMalwareScanSettingsOutcomeCallable;
      typedef std::future<UpdateMemberDetectorsOutcome> UpdateMemberDetectorsOutcomeCallable;
      typedef std::future<UpdateOrganizationConfigurationOutcome> UpdateOrganizationConfigurationOutcomeCallable;
      typedef std::future<UpdatePublishingDestinationOutcome> UpdatePublishingDestinationOutcomeCallable;
      typedef std::future<UpdateThreatIntelSetOutcome> UpdateThreatIntelSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GuardDutyClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GuardDutyClient*, const Model::AcceptAdministratorInvitationRequest&, const Model::AcceptAdministratorInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptAdministratorInvitationResponseReceivedHandler;
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
    typedef std::function<void(const GuardDutyClient*, const Model::DescribeMalwareScansRequest&, const Model::DescribeMalwareScansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMalwareScansResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DescribeOrganizationConfigurationRequest&, const Model::DescribeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DescribePublishingDestinationRequest&, const Model::DescribePublishingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePublishingDestinationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisableOrganizationAdminAccountRequest&, const Model::DisableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisassociateFromAdministratorAccountRequest&, const Model::DisassociateFromAdministratorAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromAdministratorAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisassociateMembersRequest&, const Model::DisassociateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::EnableOrganizationAdminAccountRequest&, const Model::EnableOrganizationAdminAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableOrganizationAdminAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetAdministratorAccountRequest&, const Model::GetAdministratorAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAdministratorAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetDetectorRequest&, const Model::GetDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFilterRequest&, const Model::GetFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFilterResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFindingsStatisticsRequest&, const Model::GetFindingsStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsStatisticsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMalwareScanSettingsRequest&, const Model::GetMalwareScanSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMalwareScanSettingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMemberDetectorsRequest&, const Model::GetMemberDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMemberDetectorsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetRemainingFreeTrialDaysRequest&, const Model::GetRemainingFreeTrialDaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRemainingFreeTrialDaysResponseReceivedHandler;
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
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateMalwareScanSettingsRequest&, const Model::UpdateMalwareScanSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMalwareScanSettingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateMemberDetectorsRequest&, const Model::UpdateMemberDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMemberDetectorsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateOrganizationConfigurationRequest&, const Model::UpdateOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdatePublishingDestinationRequest&, const Model::UpdatePublishingDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublishingDestinationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateThreatIntelSetRequest&, const Model::UpdateThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThreatIntelSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace GuardDuty
} // namespace Aws
