/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iottwinmaker/IoTTwinMakerServiceClientModel.h>

namespace Aws
{
namespace IoTTwinMaker
{
  /**
   * <p>IoT TwinMaker is a service that enables you to build operational digital
   * twins of physical systems. IoT TwinMaker overlays measurements and analysis from
   * real-world sensors, cameras, and enterprise applications so you can create data
   * visualizations to monitor your physical factory, building, or industrial plant.
   * You can use this real-world data to monitor operations and diagnose and repair
   * errors.</p>
   */
  class AWS_IOTTWINMAKER_API IoTTwinMakerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTTwinMakerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration = Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration(),
                           std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG),
                           const Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration = Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTTwinMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG),
                           const Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration = Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTTwinMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <p>This action creates a SyncJob.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest& request) const;

        /**
         * A Callable wrapper for CreateSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSyncJobOutcomeCallable CreateSyncJobCallable(const Model::CreateSyncJobRequest& request) const;

        /**
         * An Async wrapper for CreateSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSyncJobAsync(const Model::CreateSyncJobRequest& request, const CreateSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Delete the SyncJob.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSyncJobOutcome DeleteSyncJob(const Model::DeleteSyncJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSyncJobOutcomeCallable DeleteSyncJobCallable(const Model::DeleteSyncJobRequest& request) const;

        /**
         * An Async wrapper for DeleteSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSyncJobAsync(const Model::DeleteSyncJobRequest& request, const DeleteSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Run queries to access information from your knowledge graph of entities
         * within individual workspaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ExecuteQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteQueryOutcome ExecuteQuery(const Model::ExecuteQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteQueryOutcomeCallable ExecuteQueryCallable(const Model::ExecuteQueryRequest& request) const;

        /**
         * An Async wrapper for ExecuteQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteQueryAsync(const Model::ExecuteQueryRequest& request, const ExecuteQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets the pricing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetPricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPricingPlanOutcome GetPricingPlan(const Model::GetPricingPlanRequest& request) const;

        /**
         * A Callable wrapper for GetPricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPricingPlanOutcomeCallable GetPricingPlanCallable(const Model::GetPricingPlanRequest& request) const;

        /**
         * An Async wrapper for GetPricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPricingPlanAsync(const Model::GetPricingPlanRequest& request, const GetPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets the SyncJob.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSyncJobOutcome GetSyncJob(const Model::GetSyncJobRequest& request) const;

        /**
         * A Callable wrapper for GetSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSyncJobOutcomeCallable GetSyncJobCallable(const Model::GetSyncJobRequest& request) const;

        /**
         * An Async wrapper for GetSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSyncJobAsync(const Model::GetSyncJobRequest& request, const GetSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>List all SyncJobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListSyncJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSyncJobsOutcome ListSyncJobs(const Model::ListSyncJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSyncJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSyncJobsOutcomeCallable ListSyncJobsCallable(const Model::ListSyncJobsRequest& request) const;

        /**
         * An Async wrapper for ListSyncJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSyncJobsAsync(const Model::ListSyncJobsRequest& request, const ListSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the sync resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListSyncResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSyncResourcesOutcome ListSyncResources(const Model::ListSyncResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListSyncResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSyncResourcesOutcomeCallable ListSyncResourcesCallable(const Model::ListSyncResourcesRequest& request) const;

        /**
         * An Async wrapper for ListSyncResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSyncResourcesAsync(const Model::ListSyncResourcesRequest& request, const ListSyncResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Update the pricing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdatePricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePricingPlanOutcome UpdatePricingPlan(const Model::UpdatePricingPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdatePricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePricingPlanOutcomeCallable UpdatePricingPlanCallable(const Model::UpdatePricingPlanRequest& request) const;

        /**
         * An Async wrapper for UpdatePricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePricingPlanAsync(const Model::UpdatePricingPlanRequest& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<IoTTwinMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTTwinMakerClient>;
      void init(const IoTTwinMakerClientConfiguration& clientConfiguration);

      IoTTwinMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTTwinMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTTwinMaker
} // namespace Aws
