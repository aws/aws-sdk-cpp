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
   * <p>IoT TwinMaker is a service with which you can build operational digital twins
   * of physical systems. IoT TwinMaker overlays measurements and analysis from
   * real-world sensors, cameras, and enterprise applications so you can create data
   * visualizations to monitor your physical factory, building, or industrial plant.
   * You can use this real-world data to monitor operations and diagnose and repair
   * errors.</p>
   */
  class AWS_IOTTWINMAKER_API IoTTwinMakerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTTwinMakerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTTwinMakerClientConfiguration ClientConfigurationType;
      typedef IoTTwinMakerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration = Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration(),
                           std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTTwinMakerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration = Aws::IoTTwinMaker::IoTTwinMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTTwinMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchPutPropertyValuesRequestT = Model::BatchPutPropertyValuesRequest>
        Model::BatchPutPropertyValuesOutcomeCallable BatchPutPropertyValuesCallable(const BatchPutPropertyValuesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::BatchPutPropertyValues, request);
        }

        /**
         * An Async wrapper for BatchPutPropertyValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutPropertyValuesRequestT = Model::BatchPutPropertyValuesRequest>
        void BatchPutPropertyValuesAsync(const BatchPutPropertyValuesRequestT& request, const BatchPutPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::BatchPutPropertyValues, request, handler, context);
        }

        /**
         * <p>Cancels the metadata transfer job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CancelMetadataTransferJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMetadataTransferJobOutcome CancelMetadataTransferJob(const Model::CancelMetadataTransferJobRequest& request) const;

        /**
         * A Callable wrapper for CancelMetadataTransferJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMetadataTransferJobRequestT = Model::CancelMetadataTransferJobRequest>
        Model::CancelMetadataTransferJobOutcomeCallable CancelMetadataTransferJobCallable(const CancelMetadataTransferJobRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CancelMetadataTransferJob, request);
        }

        /**
         * An Async wrapper for CancelMetadataTransferJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMetadataTransferJobRequestT = Model::CancelMetadataTransferJobRequest>
        void CancelMetadataTransferJobAsync(const CancelMetadataTransferJobRequestT& request, const CancelMetadataTransferJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CancelMetadataTransferJob, request, handler, context);
        }

        /**
         * <p>Creates a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentTypeOutcome CreateComponentType(const Model::CreateComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateComponentTypeRequestT = Model::CreateComponentTypeRequest>
        Model::CreateComponentTypeOutcomeCallable CreateComponentTypeCallable(const CreateComponentTypeRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CreateComponentType, request);
        }

        /**
         * An Async wrapper for CreateComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComponentTypeRequestT = Model::CreateComponentTypeRequest>
        void CreateComponentTypeAsync(const CreateComponentTypeRequestT& request, const CreateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CreateComponentType, request, handler, context);
        }

        /**
         * <p>Creates an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityOutcome CreateEntity(const Model::CreateEntityRequest& request) const;

        /**
         * A Callable wrapper for CreateEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEntityRequestT = Model::CreateEntityRequest>
        Model::CreateEntityOutcomeCallable CreateEntityCallable(const CreateEntityRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CreateEntity, request);
        }

        /**
         * An Async wrapper for CreateEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEntityRequestT = Model::CreateEntityRequest>
        void CreateEntityAsync(const CreateEntityRequestT& request, const CreateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CreateEntity, request, handler, context);
        }

        /**
         * <p>Creates a new metadata transfer job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateMetadataTransferJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMetadataTransferJobOutcome CreateMetadataTransferJob(const Model::CreateMetadataTransferJobRequest& request) const;

        /**
         * A Callable wrapper for CreateMetadataTransferJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMetadataTransferJobRequestT = Model::CreateMetadataTransferJobRequest>
        Model::CreateMetadataTransferJobOutcomeCallable CreateMetadataTransferJobCallable(const CreateMetadataTransferJobRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CreateMetadataTransferJob, request);
        }

        /**
         * An Async wrapper for CreateMetadataTransferJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMetadataTransferJobRequestT = Model::CreateMetadataTransferJobRequest>
        void CreateMetadataTransferJobAsync(const CreateMetadataTransferJobRequestT& request, const CreateMetadataTransferJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CreateMetadataTransferJob, request, handler, context);
        }

        /**
         * <p>Creates a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateScene">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSceneOutcome CreateScene(const Model::CreateSceneRequest& request) const;

        /**
         * A Callable wrapper for CreateScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSceneRequestT = Model::CreateSceneRequest>
        Model::CreateSceneOutcomeCallable CreateSceneCallable(const CreateSceneRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CreateScene, request);
        }

        /**
         * An Async wrapper for CreateScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSceneRequestT = Model::CreateSceneRequest>
        void CreateSceneAsync(const CreateSceneRequestT& request, const CreateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CreateScene, request, handler, context);
        }

        /**
         * <p>This action creates a SyncJob.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSyncJobOutcome CreateSyncJob(const Model::CreateSyncJobRequest& request) const;

        /**
         * A Callable wrapper for CreateSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSyncJobRequestT = Model::CreateSyncJobRequest>
        Model::CreateSyncJobOutcomeCallable CreateSyncJobCallable(const CreateSyncJobRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CreateSyncJob, request);
        }

        /**
         * An Async wrapper for CreateSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSyncJobRequestT = Model::CreateSyncJobRequest>
        void CreateSyncJobAsync(const CreateSyncJobRequestT& request, const CreateSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CreateSyncJob, request, handler, context);
        }

        /**
         * <p>Creates a workplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
        Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const CreateWorkspaceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::CreateWorkspace, request);
        }

        /**
         * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
        void CreateWorkspaceAsync(const CreateWorkspaceRequestT& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::CreateWorkspace, request, handler, context);
        }

        /**
         * <p>Deletes a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentTypeOutcome DeleteComponentType(const Model::DeleteComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComponentTypeRequestT = Model::DeleteComponentTypeRequest>
        Model::DeleteComponentTypeOutcomeCallable DeleteComponentTypeCallable(const DeleteComponentTypeRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::DeleteComponentType, request);
        }

        /**
         * An Async wrapper for DeleteComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComponentTypeRequestT = Model::DeleteComponentTypeRequest>
        void DeleteComponentTypeAsync(const DeleteComponentTypeRequestT& request, const DeleteComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::DeleteComponentType, request, handler, context);
        }

        /**
         * <p>Deletes an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntityOutcome DeleteEntity(const Model::DeleteEntityRequest& request) const;

        /**
         * A Callable wrapper for DeleteEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEntityRequestT = Model::DeleteEntityRequest>
        Model::DeleteEntityOutcomeCallable DeleteEntityCallable(const DeleteEntityRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::DeleteEntity, request);
        }

        /**
         * An Async wrapper for DeleteEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEntityRequestT = Model::DeleteEntityRequest>
        void DeleteEntityAsync(const DeleteEntityRequestT& request, const DeleteEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::DeleteEntity, request, handler, context);
        }

        /**
         * <p>Deletes a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteScene">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSceneOutcome DeleteScene(const Model::DeleteSceneRequest& request) const;

        /**
         * A Callable wrapper for DeleteScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSceneRequestT = Model::DeleteSceneRequest>
        Model::DeleteSceneOutcomeCallable DeleteSceneCallable(const DeleteSceneRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::DeleteScene, request);
        }

        /**
         * An Async wrapper for DeleteScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSceneRequestT = Model::DeleteSceneRequest>
        void DeleteSceneAsync(const DeleteSceneRequestT& request, const DeleteSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::DeleteScene, request, handler, context);
        }

        /**
         * <p>Delete the SyncJob.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSyncJobOutcome DeleteSyncJob(const Model::DeleteSyncJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSyncJobRequestT = Model::DeleteSyncJobRequest>
        Model::DeleteSyncJobOutcomeCallable DeleteSyncJobCallable(const DeleteSyncJobRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::DeleteSyncJob, request);
        }

        /**
         * An Async wrapper for DeleteSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSyncJobRequestT = Model::DeleteSyncJobRequest>
        void DeleteSyncJobAsync(const DeleteSyncJobRequestT& request, const DeleteSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::DeleteSyncJob, request, handler, context);
        }

        /**
         * <p>Deletes a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
        Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const DeleteWorkspaceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::DeleteWorkspace, request);
        }

        /**
         * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
        void DeleteWorkspaceAsync(const DeleteWorkspaceRequestT& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::DeleteWorkspace, request, handler, context);
        }

        /**
         * <p>Run queries to access information from your knowledge graph of entities
         * within individual workspaces.</p>  <p>The ExecuteQuery action only works
         * with <a
         * href="https://docs.aws.amazon.com/sdk-for-java/latest/developer-guide/home.html">Amazon
         * Web Services Java SDK2</a>. ExecuteQuery will not work with any Amazon Web
         * Services Java SDK version &lt; 2.x.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ExecuteQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteQueryOutcome ExecuteQuery(const Model::ExecuteQueryRequest& request) const;

        /**
         * A Callable wrapper for ExecuteQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteQueryRequestT = Model::ExecuteQueryRequest>
        Model::ExecuteQueryOutcomeCallable ExecuteQueryCallable(const ExecuteQueryRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ExecuteQuery, request);
        }

        /**
         * An Async wrapper for ExecuteQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteQueryRequestT = Model::ExecuteQueryRequest>
        void ExecuteQueryAsync(const ExecuteQueryRequestT& request, const ExecuteQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ExecuteQuery, request, handler, context);
        }

        /**
         * <p>Retrieves information about a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentTypeOutcome GetComponentType(const Model::GetComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for GetComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComponentTypeRequestT = Model::GetComponentTypeRequest>
        Model::GetComponentTypeOutcomeCallable GetComponentTypeCallable(const GetComponentTypeRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetComponentType, request);
        }

        /**
         * An Async wrapper for GetComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentTypeRequestT = Model::GetComponentTypeRequest>
        void GetComponentTypeAsync(const GetComponentTypeRequestT& request, const GetComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetComponentType, request, handler, context);
        }

        /**
         * <p>Retrieves information about an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntityOutcome GetEntity(const Model::GetEntityRequest& request) const;

        /**
         * A Callable wrapper for GetEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEntityRequestT = Model::GetEntityRequest>
        Model::GetEntityOutcomeCallable GetEntityCallable(const GetEntityRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetEntity, request);
        }

        /**
         * An Async wrapper for GetEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEntityRequestT = Model::GetEntityRequest>
        void GetEntityAsync(const GetEntityRequestT& request, const GetEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetEntity, request, handler, context);
        }

        /**
         * <p>Gets a nmetadata transfer job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetMetadataTransferJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetadataTransferJobOutcome GetMetadataTransferJob(const Model::GetMetadataTransferJobRequest& request) const;

        /**
         * A Callable wrapper for GetMetadataTransferJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetadataTransferJobRequestT = Model::GetMetadataTransferJobRequest>
        Model::GetMetadataTransferJobOutcomeCallable GetMetadataTransferJobCallable(const GetMetadataTransferJobRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetMetadataTransferJob, request);
        }

        /**
         * An Async wrapper for GetMetadataTransferJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetadataTransferJobRequestT = Model::GetMetadataTransferJobRequest>
        void GetMetadataTransferJobAsync(const GetMetadataTransferJobRequestT& request, const GetMetadataTransferJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetMetadataTransferJob, request, handler, context);
        }

        /**
         * <p>Gets the pricing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetPricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPricingPlanOutcome GetPricingPlan(const Model::GetPricingPlanRequest& request) const;

        /**
         * A Callable wrapper for GetPricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPricingPlanRequestT = Model::GetPricingPlanRequest>
        Model::GetPricingPlanOutcomeCallable GetPricingPlanCallable(const GetPricingPlanRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetPricingPlan, request);
        }

        /**
         * An Async wrapper for GetPricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPricingPlanRequestT = Model::GetPricingPlanRequest>
        void GetPricingPlanAsync(const GetPricingPlanRequestT& request, const GetPricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetPricingPlan, request, handler, context);
        }

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
        template<typename GetPropertyValueRequestT = Model::GetPropertyValueRequest>
        Model::GetPropertyValueOutcomeCallable GetPropertyValueCallable(const GetPropertyValueRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetPropertyValue, request);
        }

        /**
         * An Async wrapper for GetPropertyValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPropertyValueRequestT = Model::GetPropertyValueRequest>
        void GetPropertyValueAsync(const GetPropertyValueRequestT& request, const GetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetPropertyValue, request, handler, context);
        }

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
        template<typename GetPropertyValueHistoryRequestT = Model::GetPropertyValueHistoryRequest>
        Model::GetPropertyValueHistoryOutcomeCallable GetPropertyValueHistoryCallable(const GetPropertyValueHistoryRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetPropertyValueHistory, request);
        }

        /**
         * An Async wrapper for GetPropertyValueHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPropertyValueHistoryRequestT = Model::GetPropertyValueHistoryRequest>
        void GetPropertyValueHistoryAsync(const GetPropertyValueHistoryRequestT& request, const GetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetPropertyValueHistory, request, handler, context);
        }

        /**
         * <p>Retrieves information about a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetScene">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSceneOutcome GetScene(const Model::GetSceneRequest& request) const;

        /**
         * A Callable wrapper for GetScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSceneRequestT = Model::GetSceneRequest>
        Model::GetSceneOutcomeCallable GetSceneCallable(const GetSceneRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetScene, request);
        }

        /**
         * An Async wrapper for GetScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSceneRequestT = Model::GetSceneRequest>
        void GetSceneAsync(const GetSceneRequestT& request, const GetSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetScene, request, handler, context);
        }

        /**
         * <p>Gets the SyncJob.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSyncJobOutcome GetSyncJob(const Model::GetSyncJobRequest& request) const;

        /**
         * A Callable wrapper for GetSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSyncJobRequestT = Model::GetSyncJobRequest>
        Model::GetSyncJobOutcomeCallable GetSyncJobCallable(const GetSyncJobRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetSyncJob, request);
        }

        /**
         * An Async wrapper for GetSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSyncJobRequestT = Model::GetSyncJobRequest>
        void GetSyncJobAsync(const GetSyncJobRequestT& request, const GetSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetSyncJob, request, handler, context);
        }

        /**
         * <p>Retrieves information about a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkspaceOutcome GetWorkspace(const Model::GetWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for GetWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkspaceRequestT = Model::GetWorkspaceRequest>
        Model::GetWorkspaceOutcomeCallable GetWorkspaceCallable(const GetWorkspaceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::GetWorkspace, request);
        }

        /**
         * An Async wrapper for GetWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkspaceRequestT = Model::GetWorkspaceRequest>
        void GetWorkspaceAsync(const GetWorkspaceRequestT& request, const GetWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::GetWorkspace, request, handler, context);
        }

        /**
         * <p>Lists all component types in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListComponentTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentTypesOutcome ListComponentTypes(const Model::ListComponentTypesRequest& request) const;

        /**
         * A Callable wrapper for ListComponentTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentTypesRequestT = Model::ListComponentTypesRequest>
        Model::ListComponentTypesOutcomeCallable ListComponentTypesCallable(const ListComponentTypesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListComponentTypes, request);
        }

        /**
         * An Async wrapper for ListComponentTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentTypesRequestT = Model::ListComponentTypesRequest>
        void ListComponentTypesAsync(const ListComponentTypesRequestT& request, const ListComponentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListComponentTypes, request, handler, context);
        }

        /**
         * <p>This API lists the components of an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        Model::ListComponentsOutcomeCallable ListComponentsCallable(const ListComponentsRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListComponents, request);
        }

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        void ListComponentsAsync(const ListComponentsRequestT& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListComponents, request, handler, context);
        }

        /**
         * <p>Lists all entities in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesOutcome ListEntities(const Model::ListEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ListEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEntitiesRequestT = Model::ListEntitiesRequest>
        Model::ListEntitiesOutcomeCallable ListEntitiesCallable(const ListEntitiesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListEntities, request);
        }

        /**
         * An Async wrapper for ListEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntitiesRequestT = Model::ListEntitiesRequest>
        void ListEntitiesAsync(const ListEntitiesRequestT& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListEntities, request, handler, context);
        }

        /**
         * <p>Lists the metadata transfer jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListMetadataTransferJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetadataTransferJobsOutcome ListMetadataTransferJobs(const Model::ListMetadataTransferJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMetadataTransferJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMetadataTransferJobsRequestT = Model::ListMetadataTransferJobsRequest>
        Model::ListMetadataTransferJobsOutcomeCallable ListMetadataTransferJobsCallable(const ListMetadataTransferJobsRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListMetadataTransferJobs, request);
        }

        /**
         * An Async wrapper for ListMetadataTransferJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMetadataTransferJobsRequestT = Model::ListMetadataTransferJobsRequest>
        void ListMetadataTransferJobsAsync(const ListMetadataTransferJobsRequestT& request, const ListMetadataTransferJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListMetadataTransferJobs, request, handler, context);
        }

        /**
         * <p>This API lists the properties of a component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPropertiesOutcome ListProperties(const Model::ListPropertiesRequest& request) const;

        /**
         * A Callable wrapper for ListProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPropertiesRequestT = Model::ListPropertiesRequest>
        Model::ListPropertiesOutcomeCallable ListPropertiesCallable(const ListPropertiesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListProperties, request);
        }

        /**
         * An Async wrapper for ListProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPropertiesRequestT = Model::ListPropertiesRequest>
        void ListPropertiesAsync(const ListPropertiesRequestT& request, const ListPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListProperties, request, handler, context);
        }

        /**
         * <p>Lists all scenes in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListScenes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScenesOutcome ListScenes(const Model::ListScenesRequest& request) const;

        /**
         * A Callable wrapper for ListScenes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListScenesRequestT = Model::ListScenesRequest>
        Model::ListScenesOutcomeCallable ListScenesCallable(const ListScenesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListScenes, request);
        }

        /**
         * An Async wrapper for ListScenes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScenesRequestT = Model::ListScenesRequest>
        void ListScenesAsync(const ListScenesRequestT& request, const ListScenesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListScenes, request, handler, context);
        }

        /**
         * <p>List all SyncJobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListSyncJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSyncJobsOutcome ListSyncJobs(const Model::ListSyncJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSyncJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSyncJobsRequestT = Model::ListSyncJobsRequest>
        Model::ListSyncJobsOutcomeCallable ListSyncJobsCallable(const ListSyncJobsRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListSyncJobs, request);
        }

        /**
         * An Async wrapper for ListSyncJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSyncJobsRequestT = Model::ListSyncJobsRequest>
        void ListSyncJobsAsync(const ListSyncJobsRequestT& request, const ListSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListSyncJobs, request, handler, context);
        }

        /**
         * <p>Lists the sync resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListSyncResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSyncResourcesOutcome ListSyncResources(const Model::ListSyncResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListSyncResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSyncResourcesRequestT = Model::ListSyncResourcesRequest>
        Model::ListSyncResourcesOutcomeCallable ListSyncResourcesCallable(const ListSyncResourcesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListSyncResources, request);
        }

        /**
         * An Async wrapper for ListSyncResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSyncResourcesRequestT = Model::ListSyncResourcesRequest>
        void ListSyncResourcesAsync(const ListSyncResourcesRequestT& request, const ListSyncResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListSyncResources, request, handler, context);
        }

        /**
         * <p>Lists all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
        Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const ListWorkspacesRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::ListWorkspaces, request);
        }

        /**
         * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
        void ListWorkspacesAsync(const ListWorkspacesRequestT& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::ListWorkspaces, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates information in a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentTypeOutcome UpdateComponentType(const Model::UpdateComponentTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponentType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateComponentTypeRequestT = Model::UpdateComponentTypeRequest>
        Model::UpdateComponentTypeOutcomeCallable UpdateComponentTypeCallable(const UpdateComponentTypeRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::UpdateComponentType, request);
        }

        /**
         * An Async wrapper for UpdateComponentType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateComponentTypeRequestT = Model::UpdateComponentTypeRequest>
        void UpdateComponentTypeAsync(const UpdateComponentTypeRequestT& request, const UpdateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::UpdateComponentType, request, handler, context);
        }

        /**
         * <p>Updates an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEntityOutcome UpdateEntity(const Model::UpdateEntityRequest& request) const;

        /**
         * A Callable wrapper for UpdateEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEntityRequestT = Model::UpdateEntityRequest>
        Model::UpdateEntityOutcomeCallable UpdateEntityCallable(const UpdateEntityRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::UpdateEntity, request);
        }

        /**
         * An Async wrapper for UpdateEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEntityRequestT = Model::UpdateEntityRequest>
        void UpdateEntityAsync(const UpdateEntityRequestT& request, const UpdateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::UpdateEntity, request, handler, context);
        }

        /**
         * <p>Update the pricing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdatePricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePricingPlanOutcome UpdatePricingPlan(const Model::UpdatePricingPlanRequest& request) const;

        /**
         * A Callable wrapper for UpdatePricingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePricingPlanRequestT = Model::UpdatePricingPlanRequest>
        Model::UpdatePricingPlanOutcomeCallable UpdatePricingPlanCallable(const UpdatePricingPlanRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::UpdatePricingPlan, request);
        }

        /**
         * An Async wrapper for UpdatePricingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePricingPlanRequestT = Model::UpdatePricingPlanRequest>
        void UpdatePricingPlanAsync(const UpdatePricingPlanRequestT& request, const UpdatePricingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::UpdatePricingPlan, request, handler, context);
        }

        /**
         * <p>Updates a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateScene">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSceneOutcome UpdateScene(const Model::UpdateSceneRequest& request) const;

        /**
         * A Callable wrapper for UpdateScene that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSceneRequestT = Model::UpdateSceneRequest>
        Model::UpdateSceneOutcomeCallable UpdateSceneCallable(const UpdateSceneRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::UpdateScene, request);
        }

        /**
         * An Async wrapper for UpdateScene that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSceneRequestT = Model::UpdateSceneRequest>
        void UpdateSceneAsync(const UpdateSceneRequestT& request, const UpdateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::UpdateScene, request, handler, context);
        }

        /**
         * <p>Updates a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkspaceRequestT = Model::UpdateWorkspaceRequest>
        Model::UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const UpdateWorkspaceRequestT& request) const
        {
            return SubmitCallable(&IoTTwinMakerClient::UpdateWorkspace, request);
        }

        /**
         * An Async wrapper for UpdateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkspaceRequestT = Model::UpdateWorkspaceRequest>
        void UpdateWorkspaceAsync(const UpdateWorkspaceRequestT& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTTwinMakerClient::UpdateWorkspace, request, handler, context);
        }


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
