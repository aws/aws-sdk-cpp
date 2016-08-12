/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53domains/model/CheckDomainAvailabilityResult.h>
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
#include <aws/route53domains/model/RenewDomainResult.h>
#include <aws/route53domains/model/ResendContactReachabilityEmailResult.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeResult.h>
#include <aws/route53domains/model/TransferDomainResult.h>
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

namespace Route53Domains
{

namespace Model
{
        class CheckDomainAvailabilityRequest;
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
        class RenewDomainRequest;
        class ResendContactReachabilityEmailRequest;
        class RetrieveDomainAuthCodeRequest;
        class TransferDomainRequest;
        class UpdateDomainContactRequest;
        class UpdateDomainContactPrivacyRequest;
        class UpdateDomainNameserversRequest;
        class UpdateTagsForDomainRequest;
        class ViewBillingRequest;

        typedef Aws::Utils::Outcome<CheckDomainAvailabilityResult, Aws::Client::AWSError<Route53DomainsErrors>> CheckDomainAvailabilityOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsForDomainResult, Aws::Client::AWSError<Route53DomainsErrors>> DeleteTagsForDomainOutcome;
        typedef Aws::Utils::Outcome<DisableDomainAutoRenewResult, Aws::Client::AWSError<Route53DomainsErrors>> DisableDomainAutoRenewOutcome;
        typedef Aws::Utils::Outcome<DisableDomainTransferLockResult, Aws::Client::AWSError<Route53DomainsErrors>> DisableDomainTransferLockOutcome;
        typedef Aws::Utils::Outcome<EnableDomainAutoRenewResult, Aws::Client::AWSError<Route53DomainsErrors>> EnableDomainAutoRenewOutcome;
        typedef Aws::Utils::Outcome<EnableDomainTransferLockResult, Aws::Client::AWSError<Route53DomainsErrors>> EnableDomainTransferLockOutcome;
        typedef Aws::Utils::Outcome<GetContactReachabilityStatusResult, Aws::Client::AWSError<Route53DomainsErrors>> GetContactReachabilityStatusOutcome;
        typedef Aws::Utils::Outcome<GetDomainDetailResult, Aws::Client::AWSError<Route53DomainsErrors>> GetDomainDetailOutcome;
        typedef Aws::Utils::Outcome<GetDomainSuggestionsResult, Aws::Client::AWSError<Route53DomainsErrors>> GetDomainSuggestionsOutcome;
        typedef Aws::Utils::Outcome<GetOperationDetailResult, Aws::Client::AWSError<Route53DomainsErrors>> GetOperationDetailOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, Aws::Client::AWSError<Route53DomainsErrors>> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListOperationsResult, Aws::Client::AWSError<Route53DomainsErrors>> ListOperationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForDomainResult, Aws::Client::AWSError<Route53DomainsErrors>> ListTagsForDomainOutcome;
        typedef Aws::Utils::Outcome<RegisterDomainResult, Aws::Client::AWSError<Route53DomainsErrors>> RegisterDomainOutcome;
        typedef Aws::Utils::Outcome<RenewDomainResult, Aws::Client::AWSError<Route53DomainsErrors>> RenewDomainOutcome;
        typedef Aws::Utils::Outcome<ResendContactReachabilityEmailResult, Aws::Client::AWSError<Route53DomainsErrors>> ResendContactReachabilityEmailOutcome;
        typedef Aws::Utils::Outcome<RetrieveDomainAuthCodeResult, Aws::Client::AWSError<Route53DomainsErrors>> RetrieveDomainAuthCodeOutcome;
        typedef Aws::Utils::Outcome<TransferDomainResult, Aws::Client::AWSError<Route53DomainsErrors>> TransferDomainOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainContactResult, Aws::Client::AWSError<Route53DomainsErrors>> UpdateDomainContactOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainContactPrivacyResult, Aws::Client::AWSError<Route53DomainsErrors>> UpdateDomainContactPrivacyOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainNameserversResult, Aws::Client::AWSError<Route53DomainsErrors>> UpdateDomainNameserversOutcome;
        typedef Aws::Utils::Outcome<UpdateTagsForDomainResult, Aws::Client::AWSError<Route53DomainsErrors>> UpdateTagsForDomainOutcome;
        typedef Aws::Utils::Outcome<ViewBillingResult, Aws::Client::AWSError<Route53DomainsErrors>> ViewBillingOutcome;

