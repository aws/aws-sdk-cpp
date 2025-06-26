/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/keyspacesstreams/KeyspacesStreamsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/keyspacesstreams/KeyspacesStreamsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KeyspacesStreamsClient header */
#include <aws/keyspacesstreams/model/GetRecordsResult.h>
#include <aws/keyspacesstreams/model/GetShardIteratorResult.h>
#include <aws/keyspacesstreams/model/GetStreamResult.h>
#include <aws/keyspacesstreams/model/ListStreamsResult.h>
#include <aws/keyspacesstreams/model/ListStreamsRequest.h>
/* End of service model headers required in KeyspacesStreamsClient header */

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

  namespace KeyspacesStreams
  {
    using KeyspacesStreamsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using KeyspacesStreamsEndpointProviderBase = Aws::KeyspacesStreams::Endpoint::KeyspacesStreamsEndpointProviderBase;
    using KeyspacesStreamsEndpointProvider = Aws::KeyspacesStreams::Endpoint::KeyspacesStreamsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KeyspacesStreamsClient header */
      class GetRecordsRequest;
      class GetShardIteratorRequest;
      class GetStreamRequest;
      class ListStreamsRequest;
      /* End of service model forward declarations required in KeyspacesStreamsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetRecordsResult, KeyspacesStreamsError> GetRecordsOutcome;
      typedef Aws::Utils::Outcome<GetShardIteratorResult, KeyspacesStreamsError> GetShardIteratorOutcome;
      typedef Aws::Utils::Outcome<GetStreamResult, KeyspacesStreamsError> GetStreamOutcome;
      typedef Aws::Utils::Outcome<ListStreamsResult, KeyspacesStreamsError> ListStreamsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetRecordsOutcome> GetRecordsOutcomeCallable;
      typedef std::future<GetShardIteratorOutcome> GetShardIteratorOutcomeCallable;
      typedef std::future<GetStreamOutcome> GetStreamOutcomeCallable;
      typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KeyspacesStreamsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KeyspacesStreamsClient*, const Model::GetRecordsRequest&, const Model::GetRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordsResponseReceivedHandler;
    typedef std::function<void(const KeyspacesStreamsClient*, const Model::GetShardIteratorRequest&, const Model::GetShardIteratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetShardIteratorResponseReceivedHandler;
    typedef std::function<void(const KeyspacesStreamsClient*, const Model::GetStreamRequest&, const Model::GetStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamResponseReceivedHandler;
    typedef std::function<void(const KeyspacesStreamsClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KeyspacesStreams
} // namespace Aws
