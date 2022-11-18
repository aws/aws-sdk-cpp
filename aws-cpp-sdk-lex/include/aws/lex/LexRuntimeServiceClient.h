/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lex/LexRuntimeServiceServiceClientModel.h>
#include <aws/lex/LexRuntimeServiceLegacyAsyncMacros.h>

namespace Aws
{
namespace LexRuntimeService
{
  /**
   * <p>Amazon Lex provides both build and runtime endpoints. Each endpoint provides
   * a set of operations (API). Your conversational bot uses the runtime API to
   * understand user utterances (user input text or voice). For example, suppose a
   * user says "I want pizza", your bot sends this input to Amazon Lex using the
   * runtime API. Amazon Lex recognizes that the user request is for the OrderPizza
   * intent (one of the intents defined in the bot). Then Amazon Lex engages in user
   * conversation on behalf of the bot to elicit required information (slot values,
   * such as pizza size and crust type), and then performs fulfillment activity (that
   * you configured when you created the bot). You use the build-time API to create
   * and manage your Amazon Lex bot. For a list of build-time operations, see the
   * build-time API, . </p>
   */
  class AWS_LEXRUNTIMESERVICE_API LexRuntimeServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration = Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration(),
                                std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration = Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexRuntimeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration = Aws::LexRuntimeService::LexRuntimeServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexRuntimeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LexRuntimeServiceClient();


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
         * <p>Removes session information for a specified bot, alias, and user ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/DeleteSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest& request) const;


        /**
         * <p>Returns session information for a specified bot, alias, and user
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;


        /**
         * <p> Sends user input (text or speech) to Amazon Lex. Clients use this API to
         * send text and audio requests to Amazon Lex at runtime. Amazon Lex interprets the
         * user input using the machine learning model that it built for the bot. </p>
         * <p>The <code>PostContent</code> operation supports audio input at 8kHz and
         * 16kHz. You can use 8kHz audio to achieve higher speech recognition accuracy in
         * telephone audio applications. </p> <p> In response, Amazon Lex returns the next
         * message to convey to the user. Consider the following example messages: </p>
         * <ul> <li> <p> For a user input "I would like a pizza," Amazon Lex might return a
         * response with a message eliciting slot data (for example,
         * <code>PizzaSize</code>): "What size pizza would you like?". </p> </li> <li> <p>
         * After the user provides all of the pizza order information, Amazon Lex might
         * return a response with a message to get user confirmation: "Order the pizza?".
         * </p> </li> <li> <p> After the user replies "Yes" to the confirmation prompt,
         * Amazon Lex might return a conclusion statement: "Thank you, your cheese pizza
         * has been ordered.". </p> </li> </ul> <p> Not all Amazon Lex messages require a
         * response from the user. For example, conclusion statements do not require a
         * response. Some messages require only a yes or no response. In addition to the
         * <code>message</code>, Amazon Lex provides additional context about the message
         * in the response that you can use to enhance client behavior, such as displaying
         * the appropriate client user interface. Consider the following examples: </p>
         * <ul> <li> <p> If the message is to elicit slot data, Amazon Lex returns the
         * following context information: </p> <ul> <li> <p>
         * <code>x-amz-lex-dialog-state</code> header set to <code>ElicitSlot</code> </p>
         * </li> <li> <p> <code>x-amz-lex-intent-name</code> header set to the intent name
         * in the current context </p> </li> <li> <p> <code>x-amz-lex-slot-to-elicit</code>
         * header set to the slot name for which the <code>message</code> is eliciting
         * information </p> </li> <li> <p> <code>x-amz-lex-slots</code> header set to a map
         * of slots configured for the intent with their current values </p> </li> </ul>
         * </li> <li> <p> If the message is a confirmation prompt, the
         * <code>x-amz-lex-dialog-state</code> header is set to <code>Confirmation</code>
         * and the <code>x-amz-lex-slot-to-elicit</code> header is omitted. </p> </li> <li>
         * <p> If the message is a clarification prompt configured for the intent,
         * indicating that the user intent is not understood, the
         * <code>x-amz-dialog-state</code> header is set to <code>ElicitIntent</code> and
         * the <code>x-amz-slot-to-elicit</code> header is omitted. </p> </li> </ul> <p> In
         * addition, Amazon Lex also returns your application-specific
         * <code>sessionAttributes</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostContent">AWS
         * API Reference</a></p>
         */
        virtual Model::PostContentOutcome PostContent(const Model::PostContentRequest& request) const;


        /**
         * <p>Sends user input to Amazon Lex. Client applications can use this API to send
         * requests to Amazon Lex at runtime. Amazon Lex then interprets the user input
         * using the machine learning model it built for the bot. </p> <p> In response,
         * Amazon Lex returns the next <code>message</code> to convey to the user an
         * optional <code>responseCard</code> to display. Consider the following example
         * messages: </p> <ul> <li> <p> For a user input "I would like a pizza", Amazon Lex
         * might return a response with a message eliciting slot data (for example,
         * PizzaSize): "What size pizza would you like?" </p> </li> <li> <p> After the user
         * provides all of the pizza order information, Amazon Lex might return a response
         * with a message to obtain user confirmation "Proceed with the pizza order?". </p>
         * </li> <li> <p> After the user replies to a confirmation prompt with a "yes",
         * Amazon Lex might return a conclusion statement: "Thank you, your cheese pizza
         * has been ordered.". </p> </li> </ul> <p> Not all Amazon Lex messages require a
         * user response. For example, a conclusion statement does not require a response.
         * Some messages require only a "yes" or "no" user response. In addition to the
         * <code>message</code>, Amazon Lex provides additional context about the message
         * in the response that you might use to enhance client behavior, for example, to
         * display the appropriate client user interface. These are the
         * <code>slotToElicit</code>, <code>dialogState</code>, <code>intentName</code>,
         * and <code>slots</code> fields in the response. Consider the following examples:
         * </p> <ul> <li> <p>If the message is to elicit slot data, Amazon Lex returns the
         * following context information:</p> <ul> <li> <p> <code>dialogState</code> set to
         * ElicitSlot </p> </li> <li> <p> <code>intentName</code> set to the intent name in
         * the current context </p> </li> <li> <p> <code>slotToElicit</code> set to the
         * slot name for which the <code>message</code> is eliciting information </p> </li>
         * <li> <p> <code>slots</code> set to a map of slots, configured for the intent,
         * with currently known values </p> </li> </ul> </li> <li> <p> If the message is a
         * confirmation prompt, the <code>dialogState</code> is set to ConfirmIntent and
         * <code>SlotToElicit</code> is set to null. </p> </li> <li> <p>If the message is a
         * clarification prompt (configured for the intent) that indicates that user intent
         * is not understood, the <code>dialogState</code> is set to ElicitIntent and
         * <code>slotToElicit</code> is set to null. </p> </li> </ul> <p> In addition,
         * Amazon Lex also returns your application-specific
         * <code>sessionAttributes</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         */
        virtual Model::PostTextOutcome PostText(const Model::PostTextRequest& request) const;


        /**
         * <p>Creates a new session or modifies an existing session with an Amazon Lex bot.
         * Use this operation to enable your application to set the state of the bot.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/lex/latest/dg/how-session-api.html">Managing
         * Sessions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PutSession">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSessionOutcome PutSession(const Model::PutSessionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LexRuntimeServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LexRuntimeServiceClientConfiguration& clientConfiguration);

      LexRuntimeServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LexRuntimeServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace LexRuntimeService
} // namespace Aws