        typedef std::future<CheckDomainAvailabilityOutcome> CheckDomainAvailabilityOutcomeCallable;
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
        typedef std::future<RenewDomainOutcome> RenewDomainOutcomeCallable;
        typedef std::future<ResendContactReachabilityEmailOutcome> ResendContactReachabilityEmailOutcomeCallable;
        typedef std::future<RetrieveDomainAuthCodeOutcome> RetrieveDomainAuthCodeOutcomeCallable;
        typedef std::future<TransferDomainOutcome> TransferDomainOutcomeCallable;
        typedef std::future<UpdateDomainContactOutcome> UpdateDomainContactOutcomeCallable;
        typedef std::future<UpdateDomainContactPrivacyOutcome> UpdateDomainContactPrivacyOutcomeCallable;
        typedef std::future<UpdateDomainNameserversOutcome> UpdateDomainNameserversOutcomeCallable;
        typedef std::future<UpdateTagsForDomainOutcome> UpdateTagsForDomainOutcomeCallable;
        typedef std::future<ViewBillingOutcome> ViewBillingOutcomeCallable;
} // namespace Model

  class Route53DomainsClient;

    typedef std::function<void(const Route53DomainsClient*, const Model::CheckDomainAvailabilityRequest&, const Model::CheckDomainAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckDomainAvailabilityResponseReceivedHandler;
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
    typedef std::function<void(const Route53DomainsClient*, const Model::RenewDomainRequest&, const Model::RenewDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenewDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ResendContactReachabilityEmailRequest&, const Model::ResendContactReachabilityEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendContactReachabilityEmailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RetrieveDomainAuthCodeRequest&, const Model::RetrieveDomainAuthCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveDomainAuthCodeResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::TransferDomainRequest&, const Model::TransferDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainContactRequest&, const Model::UpdateDomainContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainContactResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainContactPrivacyRequest&, const Model::UpdateDomainContactPrivacyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainContactPrivacyResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainNameserversRequest&, const Model::UpdateDomainNameserversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameserversResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateTagsForDomainRequest&, const Model::UpdateTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ViewBillingRequest&, const Model::ViewBillingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ViewBillingResponseReceivedHandler;

  class AWS_ROUTE53DOMAINS_API Route53DomainsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53DomainsClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53DomainsClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~Route53DomainsClient();

        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p>
         */
        virtual Model::CheckDomainAvailabilityOutcome CheckDomainAvailability(const Model::CheckDomainAvailabilityRequest& request) const;

        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckDomainAvailabilityOutcomeCallable CheckDomainAvailabilityCallable(const Model::CheckDomainAvailabilityRequest& request) const;

        /**
         * <p>This operation checks the availability of one domain name. Note that if the
         * availability status of a domain is pending, you must submit another request to
         * determine the availability of the domain name.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckDomainAvailabilityAsync(const Model::CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations may not immediately
         * represent all issued operations.</p>
         */
        virtual Model::DeleteTagsForDomainOutcome DeleteTagsForDomain(const Model::DeleteTagsForDomainRequest& request) const;

        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations may not immediately
         * represent all issued operations.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsForDomainOutcomeCallable DeleteTagsForDomainCallable(const Model::DeleteTagsForDomainRequest& request) const;

        /**
         * <p>This operation deletes the specified tags for a domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations may not immediately
         * represent all issued operations.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsForDomainAsync(const Model::DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p>
         */
        virtual Model::DisableDomainAutoRenewOutcome DisableDomainAutoRenew(const Model::DisableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableDomainAutoRenewOutcomeCallable DisableDomainAutoRenewCallable(const Model::DisableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation disables automatic renewal of domain registration for the
         * specified domain.</p>
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
         * email.</p>
         */
        virtual Model::DisableDomainTransferLockOutcome DisableDomainTransferLock(const Model::DisableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation removes the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to allow domain transfers. We
         * recommend you refrain from performing this action unless you intend to transfer
         * the domain to a different registrar. Successful submission returns an operation
         * ID that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p>
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
         * email.</p>
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
         * href="http://wiki.gandi.net/en/domains/renew#renewal_restoration_and_deletion_times">"Renewal,
         * restoration, and deletion times"</a> on the website for our registrar partner,
         * Gandi. Route 53 requires that you renew before the end of the renewal period
         * that is listed on the Gandi website so we can complete processing before the
         * deadline.</p>
         */
        virtual Model::EnableDomainAutoRenewOutcome EnableDomainAutoRenew(const Model::EnableDomainAutoRenewRequest& request) const;

        /**
         * <p>This operation configures Amazon Route 53 to automatically renew the
         * specified domain before the domain registration expires. The cost of renewing
         * your domain registration is billed to your AWS account.</p> <p>The period during
         * which you can renew a domain name varies by TLD. For a list of TLDs and their
         * renewal policies, see <a
         * href="http://wiki.gandi.net/en/domains/renew#renewal_restoration_and_deletion_times">"Renewal,
         * restoration, and deletion times"</a> on the website for our registrar partner,
         * Gandi. Route 53 requires that you renew before the end of the renewal period
         * that is listed on the Gandi website so we can complete processing before the
         * deadline.</p>
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
         * href="http://wiki.gandi.net/en/domains/renew#renewal_restoration_and_deletion_times">"Renewal,
         * restoration, and deletion times"</a> on the website for our registrar partner,
         * Gandi. Route 53 requires that you renew before the end of the renewal period
         * that is listed on the Gandi website so we can complete processing before the
         * deadline.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableDomainAutoRenewAsync(const Model::EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p>
         */
        virtual Model::EnableDomainTransferLockOutcome EnableDomainTransferLock(const Model::EnableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableDomainTransferLockOutcomeCallable EnableDomainTransferLockCallable(const Model::EnableDomainTransferLockRequest& request) const;

        /**
         * <p>This operation sets the transfer lock on the domain (specifically the
         * <code>clientTransferProhibited</code> status) to prevent domain transfers.
         * Successful submission returns an operation ID that you can use to track the
         * progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableDomainTransferLockAsync(const Model::EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p>
         */
        virtual Model::GetContactReachabilityStatusOutcome GetContactReachabilityStatus(const Model::GetContactReachabilityStatusRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactReachabilityStatusOutcomeCallable GetContactReachabilityStatusCallable(const Model::GetContactReachabilityStatusRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * returns information about whether the registrant contact has responded.</p>
         * <p>If you want us to resend the email, use the
         * <code>ResendContactReachabilityEmail</code> operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactReachabilityStatusAsync(const Model::GetContactReachabilityStatusRequest& request, const GetContactReachabilityStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns detailed information about the domain. The domain's
         * contact information is also returned as part of the output.</p>
         */
        virtual Model::GetDomainDetailOutcome GetDomainDetail(const Model::GetDomainDetailRequest& request) const;

        /**
         * <p>This operation returns detailed information about the domain. The domain's
         * contact information is also returned as part of the output.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainDetailOutcomeCallable GetDomainDetailCallable(const Model::GetDomainDetailRequest& request) const;

        /**
         * <p>This operation returns detailed information about the domain. The domain's
         * contact information is also returned as part of the output.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainDetailAsync(const Model::GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain names
         * given a string, which can either be a domain name or simply a word or phrase
         * (without spaces).</p> <p> Parameters: <ul><li>DomainName (string): The basis for
         * your domain suggestion search, a string with (or without) top-level domain
         * specified.</li> <li>SuggestionCount (int): The number of domain suggestions to
         * be returned, maximum 50, minimum 1.</li> <li>OnlyAvailable (bool): If true,
         * availability check will be performed on suggestion results, and only available
         * domains will be returned. If false, suggestions will be returned without
         * checking whether the domain is actually available, and caller will have to call
         * checkDomainAvailability for each suggestion to determine availability for
         * registration.</li> </ul> </p>
         */
        virtual Model::GetDomainSuggestionsOutcome GetDomainSuggestions(const Model::GetDomainSuggestionsRequest& request) const;

        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain names
         * given a string, which can either be a domain name or simply a word or phrase
         * (without spaces).</p> <p> Parameters: <ul><li>DomainName (string): The basis for
         * your domain suggestion search, a string with (or without) top-level domain
         * specified.</li> <li>SuggestionCount (int): The number of domain suggestions to
         * be returned, maximum 50, minimum 1.</li> <li>OnlyAvailable (bool): If true,
         * availability check will be performed on suggestion results, and only available
         * domains will be returned. If false, suggestions will be returned without
         * checking whether the domain is actually available, and caller will have to call
         * checkDomainAvailability for each suggestion to determine availability for
         * registration.</li> </ul> </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainSuggestionsOutcomeCallable GetDomainSuggestionsCallable(const Model::GetDomainSuggestionsRequest& request) const;

        /**
         * <p>The GetDomainSuggestions operation returns a list of suggested domain names
         * given a string, which can either be a domain name or simply a word or phrase
         * (without spaces).</p> <p> Parameters: <ul><li>DomainName (string): The basis for
         * your domain suggestion search, a string with (or without) top-level domain
         * specified.</li> <li>SuggestionCount (int): The number of domain suggestions to
         * be returned, maximum 50, minimum 1.</li> <li>OnlyAvailable (bool): If true,
         * availability check will be performed on suggestion results, and only available
         * domains will be returned. If false, suggestions will be returned without
         * checking whether the domain is actually available, and caller will have to call
         * checkDomainAvailability for each suggestion to determine availability for
         * registration.</li> </ul> </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainSuggestionsAsync(const Model::GetDomainSuggestionsRequest& request, const GetDomainSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p>
         */
        virtual Model::GetOperationDetailOutcome GetOperationDetail(const Model::GetOperationDetailRequest& request) const;

        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationDetailOutcomeCallable GetOperationDetailCallable(const Model::GetOperationDetailRequest& request) const;

        /**
         * <p>This operation returns the current status of an operation that is not
         * completed.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationDetailAsync(const Model::GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current AWS account.</p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * <p>This operation returns all the domain names registered with Amazon Route 53
         * for the current AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns the operation IDs of operations that are not yet
         * complete.</p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;

        /**
         * <p>This operation returns the operation IDs of operations that are not yet
         * complete.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOperationsOutcomeCallable ListOperationsCallable(const Model::ListOperationsRequest& request) const;

        /**
         * <p>This operation returns the operation IDs of operations that are not yet
         * complete.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOperationsAsync(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations may not immediately represent all issued operations.</p>
         */
        virtual Model::ListTagsForDomainOutcome ListTagsForDomain(const Model::ListTagsForDomainRequest& request) const;

        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations may not immediately represent all issued operations.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForDomainOutcomeCallable ListTagsForDomainCallable(const Model::ListTagsForDomainRequest& request) const;

        /**
         * <p>This operation returns all of the tags that are associated with the specified
         * domain.</p> <p>All tag operations are eventually consistent; subsequent
         * operations may not immediately represent all issued operations.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForDomainAsync(const Model::ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation registers a domain. Domains are registered by the AWS
         * registrar partner, Gandi. For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li>Creates a Amazon Route 53 hosted zone that has
         * the same name as the domain. Amazon Route 53 assigns four name servers to your
         * hosted zone and automatically updates your domain registration with the names of
         * these name servers.</li> <li>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</li> <li>Optionally enables
         * privacy protection, so WHOIS queries return contact information for our
         * registrar partner, Gandi, instead of the information you entered for registrant,
         * admin, and tech contacts.</li> <li>If registration is successful, returns an
         * operation ID that you can use to track the progress and completion of the
         * action. If the request is not completed successfully, the domain registrant is
         * notified by email.</li> <li>Charges your AWS account an amount based on the
         * top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</li>
         * </ul>
         */
        virtual Model::RegisterDomainOutcome RegisterDomain(const Model::RegisterDomainRequest& request) const;

        /**
         * <p>This operation registers a domain. Domains are registered by the AWS
         * registrar partner, Gandi. For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li>Creates a Amazon Route 53 hosted zone that has
         * the same name as the domain. Amazon Route 53 assigns four name servers to your
         * hosted zone and automatically updates your domain registration with the names of
         * these name servers.</li> <li>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</li> <li>Optionally enables
         * privacy protection, so WHOIS queries return contact information for our
         * registrar partner, Gandi, instead of the information you entered for registrant,
         * admin, and tech contacts.</li> <li>If registration is successful, returns an
         * operation ID that you can use to track the progress and completion of the
         * action. If the request is not completed successfully, the domain registrant is
         * notified by email.</li> <li>Charges your AWS account an amount based on the
         * top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</li>
         * </ul>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDomainOutcomeCallable RegisterDomainCallable(const Model::RegisterDomainRequest& request) const;

        /**
         * <p>This operation registers a domain. Domains are registered by the AWS
         * registrar partner, Gandi. For some top-level domains (TLDs), this operation
         * requires extra parameters.</p> <p>When you register a domain, Amazon Route 53
         * does the following:</p> <ul> <li>Creates a Amazon Route 53 hosted zone that has
         * the same name as the domain. Amazon Route 53 assigns four name servers to your
         * hosted zone and automatically updates your domain registration with the names of
         * these name servers.</li> <li>Enables autorenew, so your domain registration will
         * renew automatically each year. We'll notify you in advance of the renewal date
         * so you can choose whether to renew the registration.</li> <li>Optionally enables
         * privacy protection, so WHOIS queries return contact information for our
         * registrar partner, Gandi, instead of the information you entered for registrant,
         * admin, and tech contacts.</li> <li>If registration is successful, returns an
         * operation ID that you can use to track the progress and completion of the
         * action. If the request is not completed successfully, the domain registrant is
         * notified by email.</li> <li>Charges your AWS account an amount based on the
         * top-level domain. For more information, see <a
         * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53 Pricing</a>.</li>
         * </ul>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDomainAsync(const Model::RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation renews a domain for the specified number of years. The cost of
         * renewing your domain is billed to your AWS account.</p> <p>We recommend that you
         * renew your domain several weeks before the expiration date. Some TLD registries
         * delete domains before the expiration date if you haven't renewed far enough in
         * advance. For more information about renewing domain registration, see <a
         * href="http://docs.aws.amazon.com/console/route53/domain-renew">Renewing
         * Registration for a Domain</a> in the Amazon Route 53 documentation.</p>
         */
        virtual Model::RenewDomainOutcome RenewDomain(const Model::RenewDomainRequest& request) const;

        /**
         * <p>This operation renews a domain for the specified number of years. The cost of
         * renewing your domain is billed to your AWS account.</p> <p>We recommend that you
         * renew your domain several weeks before the expiration date. Some TLD registries
         * delete domains before the expiration date if you haven't renewed far enough in
         * advance. For more information about renewing domain registration, see <a
         * href="http://docs.aws.amazon.com/console/route53/domain-renew">Renewing
         * Registration for a Domain</a> in the Amazon Route 53 documentation.</p>
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
         * href="http://docs.aws.amazon.com/console/route53/domain-renew">Renewing
         * Registration for a Domain</a> in the Amazon Route 53 documentation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenewDomainAsync(const Model::RenewDomainRequest& request, const RenewDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact. </p>
         */
        virtual Model::ResendContactReachabilityEmailOutcome ResendContactReachabilityEmail(const Model::ResendContactReachabilityEmailRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendContactReachabilityEmailOutcomeCallable ResendContactReachabilityEmailCallable(const Model::ResendContactReachabilityEmailRequest& request) const;

        /**
         * <p>For operations that require confirmation that the email address for the
         * registrant contact is valid, such as registering a new domain, this operation
         * resends the confirmation email to the current email address for the registrant
         * contact. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendContactReachabilityEmailAsync(const Model::ResendContactReachabilityEmailRequest& request, const ResendContactReachabilityEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p>
         */
        virtual Model::RetrieveDomainAuthCodeOutcome RetrieveDomainAuthCode(const Model::RetrieveDomainAuthCodeRequest& request) const;

        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveDomainAuthCodeOutcomeCallable RetrieveDomainAuthCodeCallable(const Model::RetrieveDomainAuthCodeRequest& request) const;

        /**
         * <p>This operation returns the AuthCode for the domain. To transfer a domain to
         * another registrar, you provide this value to the new registrar.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveDomainAuthCodeAsync(const Model::RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation transfers a domain from another registrar to Amazon Route 53.
         * When the transfer is complete, the domain is registered with the AWS registrar
         * partner, Gandi.</p> <p>For transfer requirements, a detailed procedure, and
         * information about viewing the status of a domain transfer, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the Amazon Route 53
         * Developer Guide.</p> <p>If the registrar for your domain is also the DNS service
         * provider for the domain, we highly recommend that you consider transferring your
         * DNS service to Amazon Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p> <note>Caution! If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</note> <p>If the transfer is successful, this
         * method returns an operation ID that you can use to track the progress and
         * completion of the action. If the transfer doesn't complete successfully, the
         * domain registrant will be notified by email.</p>
         */
        virtual Model::TransferDomainOutcome TransferDomain(const Model::TransferDomainRequest& request) const;

        /**
         * <p>This operation transfers a domain from another registrar to Amazon Route 53.
         * When the transfer is complete, the domain is registered with the AWS registrar
         * partner, Gandi.</p> <p>For transfer requirements, a detailed procedure, and
         * information about viewing the status of a domain transfer, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the Amazon Route 53
         * Developer Guide.</p> <p>If the registrar for your domain is also the DNS service
         * provider for the domain, we highly recommend that you consider transferring your
         * DNS service to Amazon Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p> <note>Caution! If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</note> <p>If the transfer is successful, this
         * method returns an operation ID that you can use to track the progress and
         * completion of the action. If the transfer doesn't complete successfully, the
         * domain registrant will be notified by email.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferDomainOutcomeCallable TransferDomainCallable(const Model::TransferDomainRequest& request) const;

        /**
         * <p>This operation transfers a domain from another registrar to Amazon Route 53.
         * When the transfer is complete, the domain is registered with the AWS registrar
         * partner, Gandi.</p> <p>For transfer requirements, a detailed procedure, and
         * information about viewing the status of a domain transfer, see <a
         * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
         * Registration for a Domain to Amazon Route 53</a> in the Amazon Route 53
         * Developer Guide.</p> <p>If the registrar for your domain is also the DNS service
         * provider for the domain, we highly recommend that you consider transferring your
         * DNS service to Amazon Route 53 or to another DNS service provider before you
         * transfer your registration. Some registrars provide free DNS service when you
         * purchase a domain registration. When you transfer the registration, the previous
         * registrar will not renew your domain registration and could end your DNS service
         * at any time.</p> <note>Caution! If the registrar for your domain is also the DNS
         * service provider for the domain and you don't transfer DNS service to another
         * provider, your website, email, and the web applications associated with the
         * domain might become unavailable.</note> <p>If the transfer is successful, this
         * method returns an operation ID that you can use to track the progress and
         * completion of the action. If the transfer doesn't complete successfully, the
         * domain registrant will be notified by email.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferDomainAsync(const Model::TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates the contact information for a particular domain.
         * Information for at least one contact (registrant, administrator, or technical)
         * must be supplied for update.</p> <p>If the update is successful, this method
         * returns an operation ID that you can use to track the progress and completion of
         * the action. If the request is not completed successfully, the domain registrant
         * will be notified by email.</p>
         */
        virtual Model::UpdateDomainContactOutcome UpdateDomainContact(const Model::UpdateDomainContactRequest& request) const;

        /**
         * <p>This operation updates the contact information for a particular domain.
         * Information for at least one contact (registrant, administrator, or technical)
         * must be supplied for update.</p> <p>If the update is successful, this method
         * returns an operation ID that you can use to track the progress and completion of
         * the action. If the request is not completed successfully, the domain registrant
         * will be notified by email.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainContactOutcomeCallable UpdateDomainContactCallable(const Model::UpdateDomainContactRequest& request) const;

        /**
         * <p>This operation updates the contact information for a particular domain.
         * Information for at least one contact (registrant, administrator, or technical)
         * must be supplied for update.</p> <p>If the update is successful, this method
         * returns an operation ID that you can use to track the progress and completion of
         * the action. If the request is not completed successfully, the domain registrant
         * will be notified by email.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainContactAsync(const Model::UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * the privacy option is enabled, personal information such as postal or email
         * address is hidden from the results of a public WHOIS query. The privacy services
         * are provided by the AWS registrar, Gandi. For more information, see the <a
         * href="http://www.gandi.net/domain/whois/?currency=USD&amp;amp;lang=en">Gandi
         * privacy features</a>.</p> <p>This operation only affects the privacy of the
         * specified contact type (registrant, administrator, or tech). Successful
         * acceptance returns an operation ID that you can use with GetOperationDetail to
         * track the progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p>
         */
        virtual Model::UpdateDomainContactPrivacyOutcome UpdateDomainContactPrivacy(const Model::UpdateDomainContactPrivacyRequest& request) const;

        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * the privacy option is enabled, personal information such as postal or email
         * address is hidden from the results of a public WHOIS query. The privacy services
         * are provided by the AWS registrar, Gandi. For more information, see the <a
         * href="http://www.gandi.net/domain/whois/?currency=USD&amp;amp;lang=en">Gandi
         * privacy features</a>.</p> <p>This operation only affects the privacy of the
         * specified contact type (registrant, administrator, or tech). Successful
         * acceptance returns an operation ID that you can use with GetOperationDetail to
         * track the progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainContactPrivacyOutcomeCallable UpdateDomainContactPrivacyCallable(const Model::UpdateDomainContactPrivacyRequest& request) const;

        /**
         * <p>This operation updates the specified domain contact's privacy setting. When
         * the privacy option is enabled, personal information such as postal or email
         * address is hidden from the results of a public WHOIS query. The privacy services
         * are provided by the AWS registrar, Gandi. For more information, see the <a
         * href="http://www.gandi.net/domain/whois/?currency=USD&amp;amp;lang=en">Gandi
         * privacy features</a>.</p> <p>This operation only affects the privacy of the
         * specified contact type (registrant, administrator, or tech). Successful
         * acceptance returns an operation ID that you can use with GetOperationDetail to
         * track the progress and completion of the action. If the request is not completed
         * successfully, the domain registrant will be notified by email.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainContactPrivacyAsync(const Model::UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain. </p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p>
         */
        virtual Model::UpdateDomainNameserversOutcome UpdateDomainNameservers(const Model::UpdateDomainNameserversRequest& request) const;

        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain. </p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainNameserversOutcomeCallable UpdateDomainNameserversCallable(const Model::UpdateDomainNameserversRequest& request) const;

        /**
         * <p>This operation replaces the current set of name servers for the domain with
         * the specified set of name servers. If you use Amazon Route 53 as your DNS
         * service, specify the four name servers in the delegation set for the hosted zone
         * for the domain. </p> <p>If successful, this operation returns an operation ID
         * that you can use to track the progress and completion of the action. If the
         * request is not completed successfully, the domain registrant will be notified by
         * email.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainNameserversAsync(const Model::UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations may not immediately
         * represent all issued operations.</p>
         */
        virtual Model::UpdateTagsForDomainOutcome UpdateTagsForDomain(const Model::UpdateTagsForDomainRequest& request) const;

        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations may not immediately
         * represent all issued operations.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTagsForDomainOutcomeCallable UpdateTagsForDomainCallable(const Model::UpdateTagsForDomainRequest& request) const;

        /**
         * <p>This operation adds or updates tags for a specified domain.</p> <p>All tag
         * operations are eventually consistent; subsequent operations may not immediately
         * represent all issued operations.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTagsForDomainAsync(const Model::UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation returns all the domain-related billing records for the current
         * AWS account for a specified period</p>
         */
        virtual Model::ViewBillingOutcome ViewBilling(const Model::ViewBillingRequest& request) const;

        /**
         * <p>This operation returns all the domain-related billing records for the current
         * AWS account for a specified period</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ViewBillingOutcomeCallable ViewBillingCallable(const Model::ViewBillingRequest& request) const;

        /**
         * <p>This operation returns all the domain-related billing records for the current
         * AWS account for a specified period</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ViewBillingAsync(const Model::ViewBillingRequest& request, const ViewBillingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CheckDomainAvailabilityAsyncHelper(const Model::CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void RenewDomainAsyncHelper(const Model::RenewDomainRequest& request, const RenewDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResendContactReachabilityEmailAsyncHelper(const Model::ResendContactReachabilityEmailRequest& request, const ResendContactReachabilityEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetrieveDomainAuthCodeAsyncHelper(const Model::RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TransferDomainAsyncHelper(const Model::TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainContactAsyncHelper(const Model::UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainContactPrivacyAsyncHelper(const Model::UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainNameserversAsyncHelper(const Model::UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTagsForDomainAsyncHelper(const Model::UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ViewBillingAsyncHelper(const Model::ViewBillingRequest& request, const ViewBillingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Route53Domains
} // namespace Aws
