/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafkaconnect/KafkaConnectServiceClientModel.h>
#include <aws/kafkaconnect/KafkaConnectLegacyAsyncMacros.h>

namespace Aws
{
namespace KafkaConnect
{
  /**
   * <p/>
   */
  class AWS_KAFKACONNECT_API KafkaConnectClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a connector using the specified properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;


        /**
         * <p>Creates a custom plugin using the specified properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomPluginOutcome CreateCustomPlugin(const Model::CreateCustomPluginRequest& request) const;


        /**
         * <p>Creates a worker configuration using the specified properties.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CreateWorkerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerConfigurationOutcome CreateWorkerConfiguration(const Model::CreateWorkerConfigurationRequest& request) const;


        /**
         * <p>Deletes the specified connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;


        /**
         * <p>Deletes a custom plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DeleteCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomPluginOutcome DeleteCustomPlugin(const Model::DeleteCustomPluginRequest& request) const;


        /**
         * <p>Returns summary information about the connector.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectorOutcome DescribeConnector(const Model::DescribeConnectorRequest& request) const;


        /**
         * <p>A summary description of the custom plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeCustomPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomPluginOutcome DescribeCustomPlugin(const Model::DescribeCustomPluginRequest& request) const;


        /**
         * <p>Returns information about a worker configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/DescribeWorkerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkerConfigurationOutcome DescribeWorkerConfiguration(const Model::DescribeWorkerConfigurationRequest& request) const;


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
         * <p>Returns a list of all of the custom plugins in this account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ListCustomPlugins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomPluginsOutcome ListCustomPlugins(const Model::ListCustomPluginsRequest& request) const;


        /**
         * <p>Returns a list of all of the worker configurations in this account and
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ListWorkerConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkerConfigurationsOutcome ListWorkerConfigurations(const Model::ListWorkerConfigurationsRequest& request) const;


        /**
         * <p>Updates the specified connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/UpdateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorOutcome UpdateConnector(const Model::UpdateConnectorRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KafkaConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const KafkaConnectClientConfiguration& clientConfiguration);

      KafkaConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KafkaConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace KafkaConnect
} // namespace Aws
