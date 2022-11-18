/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingServiceClientModel.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingLegacyAsyncMacros.h>

namespace Aws
{
namespace IoTSecureTunneling
{
  /**
   * <fullname>IoT Secure Tunneling</fullname> <p>IoT Secure Tunneling creates remote
   * connections to devices deployed in the field.</p> <p>For more information about
   * how IoT Secure Tunneling works, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT
   * Secure Tunneling</a>.</p>
   */
  class AWS_IOTSECURETUNNELING_API IoTSecureTunnelingClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSecureTunnelingClient(const Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration& clientConfiguration = Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration(),
                                 std::shared_ptr<IoTSecureTunnelingEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTSecureTunnelingEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSecureTunnelingClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<IoTSecureTunnelingEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTSecureTunnelingEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration& clientConfiguration = Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTSecureTunnelingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<IoTSecureTunnelingEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTSecureTunnelingEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration& clientConfiguration = Aws::IoTSecureTunneling::IoTSecureTunnelingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSecureTunnelingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTSecureTunnelingClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTSecureTunnelingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTSecureTunnelingClient();


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
         * <p>Closes a tunnel identified by the unique tunnel id. When a
         * <code>CloseTunnel</code> request is received, we close the WebSocket connections
         * between the client and proxy server so no data can be transmitted.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CloseTunnel</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/CloseTunnel">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseTunnelOutcome CloseTunnel(const Model::CloseTunnelRequest& request) const;


        /**
         * <p>Gets information about a tunnel identified by the unique tunnel id.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeTunnel</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/DescribeTunnel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTunnelOutcome DescribeTunnel(const Model::DescribeTunnelRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>List all tunnels for an Amazon Web Services account. Tunnels are listed by
         * creation time in descending order, newer tunnels will be listed before older
         * tunnels.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTunnels</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/ListTunnels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTunnelsOutcome ListTunnels(const Model::ListTunnelsRequest& request) const;


        /**
         * <p>Creates a new tunnel, and returns two client access tokens for clients to use
         * to connect to the IoT Secure Tunneling proxy server.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">OpenTunnel</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/OpenTunnel">AWS
         * API Reference</a></p>
         */
        virtual Model::OpenTunnelOutcome OpenTunnel(const Model::OpenTunnelRequest& request) const;


        /**
         * <p>Revokes the current client access token (CAT) and returns new CAT for clients
         * to use when reconnecting to secure tunneling to access the same tunnel.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RotateTunnelAccessToken</a>
         * action.</p>  <p>Rotating the CAT doesn't extend the tunnel duration. For
         * example, say the tunnel duration is 12 hours and the tunnel has already been
         * open for 4 hours. When you rotate the access tokens, the new tokens that are
         * generated can only be used for the remaining 8 hours.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/RotateTunnelAccessToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RotateTunnelAccessTokenOutcome RotateTunnelAccessToken(const Model::RotateTunnelAccessTokenRequest& request) const;


        /**
         * <p>A resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTSecureTunnelingEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTSecureTunnelingClientConfiguration& clientConfiguration);

      IoTSecureTunnelingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTSecureTunnelingEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTSecureTunneling
} // namespace Aws
