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
         * <p>Creates a new invocation within a session. An invocation groups the related
         * invocation steps that store the content from a conversation. For more
         * information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p> <p>Related APIs</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_ListInvocations.html">ListInvocations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_ListSessions.html">ListSessions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_GetSession.html">GetSession</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CreateInvocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvocationOutcome CreateInvocation(const Model::CreateInvocationRequest& request) const;

        /**
         * A Callable wrapper for CreateInvocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInvocationRequestT = Model::CreateInvocationRequest>
        Model::CreateInvocationOutcomeCallable CreateInvocationCallable(const CreateInvocationRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::CreateInvocation, request);
        }

        /**
         * An Async wrapper for CreateInvocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInvocationRequestT = Model::CreateInvocationRequest>
        void CreateInvocationAsync(const CreateInvocationRequestT& request, const CreateInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::CreateInvocation, request, handler, context);
        }

        /**
         * <p>Creates a session to temporarily store conversations for generative AI
         * (GenAI) applications built with open-source frameworks such as LangGraph and
         * LlamaIndex. Sessions enable you to save the state of conversations at
         * checkpoints, with the added security and infrastructure of Amazon Web Services.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p> <p>By default, Amazon Bedrock uses Amazon Web Services-managed
         * keys for session encryption, including session metadata, or you can use your own
         * KMS key. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/session-encryption.html">Amazon
         * Bedrock session encryption</a>.</p>  <p> You use a session to store state
         * and conversation history for generative AI applications built with open-source
         * frameworks. For Amazon Bedrock Agents, the service automatically manages
         * conversation context and associates them with the agent-specific sessionId you
         * specify in the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html">InvokeAgent</a>
         * API operation. </p>  <p>Related APIs:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_ListSessions.html">ListSessions</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_GetSession.html">GetSession</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_EndSession.html">EndSession</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_DeleteSession.html">DeleteSession</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        Model::CreateSessionOutcomeCallable CreateSessionCallable(const CreateSessionRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::CreateSession, request);
        }

        /**
         * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        void CreateSessionAsync(const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateSessionRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::CreateSession, request, handler, context);
        }

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
         * <p>Deletes a session that you ended. You can't delete a session with an
         * <code>ACTIVE</code> status. To delete an active session, you must first end it
         * with the <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_EndSession.html">EndSession</a>
         * API operation. For more information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/DeleteSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSessionRequestT = Model::DeleteSessionRequest>
        Model::DeleteSessionOutcomeCallable DeleteSessionCallable(const DeleteSessionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::DeleteSession, request);
        }

        /**
         * An Async wrapper for DeleteSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSessionRequestT = Model::DeleteSessionRequest>
        void DeleteSessionAsync(const DeleteSessionRequestT& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::DeleteSession, request, handler, context);
        }

        /**
         * <p>Ends the session. After you end a session, you can still access its content
         * but you can’t add to it. To delete the session and it's content, you use the
         * DeleteSession API operation. For more information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/EndSession">AWS
         * API Reference</a></p>
         */
        virtual Model::EndSessionOutcome EndSession(const Model::EndSessionRequest& request) const;

        /**
         * A Callable wrapper for EndSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EndSessionRequestT = Model::EndSessionRequest>
        Model::EndSessionOutcomeCallable EndSessionCallable(const EndSessionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::EndSession, request);
        }

        /**
         * An Async wrapper for EndSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EndSessionRequestT = Model::EndSessionRequest>
        void EndSessionAsync(const EndSessionRequestT& request, const EndSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::EndSession, request, handler, context);
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
         * <p>Retrieves the flow definition snapshot used for a flow execution. The
         * snapshot represents the flow metadata and definition as it existed at the time
         * the execution was started. Note that even if the flow is edited after an
         * execution starts, the snapshot connected to the execution remains unchanged.</p>
         *  <p>Flow executions is in preview release for Amazon Bedrock and is
         * subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GetExecutionFlowSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExecutionFlowSnapshotOutcome GetExecutionFlowSnapshot(const Model::GetExecutionFlowSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetExecutionFlowSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExecutionFlowSnapshotRequestT = Model::GetExecutionFlowSnapshotRequest>
        Model::GetExecutionFlowSnapshotOutcomeCallable GetExecutionFlowSnapshotCallable(const GetExecutionFlowSnapshotRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::GetExecutionFlowSnapshot, request);
        }

        /**
         * An Async wrapper for GetExecutionFlowSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExecutionFlowSnapshotRequestT = Model::GetExecutionFlowSnapshotRequest>
        void GetExecutionFlowSnapshotAsync(const GetExecutionFlowSnapshotRequestT& request, const GetExecutionFlowSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::GetExecutionFlowSnapshot, request, handler, context);
        }

        /**
         * <p>Retrieves details about a specific flow execution, including its status,
         * start and end times, and any errors that occurred during
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GetFlowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowExecutionOutcome GetFlowExecution(const Model::GetFlowExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetFlowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFlowExecutionRequestT = Model::GetFlowExecutionRequest>
        Model::GetFlowExecutionOutcomeCallable GetFlowExecutionCallable(const GetFlowExecutionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::GetFlowExecution, request);
        }

        /**
         * An Async wrapper for GetFlowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFlowExecutionRequestT = Model::GetFlowExecutionRequest>
        void GetFlowExecutionAsync(const GetFlowExecutionRequestT& request, const GetFlowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::GetFlowExecution, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a specific invocation step within an invocation in a
         * session. For more information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GetInvocationStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvocationStepOutcome GetInvocationStep(const Model::GetInvocationStepRequest& request) const;

        /**
         * A Callable wrapper for GetInvocationStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvocationStepRequestT = Model::GetInvocationStepRequest>
        Model::GetInvocationStepOutcomeCallable GetInvocationStepCallable(const GetInvocationStepRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::GetInvocationStep, request);
        }

        /**
         * An Async wrapper for GetInvocationStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvocationStepRequestT = Model::GetInvocationStepRequest>
        void GetInvocationStepAsync(const GetInvocationStepRequestT& request, const GetInvocationStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::GetInvocationStep, request, handler, context);
        }

        /**
         * <p>Retrieves details about a specific session. For more information about
         * sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::GetSession, request, handler, context);
        }

        /**
         * <p>  <p>Sends a prompt for the agent to process and respond to.
         * Note the following fields for the request:</p> <ul> <li> <p>To continue the same
         * conversation with an agent, use the same <code>sessionId</code> value in the
         * request.</p> </li> <li> <p>To activate trace enablement, turn
         * <code>enableTrace</code> to <code>true</code>. Trace enablement helps you follow
         * the agent's reasoning process that led it to the information it processed, the
         * actions it took, and the final result it yielded. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-test.html#trace-events">Trace
         * enablement</a>.</p> </li> <li> <p>End a conversation by setting
         * <code>endSession</code> to <code>true</code>.</p> </li> <li> <p>In the
         * <code>sessionState</code> object, you can include attributes for the session or
         * prompt or, if you configured an action group to return control, results from
         * invocation of the action group.</p> </li> </ul> <p>The response contains both
         * <b>chunk</b> and <b>trace</b> attributes.</p> <p>The final response is returned
         * in the <code>bytes</code> field of the <code>chunk</code> object. The
         * <code>InvokeAgent</code> returns one chunk for the entire interaction.</p> <ul>
         * <li> <p>The <code>attribution</code> object contains citations for parts of the
         * response.</p> </li> <li> <p>If you set <code>enableTrace</code> to
         * <code>true</code> in the request, you can trace the agent's steps and reasoning
         * process that led it to the response.</p> </li> <li> <p>If the action predicted
         * was configured to return control, the response returns parameters for the
         * action, elicited from the user, in the <code>returnControl</code> field.</p>
         * </li> <li> <p>Errors are also surfaced in the response.</p> </li>
         * </ul></p><p><h3>See Also:</h3>   <a
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
         * <p>Lists events that occurred during a flow execution. Events provide detailed
         * information about the execution progress, including node inputs and outputs,
         * flow inputs and outputs, condition results, and failure events.</p> 
         * <p>Flow executions is in preview release for Amazon Bedrock and is subject to
         * change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ListFlowExecutionEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowExecutionEventsOutcome ListFlowExecutionEvents(const Model::ListFlowExecutionEventsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowExecutionEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowExecutionEventsRequestT = Model::ListFlowExecutionEventsRequest>
        Model::ListFlowExecutionEventsOutcomeCallable ListFlowExecutionEventsCallable(const ListFlowExecutionEventsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::ListFlowExecutionEvents, request);
        }

        /**
         * An Async wrapper for ListFlowExecutionEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowExecutionEventsRequestT = Model::ListFlowExecutionEventsRequest>
        void ListFlowExecutionEventsAsync(const ListFlowExecutionEventsRequestT& request, const ListFlowExecutionEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::ListFlowExecutionEvents, request, handler, context);
        }

        /**
         * <p>Lists all executions of a flow. Results can be paginated and include summary
         * information about each execution, such as status, start and end times, and the
         * execution's Amazon Resource Name (ARN).</p>  <p>Flow executions is in
         * preview release for Amazon Bedrock and is subject to change.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ListFlowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowExecutionsOutcome ListFlowExecutions(const Model::ListFlowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowExecutionsRequestT = Model::ListFlowExecutionsRequest>
        Model::ListFlowExecutionsOutcomeCallable ListFlowExecutionsCallable(const ListFlowExecutionsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::ListFlowExecutions, request);
        }

        /**
         * An Async wrapper for ListFlowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowExecutionsRequestT = Model::ListFlowExecutionsRequest>
        void ListFlowExecutionsAsync(const ListFlowExecutionsRequestT& request, const ListFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::ListFlowExecutions, request, handler, context);
        }

        /**
         * <p>Lists all invocation steps associated with a session and optionally, an
         * invocation within the session. For more information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ListInvocationSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvocationStepsOutcome ListInvocationSteps(const Model::ListInvocationStepsRequest& request) const;

        /**
         * A Callable wrapper for ListInvocationSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvocationStepsRequestT = Model::ListInvocationStepsRequest>
        Model::ListInvocationStepsOutcomeCallable ListInvocationStepsCallable(const ListInvocationStepsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::ListInvocationSteps, request);
        }

        /**
         * An Async wrapper for ListInvocationSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvocationStepsRequestT = Model::ListInvocationStepsRequest>
        void ListInvocationStepsAsync(const ListInvocationStepsRequestT& request, const ListInvocationStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::ListInvocationSteps, request, handler, context);
        }

        /**
         * <p>Lists all invocations associated with a specific session. For more
         * information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ListInvocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvocationsOutcome ListInvocations(const Model::ListInvocationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvocationsRequestT = Model::ListInvocationsRequest>
        Model::ListInvocationsOutcomeCallable ListInvocationsCallable(const ListInvocationsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::ListInvocations, request);
        }

        /**
         * An Async wrapper for ListInvocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvocationsRequestT = Model::ListInvocationsRequest>
        void ListInvocationsAsync(const ListInvocationsRequestT& request, const ListInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::ListInvocations, request, handler, context);
        }

        /**
         * <p>Lists all sessions in your Amazon Web Services account. For more information
         * about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::ListSessions, request);
        }

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        void ListSessionsAsync(const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSessionsRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::ListSessions, request, handler, context);
        }

        /**
         * <p>List all the tags for the resource you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::ListTagsForResource, request, handler, context);
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
         * <p>Add an invocation step to an invocation in a session. An invocation step
         * stores fine-grained state checkpoints, including text and images, for each
         * interaction. For more information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p> <p>Related APIs:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_GetInvocationStep.html">GetInvocationStep</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_ListInvocationSteps.html">ListInvocationSteps</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_ListInvocations.html">ListInvocations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_ListInvocations.html">ListSessions</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PutInvocationStep">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInvocationStepOutcome PutInvocationStep(const Model::PutInvocationStepRequest& request) const;

        /**
         * A Callable wrapper for PutInvocationStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInvocationStepRequestT = Model::PutInvocationStepRequest>
        Model::PutInvocationStepOutcomeCallable PutInvocationStepCallable(const PutInvocationStepRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::PutInvocationStep, request);
        }

        /**
         * An Async wrapper for PutInvocationStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInvocationStepRequestT = Model::PutInvocationStepRequest>
        void PutInvocationStepAsync(const PutInvocationStepRequestT& request, const PutInvocationStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::PutInvocationStep, request, handler, context);
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
         * <code>InvokeModelWithResponseStream</code>.</p>  <p>This operation
         * requires permission for the <code> bedrock:RetrieveAndGenerate</code>
         * action.</p><p><h3>See Also:</h3>   <a
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

        /**
         * <p>Starts an execution of an Amazon Bedrock flow. Unlike flows that run until
         * completion or time out after five minutes, flow executions let you run flows
         * asynchronously for longer durations. Flow executions also yield control so that
         * your application can perform other tasks.</p> <p>This operation returns an
         * Amazon Resource Name (ARN) that you can use to track and manage your flow
         * execution.</p>  <p>Flow executions is in preview release for Amazon
         * Bedrock and is subject to change.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/StartFlowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowExecutionOutcome StartFlowExecution(const Model::StartFlowExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartFlowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFlowExecutionRequestT = Model::StartFlowExecutionRequest>
        Model::StartFlowExecutionOutcomeCallable StartFlowExecutionCallable(const StartFlowExecutionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::StartFlowExecution, request);
        }

        /**
         * An Async wrapper for StartFlowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFlowExecutionRequestT = Model::StartFlowExecutionRequest>
        void StartFlowExecutionAsync(const StartFlowExecutionRequestT& request, const StartFlowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::StartFlowExecution, request, handler, context);
        }

        /**
         * <p>Stops an Amazon Bedrock flow's execution. This operation prevents further
         * processing of the flow and changes the execution status to
         * <code>Aborted</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/StopFlowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFlowExecutionOutcome StopFlowExecution(const Model::StopFlowExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopFlowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopFlowExecutionRequestT = Model::StopFlowExecutionRequest>
        Model::StopFlowExecutionOutcomeCallable StopFlowExecutionCallable(const StopFlowExecutionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::StopFlowExecution, request);
        }

        /**
         * An Async wrapper for StopFlowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopFlowExecutionRequestT = Model::StopFlowExecutionRequest>
        void StopFlowExecutionAsync(const StopFlowExecutionRequestT& request, const StopFlowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::StopFlowExecution, request, handler, context);
        }

        /**
         * <p>Associate tags with a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Tagging
         * resources</a> in the Amazon Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the metadata or encryption settings of a session. For more
         * information about sessions, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
         * and retrieve conversation history and context with Amazon Bedrock
         * sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/UpdateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSessionOutcome UpdateSession(const Model::UpdateSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSessionRequestT = Model::UpdateSessionRequest>
        Model::UpdateSessionOutcomeCallable UpdateSessionCallable(const UpdateSessionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentRuntimeClient::UpdateSession, request);
        }

        /**
         * An Async wrapper for UpdateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSessionRequestT = Model::UpdateSessionRequest>
        void UpdateSessionAsync(const UpdateSessionRequestT& request, const UpdateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentRuntimeClient::UpdateSession, request, handler, context);
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
