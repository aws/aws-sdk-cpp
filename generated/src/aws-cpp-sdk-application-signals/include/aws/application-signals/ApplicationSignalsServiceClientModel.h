/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/application-signals/ApplicationSignalsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/application-signals/ApplicationSignalsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApplicationSignalsClient header */
#include <aws/application-signals/model/BatchGetServiceLevelObjectiveBudgetReportResult.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsResult.h>
#include <aws/application-signals/model/CreateServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/DeleteServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/GetServiceResult.h>
#include <aws/application-signals/model/GetServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/ListServiceDependenciesResult.h>
#include <aws/application-signals/model/ListServiceDependentsResult.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsResult.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesResult.h>
#include <aws/application-signals/model/ListServiceOperationsResult.h>
#include <aws/application-signals/model/ListServicesResult.h>
#include <aws/application-signals/model/ListTagsForResourceResult.h>
#include <aws/application-signals/model/StartDiscoveryResult.h>
#include <aws/application-signals/model/TagResourceResult.h>
#include <aws/application-signals/model/UntagResourceResult.h>
#include <aws/application-signals/model/UpdateServiceLevelObjectiveResult.h>
#include <aws/application-signals/model/StartDiscoveryRequest.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesRequest.h>
/* End of service model headers required in ApplicationSignalsClient header */

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

  namespace ApplicationSignals
  {
    using ApplicationSignalsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ApplicationSignalsEndpointProviderBase = Aws::ApplicationSignals::Endpoint::ApplicationSignalsEndpointProviderBase;
    using ApplicationSignalsEndpointProvider = Aws::ApplicationSignals::Endpoint::ApplicationSignalsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApplicationSignalsClient header */
      class BatchGetServiceLevelObjectiveBudgetReportRequest;
      class BatchUpdateExclusionWindowsRequest;
      class CreateServiceLevelObjectiveRequest;
      class DeleteServiceLevelObjectiveRequest;
      class GetServiceRequest;
      class GetServiceLevelObjectiveRequest;
      class ListServiceDependenciesRequest;
      class ListServiceDependentsRequest;
      class ListServiceLevelObjectiveExclusionWindowsRequest;
      class ListServiceLevelObjectivesRequest;
      class ListServiceOperationsRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class StartDiscoveryRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateServiceLevelObjectiveRequest;
      /* End of service model forward declarations required in ApplicationSignalsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetServiceLevelObjectiveBudgetReportResult, ApplicationSignalsError> BatchGetServiceLevelObjectiveBudgetReportOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateExclusionWindowsResult, ApplicationSignalsError> BatchUpdateExclusionWindowsOutcome;
      typedef Aws::Utils::Outcome<CreateServiceLevelObjectiveResult, ApplicationSignalsError> CreateServiceLevelObjectiveOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceLevelObjectiveResult, ApplicationSignalsError> DeleteServiceLevelObjectiveOutcome;
      typedef Aws::Utils::Outcome<GetServiceResult, ApplicationSignalsError> GetServiceOutcome;
      typedef Aws::Utils::Outcome<GetServiceLevelObjectiveResult, ApplicationSignalsError> GetServiceLevelObjectiveOutcome;
      typedef Aws::Utils::Outcome<ListServiceDependenciesResult, ApplicationSignalsError> ListServiceDependenciesOutcome;
      typedef Aws::Utils::Outcome<ListServiceDependentsResult, ApplicationSignalsError> ListServiceDependentsOutcome;
      typedef Aws::Utils::Outcome<ListServiceLevelObjectiveExclusionWindowsResult, ApplicationSignalsError> ListServiceLevelObjectiveExclusionWindowsOutcome;
      typedef Aws::Utils::Outcome<ListServiceLevelObjectivesResult, ApplicationSignalsError> ListServiceLevelObjectivesOutcome;
      typedef Aws::Utils::Outcome<ListServiceOperationsResult, ApplicationSignalsError> ListServiceOperationsOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, ApplicationSignalsError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ApplicationSignalsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartDiscoveryResult, ApplicationSignalsError> StartDiscoveryOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ApplicationSignalsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ApplicationSignalsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceLevelObjectiveResult, ApplicationSignalsError> UpdateServiceLevelObjectiveOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetServiceLevelObjectiveBudgetReportOutcome> BatchGetServiceLevelObjectiveBudgetReportOutcomeCallable;
      typedef std::future<BatchUpdateExclusionWindowsOutcome> BatchUpdateExclusionWindowsOutcomeCallable;
      typedef std::future<CreateServiceLevelObjectiveOutcome> CreateServiceLevelObjectiveOutcomeCallable;
      typedef std::future<DeleteServiceLevelObjectiveOutcome> DeleteServiceLevelObjectiveOutcomeCallable;
      typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
      typedef std::future<GetServiceLevelObjectiveOutcome> GetServiceLevelObjectiveOutcomeCallable;
      typedef std::future<ListServiceDependenciesOutcome> ListServiceDependenciesOutcomeCallable;
      typedef std::future<ListServiceDependentsOutcome> ListServiceDependentsOutcomeCallable;
      typedef std::future<ListServiceLevelObjectiveExclusionWindowsOutcome> ListServiceLevelObjectiveExclusionWindowsOutcomeCallable;
      typedef std::future<ListServiceLevelObjectivesOutcome> ListServiceLevelObjectivesOutcomeCallable;
      typedef std::future<ListServiceOperationsOutcome> ListServiceOperationsOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartDiscoveryOutcome> StartDiscoveryOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateServiceLevelObjectiveOutcome> UpdateServiceLevelObjectiveOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApplicationSignalsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ApplicationSignalsClient*, const Model::BatchGetServiceLevelObjectiveBudgetReportRequest&, const Model::BatchGetServiceLevelObjectiveBudgetReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetServiceLevelObjectiveBudgetReportResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::BatchUpdateExclusionWindowsRequest&, const Model::BatchUpdateExclusionWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateExclusionWindowsResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::CreateServiceLevelObjectiveRequest&, const Model::CreateServiceLevelObjectiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceLevelObjectiveResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::DeleteServiceLevelObjectiveRequest&, const Model::DeleteServiceLevelObjectiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceLevelObjectiveResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::GetServiceLevelObjectiveRequest&, const Model::GetServiceLevelObjectiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceLevelObjectiveResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListServiceDependenciesRequest&, const Model::ListServiceDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceDependenciesResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListServiceDependentsRequest&, const Model::ListServiceDependentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceDependentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListServiceLevelObjectiveExclusionWindowsRequest&, const Model::ListServiceLevelObjectiveExclusionWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceLevelObjectiveExclusionWindowsResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListServiceLevelObjectivesRequest&, const Model::ListServiceLevelObjectivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceLevelObjectivesResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListServiceOperationsRequest&, const Model::ListServiceOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceOperationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::StartDiscoveryRequest&, const Model::StartDiscoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDiscoveryResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationSignalsClient*, const Model::UpdateServiceLevelObjectiveRequest&, const Model::UpdateServiceLevelObjectiveOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceLevelObjectiveResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ApplicationSignals
} // namespace Aws
