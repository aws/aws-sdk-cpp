/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iottwinmaker/model/BatchPutPropertyValuesResult.h>
#include <aws/iottwinmaker/model/CreateComponentTypeResult.h>
#include <aws/iottwinmaker/model/CreateEntityResult.h>
#include <aws/iottwinmaker/model/CreateSceneResult.h>
#include <aws/iottwinmaker/model/CreateWorkspaceResult.h>
#include <aws/iottwinmaker/model/DeleteComponentTypeResult.h>
#include <aws/iottwinmaker/model/DeleteEntityResult.h>
#include <aws/iottwinmaker/model/DeleteSceneResult.h>
#include <aws/iottwinmaker/model/DeleteWorkspaceResult.h>
#include <aws/iottwinmaker/model/GetComponentTypeResult.h>
#include <aws/iottwinmaker/model/GetEntityResult.h>
#include <aws/iottwinmaker/model/GetPropertyValueResult.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryResult.h>
#include <aws/iottwinmaker/model/GetSceneResult.h>
#include <aws/iottwinmaker/model/GetWorkspaceResult.h>
#include <aws/iottwinmaker/model/ListComponentTypesResult.h>
#include <aws/iottwinmaker/model/ListEntitiesResult.h>
#include <aws/iottwinmaker/model/ListScenesResult.h>
#include <aws/iottwinmaker/model/ListTagsForResourceResult.h>
#include <aws/iottwinmaker/model/ListWorkspacesResult.h>
#include <aws/iottwinmaker/model/TagResourceResult.h>
#include <aws/iottwinmaker/model/UntagResourceResult.h>
#include <aws/iottwinmaker/model/UpdateComponentTypeResult.h>
#include <aws/iottwinmaker/model/UpdateEntityResult.h>
#include <aws/iottwinmaker/model/UpdateSceneResult.h>
#include <aws/iottwinmaker/model/UpdateWorkspaceResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
        class BatchPutPropertyValuesRequest;
        class CreateComponentTypeRequest;
        class CreateEntityRequest;
        class CreateSceneRequest;
        class CreateWorkspaceRequest;
        class DeleteComponentTypeRequest;
        class DeleteEntityRequest;
        class DeleteSceneRequest;
        class DeleteWorkspaceRequest;
        class GetComponentTypeRequest;
        class GetEntityRequest;
        class GetPropertyValueRequest;
        class GetPropertyValueHistoryRequest;
        class GetSceneRequest;
        class GetWorkspaceRequest;
        class ListComponentTypesRequest;
        class ListEntitiesRequest;
        class ListScenesRequest;
        class ListTagsForResourceRequest;
        class ListWorkspacesRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateComponentTypeRequest;
        class UpdateEntityRequest;
        class UpdateSceneRequest;
        class UpdateWorkspaceRequest;

        typedef Aws::Utils::Outcome<BatchPutPropertyValuesResult, IoTTwinMakerError> BatchPutPropertyValuesOutcome;
        typedef Aws::Utils::Outcome<CreateComponentTypeResult, IoTTwinMakerError> CreateComponentTypeOutcome;
        typedef Aws::Utils::Outcome<CreateEntityResult, IoTTwinMakerError> CreateEntityOutcome;
        typedef Aws::Utils::Outcome<CreateSceneResult, IoTTwinMakerError> CreateSceneOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspaceResult, IoTTwinMakerError> CreateWorkspaceOutcome;
        typedef Aws::Utils::Outcome<DeleteComponentTypeResult, IoTTwinMakerError> DeleteComponentTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteEntityResult, IoTTwinMakerError> DeleteEntityOutcome;
        typedef Aws::Utils::Outcome<DeleteSceneResult, IoTTwinMakerError> DeleteSceneOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkspaceResult, IoTTwinMakerError> DeleteWorkspaceOutcome;
        typedef Aws::Utils::Outcome<GetComponentTypeResult, IoTTwinMakerError> GetComponentTypeOutcome;
        typedef Aws::Utils::Outcome<GetEntityResult, IoTTwinMakerError> GetEntityOutcome;
        typedef Aws::Utils::Outcome<GetPropertyValueResult, IoTTwinMakerError> GetPropertyValueOutcome;
        typedef Aws::Utils::Outcome<GetPropertyValueHistoryResult, IoTTwinMakerError> GetPropertyValueHistoryOutcome;
        typedef Aws::Utils::Outcome<GetSceneResult, IoTTwinMakerError> GetSceneOutcome;
        typedef Aws::Utils::Outcome<GetWorkspaceResult, IoTTwinMakerError> GetWorkspaceOutcome;
        typedef Aws::Utils::Outcome<ListComponentTypesResult, IoTTwinMakerError> ListComponentTypesOutcome;
        typedef Aws::Utils::Outcome<ListEntitiesResult, IoTTwinMakerError> ListEntitiesOutcome;
        typedef Aws::Utils::Outcome<ListScenesResult, IoTTwinMakerError> ListScenesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTTwinMakerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWorkspacesResult, IoTTwinMakerError> ListWorkspacesOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IoTTwinMakerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IoTTwinMakerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateComponentTypeResult, IoTTwinMakerError> UpdateComponentTypeOutcome;
        typedef Aws::Utils::Outcome<UpdateEntityResult, IoTTwinMakerError> UpdateEntityOutcome;
        typedef Aws::Utils::Outcome<UpdateSceneResult, IoTTwinMakerError> UpdateSceneOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkspaceResult, IoTTwinMakerError> UpdateWorkspaceOutcome;

        typedef std::future<BatchPutPropertyValuesOutcome> BatchPutPropertyValuesOutcomeCallable;
        typedef std::future<CreateComponentTypeOutcome> CreateComponentTypeOutcomeCallable;
        typedef std::future<CreateEntityOutcome> CreateEntityOutcomeCallable;
        typedef std::future<CreateSceneOutcome> CreateSceneOutcomeCallable;
        typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
        typedef std::future<DeleteComponentTypeOutcome> DeleteComponentTypeOutcomeCallable;
        typedef std::future<DeleteEntityOutcome> DeleteEntityOutcomeCallable;
        typedef std::future<DeleteSceneOutcome> DeleteSceneOutcomeCallable;
        typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
        typedef std::future<GetComponentTypeOutcome> GetComponentTypeOutcomeCallable;
        typedef std::future<GetEntityOutcome> GetEntityOutcomeCallable;
        typedef std::future<GetPropertyValueOutcome> GetPropertyValueOutcomeCallable;
        typedef std::future<GetPropertyValueHistoryOutcome> GetPropertyValueHistoryOutcomeCallable;
        typedef std::future<GetSceneOutcome> GetSceneOutcomeCallable;
        typedef std::future<GetWorkspaceOutcome> GetWorkspaceOutcomeCallable;
        typedef std::future<ListComponentTypesOutcome> ListComponentTypesOutcomeCallable;
        typedef std::future<ListEntitiesOutcome> ListEntitiesOutcomeCallable;
        typedef std::future<ListScenesOutcome> ListScenesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateComponentTypeOutcome> UpdateComponentTypeOutcomeCallable;
        typedef std::future<UpdateEntityOutcome> UpdateEntityOutcomeCallable;
        typedef std::future<UpdateSceneOutcome> UpdateSceneOutcomeCallable;
        typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
} // namespace Model

  class IoTTwinMakerClient;

    typedef std::function<void(const IoTTwinMakerClient*, const Model::BatchPutPropertyValuesRequest&, const Model::BatchPutPropertyValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutPropertyValuesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateComponentTypeRequest&, const Model::CreateComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateEntityRequest&, const Model::CreateEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateSceneRequest&, const Model::CreateSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::CreateWorkspaceRequest&, const Model::CreateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteComponentTypeRequest&, const Model::DeleteComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteEntityRequest&, const Model::DeleteEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteSceneRequest&, const Model::DeleteSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::DeleteWorkspaceRequest&, const Model::DeleteWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetComponentTypeRequest&, const Model::GetComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetEntityRequest&, const Model::GetEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetPropertyValueRequest&, const Model::GetPropertyValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertyValueResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetPropertyValueHistoryRequest&, const Model::GetPropertyValueHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertyValueHistoryResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetSceneRequest&, const Model::GetSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::GetWorkspaceRequest&, const Model::GetWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkspaceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListComponentTypesRequest&, const Model::ListComponentTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentTypesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListEntitiesRequest&, const Model::ListEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListScenesRequest&, const Model::ListScenesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScenesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::ListWorkspacesRequest&, const Model::ListWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspacesResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateComponentTypeRequest&, const Model::UpdateComponentTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentTypeResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateEntityRequest&, const Model::UpdateEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEntityResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateSceneRequest&, const Model::UpdateSceneOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSceneResponseReceivedHandler;
    typedef std::function<void(const IoTTwinMakerClient*, const Model::UpdateWorkspaceRequest&, const Model::UpdateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceResponseReceivedHandler;

  /**
   * <p>IoT TwinMaker is a service that enables you to build operational digital
   * twins of physical systems. IoT TwinMaker overlays measurements and analysis from
   * real-world sensors, cameras, and enterprise applications so you can create data
   * visualizations to monitor your physical factory, building, or industrial plant.
   * You can use this real-world data to monitor operations and diagnose and repair
   * errors.</p>
   */
  class AWS_IOTTWINMAKER_API IoTTwinMakerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTTwinMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTTwinMakerClient();


        /**
         * <p>Sets values for multiple time series properties.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/BatchPutPropertyValues">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutPropertyValuesOutcome BatchPutPropertyValues(const Model::BatchPutPropertyValuesRequest& request) const;

        /**
         * A Callable wrapper for BatchPutPropertyValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutPropertyValuesOutcomeCallable BatchPutPropertyValuesCallable(const Model::BatchPutPropertyValuesRequest& request) const;

        /**
         * An Async wrapper for BatchPutPropertyValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutPropertyValuesAsync(const Model::BatchPutPropertyValuesRequest& request, const BatchPutPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentTypeOutcome CreateComponentType(const Model::CreateComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentTypeOutcomeCallable CreateComponentTypeCallable(const Model::CreateComponentTypeRequest& request) const;

        /**
         * An Async wrapper for CreateComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentTypeAsync(const Model::CreateComponentTypeRequest& request, const CreateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityOutcome CreateEntity(const Model::CreateEntityRequest& request) const;

        /**
         * A Callable wrapper for CreateEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEntityOutcomeCallable CreateEntityCallable(const Model::CreateEntityRequest& request) const;

        /**
         * An Async wrapper for CreateEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEntityAsync(const Model::CreateEntityRequest& request, const CreateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateScene">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSceneOutcome CreateScene(const Model::CreateSceneRequest& request) const;

        /**
         * A Callable wrapper for CreateScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSceneOutcomeCallable CreateSceneCallable(const Model::CreateSceneRequest& request) const;

        /**
         * An Async wrapper for CreateScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSceneAsync(const Model::CreateSceneRequest& request, const CreateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a workplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request) const;

        /**
         * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentTypeOutcome DeleteComponentType(const Model::DeleteComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentTypeOutcomeCallable DeleteComponentTypeCallable(const Model::DeleteComponentTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentTypeAsync(const Model::DeleteComponentTypeRequest& request, const DeleteComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntityOutcome DeleteEntity(const Model::DeleteEntityRequest& request) const;

        /**
         * A Callable wrapper for DeleteEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEntityOutcomeCallable DeleteEntityCallable(const Model::DeleteEntityRequest& request) const;

        /**
         * An Async wrapper for DeleteEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEntityAsync(const Model::DeleteEntityRequest& request, const DeleteEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteScene">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSceneOutcome DeleteScene(const Model::DeleteSceneRequest& request) const;

        /**
         * A Callable wrapper for DeleteScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSceneOutcomeCallable DeleteSceneCallable(const Model::DeleteSceneRequest& request) const;

        /**
         * An Async wrapper for DeleteScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSceneAsync(const Model::DeleteSceneRequest& request, const DeleteSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentTypeOutcome GetComponentType(const Model::GetComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for GetComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentTypeOutcomeCallable GetComponentTypeCallable(const Model::GetComponentTypeRequest& request) const;

        /**
         * An Async wrapper for GetComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentTypeAsync(const Model::GetComponentTypeRequest& request, const GetComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntityOutcome GetEntity(const Model::GetEntityRequest& request) const;

        /**
         * A Callable wrapper for GetEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEntityOutcomeCallable GetEntityCallable(const Model::GetEntityRequest& request) const;

        /**
         * An Async wrapper for GetEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEntityAsync(const Model::GetEntityRequest& request, const GetEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the property values for a component, component type, entity, or
         * workspace.</p> <p>You must specify a value for either
         * <code>componentName</code>, <code>componentTypeId</code>, <code>entityId</code>,
         * or <code>workspaceId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetPropertyValue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPropertyValueOutcome GetPropertyValue(const Model::GetPropertyValueRequest& request) const;

        /**
         * A Callable wrapper for GetPropertyValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPropertyValueOutcomeCallable GetPropertyValueCallable(const Model::GetPropertyValueRequest& request) const;

        /**
         * An Async wrapper for GetPropertyValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPropertyValueAsync(const Model::GetPropertyValueRequest& request, const GetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the history of a time series property value for a
         * component, component type, entity, or workspace.</p> <p>You must specify a value
         * for <code>workspaceId</code>. For entity-specific queries, specify values for
         * <code>componentName</code> and <code>entityId</code>. For cross-entity quries,
         * specify a value for <code>componentTypeId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetPropertyValueHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPropertyValueHistoryOutcome GetPropertyValueHistory(const Model::GetPropertyValueHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetPropertyValueHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPropertyValueHistoryOutcomeCallable GetPropertyValueHistoryCallable(const Model::GetPropertyValueHistoryRequest& request) const;

        /**
         * An Async wrapper for GetPropertyValueHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPropertyValueHistoryAsync(const Model::GetPropertyValueHistoryRequest& request, const GetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetScene">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSceneOutcome GetScene(const Model::GetSceneRequest& request) const;

        /**
         * A Callable wrapper for GetScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSceneOutcomeCallable GetSceneCallable(const Model::GetSceneRequest& request) const;

        /**
         * An Async wrapper for GetScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSceneAsync(const Model::GetSceneRequest& request, const GetSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkspaceOutcome GetWorkspace(const Model::GetWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for GetWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkspaceOutcomeCallable GetWorkspaceCallable(const Model::GetWorkspaceRequest& request) const;

        /**
         * An Async wrapper for GetWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkspaceAsync(const Model::GetWorkspaceRequest& request, const GetWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all component types in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListComponentTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentTypesOutcome ListComponentTypes(const Model::ListComponentTypesRequest& request) const;

        /**
         * A Callable wrapper for ListComponentTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentTypesOutcomeCallable ListComponentTypesCallable(const Model::ListComponentTypesRequest& request) const;

        /**
         * An Async wrapper for ListComponentTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentTypesAsync(const Model::ListComponentTypesRequest& request, const ListComponentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all entities in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesOutcome ListEntities(const Model::ListEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ListEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesOutcomeCallable ListEntitiesCallable(const Model::ListEntitiesRequest& request) const;

        /**
         * An Async wrapper for ListEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesAsync(const Model::ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all scenes in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListScenes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScenesOutcome ListScenes(const Model::ListScenesRequest& request) const;

        /**
         * A Callable wrapper for ListScenes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScenesOutcomeCallable ListScenesCallable(const Model::ListScenesRequest& request) const;

        /**
         * An Async wrapper for ListScenes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScenesAsync(const Model::ListScenesRequest& request, const ListScenesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about workspaces in the current account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request) const;

        /**
         * A Callable wrapper for ListWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const Model::ListWorkspacesRequest& request) const;

        /**
         * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information in a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentTypeOutcome UpdateComponentType(const Model::UpdateComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComponentTypeOutcomeCallable UpdateComponentTypeCallable(const Model::UpdateComponentTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentTypeAsync(const Model::UpdateComponentTypeRequest& request, const UpdateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEntityOutcome UpdateEntity(const Model::UpdateEntityRequest& request) const;

        /**
         * A Callable wrapper for UpdateEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEntityOutcomeCallable UpdateEntityCallable(const Model::UpdateEntityRequest& request) const;

        /**
         * An Async wrapper for UpdateEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEntityAsync(const Model::UpdateEntityRequest& request, const UpdateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateScene">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSceneOutcome UpdateScene(const Model::UpdateSceneRequest& request) const;

        /**
         * A Callable wrapper for UpdateScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSceneOutcomeCallable UpdateSceneCallable(const Model::UpdateSceneRequest& request) const;

        /**
         * An Async wrapper for UpdateScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSceneAsync(const Model::UpdateSceneRequest& request, const UpdateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const Model::UpdateWorkspaceRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceAsync(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchPutPropertyValuesAsyncHelper(const Model::BatchPutPropertyValuesRequest& request, const BatchPutPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComponentTypeAsyncHelper(const Model::CreateComponentTypeRequest& request, const CreateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEntityAsyncHelper(const Model::CreateEntityRequest& request, const CreateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSceneAsyncHelper(const Model::CreateSceneRequest& request, const CreateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspaceAsyncHelper(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComponentTypeAsyncHelper(const Model::DeleteComponentTypeRequest& request, const DeleteComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEntityAsyncHelper(const Model::DeleteEntityRequest& request, const DeleteEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSceneAsyncHelper(const Model::DeleteSceneRequest& request, const DeleteSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkspaceAsyncHelper(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComponentTypeAsyncHelper(const Model::GetComponentTypeRequest& request, const GetComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEntityAsyncHelper(const Model::GetEntityRequest& request, const GetEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPropertyValueAsyncHelper(const Model::GetPropertyValueRequest& request, const GetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPropertyValueHistoryAsyncHelper(const Model::GetPropertyValueHistoryRequest& request, const GetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSceneAsyncHelper(const Model::GetSceneRequest& request, const GetSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkspaceAsyncHelper(const Model::GetWorkspaceRequest& request, const GetWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentTypesAsyncHelper(const Model::ListComponentTypesRequest& request, const ListComponentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesAsyncHelper(const Model::ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListScenesAsyncHelper(const Model::ListScenesRequest& request, const ListScenesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkspacesAsyncHelper(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComponentTypeAsyncHelper(const Model::UpdateComponentTypeRequest& request, const UpdateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEntityAsyncHelper(const Model::UpdateEntityRequest& request, const UpdateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSceneAsyncHelper(const Model::UpdateSceneRequest& request, const UpdateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkspaceAsyncHelper(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTTwinMaker
} // namespace Aws
