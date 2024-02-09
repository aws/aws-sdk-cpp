/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiServiceClientModel.h>

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
  class AWS_APIGATEWAYMANAGEMENTAPI_API ApiGatewayManagementApiClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApiGatewayManagementApiClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ApiGatewayManagementApiClientConfiguration ClientConfigurationType;
      typedef ApiGatewayManagementApiEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration = Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration(),
                                      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration& clientConfiguration = Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayManagementApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>Delete the connection with the provided id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayManagementApiClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayManagementApiClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Get information about the connection with the provided id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayManagementApiClient::GetConnection, request);
        }

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayManagementApiClient::GetConnection, request, handler, context);
        }

        /**
         * <p>Sends the provided data to the specified connection.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/PostToConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::PostToConnectionOutcome PostToConnection(const Model::PostToConnectionRequest& request) const;

        /**
         * A Callable wrapper for PostToConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostToConnectionRequestT = Model::PostToConnectionRequest>
        Model::PostToConnectionOutcomeCallable PostToConnectionCallable(const PostToConnectionRequestT& request) const
        {
            return SubmitCallable(&ApiGatewayManagementApiClient::PostToConnection, request);
        }

        /**
         * An Async wrapper for PostToConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostToConnectionRequestT = Model::PostToConnectionRequest>
        void PostToConnectionAsync(const PostToConnectionRequestT& request, const PostToConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApiGatewayManagementApiClient::PostToConnection, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApiGatewayManagementApiClient>;
      void init(const ApiGatewayManagementApiClientConfiguration& clientConfiguration);

      ApiGatewayManagementApiClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApiGatewayManagementApiEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApiGatewayManagementApi
} // namespace Aws
