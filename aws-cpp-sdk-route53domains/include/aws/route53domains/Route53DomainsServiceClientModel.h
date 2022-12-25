/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53domains/Route53DomainsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53domains/Route53DomainsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53DomainsClient header */
#include <aws/route53domains/model/AcceptDomainTransferFromAnotherAwsAccountResult.h>
#include <aws/route53domains/model/AssociateDelegationSignerToDomainResult.h>
#include <aws/route53domains/model/CancelDomainTransferToAnotherAwsAccountResult.h>
#include <aws/route53domains/model/CheckDomainAvailabilityResult.h>
#include <aws/route53domains/model/CheckDomainTransferabilityResult.h>
#include <aws/route53domains/model/DeleteDomainResult.h>
#include <aws/route53domains/model/DeleteTagsForDomainResult.h>
#include <aws/route53domains/model/DisableDomainAutoRenewResult.h>
#include <aws/route53domains/model/DisableDomainTransferLockResult.h>
#include <aws/route53domains/model/DisassociateDelegationSignerFromDomainResult.h>
#include <aws/route53domains/model/EnableDomainAutoRenewResult.h>
#include <aws/route53domains/model/EnableDomainTransferLockResult.h>
#include <aws/route53domains/model/GetContactReachabilityStatusResult.h>
#include <aws/route53domains/model/GetDomainDetailResult.h>
#include <aws/route53domains/model/GetDomainSuggestionsResult.h>
#include <aws/route53domains/model/GetOperationDetailResult.h>
#include <aws/route53domains/model/ListDomainsResult.h>
#include <aws/route53domains/model/ListOperationsResult.h>
#include <aws/route53domains/model/ListPricesResult.h>
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
#include <aws/core/NoResult.h>
/* End of service model headers required in Route53DomainsClient header */

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
    using Route53DomainsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using Route53DomainsEndpointProviderBase = Aws::Route53Domains::Endpoint::Route53DomainsEndpointProviderBase;
    using Route53DomainsEndpointProvider = Aws::Route53Domains::Endpoint::Route53DomainsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53DomainsClient header */
      class AcceptDomainTransferFromAnotherAwsAccountRequest;
      class AssociateDelegationSignerToDomainRequest;
      class CancelDomainTransferToAnotherAwsAccountRequest;
      class CheckDomainAvailabilityRequest;
      class CheckDomainTransferabilityRequest;
      class DeleteDomainRequest;
      class DeleteTagsForDomainRequest;
      class DisableDomainAutoRenewRequest;
      class DisableDomainTransferLockRequest;
      class DisassociateDelegationSignerFromDomainRequest;
      class EnableDomainAutoRenewRequest;
      class EnableDomainTransferLockRequest;
      class GetContactReachabilityStatusRequest;
      class GetDomainDetailRequest;
      class GetDomainSuggestionsRequest;
      class GetOperationDetailRequest;
      class ListDomainsRequest;
      class ListOperationsRequest;
      class ListPricesRequest;
      class ListTagsForDomainRequest;
      class PushDomainRequest;
      class RegisterDomainRequest;
      class RejectDomainTransferFromAnotherAwsAccountRequest;
      class RenewDomainRequest;
      class ResendContactReachabilityEmailRequest;
      class ResendOperationAuthorizationRequest;
      class RetrieveDomainAuthCodeRequest;
      class TransferDomainRequest;
      class TransferDomainToAnotherAwsAccountRequest;
      class UpdateDomainContactRequest;
      class UpdateDomainContactPrivacyRequest;
      class UpdateDomainNameserversRequest;
      class UpdateTagsForDomainRequest;
      class ViewBillingRequest;
      /* End of service model forward declarations required in Route53DomainsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptDomainTransferFromAnotherAwsAccountResult, Route53DomainsError> AcceptDomainTransferFromAnotherAwsAccountOutcome;
      typedef Aws::Utils::Outcome<AssociateDelegationSignerToDomainResult, Route53DomainsError> AssociateDelegationSignerToDomainOutcome;
      typedef Aws::Utils::Outcome<CancelDomainTransferToAnotherAwsAccountResult, Route53DomainsError> CancelDomainTransferToAnotherAwsAccountOutcome;
      typedef Aws::Utils::Outcome<CheckDomainAvailabilityResult, Route53DomainsError> CheckDomainAvailabilityOutcome;
      typedef Aws::Utils::Outcome<CheckDomainTransferabilityResult, Route53DomainsError> CheckDomainTransferabilityOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, Route53DomainsError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteTagsForDomainResult, Route53DomainsError> DeleteTagsForDomainOutcome;
      typedef Aws::Utils::Outcome<DisableDomainAutoRenewResult, Route53DomainsError> DisableDomainAutoRenewOutcome;
      typedef Aws::Utils::Outcome<DisableDomainTransferLockResult, Route53DomainsError> DisableDomainTransferLockOutcome;
      typedef Aws::Utils::Outcome<DisassociateDelegationSignerFromDomainResult, Route53DomainsError> DisassociateDelegationSignerFromDomainOutcome;
      typedef Aws::Utils::Outcome<EnableDomainAutoRenewResult, Route53DomainsError> EnableDomainAutoRenewOutcome;
      typedef Aws::Utils::Outcome<EnableDomainTransferLockResult, Route53DomainsError> EnableDomainTransferLockOutcome;
      typedef Aws::Utils::Outcome<GetContactReachabilityStatusResult, Route53DomainsError> GetContactReachabilityStatusOutcome;
      typedef Aws::Utils::Outcome<GetDomainDetailResult, Route53DomainsError> GetDomainDetailOutcome;
      typedef Aws::Utils::Outcome<GetDomainSuggestionsResult, Route53DomainsError> GetDomainSuggestionsOutcome;
      typedef Aws::Utils::Outcome<GetOperationDetailResult, Route53DomainsError> GetOperationDetailOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, Route53DomainsError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListOperationsResult, Route53DomainsError> ListOperationsOutcome;
      typedef Aws::Utils::Outcome<ListPricesResult, Route53DomainsError> ListPricesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForDomainResult, Route53DomainsError> ListTagsForDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53DomainsError> PushDomainOutcome;
      typedef Aws::Utils::Outcome<RegisterDomainResult, Route53DomainsError> RegisterDomainOutcome;
      typedef Aws::Utils::Outcome<RejectDomainTransferFromAnotherAwsAccountResult, Route53DomainsError> RejectDomainTransferFromAnotherAwsAccountOutcome;
      typedef Aws::Utils::Outcome<RenewDomainResult, Route53DomainsError> RenewDomainOutcome;
      typedef Aws::Utils::Outcome<ResendContactReachabilityEmailResult, Route53DomainsError> ResendContactReachabilityEmailOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, Route53DomainsError> ResendOperationAuthorizationOutcome;
      typedef Aws::Utils::Outcome<RetrieveDomainAuthCodeResult, Route53DomainsError> RetrieveDomainAuthCodeOutcome;
      typedef Aws::Utils::Outcome<TransferDomainResult, Route53DomainsError> TransferDomainOutcome;
      typedef Aws::Utils::Outcome<TransferDomainToAnotherAwsAccountResult, Route53DomainsError> TransferDomainToAnotherAwsAccountOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainContactResult, Route53DomainsError> UpdateDomainContactOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainContactPrivacyResult, Route53DomainsError> UpdateDomainContactPrivacyOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainNameserversResult, Route53DomainsError> UpdateDomainNameserversOutcome;
      typedef Aws::Utils::Outcome<UpdateTagsForDomainResult, Route53DomainsError> UpdateTagsForDomainOutcome;
      typedef Aws::Utils::Outcome<ViewBillingResult, Route53DomainsError> ViewBillingOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptDomainTransferFromAnotherAwsAccountOutcome> AcceptDomainTransferFromAnotherAwsAccountOutcomeCallable;
      typedef std::future<AssociateDelegationSignerToDomainOutcome> AssociateDelegationSignerToDomainOutcomeCallable;
      typedef std::future<CancelDomainTransferToAnotherAwsAccountOutcome> CancelDomainTransferToAnotherAwsAccountOutcomeCallable;
      typedef std::future<CheckDomainAvailabilityOutcome> CheckDomainAvailabilityOutcomeCallable;
      typedef std::future<CheckDomainTransferabilityOutcome> CheckDomainTransferabilityOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteTagsForDomainOutcome> DeleteTagsForDomainOutcomeCallable;
      typedef std::future<DisableDomainAutoRenewOutcome> DisableDomainAutoRenewOutcomeCallable;
      typedef std::future<DisableDomainTransferLockOutcome> DisableDomainTransferLockOutcomeCallable;
      typedef std::future<DisassociateDelegationSignerFromDomainOutcome> DisassociateDelegationSignerFromDomainOutcomeCallable;
      typedef std::future<EnableDomainAutoRenewOutcome> EnableDomainAutoRenewOutcomeCallable;
      typedef std::future<EnableDomainTransferLockOutcome> EnableDomainTransferLockOutcomeCallable;
      typedef std::future<GetContactReachabilityStatusOutcome> GetContactReachabilityStatusOutcomeCallable;
      typedef std::future<GetDomainDetailOutcome> GetDomainDetailOutcomeCallable;
      typedef std::future<GetDomainSuggestionsOutcome> GetDomainSuggestionsOutcomeCallable;
      typedef std::future<GetOperationDetailOutcome> GetOperationDetailOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
      typedef std::future<ListPricesOutcome> ListPricesOutcomeCallable;
      typedef std::future<ListTagsForDomainOutcome> ListTagsForDomainOutcomeCallable;
      typedef std::future<PushDomainOutcome> PushDomainOutcomeCallable;
      typedef std::future<RegisterDomainOutcome> RegisterDomainOutcomeCallable;
      typedef std::future<RejectDomainTransferFromAnotherAwsAccountOutcome> RejectDomainTransferFromAnotherAwsAccountOutcomeCallable;
      typedef std::future<RenewDomainOutcome> RenewDomainOutcomeCallable;
      typedef std::future<ResendContactReachabilityEmailOutcome> ResendContactReachabilityEmailOutcomeCallable;
      typedef std::future<ResendOperationAuthorizationOutcome> ResendOperationAuthorizationOutcomeCallable;
      typedef std::future<RetrieveDomainAuthCodeOutcome> RetrieveDomainAuthCodeOutcomeCallable;
      typedef std::future<TransferDomainOutcome> TransferDomainOutcomeCallable;
      typedef std::future<TransferDomainToAnotherAwsAccountOutcome> TransferDomainToAnotherAwsAccountOutcomeCallable;
      typedef std::future<UpdateDomainContactOutcome> UpdateDomainContactOutcomeCallable;
      typedef std::future<UpdateDomainContactPrivacyOutcome> UpdateDomainContactPrivacyOutcomeCallable;
      typedef std::future<UpdateDomainNameserversOutcome> UpdateDomainNameserversOutcomeCallable;
      typedef std::future<UpdateTagsForDomainOutcome> UpdateTagsForDomainOutcomeCallable;
      typedef std::future<ViewBillingOutcome> ViewBillingOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53DomainsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53DomainsClient*, const Model::AcceptDomainTransferFromAnotherAwsAccountRequest&, const Model::AcceptDomainTransferFromAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptDomainTransferFromAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::AssociateDelegationSignerToDomainRequest&, const Model::AssociateDelegationSignerToDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDelegationSignerToDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::CancelDomainTransferToAnotherAwsAccountRequest&, const Model::CancelDomainTransferToAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDomainTransferToAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::CheckDomainAvailabilityRequest&, const Model::CheckDomainAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckDomainAvailabilityResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::CheckDomainTransferabilityRequest&, const Model::CheckDomainTransferabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckDomainTransferabilityResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DeleteTagsForDomainRequest&, const Model::DeleteTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DisableDomainAutoRenewRequest&, const Model::DisableDomainAutoRenewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDomainAutoRenewResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DisableDomainTransferLockRequest&, const Model::DisableDomainTransferLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDomainTransferLockResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::DisassociateDelegationSignerFromDomainRequest&, const Model::DisassociateDelegationSignerFromDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDelegationSignerFromDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::EnableDomainAutoRenewRequest&, const Model::EnableDomainAutoRenewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDomainAutoRenewResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::EnableDomainTransferLockRequest&, const Model::EnableDomainTransferLockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDomainTransferLockResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetContactReachabilityStatusRequest&, const Model::GetContactReachabilityStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactReachabilityStatusResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetDomainDetailRequest&, const Model::GetDomainDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainDetailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetDomainSuggestionsRequest&, const Model::GetDomainSuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainSuggestionsResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::GetOperationDetailRequest&, const Model::GetOperationDetailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOperationDetailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOperationsResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListPricesRequest&, const Model::ListPricesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPricesResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ListTagsForDomainRequest&, const Model::ListTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::PushDomainRequest&, const Model::PushDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PushDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RegisterDomainRequest&, const Model::RegisterDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RejectDomainTransferFromAnotherAwsAccountRequest&, const Model::RejectDomainTransferFromAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectDomainTransferFromAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RenewDomainRequest&, const Model::RenewDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenewDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ResendContactReachabilityEmailRequest&, const Model::ResendContactReachabilityEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendContactReachabilityEmailResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ResendOperationAuthorizationRequest&, const Model::ResendOperationAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendOperationAuthorizationResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::RetrieveDomainAuthCodeRequest&, const Model::RetrieveDomainAuthCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetrieveDomainAuthCodeResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::TransferDomainRequest&, const Model::TransferDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::TransferDomainToAnotherAwsAccountRequest&, const Model::TransferDomainToAnotherAwsAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferDomainToAnotherAwsAccountResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainContactRequest&, const Model::UpdateDomainContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainContactResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainContactPrivacyRequest&, const Model::UpdateDomainContactPrivacyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainContactPrivacyResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateDomainNameserversRequest&, const Model::UpdateDomainNameserversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameserversResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::UpdateTagsForDomainRequest&, const Model::UpdateTagsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTagsForDomainResponseReceivedHandler;
    typedef std::function<void(const Route53DomainsClient*, const Model::ViewBillingRequest&, const Model::ViewBillingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ViewBillingResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Route53Domains
} // namespace Aws
