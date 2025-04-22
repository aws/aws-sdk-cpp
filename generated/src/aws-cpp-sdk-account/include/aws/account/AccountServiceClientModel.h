/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/account/AccountErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/account/AccountEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AccountClient header */
#include <aws/account/model/AcceptPrimaryEmailUpdateResult.h>
#include <aws/account/model/GetAccountInformationResult.h>
#include <aws/account/model/GetAlternateContactResult.h>
#include <aws/account/model/GetContactInformationResult.h>
#include <aws/account/model/GetPrimaryEmailResult.h>
#include <aws/account/model/GetRegionOptStatusResult.h>
#include <aws/account/model/ListRegionsResult.h>
#include <aws/account/model/StartPrimaryEmailUpdateResult.h>
#include <aws/account/model/GetContactInformationRequest.h>
#include <aws/account/model/ListRegionsRequest.h>
#include <aws/account/model/GetAccountInformationRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AccountClient header */

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

  namespace Account
  {
    using AccountClientConfiguration = Aws::Client::GenericClientConfiguration;
    using AccountEndpointProviderBase = Aws::Account::Endpoint::AccountEndpointProviderBase;
    using AccountEndpointProvider = Aws::Account::Endpoint::AccountEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AccountClient header */
      class AcceptPrimaryEmailUpdateRequest;
      class DeleteAlternateContactRequest;
      class DisableRegionRequest;
      class EnableRegionRequest;
      class GetAccountInformationRequest;
      class GetAlternateContactRequest;
      class GetContactInformationRequest;
      class GetPrimaryEmailRequest;
      class GetRegionOptStatusRequest;
      class ListRegionsRequest;
      class PutAccountNameRequest;
      class PutAlternateContactRequest;
      class PutContactInformationRequest;
      class StartPrimaryEmailUpdateRequest;
      /* End of service model forward declarations required in AccountClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptPrimaryEmailUpdateResult, AccountError> AcceptPrimaryEmailUpdateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> DeleteAlternateContactOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> DisableRegionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> EnableRegionOutcome;
      typedef Aws::Utils::Outcome<GetAccountInformationResult, AccountError> GetAccountInformationOutcome;
      typedef Aws::Utils::Outcome<GetAlternateContactResult, AccountError> GetAlternateContactOutcome;
      typedef Aws::Utils::Outcome<GetContactInformationResult, AccountError> GetContactInformationOutcome;
      typedef Aws::Utils::Outcome<GetPrimaryEmailResult, AccountError> GetPrimaryEmailOutcome;
      typedef Aws::Utils::Outcome<GetRegionOptStatusResult, AccountError> GetRegionOptStatusOutcome;
      typedef Aws::Utils::Outcome<ListRegionsResult, AccountError> ListRegionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutAccountNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutAlternateContactOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutContactInformationOutcome;
      typedef Aws::Utils::Outcome<StartPrimaryEmailUpdateResult, AccountError> StartPrimaryEmailUpdateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptPrimaryEmailUpdateOutcome> AcceptPrimaryEmailUpdateOutcomeCallable;
      typedef std::future<DeleteAlternateContactOutcome> DeleteAlternateContactOutcomeCallable;
      typedef std::future<DisableRegionOutcome> DisableRegionOutcomeCallable;
      typedef std::future<EnableRegionOutcome> EnableRegionOutcomeCallable;
      typedef std::future<GetAccountInformationOutcome> GetAccountInformationOutcomeCallable;
      typedef std::future<GetAlternateContactOutcome> GetAlternateContactOutcomeCallable;
      typedef std::future<GetContactInformationOutcome> GetContactInformationOutcomeCallable;
      typedef std::future<GetPrimaryEmailOutcome> GetPrimaryEmailOutcomeCallable;
      typedef std::future<GetRegionOptStatusOutcome> GetRegionOptStatusOutcomeCallable;
      typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
      typedef std::future<PutAccountNameOutcome> PutAccountNameOutcomeCallable;
      typedef std::future<PutAlternateContactOutcome> PutAlternateContactOutcomeCallable;
      typedef std::future<PutContactInformationOutcome> PutContactInformationOutcomeCallable;
      typedef std::future<StartPrimaryEmailUpdateOutcome> StartPrimaryEmailUpdateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AccountClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AccountClient*, const Model::AcceptPrimaryEmailUpdateRequest&, const Model::AcceptPrimaryEmailUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPrimaryEmailUpdateResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::DeleteAlternateContactRequest&, const Model::DeleteAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::DisableRegionRequest&, const Model::DisableRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRegionResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::EnableRegionRequest&, const Model::EnableRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRegionResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetAccountInformationRequest&, const Model::GetAccountInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountInformationResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetAlternateContactRequest&, const Model::GetAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetContactInformationRequest&, const Model::GetContactInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactInformationResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetPrimaryEmailRequest&, const Model::GetPrimaryEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPrimaryEmailResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetRegionOptStatusRequest&, const Model::GetRegionOptStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegionOptStatusResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::ListRegionsRequest&, const Model::ListRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegionsResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutAccountNameRequest&, const Model::PutAccountNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountNameResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutAlternateContactRequest&, const Model::PutAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutContactInformationRequest&, const Model::PutContactInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContactInformationResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::StartPrimaryEmailUpdateRequest&, const Model::StartPrimaryEmailUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPrimaryEmailUpdateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Account
} // namespace Aws
