/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlServiceClientModel.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
  /**
   * <p> <p> is in preview release and is subject to change.</p> 
   * <p>Welcome to the Amazon Bedrock AgentCore Control plane API reference. Control
   * plane actions configure, create, modify, and monitor Amazon Web Services
   * resources.</p></p>
   */
  class AWS_BEDROCKAGENTCORECONTROL_API BedrockAgentCoreControlClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentCoreControlClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockAgentCoreControlClientConfiguration ClientConfigurationType;
      typedef BedrockAgentCoreControlEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentCoreControlClient(const Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration = Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration(),
                                      std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentCoreControlClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration = Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentCoreControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration = Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentCoreControlClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentCoreControlClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentCoreControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockAgentCoreControlClient();

        /**
         * <p>Creates an Amazon Bedrock AgentCore Runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateAgentRuntime">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentRuntimeOutcome CreateAgentRuntime(const Model::CreateAgentRuntimeRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentRuntimeRequestT = Model::CreateAgentRuntimeRequest>
        Model::CreateAgentRuntimeOutcomeCallable CreateAgentRuntimeCallable(const CreateAgentRuntimeRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateAgentRuntime, request);
        }

        /**
         * An Async wrapper for CreateAgentRuntime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentRuntimeRequestT = Model::CreateAgentRuntimeRequest>
        void CreateAgentRuntimeAsync(const CreateAgentRuntimeRequestT& request, const CreateAgentRuntimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateAgentRuntime, request, handler, context);
        }

        /**
         * <p>Creates an AgentCore Runtime endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateAgentRuntimeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentRuntimeEndpointOutcome CreateAgentRuntimeEndpoint(const Model::CreateAgentRuntimeEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentRuntimeEndpointRequestT = Model::CreateAgentRuntimeEndpointRequest>
        Model::CreateAgentRuntimeEndpointOutcomeCallable CreateAgentRuntimeEndpointCallable(const CreateAgentRuntimeEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateAgentRuntimeEndpoint, request);
        }

        /**
         * An Async wrapper for CreateAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentRuntimeEndpointRequestT = Model::CreateAgentRuntimeEndpointRequest>
        void CreateAgentRuntimeEndpointAsync(const CreateAgentRuntimeEndpointRequestT& request, const CreateAgentRuntimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateAgentRuntimeEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a new API key credential provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateApiKeyCredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiKeyCredentialProviderOutcome CreateApiKeyCredentialProvider(const Model::CreateApiKeyCredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiKeyCredentialProviderRequestT = Model::CreateApiKeyCredentialProviderRequest>
        Model::CreateApiKeyCredentialProviderOutcomeCallable CreateApiKeyCredentialProviderCallable(const CreateApiKeyCredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateApiKeyCredentialProvider, request);
        }

        /**
         * An Async wrapper for CreateApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiKeyCredentialProviderRequestT = Model::CreateApiKeyCredentialProviderRequest>
        void CreateApiKeyCredentialProviderAsync(const CreateApiKeyCredentialProviderRequestT& request, const CreateApiKeyCredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateApiKeyCredentialProvider, request, handler, context);
        }

        /**
         * <p>Creates a custom browser.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateBrowser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBrowserOutcome CreateBrowser(const Model::CreateBrowserRequest& request) const;

        /**
         * A Callable wrapper for CreateBrowser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBrowserRequestT = Model::CreateBrowserRequest>
        Model::CreateBrowserOutcomeCallable CreateBrowserCallable(const CreateBrowserRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateBrowser, request);
        }

        /**
         * An Async wrapper for CreateBrowser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBrowserRequestT = Model::CreateBrowserRequest>
        void CreateBrowserAsync(const CreateBrowserRequestT& request, const CreateBrowserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateBrowser, request, handler, context);
        }

        /**
         * <p>Creates a custom code interpreter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateCodeInterpreter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeInterpreterOutcome CreateCodeInterpreter(const Model::CreateCodeInterpreterRequest& request) const;

        /**
         * A Callable wrapper for CreateCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCodeInterpreterRequestT = Model::CreateCodeInterpreterRequest>
        Model::CreateCodeInterpreterOutcomeCallable CreateCodeInterpreterCallable(const CreateCodeInterpreterRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateCodeInterpreter, request);
        }

        /**
         * An Async wrapper for CreateCodeInterpreter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCodeInterpreterRequestT = Model::CreateCodeInterpreterRequest>
        void CreateCodeInterpreterAsync(const CreateCodeInterpreterRequestT& request, const CreateCodeInterpreterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateCodeInterpreter, request, handler, context);
        }

        /**
         * <p>Creates a gateway for Amazon Bedrock Agent. A gateway serves as an
         * integration point between your agent and external services.</p> <p>To create a
         * gateway, you must specify a name, protocol type, and IAM role. The role grants
         * the gateway permission to access Amazon Web Services services and
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGatewayRequestT = Model::CreateGatewayRequest>
        Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const CreateGatewayRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateGateway, request);
        }

        /**
         * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGatewayRequestT = Model::CreateGatewayRequest>
        void CreateGatewayAsync(const CreateGatewayRequestT& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateGateway, request, handler, context);
        }

        /**
         * <p>Creates a target for a gateway. A target defines an endpoint that the gateway
         * can connect to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateGatewayTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayTargetOutcome CreateGatewayTarget(const Model::CreateGatewayTargetRequest& request) const;

        /**
         * A Callable wrapper for CreateGatewayTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGatewayTargetRequestT = Model::CreateGatewayTargetRequest>
        Model::CreateGatewayTargetOutcomeCallable CreateGatewayTargetCallable(const CreateGatewayTargetRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateGatewayTarget, request);
        }

        /**
         * An Async wrapper for CreateGatewayTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGatewayTargetRequestT = Model::CreateGatewayTargetRequest>
        void CreateGatewayTargetAsync(const CreateGatewayTargetRequestT& request, const CreateGatewayTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateGatewayTarget, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon Bedrock AgentCore Memory resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateMemory">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMemoryOutcome CreateMemory(const Model::CreateMemoryRequest& request) const;

        /**
         * A Callable wrapper for CreateMemory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMemoryRequestT = Model::CreateMemoryRequest>
        Model::CreateMemoryOutcomeCallable CreateMemoryCallable(const CreateMemoryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateMemory, request);
        }

        /**
         * An Async wrapper for CreateMemory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMemoryRequestT = Model::CreateMemoryRequest>
        void CreateMemoryAsync(const CreateMemoryRequestT& request, const CreateMemoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateMemory, request, handler, context);
        }

        /**
         * <p>Creates a new OAuth2 credential provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateOauth2CredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOauth2CredentialProviderOutcome CreateOauth2CredentialProvider(const Model::CreateOauth2CredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOauth2CredentialProviderRequestT = Model::CreateOauth2CredentialProviderRequest>
        Model::CreateOauth2CredentialProviderOutcomeCallable CreateOauth2CredentialProviderCallable(const CreateOauth2CredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateOauth2CredentialProvider, request);
        }

        /**
         * An Async wrapper for CreateOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOauth2CredentialProviderRequestT = Model::CreateOauth2CredentialProviderRequest>
        void CreateOauth2CredentialProviderAsync(const CreateOauth2CredentialProviderRequestT& request, const CreateOauth2CredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateOauth2CredentialProvider, request, handler, context);
        }

        /**
         * <p>Creates a new workload identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateWorkloadIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkloadIdentityOutcome CreateWorkloadIdentity(const Model::CreateWorkloadIdentityRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkloadIdentityRequestT = Model::CreateWorkloadIdentityRequest>
        Model::CreateWorkloadIdentityOutcomeCallable CreateWorkloadIdentityCallable(const CreateWorkloadIdentityRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::CreateWorkloadIdentity, request);
        }

        /**
         * An Async wrapper for CreateWorkloadIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkloadIdentityRequestT = Model::CreateWorkloadIdentityRequest>
        void CreateWorkloadIdentityAsync(const CreateWorkloadIdentityRequestT& request, const CreateWorkloadIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::CreateWorkloadIdentity, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Bedrock AgentCore Runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteAgentRuntime">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentRuntimeOutcome DeleteAgentRuntime(const Model::DeleteAgentRuntimeRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentRuntimeRequestT = Model::DeleteAgentRuntimeRequest>
        Model::DeleteAgentRuntimeOutcomeCallable DeleteAgentRuntimeCallable(const DeleteAgentRuntimeRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteAgentRuntime, request);
        }

        /**
         * An Async wrapper for DeleteAgentRuntime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentRuntimeRequestT = Model::DeleteAgentRuntimeRequest>
        void DeleteAgentRuntimeAsync(const DeleteAgentRuntimeRequestT& request, const DeleteAgentRuntimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteAgentRuntime, request, handler, context);
        }

        /**
         * <p>Deletes an AAgentCore Runtime endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteAgentRuntimeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentRuntimeEndpointOutcome DeleteAgentRuntimeEndpoint(const Model::DeleteAgentRuntimeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentRuntimeEndpointRequestT = Model::DeleteAgentRuntimeEndpointRequest>
        Model::DeleteAgentRuntimeEndpointOutcomeCallable DeleteAgentRuntimeEndpointCallable(const DeleteAgentRuntimeEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteAgentRuntimeEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentRuntimeEndpointRequestT = Model::DeleteAgentRuntimeEndpointRequest>
        void DeleteAgentRuntimeEndpointAsync(const DeleteAgentRuntimeEndpointRequestT& request, const DeleteAgentRuntimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteAgentRuntimeEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes an API key credential provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteApiKeyCredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiKeyCredentialProviderOutcome DeleteApiKeyCredentialProvider(const Model::DeleteApiKeyCredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiKeyCredentialProviderRequestT = Model::DeleteApiKeyCredentialProviderRequest>
        Model::DeleteApiKeyCredentialProviderOutcomeCallable DeleteApiKeyCredentialProviderCallable(const DeleteApiKeyCredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteApiKeyCredentialProvider, request);
        }

        /**
         * An Async wrapper for DeleteApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiKeyCredentialProviderRequestT = Model::DeleteApiKeyCredentialProviderRequest>
        void DeleteApiKeyCredentialProviderAsync(const DeleteApiKeyCredentialProviderRequestT& request, const DeleteApiKeyCredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteApiKeyCredentialProvider, request, handler, context);
        }

        /**
         * <p>Deletes a custom browser.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteBrowser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBrowserOutcome DeleteBrowser(const Model::DeleteBrowserRequest& request) const;

        /**
         * A Callable wrapper for DeleteBrowser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBrowserRequestT = Model::DeleteBrowserRequest>
        Model::DeleteBrowserOutcomeCallable DeleteBrowserCallable(const DeleteBrowserRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteBrowser, request);
        }

        /**
         * An Async wrapper for DeleteBrowser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBrowserRequestT = Model::DeleteBrowserRequest>
        void DeleteBrowserAsync(const DeleteBrowserRequestT& request, const DeleteBrowserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteBrowser, request, handler, context);
        }

        /**
         * <p>Deletes a custom code interpreter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteCodeInterpreter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCodeInterpreterOutcome DeleteCodeInterpreter(const Model::DeleteCodeInterpreterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCodeInterpreterRequestT = Model::DeleteCodeInterpreterRequest>
        Model::DeleteCodeInterpreterOutcomeCallable DeleteCodeInterpreterCallable(const DeleteCodeInterpreterRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteCodeInterpreter, request);
        }

        /**
         * An Async wrapper for DeleteCodeInterpreter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCodeInterpreterRequestT = Model::DeleteCodeInterpreterRequest>
        void DeleteCodeInterpreterAsync(const DeleteCodeInterpreterRequestT& request, const DeleteCodeInterpreterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteCodeInterpreter, request, handler, context);
        }

        /**
         * <p>Deletes a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
        Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const DeleteGatewayRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteGateway, request);
        }

        /**
         * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
        void DeleteGatewayAsync(const DeleteGatewayRequestT& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteGateway, request, handler, context);
        }

        /**
         * <p>Deletes a gateway target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteGatewayTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayTargetOutcome DeleteGatewayTarget(const Model::DeleteGatewayTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteGatewayTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayTargetRequestT = Model::DeleteGatewayTargetRequest>
        Model::DeleteGatewayTargetOutcomeCallable DeleteGatewayTargetCallable(const DeleteGatewayTargetRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteGatewayTarget, request);
        }

        /**
         * An Async wrapper for DeleteGatewayTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayTargetRequestT = Model::DeleteGatewayTargetRequest>
        void DeleteGatewayTargetAsync(const DeleteGatewayTargetRequestT& request, const DeleteGatewayTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteGatewayTarget, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Bedrock AgentCore Memory resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteMemory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMemoryOutcome DeleteMemory(const Model::DeleteMemoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteMemory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMemoryRequestT = Model::DeleteMemoryRequest>
        Model::DeleteMemoryOutcomeCallable DeleteMemoryCallable(const DeleteMemoryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteMemory, request);
        }

        /**
         * An Async wrapper for DeleteMemory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMemoryRequestT = Model::DeleteMemoryRequest>
        void DeleteMemoryAsync(const DeleteMemoryRequestT& request, const DeleteMemoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteMemory, request, handler, context);
        }

        /**
         * <p>Deletes an OAuth2 credential provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteOauth2CredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOauth2CredentialProviderOutcome DeleteOauth2CredentialProvider(const Model::DeleteOauth2CredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOauth2CredentialProviderRequestT = Model::DeleteOauth2CredentialProviderRequest>
        Model::DeleteOauth2CredentialProviderOutcomeCallable DeleteOauth2CredentialProviderCallable(const DeleteOauth2CredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteOauth2CredentialProvider, request);
        }

        /**
         * An Async wrapper for DeleteOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOauth2CredentialProviderRequestT = Model::DeleteOauth2CredentialProviderRequest>
        void DeleteOauth2CredentialProviderAsync(const DeleteOauth2CredentialProviderRequestT& request, const DeleteOauth2CredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteOauth2CredentialProvider, request, handler, context);
        }

        /**
         * <p>Deletes a workload identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteWorkloadIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkloadIdentityOutcome DeleteWorkloadIdentity(const Model::DeleteWorkloadIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkloadIdentityRequestT = Model::DeleteWorkloadIdentityRequest>
        Model::DeleteWorkloadIdentityOutcomeCallable DeleteWorkloadIdentityCallable(const DeleteWorkloadIdentityRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::DeleteWorkloadIdentity, request);
        }

        /**
         * An Async wrapper for DeleteWorkloadIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkloadIdentityRequestT = Model::DeleteWorkloadIdentityRequest>
        void DeleteWorkloadIdentityAsync(const DeleteWorkloadIdentityRequestT& request, const DeleteWorkloadIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::DeleteWorkloadIdentity, request, handler, context);
        }

        /**
         * <p>Gets an Amazon Bedrock AgentCore Runtime.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetAgentRuntime">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentRuntimeOutcome GetAgentRuntime(const Model::GetAgentRuntimeRequest& request) const;

        /**
         * A Callable wrapper for GetAgentRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentRuntimeRequestT = Model::GetAgentRuntimeRequest>
        Model::GetAgentRuntimeOutcomeCallable GetAgentRuntimeCallable(const GetAgentRuntimeRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetAgentRuntime, request);
        }

        /**
         * An Async wrapper for GetAgentRuntime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentRuntimeRequestT = Model::GetAgentRuntimeRequest>
        void GetAgentRuntimeAsync(const GetAgentRuntimeRequestT& request, const GetAgentRuntimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetAgentRuntime, request, handler, context);
        }

        /**
         * <p>Gets information about an Amazon Secure AgentEndpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetAgentRuntimeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentRuntimeEndpointOutcome GetAgentRuntimeEndpoint(const Model::GetAgentRuntimeEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentRuntimeEndpointRequestT = Model::GetAgentRuntimeEndpointRequest>
        Model::GetAgentRuntimeEndpointOutcomeCallable GetAgentRuntimeEndpointCallable(const GetAgentRuntimeEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetAgentRuntimeEndpoint, request);
        }

        /**
         * An Async wrapper for GetAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentRuntimeEndpointRequestT = Model::GetAgentRuntimeEndpointRequest>
        void GetAgentRuntimeEndpointAsync(const GetAgentRuntimeEndpointRequestT& request, const GetAgentRuntimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetAgentRuntimeEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves information about an API key credential provider.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetApiKeyCredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiKeyCredentialProviderOutcome GetApiKeyCredentialProvider(const Model::GetApiKeyCredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for GetApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApiKeyCredentialProviderRequestT = Model::GetApiKeyCredentialProviderRequest>
        Model::GetApiKeyCredentialProviderOutcomeCallable GetApiKeyCredentialProviderCallable(const GetApiKeyCredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetApiKeyCredentialProvider, request);
        }

        /**
         * An Async wrapper for GetApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApiKeyCredentialProviderRequestT = Model::GetApiKeyCredentialProviderRequest>
        void GetApiKeyCredentialProviderAsync(const GetApiKeyCredentialProviderRequestT& request, const GetApiKeyCredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetApiKeyCredentialProvider, request, handler, context);
        }

        /**
         * <p>Gets information about a custom browser.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetBrowser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBrowserOutcome GetBrowser(const Model::GetBrowserRequest& request) const;

        /**
         * A Callable wrapper for GetBrowser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBrowserRequestT = Model::GetBrowserRequest>
        Model::GetBrowserOutcomeCallable GetBrowserCallable(const GetBrowserRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetBrowser, request);
        }

        /**
         * An Async wrapper for GetBrowser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBrowserRequestT = Model::GetBrowserRequest>
        void GetBrowserAsync(const GetBrowserRequestT& request, const GetBrowserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetBrowser, request, handler, context);
        }

        /**
         * <p>Gets information about a custom code interpreter.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetCodeInterpreter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodeInterpreterOutcome GetCodeInterpreter(const Model::GetCodeInterpreterRequest& request) const;

        /**
         * A Callable wrapper for GetCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCodeInterpreterRequestT = Model::GetCodeInterpreterRequest>
        Model::GetCodeInterpreterOutcomeCallable GetCodeInterpreterCallable(const GetCodeInterpreterRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetCodeInterpreter, request);
        }

        /**
         * An Async wrapper for GetCodeInterpreter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCodeInterpreterRequestT = Model::GetCodeInterpreterRequest>
        void GetCodeInterpreterAsync(const GetCodeInterpreterRequestT& request, const GetCodeInterpreterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetCodeInterpreter, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific Gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;

        /**
         * A Callable wrapper for GetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGatewayRequestT = Model::GetGatewayRequest>
        Model::GetGatewayOutcomeCallable GetGatewayCallable(const GetGatewayRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetGateway, request);
        }

        /**
         * An Async wrapper for GetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayRequestT = Model::GetGatewayRequest>
        void GetGatewayAsync(const GetGatewayRequestT& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetGateway, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific gateway target.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetGatewayTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayTargetOutcome GetGatewayTarget(const Model::GetGatewayTargetRequest& request) const;

        /**
         * A Callable wrapper for GetGatewayTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGatewayTargetRequestT = Model::GetGatewayTargetRequest>
        Model::GetGatewayTargetOutcomeCallable GetGatewayTargetCallable(const GetGatewayTargetRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetGatewayTarget, request);
        }

        /**
         * An Async wrapper for GetGatewayTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayTargetRequestT = Model::GetGatewayTargetRequest>
        void GetGatewayTargetAsync(const GetGatewayTargetRequestT& request, const GetGatewayTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetGatewayTarget, request, handler, context);
        }

        /**
         * <p>Retrieve an existing Amazon Bedrock AgentCore Memory resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetMemory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMemoryOutcome GetMemory(const Model::GetMemoryRequest& request) const;

        /**
         * A Callable wrapper for GetMemory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMemoryRequestT = Model::GetMemoryRequest>
        Model::GetMemoryOutcomeCallable GetMemoryCallable(const GetMemoryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetMemory, request);
        }

        /**
         * An Async wrapper for GetMemory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMemoryRequestT = Model::GetMemoryRequest>
        void GetMemoryAsync(const GetMemoryRequestT& request, const GetMemoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetMemory, request, handler, context);
        }

        /**
         * <p>Retrieves information about an OAuth2 credential provider.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetOauth2CredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOauth2CredentialProviderOutcome GetOauth2CredentialProvider(const Model::GetOauth2CredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for GetOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOauth2CredentialProviderRequestT = Model::GetOauth2CredentialProviderRequest>
        Model::GetOauth2CredentialProviderOutcomeCallable GetOauth2CredentialProviderCallable(const GetOauth2CredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetOauth2CredentialProvider, request);
        }

        /**
         * An Async wrapper for GetOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOauth2CredentialProviderRequestT = Model::GetOauth2CredentialProviderRequest>
        void GetOauth2CredentialProviderAsync(const GetOauth2CredentialProviderRequestT& request, const GetOauth2CredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetOauth2CredentialProvider, request, handler, context);
        }

        /**
         * <p>Retrieves information about a token vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetTokenVault">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTokenVaultOutcome GetTokenVault(const Model::GetTokenVaultRequest& request = {}) const;

        /**
         * A Callable wrapper for GetTokenVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTokenVaultRequestT = Model::GetTokenVaultRequest>
        Model::GetTokenVaultOutcomeCallable GetTokenVaultCallable(const GetTokenVaultRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetTokenVault, request);
        }

        /**
         * An Async wrapper for GetTokenVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTokenVaultRequestT = Model::GetTokenVaultRequest>
        void GetTokenVaultAsync(const GetTokenVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetTokenVaultRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetTokenVault, request, handler, context);
        }

        /**
         * <p>Retrieves information about a workload identity.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetWorkloadIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkloadIdentityOutcome GetWorkloadIdentity(const Model::GetWorkloadIdentityRequest& request) const;

        /**
         * A Callable wrapper for GetWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkloadIdentityRequestT = Model::GetWorkloadIdentityRequest>
        Model::GetWorkloadIdentityOutcomeCallable GetWorkloadIdentityCallable(const GetWorkloadIdentityRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::GetWorkloadIdentity, request);
        }

        /**
         * An Async wrapper for GetWorkloadIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkloadIdentityRequestT = Model::GetWorkloadIdentityRequest>
        void GetWorkloadIdentityAsync(const GetWorkloadIdentityRequestT& request, const GetWorkloadIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::GetWorkloadIdentity, request, handler, context);
        }

        /**
         * <p>Lists all endpoints for a specific Amazon Secure Agent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListAgentRuntimeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentRuntimeEndpointsOutcome ListAgentRuntimeEndpoints(const Model::ListAgentRuntimeEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentRuntimeEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentRuntimeEndpointsRequestT = Model::ListAgentRuntimeEndpointsRequest>
        Model::ListAgentRuntimeEndpointsOutcomeCallable ListAgentRuntimeEndpointsCallable(const ListAgentRuntimeEndpointsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListAgentRuntimeEndpoints, request);
        }

        /**
         * An Async wrapper for ListAgentRuntimeEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentRuntimeEndpointsRequestT = Model::ListAgentRuntimeEndpointsRequest>
        void ListAgentRuntimeEndpointsAsync(const ListAgentRuntimeEndpointsRequestT& request, const ListAgentRuntimeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListAgentRuntimeEndpoints, request, handler, context);
        }

        /**
         * <p>Lists all versions of a specific Amazon Secure Agent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListAgentRuntimeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentRuntimeVersionsOutcome ListAgentRuntimeVersions(const Model::ListAgentRuntimeVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentRuntimeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentRuntimeVersionsRequestT = Model::ListAgentRuntimeVersionsRequest>
        Model::ListAgentRuntimeVersionsOutcomeCallable ListAgentRuntimeVersionsCallable(const ListAgentRuntimeVersionsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListAgentRuntimeVersions, request);
        }

        /**
         * An Async wrapper for ListAgentRuntimeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentRuntimeVersionsRequestT = Model::ListAgentRuntimeVersionsRequest>
        void ListAgentRuntimeVersionsAsync(const ListAgentRuntimeVersionsRequestT& request, const ListAgentRuntimeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListAgentRuntimeVersions, request, handler, context);
        }

        /**
         * <p>Lists all Amazon Secure Agents in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListAgentRuntimes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentRuntimesOutcome ListAgentRuntimes(const Model::ListAgentRuntimesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAgentRuntimes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentRuntimesRequestT = Model::ListAgentRuntimesRequest>
        Model::ListAgentRuntimesOutcomeCallable ListAgentRuntimesCallable(const ListAgentRuntimesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListAgentRuntimes, request);
        }

        /**
         * An Async wrapper for ListAgentRuntimes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentRuntimesRequestT = Model::ListAgentRuntimesRequest>
        void ListAgentRuntimesAsync(const ListAgentRuntimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAgentRuntimesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListAgentRuntimes, request, handler, context);
        }

        /**
         * <p>Lists all API key credential providers in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListApiKeyCredentialProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApiKeyCredentialProvidersOutcome ListApiKeyCredentialProviders(const Model::ListApiKeyCredentialProvidersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListApiKeyCredentialProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApiKeyCredentialProvidersRequestT = Model::ListApiKeyCredentialProvidersRequest>
        Model::ListApiKeyCredentialProvidersOutcomeCallable ListApiKeyCredentialProvidersCallable(const ListApiKeyCredentialProvidersRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListApiKeyCredentialProviders, request);
        }

        /**
         * An Async wrapper for ListApiKeyCredentialProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApiKeyCredentialProvidersRequestT = Model::ListApiKeyCredentialProvidersRequest>
        void ListApiKeyCredentialProvidersAsync(const ListApiKeyCredentialProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListApiKeyCredentialProvidersRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListApiKeyCredentialProviders, request, handler, context);
        }

        /**
         * <p>Lists all custom browsers in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListBrowsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBrowsersOutcome ListBrowsers(const Model::ListBrowsersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListBrowsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBrowsersRequestT = Model::ListBrowsersRequest>
        Model::ListBrowsersOutcomeCallable ListBrowsersCallable(const ListBrowsersRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListBrowsers, request);
        }

        /**
         * An Async wrapper for ListBrowsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBrowsersRequestT = Model::ListBrowsersRequest>
        void ListBrowsersAsync(const ListBrowsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListBrowsersRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListBrowsers, request, handler, context);
        }

        /**
         * <p>Lists all custom code interpreters in your account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListCodeInterpreters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeInterpretersOutcome ListCodeInterpreters(const Model::ListCodeInterpretersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCodeInterpreters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCodeInterpretersRequestT = Model::ListCodeInterpretersRequest>
        Model::ListCodeInterpretersOutcomeCallable ListCodeInterpretersCallable(const ListCodeInterpretersRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListCodeInterpreters, request);
        }

        /**
         * An Async wrapper for ListCodeInterpreters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCodeInterpretersRequestT = Model::ListCodeInterpretersRequest>
        void ListCodeInterpretersAsync(const ListCodeInterpretersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCodeInterpretersRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListCodeInterpreters, request, handler, context);
        }

        /**
         * <p>Lists all targets for a specific gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListGatewayTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewayTargetsOutcome ListGatewayTargets(const Model::ListGatewayTargetsRequest& request) const;

        /**
         * A Callable wrapper for ListGatewayTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGatewayTargetsRequestT = Model::ListGatewayTargetsRequest>
        Model::ListGatewayTargetsOutcomeCallable ListGatewayTargetsCallable(const ListGatewayTargetsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListGatewayTargets, request);
        }

        /**
         * An Async wrapper for ListGatewayTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewayTargetsRequestT = Model::ListGatewayTargetsRequest>
        void ListGatewayTargetsAsync(const ListGatewayTargetsRequestT& request, const ListGatewayTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListGatewayTargets, request, handler, context);
        }

        /**
         * <p>Lists all gateways in the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request = {}) const;

        /**
         * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListGateways, request);
        }

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        void ListGatewaysAsync(const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListGatewaysRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListGateways, request, handler, context);
        }

        /**
         * <p>Lists the available Amazon Bedrock AgentCore Memory resources in the current
         * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListMemories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemoriesOutcome ListMemories(const Model::ListMemoriesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMemories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMemoriesRequestT = Model::ListMemoriesRequest>
        Model::ListMemoriesOutcomeCallable ListMemoriesCallable(const ListMemoriesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListMemories, request);
        }

        /**
         * An Async wrapper for ListMemories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMemoriesRequestT = Model::ListMemoriesRequest>
        void ListMemoriesAsync(const ListMemoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMemoriesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListMemories, request, handler, context);
        }

        /**
         * <p>Lists all OAuth2 credential providers in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListOauth2CredentialProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOauth2CredentialProvidersOutcome ListOauth2CredentialProviders(const Model::ListOauth2CredentialProvidersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListOauth2CredentialProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOauth2CredentialProvidersRequestT = Model::ListOauth2CredentialProvidersRequest>
        Model::ListOauth2CredentialProvidersOutcomeCallable ListOauth2CredentialProvidersCallable(const ListOauth2CredentialProvidersRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListOauth2CredentialProviders, request);
        }

        /**
         * An Async wrapper for ListOauth2CredentialProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOauth2CredentialProvidersRequestT = Model::ListOauth2CredentialProvidersRequest>
        void ListOauth2CredentialProvidersAsync(const ListOauth2CredentialProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListOauth2CredentialProvidersRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListOauth2CredentialProviders, request, handler, context);
        }

        /**
         * <p>Lists the tags associated with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all workload identities in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListWorkloadIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkloadIdentitiesOutcome ListWorkloadIdentities(const Model::ListWorkloadIdentitiesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkloadIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkloadIdentitiesRequestT = Model::ListWorkloadIdentitiesRequest>
        Model::ListWorkloadIdentitiesOutcomeCallable ListWorkloadIdentitiesCallable(const ListWorkloadIdentitiesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::ListWorkloadIdentities, request);
        }

        /**
         * An Async wrapper for ListWorkloadIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkloadIdentitiesRequestT = Model::ListWorkloadIdentitiesRequest>
        void ListWorkloadIdentitiesAsync(const ListWorkloadIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkloadIdentitiesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::ListWorkloadIdentities, request, handler, context);
        }

        /**
         * <p>Sets the customer master key (CMK) for a token vault.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SetTokenVaultCMK">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTokenVaultCMKOutcome SetTokenVaultCMK(const Model::SetTokenVaultCMKRequest& request) const;

        /**
         * A Callable wrapper for SetTokenVaultCMK that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetTokenVaultCMKRequestT = Model::SetTokenVaultCMKRequest>
        Model::SetTokenVaultCMKOutcomeCallable SetTokenVaultCMKCallable(const SetTokenVaultCMKRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::SetTokenVaultCMK, request);
        }

        /**
         * An Async wrapper for SetTokenVaultCMK that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetTokenVaultCMKRequestT = Model::SetTokenVaultCMKRequest>
        void SetTokenVaultCMKAsync(const SetTokenVaultCMKRequestT& request, const SetTokenVaultCMKResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::SetTokenVaultCMK, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to a resource with the specified resourceArn.
         * If existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are also deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Secure Agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateAgentRuntime">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentRuntimeOutcome UpdateAgentRuntime(const Model::UpdateAgentRuntimeRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentRuntimeRequestT = Model::UpdateAgentRuntimeRequest>
        Model::UpdateAgentRuntimeOutcomeCallable UpdateAgentRuntimeCallable(const UpdateAgentRuntimeRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateAgentRuntime, request);
        }

        /**
         * An Async wrapper for UpdateAgentRuntime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentRuntimeRequestT = Model::UpdateAgentRuntimeRequest>
        void UpdateAgentRuntimeAsync(const UpdateAgentRuntimeRequestT& request, const UpdateAgentRuntimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateAgentRuntime, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Bedrock AgentCore Runtime endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateAgentRuntimeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentRuntimeEndpointOutcome UpdateAgentRuntimeEndpoint(const Model::UpdateAgentRuntimeEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentRuntimeEndpointRequestT = Model::UpdateAgentRuntimeEndpointRequest>
        Model::UpdateAgentRuntimeEndpointOutcomeCallable UpdateAgentRuntimeEndpointCallable(const UpdateAgentRuntimeEndpointRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateAgentRuntimeEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentRuntimeEndpointRequestT = Model::UpdateAgentRuntimeEndpointRequest>
        void UpdateAgentRuntimeEndpointAsync(const UpdateAgentRuntimeEndpointRequestT& request, const UpdateAgentRuntimeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateAgentRuntimeEndpoint, request, handler, context);
        }

        /**
         * <p>Updates an existing API key credential provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateApiKeyCredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiKeyCredentialProviderOutcome UpdateApiKeyCredentialProvider(const Model::UpdateApiKeyCredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiKeyCredentialProviderRequestT = Model::UpdateApiKeyCredentialProviderRequest>
        Model::UpdateApiKeyCredentialProviderOutcomeCallable UpdateApiKeyCredentialProviderCallable(const UpdateApiKeyCredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateApiKeyCredentialProvider, request);
        }

        /**
         * An Async wrapper for UpdateApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiKeyCredentialProviderRequestT = Model::UpdateApiKeyCredentialProviderRequest>
        void UpdateApiKeyCredentialProviderAsync(const UpdateApiKeyCredentialProviderRequestT& request, const UpdateApiKeyCredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateApiKeyCredentialProvider, request, handler, context);
        }

        /**
         * <p>Updates an existing gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

        /**
         * A Callable wrapper for UpdateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
        Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const UpdateGatewayRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateGateway, request);
        }

        /**
         * An Async wrapper for UpdateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
        void UpdateGatewayAsync(const UpdateGatewayRequestT& request, const UpdateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateGateway, request, handler, context);
        }

        /**
         * <p>Updates an existing gateway target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateGatewayTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayTargetOutcome UpdateGatewayTarget(const Model::UpdateGatewayTargetRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGatewayTargetRequestT = Model::UpdateGatewayTargetRequest>
        Model::UpdateGatewayTargetOutcomeCallable UpdateGatewayTargetCallable(const UpdateGatewayTargetRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateGatewayTarget, request);
        }

        /**
         * An Async wrapper for UpdateGatewayTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayTargetRequestT = Model::UpdateGatewayTargetRequest>
        void UpdateGatewayTargetAsync(const UpdateGatewayTargetRequestT& request, const UpdateGatewayTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateGatewayTarget, request, handler, context);
        }

        /**
         * <p>Update an Amazon Bedrock AgentCore Memory resource memory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateMemory">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMemoryOutcome UpdateMemory(const Model::UpdateMemoryRequest& request) const;

        /**
         * A Callable wrapper for UpdateMemory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMemoryRequestT = Model::UpdateMemoryRequest>
        Model::UpdateMemoryOutcomeCallable UpdateMemoryCallable(const UpdateMemoryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateMemory, request);
        }

        /**
         * An Async wrapper for UpdateMemory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMemoryRequestT = Model::UpdateMemoryRequest>
        void UpdateMemoryAsync(const UpdateMemoryRequestT& request, const UpdateMemoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateMemory, request, handler, context);
        }

        /**
         * <p>Updates an existing OAuth2 credential provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateOauth2CredentialProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOauth2CredentialProviderOutcome UpdateOauth2CredentialProvider(const Model::UpdateOauth2CredentialProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOauth2CredentialProviderRequestT = Model::UpdateOauth2CredentialProviderRequest>
        Model::UpdateOauth2CredentialProviderOutcomeCallable UpdateOauth2CredentialProviderCallable(const UpdateOauth2CredentialProviderRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateOauth2CredentialProvider, request);
        }

        /**
         * An Async wrapper for UpdateOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOauth2CredentialProviderRequestT = Model::UpdateOauth2CredentialProviderRequest>
        void UpdateOauth2CredentialProviderAsync(const UpdateOauth2CredentialProviderRequestT& request, const UpdateOauth2CredentialProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateOauth2CredentialProvider, request, handler, context);
        }

        /**
         * <p>Updates an existing workload identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateWorkloadIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkloadIdentityOutcome UpdateWorkloadIdentity(const Model::UpdateWorkloadIdentityRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkloadIdentityRequestT = Model::UpdateWorkloadIdentityRequest>
        Model::UpdateWorkloadIdentityOutcomeCallable UpdateWorkloadIdentityCallable(const UpdateWorkloadIdentityRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentCoreControlClient::UpdateWorkloadIdentity, request);
        }

        /**
         * An Async wrapper for UpdateWorkloadIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkloadIdentityRequestT = Model::UpdateWorkloadIdentityRequest>
        void UpdateWorkloadIdentityAsync(const UpdateWorkloadIdentityRequestT& request, const UpdateWorkloadIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentCoreControlClient::UpdateWorkloadIdentity, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentCoreControlClient>;
      void init(const BedrockAgentCoreControlClientConfiguration& clientConfiguration);

      BedrockAgentCoreControlClientConfiguration m_clientConfiguration;
      std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockAgentCoreControl
} // namespace Aws
