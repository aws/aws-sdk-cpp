/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-runtime/BedrockRuntimeServiceClientModel.h>

namespace Aws
{
namespace BedrockRuntime
{
  /**
   * <p>Describes the API operations for running inference using Bedrock models.</p>
   */
  class AWS_BEDROCKRUNTIME_API BedrockRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockRuntimeClientConfiguration ClientConfigurationType;
      typedef BedrockRuntimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration(),
                             std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<BedrockRuntimeEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::BedrockRuntime::BedrockRuntimeClientConfiguration& clientConfiguration = Aws::BedrockRuntime::BedrockRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockRuntimeClient();

        /**
         * <p>Invokes the specified Bedrock model to run inference using the input provided
         * in the request body. You use InvokeModel to run inference for text models, image
         * models, and embedding models.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/api-methods-run.html">Run
         * inference</a> in the Bedrock User Guide.</p> <p>For example requests, see
         * Examples (after the Errors section).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeModelOutcome InvokeModel(const Model::InvokeModelRequest& request) const;

        /**
         * A Callable wrapper for InvokeModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeModelRequestT = Model::InvokeModelRequest>
        Model::InvokeModelOutcomeCallable InvokeModelCallable(const InvokeModelRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::InvokeModel, request);
        }

        /**
         * An Async wrapper for InvokeModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeModelRequestT = Model::InvokeModelRequest>
        void InvokeModelAsync(const InvokeModelRequestT& request, const InvokeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::InvokeModel, request, handler, context);
        }

        /**
         * <p>Invoke the specified Bedrock model to run inference using the input provided.
         * Return the response in a stream.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/api-methods-run.html">Run
         * inference</a> in the Bedrock User Guide.</p> <p>For an example request and
         * response, see Examples (after the Errors section).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModelWithResponseStream">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeModelWithResponseStreamOutcome InvokeModelWithResponseStream(Model::InvokeModelWithResponseStreamRequest& request) const;

        /**
         * A Callable wrapper for InvokeModelWithResponseStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeModelWithResponseStreamRequestT = Model::InvokeModelWithResponseStreamRequest>
        Model::InvokeModelWithResponseStreamOutcomeCallable InvokeModelWithResponseStreamCallable(InvokeModelWithResponseStreamRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::InvokeModelWithResponseStream, request);
        }

        /**
         * An Async wrapper for InvokeModelWithResponseStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeModelWithResponseStreamRequestT = Model::InvokeModelWithResponseStreamRequest>
        void InvokeModelWithResponseStreamAsync(InvokeModelWithResponseStreamRequestT& request, const InvokeModelWithResponseStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::InvokeModelWithResponseStream, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockRuntimeClient>;
      void init(const BedrockRuntimeClientConfiguration& clientConfiguration);

      BedrockRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BedrockRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockRuntime
} // namespace Aws
