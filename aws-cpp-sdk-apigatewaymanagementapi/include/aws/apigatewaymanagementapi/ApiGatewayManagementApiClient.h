/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiServiceClientModel.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiLegacyAsyncMacros.h>

namespace Aws
{
namespace ApiGatewayManagementApi
{
  /**
   * <p>The Amazon API Gateway Management API allows you to directly manage runtime
   * aspects of your deployed APIs. To use it, you must explicitly set the SDK's
   * endpoint to point to the endpoint of your deployed API. The endpoint will be of
   * the form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be
   * the endpoint corresponding to your API's custom domain and base path, if
   * applicable.</p>
   */
  class AWS_APIGATEWAYMANAGEMENTAPI_API ApiGatewayManagementApiClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration = Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration(),
                                      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider = Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider = Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration = Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayManagementApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider = Aws::MakeShared<ApiGatewayManagementApiEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration = Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayManagementApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApiGatewayManagementApiClient();


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
         * <p>Delete the connection with the provided id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;


        /**
         * <p>Get information about the connection with the provided id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;


        /**
         * <p>Sends the provided data to the specified connection.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/PostToConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::PostToConnectionOutcome PostToConnection(const Model::PostToConnectionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ApiGatewayManagementApiClientConfiguration& clientConfiguration);

      ApiGatewayManagementApiClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApiGatewayManagementApi
} // namespace Aws
