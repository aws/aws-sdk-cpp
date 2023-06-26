/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dynamodbstreams/DynamoDBStreamsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dynamodbstreams/DynamoDBStreamsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DynamoDBStreamsClient header */
#include <aws/dynamodbstreams/model/DescribeStreamResult.h>
#include <aws/dynamodbstreams/model/GetRecordsResult.h>
#include <aws/dynamodbstreams/model/GetShardIteratorResult.h>
#include <aws/dynamodbstreams/model/ListStreamsResult.h>
/* End of service model headers required in DynamoDBStreamsClient header */

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

  namespace DynamoDBStreams
  {
    using DynamoDBStreamsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DynamoDBStreamsEndpointProviderBase = Aws::DynamoDBStreams::Endpoint::DynamoDBStreamsEndpointProviderBase;
    using DynamoDBStreamsEndpointProvider = Aws::DynamoDBStreams::Endpoint::DynamoDBStreamsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DynamoDBStreamsClient header */
      class DescribeStreamRequest;
      class GetRecordsRequest;
      class GetShardIteratorRequest;
      class ListStreamsRequest;
      /* End of service model forward declarations required in DynamoDBStreamsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeStreamResult, DynamoDBStreamsError> DescribeStreamOutcome;
      typedef Aws::Utils::Outcome<GetRecordsResult, DynamoDBStreamsError> GetRecordsOutcome;
      typedef Aws::Utils::Outcome<GetShardIteratorResult, DynamoDBStreamsError> GetShardIteratorOutcome;
      typedef Aws::Utils::Outcome<ListStreamsResult, DynamoDBStreamsError> ListStreamsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
      typedef std::future<GetRecordsOutcome> GetRecordsOutcomeCallable;
      typedef std::future<GetShardIteratorOutcome> GetShardIteratorOutcomeCallable;
      typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DynamoDBStreamsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::DescribeStreamRequest&, const Model::DescribeStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStreamResponseReceivedHandler;
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::GetRecordsRequest&, const Model::GetRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordsResponseReceivedHandler;
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::GetShardIteratorRequest&, const Model::GetShardIteratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetShardIteratorResponseReceivedHandler;
    typedef std::function<void(const DynamoDBStreamsClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DynamoDBStreams
} // namespace Aws
