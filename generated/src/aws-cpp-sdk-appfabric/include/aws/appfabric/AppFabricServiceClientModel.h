/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appfabric/AppFabricErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appfabric/AppFabricEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppFabricClient header */
#include <aws/appfabric/model/BatchGetUserAccessTasksResult.h>
#include <aws/appfabric/model/ConnectAppAuthorizationResult.h>
#include <aws/appfabric/model/CreateAppAuthorizationResult.h>
#include <aws/appfabric/model/CreateAppBundleResult.h>
#include <aws/appfabric/model/CreateIngestionResult.h>
#include <aws/appfabric/model/CreateIngestionDestinationResult.h>
#include <aws/appfabric/model/DeleteAppAuthorizationResult.h>
#include <aws/appfabric/model/DeleteAppBundleResult.h>
#include <aws/appfabric/model/DeleteIngestionResult.h>
#include <aws/appfabric/model/DeleteIngestionDestinationResult.h>
#include <aws/appfabric/model/GetAppAuthorizationResult.h>
#include <aws/appfabric/model/GetAppBundleResult.h>
#include <aws/appfabric/model/GetIngestionResult.h>
#include <aws/appfabric/model/GetIngestionDestinationResult.h>
#include <aws/appfabric/model/ListAppAuthorizationsResult.h>
#include <aws/appfabric/model/ListAppBundlesResult.h>
#include <aws/appfabric/model/ListIngestionDestinationsResult.h>
#include <aws/appfabric/model/ListIngestionsResult.h>
#include <aws/appfabric/model/ListTagsForResourceResult.h>
#include <aws/appfabric/model/StartIngestionResult.h>
#include <aws/appfabric/model/StartUserAccessTasksResult.h>
#include <aws/appfabric/model/StopIngestionResult.h>
#include <aws/appfabric/model/TagResourceResult.h>
#include <aws/appfabric/model/UntagResourceResult.h>
#include <aws/appfabric/model/UpdateAppAuthorizationResult.h>
#include <aws/appfabric/model/UpdateIngestionDestinationResult.h>
/* End of service model headers required in AppFabricClient header */

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

  namespace AppFabric
  {
    using AppFabricClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppFabricEndpointProviderBase = Aws::AppFabric::Endpoint::AppFabricEndpointProviderBase;
    using AppFabricEndpointProvider = Aws::AppFabric::Endpoint::AppFabricEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppFabricClient header */
      class BatchGetUserAccessTasksRequest;
      class ConnectAppAuthorizationRequest;
      class CreateAppAuthorizationRequest;
      class CreateAppBundleRequest;
      class CreateIngestionRequest;
      class CreateIngestionDestinationRequest;
      class DeleteAppAuthorizationRequest;
      class DeleteAppBundleRequest;
      class DeleteIngestionRequest;
      class DeleteIngestionDestinationRequest;
      class GetAppAuthorizationRequest;
      class GetAppBundleRequest;
      class GetIngestionRequest;
      class GetIngestionDestinationRequest;
      class ListAppAuthorizationsRequest;
      class ListAppBundlesRequest;
      class ListIngestionDestinationsRequest;
      class ListIngestionsRequest;
      class ListTagsForResourceRequest;
      class StartIngestionRequest;
      class StartUserAccessTasksRequest;
      class StopIngestionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAppAuthorizationRequest;
      class UpdateIngestionDestinationRequest;
      /* End of service model forward declarations required in AppFabricClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetUserAccessTasksResult, AppFabricError> BatchGetUserAccessTasksOutcome;
      typedef Aws::Utils::Outcome<ConnectAppAuthorizationResult, AppFabricError> ConnectAppAuthorizationOutcome;
      typedef Aws::Utils::Outcome<CreateAppAuthorizationResult, AppFabricError> CreateAppAuthorizationOutcome;
      typedef Aws::Utils::Outcome<CreateAppBundleResult, AppFabricError> CreateAppBundleOutcome;
      typedef Aws::Utils::Outcome<CreateIngestionResult, AppFabricError> CreateIngestionOutcome;
      typedef Aws::Utils::Outcome<CreateIngestionDestinationResult, AppFabricError> CreateIngestionDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteAppAuthorizationResult, AppFabricError> DeleteAppAuthorizationOutcome;
      typedef Aws::Utils::Outcome<DeleteAppBundleResult, AppFabricError> DeleteAppBundleOutcome;
      typedef Aws::Utils::Outcome<DeleteIngestionResult, AppFabricError> DeleteIngestionOutcome;
      typedef Aws::Utils::Outcome<DeleteIngestionDestinationResult, AppFabricError> DeleteIngestionDestinationOutcome;
      typedef Aws::Utils::Outcome<GetAppAuthorizationResult, AppFabricError> GetAppAuthorizationOutcome;
      typedef Aws::Utils::Outcome<GetAppBundleResult, AppFabricError> GetAppBundleOutcome;
      typedef Aws::Utils::Outcome<GetIngestionResult, AppFabricError> GetIngestionOutcome;
      typedef Aws::Utils::Outcome<GetIngestionDestinationResult, AppFabricError> GetIngestionDestinationOutcome;
      typedef Aws::Utils::Outcome<ListAppAuthorizationsResult, AppFabricError> ListAppAuthorizationsOutcome;
      typedef Aws::Utils::Outcome<ListAppBundlesResult, AppFabricError> ListAppBundlesOutcome;
      typedef Aws::Utils::Outcome<ListIngestionDestinationsResult, AppFabricError> ListIngestionDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListIngestionsResult, AppFabricError> ListIngestionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppFabricError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartIngestionResult, AppFabricError> StartIngestionOutcome;
      typedef Aws::Utils::Outcome<StartUserAccessTasksResult, AppFabricError> StartUserAccessTasksOutcome;
      typedef Aws::Utils::Outcome<StopIngestionResult, AppFabricError> StopIngestionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppFabricError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppFabricError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAppAuthorizationResult, AppFabricError> UpdateAppAuthorizationOutcome;
      typedef Aws::Utils::Outcome<UpdateIngestionDestinationResult, AppFabricError> UpdateIngestionDestinationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetUserAccessTasksOutcome> BatchGetUserAccessTasksOutcomeCallable;
      typedef std::future<ConnectAppAuthorizationOutcome> ConnectAppAuthorizationOutcomeCallable;
      typedef std::future<CreateAppAuthorizationOutcome> CreateAppAuthorizationOutcomeCallable;
      typedef std::future<CreateAppBundleOutcome> CreateAppBundleOutcomeCallable;
      typedef std::future<CreateIngestionOutcome> CreateIngestionOutcomeCallable;
      typedef std::future<CreateIngestionDestinationOutcome> CreateIngestionDestinationOutcomeCallable;
      typedef std::future<DeleteAppAuthorizationOutcome> DeleteAppAuthorizationOutcomeCallable;
      typedef std::future<DeleteAppBundleOutcome> DeleteAppBundleOutcomeCallable;
      typedef std::future<DeleteIngestionOutcome> DeleteIngestionOutcomeCallable;
      typedef std::future<DeleteIngestionDestinationOutcome> DeleteIngestionDestinationOutcomeCallable;
      typedef std::future<GetAppAuthorizationOutcome> GetAppAuthorizationOutcomeCallable;
      typedef std::future<GetAppBundleOutcome> GetAppBundleOutcomeCallable;
      typedef std::future<GetIngestionOutcome> GetIngestionOutcomeCallable;
      typedef std::future<GetIngestionDestinationOutcome> GetIngestionDestinationOutcomeCallable;
      typedef std::future<ListAppAuthorizationsOutcome> ListAppAuthorizationsOutcomeCallable;
      typedef std::future<ListAppBundlesOutcome> ListAppBundlesOutcomeCallable;
      typedef std::future<ListIngestionDestinationsOutcome> ListIngestionDestinationsOutcomeCallable;
      typedef std::future<ListIngestionsOutcome> ListIngestionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartIngestionOutcome> StartIngestionOutcomeCallable;
      typedef std::future<StartUserAccessTasksOutcome> StartUserAccessTasksOutcomeCallable;
      typedef std::future<StopIngestionOutcome> StopIngestionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAppAuthorizationOutcome> UpdateAppAuthorizationOutcomeCallable;
      typedef std::future<UpdateIngestionDestinationOutcome> UpdateIngestionDestinationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppFabricClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppFabricClient*, const Model::BatchGetUserAccessTasksRequest&, const Model::BatchGetUserAccessTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetUserAccessTasksResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::ConnectAppAuthorizationRequest&, const Model::ConnectAppAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConnectAppAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::CreateAppAuthorizationRequest&, const Model::CreateAppAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::CreateAppBundleRequest&, const Model::CreateAppBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppBundleResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::CreateIngestionRequest&, const Model::CreateIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngestionResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::CreateIngestionDestinationRequest&, const Model::CreateIngestionDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIngestionDestinationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::DeleteAppAuthorizationRequest&, const Model::DeleteAppAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::DeleteAppBundleRequest&, const Model::DeleteAppBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppBundleResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::DeleteIngestionRequest&, const Model::DeleteIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIngestionResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::DeleteIngestionDestinationRequest&, const Model::DeleteIngestionDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIngestionDestinationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::GetAppAuthorizationRequest&, const Model::GetAppAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::GetAppBundleRequest&, const Model::GetAppBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppBundleResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::GetIngestionRequest&, const Model::GetIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIngestionResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::GetIngestionDestinationRequest&, const Model::GetIngestionDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIngestionDestinationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::ListAppAuthorizationsRequest&, const Model::ListAppAuthorizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppAuthorizationsResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::ListAppBundlesRequest&, const Model::ListAppBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppBundlesResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::ListIngestionDestinationsRequest&, const Model::ListIngestionDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestionDestinationsResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::ListIngestionsRequest&, const Model::ListIngestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIngestionsResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::StartIngestionRequest&, const Model::StartIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartIngestionResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::StartUserAccessTasksRequest&, const Model::StartUserAccessTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartUserAccessTasksResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::StopIngestionRequest&, const Model::StopIngestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopIngestionResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::UpdateAppAuthorizationRequest&, const Model::UpdateAppAuthorizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppAuthorizationResponseReceivedHandler;
    typedef std::function<void(const AppFabricClient*, const Model::UpdateIngestionDestinationRequest&, const Model::UpdateIngestionDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIngestionDestinationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppFabric
} // namespace Aws
