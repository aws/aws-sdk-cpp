/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/honeycode/HoneycodeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/honeycode/HoneycodeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in HoneycodeClient header */
#include <aws/honeycode/model/BatchCreateTableRowsResult.h>
#include <aws/honeycode/model/BatchDeleteTableRowsResult.h>
#include <aws/honeycode/model/BatchUpdateTableRowsResult.h>
#include <aws/honeycode/model/BatchUpsertTableRowsResult.h>
#include <aws/honeycode/model/DescribeTableDataImportJobResult.h>
#include <aws/honeycode/model/GetScreenDataResult.h>
#include <aws/honeycode/model/InvokeScreenAutomationResult.h>
#include <aws/honeycode/model/ListTableColumnsResult.h>
#include <aws/honeycode/model/ListTableRowsResult.h>
#include <aws/honeycode/model/ListTablesResult.h>
#include <aws/honeycode/model/ListTagsForResourceResult.h>
#include <aws/honeycode/model/QueryTableRowsResult.h>
#include <aws/honeycode/model/StartTableDataImportJobResult.h>
#include <aws/honeycode/model/TagResourceResult.h>
#include <aws/honeycode/model/UntagResourceResult.h>
/* End of service model headers required in HoneycodeClient header */

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

  namespace Honeycode
  {
    using HoneycodeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using HoneycodeEndpointProviderBase = Aws::Honeycode::Endpoint::HoneycodeEndpointProviderBase;
    using HoneycodeEndpointProvider = Aws::Honeycode::Endpoint::HoneycodeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in HoneycodeClient header */
      class BatchCreateTableRowsRequest;
      class BatchDeleteTableRowsRequest;
      class BatchUpdateTableRowsRequest;
      class BatchUpsertTableRowsRequest;
      class DescribeTableDataImportJobRequest;
      class GetScreenDataRequest;
      class InvokeScreenAutomationRequest;
      class ListTableColumnsRequest;
      class ListTableRowsRequest;
      class ListTablesRequest;
      class ListTagsForResourceRequest;
      class QueryTableRowsRequest;
      class StartTableDataImportJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in HoneycodeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateTableRowsResult, HoneycodeError> BatchCreateTableRowsOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteTableRowsResult, HoneycodeError> BatchDeleteTableRowsOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateTableRowsResult, HoneycodeError> BatchUpdateTableRowsOutcome;
      typedef Aws::Utils::Outcome<BatchUpsertTableRowsResult, HoneycodeError> BatchUpsertTableRowsOutcome;
      typedef Aws::Utils::Outcome<DescribeTableDataImportJobResult, HoneycodeError> DescribeTableDataImportJobOutcome;
      typedef Aws::Utils::Outcome<GetScreenDataResult, HoneycodeError> GetScreenDataOutcome;
      typedef Aws::Utils::Outcome<InvokeScreenAutomationResult, HoneycodeError> InvokeScreenAutomationOutcome;
      typedef Aws::Utils::Outcome<ListTableColumnsResult, HoneycodeError> ListTableColumnsOutcome;
      typedef Aws::Utils::Outcome<ListTableRowsResult, HoneycodeError> ListTableRowsOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, HoneycodeError> ListTablesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, HoneycodeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<QueryTableRowsResult, HoneycodeError> QueryTableRowsOutcome;
      typedef Aws::Utils::Outcome<StartTableDataImportJobResult, HoneycodeError> StartTableDataImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, HoneycodeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, HoneycodeError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateTableRowsOutcome> BatchCreateTableRowsOutcomeCallable;
      typedef std::future<BatchDeleteTableRowsOutcome> BatchDeleteTableRowsOutcomeCallable;
      typedef std::future<BatchUpdateTableRowsOutcome> BatchUpdateTableRowsOutcomeCallable;
      typedef std::future<BatchUpsertTableRowsOutcome> BatchUpsertTableRowsOutcomeCallable;
      typedef std::future<DescribeTableDataImportJobOutcome> DescribeTableDataImportJobOutcomeCallable;
      typedef std::future<GetScreenDataOutcome> GetScreenDataOutcomeCallable;
      typedef std::future<InvokeScreenAutomationOutcome> InvokeScreenAutomationOutcomeCallable;
      typedef std::future<ListTableColumnsOutcome> ListTableColumnsOutcomeCallable;
      typedef std::future<ListTableRowsOutcome> ListTableRowsOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<QueryTableRowsOutcome> QueryTableRowsOutcomeCallable;
      typedef std::future<StartTableDataImportJobOutcome> StartTableDataImportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class HoneycodeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const HoneycodeClient*, const Model::BatchCreateTableRowsRequest&, const Model::BatchCreateTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::BatchDeleteTableRowsRequest&, const Model::BatchDeleteTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::BatchUpdateTableRowsRequest&, const Model::BatchUpdateTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::BatchUpsertTableRowsRequest&, const Model::BatchUpsertTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpsertTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::DescribeTableDataImportJobRequest&, const Model::DescribeTableDataImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableDataImportJobResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::GetScreenDataRequest&, const Model::GetScreenDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScreenDataResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::InvokeScreenAutomationRequest&, const Model::InvokeScreenAutomationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeScreenAutomationResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTableColumnsRequest&, const Model::ListTableColumnsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableColumnsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTableRowsRequest&, const Model::ListTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::QueryTableRowsRequest&, const Model::QueryTableRowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryTableRowsResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::StartTableDataImportJobRequest&, const Model::StartTableDataImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTableDataImportJobResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const HoneycodeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Honeycode
} // namespace Aws
