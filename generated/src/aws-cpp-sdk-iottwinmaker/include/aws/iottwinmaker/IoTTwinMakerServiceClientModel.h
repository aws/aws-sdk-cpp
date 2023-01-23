/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iottwinmaker/IoTTwinMakerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iottwinmaker/IoTTwinMakerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTTwinMakerClient header */
#include <aws/iottwinmaker/model/BatchPutPropertyValuesResult.h>
#include <aws/iottwinmaker/model/CreateComponentTypeResult.h>
#include <aws/iottwinmaker/model/CreateEntityResult.h>
#include <aws/iottwinmaker/model/CreateSceneResult.h>
#include <aws/iottwinmaker/model/CreateSyncJobResult.h>
#include <aws/iottwinmaker/model/CreateWorkspaceResult.h>
#include <aws/iottwinmaker/model/DeleteComponentTypeResult.h>
#include <aws/iottwinmaker/model/DeleteEntityResult.h>
#include <aws/iottwinmaker/model/DeleteSceneResult.h>
#include <aws/iottwinmaker/model/DeleteSyncJobResult.h>
#include <aws/iottwinmaker/model/DeleteWorkspaceResult.h>
#include <aws/iottwinmaker/model/ExecuteQueryResult.h>
#include <aws/iottwinmaker/model/GetComponentTypeResult.h>
#include <aws/iottwinmaker/model/GetEntityResult.h>
#include <aws/iottwinmaker/model/GetPricingPlanResult.h>
#include <aws/iottwinmaker/model/GetPropertyValueResult.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryResult.h>
#include <aws/iottwinmaker/model/GetSceneResult.h>
#include <aws/iottwinmaker/model/GetSyncJobResult.h>
#include <aws/iottwinmaker/model/GetWorkspaceResult.h>
#include <aws/iottwinmaker/model/ListComponentTypesResult.h>
#include <aws/iottwinmaker/model/ListEntitiesResult.h>
#include <aws/iottwinmaker/model/ListScenesResult.h>
#include <aws/iottwinmaker/model/ListSyncJobsResult.h>
#include <aws/iottwinmaker/model/ListSyncResourcesResult.h>
#include <aws/iottwinmaker/model/ListTagsForResourceResult.h>
#include <aws/iottwinmaker/model/ListWorkspacesResult.h>
#include <aws/iottwinmaker/model/TagResourceResult.h>
#include <aws/iottwinmaker/model/UntagResourceResult.h>
#include <aws/iottwinmaker/model/UpdateComponentTypeResult.h>
#include <aws/iottwinmaker/model/UpdateEntityResult.h>
#include <aws/iottwinmaker/model/UpdatePricingPlanResult.h>
#include <aws/iottwinmaker/model/UpdateSceneResult.h>
#include <aws/iottwinmaker/model/UpdateWorkspaceResult.h>
/* End of service model headers required in IoTTwinMakerClient header */

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

  namespace IoTTwinMaker
  {
    using IoTTwinMakerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTTwinMakerEndpointProviderBase = Aws::IoTTwinMaker::Endpoint::IoTTwinMakerEndpointProviderBase;
    using IoTTwinMakerEndpointProvider = Aws::IoTTwinMaker::Endpoint::IoTTwinMakerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTTwinMakerClient header */
      class BatchPutPropertyValuesRequest;
      class CreateComponentTypeRequest;
      class CreateEntityRequest;
      class CreateSceneRequest;
      class CreateSyncJobRequest;
      class CreateWorkspaceRequest;
      class DeleteComponentTypeRequest;
      class DeleteEntityRequest;
      class DeleteSceneRequest;
      class DeleteSyncJobRequest;
      class DeleteWorkspaceRequest;
      class ExecuteQueryRequest;
      class GetComponentTypeRequest;
      class GetEntityRequest;
      class GetPricingPlanRequest;
      class GetPropertyValueRequest;
      class GetPropertyValueHistoryRequest;
      class GetSceneRequest;
      class GetSyncJobRequest;
      class GetWorkspaceRequest;
      class ListComponentTypesRequest;
      class ListEntitiesRequest;
      class ListScenesRequest;
      class ListSyncJobsRequest;
      class ListSyncResourcesRequest;
      class ListTagsForResourceRequest;
      class ListWorkspacesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateComponentTypeRequest;
      class UpdateEntityRequest;
      class UpdatePricingPlanRequest;
      class UpdateSceneRequest;
      class UpdateWorkspaceRequest;
      /* End of service model forward declarations required in IoTTwinMakerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchPutPropertyValuesResult, IoTTwinMakerError> BatchPutPropertyValuesOutcome;
      typedef Aws::Utils::Outcome<CreateComponentTypeResult, IoTTwinMakerError> CreateComponentTypeOutcome;
      typedef Aws::Utils::Outcome<CreateEntityResult, IoTTwinMakerError> CreateEntityOutcome;
      typedef Aws::Utils::Outcome<CreateSceneResult, IoTTwinMakerError> CreateSceneOutcome;
      typedef Aws::Utils::Outcome<CreateSyncJobResult, IoTTwinMakerError> CreateSyncJobOutcome;
      typedef Aws::Utils::Outcome<CreateWorkspaceResult, IoTTwinMakerError> CreateWorkspaceOutcome;
      typedef Aws::Utils::Outcome<DeleteComponentTypeResult, IoTTwinMakerError> DeleteComponentTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteEntityResult, IoTTwinMakerError> DeleteEntityOutcome;
      typedef Aws::Utils::Outcome<DeleteSceneResult, IoTTwinMakerError> DeleteSceneOutcome;
      typedef Aws::Utils::Outcome<DeleteSyncJobResult, IoTTwinMakerError> DeleteSyncJobOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkspaceResult, IoTTwinMakerError> DeleteWorkspaceOutcome;
      typedef Aws::Utils::Outcome<ExecuteQueryResult, IoTTwinMakerError> ExecuteQueryOutcome;
      typedef Aws::Utils::Outcome<GetComponentTypeResult, IoTTwinMakerError> GetComponentTypeOutcome;
      typedef Aws::Utils::Outcome<GetEntityResult, IoTTwinMakerError> GetEntityOutcome;
      typedef Aws::Utils::Outcome<GetPricingPlanResult, IoTTwinMakerError> GetPricingPlanOutcome;
      typedef Aws::Utils::Outcome<GetPropertyValueResult, IoTTwinMakerError> GetPropertyValueOutcome;
      typedef Aws::Utils::Outcome<GetPropertyValueHistoryResult, IoTTwinMakerError> GetPropertyValueHistoryOutcome;
      typedef Aws::Utils::Outcome<GetSceneResult, IoTTwinMakerError> GetSceneOutcome;
      typedef Aws::Utils::Outcome<GetSyncJobResult, IoTTwinMakerError> GetSyncJobOutcome;
      typedef Aws::Utils::Outcome<GetWorkspaceResult, IoTTwinMakerError> GetWorkspaceOutcome;
      typedef Aws::Utils::Outcome<ListComponentTypesResult, IoTTwinMakerError> ListComponentTypesOutcome;
      typedef Aws::Utils::Outcome<ListEntitiesResult, IoTTwinMakerError> ListEntitiesOutcome;
      typedef Aws::Utils::Outcome<ListScenesResult, IoTTwinMakerError> ListScenesOutcome;
      typedef Aws::Utils::Outcome<ListSyncJobsResult, IoTTwinMakerError> ListSyncJobsOutcome;
      typedef Aws::Utils::Outcome<ListSyncResourcesResult, IoTTwinMakerError> ListSyncResourcesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTTwinMakerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkspacesResult, IoTTwinMakerError> ListWorkspacesOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTTwinMakerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTTwinMakerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateComponentTypeResult, IoTTwinMakerError> UpdateComponentTypeOutcome;
      typedef Aws::Utils::Outcome<UpdateEntityResult, IoTTwinMakerError> UpdateEntityOutcome;
      typedef Aws::Utils::Outcome<UpdatePricingPlanResult, IoTTwinMakerError> UpdatePricingPlanOutcome;
      typedef Aws::Utils::Outcome<UpdateSceneResult, IoTTwinMakerError> UpdateSceneOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkspaceResult, IoTTwinMakerError> UpdateWorkspaceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchPutPropertyValuesOutcome> BatchPutPropertyValuesOutcomeCallable;
      typedef std::future<CreateComponentTypeOutcome> CreateComponentTypeOutcomeCallable;
      typedef std::future<CreateEntityOutcome> CreateEntityOutcomeCallable;
      typedef std::future<CreateSceneOutcome> CreateSceneOutcomeCallable;
      typedef std::future<CreateSyncJobOutcome> CreateSyncJobOutcomeCallable;
      typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
      typedef std::future<DeleteComponentTypeOutcome> DeleteComponentTypeOutcomeCallable;
      typedef std::future<DeleteEntityOutcome> DeleteEntityOutcomeCallable;
      typedef std::future<DeleteSceneOutcome> DeleteSceneOutcomeCallable;
      typedef std::future<DeleteSyncJobOutcome> DeleteSyncJobOutcomeCallable;
      typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
      typedef std::future<ExecuteQueryOutcome> ExecuteQueryOutcomeCallable;
      typedef std::future<GetComponentTypeOutcome> GetComponentTypeOutcomeCallable;
      typedef std::future<GetEntityOutcome> GetEntityOutcomeCallable;
      typedef std::future<GetPricingPlanOutcome> GetPricingPlanOutcomeCallable;
      typedef std::future<GetPropertyValueOutcome> GetPropertyValueOutcomeCallable;
      typedef std::future<GetPropertyValueHistoryOutcome> GetPropertyValueHistoryOutcomeCallable;
      typedef std::future<GetSceneOutcome> GetSceneOutcomeCallable;
      typedef std::future<GetSyncJobOutcome> GetSyncJobOutcomeCallable;
      typedef std::future<GetWorkspaceOutcome> GetWorkspaceOutcomeCallable;
      typedef std::future<ListComponentTypesOutcome> ListComponentTypesOutcomeCallable;
      typedef std::future<ListEntitiesOutcome> ListEntitiesOutcomeCallable;
      typedef std::future<ListScenesOutcome> ListScenesOutcomeCallable;
      typedef std::future<ListSyncJobsOutcome> ListSyncJobsOutcomeCallable;
      typedef std::future<ListSyncResourcesOutcome> ListSyncResourcesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateComponentTypeOutcome> UpdateComponentTypeOutcomeCallable;
      typedef std::future<UpdateEntityOutcome> UpdateEntityOutcomeCallable;
      typedef std::future<UpdatePricingPlanOutcome> UpdatePricingPlanOutcomeCallable;
      typedef std::future<UpdateSceneOutcome> UpdateSceneOutcomeCallable;
      typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTTwinMakerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTTwinMakerClient*, const Model::BatchPutPropertyValuesRequest&, const Model::BatchPutPropertyValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutPropertyValuesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateComponentTypeRequest&, const Model::CreateComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateEntityRequest&, const Model::CreateEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateSceneRequest&, const Model::CreateSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateSyncJobRequest&, const Model::CreateSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSyncJobResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateWorkspaceRequest&, const Model::CreateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteComponentTypeRequest&, const Model::DeleteComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteEntityRequest&, const Model::DeleteEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteSceneRequest&, const Model::DeleteSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteSyncJobRequest&, const Model::DeleteSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSyncJobResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteWorkspaceRequest&, const Model::DeleteWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ExecuteQueryRequest&, const Model::ExecuteQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteQueryResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetComponentTypeRequest&, const Model::GetComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetEntityRequest&, const Model::GetEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetPricingPlanRequest&, const Model::GetPricingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPricingPlanResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetPropertyValueRequest&, const Model::GetPropertyValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertyValueResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetPropertyValueHistoryRequest&, const Model::GetPropertyValueHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertyValueHistoryResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetSceneRequest&, const Model::GetSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetSyncJobRequest&, const Model::GetSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSyncJobResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetWorkspaceRequest&, const Model::GetWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkspaceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListComponentTypesRequest&, const Model::ListComponentTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentTypesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListEntitiesRequest&, const Model::ListEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListScenesRequest&, const Model::ListScenesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScenesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListSyncJobsRequest&, const Model::ListSyncJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSyncJobsResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListSyncResourcesRequest&, const Model::ListSyncResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSyncResourcesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListWorkspacesRequest&, const Model::ListWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspacesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateComponentTypeRequest&, const Model::UpdateComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateEntityRequest&, const Model::UpdateEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdatePricingPlanRequest&, const Model::UpdatePricingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePricingPlanResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateSceneRequest&, const Model::UpdateSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateWorkspaceRequest&, const Model::UpdateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTTwinMaker
} // namespace Aws
