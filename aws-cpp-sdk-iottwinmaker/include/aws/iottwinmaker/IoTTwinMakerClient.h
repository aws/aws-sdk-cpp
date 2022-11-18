/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iottwinmaker/IoTTwinMakerServiceClientModel.h>
#include <aws/iottwinmaker/IoTTwinMakerLegacyAsyncMacros.h>

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
  class AWS_IOTTWINMAKER_API IoTTwinMakerClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Sets values for multiple time series properties.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/BatchPutPropertyValues">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutPropertyValuesOutcome BatchPutPropertyValues(const Model::BatchPutPropertyValuesRequest& request) const;


        /**
         * <p>Creates a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentTypeOutcome CreateComponentType(const Model::CreateComponentTypeRequest& request) const;


        /**
         * <p>Creates an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEntityOutcome CreateEntity(const Model::CreateEntityRequest& request) const;


        /**
         * <p>Creates a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateScene">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSceneOutcome CreateScene(const Model::CreateSceneRequest& request) const;


        /**
         * <p>Creates a workplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;


        /**
         * <p>Deletes a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentTypeOutcome DeleteComponentType(const Model::DeleteComponentTypeRequest& request) const;


        /**
         * <p>Deletes an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEntityOutcome DeleteEntity(const Model::DeleteEntityRequest& request) const;


        /**
         * <p>Deletes a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteScene">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSceneOutcome DeleteScene(const Model::DeleteSceneRequest& request) const;


        /**
         * <p>Deletes a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;


        /**
         * <p>Run queries to access information from your knowledge graph of entities
         * within individual workspaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ExecuteQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteQueryOutcome ExecuteQuery(const Model::ExecuteQueryRequest& request) const;


        /**
         * <p>Retrieves information about a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentTypeOutcome GetComponentType(const Model::GetComponentTypeRequest& request) const;


        /**
         * <p>Retrieves information about an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntityOutcome GetEntity(const Model::GetEntityRequest& request) const;


        /**
         * <p>Gets the pricing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetPricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPricingPlanOutcome GetPricingPlan(const Model::GetPricingPlanRequest& request) const;


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
         * <p>Retrieves information about a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetScene">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSceneOutcome GetScene(const Model::GetSceneRequest& request) const;


        /**
         * <p>Retrieves information about a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/GetWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkspaceOutcome GetWorkspace(const Model::GetWorkspaceRequest& request) const;


        /**
         * <p>Lists all component types in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListComponentTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentTypesOutcome ListComponentTypes(const Model::ListComponentTypesRequest& request) const;


        /**
         * <p>Lists all entities in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesOutcome ListEntities(const Model::ListEntitiesRequest& request) const;


        /**
         * <p>Lists all scenes in a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListScenes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScenesOutcome ListScenes(const Model::ListScenesRequest& request) const;


        /**
         * <p>Lists all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Retrieves information about workspaces in the current account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request) const;


        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates information in a component type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateComponentType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentTypeOutcome UpdateComponentType(const Model::UpdateComponentTypeRequest& request) const;


        /**
         * <p>Updates an entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEntityOutcome UpdateEntity(const Model::UpdateEntityRequest& request) const;


        /**
         * <p>Update the pricing plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdatePricingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePricingPlanOutcome UpdatePricingPlan(const Model::UpdatePricingPlanRequest& request) const;


        /**
         * <p>Updates a scene.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateScene">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSceneOutcome UpdateScene(const Model::UpdateSceneRequest& request) const;


        /**
         * <p>Updates a workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/UpdateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTTwinMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTTwinMakerClientConfiguration& clientConfiguration);

      IoTTwinMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTTwinMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTTwinMaker
} // namespace Aws
