/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorLegacyAsyncMacros.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
  /**
   * <p>This API reference provides descriptions, syntax, and other details about
   * each of the actions and data types for AWS Migration Hub Orchestrator. he topic
   * for each action shows the API request parameters and the response.
   * Alternatively, you can use one of the AWS SDKs to access an API that is tailored
   * to the programming language or platform that you're using.</p>
   */
  class AWS_MIGRATIONHUBORCHESTRATOR_API MigrationHubOrchestratorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration(),
                                       std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::Auth::AWSCredentials& credentials,
                                       std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubOrchestratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG),
                                       const Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration = Aws::MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubOrchestratorClient(const Aws::Auth::AWSCredentials& credentials,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubOrchestratorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubOrchestratorClient();


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
         * <p>Create a workflow to orchestrate your migrations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;


        /**
         * <p>Create a step in the migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowStepOutcome CreateWorkflowStep(const Model::CreateWorkflowStepRequest& request) const;


        /**
         * <p>Create a step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowStepGroupOutcome CreateWorkflowStepGroup(const Model::CreateWorkflowStepGroupRequest& request) const;


        /**
         * <p>Delete a migration workflow. You must pause a running workflow in Migration
         * Hub Orchestrator console to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;


        /**
         * <p>Delete a step in a migration workflow. Pause the workflow to delete a running
         * step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowStepOutcome DeleteWorkflowStep(const Model::DeleteWorkflowStepRequest& request) const;


        /**
         * <p>Delete a step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowStepGroupOutcome DeleteWorkflowStepGroup(const Model::DeleteWorkflowStepGroupRequest& request) const;


        /**
         * <p>Get the template you want to use for creating a migration
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;


        /**
         * <p>Get a specific step in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplateStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateStepOutcome GetTemplateStep(const Model::GetTemplateStepRequest& request) const;


        /**
         * <p>Get a step group in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplateStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateStepGroupOutcome GetTemplateStepGroup(const Model::GetTemplateStepGroupRequest& request) const;


        /**
         * <p>Get migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;


        /**
         * <p>Get a step in the migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepOutcome GetWorkflowStep(const Model::GetWorkflowStepRequest& request) const;


        /**
         * <p>Get the step group of a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepGroupOutcome GetWorkflowStepGroup(const Model::GetWorkflowStepGroupRequest& request) const;


        /**
         * <p>List AWS Migration Hub Orchestrator plugins.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListPlugins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginsOutcome ListPlugins(const Model::ListPluginsRequest& request) const;


        /**
         * <p>List the tags added to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>List the step groups in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplateStepGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateStepGroupsOutcome ListTemplateStepGroups(const Model::ListTemplateStepGroupsRequest& request) const;


        /**
         * <p>List the steps in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplateSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateStepsOutcome ListTemplateSteps(const Model::ListTemplateStepsRequest& request) const;


        /**
         * <p>List the templates available in Migration Hub Orchestrator to create a
         * migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;


        /**
         * <p>List the step groups in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflowStepGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepGroupsOutcome ListWorkflowStepGroups(const Model::ListWorkflowStepGroupsRequest& request) const;


        /**
         * <p>List the steps in a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepsOutcome ListWorkflowSteps(const Model::ListWorkflowStepsRequest& request) const;


        /**
         * <p>List the migration workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;


        /**
         * <p>Retry a failed step in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/RetryWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryWorkflowStepOutcome RetryWorkflowStep(const Model::RetryWorkflowStepRequest& request) const;


        /**
         * <p>Start a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StartWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowOutcome StartWorkflow(const Model::StartWorkflowRequest& request) const;


        /**
         * <p>Stop an ongoing migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StopWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkflowOutcome StopWorkflow(const Model::StopWorkflowRequest& request) const;


        /**
         * <p>Tag a resource by specifying its Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Update a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;


        /**
         * <p>Update a step in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowStepOutcome UpdateWorkflowStep(const Model::UpdateWorkflowStepRequest& request) const;


        /**
         * <p>Update the step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowStepGroupOutcome UpdateWorkflowStepGroup(const Model::UpdateWorkflowStepGroupRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MigrationHubOrchestratorClientConfiguration& clientConfiguration);

      MigrationHubOrchestratorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubOrchestrator
} // namespace Aws
