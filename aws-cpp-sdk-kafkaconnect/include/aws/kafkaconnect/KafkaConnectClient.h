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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaConnectClient(const Aws::KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration = Aws::KafkaConnect::KafkaConnectClientConfiguration(),
                           std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaConnectClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG),
                           const Aws::KafkaConnect::KafkaConnectClientConfiguration& clientConfiguration = Aws::KafkaConnect::KafkaConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<KafkaConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<KafkaConnectEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Creates a connector using the specified properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const Model::CreateConnectorRequest& request) const;

        /**
         * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorAsync(const Model::CreateConnectorRequest& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCustomPluginOutcomeCallable CreateCustomPluginCallable(const Model::CreateCustomPluginRequest& request) const;

        /**
         * An Async wrapper for CreateCustomPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomPluginAsync(const Model::CreateCustomPluginRequest& request, const CreateCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateWorkerConfigurationOutcomeCallable CreateWorkerConfigurationCallable(const Model::CreateWorkerConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateWorkerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkerConfigurationAsync(const Model::CreateWorkerConfigurationRequest& request, const CreateWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const Model::DeleteConnectorRequest& request) const;

        /**
         * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectorAsync(const Model::DeleteConnectorRequest& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomPluginOutcome DeleteCustomPlugin(const Model::DeleteCustomPluginRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomPlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomPluginOutcomeCallable DeleteCustomPluginCallable(const Model::DeleteCustomPluginRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomPluginAsync(const Model::DeleteCustomPluginRequest& request, const DeleteCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConnectorOutcomeCallable DescribeConnectorCallable(const Model::DescribeConnectorRequest& request) const;

        /**
         * An Async wrapper for DescribeConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectorAsync(const Model::DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A summary description of the custom plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomPluginOutcome DescribeCustomPlugin(const Model::DescribeCustomPluginRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomPlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomPluginOutcomeCallable DescribeCustomPluginCallable(const Model::DescribeCustomPluginRequest& request) const;

        /**
         * An Async wrapper for DescribeCustomPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomPluginAsync(const Model::DescribeCustomPluginRequest& request, const DescribeCustomPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeWorkerConfigurationOutcomeCallable DescribeWorkerConfigurationCallable(const Model::DescribeWorkerConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkerConfigurationAsync(const Model::DescribeWorkerConfigurationRequest& request, const DescribeWorkerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const Model::ListConnectorsRequest& request) const;

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorsAsync(const Model::ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListCustomPluginsOutcomeCallable ListCustomPluginsCallable(const Model::ListCustomPluginsRequest& request) const;

        /**
         * An Async wrapper for ListCustomPlugins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomPluginsAsync(const Model::ListCustomPluginsRequest& request, const ListCustomPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListWorkerConfigurationsOutcomeCallable ListWorkerConfigurationsCallable(const Model::ListWorkerConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListWorkerConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkerConfigurationsAsync(const Model::ListWorkerConfigurationsRequest& request, const ListWorkerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/UpdateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorOutcome UpdateConnector(const Model::UpdateConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectorOutcomeCallable UpdateConnectorCallable(const Model::UpdateConnectorRequest& request) const;

        /**
         * An Async wrapper for UpdateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorAsync(const Model::UpdateConnectorRequest& request, const UpdateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
