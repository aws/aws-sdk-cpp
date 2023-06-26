/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appintegrations/AppIntegrationsServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appintegrations/AppIntegrationsServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppIntegrationsServiceClient header */
#include <aws/appintegrations/model/CreateDataIntegrationResult.h>
#include <aws/appintegrations/model/CreateEventIntegrationResult.h>
#include <aws/appintegrations/model/DeleteDataIntegrationResult.h>
#include <aws/appintegrations/model/DeleteEventIntegrationResult.h>
#include <aws/appintegrations/model/GetDataIntegrationResult.h>
#include <aws/appintegrations/model/GetEventIntegrationResult.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListDataIntegrationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationsResult.h>
#include <aws/appintegrations/model/ListTagsForResourceResult.h>
#include <aws/appintegrations/model/TagResourceResult.h>
#include <aws/appintegrations/model/UntagResourceResult.h>
#include <aws/appintegrations/model/UpdateDataIntegrationResult.h>
#include <aws/appintegrations/model/UpdateEventIntegrationResult.h>
/* End of service model headers required in AppIntegrationsServiceClient header */

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

  namespace AppIntegrationsService
  {
    using AppIntegrationsServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppIntegrationsServiceEndpointProviderBase = Aws::AppIntegrationsService::Endpoint::AppIntegrationsServiceEndpointProviderBase;
    using AppIntegrationsServiceEndpointProvider = Aws::AppIntegrationsService::Endpoint::AppIntegrationsServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppIntegrationsServiceClient header */
      class CreateDataIntegrationRequest;
      class CreateEventIntegrationRequest;
      class DeleteDataIntegrationRequest;
      class DeleteEventIntegrationRequest;
      class GetDataIntegrationRequest;
      class GetEventIntegrationRequest;
      class ListDataIntegrationAssociationsRequest;
      class ListDataIntegrationsRequest;
      class ListEventIntegrationAssociationsRequest;
      class ListEventIntegrationsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDataIntegrationRequest;
      class UpdateEventIntegrationRequest;
      /* End of service model forward declarations required in AppIntegrationsServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDataIntegrationResult, AppIntegrationsServiceError> CreateDataIntegrationOutcome;
      typedef Aws::Utils::Outcome<CreateEventIntegrationResult, AppIntegrationsServiceError> CreateEventIntegrationOutcome;
      typedef Aws::Utils::Outcome<DeleteDataIntegrationResult, AppIntegrationsServiceError> DeleteDataIntegrationOutcome;
      typedef Aws::Utils::Outcome<DeleteEventIntegrationResult, AppIntegrationsServiceError> DeleteEventIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetDataIntegrationResult, AppIntegrationsServiceError> GetDataIntegrationOutcome;
      typedef Aws::Utils::Outcome<GetEventIntegrationResult, AppIntegrationsServiceError> GetEventIntegrationOutcome;
      typedef Aws::Utils::Outcome<ListDataIntegrationAssociationsResult, AppIntegrationsServiceError> ListDataIntegrationAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListDataIntegrationsResult, AppIntegrationsServiceError> ListDataIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListEventIntegrationAssociationsResult, AppIntegrationsServiceError> ListEventIntegrationAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListEventIntegrationsResult, AppIntegrationsServiceError> ListEventIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppIntegrationsServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppIntegrationsServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppIntegrationsServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataIntegrationResult, AppIntegrationsServiceError> UpdateDataIntegrationOutcome;
      typedef Aws::Utils::Outcome<UpdateEventIntegrationResult, AppIntegrationsServiceError> UpdateEventIntegrationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDataIntegrationOutcome> CreateDataIntegrationOutcomeCallable;
      typedef std::future<CreateEventIntegrationOutcome> CreateEventIntegrationOutcomeCallable;
      typedef std::future<DeleteDataIntegrationOutcome> DeleteDataIntegrationOutcomeCallable;
      typedef std::future<DeleteEventIntegrationOutcome> DeleteEventIntegrationOutcomeCallable;
      typedef std::future<GetDataIntegrationOutcome> GetDataIntegrationOutcomeCallable;
      typedef std::future<GetEventIntegrationOutcome> GetEventIntegrationOutcomeCallable;
      typedef std::future<ListDataIntegrationAssociationsOutcome> ListDataIntegrationAssociationsOutcomeCallable;
      typedef std::future<ListDataIntegrationsOutcome> ListDataIntegrationsOutcomeCallable;
      typedef std::future<ListEventIntegrationAssociationsOutcome> ListEventIntegrationAssociationsOutcomeCallable;
      typedef std::future<ListEventIntegrationsOutcome> ListEventIntegrationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDataIntegrationOutcome> UpdateDataIntegrationOutcomeCallable;
      typedef std::future<UpdateEventIntegrationOutcome> UpdateEventIntegrationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppIntegrationsServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::CreateDataIntegrationRequest&, const Model::CreateDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::CreateEventIntegrationRequest&, const Model::CreateEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::DeleteDataIntegrationRequest&, const Model::DeleteDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::DeleteEventIntegrationRequest&, const Model::DeleteEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::GetDataIntegrationRequest&, const Model::GetDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::GetEventIntegrationRequest&, const Model::GetEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListDataIntegrationAssociationsRequest&, const Model::ListDataIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListDataIntegrationsRequest&, const Model::ListDataIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIntegrationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListEventIntegrationAssociationsRequest&, const Model::ListEventIntegrationAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventIntegrationAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListEventIntegrationsRequest&, const Model::ListEventIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventIntegrationsResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UpdateDataIntegrationRequest&, const Model::UpdateDataIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataIntegrationResponseReceivedHandler;
    typedef std::function<void(const AppIntegrationsServiceClient*, const Model::UpdateEventIntegrationRequest&, const Model::UpdateEventIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventIntegrationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppIntegrationsService
} // namespace Aws
