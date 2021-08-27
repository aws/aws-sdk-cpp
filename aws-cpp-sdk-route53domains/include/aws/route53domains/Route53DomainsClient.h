/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53domains/model/AcceptDomainTransferFromAnotherAwsAccountResult.h>
#include <aws/route53domains/model/CancelDomainTransferToAnotherAwsAccountResult.h>
#include <aws/route53domains/model/CheckDomainAvailabilityResult.h>
#include <aws/route53domains/model/CheckDomainTransferabilityResult.h>
#include <aws/route53domains/model/DeleteTagsForDomainResult.h>
#include <aws/route53domains/model/DisableDomainAutoRenewResult.h>
#include <aws/route53domains/model/DisableDomainTransferLockResult.h>
#include <aws/route53domains/model/EnableDomainAutoRenewResult.h>
#include <aws/route53domains/model/EnableDomainTransferLockResult.h>
#include <aws/route53domains/model/GetContactReachabilityStatusResult.h>
#include <aws/route53domains/model/GetDomainDetailResult.h>
#include <aws/route53domains/model/GetDomainSuggestionsResult.h>
#include <aws/route53domains/model/GetOperationDetailResult.h>
#include <aws/route53domains/model/ListDomainsResult.h>
#include <aws/route53domains/model/ListOperationsResult.h>
#include <aws/route53domains/model/ListTagsForDomainResult.h>
#include <aws/route53domains/model/RegisterDomainResult.h>
#include <aws/route53domains/model/RejectDomainTransferFromAnotherAwsAccountResult.h>
#include <aws/route53domains/model/RenewDomainResult.h>
#include <aws/route53domains/model/ResendContactReachabilityEmailResult.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeResult.h>
#include <aws/route53domains/model/TransferDomainResult.h>
#include <aws/route53domains/model/TransferDomainToAnotherAwsAccountResult.h>
#include <aws/route53domains/model/UpdateDomainContactResult.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyResult.h>
#include <aws/route53domains/model/UpdateDomainNameserversResult.h>
#include <aws/route53domains/model/UpdateTagsForDomainResult.h>
#include <aws/route53domains/model/ViewBillingResult.h>
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

namespace Route53Domains
{

namespace Model
{
        class AcceptDomainTransferFromAnotherAwsAccountRequest;
        class CancelDomainTransferToAnotherAwsAccountRequest;
        class CheckDomainAvailabilityRequest;
        class CheckDomainTransferabilityRequest;
        class DeleteTagsForDomainRequest;
        class DisableDomainAutoRenewRequest;
        class DisableDomainTransferLockRequest;
        class EnableDomainAutoRenewRequest;
        class EnableDomainTransferLockRequest;
        class GetContactReachabilityStatusRequest;
        class GetDomainDetailRequest;
        class GetDomainSuggestionsRequest;
        class GetOperationDetailRequest;
        class ListDomainsRequest;
        class ListOperationsRequest;
        class ListTagsForDomainRequest;
        class RegisterDomainRequest;
        class RejectDomainTransferFromAnotherAwsAccountRequest;
        class RenewDomainRequest;
        class ResendContactReachabilityEmailRequest;
        class RetrieveDomainAuthCodeRequest;
        class TransferDomainRequest;
        class TransferDomainToAnotherAwsAccountRequest;
        class UpdateDomainContactRequest;
        class UpdateDomainContactPrivacyRequest;
        class UpdateDomainNameserversRequest;
        class UpdateTagsForDomainRequest;
        class ViewBillingRequest;

        typedef Aws::Utils::Outcome<AcceptDomainTransferFromAnotherAwsAccountResult, Route53DomainsError> AcceptDomainTransferFromAnotherAwsAccountOutcome;
        typedef Aws::Utils::Outcome<CancelDomainTransferToAnotherAwsAccountResult, Route53DomainsError> CancelDomainTransferToAnotherAwsAccountOutcome;
        typedef Aws::Utils::Outcome<CheckDomainAvailabilityResult, Route53DomainsError> CheckDomainAvailabilityOutcome;
        typedef Aws::Utils::Outcome<CheckDomainTransferabilityResult, Route53DomainsError> CheckDomainTransferabilityOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsForDomainResult, Route53DomainsError> DeleteTagsForDomainOutcome;
        typedef Aws::Utils::Outcome<DisableDomainAutoRenewResult, Route53DomainsError> DisableDomainAutoRenewOutcome;
        typedef Aws::Utils::Outcome<DisableDomainTransferLockResult, Route53DomainsError> DisableDomainTransferLockOutcome;
        typedef Aws::Utils::Outcome<EnableDomainAutoRenewResult, Route53DomainsError> EnableDomainAutoRenewOutcome;
        typedef Aws::Utils::Outcome<EnableDomainTransferLockResult, Route53DomainsError> EnableDomainTransferLockOutcome;
        typedef Aws::Utils::Outcome<GetContactReachabilityStatusResult, Route53DomainsError> GetContactReachabilityStatusOutcome;
        typedef Aws::Utils::Outcome<GetDomainDetailResult, Route53DomainsError> GetDomainDetailOutcome;
        typedef Aws::Utils::Outcome<GetDomainSuggestionsResult, Route53DomainsError> GetDomainSuggestionsOutcome;
        typedef Aws::Utils::Outcome<GetOperationDetailResult, Route53DomainsError> GetOperationDetailOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, Route53DomainsError> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListOperationsResult, Route53DomainsError> ListOperationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForDomainResult, Route53DomainsError> ListTagsForDomainOutcome;
        typedef Aws::Utils::Outcome<RegisterDomainResult, Route53DomainsError> RegisterDomainOutcome;
        typedef Aws::Utils::Outcome<RejectDomainTransferFromAnotherAwsAccountResult, Route53DomainsError> RejectDomainTransferFromAnotherAwsAccountOutcome;
        typedef Aws::Utils::Outcome<RenewDomainResult, Route53DomainsError> RenewDomainOutcome;
        typedef Aws::Utils::Outcome<ResendContactReachabilityEmailResult, Route53DomainsError> ResendContactReachabilityEmailOutcome;
        typedef Aws::Utils::Outcome<RetrieveDomainAuthCodeResult, Route53DomainsError> RetrieveDomainAuthCodeOutcome;
        typedef Aws::Utils::Outcome<TransferDomainResult, Route53DomainsError> TransferDomainOutcome;
        typedef Aws::Utils::Outcome<TransferDomainToAnotherAwsAccountResult, Route53DomainsError> TransferDomainToAnotherAwsAccountOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainContactResult, Route53DomainsError> UpdateDomainContactOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainContactPrivacyResult, Route53DomainsError> UpdateDomainContactPrivacyOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainNameserversResult, Route53DomainsError> UpdateDomainNameserversOutcome;
        typedef Aws::Utils::Outcome<UpdateTagsForDomainResult, Route53DomainsError> UpdateTagsForDomainOutcome;
        typedef Aws::Utils::Outcome<ViewBillingResult, Route53DomainsError> ViewBillingOutcome;

