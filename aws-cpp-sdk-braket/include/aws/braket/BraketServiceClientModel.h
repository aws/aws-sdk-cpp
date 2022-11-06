/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/braket/BraketErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/braket/BraketEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BraketClient header */
#include <aws/braket/model/CancelJobResult.h>
#include <aws/braket/model/CancelQuantumTaskResult.h>
#include <aws/braket/model/CreateJobResult.h>
#include <aws/braket/model/CreateQuantumTaskResult.h>
#include <aws/braket/model/GetDeviceResult.h>
#include <aws/braket/model/GetJobResult.h>
#include <aws/braket/model/GetQuantumTaskResult.h>
#include <aws/braket/model/ListTagsForResourceResult.h>
#include <aws/braket/model/SearchDevicesResult.h>
#include <aws/braket/model/SearchJobsResult.h>
#include <aws/braket/model/SearchQuantumTasksResult.h>
#include <aws/braket/model/TagResourceResult.h>
#include <aws/braket/model/UntagResourceResult.h>
/* End of service model headers required in BraketClient header */

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

  namespace Braket
  {
    using BraketClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BraketEndpointProviderBase = Aws::Braket::Endpoint::BraketEndpointProviderBase;
    using BraketEndpointProvider = Aws::Braket::Endpoint::BraketEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BraketClient header */
      class CancelJobRequest;
      class CancelQuantumTaskRequest;
      class CreateJobRequest;
      class CreateQuantumTaskRequest;
      class GetDeviceRequest;
      class GetJobRequest;
      class GetQuantumTaskRequest;
      class ListTagsForResourceRequest;
      class SearchDevicesRequest;
      class SearchJobsRequest;
      class SearchQuantumTasksRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in BraketClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobResult, BraketError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CancelQuantumTaskResult, BraketError> CancelQuantumTaskOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, BraketError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateQuantumTaskResult, BraketError> CreateQuantumTaskOutcome;
      typedef Aws::Utils::Outcome<GetDeviceResult, BraketError> GetDeviceOutcome;
      typedef Aws::Utils::Outcome<GetJobResult, BraketError> GetJobOutcome;
      typedef Aws::Utils::Outcome<GetQuantumTaskResult, BraketError> GetQuantumTaskOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BraketError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<SearchDevicesResult, BraketError> SearchDevicesOutcome;
      typedef Aws::Utils::Outcome<SearchJobsResult, BraketError> SearchJobsOutcome;
      typedef Aws::Utils::Outcome<SearchQuantumTasksResult, BraketError> SearchQuantumTasksOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BraketError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BraketError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CancelQuantumTaskOutcome> CancelQuantumTaskOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateQuantumTaskOutcome> CreateQuantumTaskOutcomeCallable;
      typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
      typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
      typedef std::future<GetQuantumTaskOutcome> GetQuantumTaskOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<SearchDevicesOutcome> SearchDevicesOutcomeCallable;
      typedef std::future<SearchJobsOutcome> SearchJobsOutcomeCallable;
      typedef std::future<SearchQuantumTasksOutcome> SearchQuantumTasksOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BraketClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BraketClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::CancelQuantumTaskRequest&, const Model::CancelQuantumTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelQuantumTaskResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::CreateQuantumTaskRequest&, const Model::CreateQuantumTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuantumTaskResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::GetQuantumTaskRequest&, const Model::GetQuantumTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQuantumTaskResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::SearchDevicesRequest&, const Model::SearchDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDevicesResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::SearchJobsRequest&, const Model::SearchJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchJobsResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::SearchQuantumTasksRequest&, const Model::SearchQuantumTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQuantumTasksResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BraketClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Braket
} // namespace Aws
