/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MigrationHubRefactorSpacesClient header */
#include <aws/migration-hub-refactor-spaces/model/CreateApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListTagsForResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/PutResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/TagResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/UntagResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/UpdateRouteResult.h>
/* End of service model headers required in MigrationHubRefactorSpacesClient header */

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

  namespace MigrationHubRefactorSpaces
  {
    using MigrationHubRefactorSpacesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MigrationHubRefactorSpacesEndpointProviderBase = Aws::MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesEndpointProviderBase;
    using MigrationHubRefactorSpacesEndpointProvider = Aws::MigrationHubRefactorSpaces::Endpoint::MigrationHubRefactorSpacesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MigrationHubRefactorSpacesClient header */
      class CreateApplicationRequest;
      class CreateEnvironmentRequest;
      class CreateRouteRequest;
      class CreateServiceRequest;
      class DeleteApplicationRequest;
      class DeleteEnvironmentRequest;
      class DeleteResourcePolicyRequest;
      class DeleteRouteRequest;
      class DeleteServiceRequest;
      class GetApplicationRequest;
      class GetEnvironmentRequest;
      class GetResourcePolicyRequest;
      class GetRouteRequest;
      class GetServiceRequest;
      class ListApplicationsRequest;
      class ListEnvironmentVpcsRequest;
      class ListEnvironmentsRequest;
      class ListRoutesRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class PutResourcePolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateRouteRequest;
      /* End of service model forward declarations required in MigrationHubRefactorSpacesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApplicationResult, MigrationHubRefactorSpacesError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, MigrationHubRefactorSpacesError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateRouteResult, MigrationHubRefactorSpacesError> CreateRouteOutcome;
      typedef Aws::Utils::Outcome<CreateServiceResult, MigrationHubRefactorSpacesError> CreateServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, MigrationHubRefactorSpacesError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, MigrationHubRefactorSpacesError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, MigrationHubRefactorSpacesError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRouteResult, MigrationHubRefactorSpacesError> DeleteRouteOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceResult, MigrationHubRefactorSpacesError> DeleteServiceOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, MigrationHubRefactorSpacesError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, MigrationHubRefactorSpacesError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, MigrationHubRefactorSpacesError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetRouteResult, MigrationHubRefactorSpacesError> GetRouteOutcome;
      typedef Aws::Utils::Outcome<GetServiceResult, MigrationHubRefactorSpacesError> GetServiceOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, MigrationHubRefactorSpacesError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentVpcsResult, MigrationHubRefactorSpacesError> ListEnvironmentVpcsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, MigrationHubRefactorSpacesError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListRoutesResult, MigrationHubRefactorSpacesError> ListRoutesOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, MigrationHubRefactorSpacesError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MigrationHubRefactorSpacesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, MigrationHubRefactorSpacesError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MigrationHubRefactorSpacesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MigrationHubRefactorSpacesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateRouteResult, MigrationHubRefactorSpacesError> UpdateRouteOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
      typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
      typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetRouteOutcome> GetRouteOutcomeCallable;
      typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListEnvironmentVpcsOutcome> ListEnvironmentVpcsOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListRoutesOutcome> ListRoutesOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateRouteOutcome> UpdateRouteOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MigrationHubRefactorSpacesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetRouteRequest&, const Model::GetRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRouteResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListEnvironmentVpcsRequest&, const Model::ListEnvironmentVpcsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentVpcsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListRoutesRequest&, const Model::ListRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::UpdateRouteRequest&, const Model::UpdateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
