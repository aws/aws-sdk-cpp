/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/backupsearch/BackupSearchErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/backupsearch/BackupSearchEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BackupSearchClient header */
#include <aws/backupsearch/model/GetSearchJobResult.h>
#include <aws/backupsearch/model/GetSearchResultExportJobResult.h>
#include <aws/backupsearch/model/ListSearchJobBackupsResult.h>
#include <aws/backupsearch/model/ListSearchJobResultsResult.h>
#include <aws/backupsearch/model/ListSearchJobsResult.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsResult.h>
#include <aws/backupsearch/model/ListTagsForResourceResult.h>
#include <aws/backupsearch/model/StartSearchJobResult.h>
#include <aws/backupsearch/model/StartSearchResultExportJobResult.h>
#include <aws/backupsearch/model/StopSearchJobResult.h>
#include <aws/backupsearch/model/TagResourceResult.h>
#include <aws/backupsearch/model/UntagResourceResult.h>
#include <aws/backupsearch/model/ListSearchJobsRequest.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsRequest.h>
/* End of service model headers required in BackupSearchClient header */

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

  namespace BackupSearch
  {
    using BackupSearchClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BackupSearchEndpointProviderBase = Aws::BackupSearch::Endpoint::BackupSearchEndpointProviderBase;
    using BackupSearchEndpointProvider = Aws::BackupSearch::Endpoint::BackupSearchEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BackupSearchClient header */
      class GetSearchJobRequest;
      class GetSearchResultExportJobRequest;
      class ListSearchJobBackupsRequest;
      class ListSearchJobResultsRequest;
      class ListSearchJobsRequest;
      class ListSearchResultExportJobsRequest;
      class ListTagsForResourceRequest;
      class StartSearchJobRequest;
      class StartSearchResultExportJobRequest;
      class StopSearchJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in BackupSearchClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetSearchJobResult, BackupSearchError> GetSearchJobOutcome;
      typedef Aws::Utils::Outcome<GetSearchResultExportJobResult, BackupSearchError> GetSearchResultExportJobOutcome;
      typedef Aws::Utils::Outcome<ListSearchJobBackupsResult, BackupSearchError> ListSearchJobBackupsOutcome;
      typedef Aws::Utils::Outcome<ListSearchJobResultsResult, BackupSearchError> ListSearchJobResultsOutcome;
      typedef Aws::Utils::Outcome<ListSearchJobsResult, BackupSearchError> ListSearchJobsOutcome;
      typedef Aws::Utils::Outcome<ListSearchResultExportJobsResult, BackupSearchError> ListSearchResultExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BackupSearchError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartSearchJobResult, BackupSearchError> StartSearchJobOutcome;
      typedef Aws::Utils::Outcome<StartSearchResultExportJobResult, BackupSearchError> StartSearchResultExportJobOutcome;
      typedef Aws::Utils::Outcome<StopSearchJobResult, BackupSearchError> StopSearchJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BackupSearchError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BackupSearchError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetSearchJobOutcome> GetSearchJobOutcomeCallable;
      typedef std::future<GetSearchResultExportJobOutcome> GetSearchResultExportJobOutcomeCallable;
      typedef std::future<ListSearchJobBackupsOutcome> ListSearchJobBackupsOutcomeCallable;
      typedef std::future<ListSearchJobResultsOutcome> ListSearchJobResultsOutcomeCallable;
      typedef std::future<ListSearchJobsOutcome> ListSearchJobsOutcomeCallable;
      typedef std::future<ListSearchResultExportJobsOutcome> ListSearchResultExportJobsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartSearchJobOutcome> StartSearchJobOutcomeCallable;
      typedef std::future<StartSearchResultExportJobOutcome> StartSearchResultExportJobOutcomeCallable;
      typedef std::future<StopSearchJobOutcome> StopSearchJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BackupSearchClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BackupSearchClient*, const Model::GetSearchJobRequest&, const Model::GetSearchJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSearchJobResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::GetSearchResultExportJobRequest&, const Model::GetSearchResultExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSearchResultExportJobResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::ListSearchJobBackupsRequest&, const Model::ListSearchJobBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSearchJobBackupsResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::ListSearchJobResultsRequest&, const Model::ListSearchJobResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSearchJobResultsResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::ListSearchJobsRequest&, const Model::ListSearchJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSearchJobsResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::ListSearchResultExportJobsRequest&, const Model::ListSearchResultExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSearchResultExportJobsResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::StartSearchJobRequest&, const Model::StartSearchJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSearchJobResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::StartSearchResultExportJobRequest&, const Model::StartSearchResultExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSearchResultExportJobResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::StopSearchJobRequest&, const Model::StopSearchJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSearchJobResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupSearchClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BackupSearch
} // namespace Aws
