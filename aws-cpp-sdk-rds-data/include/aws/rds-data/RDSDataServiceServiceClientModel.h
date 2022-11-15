/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rds-data/RDSDataServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rds-data/RDSDataServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RDSDataServiceClient header */
#include <aws/rds-data/model/BatchExecuteStatementResult.h>
#include <aws/rds-data/model/BeginTransactionResult.h>
#include <aws/rds-data/model/CommitTransactionResult.h>
#include <aws/rds-data/model/ExecuteStatementResult.h>
#include <aws/rds-data/model/RollbackTransactionResult.h>
/* End of service model headers required in RDSDataServiceClient header */

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

  namespace RDSDataService
  {
    using RDSDataServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RDSDataServiceEndpointProviderBase = Aws::RDSDataService::Endpoint::RDSDataServiceEndpointProviderBase;
    using RDSDataServiceEndpointProvider = Aws::RDSDataService::Endpoint::RDSDataServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RDSDataServiceClient header */
      class BatchExecuteStatementRequest;
      class BeginTransactionRequest;
      class CommitTransactionRequest;
      class ExecuteStatementRequest;
      class RollbackTransactionRequest;
      /* End of service model forward declarations required in RDSDataServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchExecuteStatementResult, RDSDataServiceError> BatchExecuteStatementOutcome;
      typedef Aws::Utils::Outcome<BeginTransactionResult, RDSDataServiceError> BeginTransactionOutcome;
      typedef Aws::Utils::Outcome<CommitTransactionResult, RDSDataServiceError> CommitTransactionOutcome;
      typedef Aws::Utils::Outcome<ExecuteStatementResult, RDSDataServiceError> ExecuteStatementOutcome;
      typedef Aws::Utils::Outcome<RollbackTransactionResult, RDSDataServiceError> RollbackTransactionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchExecuteStatementOutcome> BatchExecuteStatementOutcomeCallable;
      typedef std::future<BeginTransactionOutcome> BeginTransactionOutcomeCallable;
      typedef std::future<CommitTransactionOutcome> CommitTransactionOutcomeCallable;
      typedef std::future<ExecuteStatementOutcome> ExecuteStatementOutcomeCallable;
      typedef std::future<RollbackTransactionOutcome> RollbackTransactionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RDSDataServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RDSDataServiceClient*, const Model::BatchExecuteStatementRequest&, const Model::BatchExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::BeginTransactionRequest&, const Model::BeginTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BeginTransactionResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::CommitTransactionRequest&, const Model::CommitTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CommitTransactionResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::ExecuteStatementRequest&, const Model::ExecuteStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteStatementResponseReceivedHandler;
    typedef std::function<void(const RDSDataServiceClient*, const Model::RollbackTransactionRequest&, const Model::RollbackTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RollbackTransactionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RDSDataService
} // namespace Aws
