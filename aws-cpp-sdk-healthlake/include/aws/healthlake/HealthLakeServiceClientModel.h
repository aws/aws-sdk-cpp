/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/healthlake/HealthLakeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/healthlake/HealthLakeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in HealthLakeClient header */
#include <aws/healthlake/model/CreateFHIRDatastoreResult.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRExportJobResult.h>
#include <aws/healthlake/model/DescribeFHIRImportJobResult.h>
#include <aws/healthlake/model/ListFHIRDatastoresResult.h>
#include <aws/healthlake/model/ListFHIRExportJobsResult.h>
#include <aws/healthlake/model/ListFHIRImportJobsResult.h>
#include <aws/healthlake/model/ListTagsForResourceResult.h>
#include <aws/healthlake/model/StartFHIRExportJobResult.h>
#include <aws/healthlake/model/StartFHIRImportJobResult.h>
#include <aws/healthlake/model/TagResourceResult.h>
#include <aws/healthlake/model/UntagResourceResult.h>
/* End of service model headers required in HealthLakeClient header */

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

  namespace HealthLake
  {
    using HealthLakeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using HealthLakeEndpointProviderBase = Aws::HealthLake::Endpoint::HealthLakeEndpointProviderBase;
    using HealthLakeEndpointProvider = Aws::HealthLake::Endpoint::HealthLakeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in HealthLakeClient header */
      class CreateFHIRDatastoreRequest;
      class DeleteFHIRDatastoreRequest;
      class DescribeFHIRDatastoreRequest;
      class DescribeFHIRExportJobRequest;
      class DescribeFHIRImportJobRequest;
      class ListFHIRDatastoresRequest;
      class ListFHIRExportJobsRequest;
      class ListFHIRImportJobsRequest;
      class ListTagsForResourceRequest;
      class StartFHIRExportJobRequest;
      class StartFHIRImportJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in HealthLakeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateFHIRDatastoreResult, HealthLakeError> CreateFHIRDatastoreOutcome;
      typedef Aws::Utils::Outcome<DeleteFHIRDatastoreResult, HealthLakeError> DeleteFHIRDatastoreOutcome;
      typedef Aws::Utils::Outcome<DescribeFHIRDatastoreResult, HealthLakeError> DescribeFHIRDatastoreOutcome;
      typedef Aws::Utils::Outcome<DescribeFHIRExportJobResult, HealthLakeError> DescribeFHIRExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeFHIRImportJobResult, HealthLakeError> DescribeFHIRImportJobOutcome;
      typedef Aws::Utils::Outcome<ListFHIRDatastoresResult, HealthLakeError> ListFHIRDatastoresOutcome;
      typedef Aws::Utils::Outcome<ListFHIRExportJobsResult, HealthLakeError> ListFHIRExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListFHIRImportJobsResult, HealthLakeError> ListFHIRImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, HealthLakeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartFHIRExportJobResult, HealthLakeError> StartFHIRExportJobOutcome;
      typedef Aws::Utils::Outcome<StartFHIRImportJobResult, HealthLakeError> StartFHIRImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, HealthLakeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, HealthLakeError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateFHIRDatastoreOutcome> CreateFHIRDatastoreOutcomeCallable;
      typedef std::future<DeleteFHIRDatastoreOutcome> DeleteFHIRDatastoreOutcomeCallable;
      typedef std::future<DescribeFHIRDatastoreOutcome> DescribeFHIRDatastoreOutcomeCallable;
      typedef std::future<DescribeFHIRExportJobOutcome> DescribeFHIRExportJobOutcomeCallable;
      typedef std::future<DescribeFHIRImportJobOutcome> DescribeFHIRImportJobOutcomeCallable;
      typedef std::future<ListFHIRDatastoresOutcome> ListFHIRDatastoresOutcomeCallable;
      typedef std::future<ListFHIRExportJobsOutcome> ListFHIRExportJobsOutcomeCallable;
      typedef std::future<ListFHIRImportJobsOutcome> ListFHIRImportJobsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartFHIRExportJobOutcome> StartFHIRExportJobOutcomeCallable;
      typedef std::future<StartFHIRImportJobOutcome> StartFHIRImportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class HealthLakeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const HealthLakeClient*, const Model::CreateFHIRDatastoreRequest&, const Model::CreateFHIRDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFHIRDatastoreResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DeleteFHIRDatastoreRequest&, const Model::DeleteFHIRDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFHIRDatastoreResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRDatastoreRequest&, const Model::DescribeFHIRDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFHIRDatastoreResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRExportJobRequest&, const Model::DescribeFHIRExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFHIRExportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::DescribeFHIRImportJobRequest&, const Model::DescribeFHIRImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFHIRImportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRDatastoresRequest&, const Model::ListFHIRDatastoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFHIRDatastoresResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRExportJobsRequest&, const Model::ListFHIRExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFHIRExportJobsResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::ListFHIRImportJobsRequest&, const Model::ListFHIRImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFHIRImportJobsResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::StartFHIRExportJobRequest&, const Model::StartFHIRExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFHIRExportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::StartFHIRImportJobRequest&, const Model::StartFHIRImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFHIRImportJobResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const HealthLakeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace HealthLake
} // namespace Aws
