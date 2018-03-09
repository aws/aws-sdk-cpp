﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/guardduty/model/CreateIPSetResult.h>
#include <aws/guardduty/model/CreateMembersResult.h>
#include <aws/guardduty/model/CreateSampleFindingsResult.h>
#include <aws/guardduty/model/CreateThreatIntelSetResult.h>
#include <aws/guardduty/model/DeclineInvitationsResult.h>
#include <aws/guardduty/model/DeleteDetectorResult.h>
#include <aws/guardduty/model/DeleteIPSetResult.h>
#include <aws/guardduty/model/DeleteInvitationsResult.h>
#include <aws/guardduty/model/DeleteMembersResult.h>
#include <aws/guardduty/model/DeleteThreatIntelSetResult.h>
#include <aws/guardduty/model/DisassociateFromMasterAccountResult.h>
#include <aws/guardduty/model/DisassociateMembersResult.h>
#include <aws/guardduty/model/GetDetectorResult.h>
#include <aws/guardduty/model/GetFindingsResult.h>
#include <aws/guardduty/model/GetFindingsStatisticsResult.h>
#include <aws/guardduty/model/GetIPSetResult.h>
#include <aws/guardduty/model/GetInvitationsCountResult.h>
#include <aws/guardduty/model/GetMasterAccountResult.h>
#include <aws/guardduty/model/GetMembersResult.h>
#include <aws/guardduty/model/GetThreatIntelSetResult.h>
#include <aws/guardduty/model/InviteMembersResult.h>
#include <aws/guardduty/model/ListDetectorsResult.h>
#include <aws/guardduty/model/ListFindingsResult.h>
#include <aws/guardduty/model/ListIPSetsResult.h>
#include <aws/guardduty/model/ListInvitationsResult.h>
#include <aws/guardduty/model/ListMembersResult.h>
#include <aws/guardduty/model/ListThreatIntelSetsResult.h>
#include <aws/guardduty/model/StartMonitoringMembersResult.h>
#include <aws/guardduty/model/StopMonitoringMembersResult.h>
#include <aws/guardduty/model/UnarchiveFindingsResult.h>
#include <aws/guardduty/model/UpdateDetectorResult.h>
#include <aws/guardduty/model/UpdateFindingsFeedbackResult.h>
#include <aws/guardduty/model/UpdateIPSetResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class CreateIPSetRequest;
        class CreateMembersRequest;
        class CreateSampleFindingsRequest;
        class CreateThreatIntelSetRequest;
        class DeclineInvitationsRequest;
        class DeleteDetectorRequest;
        class DeleteIPSetRequest;
        class DeleteInvitationsRequest;
        class DeleteMembersRequest;
        class DeleteThreatIntelSetRequest;
        class DisassociateFromMasterAccountRequest;
        class DisassociateMembersRequest;
        class GetDetectorRequest;
        class GetFindingsRequest;
        class GetFindingsStatisticsRequest;
        class GetIPSetRequest;
        class GetInvitationsCountRequest;
        class GetMasterAccountRequest;
        class GetMembersRequest;
        class GetThreatIntelSetRequest;
        class InviteMembersRequest;
        class ListDetectorsRequest;
        class ListFindingsRequest;
        class ListIPSetsRequest;
        class ListInvitationsRequest;
        class ListMembersRequest;
        class ListThreatIntelSetsRequest;
        class StartMonitoringMembersRequest;
        class StopMonitoringMembersRequest;
        class UnarchiveFindingsRequest;
        class UpdateDetectorRequest;
        class UpdateFindingsFeedbackRequest;
        class UpdateIPSetRequest;
        class UpdateThreatIntelSetRequest;

        typedef Aws::Utils::Outcome<AcceptInvitationResult, Aws::Client::AWSError<GuardDutyErrors>> AcceptInvitationOutcome;
        typedef Aws::Utils::Outcome<ArchiveFindingsResult, Aws::Client::AWSError<GuardDutyErrors>> ArchiveFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateDetectorResult, Aws::Client::AWSError<GuardDutyErrors>> CreateDetectorOutcome;
        typedef Aws::Utils::Outcome<CreateIPSetResult, Aws::Client::AWSError<GuardDutyErrors>> CreateIPSetOutcome;
        typedef Aws::Utils::Outcome<CreateMembersResult, Aws::Client::AWSError<GuardDutyErrors>> CreateMembersOutcome;
        typedef Aws::Utils::Outcome<CreateSampleFindingsResult, Aws::Client::AWSError<GuardDutyErrors>> CreateSampleFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateThreatIntelSetResult, Aws::Client::AWSError<GuardDutyErrors>> CreateThreatIntelSetOutcome;
        typedef Aws::Utils::Outcome<DeclineInvitationsResult, Aws::Client::AWSError<GuardDutyErrors>> DeclineInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteDetectorResult, Aws::Client::AWSError<GuardDutyErrors>> DeleteDetectorOutcome;
        typedef Aws::Utils::Outcome<DeleteIPSetResult, Aws::Client::AWSError<GuardDutyErrors>> DeleteIPSetOutcome;
        typedef Aws::Utils::Outcome<DeleteInvitationsResult, Aws::Client::AWSError<GuardDutyErrors>> DeleteInvitationsOutcome;
        typedef Aws::Utils::Outcome<DeleteMembersResult, Aws::Client::AWSError<GuardDutyErrors>> DeleteMembersOutcome;
        typedef Aws::Utils::Outcome<DeleteThreatIntelSetResult, Aws::Client::AWSError<GuardDutyErrors>> DeleteThreatIntelSetOutcome;
        typedef Aws::Utils::Outcome<DisassociateFromMasterAccountResult, Aws::Client::AWSError<GuardDutyErrors>> DisassociateFromMasterAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateMembersResult, Aws::Client::AWSError<GuardDutyErrors>> DisassociateMembersOutcome;
        typedef Aws::Utils::Outcome<GetDetectorResult, Aws::Client::AWSError<GuardDutyErrors>> GetDetectorOutcome;
        typedef Aws::Utils::Outcome<GetFindingsResult, Aws::Client::AWSError<GuardDutyErrors>> GetFindingsOutcome;
        typedef Aws::Utils::Outcome<GetFindingsStatisticsResult, Aws::Client::AWSError<GuardDutyErrors>> GetFindingsStatisticsOutcome;
        typedef Aws::Utils::Outcome<GetIPSetResult, Aws::Client::AWSError<GuardDutyErrors>> GetIPSetOutcome;
        typedef Aws::Utils::Outcome<GetInvitationsCountResult, Aws::Client::AWSError<GuardDutyErrors>> GetInvitationsCountOutcome;
        typedef Aws::Utils::Outcome<GetMasterAccountResult, Aws::Client::AWSError<GuardDutyErrors>> GetMasterAccountOutcome;
        typedef Aws::Utils::Outcome<GetMembersResult, Aws::Client::AWSError<GuardDutyErrors>> GetMembersOutcome;
        typedef Aws::Utils::Outcome<GetThreatIntelSetResult, Aws::Client::AWSError<GuardDutyErrors>> GetThreatIntelSetOutcome;
        typedef Aws::Utils::Outcome<InviteMembersResult, Aws::Client::AWSError<GuardDutyErrors>> InviteMembersOutcome;
        typedef Aws::Utils::Outcome<ListDetectorsResult, Aws::Client::AWSError<GuardDutyErrors>> ListDetectorsOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, Aws::Client::AWSError<GuardDutyErrors>> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListIPSetsResult, Aws::Client::AWSError<GuardDutyErrors>> ListIPSetsOutcome;
        typedef Aws::Utils::Outcome<ListInvitationsResult, Aws::Client::AWSError<GuardDutyErrors>> ListInvitationsOutcome;
        typedef Aws::Utils::Outcome<ListMembersResult, Aws::Client::AWSError<GuardDutyErrors>> ListMembersOutcome;
        typedef Aws::Utils::Outcome<ListThreatIntelSetsResult, Aws::Client::AWSError<GuardDutyErrors>> ListThreatIntelSetsOutcome;
        typedef Aws::Utils::Outcome<StartMonitoringMembersResult, Aws::Client::AWSError<GuardDutyErrors>> StartMonitoringMembersOutcome;
        typedef Aws::Utils::Outcome<StopMonitoringMembersResult, Aws::Client::AWSError<GuardDutyErrors>> StopMonitoringMembersOutcome;
        typedef Aws::Utils::Outcome<UnarchiveFindingsResult, Aws::Client::AWSError<GuardDutyErrors>> UnarchiveFindingsOutcome;
        typedef Aws::Utils::Outcome<UpdateDetectorResult, Aws::Client::AWSError<GuardDutyErrors>> UpdateDetectorOutcome;
        typedef Aws::Utils::Outcome<UpdateFindingsFeedbackResult, Aws::Client::AWSError<GuardDutyErrors>> UpdateFindingsFeedbackOutcome;
        typedef Aws::Utils::Outcome<UpdateIPSetResult, Aws::Client::AWSError<GuardDutyErrors>> UpdateIPSetOutcome;
        typedef Aws::Utils::Outcome<UpdateThreatIntelSetResult, Aws::Client::AWSError<GuardDutyErrors>> UpdateThreatIntelSetOutcome;

        typedef std::future<AcceptInvitationOutcome> AcceptInvitationOutcomeCallable;
        typedef std::future<ArchiveFindingsOutcome> ArchiveFindingsOutcomeCallable;
        typedef std::future<CreateDetectorOutcome> CreateDetectorOutcomeCallable;
        typedef std::future<CreateIPSetOutcome> CreateIPSetOutcomeCallable;
        typedef std::future<CreateMembersOutcome> CreateMembersOutcomeCallable;
        typedef std::future<CreateSampleFindingsOutcome> CreateSampleFindingsOutcomeCallable;
        typedef std::future<CreateThreatIntelSetOutcome> CreateThreatIntelSetOutcomeCallable;
        typedef std::future<DeclineInvitationsOutcome> DeclineInvitationsOutcomeCallable;
        typedef std::future<DeleteDetectorOutcome> DeleteDetectorOutcomeCallable;
        typedef std::future<DeleteIPSetOutcome> DeleteIPSetOutcomeCallable;
        typedef std::future<DeleteInvitationsOutcome> DeleteInvitationsOutcomeCallable;
        typedef std::future<DeleteMembersOutcome> DeleteMembersOutcomeCallable;
        typedef std::future<DeleteThreatIntelSetOutcome> DeleteThreatIntelSetOutcomeCallable;
        typedef std::future<DisassociateFromMasterAccountOutcome> DisassociateFromMasterAccountOutcomeCallable;
        typedef std::future<DisassociateMembersOutcome> DisassociateMembersOutcomeCallable;
        typedef std::future<GetDetectorOutcome> GetDetectorOutcomeCallable;
        typedef std::future<GetFindingsOutcome> GetFindingsOutcomeCallable;
        typedef std::future<GetFindingsStatisticsOutcome> GetFindingsStatisticsOutcomeCallable;
        typedef std::future<GetIPSetOutcome> GetIPSetOutcomeCallable;
        typedef std::future<GetInvitationsCountOutcome> GetInvitationsCountOutcomeCallable;
        typedef std::future<GetMasterAccountOutcome> GetMasterAccountOutcomeCallable;
        typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
        typedef std::future<GetThreatIntelSetOutcome> GetThreatIntelSetOutcomeCallable;
        typedef std::future<InviteMembersOutcome> InviteMembersOutcomeCallable;
        typedef std::future<ListDetectorsOutcome> ListDetectorsOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListIPSetsOutcome> ListIPSetsOutcomeCallable;
        typedef std::future<ListInvitationsOutcome> ListInvitationsOutcomeCallable;
        typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
        typedef std::future<ListThreatIntelSetsOutcome> ListThreatIntelSetsOutcomeCallable;
        typedef std::future<StartMonitoringMembersOutcome> StartMonitoringMembersOutcomeCallable;
        typedef std::future<StopMonitoringMembersOutcome> StopMonitoringMembersOutcomeCallable;
        typedef std::future<UnarchiveFindingsOutcome> UnarchiveFindingsOutcomeCallable;
        typedef std::future<UpdateDetectorOutcome> UpdateDetectorOutcomeCallable;
        typedef std::future<UpdateFindingsFeedbackOutcome> UpdateFindingsFeedbackOutcomeCallable;
        typedef std::future<UpdateIPSetOutcome> UpdateIPSetOutcomeCallable;
        typedef std::future<UpdateThreatIntelSetOutcome> UpdateThreatIntelSetOutcomeCallable;
} // namespace Model

  class GuardDutyClient;

    typedef std::function<void(const GuardDutyClient*, const Model::AcceptInvitationRequest&, const Model::AcceptInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInvitationResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ArchiveFindingsRequest&, const Model::ArchiveFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ArchiveFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateDetectorRequest&, const Model::CreateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateIPSetRequest&, const Model::CreateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateMembersRequest&, const Model::CreateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateSampleFindingsRequest&, const Model::CreateSampleFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSampleFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::CreateThreatIntelSetRequest&, const Model::CreateThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThreatIntelSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeclineInvitationsRequest&, const Model::DeclineInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineInvitationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteDetectorRequest&, const Model::DeleteDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteIPSetRequest&, const Model::DeleteIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteInvitationsRequest&, const Model::DeleteInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvitationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteMembersRequest&, const Model::DeleteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DeleteThreatIntelSetRequest&, const Model::DeleteThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThreatIntelSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisassociateFromMasterAccountRequest&, const Model::DisassociateFromMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFromMasterAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::DisassociateMembersRequest&, const Model::DisassociateMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetDetectorRequest&, const Model::GetDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFindingsRequest&, const Model::GetFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetFindingsStatisticsRequest&, const Model::GetFindingsStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsStatisticsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetIPSetRequest&, const Model::GetIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetInvitationsCountRequest&, const Model::GetInvitationsCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvitationsCountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMasterAccountRequest&, const Model::GetMasterAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMasterAccountResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetMembersRequest&, const Model::GetMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::GetThreatIntelSetRequest&, const Model::GetThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThreatIntelSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::InviteMembersRequest&, const Model::InviteMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListDetectorsRequest&, const Model::ListDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDetectorsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListIPSetsRequest&, const Model::ListIPSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIPSetsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListInvitationsRequest&, const Model::ListInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvitationsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListMembersRequest&, const Model::ListMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::ListThreatIntelSetsRequest&, const Model::ListThreatIntelSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThreatIntelSetsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::StartMonitoringMembersRequest&, const Model::StartMonitoringMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::StopMonitoringMembersRequest&, const Model::StopMonitoringMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMonitoringMembersResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UnarchiveFindingsRequest&, const Model::UnarchiveFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnarchiveFindingsResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateDetectorRequest&, const Model::UpdateDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateFindingsFeedbackRequest&, const Model::UpdateFindingsFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsFeedbackResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateIPSetRequest&, const Model::UpdateIPSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIPSetResponseReceivedHandler;
    typedef std::function<void(const GuardDutyClient*, const Model::UpdateThreatIntelSetRequest&, const Model::UpdateThreatIntelSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThreatIntelSetResponseReceivedHandler;

  /**
   * Assess, monitor, manage, and remediate security issues across your AWS
   * infrastructure, applications, and data.
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

        inline virtual const char* GetServiceClientName() const override { return "guardduty"; }


        /**
         * Accepts the invitation to be monitored by a master GuardDuty account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInvitationOutcome AcceptInvitation(const Model::AcceptInvitationRequest& request) const;

        /**
         * Accepts the invitation to be monitored by a master GuardDuty account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptInvitationOutcomeCallable AcceptInvitationCallable(const Model::AcceptInvitationRequest& request) const;

        /**
         * Accepts the invitation to be monitored by a master GuardDuty account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptInvitationAsync(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Archives Amazon GuardDuty findings specified by the list of finding
         * IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ArchiveFindingsOutcome ArchiveFindings(const Model::ArchiveFindingsRequest& request) const;

        /**
         * Archives Amazon GuardDuty findings specified by the list of finding
         * IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ArchiveFindingsOutcomeCallable ArchiveFindingsCallable(const Model::ArchiveFindingsRequest& request) const;

        /**
         * Archives Amazon GuardDuty findings specified by the list of finding
         * IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ArchiveFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ArchiveFindingsAsync(const Model::ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a single Amazon GuardDuty detector. A detector is an object that
         * represents the GuardDuty service. A detector must be created in order for
         * GuardDuty to become operational.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDetectorOutcome CreateDetector(const Model::CreateDetectorRequest& request) const;

        /**
         * Creates a single Amazon GuardDuty detector. A detector is an object that
         * represents the GuardDuty service. A detector must be created in order for
         * GuardDuty to become operational.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDetectorOutcomeCallable CreateDetectorCallable(const Model::CreateDetectorRequest& request) const;

        /**
         * Creates a single Amazon GuardDuty detector. A detector is an object that
         * represents the GuardDuty service. A detector must be created in order for
         * GuardDuty to become operational.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDetectorAsync(const Model::CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted
         * for secure communication with AWS infrastructure and applications.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIPSetOutcome CreateIPSet(const Model::CreateIPSetRequest& request) const;

        /**
         * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted
         * for secure communication with AWS infrastructure and applications.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIPSetOutcomeCallable CreateIPSetCallable(const Model::CreateIPSetRequest& request) const;

        /**
         * Creates a new IPSet - a list of trusted IP addresses that have been whitelisted
         * for secure communication with AWS infrastructure and applications.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIPSetAsync(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates member accounts of the current AWS account by specifying a list of AWS
         * account IDs. The current AWS account can then invite these members to manage
         * GuardDuty in their accounts.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * Creates member accounts of the current AWS account by specifying a list of AWS
         * account IDs. The current AWS account can then invite these members to manage
         * GuardDuty in their accounts.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMembersOutcomeCallable CreateMembersCallable(const Model::CreateMembersRequest& request) const;

        /**
         * Creates member accounts of the current AWS account by specifying a list of AWS
         * account IDs. The current AWS account can then invite these members to manage
         * GuardDuty in their accounts.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMembersAsync(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Generates example findings of types specified by the list of finding types. If
         * 'NULL' is specified for findingTypes, the API generates example findings of all
         * supported finding types.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSampleFindingsOutcome CreateSampleFindings(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * Generates example findings of types specified by the list of finding types. If
         * 'NULL' is specified for findingTypes, the API generates example findings of all
         * supported finding types.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSampleFindingsOutcomeCallable CreateSampleFindingsCallable(const Model::CreateSampleFindingsRequest& request) const;

        /**
         * Generates example findings of types specified by the list of finding types. If
         * 'NULL' is specified for findingTypes, the API generates example findings of all
         * supported finding types.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateSampleFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSampleFindingsAsync(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThreatIntelSetOutcome CreateThreatIntelSet(const Model::CreateThreatIntelSetRequest& request) const;

        /**
         * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThreatIntelSetOutcomeCallable CreateThreatIntelSetCallable(const Model::CreateThreatIntelSetRequest& request) const;

        /**
         * Create a new ThreatIntelSet. ThreatIntelSets consist of known malicious IP
         * addresses. GuardDuty generates findings based on ThreatIntelSets.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThreatIntelSetAsync(const Model::CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Declines invitations sent to the current member account by AWS account specified
         * by their account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * Declines invitations sent to the current member account by AWS account specified
         * by their account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const Model::DeclineInvitationsRequest& request) const;

        /**
         * Declines invitations sent to the current member account by AWS account specified
         * by their account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeclineInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineInvitationsAsync(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a Amazon GuardDuty detector specified by the detector ID.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDetectorOutcome DeleteDetector(const Model::DeleteDetectorRequest& request) const;

        /**
         * Deletes a Amazon GuardDuty detector specified by the detector ID.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDetectorOutcomeCallable DeleteDetectorCallable(const Model::DeleteDetectorRequest& request) const;

        /**
         * Deletes a Amazon GuardDuty detector specified by the detector ID.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDetectorAsync(const Model::DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIPSetOutcome DeleteIPSet(const Model::DeleteIPSetRequest& request) const;

        /**
         * Deletes the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIPSetOutcomeCallable DeleteIPSetCallable(const Model::DeleteIPSetRequest& request) const;

        /**
         * Deletes the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIPSetAsync(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes invitations sent to the current member account by AWS accounts specified
         * by their account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * Deletes invitations sent to the current member account by AWS accounts specified
         * by their account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const Model::DeleteInvitationsRequest& request) const;

        /**
         * Deletes invitations sent to the current member account by AWS accounts specified
         * by their account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInvitationsAsync(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * Deletes GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const Model::DeleteMembersRequest& request) const;

        /**
         * Deletes GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMembersAsync(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes ThreatIntelSet specified by the ThreatIntelSet ID.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThreatIntelSetOutcome DeleteThreatIntelSet(const Model::DeleteThreatIntelSetRequest& request) const;

        /**
         * Deletes ThreatIntelSet specified by the ThreatIntelSet ID.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThreatIntelSetOutcomeCallable DeleteThreatIntelSetCallable(const Model::DeleteThreatIntelSetRequest& request) const;

        /**
         * Deletes ThreatIntelSet specified by the ThreatIntelSet ID.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DeleteThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThreatIntelSetAsync(const Model::DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Disassociates the current GuardDuty member account from its master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromMasterAccountOutcome DisassociateFromMasterAccount(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * Disassociates the current GuardDuty member account from its master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFromMasterAccountOutcomeCallable DisassociateFromMasterAccountCallable(const Model::DisassociateFromMasterAccountRequest& request) const;

        /**
         * Disassociates the current GuardDuty member account from its master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateFromMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFromMasterAccountAsync(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Disassociates GuardDuty member accounts (to the current GuardDuty master
         * account) specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * Disassociates GuardDuty member accounts (to the current GuardDuty master
         * account) specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const Model::DisassociateMembersRequest& request) const;

        /**
         * Disassociates GuardDuty member accounts (to the current GuardDuty master
         * account) specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMembersAsync(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves an Amazon GuardDuty detector specified by the detectorId.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDetectorOutcome GetDetector(const Model::GetDetectorRequest& request) const;

        /**
         * Retrieves an Amazon GuardDuty detector specified by the detectorId.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDetectorOutcomeCallable GetDetectorCallable(const Model::GetDetectorRequest& request) const;

        /**
         * Retrieves an Amazon GuardDuty detector specified by the detectorId.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDetectorAsync(const Model::GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Describes Amazon GuardDuty findings specified by finding IDs.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * Describes Amazon GuardDuty findings specified by finding IDs.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsOutcomeCallable GetFindingsCallable(const Model::GetFindingsRequest& request) const;

        /**
         * Describes Amazon GuardDuty findings specified by finding IDs.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsAsync(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists Amazon GuardDuty findings' statistics for the specified detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsStatisticsOutcome GetFindingsStatistics(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * Lists Amazon GuardDuty findings' statistics for the specified detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingsStatisticsOutcomeCallable GetFindingsStatisticsCallable(const Model::GetFindingsStatisticsRequest& request) const;

        /**
         * Lists Amazon GuardDuty findings' statistics for the specified detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetFindingsStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingsStatisticsAsync(const Model::GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIPSetOutcome GetIPSet(const Model::GetIPSetRequest& request) const;

        /**
         * Retrieves the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIPSetOutcomeCallable GetIPSetCallable(const Model::GetIPSetRequest& request) const;

        /**
         * Retrieves the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIPSetAsync(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the count of all GuardDuty membership invitations that were sent to the
         * current member account except the currently accepted invitation.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * Returns the count of all GuardDuty membership invitations that were sent to the
         * current member account except the currently accepted invitation.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const Model::GetInvitationsCountRequest& request) const;

        /**
         * Returns the count of all GuardDuty membership invitations that were sent to the
         * current member account except the currently accepted invitation.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetInvitationsCount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvitationsCountAsync(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Provides the details for the GuardDuty master account to the current GuardDuty
         * member account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMasterAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMasterAccountOutcome GetMasterAccount(const Model::GetMasterAccountRequest& request) const;

        /**
         * Provides the details for the GuardDuty master account to the current GuardDuty
         * member account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMasterAccountOutcomeCallable GetMasterAccountCallable(const Model::GetMasterAccountRequest& request) const;

        /**
         * Provides the details for the GuardDuty master account to the current GuardDuty
         * member account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMasterAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMasterAccountAsync(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * Retrieves GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMembersOutcomeCallable GetMembersCallable(const Model::GetMembersRequest& request) const;

        /**
         * Retrieves GuardDuty member accounts (to the current GuardDuty master account)
         * specified by the account IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMembersAsync(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThreatIntelSetOutcome GetThreatIntelSet(const Model::GetThreatIntelSetRequest& request) const;

        /**
         * Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThreatIntelSetOutcomeCallable GetThreatIntelSetCallable(const Model::GetThreatIntelSetRequest& request) const;

        /**
         * Retrieves the ThreatIntelSet that is specified by the ThreatIntelSet
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/GetThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThreatIntelSetAsync(const Model::GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Invites other AWS accounts (created as members of the current AWS account by
         * CreateMembers) to enable GuardDuty and allow the current AWS account to view and
         * manage these accounts' GuardDuty findings on their behalf as the master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * Invites other AWS accounts (created as members of the current AWS account by
         * CreateMembers) to enable GuardDuty and allow the current AWS account to view and
         * manage these accounts' GuardDuty findings on their behalf as the master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteMembersOutcomeCallable InviteMembersCallable(const Model::InviteMembersRequest& request) const;

        /**
         * Invites other AWS accounts (created as members of the current AWS account by
         * CreateMembers) to enable GuardDuty and allow the current AWS account to view and
         * manage these accounts' GuardDuty findings on their behalf as the master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteMembersAsync(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectorsOutcome ListDetectors(const Model::ListDetectorsRequest& request) const;

        /**
         * Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectorsOutcomeCallable ListDetectorsCallable(const Model::ListDetectorsRequest& request) const;

        /**
         * Lists detectorIds of all the existing Amazon GuardDuty detector
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListDetectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectorsAsync(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists Amazon GuardDuty findings for the specified detector ID.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * Lists Amazon GuardDuty findings for the specified detector ID.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * Lists Amazon GuardDuty findings for the specified detector ID.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the IPSets of the GuardDuty service specified by the detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIPSetsOutcome ListIPSets(const Model::ListIPSetsRequest& request) const;

        /**
         * Lists the IPSets of the GuardDuty service specified by the detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIPSetsOutcomeCallable ListIPSetsCallable(const Model::ListIPSetsRequest& request) const;

        /**
         * Lists the IPSets of the GuardDuty service specified by the detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListIPSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIPSetsAsync(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists all GuardDuty membership invitations that were sent to the current AWS
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * Lists all GuardDuty membership invitations that were sent to the current AWS
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const Model::ListInvitationsRequest& request) const;

        /**
         * Lists all GuardDuty membership invitations that were sent to the current AWS
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListInvitations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvitationsAsync(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists details about all member accounts for the current GuardDuty master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * Lists details about all member accounts for the current GuardDuty master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMembersOutcomeCallable ListMembersCallable(const Model::ListMembersRequest& request) const;

        /**
         * Lists details about all member accounts for the current GuardDuty master
         * account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMembersAsync(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThreatIntelSetsOutcome ListThreatIntelSets(const Model::ListThreatIntelSetsRequest& request) const;

        /**
         * Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThreatIntelSetsOutcomeCallable ListThreatIntelSetsCallable(const Model::ListThreatIntelSetsRequest& request) const;

        /**
         * Lists the ThreatIntelSets of the GuardDuty service specified by the detector
         * ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ListThreatIntelSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThreatIntelSetsAsync(const Model::ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Re-enables GuardDuty to monitor findings of the member accounts specified by the
         * account IDs. A master GuardDuty account can run this command after disabling
         * GuardDuty from monitoring these members' findings by running
         * StopMonitoringMembers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringMembersOutcome StartMonitoringMembers(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * Re-enables GuardDuty to monitor findings of the member accounts specified by the
         * account IDs. A master GuardDuty account can run this command after disabling
         * GuardDuty from monitoring these members' findings by running
         * StopMonitoringMembers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringMembersOutcomeCallable StartMonitoringMembersCallable(const Model::StartMonitoringMembersRequest& request) const;

        /**
         * Re-enables GuardDuty to monitor findings of the member accounts specified by the
         * account IDs. A master GuardDuty account can run this command after disabling
         * GuardDuty from monitoring these members' findings by running
         * StopMonitoringMembers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StartMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringMembersAsync(const Model::StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Disables GuardDuty from monitoring findings of the member accounts specified by
         * the account IDs. After running this command, a master GuardDuty account can run
         * StartMonitoringMembers to re-enable GuardDuty to monitor these members'
         * findings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringMembersOutcome StopMonitoringMembers(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * Disables GuardDuty from monitoring findings of the member accounts specified by
         * the account IDs. After running this command, a master GuardDuty account can run
         * StartMonitoringMembers to re-enable GuardDuty to monitor these members'
         * findings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMonitoringMembersOutcomeCallable StopMonitoringMembersCallable(const Model::StopMonitoringMembersRequest& request) const;

        /**
         * Disables GuardDuty from monitoring findings of the member accounts specified by
         * the account IDs. After running this command, a master GuardDuty account can run
         * StartMonitoringMembers to re-enable GuardDuty to monitor these members'
         * findings.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMonitoringMembersAsync(const Model::StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Unarchives Amazon GuardDuty findings specified by the list of finding
         * IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UnarchiveFindingsOutcome UnarchiveFindings(const Model::UnarchiveFindingsRequest& request) const;

        /**
         * Unarchives Amazon GuardDuty findings specified by the list of finding
         * IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnarchiveFindingsOutcomeCallable UnarchiveFindingsCallable(const Model::UnarchiveFindingsRequest& request) const;

        /**
         * Unarchives Amazon GuardDuty findings specified by the list of finding
         * IDs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnarchiveFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnarchiveFindingsAsync(const Model::UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates an Amazon GuardDuty detector specified by the detectorId.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDetectorOutcome UpdateDetector(const Model::UpdateDetectorRequest& request) const;

        /**
         * Updates an Amazon GuardDuty detector specified by the detectorId.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDetectorOutcomeCallable UpdateDetectorCallable(const Model::UpdateDetectorRequest& request) const;

        /**
         * Updates an Amazon GuardDuty detector specified by the detectorId.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDetectorAsync(const Model::UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Marks specified Amazon GuardDuty findings as useful or not useful.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsFeedbackOutcome UpdateFindingsFeedback(const Model::UpdateFindingsFeedbackRequest& request) const;

        /**
         * Marks specified Amazon GuardDuty findings as useful or not useful.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsFeedbackOutcomeCallable UpdateFindingsFeedbackCallable(const Model::UpdateFindingsFeedbackRequest& request) const;

        /**
         * Marks specified Amazon GuardDuty findings as useful or not useful.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsFeedbackAsync(const Model::UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIPSetOutcome UpdateIPSet(const Model::UpdateIPSetRequest& request) const;

        /**
         * Updates the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIPSetOutcomeCallable UpdateIPSetCallable(const Model::UpdateIPSetRequest& request) const;

        /**
         * Updates the IPSet specified by the IPSet ID.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateIPSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIPSetAsync(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the ThreatIntelSet specified by ThreatIntelSet ID.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThreatIntelSetOutcome UpdateThreatIntelSet(const Model::UpdateThreatIntelSetRequest& request) const;

        /**
         * Updates the ThreatIntelSet specified by ThreatIntelSet ID.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThreatIntelSetOutcomeCallable UpdateThreatIntelSetCallable(const Model::UpdateThreatIntelSetRequest& request) const;

        /**
         * Updates the ThreatIntelSet specified by ThreatIntelSet ID.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateThreatIntelSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThreatIntelSetAsync(const Model::UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AcceptInvitationAsyncHelper(const Model::AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ArchiveFindingsAsyncHelper(const Model::ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDetectorAsyncHelper(const Model::CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIPSetAsyncHelper(const Model::CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMembersAsyncHelper(const Model::CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSampleFindingsAsyncHelper(const Model::CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateThreatIntelSetAsyncHelper(const Model::CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineInvitationsAsyncHelper(const Model::DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDetectorAsyncHelper(const Model::DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIPSetAsyncHelper(const Model::DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInvitationsAsyncHelper(const Model::DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMembersAsyncHelper(const Model::DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteThreatIntelSetAsyncHelper(const Model::DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFromMasterAccountAsyncHelper(const Model::DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMembersAsyncHelper(const Model::DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDetectorAsyncHelper(const Model::GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsAsyncHelper(const Model::GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingsStatisticsAsyncHelper(const Model::GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIPSetAsyncHelper(const Model::GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvitationsCountAsyncHelper(const Model::GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMasterAccountAsyncHelper(const Model::GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMembersAsyncHelper(const Model::GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetThreatIntelSetAsyncHelper(const Model::GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteMembersAsyncHelper(const Model::InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDetectorsAsyncHelper(const Model::ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIPSetsAsyncHelper(const Model::ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvitationsAsyncHelper(const Model::ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMembersAsyncHelper(const Model::ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListThreatIntelSetsAsyncHelper(const Model::ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMonitoringMembersAsyncHelper(const Model::StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopMonitoringMembersAsyncHelper(const Model::StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnarchiveFindingsAsyncHelper(const Model::UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDetectorAsyncHelper(const Model::UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFindingsFeedbackAsyncHelper(const Model::UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIPSetAsyncHelper(const Model::UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateThreatIntelSetAsyncHelper(const Model::UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GuardDuty
} // namespace Aws
