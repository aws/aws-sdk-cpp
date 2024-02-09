/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeServiceClientModel.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
  /**
   * <p>Amazon Bedrock Agent</p>
   */
  class AWS_BEDROCKAGENTRUNTIME_API BedrockAgentRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockAgentRuntimeClientConfiguration ClientConfigurationType;
      typedef BedrockAgentRuntimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentRuntimeClient(const Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration = Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration(),
                                  std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration = Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration& clientConfiguration = Aws::BedrockAgentRuntime::BedrockAgentRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockAgentRuntimeClient();

        /**
         * <p>Invokes the specified Bedrock model to run inference using the input provided
         * in the request body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvokeAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeAgentOutcome InvokeAgent(Model::InvokeAgentRequest& request) const;

        /**
         * A Callable wrapper for InvokeAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeAgentRequestT = Model::InvokeAgentRequest>
        Model::InvokeAgentOutcomeCallable InvokeAgentCallable(InvokeAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::InvokeAgent, request);
        }

        /**
         * An Async wrapper for InvokeAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeAgentRequestT = Model::InvokeAgentRequest>
        void InvokeAgentAsync(InvokeAgentRequestT& request, const InvokeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::InvokeAgent, request, handler, context);
        }

        /**
         * <p>Retrieve from knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Retrieve">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveOutcome Retrieve(const Model::RetrieveRequest& request) const;

        /**
         * A Callable wrapper for Retrieve that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetrieveRequestT = Model::RetrieveRequest>
        Model::RetrieveOutcomeCallable RetrieveCallable(const RetrieveRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::Retrieve, request);
        }

        /**
         * An Async wrapper for Retrieve that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetrieveRequestT = Model::RetrieveRequest>
        void RetrieveAsync(const RetrieveRequestT& request, const RetrieveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::Retrieve, request, handler, context);
        }

        /**
         * <p>RetrieveAndGenerate API</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrieveAndGenerate">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveAndGenerateOutcome RetrieveAndGenerate(const Model::RetrieveAndGenerateRequest& request) const;

        /**
         * A Callable wrapper for RetrieveAndGenerate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetrieveAndGenerateRequestT = Model::RetrieveAndGenerateRequest>
        Model::RetrieveAndGenerateOutcomeCallable RetrieveAndGenerateCallable(const RetrieveAndGenerateRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::RetrieveAndGenerate, request);
        }

        /**
         * An Async wrapper for RetrieveAndGenerate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetrieveAndGenerateRequestT = Model::RetrieveAndGenerateRequest>
        void RetrieveAndGenerateAsync(const RetrieveAndGenerateRequestT& request, const RetrieveAndGenerateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::RetrieveAndGenerate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentRuntimeClient>;
      void init(const BedrockAgentRuntimeClientConfiguration& clientConfiguration);

      BedrockAgentRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockAgentRuntime
} // namespace Aws
