/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApiGatewayManagementApiClient header */
#include <aws/apigatewaymanagementapi/model/GetConnectionResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ApiGatewayManagementApiClient header */

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

  namespace ApiGatewayManagementApi
  {
    using ApiGatewayManagementApiClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ApiGatewayManagementApiEndpointProviderBase = Aws::ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiEndpointProviderBase;
    using ApiGatewayManagementApiEndpointProvider = Aws::ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApiGatewayManagementApiClient header */
      class DeleteConnectionRequest;
      class GetConnectionRequest;
      class PostToConnectionRequest;
      /* End of service model forward declarations required in ApiGatewayManagementApiClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayManagementApiError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, ApiGatewayManagementApiError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayManagementApiError> PostToConnectionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<PostToConnectionOutcome> PostToConnectionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApiGatewayManagementApiClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ApiGatewayManagementApiClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayManagementApiClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayManagementApiClient*, const Model::PostToConnectionRequest&, const Model::PostToConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostToConnectionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ApiGatewayManagementApi
} // namespace Aws
