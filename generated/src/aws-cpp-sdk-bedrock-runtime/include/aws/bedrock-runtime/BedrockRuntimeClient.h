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
   * <p>Describes the API operations for running inference using Amazon Bedrock
   * models.</p>
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
         * <p>The action to apply a guardrail.</p> <p>For troubleshooting some of the
         * common errors you might encounter when using the <code>ApplyGuardrail</code>
         * API, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html">Troubleshooting
         * Amazon Bedrock API Error Codes</a> in the Amazon Bedrock User
         * Guide</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ApplyGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyGuardrailOutcome ApplyGuardrail(const Model::ApplyGuardrailRequest& request) const;

        /**
         * A Callable wrapper for ApplyGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyGuardrailRequestT = Model::ApplyGuardrailRequest>
        Model::ApplyGuardrailOutcomeCallable ApplyGuardrailCallable(const ApplyGuardrailRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::ApplyGuardrail, request);
        }

        /**
         * An Async wrapper for ApplyGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyGuardrailRequestT = Model::ApplyGuardrailRequest>
        void ApplyGuardrailAsync(const ApplyGuardrailRequestT& request, const ApplyGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::ApplyGuardrail, request, handler, context);
        }

        /**
         * <p>Sends messages to the specified Amazon Bedrock model. <code>Converse</code>
         * provides a consistent interface that works with all models that support
         * messages. This allows you to write code once and use it with different models.
         * If a model has unique inference parameters, you can also pass those unique
         * parameters to the model.</p> <p>Amazon Bedrock doesn't store any text, images,
         * or documents that you provide as content. The data is only used to generate the
         * response.</p> <p>You can submit a prompt by including it in the
         * <code>messages</code> field, specifying the <code>modelId</code> of a foundation
         * model or inference profile to run inference on it, and including any other
         * fields that are relevant to your use case.</p> <p>You can also submit a prompt
         * from Prompt management by specifying the ARN of the prompt version and including
         * a map of variables to values in the <code>promptVariables</code> field. You can
         * append more messages to the prompt by using the <code>messages</code> field. If
         * you use a prompt from Prompt management, you can't include the following fields
         * in the request: <code>additionalModelRequestFields</code>,
         * <code>inferenceConfig</code>, <code>system</code>, or <code>toolConfig</code>.
         * Instead, these fields must be defined through Prompt management. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-use.html">Use
         * a prompt from Prompt management</a>.</p> <p>For information about the Converse
         * API, see <i>Use the Converse API</i> in the <i>Amazon Bedrock User Guide</i>. To
         * use a guardrail, see <i>Use a guardrail with the Converse API</i> in the
         * <i>Amazon Bedrock User Guide</i>. To use a tool with a model, see <i>Tool use
         * (Function calling)</i> in the <i>Amazon Bedrock User Guide</i> </p> <p>For
         * example code, see <i>Converse API examples</i> in the <i>Amazon Bedrock User
         * Guide</i>. </p> <p>This operation requires permission for the
         * <code>bedrock:InvokeModel</code> action. </p>  <p>To deny all
         * inference access to resources that you specify in the modelId field, you need to
         * deny access to the <code>bedrock:InvokeModel</code> and
         * <code>bedrock:InvokeModelWithResponseStream</code> actions. Doing this also
         * denies access to the resource through the base inference actions (<a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_InvokeModel.html">InvokeModel</a>
         * and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_InvokeModelWithResponseStream.html">InvokeModelWithResponseStream</a>).
         * For more information see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/security_iam_id-based-policy-examples.html#security_iam_id-based-policy-examples-deny-inference">Deny
         * access for inference on specific models</a>. </p>  <p>For
         * troubleshooting some of the common errors you might encounter when using the
         * <code>Converse</code> API, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html">Troubleshooting
         * Amazon Bedrock API Error Codes</a> in the Amazon Bedrock User
         * Guide</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/Converse">AWS
         * API Reference</a></p>
         */
        virtual Model::ConverseOutcome Converse(const Model::ConverseRequest& request) const;

        /**
         * A Callable wrapper for Converse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConverseRequestT = Model::ConverseRequest>
        Model::ConverseOutcomeCallable ConverseCallable(const ConverseRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::Converse, request);
        }

        /**
         * An Async wrapper for Converse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConverseRequestT = Model::ConverseRequest>
        void ConverseAsync(const ConverseRequestT& request, const ConverseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::Converse, request, handler, context);
        }

        /**
         * <p>Sends messages to the specified Amazon Bedrock model and returns the response
         * in a stream. <code>ConverseStream</code> provides a consistent API that works
         * with all Amazon Bedrock models that support messages. This allows you to write
         * code once and use it with different models. Should a model have unique inference
         * parameters, you can also pass those unique parameters to the model. </p> <p>To
         * find out if a model supports streaming, call <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetFoundationModel.html">GetFoundationModel</a>
         * and check the <code>responseStreamingSupported</code> field in the response.</p>
         *  <p>The CLI doesn't support streaming operations in Amazon Bedrock,
         * including <code>ConverseStream</code>.</p>  <p>Amazon Bedrock doesn't
         * store any text, images, or documents that you provide as content. The data is
         * only used to generate the response.</p> <p>You can submit a prompt by including
         * it in the <code>messages</code> field, specifying the <code>modelId</code> of a
         * foundation model or inference profile to run inference on it, and including any
         * other fields that are relevant to your use case.</p> <p>You can also submit a
         * prompt from Prompt management by specifying the ARN of the prompt version and
         * including a map of variables to values in the <code>promptVariables</code>
         * field. You can append more messages to the prompt by using the
         * <code>messages</code> field. If you use a prompt from Prompt management, you
         * can't include the following fields in the request:
         * <code>additionalModelRequestFields</code>, <code>inferenceConfig</code>,
         * <code>system</code>, or <code>toolConfig</code>. Instead, these fields must be
         * defined through Prompt management. For more information, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-use.html">Use
         * a prompt from Prompt management</a>.</p> <p>For information about the Converse
         * API, see <i>Use the Converse API</i> in the <i>Amazon Bedrock User Guide</i>. To
         * use a guardrail, see <i>Use a guardrail with the Converse API</i> in the
         * <i>Amazon Bedrock User Guide</i>. To use a tool with a model, see <i>Tool use
         * (Function calling)</i> in the <i>Amazon Bedrock User Guide</i> </p> <p>For
         * example code, see <i>Conversation streaming example</i> in the <i>Amazon Bedrock
         * User Guide</i>. </p> <p>This operation requires permission for the
         * <code>bedrock:InvokeModelWithResponseStream</code> action.</p>  <p>To
         * deny all inference access to resources that you specify in the modelId field,
         * you need to deny access to the <code>bedrock:InvokeModel</code> and
         * <code>bedrock:InvokeModelWithResponseStream</code> actions. Doing this also
         * denies access to the resource through the base inference actions (<a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_InvokeModel.html">InvokeModel</a>
         * and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_InvokeModelWithResponseStream.html">InvokeModelWithResponseStream</a>).
         * For more information see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/security_iam_id-based-policy-examples.html#security_iam_id-based-policy-examples-deny-inference">Deny
         * access for inference on specific models</a>. </p>  <p>For
         * troubleshooting some of the common errors you might encounter when using the
         * <code>ConverseStream</code> API, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html">Troubleshooting
         * Amazon Bedrock API Error Codes</a> in the Amazon Bedrock User
         * Guide</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseStream">AWS
         * API Reference</a></p>
         */
        virtual Model::ConverseStreamOutcome ConverseStream(Model::ConverseStreamRequest& request) const;

        /**
         * A Callable wrapper for ConverseStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConverseStreamRequestT = Model::ConverseStreamRequest>
        Model::ConverseStreamOutcomeCallable ConverseStreamCallable(ConverseStreamRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::ConverseStream, request);
        }

        /**
         * An Async wrapper for ConverseStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConverseStreamRequestT = Model::ConverseStreamRequest>
        void ConverseStreamAsync(ConverseStreamRequestT& request, const ConverseStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::ConverseStream, request, handler, context);
        }

        /**
         * <p>Returns the token count for a given inference request. This operation helps
         * you estimate token usage before sending requests to foundation models by
         * returning the token count that would be used if the same input were sent to the
         * model in an inference request.</p> <p>Token counting is model-specific because
         * different models use different tokenization strategies. The token count returned
         * by this operation will match the token count that would be charged if the same
         * input were sent to the model in an <code>InvokeModel</code> or
         * <code>Converse</code> request.</p> <p>You can use this operation to:</p> <ul>
         * <li> <p>Estimate costs before sending inference requests.</p> </li> <li>
         * <p>Optimize prompts to fit within token limits.</p> </li> <li> <p>Plan for token
         * usage in your applications.</p> </li> </ul> <p>This operation accepts the same
         * input formats as <code>InvokeModel</code> and <code>Converse</code>, allowing
         * you to count tokens for both raw text inputs and structured conversation
         * formats.</p> <p>The following operations are related to
         * <code>CountTokens</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/API/API_runtime_InvokeModel.html">InvokeModel</a>
         * - Sends inference requests to foundation models</p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/bedrock/latest/API/API_runtime_Converse.html">Converse</a>
         * - Sends conversation-based inference requests to foundation models</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CountTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::CountTokensOutcome CountTokens(const Model::CountTokensRequest& request) const;

        /**
         * A Callable wrapper for CountTokens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CountTokensRequestT = Model::CountTokensRequest>
        Model::CountTokensOutcomeCallable CountTokensCallable(const CountTokensRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::CountTokens, request);
        }

        /**
         * An Async wrapper for CountTokens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CountTokensRequestT = Model::CountTokensRequest>
        void CountTokensAsync(const CountTokensRequestT& request, const CountTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::CountTokens, request, handler, context);
        }

        /**
         * <p>Retrieve information about an asynchronous invocation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GetAsyncInvoke">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAsyncInvokeOutcome GetAsyncInvoke(const Model::GetAsyncInvokeRequest& request) const;

        /**
         * A Callable wrapper for GetAsyncInvoke that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAsyncInvokeRequestT = Model::GetAsyncInvokeRequest>
        Model::GetAsyncInvokeOutcomeCallable GetAsyncInvokeCallable(const GetAsyncInvokeRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::GetAsyncInvoke, request);
        }

        /**
         * An Async wrapper for GetAsyncInvoke that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAsyncInvokeRequestT = Model::GetAsyncInvokeRequest>
        void GetAsyncInvokeAsync(const GetAsyncInvokeRequestT& request, const GetAsyncInvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::GetAsyncInvoke, request, handler, context);
        }

        /**
         * <p>Invokes the specified Amazon Bedrock model to run inference using the prompt
         * and inference parameters provided in the request body. You use model inference
         * to generate text, images, and embeddings.</p> <p>For example code, see <i>Invoke
         * model code examples</i> in the <i>Amazon Bedrock User Guide</i>. </p> <p>This
         * operation requires permission for the <code>bedrock:InvokeModel</code>
         * action.</p>  <p>To deny all inference access to resources that you
         * specify in the modelId field, you need to deny access to the
         * <code>bedrock:InvokeModel</code> and
         * <code>bedrock:InvokeModelWithResponseStream</code> actions. Doing this also
         * denies access to the resource through the Converse API actions (<a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
         * and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>).
         * For more information see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/security_iam_id-based-policy-examples.html#security_iam_id-based-policy-examples-deny-inference">Deny
         * access for inference on specific models</a>. </p>  <p>For
         * troubleshooting some of the common errors you might encounter when using the
         * <code>InvokeModel</code> API, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html">Troubleshooting
         * Amazon Bedrock API Error Codes</a> in the Amazon Bedrock User
         * Guide</p><p><h3>See Also:</h3>   <a
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
         * <p>Invoke the specified Amazon Bedrock model to run inference using the
         * bidirectional stream. The response is returned in a stream that remains open for
         * 8 minutes. A single session can contain multiple prompts and responses from the
         * model. The prompts to the model are provided as audio files and the model's
         * responses are spoken back to the user and transcribed.</p> <p>It is possible for
         * users to interrupt the model's response with a new prompt, which will halt the
         * response speech. The model will retain contextual awareness of the conversation
         * while pivoting to respond to the new prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModelWithBidirectionalStream">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The handler is triggered when the request is finished.
         */
        virtual void InvokeModelWithBidirectionalStreamAsync(Model::InvokeModelWithBidirectionalStreamRequest& request,
                const InvokeModelWithBidirectionalStreamStreamReadyHandler& streamReadyHandler,
                const InvokeModelWithBidirectionalStreamResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

        /**
         * <p>Invoke the specified Amazon Bedrock model to run inference using the prompt
         * and inference parameters provided in the request body. The response is returned
         * in a stream.</p> <p>To see if a model supports streaming, call <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_GetFoundationModel.html">GetFoundationModel</a>
         * and check the <code>responseStreamingSupported</code> field in the response.</p>
         *  <p>The CLI doesn't support streaming operations in Amazon Bedrock,
         * including <code>InvokeModelWithResponseStream</code>.</p>  <p>For example
         * code, see <i>Invoke model with streaming code example</i> in the <i>Amazon
         * Bedrock User Guide</i>. </p> <p>This operation requires permissions to perform
         * the <code>bedrock:InvokeModelWithResponseStream</code> action. </p> 
         * <p>To deny all inference access to resources that you specify in the modelId
         * field, you need to deny access to the <code>bedrock:InvokeModel</code> and
         * <code>bedrock:InvokeModelWithResponseStream</code> actions. Doing this also
         * denies access to the resource through the Converse API actions (<a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
         * and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>).
         * For more information see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/security_iam_id-based-policy-examples.html#security_iam_id-based-policy-examples-deny-inference">Deny
         * access for inference on specific models</a>. </p>  <p>For
         * troubleshooting some of the common errors you might encounter when using the
         * <code>InvokeModelWithResponseStream</code> API, see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/troubleshooting-api-error-codes.html">Troubleshooting
         * Amazon Bedrock API Error Codes</a> in the Amazon Bedrock User
         * Guide</p><p><h3>See Also:</h3>   <a
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

        /**
         * <p>Lists asynchronous invocations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ListAsyncInvokes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAsyncInvokesOutcome ListAsyncInvokes(const Model::ListAsyncInvokesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAsyncInvokes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAsyncInvokesRequestT = Model::ListAsyncInvokesRequest>
        Model::ListAsyncInvokesOutcomeCallable ListAsyncInvokesCallable(const ListAsyncInvokesRequestT& request = {}) const
        {
            return SubmitCallable(&BedrockRuntimeClient::ListAsyncInvokes, request);
        }

        /**
         * An Async wrapper for ListAsyncInvokes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAsyncInvokesRequestT = Model::ListAsyncInvokesRequest>
        void ListAsyncInvokesAsync(const ListAsyncInvokesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAsyncInvokesRequestT& request = {}) const
        {
            return SubmitAsync(&BedrockRuntimeClient::ListAsyncInvokes, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous invocation.</p> <p>This operation requires permission
         * for the <code>bedrock:InvokeModel</code> action.</p>  <p>To deny all
         * inference access to resources that you specify in the modelId field, you need to
         * deny access to the <code>bedrock:InvokeModel</code> and
         * <code>bedrock:InvokeModelWithResponseStream</code> actions. Doing this also
         * denies access to the resource through the Converse API actions (<a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
         * and <a
         * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>).
         * For more information see <a
         * href="https://docs.aws.amazon.com/bedrock/latest/userguide/security_iam_id-based-policy-examples.html#security_iam_id-based-policy-examples-deny-inference">Deny
         * access for inference on specific models</a>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/StartAsyncInvoke">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAsyncInvokeOutcome StartAsyncInvoke(const Model::StartAsyncInvokeRequest& request) const;

        /**
         * A Callable wrapper for StartAsyncInvoke that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAsyncInvokeRequestT = Model::StartAsyncInvokeRequest>
        Model::StartAsyncInvokeOutcomeCallable StartAsyncInvokeCallable(const StartAsyncInvokeRequestT& request) const
        {
            return SubmitCallable(&BedrockRuntimeClient::StartAsyncInvoke, request);
        }

        /**
         * An Async wrapper for StartAsyncInvoke that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAsyncInvokeRequestT = Model::StartAsyncInvokeRequest>
        void StartAsyncInvokeAsync(const StartAsyncInvokeRequestT& request, const StartAsyncInvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockRuntimeClient::StartAsyncInvoke, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockRuntimeClient>;
      void init(const BedrockRuntimeClientConfiguration& clientConfiguration);

      BedrockRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<BedrockRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockRuntime
} // namespace Aws
