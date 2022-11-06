/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/personalize-events/PersonalizeEventsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/personalize-events/PersonalizeEventsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PersonalizeEventsClient header */
#include <aws/core/NoResult.h>
/* End of service model headers required in PersonalizeEventsClient header */

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

  namespace PersonalizeEvents
  {
    using PersonalizeEventsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PersonalizeEventsEndpointProviderBase = Aws::PersonalizeEvents::Endpoint::PersonalizeEventsEndpointProviderBase;
    using PersonalizeEventsEndpointProvider = Aws::PersonalizeEvents::Endpoint::PersonalizeEventsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PersonalizeEventsClient header */
      class PutEventsRequest;
      class PutItemsRequest;
      class PutUsersRequest;
      /* End of service model forward declarations required in PersonalizeEventsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeEventsError> PutEventsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeEventsError> PutItemsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeEventsError> PutUsersOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
      typedef std::future<PutItemsOutcome> PutItemsOutcomeCallable;
      typedef std::future<PutUsersOutcome> PutUsersOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PersonalizeEventsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PersonalizeEventsClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeEventsClient*, const Model::PutItemsRequest&, const Model::PutItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutItemsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeEventsClient*, const Model::PutUsersRequest&, const Model::PutUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUsersResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PersonalizeEvents
} // namespace Aws
