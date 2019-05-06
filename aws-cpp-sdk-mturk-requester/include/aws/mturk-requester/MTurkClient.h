/*
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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mturk-requester/model/AcceptQualificationRequestResult.h>
#include <aws/mturk-requester/model/ApproveAssignmentResult.h>
#include <aws/mturk-requester/model/AssociateQualificationWithWorkerResult.h>
#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITResult.h>
#include <aws/mturk-requester/model/CreateHITResult.h>
#include <aws/mturk-requester/model/CreateHITTypeResult.h>
#include <aws/mturk-requester/model/CreateHITWithHITTypeResult.h>
#include <aws/mturk-requester/model/CreateQualificationTypeResult.h>
#include <aws/mturk-requester/model/CreateWorkerBlockResult.h>
#include <aws/mturk-requester/model/DeleteHITResult.h>
#include <aws/mturk-requester/model/DeleteQualificationTypeResult.h>
#include <aws/mturk-requester/model/DeleteWorkerBlockResult.h>
#include <aws/mturk-requester/model/DisassociateQualificationFromWorkerResult.h>
#include <aws/mturk-requester/model/GetAccountBalanceResult.h>
#include <aws/mturk-requester/model/GetAssignmentResult.h>
#include <aws/mturk-requester/model/GetFileUploadURLResult.h>
#include <aws/mturk-requester/model/GetHITResult.h>
#include <aws/mturk-requester/model/GetQualificationScoreResult.h>
#include <aws/mturk-requester/model/GetQualificationTypeResult.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITResult.h>
#include <aws/mturk-requester/model/ListBonusPaymentsResult.h>
#include <aws/mturk-requester/model/ListHITsResult.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypeResult.h>
#include <aws/mturk-requester/model/ListQualificationRequestsResult.h>
#include <aws/mturk-requester/model/ListQualificationTypesResult.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITResult.h>
#include <aws/mturk-requester/model/ListReviewableHITsResult.h>
#include <aws/mturk-requester/model/ListWorkerBlocksResult.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeResult.h>
#include <aws/mturk-requester/model/NotifyWorkersResult.h>
#include <aws/mturk-requester/model/RejectAssignmentResult.h>
#include <aws/mturk-requester/model/RejectQualificationRequestResult.h>
#include <aws/mturk-requester/model/SendBonusResult.h>
#include <aws/mturk-requester/model/SendTestEventNotificationResult.h>
#include <aws/mturk-requester/model/UpdateExpirationForHITResult.h>
#include <aws/mturk-requester/model/UpdateHITReviewStatusResult.h>
#include <aws/mturk-requester/model/UpdateHITTypeOfHITResult.h>
#include <aws/mturk-requester/model/UpdateNotificationSettingsResult.h>
#include <aws/mturk-requester/model/UpdateQualificationTypeResult.h>
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

namespace MTurk
{

namespace Model
{
        class AcceptQualificationRequestRequest;
        class ApproveAssignmentRequest;
        class AssociateQualificationWithWorkerRequest;
        class CreateAdditionalAssignmentsForHITRequest;
        class CreateHITRequest;
        class CreateHITTypeRequest;
        class CreateHITWithHITTypeRequest;
        class CreateQualificationTypeRequest;
        class CreateWorkerBlockRequest;
        class DeleteHITRequest;
        class DeleteQualificationTypeRequest;
        class DeleteWorkerBlockRequest;
        class DisassociateQualificationFromWorkerRequest;
        class GetAccountBalanceRequest;
        class GetAssignmentRequest;
        class GetFileUploadURLRequest;
        class GetHITRequest;
        class GetQualificationScoreRequest;
        class GetQualificationTypeRequest;
        class ListAssignmentsForHITRequest;
        class ListBonusPaymentsRequest;
        class ListHITsRequest;
        class ListHITsForQualificationTypeRequest;
        class ListQualificationRequestsRequest;
        class ListQualificationTypesRequest;
        class ListReviewPolicyResultsForHITRequest;
        class ListReviewableHITsRequest;
        class ListWorkerBlocksRequest;
        class ListWorkersWithQualificationTypeRequest;
        class NotifyWorkersRequest;
        class RejectAssignmentRequest;
        class RejectQualificationRequestRequest;
        class SendBonusRequest;
        class SendTestEventNotificationRequest;
        class UpdateExpirationForHITRequest;
        class UpdateHITReviewStatusRequest;
        class UpdateHITTypeOfHITRequest;
        class UpdateNotificationSettingsRequest;
        class UpdateQualificationTypeRequest;

        typedef Aws::Utils::Outcome<AcceptQualificationRequestResult, Aws::Client::AWSError<MTurkErrors>> AcceptQualificationRequestOutcome;
        typedef Aws::Utils::Outcome<ApproveAssignmentResult, Aws::Client::AWSError<MTurkErrors>> ApproveAssignmentOutcome;
        typedef Aws::Utils::Outcome<AssociateQualificationWithWorkerResult, Aws::Client::AWSError<MTurkErrors>> AssociateQualificationWithWorkerOutcome;
        typedef Aws::Utils::Outcome<CreateAdditionalAssignmentsForHITResult, Aws::Client::AWSError<MTurkErrors>> CreateAdditionalAssignmentsForHITOutcome;
        typedef Aws::Utils::Outcome<CreateHITResult, Aws::Client::AWSError<MTurkErrors>> CreateHITOutcome;
        typedef Aws::Utils::Outcome<CreateHITTypeResult, Aws::Client::AWSError<MTurkErrors>> CreateHITTypeOutcome;
        typedef Aws::Utils::Outcome<CreateHITWithHITTypeResult, Aws::Client::AWSError<MTurkErrors>> CreateHITWithHITTypeOutcome;
        typedef Aws::Utils::Outcome<CreateQualificationTypeResult, Aws::Client::AWSError<MTurkErrors>> CreateQualificationTypeOutcome;
        typedef Aws::Utils::Outcome<CreateWorkerBlockResult, Aws::Client::AWSError<MTurkErrors>> CreateWorkerBlockOutcome;
        typedef Aws::Utils::Outcome<DeleteHITResult, Aws::Client::AWSError<MTurkErrors>> DeleteHITOutcome;
        typedef Aws::Utils::Outcome<DeleteQualificationTypeResult, Aws::Client::AWSError<MTurkErrors>> DeleteQualificationTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkerBlockResult, Aws::Client::AWSError<MTurkErrors>> DeleteWorkerBlockOutcome;
        typedef Aws::Utils::Outcome<DisassociateQualificationFromWorkerResult, Aws::Client::AWSError<MTurkErrors>> DisassociateQualificationFromWorkerOutcome;
        typedef Aws::Utils::Outcome<GetAccountBalanceResult, Aws::Client::AWSError<MTurkErrors>> GetAccountBalanceOutcome;
        typedef Aws::Utils::Outcome<GetAssignmentResult, Aws::Client::AWSError<MTurkErrors>> GetAssignmentOutcome;
        typedef Aws::Utils::Outcome<GetFileUploadURLResult, Aws::Client::AWSError<MTurkErrors>> GetFileUploadURLOutcome;
        typedef Aws::Utils::Outcome<GetHITResult, Aws::Client::AWSError<MTurkErrors>> GetHITOutcome;
        typedef Aws::Utils::Outcome<GetQualificationScoreResult, Aws::Client::AWSError<MTurkErrors>> GetQualificationScoreOutcome;
        typedef Aws::Utils::Outcome<GetQualificationTypeResult, Aws::Client::AWSError<MTurkErrors>> GetQualificationTypeOutcome;
        typedef Aws::Utils::Outcome<ListAssignmentsForHITResult, Aws::Client::AWSError<MTurkErrors>> ListAssignmentsForHITOutcome;
        typedef Aws::Utils::Outcome<ListBonusPaymentsResult, Aws::Client::AWSError<MTurkErrors>> ListBonusPaymentsOutcome;
        typedef Aws::Utils::Outcome<ListHITsResult, Aws::Client::AWSError<MTurkErrors>> ListHITsOutcome;
        typedef Aws::Utils::Outcome<ListHITsForQualificationTypeResult, Aws::Client::AWSError<MTurkErrors>> ListHITsForQualificationTypeOutcome;
        typedef Aws::Utils::Outcome<ListQualificationRequestsResult, Aws::Client::AWSError<MTurkErrors>> ListQualificationRequestsOutcome;
        typedef Aws::Utils::Outcome<ListQualificationTypesResult, Aws::Client::AWSError<MTurkErrors>> ListQualificationTypesOutcome;
        typedef Aws::Utils::Outcome<ListReviewPolicyResultsForHITResult, Aws::Client::AWSError<MTurkErrors>> ListReviewPolicyResultsForHITOutcome;
        typedef Aws::Utils::Outcome<ListReviewableHITsResult, Aws::Client::AWSError<MTurkErrors>> ListReviewableHITsOutcome;
        typedef Aws::Utils::Outcome<ListWorkerBlocksResult, Aws::Client::AWSError<MTurkErrors>> ListWorkerBlocksOutcome;
        typedef Aws::Utils::Outcome<ListWorkersWithQualificationTypeResult, Aws::Client::AWSError<MTurkErrors>> ListWorkersWithQualificationTypeOutcome;
        typedef Aws::Utils::Outcome<NotifyWorkersResult, Aws::Client::AWSError<MTurkErrors>> NotifyWorkersOutcome;
        typedef Aws::Utils::Outcome<RejectAssignmentResult, Aws::Client::AWSError<MTurkErrors>> RejectAssignmentOutcome;
        typedef Aws::Utils::Outcome<RejectQualificationRequestResult, Aws::Client::AWSError<MTurkErrors>> RejectQualificationRequestOutcome;
        typedef Aws::Utils::Outcome<SendBonusResult, Aws::Client::AWSError<MTurkErrors>> SendBonusOutcome;
        typedef Aws::Utils::Outcome<SendTestEventNotificationResult, Aws::Client::AWSError<MTurkErrors>> SendTestEventNotificationOutcome;
        typedef Aws::Utils::Outcome<UpdateExpirationForHITResult, Aws::Client::AWSError<MTurkErrors>> UpdateExpirationForHITOutcome;
        typedef Aws::Utils::Outcome<UpdateHITReviewStatusResult, Aws::Client::AWSError<MTurkErrors>> UpdateHITReviewStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateHITTypeOfHITResult, Aws::Client::AWSError<MTurkErrors>> UpdateHITTypeOfHITOutcome;
        typedef Aws::Utils::Outcome<UpdateNotificationSettingsResult, Aws::Client::AWSError<MTurkErrors>> UpdateNotificationSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateQualificationTypeResult, Aws::Client::AWSError<MTurkErrors>> UpdateQualificationTypeOutcome;

        typedef std::future<AcceptQualificationRequestOutcome> AcceptQualificationRequestOutcomeCallable;
        typedef std::future<ApproveAssignmentOutcome> ApproveAssignmentOutcomeCallable;
        typedef std::future<AssociateQualificationWithWorkerOutcome> AssociateQualificationWithWorkerOutcomeCallable;
        typedef std::future<CreateAdditionalAssignmentsForHITOutcome> CreateAdditionalAssignmentsForHITOutcomeCallable;
        typedef std::future<CreateHITOutcome> CreateHITOutcomeCallable;
        typedef std::future<CreateHITTypeOutcome> CreateHITTypeOutcomeCallable;
        typedef std::future<CreateHITWithHITTypeOutcome> CreateHITWithHITTypeOutcomeCallable;
        typedef std::future<CreateQualificationTypeOutcome> CreateQualificationTypeOutcomeCallable;
        typedef std::future<CreateWorkerBlockOutcome> CreateWorkerBlockOutcomeCallable;
        typedef std::future<DeleteHITOutcome> DeleteHITOutcomeCallable;
        typedef std::future<DeleteQualificationTypeOutcome> DeleteQualificationTypeOutcomeCallable;
        typedef std::future<DeleteWorkerBlockOutcome> DeleteWorkerBlockOutcomeCallable;
        typedef std::future<DisassociateQualificationFromWorkerOutcome> DisassociateQualificationFromWorkerOutcomeCallable;
        typedef std::future<GetAccountBalanceOutcome> GetAccountBalanceOutcomeCallable;
        typedef std::future<GetAssignmentOutcome> GetAssignmentOutcomeCallable;
        typedef std::future<GetFileUploadURLOutcome> GetFileUploadURLOutcomeCallable;
        typedef std::future<GetHITOutcome> GetHITOutcomeCallable;
        typedef std::future<GetQualificationScoreOutcome> GetQualificationScoreOutcomeCallable;
        typedef std::future<GetQualificationTypeOutcome> GetQualificationTypeOutcomeCallable;
        typedef std::future<ListAssignmentsForHITOutcome> ListAssignmentsForHITOutcomeCallable;
        typedef std::future<ListBonusPaymentsOutcome> ListBonusPaymentsOutcomeCallable;
        typedef std::future<ListHITsOutcome> ListHITsOutcomeCallable;
        typedef std::future<ListHITsForQualificationTypeOutcome> ListHITsForQualificationTypeOutcomeCallable;
        typedef std::future<ListQualificationRequestsOutcome> ListQualificationRequestsOutcomeCallable;
        typedef std::future<ListQualificationTypesOutcome> ListQualificationTypesOutcomeCallable;
        typedef std::future<ListReviewPolicyResultsForHITOutcome> ListReviewPolicyResultsForHITOutcomeCallable;
        typedef std::future<ListReviewableHITsOutcome> ListReviewableHITsOutcomeCallable;
        typedef std::future<ListWorkerBlocksOutcome> ListWorkerBlocksOutcomeCallable;
        typedef std::future<ListWorkersWithQualificationTypeOutcome> ListWorkersWithQualificationTypeOutcomeCallable;
        typedef std::future<NotifyWorkersOutcome> NotifyWorkersOutcomeCallable;
        typedef std::future<RejectAssignmentOutcome> RejectAssignmentOutcomeCallable;
        typedef std::future<RejectQualificationRequestOutcome> RejectQualificationRequestOutcomeCallable;
        typedef std::future<SendBonusOutcome> SendBonusOutcomeCallable;
        typedef std::future<SendTestEventNotificationOutcome> SendTestEventNotificationOutcomeCallable;
        typedef std::future<UpdateExpirationForHITOutcome> UpdateExpirationForHITOutcomeCallable;
        typedef std::future<UpdateHITReviewStatusOutcome> UpdateHITReviewStatusOutcomeCallable;
        typedef std::future<UpdateHITTypeOfHITOutcome> UpdateHITTypeOfHITOutcomeCallable;
        typedef std::future<UpdateNotificationSettingsOutcome> UpdateNotificationSettingsOutcomeCallable;
        typedef std::future<UpdateQualificationTypeOutcome> UpdateQualificationTypeOutcomeCallable;
} // namespace Model

  class MTurkClient;

    typedef std::function<void(const MTurkClient*, const Model::AcceptQualificationRequestRequest&, const Model::AcceptQualificationRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptQualificationRequestResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ApproveAssignmentRequest&, const Model::ApproveAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApproveAssignmentResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::AssociateQualificationWithWorkerRequest&, const Model::AssociateQualificationWithWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateQualificationWithWorkerResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateAdditionalAssignmentsForHITRequest&, const Model::CreateAdditionalAssignmentsForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAdditionalAssignmentsForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateHITRequest&, const Model::CreateHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateHITTypeRequest&, const Model::CreateHITTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHITTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateHITWithHITTypeRequest&, const Model::CreateHITWithHITTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHITWithHITTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateQualificationTypeRequest&, const Model::CreateQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::CreateWorkerBlockRequest&, const Model::CreateWorkerBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkerBlockResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DeleteHITRequest&, const Model::DeleteHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DeleteQualificationTypeRequest&, const Model::DeleteQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DeleteWorkerBlockRequest&, const Model::DeleteWorkerBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkerBlockResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::DisassociateQualificationFromWorkerRequest&, const Model::DisassociateQualificationFromWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateQualificationFromWorkerResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetAccountBalanceRequest&, const Model::GetAccountBalanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountBalanceResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetAssignmentRequest&, const Model::GetAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssignmentResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetFileUploadURLRequest&, const Model::GetFileUploadURLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFileUploadURLResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetHITRequest&, const Model::GetHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetQualificationScoreRequest&, const Model::GetQualificationScoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQualificationScoreResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::GetQualificationTypeRequest&, const Model::GetQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListAssignmentsForHITRequest&, const Model::ListAssignmentsForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssignmentsForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListBonusPaymentsRequest&, const Model::ListBonusPaymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBonusPaymentsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListHITsRequest&, const Model::ListHITsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHITsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListHITsForQualificationTypeRequest&, const Model::ListHITsForQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHITsForQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListQualificationRequestsRequest&, const Model::ListQualificationRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQualificationRequestsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListQualificationTypesRequest&, const Model::ListQualificationTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQualificationTypesResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListReviewPolicyResultsForHITRequest&, const Model::ListReviewPolicyResultsForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReviewPolicyResultsForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListReviewableHITsRequest&, const Model::ListReviewableHITsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReviewableHITsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListWorkerBlocksRequest&, const Model::ListWorkerBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkerBlocksResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::ListWorkersWithQualificationTypeRequest&, const Model::ListWorkersWithQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkersWithQualificationTypeResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::NotifyWorkersRequest&, const Model::NotifyWorkersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyWorkersResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::RejectAssignmentRequest&, const Model::RejectAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectAssignmentResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::RejectQualificationRequestRequest&, const Model::RejectQualificationRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectQualificationRequestResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::SendBonusRequest&, const Model::SendBonusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBonusResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::SendTestEventNotificationRequest&, const Model::SendTestEventNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTestEventNotificationResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateExpirationForHITRequest&, const Model::UpdateExpirationForHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExpirationForHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateHITReviewStatusRequest&, const Model::UpdateHITReviewStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHITReviewStatusResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateHITTypeOfHITRequest&, const Model::UpdateHITTypeOfHITOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHITTypeOfHITResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateNotificationSettingsRequest&, const Model::UpdateNotificationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationSettingsResponseReceivedHandler;
    typedef std::function<void(const MTurkClient*, const Model::UpdateQualificationTypeRequest&, const Model::UpdateQualificationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQualificationTypeResponseReceivedHandler;

  /**
   * <fullname>Amazon Mechanical Turk API Reference</fullname>
   */
  class AWS_MTURK_API MTurkClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MTurkClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MTurkClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MTurkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MTurkClient();

        inline virtual const char* GetServiceClientName() const override { return "MTurk"; }


        /**
         * <p> The <code>AcceptQualificationRequest</code> operation approves a Worker's
         * request for a Qualification. </p> <p> Only the owner of the Qualification type
         * can grant a Qualification request for that type. </p> <p> A successful request
         * for the <code>AcceptQualificationRequest</code> operation returns with no errors
         * and an empty body. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AcceptQualificationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptQualificationRequestOutcome AcceptQualificationRequest(const Model::AcceptQualificationRequestRequest& request) const;

        /**
         * <p> The <code>AcceptQualificationRequest</code> operation approves a Worker's
         * request for a Qualification. </p> <p> Only the owner of the Qualification type
         * can grant a Qualification request for that type. </p> <p> A successful request
         * for the <code>AcceptQualificationRequest</code> operation returns with no errors
         * and an empty body. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AcceptQualificationRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptQualificationRequestOutcomeCallable AcceptQualificationRequestCallable(const Model::AcceptQualificationRequestRequest& request) const;

        /**
         * <p> The <code>AcceptQualificationRequest</code> operation approves a Worker's
         * request for a Qualification. </p> <p> Only the owner of the Qualification type
         * can grant a Qualification request for that type. </p> <p> A successful request
         * for the <code>AcceptQualificationRequest</code> operation returns with no errors
         * and an empty body. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AcceptQualificationRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptQualificationRequestAsync(const Model::AcceptQualificationRequestRequest& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ApproveAssignment</code> operation approves the results of a
         * completed assignment. </p> <p> Approving an assignment initiates two payments
         * from the Requester's Amazon.com account </p> <ul> <li> <p> The Worker who
         * submitted the results is paid the reward specified in the HIT. </p> </li> <li>
         * <p> Amazon Mechanical Turk fees are debited. </p> </li> </ul> <p> If the
         * Requester's account does not have adequate funds for these payments, the call to
         * ApproveAssignment returns an exception, and the approval is not processed. You
         * can include an optional feedback message with the approval, which the Worker can
         * see in the Status section of the web site. </p> <p> You can also call this
         * operation for assignments that were previous rejected and approve them by
         * explicitly overriding the previous rejection. This only works on rejected
         * assignments that were submitted within the previous 30 days and only if the
         * assignment's related HIT has not been deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ApproveAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::ApproveAssignmentOutcome ApproveAssignment(const Model::ApproveAssignmentRequest& request) const;

        /**
         * <p> The <code>ApproveAssignment</code> operation approves the results of a
         * completed assignment. </p> <p> Approving an assignment initiates two payments
         * from the Requester's Amazon.com account </p> <ul> <li> <p> The Worker who
         * submitted the results is paid the reward specified in the HIT. </p> </li> <li>
         * <p> Amazon Mechanical Turk fees are debited. </p> </li> </ul> <p> If the
         * Requester's account does not have adequate funds for these payments, the call to
         * ApproveAssignment returns an exception, and the approval is not processed. You
         * can include an optional feedback message with the approval, which the Worker can
         * see in the Status section of the web site. </p> <p> You can also call this
         * operation for assignments that were previous rejected and approve them by
         * explicitly overriding the previous rejection. This only works on rejected
         * assignments that were submitted within the previous 30 days and only if the
         * assignment's related HIT has not been deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ApproveAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApproveAssignmentOutcomeCallable ApproveAssignmentCallable(const Model::ApproveAssignmentRequest& request) const;

        /**
         * <p> The <code>ApproveAssignment</code> operation approves the results of a
         * completed assignment. </p> <p> Approving an assignment initiates two payments
         * from the Requester's Amazon.com account </p> <ul> <li> <p> The Worker who
         * submitted the results is paid the reward specified in the HIT. </p> </li> <li>
         * <p> Amazon Mechanical Turk fees are debited. </p> </li> </ul> <p> If the
         * Requester's account does not have adequate funds for these payments, the call to
         * ApproveAssignment returns an exception, and the approval is not processed. You
         * can include an optional feedback message with the approval, which the Worker can
         * see in the Status section of the web site. </p> <p> You can also call this
         * operation for assignments that were previous rejected and approve them by
         * explicitly overriding the previous rejection. This only works on rejected
         * assignments that were submitted within the previous 30 days and only if the
         * assignment's related HIT has not been deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ApproveAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApproveAssignmentAsync(const Model::ApproveAssignmentRequest& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>AssociateQualificationWithWorker</code> operation gives a Worker a
         * Qualification. <code>AssociateQualificationWithWorker</code> does not require
         * that the Worker submit a Qualification request. It gives the Qualification
         * directly to the Worker. </p> <p> You can only assign a Qualification of a
         * Qualification type that you created (using the
         * <code>CreateQualificationType</code> operation). </p> <note> <p> Note:
         * <code>AssociateQualificationWithWorker</code> does not affect any pending
         * Qualification requests for the Qualification by the Worker. If you assign a
         * Qualification to a Worker, then later grant a Qualification request made by the
         * Worker, the granting of the request may modify the Qualification score. To
         * resolve a pending Qualification request without affecting the Qualification the
         * Worker already has, reject the request with the
         * <code>RejectQualificationRequest</code> operation. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AssociateQualificationWithWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateQualificationWithWorkerOutcome AssociateQualificationWithWorker(const Model::AssociateQualificationWithWorkerRequest& request) const;

        /**
         * <p> The <code>AssociateQualificationWithWorker</code> operation gives a Worker a
         * Qualification. <code>AssociateQualificationWithWorker</code> does not require
         * that the Worker submit a Qualification request. It gives the Qualification
         * directly to the Worker. </p> <p> You can only assign a Qualification of a
         * Qualification type that you created (using the
         * <code>CreateQualificationType</code> operation). </p> <note> <p> Note:
         * <code>AssociateQualificationWithWorker</code> does not affect any pending
         * Qualification requests for the Qualification by the Worker. If you assign a
         * Qualification to a Worker, then later grant a Qualification request made by the
         * Worker, the granting of the request may modify the Qualification score. To
         * resolve a pending Qualification request without affecting the Qualification the
         * Worker already has, reject the request with the
         * <code>RejectQualificationRequest</code> operation. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AssociateQualificationWithWorker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateQualificationWithWorkerOutcomeCallable AssociateQualificationWithWorkerCallable(const Model::AssociateQualificationWithWorkerRequest& request) const;

        /**
         * <p> The <code>AssociateQualificationWithWorker</code> operation gives a Worker a
         * Qualification. <code>AssociateQualificationWithWorker</code> does not require
         * that the Worker submit a Qualification request. It gives the Qualification
         * directly to the Worker. </p> <p> You can only assign a Qualification of a
         * Qualification type that you created (using the
         * <code>CreateQualificationType</code> operation). </p> <note> <p> Note:
         * <code>AssociateQualificationWithWorker</code> does not affect any pending
         * Qualification requests for the Qualification by the Worker. If you assign a
         * Qualification to a Worker, then later grant a Qualification request made by the
         * Worker, the granting of the request may modify the Qualification score. To
         * resolve a pending Qualification request without affecting the Qualification the
         * Worker already has, reject the request with the
         * <code>RejectQualificationRequest</code> operation. </p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AssociateQualificationWithWorker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateQualificationWithWorkerAsync(const Model::AssociateQualificationWithWorkerRequest& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>CreateAdditionalAssignmentsForHIT</code> operation increases the
         * maximum number of assignments of an existing HIT. </p> <p> To extend the maximum
         * number of assignments, specify the number of additional assignments.</p> <note>
         * <ul> <li> <p>HITs created with fewer than 10 assignments cannot be extended to
         * have 10 or more assignments. Attempting to add assignments in a way that brings
         * the total number of assignments for a HIT from fewer than 10 assignments to 10
         * or more assignments will result in an
         * <code>AWS.MechanicalTurk.InvalidMaximumAssignmentsIncrease</code> exception.</p>
         * </li> <li> <p>HITs that were created before July 22, 2015 cannot be extended.
         * Attempting to extend HITs that were created before July 22, 2015 will result in
         * an <code>AWS.MechanicalTurk.HITTooOldForExtension</code> exception. </p> </li>
         * </ul> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateAdditionalAssignmentsForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAdditionalAssignmentsForHITOutcome CreateAdditionalAssignmentsForHIT(const Model::CreateAdditionalAssignmentsForHITRequest& request) const;

        /**
         * <p> The <code>CreateAdditionalAssignmentsForHIT</code> operation increases the
         * maximum number of assignments of an existing HIT. </p> <p> To extend the maximum
         * number of assignments, specify the number of additional assignments.</p> <note>
         * <ul> <li> <p>HITs created with fewer than 10 assignments cannot be extended to
         * have 10 or more assignments. Attempting to add assignments in a way that brings
         * the total number of assignments for a HIT from fewer than 10 assignments to 10
         * or more assignments will result in an
         * <code>AWS.MechanicalTurk.InvalidMaximumAssignmentsIncrease</code> exception.</p>
         * </li> <li> <p>HITs that were created before July 22, 2015 cannot be extended.
         * Attempting to extend HITs that were created before July 22, 2015 will result in
         * an <code>AWS.MechanicalTurk.HITTooOldForExtension</code> exception. </p> </li>
         * </ul> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateAdditionalAssignmentsForHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAdditionalAssignmentsForHITOutcomeCallable CreateAdditionalAssignmentsForHITCallable(const Model::CreateAdditionalAssignmentsForHITRequest& request) const;

        /**
         * <p> The <code>CreateAdditionalAssignmentsForHIT</code> operation increases the
         * maximum number of assignments of an existing HIT. </p> <p> To extend the maximum
         * number of assignments, specify the number of additional assignments.</p> <note>
         * <ul> <li> <p>HITs created with fewer than 10 assignments cannot be extended to
         * have 10 or more assignments. Attempting to add assignments in a way that brings
         * the total number of assignments for a HIT from fewer than 10 assignments to 10
         * or more assignments will result in an
         * <code>AWS.MechanicalTurk.InvalidMaximumAssignmentsIncrease</code> exception.</p>
         * </li> <li> <p>HITs that were created before July 22, 2015 cannot be extended.
         * Attempting to extend HITs that were created before July 22, 2015 will result in
         * an <code>AWS.MechanicalTurk.HITTooOldForExtension</code> exception. </p> </li>
         * </ul> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateAdditionalAssignmentsForHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAdditionalAssignmentsForHITAsync(const Model::CreateAdditionalAssignmentsForHITRequest& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>CreateHIT</code> operation creates a new Human Intelligence Task
         * (HIT). The new HIT is made available for Workers to find and accept on the
         * Amazon Mechanical Turk website. </p> <p> This operation allows you to specify a
         * new HIT by passing in values for the properties of the HIT, such as its title,
         * reward amount and number of assignments. When you pass these values to
         * <code>CreateHIT</code>, a new HIT is created for you, with a new
         * <code>HITTypeID</code>. The HITTypeID can be used to create additional HITs in
         * the future without needing to specify common parameters such as the title,
         * description and reward amount each time.</p> <p> An alternative way to create
         * HITs is to first generate a HITTypeID using the <code>CreateHITType</code>
         * operation and then call the <code>CreateHITWithHITType</code> operation. This is
         * the recommended best practice for Requesters who are creating large numbers of
         * HITs. </p> <p>CreateHIT also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p> <note> <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHITOutcome CreateHIT(const Model::CreateHITRequest& request) const;

        /**
         * <p>The <code>CreateHIT</code> operation creates a new Human Intelligence Task
         * (HIT). The new HIT is made available for Workers to find and accept on the
         * Amazon Mechanical Turk website. </p> <p> This operation allows you to specify a
         * new HIT by passing in values for the properties of the HIT, such as its title,
         * reward amount and number of assignments. When you pass these values to
         * <code>CreateHIT</code>, a new HIT is created for you, with a new
         * <code>HITTypeID</code>. The HITTypeID can be used to create additional HITs in
         * the future without needing to specify common parameters such as the title,
         * description and reward amount each time.</p> <p> An alternative way to create
         * HITs is to first generate a HITTypeID using the <code>CreateHITType</code>
         * operation and then call the <code>CreateHITWithHITType</code> operation. This is
         * the recommended best practice for Requesters who are creating large numbers of
         * HITs. </p> <p>CreateHIT also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p> <note> <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHITOutcomeCallable CreateHITCallable(const Model::CreateHITRequest& request) const;

        /**
         * <p>The <code>CreateHIT</code> operation creates a new Human Intelligence Task
         * (HIT). The new HIT is made available for Workers to find and accept on the
         * Amazon Mechanical Turk website. </p> <p> This operation allows you to specify a
         * new HIT by passing in values for the properties of the HIT, such as its title,
         * reward amount and number of assignments. When you pass these values to
         * <code>CreateHIT</code>, a new HIT is created for you, with a new
         * <code>HITTypeID</code>. The HITTypeID can be used to create additional HITs in
         * the future without needing to specify common parameters such as the title,
         * description and reward amount each time.</p> <p> An alternative way to create
         * HITs is to first generate a HITTypeID using the <code>CreateHITType</code>
         * operation and then call the <code>CreateHITWithHITType</code> operation. This is
         * the recommended best practice for Requesters who are creating large numbers of
         * HITs. </p> <p>CreateHIT also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p> <note> <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHITAsync(const Model::CreateHITRequest& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>CreateHITType</code> operation creates a new HIT type. This
         * operation allows you to define a standard set of HIT properties to use when
         * creating HITs. If you register a HIT type with values that match an existing HIT
         * type, the HIT type ID of the existing type will be returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHITTypeOutcome CreateHITType(const Model::CreateHITTypeRequest& request) const;

        /**
         * <p> The <code>CreateHITType</code> operation creates a new HIT type. This
         * operation allows you to define a standard set of HIT properties to use when
         * creating HITs. If you register a HIT type with values that match an existing HIT
         * type, the HIT type ID of the existing type will be returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHITTypeOutcomeCallable CreateHITTypeCallable(const Model::CreateHITTypeRequest& request) const;

        /**
         * <p> The <code>CreateHITType</code> operation creates a new HIT type. This
         * operation allows you to define a standard set of HIT properties to use when
         * creating HITs. If you register a HIT type with values that match an existing HIT
         * type, the HIT type ID of the existing type will be returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHITTypeAsync(const Model::CreateHITTypeRequest& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>CreateHITWithHITType</code> operation creates a new Human
         * Intelligence Task (HIT) using an existing HITTypeID generated by the
         * <code>CreateHITType</code> operation. </p> <p> This is an alternative way to
         * create HITs from the <code>CreateHIT</code> operation. This is the recommended
         * best practice for Requesters who are creating large numbers of HITs. </p>
         * <p>CreateHITWithHITType also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p> <note> <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITWithHITType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHITWithHITTypeOutcome CreateHITWithHITType(const Model::CreateHITWithHITTypeRequest& request) const;

        /**
         * <p> The <code>CreateHITWithHITType</code> operation creates a new Human
         * Intelligence Task (HIT) using an existing HITTypeID generated by the
         * <code>CreateHITType</code> operation. </p> <p> This is an alternative way to
         * create HITs from the <code>CreateHIT</code> operation. This is the recommended
         * best practice for Requesters who are creating large numbers of HITs. </p>
         * <p>CreateHITWithHITType also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p> <note> <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITWithHITType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHITWithHITTypeOutcomeCallable CreateHITWithHITTypeCallable(const Model::CreateHITWithHITTypeRequest& request) const;

        /**
         * <p> The <code>CreateHITWithHITType</code> operation creates a new Human
         * Intelligence Task (HIT) using an existing HITTypeID generated by the
         * <code>CreateHITType</code> operation. </p> <p> This is an alternative way to
         * create HITs from the <code>CreateHIT</code> operation. This is the recommended
         * best practice for Requesters who are creating large numbers of HITs. </p>
         * <p>CreateHITWithHITType also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p> <note> <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITWithHITType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHITWithHITTypeAsync(const Model::CreateHITWithHITTypeRequest& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>CreateQualificationType</code> operation creates a new
         * Qualification type, which is represented by a <code>QualificationType</code>
         * data structure. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQualificationTypeOutcome CreateQualificationType(const Model::CreateQualificationTypeRequest& request) const;

        /**
         * <p> The <code>CreateQualificationType</code> operation creates a new
         * Qualification type, which is represented by a <code>QualificationType</code>
         * data structure. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateQualificationType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQualificationTypeOutcomeCallable CreateQualificationTypeCallable(const Model::CreateQualificationTypeRequest& request) const;

        /**
         * <p> The <code>CreateQualificationType</code> operation creates a new
         * Qualification type, which is represented by a <code>QualificationType</code>
         * data structure. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateQualificationType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQualificationTypeAsync(const Model::CreateQualificationTypeRequest& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>CreateWorkerBlock</code> operation allows you to prevent a Worker
         * from working on your HITs. For example, you can block a Worker who is producing
         * poor quality work. You can block up to 100,000 Workers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateWorkerBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerBlockOutcome CreateWorkerBlock(const Model::CreateWorkerBlockRequest& request) const;

        /**
         * <p>The <code>CreateWorkerBlock</code> operation allows you to prevent a Worker
         * from working on your HITs. For example, you can block a Worker who is producing
         * poor quality work. You can block up to 100,000 Workers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateWorkerBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkerBlockOutcomeCallable CreateWorkerBlockCallable(const Model::CreateWorkerBlockRequest& request) const;

        /**
         * <p>The <code>CreateWorkerBlock</code> operation allows you to prevent a Worker
         * from working on your HITs. For example, you can block a Worker who is producing
         * poor quality work. You can block up to 100,000 Workers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateWorkerBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkerBlockAsync(const Model::CreateWorkerBlockRequest& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>DeleteHIT</code> operation is used to delete HIT that is no longer
         * needed. Only the Requester who created the HIT can delete it. </p> <p> You can
         * only dispose of HITs that are in the <code>Reviewable</code> state, with all of
         * their submitted assignments already either approved or rejected. If you call the
         * DeleteHIT operation on a HIT that is not in the <code>Reviewable</code> state
         * (for example, that has not expired, or still has active assignments), or on a
         * HIT that is Reviewable but without all of its submitted assignments already
         * approved or rejected, the service will return an error. </p> <note> <ul> <li>
         * <p> HITs are automatically disposed of after 120 days. </p> </li> <li> <p> After
         * you dispose of a HIT, you can no longer approve the HIT's rejected assignments.
         * </p> </li> <li> <p> Disposed HITs are not returned in results for the ListHITs
         * operation. </p> </li> <li> <p> Disposing HITs can improve the performance of
         * operations such as ListReviewableHITs and ListHITs. </p> </li> </ul>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHITOutcome DeleteHIT(const Model::DeleteHITRequest& request) const;

        /**
         * <p> The <code>DeleteHIT</code> operation is used to delete HIT that is no longer
         * needed. Only the Requester who created the HIT can delete it. </p> <p> You can
         * only dispose of HITs that are in the <code>Reviewable</code> state, with all of
         * their submitted assignments already either approved or rejected. If you call the
         * DeleteHIT operation on a HIT that is not in the <code>Reviewable</code> state
         * (for example, that has not expired, or still has active assignments), or on a
         * HIT that is Reviewable but without all of its submitted assignments already
         * approved or rejected, the service will return an error. </p> <note> <ul> <li>
         * <p> HITs are automatically disposed of after 120 days. </p> </li> <li> <p> After
         * you dispose of a HIT, you can no longer approve the HIT's rejected assignments.
         * </p> </li> <li> <p> Disposed HITs are not returned in results for the ListHITs
         * operation. </p> </li> <li> <p> Disposing HITs can improve the performance of
         * operations such as ListReviewableHITs and ListHITs. </p> </li> </ul>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHITOutcomeCallable DeleteHITCallable(const Model::DeleteHITRequest& request) const;

        /**
         * <p> The <code>DeleteHIT</code> operation is used to delete HIT that is no longer
         * needed. Only the Requester who created the HIT can delete it. </p> <p> You can
         * only dispose of HITs that are in the <code>Reviewable</code> state, with all of
         * their submitted assignments already either approved or rejected. If you call the
         * DeleteHIT operation on a HIT that is not in the <code>Reviewable</code> state
         * (for example, that has not expired, or still has active assignments), or on a
         * HIT that is Reviewable but without all of its submitted assignments already
         * approved or rejected, the service will return an error. </p> <note> <ul> <li>
         * <p> HITs are automatically disposed of after 120 days. </p> </li> <li> <p> After
         * you dispose of a HIT, you can no longer approve the HIT's rejected assignments.
         * </p> </li> <li> <p> Disposed HITs are not returned in results for the ListHITs
         * operation. </p> </li> <li> <p> Disposing HITs can improve the performance of
         * operations such as ListReviewableHITs and ListHITs. </p> </li> </ul>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHITAsync(const Model::DeleteHITRequest& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>DeleteQualificationType</code> deletes a Qualification type and
         * deletes any HIT types that are associated with the Qualification type. </p>
         * <p>This operation does not revoke Qualifications already assigned to Workers
         * because the Qualifications might be needed for active HITs. If there are any
         * pending requests for the Qualification type, Amazon Mechanical Turk rejects
         * those requests. After you delete a Qualification type, you can no longer use it
         * to create HITs or HIT types.</p> <note> <p>DeleteQualificationType must wait for
         * all the HITs that use the deleted Qualification type to be deleted before
         * completing. It may take up to 48 hours before DeleteQualificationType completes
         * and the unique name of the Qualification type is available for reuse with
         * CreateQualificationType.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQualificationTypeOutcome DeleteQualificationType(const Model::DeleteQualificationTypeRequest& request) const;

        /**
         * <p> The <code>DeleteQualificationType</code> deletes a Qualification type and
         * deletes any HIT types that are associated with the Qualification type. </p>
         * <p>This operation does not revoke Qualifications already assigned to Workers
         * because the Qualifications might be needed for active HITs. If there are any
         * pending requests for the Qualification type, Amazon Mechanical Turk rejects
         * those requests. After you delete a Qualification type, you can no longer use it
         * to create HITs or HIT types.</p> <note> <p>DeleteQualificationType must wait for
         * all the HITs that use the deleted Qualification type to be deleted before
         * completing. It may take up to 48 hours before DeleteQualificationType completes
         * and the unique name of the Qualification type is available for reuse with
         * CreateQualificationType.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteQualificationType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQualificationTypeOutcomeCallable DeleteQualificationTypeCallable(const Model::DeleteQualificationTypeRequest& request) const;

        /**
         * <p> The <code>DeleteQualificationType</code> deletes a Qualification type and
         * deletes any HIT types that are associated with the Qualification type. </p>
         * <p>This operation does not revoke Qualifications already assigned to Workers
         * because the Qualifications might be needed for active HITs. If there are any
         * pending requests for the Qualification type, Amazon Mechanical Turk rejects
         * those requests. After you delete a Qualification type, you can no longer use it
         * to create HITs or HIT types.</p> <note> <p>DeleteQualificationType must wait for
         * all the HITs that use the deleted Qualification type to be deleted before
         * completing. It may take up to 48 hours before DeleteQualificationType completes
         * and the unique name of the Qualification type is available for reuse with
         * CreateQualificationType.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteQualificationType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQualificationTypeAsync(const Model::DeleteQualificationTypeRequest& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>DeleteWorkerBlock</code> operation allows you to reinstate a
         * blocked Worker to work on your HITs. This operation reverses the effects of the
         * CreateWorkerBlock operation. You need the Worker ID to use this operation. If
         * the Worker ID is missing or invalid, this operation fails and returns the
         * message “WorkerId is invalid.” If the specified Worker is not blocked, this
         * operation returns successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteWorkerBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerBlockOutcome DeleteWorkerBlock(const Model::DeleteWorkerBlockRequest& request) const;

        /**
         * <p>The <code>DeleteWorkerBlock</code> operation allows you to reinstate a
         * blocked Worker to work on your HITs. This operation reverses the effects of the
         * CreateWorkerBlock operation. You need the Worker ID to use this operation. If
         * the Worker ID is missing or invalid, this operation fails and returns the
         * message “WorkerId is invalid.” If the specified Worker is not blocked, this
         * operation returns successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteWorkerBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkerBlockOutcomeCallable DeleteWorkerBlockCallable(const Model::DeleteWorkerBlockRequest& request) const;

        /**
         * <p>The <code>DeleteWorkerBlock</code> operation allows you to reinstate a
         * blocked Worker to work on your HITs. This operation reverses the effects of the
         * CreateWorkerBlock operation. You need the Worker ID to use this operation. If
         * the Worker ID is missing or invalid, this operation fails and returns the
         * message “WorkerId is invalid.” If the specified Worker is not blocked, this
         * operation returns successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteWorkerBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkerBlockAsync(const Model::DeleteWorkerBlockRequest& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>DisassociateQualificationFromWorker</code> revokes a previously
         * granted Qualification from a user. </p> <p> You can provide a text message
         * explaining why the Qualification was revoked. The user who had the Qualification
         * can see this message. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DisassociateQualificationFromWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateQualificationFromWorkerOutcome DisassociateQualificationFromWorker(const Model::DisassociateQualificationFromWorkerRequest& request) const;

        /**
         * <p> The <code>DisassociateQualificationFromWorker</code> revokes a previously
         * granted Qualification from a user. </p> <p> You can provide a text message
         * explaining why the Qualification was revoked. The user who had the Qualification
         * can see this message. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DisassociateQualificationFromWorker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateQualificationFromWorkerOutcomeCallable DisassociateQualificationFromWorkerCallable(const Model::DisassociateQualificationFromWorkerRequest& request) const;

        /**
         * <p> The <code>DisassociateQualificationFromWorker</code> revokes a previously
         * granted Qualification from a user. </p> <p> You can provide a text message
         * explaining why the Qualification was revoked. The user who had the Qualification
         * can see this message. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DisassociateQualificationFromWorker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateQualificationFromWorkerAsync(const Model::DisassociateQualificationFromWorkerRequest& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>GetAccountBalance</code> operation retrieves the amount of money in
         * your Amazon Mechanical Turk account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAccountBalance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountBalanceOutcome GetAccountBalance(const Model::GetAccountBalanceRequest& request) const;

        /**
         * <p>The <code>GetAccountBalance</code> operation retrieves the amount of money in
         * your Amazon Mechanical Turk account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAccountBalance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountBalanceOutcomeCallable GetAccountBalanceCallable(const Model::GetAccountBalanceRequest& request) const;

        /**
         * <p>The <code>GetAccountBalance</code> operation retrieves the amount of money in
         * your Amazon Mechanical Turk account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAccountBalance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountBalanceAsync(const Model::GetAccountBalanceRequest& request, const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>GetAssignment</code> operation retrieves the details of the
         * specified Assignment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssignmentOutcome GetAssignment(const Model::GetAssignmentRequest& request) const;

        /**
         * <p> The <code>GetAssignment</code> operation retrieves the details of the
         * specified Assignment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssignmentOutcomeCallable GetAssignmentCallable(const Model::GetAssignmentRequest& request) const;

        /**
         * <p> The <code>GetAssignment</code> operation retrieves the details of the
         * specified Assignment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssignmentAsync(const Model::GetAssignmentRequest& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>GetFileUploadURL</code> operation generates and returns a
         * temporary URL. You use the temporary URL to retrieve a file uploaded by a Worker
         * as an answer to a FileUploadAnswer question for a HIT. The temporary URL is
         * generated the instant the GetFileUploadURL operation is called, and is valid for
         * 60 seconds. You can get a temporary file upload URL any time until the HIT is
         * disposed. After the HIT is disposed, any uploaded files are deleted, and cannot
         * be retrieved. Pending Deprecation on December 12, 2017. The Answer Specification
         * structure will no longer support the <code>FileUploadAnswer</code> element to be
         * used for the QuestionForm data structure. Instead, we recommend that Requesters
         * who want to create HITs asking Workers to upload files to use Amazon S3.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetFileUploadURL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFileUploadURLOutcome GetFileUploadURL(const Model::GetFileUploadURLRequest& request) const;

        /**
         * <p> The <code>GetFileUploadURL</code> operation generates and returns a
         * temporary URL. You use the temporary URL to retrieve a file uploaded by a Worker
         * as an answer to a FileUploadAnswer question for a HIT. The temporary URL is
         * generated the instant the GetFileUploadURL operation is called, and is valid for
         * 60 seconds. You can get a temporary file upload URL any time until the HIT is
         * disposed. After the HIT is disposed, any uploaded files are deleted, and cannot
         * be retrieved. Pending Deprecation on December 12, 2017. The Answer Specification
         * structure will no longer support the <code>FileUploadAnswer</code> element to be
         * used for the QuestionForm data structure. Instead, we recommend that Requesters
         * who want to create HITs asking Workers to upload files to use Amazon S3.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetFileUploadURL">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFileUploadURLOutcomeCallable GetFileUploadURLCallable(const Model::GetFileUploadURLRequest& request) const;

        /**
         * <p> The <code>GetFileUploadURL</code> operation generates and returns a
         * temporary URL. You use the temporary URL to retrieve a file uploaded by a Worker
         * as an answer to a FileUploadAnswer question for a HIT. The temporary URL is
         * generated the instant the GetFileUploadURL operation is called, and is valid for
         * 60 seconds. You can get a temporary file upload URL any time until the HIT is
         * disposed. After the HIT is disposed, any uploaded files are deleted, and cannot
         * be retrieved. Pending Deprecation on December 12, 2017. The Answer Specification
         * structure will no longer support the <code>FileUploadAnswer</code> element to be
         * used for the QuestionForm data structure. Instead, we recommend that Requesters
         * who want to create HITs asking Workers to upload files to use Amazon S3.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetFileUploadURL">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFileUploadURLAsync(const Model::GetFileUploadURLRequest& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>GetHIT</code> operation retrieves the details of the specified
         * HIT. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHITOutcome GetHIT(const Model::GetHITRequest& request) const;

        /**
         * <p> The <code>GetHIT</code> operation retrieves the details of the specified
         * HIT. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHITOutcomeCallable GetHITCallable(const Model::GetHITRequest& request) const;

        /**
         * <p> The <code>GetHIT</code> operation retrieves the details of the specified
         * HIT. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHITAsync(const Model::GetHITRequest& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>GetQualificationScore</code> operation returns the value of a
         * Worker's Qualification for a given Qualification type. </p> <p> To get a
         * Worker's Qualification, you must know the Worker's ID. The Worker's ID is
         * included in the assignment data returned by the
         * <code>ListAssignmentsForHIT</code> operation. </p> <p>Only the owner of a
         * Qualification type can query the value of a Worker's Qualification of that
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationScore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQualificationScoreOutcome GetQualificationScore(const Model::GetQualificationScoreRequest& request) const;

        /**
         * <p> The <code>GetQualificationScore</code> operation returns the value of a
         * Worker's Qualification for a given Qualification type. </p> <p> To get a
         * Worker's Qualification, you must know the Worker's ID. The Worker's ID is
         * included in the assignment data returned by the
         * <code>ListAssignmentsForHIT</code> operation. </p> <p>Only the owner of a
         * Qualification type can query the value of a Worker's Qualification of that
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationScore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQualificationScoreOutcomeCallable GetQualificationScoreCallable(const Model::GetQualificationScoreRequest& request) const;

        /**
         * <p> The <code>GetQualificationScore</code> operation returns the value of a
         * Worker's Qualification for a given Qualification type. </p> <p> To get a
         * Worker's Qualification, you must know the Worker's ID. The Worker's ID is
         * included in the assignment data returned by the
         * <code>ListAssignmentsForHIT</code> operation. </p> <p>Only the owner of a
         * Qualification type can query the value of a Worker's Qualification of that
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationScore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQualificationScoreAsync(const Model::GetQualificationScoreRequest& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>GetQualificationType</code>operation retrieves information about a
         * Qualification type using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQualificationTypeOutcome GetQualificationType(const Model::GetQualificationTypeRequest& request) const;

        /**
         * <p> The <code>GetQualificationType</code>operation retrieves information about a
         * Qualification type using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQualificationTypeOutcomeCallable GetQualificationTypeCallable(const Model::GetQualificationTypeRequest& request) const;

        /**
         * <p> The <code>GetQualificationType</code>operation retrieves information about a
         * Qualification type using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQualificationTypeAsync(const Model::GetQualificationTypeRequest& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListAssignmentsForHIT</code> operation retrieves completed
         * assignments for a HIT. You can use this operation to retrieve the results for a
         * HIT. </p> <p> You can get assignments for a HIT at any time, even if the HIT is
         * not yet Reviewable. If a HIT requested multiple assignments, and has received
         * some results but has not yet become Reviewable, you can still retrieve the
         * partial results with this operation. </p> <p> Use the AssignmentStatus parameter
         * to control which set of assignments for a HIT are returned. The
         * ListAssignmentsForHIT operation can return submitted assignments awaiting
         * approval, or it can return assignments that have already been approved or
         * rejected. You can set AssignmentStatus=Approved,Rejected to get assignments that
         * have already been approved and rejected together in one result set. </p> <p>
         * Only the Requester who created the HIT can retrieve the assignments for that
         * HIT. </p> <p> Results are sorted and divided into numbered pages and the
         * operation returns a single page of results. You can use the parameters of the
         * operation to control sorting and pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListAssignmentsForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssignmentsForHITOutcome ListAssignmentsForHIT(const Model::ListAssignmentsForHITRequest& request) const;

        /**
         * <p> The <code>ListAssignmentsForHIT</code> operation retrieves completed
         * assignments for a HIT. You can use this operation to retrieve the results for a
         * HIT. </p> <p> You can get assignments for a HIT at any time, even if the HIT is
         * not yet Reviewable. If a HIT requested multiple assignments, and has received
         * some results but has not yet become Reviewable, you can still retrieve the
         * partial results with this operation. </p> <p> Use the AssignmentStatus parameter
         * to control which set of assignments for a HIT are returned. The
         * ListAssignmentsForHIT operation can return submitted assignments awaiting
         * approval, or it can return assignments that have already been approved or
         * rejected. You can set AssignmentStatus=Approved,Rejected to get assignments that
         * have already been approved and rejected together in one result set. </p> <p>
         * Only the Requester who created the HIT can retrieve the assignments for that
         * HIT. </p> <p> Results are sorted and divided into numbered pages and the
         * operation returns a single page of results. You can use the parameters of the
         * operation to control sorting and pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListAssignmentsForHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssignmentsForHITOutcomeCallable ListAssignmentsForHITCallable(const Model::ListAssignmentsForHITRequest& request) const;

        /**
         * <p> The <code>ListAssignmentsForHIT</code> operation retrieves completed
         * assignments for a HIT. You can use this operation to retrieve the results for a
         * HIT. </p> <p> You can get assignments for a HIT at any time, even if the HIT is
         * not yet Reviewable. If a HIT requested multiple assignments, and has received
         * some results but has not yet become Reviewable, you can still retrieve the
         * partial results with this operation. </p> <p> Use the AssignmentStatus parameter
         * to control which set of assignments for a HIT are returned. The
         * ListAssignmentsForHIT operation can return submitted assignments awaiting
         * approval, or it can return assignments that have already been approved or
         * rejected. You can set AssignmentStatus=Approved,Rejected to get assignments that
         * have already been approved and rejected together in one result set. </p> <p>
         * Only the Requester who created the HIT can retrieve the assignments for that
         * HIT. </p> <p> Results are sorted and divided into numbered pages and the
         * operation returns a single page of results. You can use the parameters of the
         * operation to control sorting and pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListAssignmentsForHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssignmentsForHITAsync(const Model::ListAssignmentsForHITRequest& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListBonusPayments</code> operation retrieves the amounts of
         * bonuses you have paid to Workers for a given HIT or assignment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListBonusPayments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBonusPaymentsOutcome ListBonusPayments(const Model::ListBonusPaymentsRequest& request) const;

        /**
         * <p> The <code>ListBonusPayments</code> operation retrieves the amounts of
         * bonuses you have paid to Workers for a given HIT or assignment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListBonusPayments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBonusPaymentsOutcomeCallable ListBonusPaymentsCallable(const Model::ListBonusPaymentsRequest& request) const;

        /**
         * <p> The <code>ListBonusPayments</code> operation retrieves the amounts of
         * bonuses you have paid to Workers for a given HIT or assignment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListBonusPayments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBonusPaymentsAsync(const Model::ListBonusPaymentsRequest& request, const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListHITs</code> operation returns all of a Requester's HITs. The
         * operation returns HITs of any status, except for HITs that have been deleted of
         * with the DeleteHIT operation or that have been auto-deleted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHITsOutcome ListHITs(const Model::ListHITsRequest& request) const;

        /**
         * <p> The <code>ListHITs</code> operation returns all of a Requester's HITs. The
         * operation returns HITs of any status, except for HITs that have been deleted of
         * with the DeleteHIT operation or that have been auto-deleted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHITsOutcomeCallable ListHITsCallable(const Model::ListHITsRequest& request) const;

        /**
         * <p> The <code>ListHITs</code> operation returns all of a Requester's HITs. The
         * operation returns HITs of any status, except for HITs that have been deleted of
         * with the DeleteHIT operation or that have been auto-deleted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHITsAsync(const Model::ListHITsRequest& request, const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListHITsForQualificationType</code> operation returns the HITs
         * that use the given Qualification type for a Qualification requirement. The
         * operation returns HITs of any status, except for HITs that have been deleted
         * with the <code>DeleteHIT</code> operation or that have been auto-deleted.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITsForQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHITsForQualificationTypeOutcome ListHITsForQualificationType(const Model::ListHITsForQualificationTypeRequest& request) const;

        /**
         * <p> The <code>ListHITsForQualificationType</code> operation returns the HITs
         * that use the given Qualification type for a Qualification requirement. The
         * operation returns HITs of any status, except for HITs that have been deleted
         * with the <code>DeleteHIT</code> operation or that have been auto-deleted.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITsForQualificationType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHITsForQualificationTypeOutcomeCallable ListHITsForQualificationTypeCallable(const Model::ListHITsForQualificationTypeRequest& request) const;

        /**
         * <p> The <code>ListHITsForQualificationType</code> operation returns the HITs
         * that use the given Qualification type for a Qualification requirement. The
         * operation returns HITs of any status, except for HITs that have been deleted
         * with the <code>DeleteHIT</code> operation or that have been auto-deleted.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITsForQualificationType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHITsForQualificationTypeAsync(const Model::ListHITsForQualificationTypeRequest& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListQualificationRequests</code> operation retrieves requests for
         * Qualifications of a particular Qualification type. The owner of the
         * Qualification type calls this operation to poll for pending requests, and
         * accepts them using the AcceptQualification operation. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQualificationRequestsOutcome ListQualificationRequests(const Model::ListQualificationRequestsRequest& request) const;

        /**
         * <p> The <code>ListQualificationRequests</code> operation retrieves requests for
         * Qualifications of a particular Qualification type. The owner of the
         * Qualification type calls this operation to poll for pending requests, and
         * accepts them using the AcceptQualification operation. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationRequests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQualificationRequestsOutcomeCallable ListQualificationRequestsCallable(const Model::ListQualificationRequestsRequest& request) const;

        /**
         * <p> The <code>ListQualificationRequests</code> operation retrieves requests for
         * Qualifications of a particular Qualification type. The owner of the
         * Qualification type calls this operation to poll for pending requests, and
         * accepts them using the AcceptQualification operation. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationRequests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQualificationRequestsAsync(const Model::ListQualificationRequestsRequest& request, const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListQualificationTypes</code> operation returns a list of
         * Qualification types, filtered by an optional search term. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQualificationTypesOutcome ListQualificationTypes(const Model::ListQualificationTypesRequest& request) const;

        /**
         * <p> The <code>ListQualificationTypes</code> operation returns a list of
         * Qualification types, filtered by an optional search term. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQualificationTypesOutcomeCallable ListQualificationTypesCallable(const Model::ListQualificationTypesRequest& request) const;

        /**
         * <p> The <code>ListQualificationTypes</code> operation returns a list of
         * Qualification types, filtered by an optional search term. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQualificationTypesAsync(const Model::ListQualificationTypesRequest& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListReviewPolicyResultsForHIT</code> operation retrieves the
         * computed results and the actions taken in the course of executing your Review
         * Policies for a given HIT. For information about how to specify Review Policies
         * when you call CreateHIT, see Review Policies. The ListReviewPolicyResultsForHIT
         * operation can return results for both Assignment-level and HIT-level review
         * results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewPolicyResultsForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReviewPolicyResultsForHITOutcome ListReviewPolicyResultsForHIT(const Model::ListReviewPolicyResultsForHITRequest& request) const;

        /**
         * <p> The <code>ListReviewPolicyResultsForHIT</code> operation retrieves the
         * computed results and the actions taken in the course of executing your Review
         * Policies for a given HIT. For information about how to specify Review Policies
         * when you call CreateHIT, see Review Policies. The ListReviewPolicyResultsForHIT
         * operation can return results for both Assignment-level and HIT-level review
         * results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewPolicyResultsForHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReviewPolicyResultsForHITOutcomeCallable ListReviewPolicyResultsForHITCallable(const Model::ListReviewPolicyResultsForHITRequest& request) const;

        /**
         * <p> The <code>ListReviewPolicyResultsForHIT</code> operation retrieves the
         * computed results and the actions taken in the course of executing your Review
         * Policies for a given HIT. For information about how to specify Review Policies
         * when you call CreateHIT, see Review Policies. The ListReviewPolicyResultsForHIT
         * operation can return results for both Assignment-level and HIT-level review
         * results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewPolicyResultsForHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReviewPolicyResultsForHITAsync(const Model::ListReviewPolicyResultsForHITRequest& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListReviewableHITs</code> operation retrieves the HITs with Status
         * equal to Reviewable or Status equal to Reviewing that belong to the Requester
         * calling the operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewableHITs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReviewableHITsOutcome ListReviewableHITs(const Model::ListReviewableHITsRequest& request) const;

        /**
         * <p> The <code>ListReviewableHITs</code> operation retrieves the HITs with Status
         * equal to Reviewable or Status equal to Reviewing that belong to the Requester
         * calling the operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewableHITs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReviewableHITsOutcomeCallable ListReviewableHITsCallable(const Model::ListReviewableHITsRequest& request) const;

        /**
         * <p> The <code>ListReviewableHITs</code> operation retrieves the HITs with Status
         * equal to Reviewable or Status equal to Reviewing that belong to the Requester
         * calling the operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewableHITs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReviewableHITsAsync(const Model::ListReviewableHITsRequest& request, const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>ListWorkersBlocks</code> operation retrieves a list of Workers who
         * are blocked from working on your HITs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkerBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkerBlocksOutcome ListWorkerBlocks(const Model::ListWorkerBlocksRequest& request) const;

        /**
         * <p>The <code>ListWorkersBlocks</code> operation retrieves a list of Workers who
         * are blocked from working on your HITs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkerBlocks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkerBlocksOutcomeCallable ListWorkerBlocksCallable(const Model::ListWorkerBlocksRequest& request) const;

        /**
         * <p>The <code>ListWorkersBlocks</code> operation retrieves a list of Workers who
         * are blocked from working on your HITs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkerBlocks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkerBlocksAsync(const Model::ListWorkerBlocksRequest& request, const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>ListWorkersWithQualificationType</code> operation returns all of
         * the Workers that have been associated with a given Qualification type.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkersWithQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkersWithQualificationTypeOutcome ListWorkersWithQualificationType(const Model::ListWorkersWithQualificationTypeRequest& request) const;

        /**
         * <p> The <code>ListWorkersWithQualificationType</code> operation returns all of
         * the Workers that have been associated with a given Qualification type.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkersWithQualificationType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkersWithQualificationTypeOutcomeCallable ListWorkersWithQualificationTypeCallable(const Model::ListWorkersWithQualificationTypeRequest& request) const;

        /**
         * <p> The <code>ListWorkersWithQualificationType</code> operation returns all of
         * the Workers that have been associated with a given Qualification type.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkersWithQualificationType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkersWithQualificationTypeAsync(const Model::ListWorkersWithQualificationTypeRequest& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>NotifyWorkers</code> operation sends an email to one or more
         * Workers that you specify with the Worker ID. You can specify up to 100 Worker
         * IDs to send the same message with a single call to the NotifyWorkers operation.
         * The NotifyWorkers operation will send a notification email to a Worker only if
         * you have previously approved or rejected work from the Worker. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/NotifyWorkers">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyWorkersOutcome NotifyWorkers(const Model::NotifyWorkersRequest& request) const;

        /**
         * <p> The <code>NotifyWorkers</code> operation sends an email to one or more
         * Workers that you specify with the Worker ID. You can specify up to 100 Worker
         * IDs to send the same message with a single call to the NotifyWorkers operation.
         * The NotifyWorkers operation will send a notification email to a Worker only if
         * you have previously approved or rejected work from the Worker. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/NotifyWorkers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyWorkersOutcomeCallable NotifyWorkersCallable(const Model::NotifyWorkersRequest& request) const;

        /**
         * <p> The <code>NotifyWorkers</code> operation sends an email to one or more
         * Workers that you specify with the Worker ID. You can specify up to 100 Worker
         * IDs to send the same message with a single call to the NotifyWorkers operation.
         * The NotifyWorkers operation will send a notification email to a Worker only if
         * you have previously approved or rejected work from the Worker. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/NotifyWorkers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyWorkersAsync(const Model::NotifyWorkersRequest& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>RejectAssignment</code> operation rejects the results of a
         * completed assignment. </p> <p> You can include an optional feedback message with
         * the rejection, which the Worker can see in the Status section of the web site.
         * When you include a feedback message with the rejection, it helps the Worker
         * understand why the assignment was rejected, and can improve the quality of the
         * results the Worker submits in the future. </p> <p> Only the Requester who
         * created the HIT can reject an assignment for the HIT. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectAssignmentOutcome RejectAssignment(const Model::RejectAssignmentRequest& request) const;

        /**
         * <p> The <code>RejectAssignment</code> operation rejects the results of a
         * completed assignment. </p> <p> You can include an optional feedback message with
         * the rejection, which the Worker can see in the Status section of the web site.
         * When you include a feedback message with the rejection, it helps the Worker
         * understand why the assignment was rejected, and can improve the quality of the
         * results the Worker submits in the future. </p> <p> Only the Requester who
         * created the HIT can reject an assignment for the HIT. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectAssignment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectAssignmentOutcomeCallable RejectAssignmentCallable(const Model::RejectAssignmentRequest& request) const;

        /**
         * <p> The <code>RejectAssignment</code> operation rejects the results of a
         * completed assignment. </p> <p> You can include an optional feedback message with
         * the rejection, which the Worker can see in the Status section of the web site.
         * When you include a feedback message with the rejection, it helps the Worker
         * understand why the assignment was rejected, and can improve the quality of the
         * results the Worker submits in the future. </p> <p> Only the Requester who
         * created the HIT can reject an assignment for the HIT. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectAssignment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectAssignmentAsync(const Model::RejectAssignmentRequest& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>RejectQualificationRequest</code> operation rejects a user's
         * request for a Qualification. </p> <p> You can provide a text message explaining
         * why the request was rejected. The Worker who made the request can see this
         * message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectQualificationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectQualificationRequestOutcome RejectQualificationRequest(const Model::RejectQualificationRequestRequest& request) const;

        /**
         * <p> The <code>RejectQualificationRequest</code> operation rejects a user's
         * request for a Qualification. </p> <p> You can provide a text message explaining
         * why the request was rejected. The Worker who made the request can see this
         * message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectQualificationRequest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectQualificationRequestOutcomeCallable RejectQualificationRequestCallable(const Model::RejectQualificationRequestRequest& request) const;

        /**
         * <p> The <code>RejectQualificationRequest</code> operation rejects a user's
         * request for a Qualification. </p> <p> You can provide a text message explaining
         * why the request was rejected. The Worker who made the request can see this
         * message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectQualificationRequest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectQualificationRequestAsync(const Model::RejectQualificationRequestRequest& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>SendBonus</code> operation issues a payment of money from your
         * account to a Worker. This payment happens separately from the reward you pay to
         * the Worker when you approve the Worker's assignment. The SendBonus operation
         * requires the Worker's ID and the assignment ID as parameters to initiate payment
         * of the bonus. You must include a message that explains the reason for the bonus
         * payment, as the Worker may not be expecting the payment. Amazon Mechanical Turk
         * collects a fee for bonus payments, similar to the HIT listing fee. This
         * operation fails if your account does not have enough funds to pay for both the
         * bonus and the fees. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendBonus">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBonusOutcome SendBonus(const Model::SendBonusRequest& request) const;

        /**
         * <p> The <code>SendBonus</code> operation issues a payment of money from your
         * account to a Worker. This payment happens separately from the reward you pay to
         * the Worker when you approve the Worker's assignment. The SendBonus operation
         * requires the Worker's ID and the assignment ID as parameters to initiate payment
         * of the bonus. You must include a message that explains the reason for the bonus
         * payment, as the Worker may not be expecting the payment. Amazon Mechanical Turk
         * collects a fee for bonus payments, similar to the HIT listing fee. This
         * operation fails if your account does not have enough funds to pay for both the
         * bonus and the fees. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendBonus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendBonusOutcomeCallable SendBonusCallable(const Model::SendBonusRequest& request) const;

        /**
         * <p> The <code>SendBonus</code> operation issues a payment of money from your
         * account to a Worker. This payment happens separately from the reward you pay to
         * the Worker when you approve the Worker's assignment. The SendBonus operation
         * requires the Worker's ID and the assignment ID as parameters to initiate payment
         * of the bonus. You must include a message that explains the reason for the bonus
         * payment, as the Worker may not be expecting the payment. Amazon Mechanical Turk
         * collects a fee for bonus payments, similar to the HIT listing fee. This
         * operation fails if your account does not have enough funds to pay for both the
         * bonus and the fees. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendBonus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendBonusAsync(const Model::SendBonusRequest& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>SendTestEventNotification</code> operation causes Amazon
         * Mechanical Turk to send a notification message as if a HIT event occurred,
         * according to the provided notification specification. This allows you to test
         * notifications without setting up notifications for a real HIT type and trying to
         * trigger them using the website. When you call this operation, the service
         * attempts to send the test notification immediately. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendTestEventNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTestEventNotificationOutcome SendTestEventNotification(const Model::SendTestEventNotificationRequest& request) const;

        /**
         * <p> The <code>SendTestEventNotification</code> operation causes Amazon
         * Mechanical Turk to send a notification message as if a HIT event occurred,
         * according to the provided notification specification. This allows you to test
         * notifications without setting up notifications for a real HIT type and trying to
         * trigger them using the website. When you call this operation, the service
         * attempts to send the test notification immediately. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendTestEventNotification">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTestEventNotificationOutcomeCallable SendTestEventNotificationCallable(const Model::SendTestEventNotificationRequest& request) const;

        /**
         * <p> The <code>SendTestEventNotification</code> operation causes Amazon
         * Mechanical Turk to send a notification message as if a HIT event occurred,
         * according to the provided notification specification. This allows you to test
         * notifications without setting up notifications for a real HIT type and trying to
         * trigger them using the website. When you call this operation, the service
         * attempts to send the test notification immediately. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendTestEventNotification">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTestEventNotificationAsync(const Model::SendTestEventNotificationRequest& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>UpdateExpirationForHIT</code> operation allows you update the
         * expiration time of a HIT. If you update it to a time in the past, the HIT will
         * be immediately expired. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateExpirationForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExpirationForHITOutcome UpdateExpirationForHIT(const Model::UpdateExpirationForHITRequest& request) const;

        /**
         * <p> The <code>UpdateExpirationForHIT</code> operation allows you update the
         * expiration time of a HIT. If you update it to a time in the past, the HIT will
         * be immediately expired. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateExpirationForHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExpirationForHITOutcomeCallable UpdateExpirationForHITCallable(const Model::UpdateExpirationForHITRequest& request) const;

        /**
         * <p> The <code>UpdateExpirationForHIT</code> operation allows you update the
         * expiration time of a HIT. If you update it to a time in the past, the HIT will
         * be immediately expired. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateExpirationForHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExpirationForHITAsync(const Model::UpdateExpirationForHITRequest& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>UpdateHITReviewStatus</code> operation updates the status of a
         * HIT. If the status is Reviewable, this operation can update the status to
         * Reviewing, or it can revert a Reviewing HIT back to the Reviewable status.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITReviewStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHITReviewStatusOutcome UpdateHITReviewStatus(const Model::UpdateHITReviewStatusRequest& request) const;

        /**
         * <p> The <code>UpdateHITReviewStatus</code> operation updates the status of a
         * HIT. If the status is Reviewable, this operation can update the status to
         * Reviewing, or it can revert a Reviewing HIT back to the Reviewable status.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITReviewStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHITReviewStatusOutcomeCallable UpdateHITReviewStatusCallable(const Model::UpdateHITReviewStatusRequest& request) const;

        /**
         * <p> The <code>UpdateHITReviewStatus</code> operation updates the status of a
         * HIT. If the status is Reviewable, this operation can update the status to
         * Reviewing, or it can revert a Reviewing HIT back to the Reviewable status.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITReviewStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHITReviewStatusAsync(const Model::UpdateHITReviewStatusRequest& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>UpdateHITTypeOfHIT</code> operation allows you to change the
         * HITType properties of a HIT. This operation disassociates the HIT from its old
         * HITType properties and associates it with the new HITType properties. The HIT
         * takes on the properties of the new HITType in place of the old ones.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITTypeOfHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHITTypeOfHITOutcome UpdateHITTypeOfHIT(const Model::UpdateHITTypeOfHITRequest& request) const;

        /**
         * <p> The <code>UpdateHITTypeOfHIT</code> operation allows you to change the
         * HITType properties of a HIT. This operation disassociates the HIT from its old
         * HITType properties and associates it with the new HITType properties. The HIT
         * takes on the properties of the new HITType in place of the old ones.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITTypeOfHIT">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHITTypeOfHITOutcomeCallable UpdateHITTypeOfHITCallable(const Model::UpdateHITTypeOfHITRequest& request) const;

        /**
         * <p> The <code>UpdateHITTypeOfHIT</code> operation allows you to change the
         * HITType properties of a HIT. This operation disassociates the HIT from its old
         * HITType properties and associates it with the new HITType properties. The HIT
         * takes on the properties of the new HITType in place of the old ones.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITTypeOfHIT">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHITTypeOfHITAsync(const Model::UpdateHITTypeOfHITRequest& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>UpdateNotificationSettings</code> operation creates, updates,
         * disables or re-enables notifications for a HIT type. If you call the
         * UpdateNotificationSettings operation for a HIT type that already has a
         * notification specification, the operation replaces the old specification with a
         * new one. You can call the UpdateNotificationSettings operation to enable or
         * disable notifications for the HIT type, without having to modify the
         * notification specification itself by providing updates to the Active status
         * without specifying a new notification specification. To change the Active status
         * of a HIT type's notifications, the HIT type must already have a notification
         * specification, or one must be provided in the same call to
         * <code>UpdateNotificationSettings</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateNotificationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationSettingsOutcome UpdateNotificationSettings(const Model::UpdateNotificationSettingsRequest& request) const;

        /**
         * <p> The <code>UpdateNotificationSettings</code> operation creates, updates,
         * disables or re-enables notifications for a HIT type. If you call the
         * UpdateNotificationSettings operation for a HIT type that already has a
         * notification specification, the operation replaces the old specification with a
         * new one. You can call the UpdateNotificationSettings operation to enable or
         * disable notifications for the HIT type, without having to modify the
         * notification specification itself by providing updates to the Active status
         * without specifying a new notification specification. To change the Active status
         * of a HIT type's notifications, the HIT type must already have a notification
         * specification, or one must be provided in the same call to
         * <code>UpdateNotificationSettings</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateNotificationSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotificationSettingsOutcomeCallable UpdateNotificationSettingsCallable(const Model::UpdateNotificationSettingsRequest& request) const;

        /**
         * <p> The <code>UpdateNotificationSettings</code> operation creates, updates,
         * disables or re-enables notifications for a HIT type. If you call the
         * UpdateNotificationSettings operation for a HIT type that already has a
         * notification specification, the operation replaces the old specification with a
         * new one. You can call the UpdateNotificationSettings operation to enable or
         * disable notifications for the HIT type, without having to modify the
         * notification specification itself by providing updates to the Active status
         * without specifying a new notification specification. To change the Active status
         * of a HIT type's notifications, the HIT type must already have a notification
         * specification, or one must be provided in the same call to
         * <code>UpdateNotificationSettings</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateNotificationSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotificationSettingsAsync(const Model::UpdateNotificationSettingsRequest& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> The <code>UpdateQualificationType</code> operation modifies the attributes
         * of an existing Qualification type, which is represented by a QualificationType
         * data structure. Only the owner of a Qualification type can modify its
         * attributes. </p> <p> Most attributes of a Qualification type can be changed
         * after the type has been created. However, the Name and Keywords fields cannot be
         * modified. The RetryDelayInSeconds parameter can be modified or added to change
         * the delay or to enable retries, but RetryDelayInSeconds cannot be used to
         * disable retries. </p> <p> You can use this operation to update the test for a
         * Qualification type. The test is updated based on the values specified for the
         * Test, TestDurationInSeconds and AnswerKey parameters. All three parameters
         * specify the updated test. If you are updating the test for a type, you must
         * specify the Test and TestDurationInSeconds parameters. The AnswerKey parameter
         * is optional; omitting it specifies that the updated test does not have an answer
         * key. </p> <p> If you omit the Test parameter, the test for the Qualification
         * type is unchanged. There is no way to remove a test from a Qualification type
         * that has one. If the type already has a test, you cannot update it to be
         * AutoGranted. If the Qualification type does not have a test and one is provided
         * by an update, the type will henceforth have a test. </p> <p> If you want to
         * update the test duration or answer key for an existing test without changing the
         * questions, you must specify a Test parameter with the original questions, along
         * with the updated values. </p> <p> If you provide an updated Test but no
         * AnswerKey, the new test will not have an answer key. Requests for such
         * Qualifications must be granted manually. </p> <p> You can also update the
         * AutoGranted and AutoGrantedValue attributes of the Qualification
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQualificationTypeOutcome UpdateQualificationType(const Model::UpdateQualificationTypeRequest& request) const;

        /**
         * <p> The <code>UpdateQualificationType</code> operation modifies the attributes
         * of an existing Qualification type, which is represented by a QualificationType
         * data structure. Only the owner of a Qualification type can modify its
         * attributes. </p> <p> Most attributes of a Qualification type can be changed
         * after the type has been created. However, the Name and Keywords fields cannot be
         * modified. The RetryDelayInSeconds parameter can be modified or added to change
         * the delay or to enable retries, but RetryDelayInSeconds cannot be used to
         * disable retries. </p> <p> You can use this operation to update the test for a
         * Qualification type. The test is updated based on the values specified for the
         * Test, TestDurationInSeconds and AnswerKey parameters. All three parameters
         * specify the updated test. If you are updating the test for a type, you must
         * specify the Test and TestDurationInSeconds parameters. The AnswerKey parameter
         * is optional; omitting it specifies that the updated test does not have an answer
         * key. </p> <p> If you omit the Test parameter, the test for the Qualification
         * type is unchanged. There is no way to remove a test from a Qualification type
         * that has one. If the type already has a test, you cannot update it to be
         * AutoGranted. If the Qualification type does not have a test and one is provided
         * by an update, the type will henceforth have a test. </p> <p> If you want to
         * update the test duration or answer key for an existing test without changing the
         * questions, you must specify a Test parameter with the original questions, along
         * with the updated values. </p> <p> If you provide an updated Test but no
         * AnswerKey, the new test will not have an answer key. Requests for such
         * Qualifications must be granted manually. </p> <p> You can also update the
         * AutoGranted and AutoGrantedValue attributes of the Qualification
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateQualificationType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQualificationTypeOutcomeCallable UpdateQualificationTypeCallable(const Model::UpdateQualificationTypeRequest& request) const;

        /**
         * <p> The <code>UpdateQualificationType</code> operation modifies the attributes
         * of an existing Qualification type, which is represented by a QualificationType
         * data structure. Only the owner of a Qualification type can modify its
         * attributes. </p> <p> Most attributes of a Qualification type can be changed
         * after the type has been created. However, the Name and Keywords fields cannot be
         * modified. The RetryDelayInSeconds parameter can be modified or added to change
         * the delay or to enable retries, but RetryDelayInSeconds cannot be used to
         * disable retries. </p> <p> You can use this operation to update the test for a
         * Qualification type. The test is updated based on the values specified for the
         * Test, TestDurationInSeconds and AnswerKey parameters. All three parameters
         * specify the updated test. If you are updating the test for a type, you must
         * specify the Test and TestDurationInSeconds parameters. The AnswerKey parameter
         * is optional; omitting it specifies that the updated test does not have an answer
         * key. </p> <p> If you omit the Test parameter, the test for the Qualification
         * type is unchanged. There is no way to remove a test from a Qualification type
         * that has one. If the type already has a test, you cannot update it to be
         * AutoGranted. If the Qualification type does not have a test and one is provided
         * by an update, the type will henceforth have a test. </p> <p> If you want to
         * update the test duration or answer key for an existing test without changing the
         * questions, you must specify a Test parameter with the original questions, along
         * with the updated values. </p> <p> If you provide an updated Test but no
         * AnswerKey, the new test will not have an answer key. Requests for such
         * Qualifications must be granted manually. </p> <p> You can also update the
         * AutoGranted and AutoGrantedValue attributes of the Qualification
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateQualificationType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQualificationTypeAsync(const Model::UpdateQualificationTypeRequest& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptQualificationRequestAsyncHelper(const Model::AcceptQualificationRequestRequest& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ApproveAssignmentAsyncHelper(const Model::ApproveAssignmentRequest& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateQualificationWithWorkerAsyncHelper(const Model::AssociateQualificationWithWorkerRequest& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAdditionalAssignmentsForHITAsyncHelper(const Model::CreateAdditionalAssignmentsForHITRequest& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHITAsyncHelper(const Model::CreateHITRequest& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHITTypeAsyncHelper(const Model::CreateHITTypeRequest& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHITWithHITTypeAsyncHelper(const Model::CreateHITWithHITTypeRequest& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQualificationTypeAsyncHelper(const Model::CreateQualificationTypeRequest& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkerBlockAsyncHelper(const Model::CreateWorkerBlockRequest& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHITAsyncHelper(const Model::DeleteHITRequest& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQualificationTypeAsyncHelper(const Model::DeleteQualificationTypeRequest& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkerBlockAsyncHelper(const Model::DeleteWorkerBlockRequest& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateQualificationFromWorkerAsyncHelper(const Model::DisassociateQualificationFromWorkerRequest& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountBalanceAsyncHelper(const Model::GetAccountBalanceRequest& request, const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssignmentAsyncHelper(const Model::GetAssignmentRequest& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFileUploadURLAsyncHelper(const Model::GetFileUploadURLRequest& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHITAsyncHelper(const Model::GetHITRequest& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQualificationScoreAsyncHelper(const Model::GetQualificationScoreRequest& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQualificationTypeAsyncHelper(const Model::GetQualificationTypeRequest& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssignmentsForHITAsyncHelper(const Model::ListAssignmentsForHITRequest& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBonusPaymentsAsyncHelper(const Model::ListBonusPaymentsRequest& request, const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHITsAsyncHelper(const Model::ListHITsRequest& request, const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHITsForQualificationTypeAsyncHelper(const Model::ListHITsForQualificationTypeRequest& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQualificationRequestsAsyncHelper(const Model::ListQualificationRequestsRequest& request, const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQualificationTypesAsyncHelper(const Model::ListQualificationTypesRequest& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReviewPolicyResultsForHITAsyncHelper(const Model::ListReviewPolicyResultsForHITRequest& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReviewableHITsAsyncHelper(const Model::ListReviewableHITsRequest& request, const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkerBlocksAsyncHelper(const Model::ListWorkerBlocksRequest& request, const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkersWithQualificationTypeAsyncHelper(const Model::ListWorkersWithQualificationTypeRequest& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void NotifyWorkersAsyncHelper(const Model::NotifyWorkersRequest& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectAssignmentAsyncHelper(const Model::RejectAssignmentRequest& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectQualificationRequestAsyncHelper(const Model::RejectQualificationRequestRequest& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendBonusAsyncHelper(const Model::SendBonusRequest& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendTestEventNotificationAsyncHelper(const Model::SendTestEventNotificationRequest& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateExpirationForHITAsyncHelper(const Model::UpdateExpirationForHITRequest& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateHITReviewStatusAsyncHelper(const Model::UpdateHITReviewStatusRequest& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateHITTypeOfHITAsyncHelper(const Model::UpdateHITTypeOfHITRequest& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotificationSettingsAsyncHelper(const Model::UpdateNotificationSettingsRequest& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQualificationTypeAsyncHelper(const Model::UpdateQualificationTypeRequest& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MTurk
} // namespace Aws
