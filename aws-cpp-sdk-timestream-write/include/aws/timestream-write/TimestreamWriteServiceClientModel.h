/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/timestream-write/TimestreamWriteErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/timestream-write/TimestreamWriteEndpointProvider.h>
#include <aws/core/utils/ConcurrentCache.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TimestreamWriteClient header */
#include <aws/timestream-write/model/CreateDatabaseResult.h>
#include <aws/timestream-write/model/CreateTableResult.h>
#include <aws/timestream-write/model/DescribeDatabaseResult.h>
#include <aws/timestream-write/model/DescribeEndpointsResult.h>
#include <aws/timestream-write/model/DescribeTableResult.h>
#include <aws/timestream-write/model/ListDatabasesResult.h>
#include <aws/timestream-write/model/ListTablesResult.h>
#include <aws/timestream-write/model/ListTagsForResourceResult.h>
#include <aws/timestream-write/model/TagResourceResult.h>
#include <aws/timestream-write/model/UntagResourceResult.h>
#include <aws/timestream-write/model/UpdateDatabaseResult.h>
#include <aws/timestream-write/model/UpdateTableResult.h>
#include <aws/timestream-write/model/WriteRecordsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TimestreamWriteClient header */

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

  namespace TimestreamWrite
  {
    using TimestreamWriteClientConfiguration = Aws::Client::GenericClientConfiguration<true>;
    using TimestreamWriteEndpointProviderBase = Aws::TimestreamWrite::Endpoint::TimestreamWriteEndpointProviderBase;
    using TimestreamWriteEndpointProvider = Aws::TimestreamWrite::Endpoint::TimestreamWriteEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TimestreamWriteClient header */
      class CreateDatabaseRequest;
      class CreateTableRequest;
      class DeleteDatabaseRequest;
      class DeleteTableRequest;
      class DescribeDatabaseRequest;
      class DescribeEndpointsRequest;
      class DescribeTableRequest;
      class ListDatabasesRequest;
      class ListTablesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDatabaseRequest;
      class UpdateTableRequest;
      class WriteRecordsRequest;
      /* End of service model forward declarations required in TimestreamWriteClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDatabaseResult, TimestreamWriteError> CreateDatabaseOutcome;
      typedef Aws::Utils::Outcome<CreateTableResult, TimestreamWriteError> CreateTableOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamWriteError> DeleteDatabaseOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamWriteError> DeleteTableOutcome;
      typedef Aws::Utils::Outcome<DescribeDatabaseResult, TimestreamWriteError> DescribeDatabaseOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointsResult, TimestreamWriteError> DescribeEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeTableResult, TimestreamWriteError> DescribeTableOutcome;
      typedef Aws::Utils::Outcome<ListDatabasesResult, TimestreamWriteError> ListDatabasesOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, TimestreamWriteError> ListTablesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TimestreamWriteError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, TimestreamWriteError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, TimestreamWriteError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDatabaseResult, TimestreamWriteError> UpdateDatabaseOutcome;
      typedef Aws::Utils::Outcome<UpdateTableResult, TimestreamWriteError> UpdateTableOutcome;
      typedef Aws::Utils::Outcome<WriteRecordsResult, TimestreamWriteError> WriteRecordsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
      typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
      typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
      typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
      typedef std::future<DescribeDatabaseOutcome> DescribeDatabaseOutcomeCallable;
      typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
      typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
      typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
      typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
      typedef std::future<WriteRecordsOutcome> WriteRecordsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TimestreamWriteClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TimestreamWriteClient*, const Model::CreateDatabaseRequest&, const Model::CreateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DeleteDatabaseRequest&, const Model::DeleteDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DescribeDatabaseRequest&, const Model::DescribeDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::ListDatabasesRequest&, const Model::ListDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatabasesResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::UpdateDatabaseRequest&, const Model::UpdateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatabaseResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const TimestreamWriteClient*, const Model::WriteRecordsRequest&, const Model::WriteRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > WriteRecordsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TimestreamWrite
} // namespace Aws
