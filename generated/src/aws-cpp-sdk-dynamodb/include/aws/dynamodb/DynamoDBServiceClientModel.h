/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dynamodb/DynamoDBEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DynamoDBClient header */
#include <aws/dynamodb/model/BatchGetItemResult.h>
#include <aws/dynamodb/model/BatchWriteItemResult.h>
#include <aws/dynamodb/model/CreateTableResult.h>
#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/dynamodb/model/DeleteTableResult.h>
#include <aws/dynamodb/model/DescribeTableResult.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/ListTablesResult.h>
#include <aws/dynamodb/model/PutItemResult.h>
#include <aws/dynamodb/model/QueryResult.h>
#include <aws/dynamodb/model/ScanResult.h>
#include <aws/dynamodb/model/UpdateItemResult.h>
#include <aws/dynamodb/model/UpdateTableResult.h>
#include <aws/dynamodb/model/ListTablesRequest.h>
/* End of service model headers required in DynamoDBClient header */

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

  namespace DynamoDB
  {
    using DynamoDBClientConfiguration = Aws::Client::GenericClientConfiguration;
    using DynamoDBEndpointProviderBase = Aws::DynamoDB::Endpoint::DynamoDBEndpointProviderBase;
    using DynamoDBEndpointProvider = Aws::DynamoDB::Endpoint::DynamoDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DynamoDBClient header */
      class BatchGetItemRequest;
      class BatchWriteItemRequest;
      class CreateTableRequest;
      class DeleteItemRequest;
      class DeleteTableRequest;
      class DescribeTableRequest;
      class GetItemRequest;
      class ListTablesRequest;
      class PutItemRequest;
      class QueryRequest;
      class ScanRequest;
      class UpdateItemRequest;
      class UpdateTableRequest;
      /* End of service model forward declarations required in DynamoDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetItemResult, DynamoDBError> BatchGetItemOutcome;
      typedef Aws::Utils::Outcome<BatchWriteItemResult, DynamoDBError> BatchWriteItemOutcome;
      typedef Aws::Utils::Outcome<CreateTableResult, DynamoDBError> CreateTableOutcome;
      typedef Aws::Utils::Outcome<DeleteItemResult, DynamoDBError> DeleteItemOutcome;
      typedef Aws::Utils::Outcome<DeleteTableResult, DynamoDBError> DeleteTableOutcome;
      typedef Aws::Utils::Outcome<DescribeTableResult, DynamoDBError> DescribeTableOutcome;
      typedef Aws::Utils::Outcome<GetItemResult, DynamoDBError> GetItemOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, DynamoDBError> ListTablesOutcome;
      typedef Aws::Utils::Outcome<PutItemResult, DynamoDBError> PutItemOutcome;
      typedef Aws::Utils::Outcome<QueryResult, DynamoDBError> QueryOutcome;
      typedef Aws::Utils::Outcome<ScanResult, DynamoDBError> ScanOutcome;
      typedef Aws::Utils::Outcome<UpdateItemResult, DynamoDBError> UpdateItemOutcome;
      typedef Aws::Utils::Outcome<UpdateTableResult, DynamoDBError> UpdateTableOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetItemOutcome> BatchGetItemOutcomeCallable;
      typedef std::future<BatchWriteItemOutcome> BatchWriteItemOutcomeCallable;
      typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
      typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
      typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
      typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
      typedef std::future<GetItemOutcome> GetItemOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      typedef std::future<PutItemOutcome> PutItemOutcomeCallable;
      typedef std::future<QueryOutcome> QueryOutcomeCallable;
      typedef std::future<ScanOutcome> ScanOutcomeCallable;
      typedef std::future<UpdateItemOutcome> UpdateItemOutcomeCallable;
      typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DynamoDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DynamoDBClient*, const Model::BatchGetItemRequest&, const Model::BatchGetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::BatchWriteItemRequest&, const Model::BatchWriteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchWriteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteItemRequest&, const Model::DeleteItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::DescribeTableRequest&, const Model::DescribeTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::GetItemRequest&, const Model::GetItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::PutItemRequest&, const Model::PutItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::ScanRequest&, const Model::ScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateItemRequest&, const Model::UpdateItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateItemResponseReceivedHandler;
    typedef std::function<void(const DynamoDBClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DynamoDB
} // namespace Aws