        typedef std::future<AcceptDomainTransferFromAnotherAwsAccountOutcome> AcceptDomainTransferFromAnotherAwsAccountOutcomeCallable;
        typedef std::future<CancelDomainTransferToAnotherAwsAccountOutcome> CancelDomainTransferToAnotherAwsAccountOutcomeCallable;
        typedef std::future<CheckDomainAvailabilityOutcome> CheckDomainAvailabilityOutcomeCallable;
        typedef std::future<CheckDomainTransferabilityOutcome> CheckDomainTransferabilityOutcomeCallable;
        typedef std::future<DeleteTagsForDomainOutcome> DeleteTagsForDomainOutcomeCallable;
        typedef std::future<DisableDomainAutoRenewOutcome> DisableDomainAutoRenewOutcomeCallable;
        typedef std::future<DisableDomainTransferLockOutcome> DisableDomainTransferLockOutcomeCallable;
        typedef std::future<EnableDomainAutoRenewOutcome> EnableDomainAutoRenewOutcomeCallable;
        typedef std::future<EnableDomainTransferLockOutcome> EnableDomainTransferLockOutcomeCallable;
        typedef std::future<GetContactReachabilityStatusOutcome> GetContactReachabilityStatusOutcomeCallable;
        typedef std::future<GetDomainDetailOutcome> GetDomainDetailOutcomeCallable;
        typedef std::future<GetDomainSuggestionsOutcome> GetDomainSuggestionsOutcomeCallable;
        typedef std::future<GetOperationDetailOutcome> GetOperationDetailOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
        typedef std::future<ListTagsForDomainOutcome> ListTagsForDomainOutcomeCallable;
        typedef std::future<RegisterDomainOutcome> RegisterDomainOutcomeCallable;
        typedef std::future<RejectDomainTransferFromAnotherAwsAccountOutcome> RejectDomainTransferFromAnotherAwsAccountOutcomeCallable;
        typedef std::future<RenewDomainOutcome> RenewDomainOutcomeCallable;
        typedef std::future<ResendContactReachabilityEmailOutcome> ResendContactReachabilityEmailOutcomeCallable;
        typedef std::future<RetrieveDomainAuthCodeOutcome> RetrieveDomainAuthCodeOutcomeCallable;
        typedef std::future<TransferDomainOutcome> TransferDomainOutcomeCallable;
        typedef std::future<TransferDomainToAnotherAwsAccountOutcome> TransferDomainToAnotherAwsAccountOutcomeCallable;
        typedef std::future<UpdateDomainContactOutcome> UpdateDomainContactOutcomeCallable;
        typedef std::future<UpdateDomainContactPrivacyOutcome> UpdateDomainContactPrivacyOutcomeCallable;
        typedef std::future<UpdateDomainNameserversOutcome> UpdateDomainNameserversOutcomeCallable;
        typedef std::future<UpdateTagsForDomainOutcome> UpdateTagsForDomainOutcomeCallable;
        typedef std::future<ViewBillingOutcome> ViewBillingOutcomeCallable;
} // namespace Model

  class Route53DomainsClient;

