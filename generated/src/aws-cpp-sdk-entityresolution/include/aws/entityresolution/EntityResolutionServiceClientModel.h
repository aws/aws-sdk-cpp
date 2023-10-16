/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/entityresolution/EntityResolutionErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/entityresolution/EntityResolutionEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EntityResolutionClient header */
#include <aws/entityresolution/model/CreateIdMappingWorkflowResult.h>
#include <aws/entityresolution/model/CreateMatchingWorkflowResult.h>
#include <aws/entityresolution/model/CreateSchemaMappingResult.h>
#include <aws/entityresolution/model/DeleteIdMappingWorkflowResult.h>
#include <aws/entityresolution/model/DeleteMatchingWorkflowResult.h>
#include <aws/entityresolution/model/DeleteSchemaMappingResult.h>
#include <aws/entityresolution/model/GetIdMappingJobResult.h>
#include <aws/entityresolution/model/GetIdMappingWorkflowResult.h>
#include <aws/entityresolution/model/GetMatchIdResult.h>
#include <aws/entityresolution/model/GetMatchingJobResult.h>
#include <aws/entityresolution/model/GetMatchingWorkflowResult.h>
#include <aws/entityresolution/model/GetProviderServiceResult.h>
#include <aws/entityresolution/model/GetSchemaMappingResult.h>
#include <aws/entityresolution/model/ListIdMappingJobsResult.h>
#include <aws/entityresolution/model/ListIdMappingWorkflowsResult.h>
#include <aws/entityresolution/model/ListMatchingJobsResult.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsResult.h>
#include <aws/entityresolution/model/ListProviderServicesResult.h>
#include <aws/entityresolution/model/ListSchemaMappingsResult.h>
#include <aws/entityresolution/model/ListTagsForResourceResult.h>
#include <aws/entityresolution/model/StartIdMappingJobResult.h>
#include <aws/entityresolution/model/StartMatchingJobResult.h>
#include <aws/entityresolution/model/TagResourceResult.h>
#include <aws/entityresolution/model/UntagResourceResult.h>
#include <aws/entityresolution/model/UpdateIdMappingWorkflowResult.h>
#include <aws/entityresolution/model/UpdateMatchingWorkflowResult.h>
#include <aws/entityresolution/model/UpdateSchemaMappingResult.h>
/* End of service model headers required in EntityResolutionClient header */

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

  namespace EntityResolution
  {
    using EntityResolutionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using EntityResolutionEndpointProviderBase = Aws::EntityResolution::Endpoint::EntityResolutionEndpointProviderBase;
    using EntityResolutionEndpointProvider = Aws::EntityResolution::Endpoint::EntityResolutionEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EntityResolutionClient header */
      class CreateIdMappingWorkflowRequest;
      class CreateMatchingWorkflowRequest;
      class CreateSchemaMappingRequest;
      class DeleteIdMappingWorkflowRequest;
      class DeleteMatchingWorkflowRequest;
      class DeleteSchemaMappingRequest;
      class GetIdMappingJobRequest;
      class GetIdMappingWorkflowRequest;
      class GetMatchIdRequest;
      class GetMatchingJobRequest;
      class GetMatchingWorkflowRequest;
      class GetProviderServiceRequest;
      class GetSchemaMappingRequest;
      class ListIdMappingJobsRequest;
      class ListIdMappingWorkflowsRequest;
      class ListMatchingJobsRequest;
      class ListMatchingWorkflowsRequest;
      class ListProviderServicesRequest;
      class ListSchemaMappingsRequest;
      class ListTagsForResourceRequest;
      class StartIdMappingJobRequest;
      class StartMatchingJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateIdMappingWorkflowRequest;
      class UpdateMatchingWorkflowRequest;
      class UpdateSchemaMappingRequest;
      /* End of service model forward declarations required in EntityResolutionClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateIdMappingWorkflowResult, EntityResolutionError> CreateIdMappingWorkflowOutcome;
      typedef Aws::Utils::Outcome<CreateMatchingWorkflowResult, EntityResolutionError> CreateMatchingWorkflowOutcome;
      typedef Aws::Utils::Outcome<CreateSchemaMappingResult, EntityResolutionError> CreateSchemaMappingOutcome;
      typedef Aws::Utils::Outcome<DeleteIdMappingWorkflowResult, EntityResolutionError> DeleteIdMappingWorkflowOutcome;
      typedef Aws::Utils::Outcome<DeleteMatchingWorkflowResult, EntityResolutionError> DeleteMatchingWorkflowOutcome;
      typedef Aws::Utils::Outcome<DeleteSchemaMappingResult, EntityResolutionError> DeleteSchemaMappingOutcome;
      typedef Aws::Utils::Outcome<GetIdMappingJobResult, EntityResolutionError> GetIdMappingJobOutcome;
      typedef Aws::Utils::Outcome<GetIdMappingWorkflowResult, EntityResolutionError> GetIdMappingWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetMatchIdResult, EntityResolutionError> GetMatchIdOutcome;
      typedef Aws::Utils::Outcome<GetMatchingJobResult, EntityResolutionError> GetMatchingJobOutcome;
      typedef Aws::Utils::Outcome<GetMatchingWorkflowResult, EntityResolutionError> GetMatchingWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetProviderServiceResult, EntityResolutionError> GetProviderServiceOutcome;
      typedef Aws::Utils::Outcome<GetSchemaMappingResult, EntityResolutionError> GetSchemaMappingOutcome;
      typedef Aws::Utils::Outcome<ListIdMappingJobsResult, EntityResolutionError> ListIdMappingJobsOutcome;
      typedef Aws::Utils::Outcome<ListIdMappingWorkflowsResult, EntityResolutionError> ListIdMappingWorkflowsOutcome;
      typedef Aws::Utils::Outcome<ListMatchingJobsResult, EntityResolutionError> ListMatchingJobsOutcome;
      typedef Aws::Utils::Outcome<ListMatchingWorkflowsResult, EntityResolutionError> ListMatchingWorkflowsOutcome;
      typedef Aws::Utils::Outcome<ListProviderServicesResult, EntityResolutionError> ListProviderServicesOutcome;
      typedef Aws::Utils::Outcome<ListSchemaMappingsResult, EntityResolutionError> ListSchemaMappingsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EntityResolutionError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartIdMappingJobResult, EntityResolutionError> StartIdMappingJobOutcome;
      typedef Aws::Utils::Outcome<StartMatchingJobResult, EntityResolutionError> StartMatchingJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, EntityResolutionError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, EntityResolutionError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateIdMappingWorkflowResult, EntityResolutionError> UpdateIdMappingWorkflowOutcome;
      typedef Aws::Utils::Outcome<UpdateMatchingWorkflowResult, EntityResolutionError> UpdateMatchingWorkflowOutcome;
      typedef Aws::Utils::Outcome<UpdateSchemaMappingResult, EntityResolutionError> UpdateSchemaMappingOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateIdMappingWorkflowOutcome> CreateIdMappingWorkflowOutcomeCallable;
      typedef std::future<CreateMatchingWorkflowOutcome> CreateMatchingWorkflowOutcomeCallable;
      typedef std::future<CreateSchemaMappingOutcome> CreateSchemaMappingOutcomeCallable;
      typedef std::future<DeleteIdMappingWorkflowOutcome> DeleteIdMappingWorkflowOutcomeCallable;
      typedef std::future<DeleteMatchingWorkflowOutcome> DeleteMatchingWorkflowOutcomeCallable;
      typedef std::future<DeleteSchemaMappingOutcome> DeleteSchemaMappingOutcomeCallable;
      typedef std::future<GetIdMappingJobOutcome> GetIdMappingJobOutcomeCallable;
      typedef std::future<GetIdMappingWorkflowOutcome> GetIdMappingWorkflowOutcomeCallable;
      typedef std::future<GetMatchIdOutcome> GetMatchIdOutcomeCallable;
      typedef std::future<GetMatchingJobOutcome> GetMatchingJobOutcomeCallable;
      typedef std::future<GetMatchingWorkflowOutcome> GetMatchingWorkflowOutcomeCallable;
      typedef std::future<GetProviderServiceOutcome> GetProviderServiceOutcomeCallable;
      typedef std::future<GetSchemaMappingOutcome> GetSchemaMappingOutcomeCallable;
      typedef std::future<ListIdMappingJobsOutcome> ListIdMappingJobsOutcomeCallable;
      typedef std::future<ListIdMappingWorkflowsOutcome> ListIdMappingWorkflowsOutcomeCallable;
      typedef std::future<ListMatchingJobsOutcome> ListMatchingJobsOutcomeCallable;
      typedef std::future<ListMatchingWorkflowsOutcome> ListMatchingWorkflowsOutcomeCallable;
      typedef std::future<ListProviderServicesOutcome> ListProviderServicesOutcomeCallable;
      typedef std::future<ListSchemaMappingsOutcome> ListSchemaMappingsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartIdMappingJobOutcome> StartIdMappingJobOutcomeCallable;
      typedef std::future<StartMatchingJobOutcome> StartMatchingJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateIdMappingWorkflowOutcome> UpdateIdMappingWorkflowOutcomeCallable;
      typedef std::future<UpdateMatchingWorkflowOutcome> UpdateMatchingWorkflowOutcomeCallable;
      typedef std::future<UpdateSchemaMappingOutcome> UpdateSchemaMappingOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EntityResolutionClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EntityResolutionClient*, const Model::CreateIdMappingWorkflowRequest&, const Model::CreateIdMappingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdMappingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::CreateMatchingWorkflowRequest&, const Model::CreateMatchingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMatchingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::CreateSchemaMappingRequest&, const Model::CreateSchemaMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaMappingResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::DeleteIdMappingWorkflowRequest&, const Model::DeleteIdMappingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdMappingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::DeleteMatchingWorkflowRequest&, const Model::DeleteMatchingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMatchingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::DeleteSchemaMappingRequest&, const Model::DeleteSchemaMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaMappingResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetIdMappingJobRequest&, const Model::GetIdMappingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdMappingJobResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetIdMappingWorkflowRequest&, const Model::GetIdMappingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdMappingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetMatchIdRequest&, const Model::GetMatchIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMatchIdResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetMatchingJobRequest&, const Model::GetMatchingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMatchingJobResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetMatchingWorkflowRequest&, const Model::GetMatchingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMatchingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetProviderServiceRequest&, const Model::GetProviderServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProviderServiceResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::GetSchemaMappingRequest&, const Model::GetSchemaMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaMappingResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListIdMappingJobsRequest&, const Model::ListIdMappingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdMappingJobsResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListIdMappingWorkflowsRequest&, const Model::ListIdMappingWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdMappingWorkflowsResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListMatchingJobsRequest&, const Model::ListMatchingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMatchingJobsResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListMatchingWorkflowsRequest&, const Model::ListMatchingWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMatchingWorkflowsResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListProviderServicesRequest&, const Model::ListProviderServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProviderServicesResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListSchemaMappingsRequest&, const Model::ListSchemaMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaMappingsResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::StartIdMappingJobRequest&, const Model::StartIdMappingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartIdMappingJobResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::StartMatchingJobRequest&, const Model::StartMatchingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMatchingJobResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::UpdateIdMappingWorkflowRequest&, const Model::UpdateIdMappingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdMappingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::UpdateMatchingWorkflowRequest&, const Model::UpdateMatchingWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMatchingWorkflowResponseReceivedHandler;
    typedef std::function<void(const EntityResolutionClient*, const Model::UpdateSchemaMappingRequest&, const Model::UpdateSchemaMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaMappingResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EntityResolution
} // namespace Aws
