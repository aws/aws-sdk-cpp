/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sso/SSOErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sso/SSOEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSOClient header */
#include <aws/sso/model/GetRoleCredentialsResult.h>
#include <aws/sso/model/ListAccountRolesResult.h>
#include <aws/sso/model/ListAccountsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SSOClient header */

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

  namespace SSO
  {
    using SSOClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SSOEndpointProviderBase = Aws::SSO::Endpoint::SSOEndpointProviderBase;
    using SSOEndpointProvider = Aws::SSO::Endpoint::SSOEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSOClient header */
      class GetRoleCredentialsRequest;
      class ListAccountRolesRequest;
      class ListAccountsRequest;
      class LogoutRequest;
      /* End of service model forward declarations required in SSOClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetRoleCredentialsResult, SSOError> GetRoleCredentialsOutcome;
      typedef Aws::Utils::Outcome<ListAccountRolesResult, SSOError> ListAccountRolesOutcome;
      typedef Aws::Utils::Outcome<ListAccountsResult, SSOError> ListAccountsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOError> LogoutOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetRoleCredentialsOutcome> GetRoleCredentialsOutcomeCallable;
      typedef std::future<ListAccountRolesOutcome> ListAccountRolesOutcomeCallable;
      typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
      typedef std::future<LogoutOutcome> LogoutOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSOClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSOClient*, const Model::GetRoleCredentialsRequest&, const Model::GetRoleCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoleCredentialsResponseReceivedHandler;
    typedef std::function<void(const SSOClient*, const Model::ListAccountRolesRequest&, const Model::ListAccountRolesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountRolesResponseReceivedHandler;
    typedef std::function<void(const SSOClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsResponseReceivedHandler;
    typedef std::function<void(const SSOClient*, const Model::LogoutRequest&, const Model::LogoutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LogoutResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSO
} // namespace Aws