    typedef std::function<void(const Route53DomainsClient*, const Model::AcceptDomainTransferFromAnotherAwsAccountRequest&, const Model::AcceptDomainTransferFromAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptDomainTransferFromAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::CancelDomainTransferToAnotherAwsAccountRequest&, const Model::CancelDomainTransferToAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDomainTransferToAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::CheckDomainAvailabilityRequest&, const Model::CheckDomainAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckDomainAvailabilityResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::CheckDomainTransferabilityRequest&, const Model::CheckDomainTransferabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckDomainTransferabilityResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DeleteTagsForDomainRequest&, const Model::DeleteTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DisableDomainAutoRenewRequest&, const Model::DisableDomainAutoRenewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDomainAutoRenewResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DisableDomainTransferLockRequest&, const Model::DisableDomainTransferLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDomainTransferLockResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::EnableDomainAutoRenewRequest&, const Model::EnableDomainAutoRenewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDomainAutoRenewResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::EnableDomainTransferLockRequest&, const Model::EnableDomainTransferLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDomainTransferLockResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetContactReachabilityStatusRequest&, const Model::GetContactReachabilityStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactReachabilityStatusResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetDomainDetailRequest&, const Model::GetDomainDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainDetailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetDomainSuggestionsRequest&, const Model::GetDomainSuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainSuggestionsResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetOperationDetailRequest&, const Model::GetOperationDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOperationDetailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOperationsResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListTagsForDomainRequest&, const Model::ListTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RegisterDomainRequest&, const Model::RegisterDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RejectDomainTransferFromAnotherAwsAccountRequest&, const Model::RejectDomainTransferFromAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectDomainTransferFromAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RenewDomainRequest&, const Model::RenewDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenewDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ResendContactReachabilityEmailRequest&, const Model::ResendContactReachabilityEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendContactReachabilityEmailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RetrieveDomainAuthCodeRequest&, const Model::RetrieveDomainAuthCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveDomainAuthCodeResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::TransferDomainRequest&, const Model::TransferDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::TransferDomainToAnotherAwsAccountRequest&, const Model::TransferDomainToAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferDomainToAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainContactRequest&, const Model::UpdateDomainContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainContactResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainContactPrivacyRequest&, const Model::UpdateDomainContactPrivacyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainContactPrivacyResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainNameserversRequest&, const Model::UpdateDomainNameserversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameserversResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateTagsForDomainRequest&, const Model::UpdateTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ViewBillingRequest&, const Model::ViewBillingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ViewBillingResponseReceivedHandler;

  /**
   * <p>Amazon Route 53 API actions let you register domain names and perform related
   * operations.</p>
   */
  class AWS_ROUTE53DOMAINS_API Route53DomainsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53DomainsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~Route53DomainsClient();


        /**
         * <p>Accepts the transfer of a domain from another AWS account to the current AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/AcceptDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptDomainTransferFromAnotherAwsAccountOutcome AcceptDomainTransferFromAnotherAwsAccount(const Model::AcceptDomainTransferFromAnotherAwsAccountRequest& request) const;

        /**
         * <p>Accepts the transfer of a domain from another AWS account to the current AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/AcceptDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptDomainTransferFromAnotherAwsAccountOutcomeCallable AcceptDomainTransferFromAnotherAwsAccountCallable(const Model::AcceptDomainTransferFromAnotherAwsAccountRequest& request) const;

        /**
         * <p>Accepts the transfer of a domain from another AWS account to the current AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/AcceptDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptDomainTransferFromAnotherAwsAccountAsync(const Model::AcceptDomainTransferFromAnotherAwsAccountRequest& request, const AcceptDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the transfer of a domain from the current AWS account to another AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p>  <p>You must cancel the transfer before the other AWS account
         * accepts the transfer using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.</p>
         *  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CancelDomainTransferToAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDomainTransferToAnotherAwsAccountOutcome CancelDomainTransferToAnotherAwsAccount(const Model::CancelDomainTransferToAnotherAwsAccountRequest& request) const;

        /**
         * <p>Cancels the transfer of a domain from the current AWS account to another AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p>  <p>You must cancel the transfer before the other AWS account
         * accepts the transfer using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.</p>
         *  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CancelDomainTransferToAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelDomainTransferToAnotherAwsAccountOutcomeCallable CancelDomainTransferToAnotherAwsAccountCallable(const Model::CancelDomainTransferToAnotherAwsAccountRequest& request) const;

        /**
         * <p>Cancels the transfer of a domain from the current AWS account to another AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p>  <p>You must cancel the transfer before the other AWS account
         * accepts the transfer using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.</p>
         *  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CancelDomainTransferToAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDomainTransferToAnotherAwsAccountAsync(const Model::CancelDomainTransferToAnotherAwsAccountRequest& request, const CancelDomainTransferToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDomainAvailabilityOutcome CheckDomainAvailability(const Model::CheckDomainAvailabilityRequest& request) const;

        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailability">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckDomainAvailabilityOutcomeCallable CheckDomainAvailabilityCallable(const Model::CheckDomainAvailabilityRequest& request) const;

        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailability">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckDomainAvailabilityAsync(const Model::CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks whether a domain name can be transferred to Amazon Route 53.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDomainTransferabilityOutcome CheckDomainTransferability(const Model::CheckDomainTransferabilityRequest& request) const;

        /**
         * <p>Checks whether a domain name can be transferred to Amazon Route 53.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferability">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckDomainTransferabilityOutcomeCallable CheckDomainTransferabilityCallable(const Model::CheckDomainTransferabilityRequest& request) const;

        /**
         * <p>Checks whether a domain name can be transferred to Amazon Route 53.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferability">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckDomainTransferabilityAsync(const Model::CheckDomainTransferabilityRequest& request, const CheckDomainTransferabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteTagsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsForDomainOutcome DeleteTagsForDomain(const Model::DeleteTagsForDomainRequest& request) const;

        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteTagsForDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsForDomainOutcomeCallable DeleteTagsForDomainCallable(const Model::DeleteTagsForDomainRequest& request) const;

        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DeleteTagsForDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsForDomainAsync(const Model::DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainAutoRenew">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDomainAutoRenewOutcome DisableDomainAutoRenew(const Model::DisableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainAutoRenew">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableDomainAutoRenewOutcomeCallable DisableDomainAutoRenewCallable(const Model::DisableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainAutoRenew">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableDomainAutoRenewAsync(const Model::DisableDomainAutoRenewRequest& request, const DisableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation removes the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to allow domain transfers. We
         * recommend you refrain from performing this action unless you intend to transfer
         * the domain to a different registrar. Successful submission returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainTransferLock">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableDomainTransferLockOutcome DisableDomainTransferLock(const Model::DisableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation removes the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to allow domain transfers. We
         * recommend you refrain from performing this action unless you intend to transfer
         * the domain to a different registrar. Successful submission returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainTransferLock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableDomainTransferLockOutcomeCallable DisableDomainTransferLockCallable(const Model::DisableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation removes the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to allow domain transfers. We
         * recommend you refrain from performing this action unless you intend to transfer
         * the domain to a different registrar. Successful submission returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DisableDomainTransferLock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableDomainTransferLockAsync(const Model::DisableDomainTransferLockRequest& request, const DisableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation configures Amazon Route 53 to automatically renew the
         * specified domain before the domain registration expires. The cost of renewing
         * your domain registration is billed to your AWS account.</p> <p>The period during
         * which you can renew a domain name varies by TLD. For a list of TLDs and their
         * renewal policies, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
         * That You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>. Route 53 requires that you renew before the end of the
         * renewal period so we can complete processing before the deadline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainAutoRenew">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDomainAutoRenewOutcome EnableDomainAutoRenew(const Model::EnableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation configures Amazon Route 53 to automatically renew the
         * specified domain before the domain registration expires. The cost of renewing
         * your domain registration is billed to your AWS account.</p> <p>The period during
         * which you can renew a domain name varies by TLD. For a list of TLDs and their
         * renewal policies, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
         * That You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>. Route 53 requires that you renew before the end of the
         * renewal period so we can complete processing before the deadline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainAutoRenew">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableDomainAutoRenewOutcomeCallable EnableDomainAutoRenewCallable(const Model::EnableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation configures Amazon Route 53 to automatically renew the
         * specified domain before the domain registration expires. The cost of renewing
         * your domain registration is billed to your AWS account.</p> <p>The period during
         * which you can renew a domain name varies by TLD. For a list of TLDs and their
         * renewal policies, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
         * That You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>. Route 53 requires that you renew before the end of the
         * renewal period so we can complete processing before the deadline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainAutoRenew">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableDomainAutoRenewAsync(const Model::EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainTransferLock">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableDomainTransferLockOutcome EnableDomainTransferLock(const Model::EnableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainTransferLock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableDomainTransferLockOutcomeCallable EnableDomainTransferLockCallable(const Model::EnableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/EnableDomainTransferLock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableDomainTransferLockAsync(const Model::EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetContactReachabilityStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactReachabilityStatusOutcome GetContactReachabilityStatus(const Model::GetContactReachabilityStatusRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetContactReachabilityStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactReachabilityStatusOutcomeCallable GetContactReachabilityStatusCallable(const Model::GetContactReachabilityStatusRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetContactReachabilityStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactReachabilityStatusAsync(const Model::GetContactReachabilityStatusRequest& request, const GetContactReachabilityStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns detailed information about a specified domain that is
         * associated with the current AWS account. Contact information for the domain is
         * also returned as part of the output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainDetail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainDetailOutcome GetDomainDetail(const Model::GetDomainDetailRequest& request) const;

        /**
         * <p>This operation returns detailed information about a specified domain that is
         * associated with the current AWS account. Contact information for the domain is
         * also returned as part of the output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainDetail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainDetailOutcomeCallable GetDomainDetailCallable(const Model::GetDomainDetailRequest& request) const;

        /**
         * <p>This operation returns detailed information about a specified domain that is
         * associated with the current AWS account. Contact information for the domain is
         * also returned as part of the output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainDetail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainDetailAsync(const Model::GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainSuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainSuggestionsOutcome GetDomainSuggestions(const Model::GetDomainSuggestionsRequest& request) const;

        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainSuggestions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainSuggestionsOutcomeCallable GetDomainSuggestionsCallable(const Model::GetDomainSuggestionsRequest& request) const;

        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainSuggestions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainSuggestionsAsync(const Model::GetDomainSuggestionsRequest& request, const GetDomainSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationDetailOutcome GetOperationDetail(const Model::GetOperationDetailRequest& request) const;

        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationDetailOutcomeCallable GetOperationDetailCallable(const Model::GetOperationDetailRequest& request) const;

        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetOperationDetail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationDetailAsync(const Model::GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all of the operations that return an operation ID
         * and that have ever been performed on domains that were registered by the current
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;

        /**
         * <p>Returns information about all of the operations that return an operation ID
         * and that have ever been performed on domains that were registered by the current
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOperationsOutcomeCallable ListOperationsCallable(const Model::ListOperationsRequest& request) const;

        /**
         * <p>Returns information about all of the operations that return an operation ID
         * and that have ever been performed on domains that were registered by the current
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOperationsAsync(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations might not immediately represent all issued operations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListTagsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForDomainOutcome ListTagsForDomain(const Model::ListTagsForDomainRequest& request) const;

        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations might not immediately represent all issued operations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListTagsForDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForDomainOutcomeCallable ListTagsForDomainCallable(const Model::ListTagsForDomainRequest& request) const;

        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations might not immediately represent all issued operations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListTagsForDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForDomainAsync(const Model::ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation registers a domain. Domains are registered either by Amazon
         * Registrar (for .com, .net, and .org domains) or by our registrar associate,
         * Gandi (for all other domains). For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li> <p>Creates a Route 53 hosted zone that has the
         * same name as the domain. Route 53 assigns four name servers to your hosted zone
         * and automatically updates your domain registration with the names of these name
         * servers.</p> </li> <li> <p>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</p> </li> <li>
         * <p>Optionally enables privacy protection, so WHOIS queries return contact
         * information either for Amazon Registrar (for .com, .net, and .org domains) or
         * for our registrar associate, Gandi (for all other TLDs). If you don't enable
         * privacy protection, WHOIS queries return the information that you entered for
         * the registrant, admin, and tech contacts.</p> </li> <li> <p>If registration is
         * successful, returns an operation ID that you can use to track the progress and
         * completion of the action. If the request is not completed successfully, the
         * domain registrant is notified by email.</p> </li> <li> <p>Charges your AWS
         * account an amount based on the top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RegisterDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDomainOutcome RegisterDomain(const Model::RegisterDomainRequest& request) const;

        /**
         * <p>This operation registers a domain. Domains are registered either by Amazon
         * Registrar (for .com, .net, and .org domains) or by our registrar associate,
         * Gandi (for all other domains). For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li> <p>Creates a Route 53 hosted zone that has the
         * same name as the domain. Route 53 assigns four name servers to your hosted zone
         * and automatically updates your domain registration with the names of these name
         * servers.</p> </li> <li> <p>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</p> </li> <li>
         * <p>Optionally enables privacy protection, so WHOIS queries return contact
         * information either for Amazon Registrar (for .com, .net, and .org domains) or
         * for our registrar associate, Gandi (for all other TLDs). If you don't enable
         * privacy protection, WHOIS queries return the information that you entered for
         * the registrant, admin, and tech contacts.</p> </li> <li> <p>If registration is
         * successful, returns an operation ID that you can use to track the progress and
         * completion of the action. If the request is not completed successfully, the
         * domain registrant is notified by email.</p> </li> <li> <p>Charges your AWS
         * account an amount based on the top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RegisterDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDomainOutcomeCallable RegisterDomainCallable(const Model::RegisterDomainRequest& request) const;

        /**
         * <p>This operation registers a domain. Domains are registered either by Amazon
         * Registrar (for .com, .net, and .org domains) or by our registrar associate,
         * Gandi (for all other domains). For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li> <p>Creates a Route 53 hosted zone that has the
         * same name as the domain. Route 53 assigns four name servers to your hosted zone
         * and automatically updates your domain registration with the names of these name
         * servers.</p> </li> <li> <p>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</p> </li> <li>
         * <p>Optionally enables privacy protection, so WHOIS queries return contact
         * information either for Amazon Registrar (for .com, .net, and .org domains) or
         * for our registrar associate, Gandi (for all other TLDs). If you don't enable
         * privacy protection, WHOIS queries return the information that you entered for
         * the registrant, admin, and tech contacts.</p> </li> <li> <p>If registration is
         * successful, returns an operation ID that you can use to track the progress and
         * completion of the action. If the request is not completed successfully, the
         * domain registrant is notified by email.</p> </li> <li> <p>Charges your AWS
         * account an amount based on the top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RegisterDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDomainAsync(const Model::RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects the transfer of a domain from another AWS account to the current AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectDomainTransferFromAnotherAwsAccountOutcome RejectDomainTransferFromAnotherAwsAccount(const Model::RejectDomainTransferFromAnotherAwsAccountRequest& request) const;

        /**
         * <p>Rejects the transfer of a domain from another AWS account to the current AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectDomainTransferFromAnotherAwsAccountOutcomeCallable RejectDomainTransferFromAnotherAwsAccountCallable(const Model::RejectDomainTransferFromAnotherAwsAccountRequest& request) const;

        /**
         * <p>Rejects the transfer of a domain from another AWS account to the current AWS
         * account. You initiate a transfer between AWS accounts using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectDomainTransferFromAnotherAwsAccountAsync(const Model::RejectDomainTransferFromAnotherAwsAccountRequest& request, const RejectDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation renews a domain for the specified number of years. The cost of
         * renewing your domain is billed to your AWS account.</p> <p>We recommend that you
         * renew your domain several weeks before the expiration date. Some TLD registries
         * delete domains before the expiration date if you haven't renewed far enough in
         * advance. For more information about renewing domain registration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-renew.html">Renewing
         * Registration for a Domain</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RenewDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RenewDomainOutcome RenewDomain(const Model::RenewDomainRequest& request) const;

        /**
         * <p>This operation renews a domain for the specified number of years. The cost of
         * renewing your domain is billed to your AWS account.</p> <p>We recommend that you
         * renew your domain several weeks before the expiration date. Some TLD registries
         * delete domains before the expiration date if you haven't renewed far enough in
         * advance. For more information about renewing domain registration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-renew.html">Renewing
         * Registration for a Domain</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RenewDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RenewDomainOutcomeCallable RenewDomainCallable(const Model::RenewDomainRequest& request) const;

        /**
         * <p>This operation renews a domain for the specified number of years. The cost of
         * renewing your domain is billed to your AWS account.</p> <p>We recommend that you
         * renew your domain several weeks before the expiration date. Some TLD registries
         * delete domains before the expiration date if you haven't renewed far enough in
         * advance. For more information about renewing domain registration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-renew.html">Renewing
         * Registration for a Domain</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RenewDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenewDomainAsync(const Model::RenewDomainRequest& request, const RenewDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ResendContactReachabilityEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendContactReachabilityEmailOutcome ResendContactReachabilityEmail(const Model::ResendContactReachabilityEmailRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ResendContactReachabilityEmail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendContactReachabilityEmailOutcomeCallable ResendContactReachabilityEmailCallable(const Model::ResendContactReachabilityEmailRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ResendContactReachabilityEmail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendContactReachabilityEmailAsync(const Model::ResendContactReachabilityEmailRequest& request, const ResendContactReachabilityEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RetrieveDomainAuthCode">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveDomainAuthCodeOutcome RetrieveDomainAuthCode(const Model::RetrieveDomainAuthCodeRequest& request) const;

        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RetrieveDomainAuthCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveDomainAuthCodeOutcomeCallable RetrieveDomainAuthCodeCallable(const Model::RetrieveDomainAuthCodeRequest& request) const;

        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RetrieveDomainAuthCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveDomainAuthCodeAsync(const Model::RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transfers a domain from another registrar to Amazon Route 53. When the
         * transfer is complete, the domain is registered either with Amazon Registrar (for
         * .com, .net, and .org domains) or with our registrar associate, Gandi (for all
         * other TLDs).</p> <p>For more information about transferring domains, see the
         * following topics:</p> <ul> <li> <p>For transfer requirements, a detailed
         * procedure, and information about viewing the status of a domain that you're
         * transferring to Route 53, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> <li> <p>For information about how to transfer a
         * domain from one AWS account to another, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>For information about how to transfer a domain to another
         * domain registrar, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-from-route-53.html">Transferring
         * a Domain from Amazon Route 53 to Another Registrar</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> </ul> <p>If the registrar for your domain is also
         * the DNS service provider for the domain, we highly recommend that you transfer
         * your DNS service to Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p>  <p>If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</p>  <p>If the transfer is
         * successful, this method returns an operation ID that you can use to track the
         * progress and completion of the action. If the transfer doesn't complete
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferDomainOutcome TransferDomain(const Model::TransferDomainRequest& request) const;

        /**
         * <p>Transfers a domain from another registrar to Amazon Route 53. When the
         * transfer is complete, the domain is registered either with Amazon Registrar (for
         * .com, .net, and .org domains) or with our registrar associate, Gandi (for all
         * other TLDs).</p> <p>For more information about transferring domains, see the
         * following topics:</p> <ul> <li> <p>For transfer requirements, a detailed
         * procedure, and information about viewing the status of a domain that you're
         * transferring to Route 53, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> <li> <p>For information about how to transfer a
         * domain from one AWS account to another, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>For information about how to transfer a domain to another
         * domain registrar, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-from-route-53.html">Transferring
         * a Domain from Amazon Route 53 to Another Registrar</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> </ul> <p>If the registrar for your domain is also
         * the DNS service provider for the domain, we highly recommend that you transfer
         * your DNS service to Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p>  <p>If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</p>  <p>If the transfer is
         * successful, this method returns an operation ID that you can use to track the
         * progress and completion of the action. If the transfer doesn't complete
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferDomainOutcomeCallable TransferDomainCallable(const Model::TransferDomainRequest& request) const;

        /**
         * <p>Transfers a domain from another registrar to Amazon Route 53. When the
         * transfer is complete, the domain is registered either with Amazon Registrar (for
         * .com, .net, and .org domains) or with our registrar associate, Gandi (for all
         * other TLDs).</p> <p>For more information about transferring domains, see the
         * following topics:</p> <ul> <li> <p>For transfer requirements, a detailed
         * procedure, and information about viewing the status of a domain that you're
         * transferring to Route 53, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> <li> <p>For information about how to transfer a
         * domain from one AWS account to another, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>For information about how to transfer a domain to another
         * domain registrar, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-from-route-53.html">Transferring
         * a Domain from Amazon Route 53 to Another Registrar</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> </li> </ul> <p>If the registrar for your domain is also
         * the DNS service provider for the domain, we highly recommend that you transfer
         * your DNS service to Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p>  <p>If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</p>  <p>If the transfer is
         * successful, this method returns an operation ID that you can use to track the
         * progress and completion of the action. If the transfer doesn't complete
         * successfully, the domain registrant will be notified by email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferDomainAsync(const Model::TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transfers a domain from the current AWS account to another AWS account. Note
         * the following:</p> <ul> <li> <p>The AWS account that you're transferring the
         * domain to must accept the transfer. If the other account doesn't accept the
         * transfer within 3 days, we cancel the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> <li> <p>You can cancel the transfer before the other account accepts
         * it. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_CancelDomainTransferToAnotherAwsAccount.html">CancelDomainTransferToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>The other account can reject the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_RejectDomainTransferFromAnotherAwsAccount.html">RejectDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> </ul>  <p>When you transfer a domain from one AWS account
         * to another, Route 53 doesn't transfer the hosted zone that is associated with
         * the domain. DNS resolution isn't affected if the domain and the hosted zone are
         * owned by separate accounts, so transferring the hosted zone is optional. For
         * information about transferring the hosted zone to another AWS account, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/hosted-zones-migrating.html">Migrating
         * a Hosted Zone to a Different AWS Account</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p>  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainToAnotherAwsAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferDomainToAnotherAwsAccountOutcome TransferDomainToAnotherAwsAccount(const Model::TransferDomainToAnotherAwsAccountRequest& request) const;

        /**
         * <p>Transfers a domain from the current AWS account to another AWS account. Note
         * the following:</p> <ul> <li> <p>The AWS account that you're transferring the
         * domain to must accept the transfer. If the other account doesn't accept the
         * transfer within 3 days, we cancel the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> <li> <p>You can cancel the transfer before the other account accepts
         * it. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_CancelDomainTransferToAnotherAwsAccount.html">CancelDomainTransferToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>The other account can reject the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_RejectDomainTransferFromAnotherAwsAccount.html">RejectDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> </ul>  <p>When you transfer a domain from one AWS account
         * to another, Route 53 doesn't transfer the hosted zone that is associated with
         * the domain. DNS resolution isn't affected if the domain and the hosted zone are
         * owned by separate accounts, so transferring the hosted zone is optional. For
         * information about transferring the hosted zone to another AWS account, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/hosted-zones-migrating.html">Migrating
         * a Hosted Zone to a Different AWS Account</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p>  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainToAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferDomainToAnotherAwsAccountOutcomeCallable TransferDomainToAnotherAwsAccountCallable(const Model::TransferDomainToAnotherAwsAccountRequest& request) const;

        /**
         * <p>Transfers a domain from the current AWS account to another AWS account. Note
         * the following:</p> <ul> <li> <p>The AWS account that you're transferring the
         * domain to must accept the transfer. If the other account doesn't accept the
         * transfer within 3 days, we cancel the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> <li> <p>You can cancel the transfer before the other account accepts
         * it. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_CancelDomainTransferToAnotherAwsAccount.html">CancelDomainTransferToAnotherAwsAccount</a>.
         * </p> </li> <li> <p>The other account can reject the transfer. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_RejectDomainTransferFromAnotherAwsAccount.html">RejectDomainTransferFromAnotherAwsAccount</a>.
         * </p> </li> </ul>  <p>When you transfer a domain from one AWS account
         * to another, Route 53 doesn't transfer the hosted zone that is associated with
         * the domain. DNS resolution isn't affected if the domain and the hosted zone are
         * owned by separate accounts, so transferring the hosted zone is optional. For
         * information about transferring the hosted zone to another AWS account, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/hosted-zones-migrating.html">Migrating
         * a Hosted Zone to a Different AWS Account</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p>  <p>Use either <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a>
         * or <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to determine whether the operation succeeded. <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * provides additional information, for example, <code>Domain Transfer from Aws
         * Account 111122223333 has been cancelled</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainToAnotherAwsAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferDomainToAnotherAwsAccountAsync(const Model::TransferDomainToAnotherAwsAccountRequest& request, const TransferDomainToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates the contact information for a particular domain. You
         * must specify information for at least one contact: registrant, administrator, or
         * technical.</p> <p>If the update is successful, this method returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainContactOutcome UpdateDomainContact(const Model::UpdateDomainContactRequest& request) const;

        /**
         * <p>This operation updates the contact information for a particular domain. You
         * must specify information for at least one contact: registrant, administrator, or
         * technical.</p> <p>If the update is successful, this method returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainContactOutcomeCallable UpdateDomainContactCallable(const Model::UpdateDomainContactRequest& request) const;

        /**
         * <p>This operation updates the contact information for a particular domain. You
         * must specify information for at least one contact: registrant, administrator, or
         * technical.</p> <p>If the update is successful, this method returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainContactAsync(const Model::UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * privacy protection is enabled, contact information such as email address is
         * replaced either with contact information for Amazon Registrar (for .com, .net,
         * and .org domains) or with contact information for our registrar associate,
         * Gandi.</p> <p>This operation affects only the contact information for the
         * specified contact type (registrant, administrator, or tech). If the request
         * succeeds, Amazon Route 53 returns an operation ID that you can use with <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to track the progress and completion of the action. If the request doesn't
         * complete successfully, the domain registrant will be notified by email.</p>
         *  <p>By disabling the privacy service via API, you consent to the
         * publication of the contact information provided for this domain via the public
         * WHOIS database. You certify that you are the registrant of this domain name and
         * have the authority to make this decision. You may withdraw your consent at any
         * time by enabling privacy protection using either
         * <code>UpdateDomainContactPrivacy</code> or the Route 53 console. Enabling
         * privacy protection removes the contact information provided for this domain from
         * the WHOIS database. For more information on our privacy practices, see <a
         * href="https://aws.amazon.com/privacy/">https://aws.amazon.com/privacy/</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactPrivacy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainContactPrivacyOutcome UpdateDomainContactPrivacy(const Model::UpdateDomainContactPrivacyRequest& request) const;

        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * privacy protection is enabled, contact information such as email address is
         * replaced either with contact information for Amazon Registrar (for .com, .net,
         * and .org domains) or with contact information for our registrar associate,
         * Gandi.</p> <p>This operation affects only the contact information for the
         * specified contact type (registrant, administrator, or tech). If the request
         * succeeds, Amazon Route 53 returns an operation ID that you can use with <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to track the progress and completion of the action. If the request doesn't
         * complete successfully, the domain registrant will be notified by email.</p>
         *  <p>By disabling the privacy service via API, you consent to the
         * publication of the contact information provided for this domain via the public
         * WHOIS database. You certify that you are the registrant of this domain name and
         * have the authority to make this decision. You may withdraw your consent at any
         * time by enabling privacy protection using either
         * <code>UpdateDomainContactPrivacy</code> or the Route 53 console. Enabling
         * privacy protection removes the contact information provided for this domain from
         * the WHOIS database. For more information on our privacy practices, see <a
         * href="https://aws.amazon.com/privacy/">https://aws.amazon.com/privacy/</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactPrivacy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainContactPrivacyOutcomeCallable UpdateDomainContactPrivacyCallable(const Model::UpdateDomainContactPrivacyRequest& request) const;

        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * privacy protection is enabled, contact information such as email address is
         * replaced either with contact information for Amazon Registrar (for .com, .net,
         * and .org domains) or with contact information for our registrar associate,
         * Gandi.</p> <p>This operation affects only the contact information for the
         * specified contact type (registrant, administrator, or tech). If the request
         * succeeds, Amazon Route 53 returns an operation ID that you can use with <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
         * to track the progress and completion of the action. If the request doesn't
         * complete successfully, the domain registrant will be notified by email.</p>
         *  <p>By disabling the privacy service via API, you consent to the
         * publication of the contact information provided for this domain via the public
         * WHOIS database. You certify that you are the registrant of this domain name and
         * have the authority to make this decision. You may withdraw your consent at any
         * time by enabling privacy protection using either
         * <code>UpdateDomainContactPrivacy</code> or the Route 53 console. Enabling
         * privacy protection removes the contact information provided for this domain from
         * the WHOIS database. For more information on our privacy practices, see <a
         * href="https://aws.amazon.com/privacy/">https://aws.amazon.com/privacy/</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactPrivacy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainContactPrivacyAsync(const Model::UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain.</p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainNameservers">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameserversOutcome UpdateDomainNameservers(const Model::UpdateDomainNameserversRequest& request) const;

        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain.</p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainNameservers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainNameserversOutcomeCallable UpdateDomainNameserversCallable(const Model::UpdateDomainNameserversRequest& request) const;

        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain.</p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainNameservers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainNameserversAsync(const Model::UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateTagsForDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagsForDomainOutcome UpdateTagsForDomain(const Model::UpdateTagsForDomainRequest& request) const;

        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateTagsForDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTagsForDomainOutcomeCallable UpdateTagsForDomainCallable(const Model::UpdateTagsForDomainRequest& request) const;

        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations might not
         * immediately represent all issued operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateTagsForDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTagsForDomainAsync(const Model::UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all the domain-related billing records for the current AWS account
         * for a specified period</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBilling">AWS
         * API Reference</a></p>
         */
        virtual Model::ViewBillingOutcome ViewBilling(const Model::ViewBillingRequest& request) const;

        /**
         * <p>Returns all the domain-related billing records for the current AWS account
         * for a specified period</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBilling">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ViewBillingOutcomeCallable ViewBillingCallable(const Model::ViewBillingRequest& request) const;

        /**
         * <p>Returns all the domain-related billing records for the current AWS account
         * for a specified period</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBilling">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ViewBillingAsync(const Model::ViewBillingRequest& request, const ViewBillingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptDomainTransferFromAnotherAwsAccountAsyncHelper(const Model::AcceptDomainTransferFromAnotherAwsAccountRequest& request, const AcceptDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelDomainTransferToAnotherAwsAccountAsyncHelper(const Model::CancelDomainTransferToAnotherAwsAccountRequest& request, const CancelDomainTransferToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckDomainAvailabilityAsyncHelper(const Model::CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckDomainTransferabilityAsyncHelper(const Model::CheckDomainTransferabilityRequest& request, const CheckDomainTransferabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsForDomainAsyncHelper(const Model::DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableDomainAutoRenewAsyncHelper(const Model::DisableDomainAutoRenewRequest& request, const DisableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableDomainTransferLockAsyncHelper(const Model::DisableDomainTransferLockRequest& request, const DisableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableDomainAutoRenewAsyncHelper(const Model::EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableDomainTransferLockAsyncHelper(const Model::EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactReachabilityStatusAsyncHelper(const Model::GetContactReachabilityStatusRequest& request, const GetContactReachabilityStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainDetailAsyncHelper(const Model::GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainSuggestionsAsyncHelper(const Model::GetDomainSuggestionsRequest& request, const GetDomainSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOperationDetailAsyncHelper(const Model::GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsAsyncHelper(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOperationsAsyncHelper(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForDomainAsyncHelper(const Model::ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterDomainAsyncHelper(const Model::RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RejectDomainTransferFromAnotherAwsAccountAsyncHelper(const Model::RejectDomainTransferFromAnotherAwsAccountRequest& request, const RejectDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RenewDomainAsyncHelper(const Model::RenewDomainRequest& request, const RenewDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResendContactReachabilityEmailAsyncHelper(const Model::ResendContactReachabilityEmailRequest& request, const ResendContactReachabilityEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetrieveDomainAuthCodeAsyncHelper(const Model::RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferDomainAsyncHelper(const Model::TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferDomainToAnotherAwsAccountAsyncHelper(const Model::TransferDomainToAnotherAwsAccountRequest& request, const TransferDomainToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainContactAsyncHelper(const Model::UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainContactPrivacyAsyncHelper(const Model::UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainNameserversAsyncHelper(const Model::UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTagsForDomainAsyncHelper(const Model::UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ViewBillingAsyncHelper(const Model::ViewBillingRequest& request, const ViewBillingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Route53Domains
} // namespace Aws
