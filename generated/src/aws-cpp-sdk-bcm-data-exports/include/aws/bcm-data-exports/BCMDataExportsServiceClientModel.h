/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bcm-data-exports/BCMDataExportsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/bcm-data-exports/BCMDataExportsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BCMDataExportsClient header */
#include <aws/bcm-data-exports/model/CreateExportResult.h>
#include <aws/bcm-data-exports/model/DeleteExportResult.h>
#include <aws/bcm-data-exports/model/GetExecutionResult.h>
#include <aws/bcm-data-exports/model/GetExportResult.h>
#include <aws/bcm-data-exports/model/GetTableResult.h>
#include <aws/bcm-data-exports/model/ListExecutionsResult.h>
#include <aws/bcm-data-exports/model/ListExportsResult.h>
#include <aws/bcm-data-exports/model/ListTablesResult.h>
#include <aws/bcm-data-exports/model/ListTagsForResourceResult.h>
#include <aws/bcm-data-exports/model/TagResourceResult.h>
#include <aws/bcm-data-exports/model/UntagResourceResult.h>
#include <aws/bcm-data-exports/model/UpdateExportResult.h>
/* End of service model headers required in BCMDataExportsClient header */

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

  namespace BCMDataExports
  {
    using BCMDataExportsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BCMDataExportsEndpointProviderBase = Aws::BCMDataExports::Endpoint::BCMDataExportsEndpointProviderBase;
    using BCMDataExportsEndpointProvider = Aws::BCMDataExports::Endpoint::BCMDataExportsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BCMDataExportsClient header */
      class CreateExportRequest;
      class DeleteExportRequest;
      class GetExecutionRequest;
      class GetExportRequest;
      class GetTableRequest;
      class ListExecutionsRequest;
      class ListExportsRequest;
      class ListTablesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateExportRequest;
      /* End of service model forward declarations required in BCMDataExportsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateExportResult, BCMDataExportsError> CreateExportOutcome;
      typedef Aws::Utils::Outcome<DeleteExportResult, BCMDataExportsError> DeleteExportOutcome;
      typedef Aws::Utils::Outcome<GetExecutionResult, BCMDataExportsError> GetExecutionOutcome;
      typedef Aws::Utils::Outcome<GetExportResult, BCMDataExportsError> GetExportOutcome;
      typedef Aws::Utils::Outcome<GetTableResult, BCMDataExportsError> GetTableOutcome;
      typedef Aws::Utils::Outcome<ListExecutionsResult, BCMDataExportsError> ListExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListExportsResult, BCMDataExportsError> ListExportsOutcome;
      typedef Aws::Utils::Outcome<ListTablesResult, BCMDataExportsError> ListTablesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BCMDataExportsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BCMDataExportsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BCMDataExportsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateExportResult, BCMDataExportsError> UpdateExportOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateExportOutcome> CreateExportOutcomeCallable;
      typedef std::future<DeleteExportOutcome> DeleteExportOutcomeCallable;
      typedef std::future<GetExecutionOutcome> GetExecutionOutcomeCallable;
      typedef std::future<GetExportOutcome> GetExportOutcomeCallable;
      typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
      typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
      typedef std::future<ListExportsOutcome> ListExportsOutcomeCallable;
      typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateExportOutcome> UpdateExportOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BCMDataExportsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BCMDataExportsClient*, const Model::CreateExportRequest&, const Model::CreateExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExportResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::DeleteExportRequest&, const Model::DeleteExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExportResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::GetExecutionRequest&, const Model::GetExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExecutionResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::GetExportRequest&, const Model::GetExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::GetTableRequest&, const Model::GetTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExecutionsResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::ListExportsRequest&, const Model::ListExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExportsResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTablesResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BCMDataExportsClient*, const Model::UpdateExportRequest&, const Model::UpdateExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExportResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BCMDataExports
} // namespace Aws
