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
   * <p>Contains APIs related to model invocation and querying of knowledge
   * bases.</p>
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
         * <p>Deletes memory from the specified memory identifier.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/DeleteAgentMemory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentMemoryOutcome DeleteAgentMemory(const Model::DeleteAgentMemoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentMemory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentMemoryRequestT = Model::DeleteAgentMemoryRequest>
        Model::DeleteAgentMemoryOutcomeCallable DeleteAgentMemoryCallable(const DeleteAgentMemoryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::DeleteAgentMemory, request);
        }

        /**
         * An Async wrapper for DeleteAgentMemory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentMemoryRequestT = Model::DeleteAgentMemoryRequest>
        void DeleteAgentMemoryAsync(const DeleteAgentMemoryRequestT& request, const DeleteAgentMemoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::DeleteAgentMemory, request, handler, context);
        }

        /**
         * <p>Generates an SQL query from a natural language query. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-generate-query.html">Generate
         * a query for structured data</a> in the Amazon Bedrock User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GenerateQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateQueryOutcome GenerateQuery(const Model::GenerateQueryRequest& request) const;

        /**
         * A Callable wrapper for GenerateQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateQueryRequestT = Model::GenerateQueryRequest>
        Model::GenerateQueryOutcomeCallable GenerateQueryCallable(const GenerateQueryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::GenerateQuery, request);
        }

        /**
         * An Async wrapper for GenerateQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateQueryRequestT = Model::GenerateQueryRequest>
        void GenerateQueryAsync(const GenerateQueryRequestT& request, const GenerateQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::GenerateQuery, request, handler, context);
        }

        /**
         * <p>Gets the sessions stored in the memory of the agent.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GetAgentMemory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentMemoryOutcome GetAgentMemory(const Model::GetAgentMemoryRequest& request) const;

        /**
         * A Callable wrapper for GetAgentMemory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentMemoryRequestT = Model::GetAgentMemoryRequest>
        Model::GetAgentMemoryOutcomeCallable GetAgentMemoryCallable(const GetAgentMemoryRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::GetAgentMemory, request);
        }

        /**
         * An Async wrapper for GetAgentMemory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentMemoryRequestT = Model::GetAgentMemoryRequest>
        void GetAgentMemoryAsync(const GetAgentMemoryRequestT& request, const GetAgentMemoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::GetAgentMemory, request, handler, context);
        }

        /**
         *   <p>Sends a prompt for the agent to process and respond to. Note
         * the following fields for the request:</p> <ul> <li> <p>To continue the same
         * conversation with an agent, use the same <code>sessionId</code> value in the
         * request.</p> </li> <li> <p>To activate trace enablement, turn
         * <code>enableTrace</code> to <code>true</code>. Trace enablement helps you follow
         * the agent's reasoning process that led it to the information it processed, the
         * actions it took, and the final result it yielded. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-events">Trace
         * enablement</a>.</p> </li> <li> <p>To stream agent responses, make sure that only
         * orchestration prompt is enabled. Agent streaming is not supported for the
         * following steps: </p> <ul> <li> <p> <code>Pre-processing</code> </p> </li> <li>
         * <p> <code>Post-processing</code> </p> </li> <li> <p>Agent with 1 Knowledge base
         * and <code>User Input</code> not enabled</p> </li> </ul> </li> <li> <p>End a
         * conversation by setting <code>endSession</code> to <code>true</code>.</p> </li>
         * <li> <p>In the <code>sessionState</code> object, you can include attributes for
         * the session or prompt or, if you configured an action group to return control,
         * results from invocation of the action group.</p> </li> </ul> <p>The response
         * contains both <b>chunk</b> and <b>trace</b> attributes.</p> <p>The final
         * response is returned in the <code>bytes</code> field of the <code>chunk</code>
         * object. The <code>InvokeAgent</code> returns one chunk for the entire
         * interaction.</p> <ul> <li> <p>The <code>attribution</code> object contains
         * citations for parts of the response.</p> </li> <li> <p>If you set
         * <code>enableTrace</code> to <code>true</code> in the request, you can trace the
         * agent's steps and reasoning process that led it to the response.</p> </li> <li>
         * <p>If the action predicted was configured to return control, the response
         * returns parameters for the action, elicited from the user, in the
         * <code>returnControl</code> field.</p> </li> <li> <p>Errors are also surfaced in
         * the response.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * <p>Invokes an alias of a flow to run the inputs that you specify and return the
         * output of each node as a stream. If there's an error, the error is returned. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/flows-test.html">Test
         * a flow in Amazon Bedrock</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p>  <p>The CLI doesn't support streaming
         * operations in Amazon Bedrock, including <code>InvokeFlow</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvokeFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeFlowOutcome InvokeFlow(Model::InvokeFlowRequest& request) const;

        /**
         * A Callable wrapper for InvokeFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeFlowRequestT = Model::InvokeFlowRequest>
        Model::InvokeFlowOutcomeCallable InvokeFlowCallable(InvokeFlowRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::InvokeFlow, request);
        }

        /**
         * An Async wrapper for InvokeFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeFlowRequestT = Model::InvokeFlowRequest>
        void InvokeFlowAsync(InvokeFlowRequestT& request, const InvokeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::InvokeFlow, request, handler, context);
        }

        /**
         * <p> Invokes an inline Amazon Bedrock agent using the configurations you provide
         * with the request. </p> <ul> <li> <p>Specify the following fields for security
         * purposes.</p> <ul> <li> <p>(Optional) <code>customerEncryptionKeyArn</code> –
         * The Amazon Resource Name (ARN) of a KMS key to encrypt the creation of the
         * agent.</p> </li> <li> <p>(Optional) <code>idleSessionTTLinSeconds</code> –
         * Specify the number of seconds for which the agent should maintain session
         * information. After this time expires, the subsequent
         * <code>InvokeInlineAgent</code> request begins a new session.</p> </li> </ul>
         * </li> <li> <p>To override the default prompt behavior for agent orchestration
         * and to use advanced prompts, include a <code>promptOverrideConfiguration</code>
         * object. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/advanced-prompts.html">Advanced
         * prompts</a>.</p> </li> <li> <p>The agent instructions will not be honored if
         * your agent has only one knowledge base, uses default prompts, has no action
         * group, and user input is disabled.</p> </li> </ul>  <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvokeInlineAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeInlineAgentOutcome InvokeInlineAgent(Model::InvokeInlineAgentRequest& request) const;

        /**
         * A Callable wrapper for InvokeInlineAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvokeInlineAgentRequestT = Model::InvokeInlineAgentRequest>
        Model::InvokeInlineAgentOutcomeCallable InvokeInlineAgentCallable(InvokeInlineAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::InvokeInlineAgent, request);
        }

        /**
         * An Async wrapper for InvokeInlineAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvokeInlineAgentRequestT = Model::InvokeInlineAgentRequest>
        void InvokeInlineAgentAsync(InvokeInlineAgentRequestT& request, const InvokeInlineAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::InvokeInlineAgent, request, handler, context);
        }

        /**
         * <p>Optimizes a prompt for the task that you specify. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-optimize.html">Optimize
         * a prompt</a> in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
         * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/OptimizePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::OptimizePromptOutcome OptimizePrompt(Model::OptimizePromptRequest& request) const;

        /**
         * A Callable wrapper for OptimizePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename OptimizePromptRequestT = Model::OptimizePromptRequest>
        Model::OptimizePromptOutcomeCallable OptimizePromptCallable(OptimizePromptRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::OptimizePrompt, request);
        }

        /**
         * An Async wrapper for OptimizePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename OptimizePromptRequestT = Model::OptimizePromptRequest>
        void OptimizePromptAsync(OptimizePromptRequestT& request, const OptimizePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::OptimizePrompt, request, handler, context);
        }

        /**
         * <p>Reranks the relevance of sources based on queries. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/rerank.html">Improve
         * the relevance of query responses with a reranker model</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Rerank">AWS
         * API Reference</a></p>
         */
        virtual Model::RerankOutcome Rerank(const Model::RerankRequest& request) const;

        /**
         * A Callable wrapper for Rerank that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RerankRequestT = Model::RerankRequest>
        Model::RerankOutcomeCallable RerankCallable(const RerankRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::Rerank, request);
        }

        /**
         * An Async wrapper for Rerank that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RerankRequestT = Model::RerankRequest>
        void RerankAsync(const RerankRequestT& request, const RerankResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::Rerank, request, handler, context);
        }

        /**
         * <p>Queries a knowledge base and retrieves information from it.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Queries a knowledge base and generates responses based on the retrieved
         * results and using the specified foundation model or <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/cross-region-inference.html">inference
         * profile</a>. The response only cites sources that are relevant to the
         * query.</p><p><h3>See Also:</h3>   <a
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

        /**
         * <p>Queries a knowledge base and generates responses based on the retrieved
         * results, with output in streaming format.</p>  <p>The CLI doesn't support
         * streaming operations in Amazon Bedrock, including
         * <code>InvokeModelWithResponseStream</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrieveAndGenerateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveAndGenerateStreamOutcome RetrieveAndGenerateStream(Model::RetrieveAndGenerateStreamRequest& request) const;

        /**
         * A Callable wrapper for RetrieveAndGenerateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetrieveAndGenerateStreamRequestT = Model::RetrieveAndGenerateStreamRequest>
        Model::RetrieveAndGenerateStreamOutcomeCallable RetrieveAndGenerateStreamCallable(RetrieveAndGenerateStreamRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::RetrieveAndGenerateStream, request);
        }

        /**
         * An Async wrapper for RetrieveAndGenerateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetrieveAndGenerateStreamRequestT = Model::RetrieveAndGenerateStreamRequest>
        void RetrieveAndGenerateStreamAsync(RetrieveAndGenerateStreamRequestT& request, const RetrieveAndGenerateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::RetrieveAndGenerateStream, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentRuntimeClient>;
      void init(const BedrockAgentRuntimeClientConfiguration& clientConfiguration);

      BedrockAgentRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<BedrockAgentRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockAgentRuntime
} // namespace Aws
