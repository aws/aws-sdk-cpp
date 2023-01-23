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
#include <aws/account/model/GetAlternateContactResult.h>
#include <aws/account/model/GetContactInformationResult.h>
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
    using AccountClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AccountEndpointProviderBase = Aws::Account::Endpoint::AccountEndpointProviderBase;
    using AccountEndpointProvider = Aws::Account::Endpoint::AccountEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AccountClient header */
      class DeleteAlternateContactRequest;
      class GetAlternateContactRequest;
      class GetContactInformationRequest;
      class PutAlternateContactRequest;
      class PutContactInformationRequest;
      /* End of service model forward declarations required in AccountClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> DeleteAlternateContactOutcome;
      typedef Aws::Utils::Outcome<GetAlternateContactResult, AccountError> GetAlternateContactOutcome;
      typedef Aws::Utils::Outcome<GetContactInformationResult, AccountError> GetContactInformationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutAlternateContactOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AccountError> PutContactInformationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteAlternateContactOutcome> DeleteAlternateContactOutcomeCallable;
      typedef std::future<GetAlternateContactOutcome> GetAlternateContactOutcomeCallable;
      typedef std::future<GetContactInformationOutcome> GetContactInformationOutcomeCallable;
      typedef std::future<PutAlternateContactOutcome> PutAlternateContactOutcomeCallable;
      typedef std::future<PutContactInformationOutcome> PutContactInformationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AccountClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AccountClient*, const Model::DeleteAlternateContactRequest&, const Model::DeleteAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetAlternateContactRequest&, const Model::GetAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::GetContactInformationRequest&, const Model::GetContactInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactInformationResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutAlternateContactRequest&, const Model::PutAlternateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAlternateContactResponseReceivedHandler;
    typedef std::function<void(const AccountClient*, const Model::PutContactInformationRequest&, const Model::PutContactInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContactInformationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Account
} // namespace Aws
