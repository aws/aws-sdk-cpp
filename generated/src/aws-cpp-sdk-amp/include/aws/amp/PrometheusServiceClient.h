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

      typedef PrometheusServiceClientConfiguration ClientConfigurationType;
      typedef PrometheusServiceEndpointProvider EndpointProviderType;

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
        template<typename CreateAlertManagerDefinitionRequestT = Model::CreateAlertManagerDefinitionRequest>
        Model::CreateAlertManagerDefinitionOutcomeCallable CreateAlertManagerDefinitionCallable(const CreateAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for CreateAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAlertManagerDefinitionRequestT = Model::CreateAlertManagerDefinitionRequest>
        void CreateAlertManagerDefinitionAsync(const CreateAlertManagerDefinitionRequestT& request, const CreateAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Create logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggingConfigurationOutcome CreateLoggingConfiguration(const Model::CreateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLoggingConfigurationRequestT = Model::CreateLoggingConfigurationRequest>
        Model::CreateLoggingConfigurationOutcomeCallable CreateLoggingConfigurationCallable(const CreateLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for CreateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoggingConfigurationRequestT = Model::CreateLoggingConfigurationRequest>
        void CreateLoggingConfigurationAsync(const CreateLoggingConfigurationRequestT& request, const CreateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Create a rule group namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupsNamespaceOutcome CreateRuleGroupsNamespace(const Model::CreateRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleGroupsNamespaceRequestT = Model::CreateRuleGroupsNamespaceRequest>
        Model::CreateRuleGroupsNamespaceOutcomeCallable CreateRuleGroupsNamespaceCallable(const CreateRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for CreateRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleGroupsNamespaceRequestT = Model::CreateRuleGroupsNamespaceRequest>
        void CreateRuleGroupsNamespaceAsync(const CreateRuleGroupsNamespaceRequestT& request, const CreateRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>Creates a new AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
        Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const CreateWorkspaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::CreateWorkspace, request);
        }

        /**
         * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
        void CreateWorkspaceAsync(const CreateWorkspaceRequestT& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::CreateWorkspace, request, handler, context);
        }

        /**
         * <p>Deletes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlertManagerDefinitionOutcome DeleteAlertManagerDefinition(const Model::DeleteAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlertManagerDefinitionRequestT = Model::DeleteAlertManagerDefinitionRequest>
        Model::DeleteAlertManagerDefinitionOutcomeCallable DeleteAlertManagerDefinitionCallable(const DeleteAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for DeleteAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlertManagerDefinitionRequestT = Model::DeleteAlertManagerDefinitionRequest>
        void DeleteAlertManagerDefinitionAsync(const DeleteAlertManagerDefinitionRequestT& request, const DeleteAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Delete logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLoggingConfigurationRequestT = Model::DeleteLoggingConfigurationRequest>
        Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoggingConfigurationRequestT = Model::DeleteLoggingConfigurationRequest>
        void DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequestT& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Delete a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupsNamespaceOutcome DeleteRuleGroupsNamespace(const Model::DeleteRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleGroupsNamespaceRequestT = Model::DeleteRuleGroupsNamespaceRequest>
        Model::DeleteRuleGroupsNamespaceOutcomeCallable DeleteRuleGroupsNamespaceCallable(const DeleteRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for DeleteRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleGroupsNamespaceRequestT = Model::DeleteRuleGroupsNamespaceRequest>
        void DeleteRuleGroupsNamespaceAsync(const DeleteRuleGroupsNamespaceRequestT& request, const DeleteRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>Deletes an AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
        Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const DeleteWorkspaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DeleteWorkspace, request);
        }

        /**
         * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
        void DeleteWorkspaceAsync(const DeleteWorkspaceRequestT& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DeleteWorkspace, request, handler, context);
        }

        /**
         * <p>Describes an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlertManagerDefinitionOutcome DescribeAlertManagerDefinition(const Model::DescribeAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAlertManagerDefinitionRequestT = Model::DescribeAlertManagerDefinitionRequest>
        Model::DescribeAlertManagerDefinitionOutcomeCallable DescribeAlertManagerDefinitionCallable(const DescribeAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for DescribeAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAlertManagerDefinitionRequestT = Model::DescribeAlertManagerDefinitionRequest>
        void DescribeAlertManagerDefinitionAsync(const DescribeAlertManagerDefinitionRequestT& request, const DescribeAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Describes logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingConfigurationOutcome DescribeLoggingConfiguration(const Model::DescribeLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoggingConfigurationRequestT = Model::DescribeLoggingConfigurationRequest>
        Model::DescribeLoggingConfigurationOutcomeCallable DescribeLoggingConfigurationCallable(const DescribeLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoggingConfigurationRequestT = Model::DescribeLoggingConfigurationRequest>
        void DescribeLoggingConfigurationAsync(const DescribeLoggingConfigurationRequestT& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Describe a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupsNamespaceOutcome DescribeRuleGroupsNamespace(const Model::DescribeRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleGroupsNamespaceRequestT = Model::DescribeRuleGroupsNamespaceRequest>
        Model::DescribeRuleGroupsNamespaceOutcomeCallable DescribeRuleGroupsNamespaceCallable(const DescribeRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for DescribeRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleGroupsNamespaceRequestT = Model::DescribeRuleGroupsNamespaceRequest>
        void DescribeRuleGroupsNamespaceAsync(const DescribeRuleGroupsNamespaceRequestT& request, const DescribeRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>Describes an existing AMP workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/DescribeWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
        Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const DescribeWorkspaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::DescribeWorkspace, request);
        }

        /**
         * An Async wrapper for DescribeWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
        void DescribeWorkspaceAsync(const DescribeWorkspaceRequestT& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::DescribeWorkspace, request, handler, context);
        }

        /**
         * <p>Lists rule groups namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListRuleGroupsNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsNamespacesOutcome ListRuleGroupsNamespaces(const Model::ListRuleGroupsNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListRuleGroupsNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleGroupsNamespacesRequestT = Model::ListRuleGroupsNamespacesRequest>
        Model::ListRuleGroupsNamespacesOutcomeCallable ListRuleGroupsNamespacesCallable(const ListRuleGroupsNamespacesRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListRuleGroupsNamespaces, request);
        }

        /**
         * An Async wrapper for ListRuleGroupsNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleGroupsNamespacesRequestT = Model::ListRuleGroupsNamespacesRequest>
        void ListRuleGroupsNamespacesAsync(const ListRuleGroupsNamespacesRequestT& request, const ListRuleGroupsNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListRuleGroupsNamespaces, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
        Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const ListWorkspacesRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::ListWorkspaces, request);
        }

        /**
         * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
        void ListWorkspacesAsync(const ListWorkspacesRequestT& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::ListWorkspaces, request, handler, context);
        }

        /**
         * <p>Update an alert manager definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutAlertManagerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlertManagerDefinitionOutcome PutAlertManagerDefinition(const Model::PutAlertManagerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutAlertManagerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAlertManagerDefinitionRequestT = Model::PutAlertManagerDefinitionRequest>
        Model::PutAlertManagerDefinitionOutcomeCallable PutAlertManagerDefinitionCallable(const PutAlertManagerDefinitionRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::PutAlertManagerDefinition, request);
        }

        /**
         * An Async wrapper for PutAlertManagerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAlertManagerDefinitionRequestT = Model::PutAlertManagerDefinitionRequest>
        void PutAlertManagerDefinitionAsync(const PutAlertManagerDefinitionRequestT& request, const PutAlertManagerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::PutAlertManagerDefinition, request, handler, context);
        }

        /**
         * <p>Update a rule groups namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/PutRuleGroupsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRuleGroupsNamespaceOutcome PutRuleGroupsNamespace(const Model::PutRuleGroupsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for PutRuleGroupsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRuleGroupsNamespaceRequestT = Model::PutRuleGroupsNamespaceRequest>
        Model::PutRuleGroupsNamespaceOutcomeCallable PutRuleGroupsNamespaceCallable(const PutRuleGroupsNamespaceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::PutRuleGroupsNamespace, request);
        }

        /**
         * An Async wrapper for PutRuleGroupsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRuleGroupsNamespaceRequestT = Model::PutRuleGroupsNamespaceRequest>
        void PutRuleGroupsNamespaceAsync(const PutRuleGroupsNamespaceRequestT& request, const PutRuleGroupsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::PutRuleGroupsNamespace, request, handler, context);
        }

        /**
         * <p>Creates tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggingConfigurationOutcome UpdateLoggingConfiguration(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLoggingConfigurationRequestT = Model::UpdateLoggingConfigurationRequest>
        Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const UpdateLoggingConfigurationRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLoggingConfigurationRequestT = Model::UpdateLoggingConfigurationRequest>
        void UpdateLoggingConfigurationAsync(const UpdateLoggingConfigurationRequestT& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an AMP workspace alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/UpdateWorkspaceAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceAliasOutcome UpdateWorkspaceAlias(const Model::UpdateWorkspaceAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkspaceAliasRequestT = Model::UpdateWorkspaceAliasRequest>
        Model::UpdateWorkspaceAliasOutcomeCallable UpdateWorkspaceAliasCallable(const UpdateWorkspaceAliasRequestT& request) const
        {
            return SubmitCallable(&PrometheusServiceClient::UpdateWorkspaceAlias, request);
        }

        /**
         * An Async wrapper for UpdateWorkspaceAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkspaceAliasRequestT = Model::UpdateWorkspaceAliasRequest>
        void UpdateWorkspaceAliasAsync(const UpdateWorkspaceAliasRequestT& request, const UpdateWorkspaceAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PrometheusServiceClient::UpdateWorkspaceAlias, request, handler, context);
        }


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
