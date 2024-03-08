/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafkaconnect/KafkaConnectServiceClientModel.h>

namespace Aws
{
namespace KafkaConnect
{
  /**
   * <p/>
   */
  class AWS_KAFKACONNECT_API KafkaConnectClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KafkaConnectClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef KafkaConnectClientConfiguration ClientConfigurationType;
      typedef KafkaConnectEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaConnectClient(const Aws::KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration = Aws::KafkaConnect::KafkaConnectClientConfiguration(),
                           std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration = Aws::KafkaConnect::KafkaConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration = Aws::KafkaConnect::KafkaConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KafkaConnectClient();

        /**
         * <p>Creates a connector using the specified properties. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const CreateConnectorRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::CreateConnector, request);
        }

        /**
         * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        void CreateConnectorAsync(const CreateConnectorRequestT& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::CreateConnector, request, handler, context);
        }

        /**
         * <p>Creates a custom plugin using the specified properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomPluginOutcome CreateCustomPlugin(const Model::CreateCustomPluginRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomPlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomPluginRequestT = Model::CreateCustomPluginRequest>
        Model::CreateCustomPluginOutcomeCallable CreateCustomPluginCallable(const CreateCustomPluginRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::CreateCustomPlugin, request);
        }

        /**
         * An Async wrapper for CreateCustomPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomPluginRequestT = Model::CreateCustomPluginRequest>
        void CreateCustomPluginAsync(const CreateCustomPluginRequestT& request, const CreateCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::CreateCustomPlugin, request, handler, context);
        }

        /**
         * <p>Creates a worker configuration using the specified properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateWorkerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerConfigurationOutcome CreateWorkerConfiguration(const Model::CreateWorkerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkerConfigurationRequestT = Model::CreateWorkerConfigurationRequest>
        Model::CreateWorkerConfigurationOutcomeCallable CreateWorkerConfigurationCallable(const CreateWorkerConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::CreateWorkerConfiguration, request);
        }

        /**
         * An Async wrapper for CreateWorkerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkerConfigurationRequestT = Model::CreateWorkerConfigurationRequest>
        void CreateWorkerConfigurationAsync(const CreateWorkerConfigurationRequestT& request, const CreateWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::CreateWorkerConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const DeleteConnectorRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::DeleteConnector, request);
        }

        /**
         * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        void DeleteConnectorAsync(const DeleteConnectorRequestT& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::DeleteConnector, request, handler, context);
        }

        /**
         * <p>Deletes a custom plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomPluginOutcome DeleteCustomPlugin(const Model::DeleteCustomPluginRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomPlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomPluginRequestT = Model::DeleteCustomPluginRequest>
        Model::DeleteCustomPluginOutcomeCallable DeleteCustomPluginCallable(const DeleteCustomPluginRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::DeleteCustomPlugin, request);
        }

        /**
         * An Async wrapper for DeleteCustomPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomPluginRequestT = Model::DeleteCustomPluginRequest>
        void DeleteCustomPluginAsync(const DeleteCustomPluginRequestT& request, const DeleteCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::DeleteCustomPlugin, request, handler, context);
        }

        /**
         * <p>Deletes the specified worker configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteWorkerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerConfigurationOutcome DeleteWorkerConfiguration(const Model::DeleteWorkerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkerConfigurationRequestT = Model::DeleteWorkerConfigurationRequest>
        Model::DeleteWorkerConfigurationOutcomeCallable DeleteWorkerConfigurationCallable(const DeleteWorkerConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::DeleteWorkerConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteWorkerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkerConfigurationRequestT = Model::DeleteWorkerConfigurationRequest>
        void DeleteWorkerConfigurationAsync(const DeleteWorkerConfigurationRequestT& request, const DeleteWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::DeleteWorkerConfiguration, request, handler, context);
        }

        /**
         * <p>Returns summary information about the connector.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorOutcome DescribeConnector(const Model::DescribeConnectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectorRequestT = Model::DescribeConnectorRequest>
        Model::DescribeConnectorOutcomeCallable DescribeConnectorCallable(const DescribeConnectorRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::DescribeConnector, request);
        }

        /**
         * An Async wrapper for DescribeConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectorRequestT = Model::DescribeConnectorRequest>
        void DescribeConnectorAsync(const DescribeConnectorRequestT& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::DescribeConnector, request, handler, context);
        }

        /**
         * <p>A summary description of the custom plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomPluginOutcome DescribeCustomPlugin(const Model::DescribeCustomPluginRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomPlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomPluginRequestT = Model::DescribeCustomPluginRequest>
        Model::DescribeCustomPluginOutcomeCallable DescribeCustomPluginCallable(const DescribeCustomPluginRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::DescribeCustomPlugin, request);
        }

        /**
         * An Async wrapper for DescribeCustomPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomPluginRequestT = Model::DescribeCustomPluginRequest>
        void DescribeCustomPluginAsync(const DescribeCustomPluginRequestT& request, const DescribeCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::DescribeCustomPlugin, request, handler, context);
        }

        /**
         * <p>Returns information about a worker configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeWorkerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkerConfigurationOutcome DescribeWorkerConfiguration(const Model::DescribeWorkerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkerConfigurationRequestT = Model::DescribeWorkerConfigurationRequest>
        Model::DescribeWorkerConfigurationOutcomeCallable DescribeWorkerConfigurationCallable(const DescribeWorkerConfigurationRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::DescribeWorkerConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeWorkerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkerConfigurationRequestT = Model::DescribeWorkerConfigurationRequest>
        void DescribeWorkerConfigurationAsync(const DescribeWorkerConfigurationRequestT& request, const DescribeWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::DescribeWorkerConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a list of all the connectors in this account and Region. The list is
         * limited to connectors whose name starts with the specified prefix. The response
         * also includes a description of each of the listed connectors.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const ListConnectorsRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::ListConnectors, request);
        }

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        void ListConnectorsAsync(const ListConnectorsRequestT& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::ListConnectors, request, handler, context);
        }

        /**
         * <p>Returns a list of all of the custom plugins in this account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ListCustomPlugins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomPluginsOutcome ListCustomPlugins(const Model::ListCustomPluginsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomPlugins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomPluginsRequestT = Model::ListCustomPluginsRequest>
        Model::ListCustomPluginsOutcomeCallable ListCustomPluginsCallable(const ListCustomPluginsRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::ListCustomPlugins, request);
        }

        /**
         * An Async wrapper for ListCustomPlugins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomPluginsRequestT = Model::ListCustomPluginsRequest>
        void ListCustomPluginsAsync(const ListCustomPluginsRequestT& request, const ListCustomPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::ListCustomPlugins, request, handler, context);
        }

        /**
         * <p>Lists all the tags attached to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of all of the worker configurations in this account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ListWorkerConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkerConfigurationsOutcome ListWorkerConfigurations(const Model::ListWorkerConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkerConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkerConfigurationsRequestT = Model::ListWorkerConfigurationsRequest>
        Model::ListWorkerConfigurationsOutcomeCallable ListWorkerConfigurationsCallable(const ListWorkerConfigurationsRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::ListWorkerConfigurations, request);
        }

        /**
         * An Async wrapper for ListWorkerConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkerConfigurationsRequestT = Model::ListWorkerConfigurationsRequest>
        void ListWorkerConfigurationsAsync(const ListWorkerConfigurationsRequestT& request, const ListWorkerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::ListWorkerConfigurations, request, handler, context);
        }

        /**
         * <p>Attaches tags to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/UpdateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorOutcome UpdateConnector(const Model::UpdateConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectorRequestT = Model::UpdateConnectorRequest>
        Model::UpdateConnectorOutcomeCallable UpdateConnectorCallable(const UpdateConnectorRequestT& request) const
        {
            return SubmitCallable(&KafkaConnectClient::UpdateConnector, request);
        }

        /**
         * An Async wrapper for UpdateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectorRequestT = Model::UpdateConnectorRequest>
        void UpdateConnectorAsync(const UpdateConnectorRequestT& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KafkaConnectClient::UpdateConnector, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KafkaConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KafkaConnectClient>;
      void init(const KafkaConnectClientConfiguration& clientConfiguration);

      KafkaConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KafkaConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace KafkaConnect
} // namespace Aws
