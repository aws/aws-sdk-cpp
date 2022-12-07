/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amp/PrometheusServiceServiceClientModel.h>

namespace Aws
{
namespace PrometheusService
{
  /**
   * <p>Amazon Managed Service for Prometheus</p>
   */
  class AWS_PROMETHEUSSERVICE_API PrometheusServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PrometheusServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration(),
                                std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrometheusServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<PrometheusServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<PrometheusServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::PrometheusService::PrometheusServiceClientConfiguration& clientConfiguration = Aws::PrometheusService::PrometheusServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrometheusServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrometheusServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PrometheusServiceClient();

        /**
         * <p>Create an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlertManagerDefinitionOutcome CreateAlertManagerDefinition(const Model::CreateAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAlertManagerDefinitionOutcomeCallable CreateAlertManagerDefinitionCallable(const Model::CreateAlertManagerDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlertManagerDefinitionAsync(const Model::CreateAlertManagerDefinitionRequest& request, const CreateAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggingConfigurationOutcome CreateLoggingConfiguration(const Model::CreateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoggingConfigurationOutcomeCallable CreateLoggingConfigurationCallable(const Model::CreateLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoggingConfigurationAsync(const Model::CreateLoggingConfigurationRequest& request, const CreateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a rule group namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupsNamespaceOutcome CreateRuleGroupsNamespace(const Model::CreateRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRuleGroupsNamespaceOutcomeCallable CreateRuleGroupsNamespaceCallable(const Model::CreateRuleGroupsNamespaceRequest& request) const;

        /**
         * An Async wrapper for CreateRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRuleGroupsNamespaceAsync(const Model::CreateRuleGroupsNamespaceRequest& request, const CreateRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspace">AWS
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
         * <p>Deletes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertManagerDefinitionOutcome DeleteAlertManagerDefinition(const Model::DeleteAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlertManagerDefinitionOutcomeCallable DeleteAlertManagerDefinitionCallable(const Model::DeleteAlertManagerDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlertManagerDefinitionAsync(const Model::DeleteAlertManagerDefinitionRequest& request, const DeleteAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggingConfigurationAsync(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupsNamespaceOutcome DeleteRuleGroupsNamespace(const Model::DeleteRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRuleGroupsNamespaceOutcomeCallable DeleteRuleGroupsNamespaceCallable(const Model::DeleteRuleGroupsNamespaceRequest& request) const;

        /**
         * An Async wrapper for DeleteRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRuleGroupsNamespaceAsync(const Model::DeleteRuleGroupsNamespaceRequest& request, const DeleteRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteWorkspace">AWS
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
         * <p>Describes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlertManagerDefinitionOutcome DescribeAlertManagerDefinition(const Model::DescribeAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlertManagerDefinitionOutcomeCallable DescribeAlertManagerDefinitionCallable(const Model::DescribeAlertManagerDefinitionRequest& request) const;

        /**
         * An Async wrapper for DescribeAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlertManagerDefinitionAsync(const Model::DescribeAlertManagerDefinitionRequest& request, const DescribeAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingConfigurationOutcome DescribeLoggingConfiguration(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingConfigurationOutcomeCallable DescribeLoggingConfigurationCallable(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingConfigurationAsync(const Model::DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupsNamespaceOutcome DescribeRuleGroupsNamespace(const Model::DescribeRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuleGroupsNamespaceOutcomeCallable DescribeRuleGroupsNamespaceCallable(const Model::DescribeRuleGroupsNamespaceRequest& request) const;

        /**
         * An Async wrapper for DescribeRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuleGroupsNamespaceAsync(const Model::DescribeRuleGroupsNamespaceRequest& request, const DescribeRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceAsync(const Model::DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists rule groups namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsNamespacesOutcome ListRuleGroupsNamespaces(const Model::ListRuleGroupsNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListRuleGroupsNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRuleGroupsNamespacesOutcomeCallable ListRuleGroupsNamespacesCallable(const Model::ListRuleGroupsNamespacesRequest& request) const;

        /**
         * An Async wrapper for ListRuleGroupsNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRuleGroupsNamespacesAsync(const Model::ListRuleGroupsNamespacesRequest& request, const ListRuleGroupsNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags you have assigned to the resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListTagsForResource">AWS
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
         * <p>Lists all AMP workspaces, including workspaces being created or
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspaces">AWS
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
         * <p>Update an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlertManagerDefinitionOutcome PutAlertManagerDefinition(const Model::PutAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAlertManagerDefinitionOutcomeCallable PutAlertManagerDefinitionCallable(const Model::PutAlertManagerDefinitionRequest& request) const;

        /**
         * An Async wrapper for PutAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAlertManagerDefinitionAsync(const Model::PutAlertManagerDefinitionRequest& request, const PutAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRuleGroupsNamespaceOutcome PutRuleGroupsNamespace(const Model::PutRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for PutRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRuleGroupsNamespaceOutcomeCallable PutRuleGroupsNamespaceCallable(const Model::PutRuleGroupsNamespaceRequest& request) const;

        /**
         * An Async wrapper for PutRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRuleGroupsNamespaceAsync(const Model::PutRuleGroupsNamespaceRequest& request, const PutRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/TagResource">AWS API
         * Reference</a></p>
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
         * <p>Deletes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UntagResource">AWS
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
         * <p>Update logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggingConfigurationOutcome UpdateLoggingConfiguration(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoggingConfigurationAsync(const Model::UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an AMP workspace alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceAliasOutcome UpdateWorkspaceAlias(const Model::UpdateWorkspaceAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceAliasOutcomeCallable UpdateWorkspaceAliasCallable(const Model::UpdateWorkspaceAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkspaceAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceAliasAsync(const Model::UpdateWorkspaceAliasRequest& request, const UpdateWorkspaceAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PrometheusServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PrometheusServiceClient>;
      void init(const PrometheusServiceClientConfiguration& clientConfiguration);

      PrometheusServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PrometheusServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace PrometheusService
} // namespace Aws
