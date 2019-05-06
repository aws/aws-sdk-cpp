/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ApiGatewayManagementApi
{

namespace Model
{
        class PostToConnectionRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ApiGatewayManagementApiErrors>> PostToConnectionOutcome;

        typedef std::future<PostToConnectionOutcome> PostToConnectionOutcomeCallable;
} // namespace Model

  class ApiGatewayManagementApiClient;

    typedef std::function<void(const ApiGatewayManagementApiClient*, const Model::PostToConnectionRequest&, const Model::PostToConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostToConnectionResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayManagementApiClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayManagementApiClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ApiGatewayManagementApiClient();

        inline virtual const char* GetServiceClientName() const override { return "ApiGatewayManagementApi"; }


        /**
         * <p>Sends the provided data to the specified connection.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/PostToConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::PostToConnectionOutcome PostToConnection(const Model::PostToConnectionRequest& request) const;

        /**
         * <p>Sends the provided data to the specified connection.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/PostToConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostToConnectionOutcomeCallable PostToConnectionCallable(const Model::PostToConnectionRequest& request) const;

        /**
         * <p>Sends the provided data to the specified connection.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewaymanagementapi-2018-11-29/PostToConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostToConnectionAsync(const Model::PostToConnectionRequest& request, const PostToConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void PostToConnectionAsyncHelper(const Model::PostToConnectionRequest& request, const PostToConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApiGatewayManagementApi
} // namespace Aws
