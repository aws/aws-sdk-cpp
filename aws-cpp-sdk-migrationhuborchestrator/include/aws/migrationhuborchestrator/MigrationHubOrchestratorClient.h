/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorServiceClientModel.h>

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
  class AWS_MIGRATIONHUBORCHESTRATOR_API MigrationHubOrchestratorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubOrchestratorClient>
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

        /**
         * <p>Create a workflow to orchestrate your migrations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request) const;

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a step in the migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowStepOutcome CreateWorkflowStep(const Model::CreateWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkflowStepOutcomeCallable CreateWorkflowStepCallable(const Model::CreateWorkflowStepRequest& request) const;

        /**
         * An Async wrapper for CreateWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkflowStepAsync(const Model::CreateWorkflowStepRequest& request, const CreateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/CreateWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowStepGroupOutcome CreateWorkflowStepGroup(const Model::CreateWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkflowStepGroupOutcomeCallable CreateWorkflowStepGroupCallable(const Model::CreateWorkflowStepGroupRequest& request) const;

        /**
         * An Async wrapper for CreateWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkflowStepGroupAsync(const Model::CreateWorkflowStepGroupRequest& request, const CreateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a migration workflow. You must pause a running workflow in Migration
         * Hub Orchestrator console to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a step in a migration workflow. Pause the workflow to delete a running
         * step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowStepOutcome DeleteWorkflowStep(const Model::DeleteWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowStepOutcomeCallable DeleteWorkflowStepCallable(const Model::DeleteWorkflowStepRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowStepAsync(const Model::DeleteWorkflowStepRequest& request, const DeleteWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/DeleteWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowStepGroupOutcome DeleteWorkflowStepGroup(const Model::DeleteWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowStepGroupOutcomeCallable DeleteWorkflowStepGroupCallable(const Model::DeleteWorkflowStepGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowStepGroupAsync(const Model::DeleteWorkflowStepGroupRequest& request, const DeleteWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the template you want to use for creating a migration
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateOutcomeCallable GetTemplateCallable(const Model::GetTemplateRequest& request) const;

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a specific step in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplateStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateStepOutcome GetTemplateStep(const Model::GetTemplateStepRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateStepOutcomeCallable GetTemplateStepCallable(const Model::GetTemplateStepRequest& request) const;

        /**
         * An Async wrapper for GetTemplateStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateStepAsync(const Model::GetTemplateStepRequest& request, const GetTemplateStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a step group in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetTemplateStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateStepGroupOutcome GetTemplateStepGroup(const Model::GetTemplateStepGroupRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateStepGroupOutcomeCallable GetTemplateStepGroupCallable(const Model::GetTemplateStepGroupRequest& request) const;

        /**
         * An Async wrapper for GetTemplateStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateStepGroupAsync(const Model::GetTemplateStepGroupRequest& request, const GetTemplateStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request) const;

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a step in the migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepOutcome GetWorkflowStep(const Model::GetWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowStepOutcomeCallable GetWorkflowStepCallable(const Model::GetWorkflowStepRequest& request) const;

        /**
         * An Async wrapper for GetWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowStepAsync(const Model::GetWorkflowStepRequest& request, const GetWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the step group of a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/GetWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepGroupOutcome GetWorkflowStepGroup(const Model::GetWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowStepGroupOutcomeCallable GetWorkflowStepGroupCallable(const Model::GetWorkflowStepGroupRequest& request) const;

        /**
         * An Async wrapper for GetWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowStepGroupAsync(const Model::GetWorkflowStepGroupRequest& request, const GetWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List AWS Migration Hub Orchestrator plugins.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListPlugins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginsOutcome ListPlugins(const Model::ListPluginsRequest& request) const;

        /**
         * A Callable wrapper for ListPlugins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPluginsOutcomeCallable ListPluginsCallable(const Model::ListPluginsRequest& request) const;

        /**
         * An Async wrapper for ListPlugins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPluginsAsync(const Model::ListPluginsRequest& request, const ListPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags added to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTagsForResource">AWS
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
         * <p>List the step groups in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplateStepGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateStepGroupsOutcome ListTemplateStepGroups(const Model::ListTemplateStepGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateStepGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateStepGroupsOutcomeCallable ListTemplateStepGroupsCallable(const Model::ListTemplateStepGroupsRequest& request) const;

        /**
         * An Async wrapper for ListTemplateStepGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateStepGroupsAsync(const Model::ListTemplateStepGroupsRequest& request, const ListTemplateStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the steps in a template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplateSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateStepsOutcome ListTemplateSteps(const Model::ListTemplateStepsRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplateStepsOutcomeCallable ListTemplateStepsCallable(const Model::ListTemplateStepsRequest& request) const;

        /**
         * An Async wrapper for ListTemplateSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplateStepsAsync(const Model::ListTemplateStepsRequest& request, const ListTemplateStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the templates available in Migration Hub Orchestrator to create a
         * migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const Model::ListTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the step groups in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflowStepGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepGroupsOutcome ListWorkflowStepGroups(const Model::ListWorkflowStepGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowStepGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowStepGroupsOutcomeCallable ListWorkflowStepGroupsCallable(const Model::ListWorkflowStepGroupsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflowStepGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowStepGroupsAsync(const Model::ListWorkflowStepGroupsRequest& request, const ListWorkflowStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the steps in a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepsOutcome ListWorkflowSteps(const Model::ListWorkflowStepsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowStepsOutcomeCallable ListWorkflowStepsCallable(const Model::ListWorkflowStepsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowStepsAsync(const Model::ListWorkflowStepsRequest& request, const ListWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the migration workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retry a failed step in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/RetryWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryWorkflowStepOutcome RetryWorkflowStep(const Model::RetryWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for RetryWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryWorkflowStepOutcomeCallable RetryWorkflowStepCallable(const Model::RetryWorkflowStepRequest& request) const;

        /**
         * An Async wrapper for RetryWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryWorkflowStepAsync(const Model::RetryWorkflowStepRequest& request, const RetryWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StartWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowOutcome StartWorkflow(const Model::StartWorkflowRequest& request) const;

        /**
         * A Callable wrapper for StartWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartWorkflowOutcomeCallable StartWorkflowCallable(const Model::StartWorkflowRequest& request) const;

        /**
         * An Async wrapper for StartWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartWorkflowAsync(const Model::StartWorkflowRequest& request, const StartWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop an ongoing migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StopWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkflowOutcome StopWorkflow(const Model::StopWorkflowRequest& request) const;

        /**
         * A Callable wrapper for StopWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopWorkflowOutcomeCallable StopWorkflowCallable(const Model::StopWorkflowRequest& request) const;

        /**
         * An Async wrapper for StopWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopWorkflowAsync(const Model::StopWorkflowRequest& request, const StopWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tag a resource by specifying its Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/TagResource">AWS
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
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UntagResource">AWS
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
         * <p>Update a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a step in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflowStep">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowStepOutcome UpdateWorkflowStep(const Model::UpdateWorkflowStepRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflowStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkflowStepOutcomeCallable UpdateWorkflowStepCallable(const Model::UpdateWorkflowStepRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkflowStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkflowStepAsync(const Model::UpdateWorkflowStepRequest& request, const UpdateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the step group in a migration workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/UpdateWorkflowStepGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowStepGroupOutcome UpdateWorkflowStepGroup(const Model::UpdateWorkflowStepGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflowStepGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkflowStepGroupOutcomeCallable UpdateWorkflowStepGroupCallable(const Model::UpdateWorkflowStepGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkflowStepGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkflowStepGroupAsync(const Model::UpdateWorkflowStepGroupRequest& request, const UpdateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubOrchestratorClient>;
      void init(const MigrationHubOrchestratorClientConfiguration& clientConfiguration);

      MigrationHubOrchestratorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubOrchestrator
} // namespace Aws
