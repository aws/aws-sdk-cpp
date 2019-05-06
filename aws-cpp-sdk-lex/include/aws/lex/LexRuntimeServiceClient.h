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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lex/model/PostContentResult.h>
#include <aws/lex/model/PostTextResult.h>
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

namespace LexRuntimeService
{

namespace Model
{
        class PostContentRequest;
        class PostTextRequest;

        typedef Aws::Utils::Outcome<PostContentResult, Aws::Client::AWSError<LexRuntimeServiceErrors>> PostContentOutcome;
        typedef Aws::Utils::Outcome<PostTextResult, Aws::Client::AWSError<LexRuntimeServiceErrors>> PostTextOutcome;

        typedef std::future<PostContentOutcome> PostContentOutcomeCallable;
        typedef std::future<PostTextOutcome> PostTextOutcomeCallable;
} // namespace Model

  class LexRuntimeServiceClient;

    typedef std::function<void(const LexRuntimeServiceClient*, const Model::PostContentRequest&, const Model::PostContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostContentResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeServiceClient*, const Model::PostTextRequest&, const Model::PostTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostTextResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexRuntimeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LexRuntimeServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Lex Runtime Service"; }


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
         * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostContent">AWS
         * API Reference</a></p>
         */
        virtual Model::PostContentOutcome PostContent(const Model::PostContentRequest& request) const;

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
         * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostContentOutcomeCallable PostContentCallable(const Model::PostContentRequest& request) const;

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
         * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostContentAsync(const Model::PostContentRequest& request, const PostContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends user input (text-only) to Amazon Lex. Client applications can use this
         * API to send requests to Amazon Lex at runtime. Amazon Lex then interprets the
         * user input using the machine learning model it built for the bot. </p> <p> In
         * response, Amazon Lex returns the next <code>message</code> to convey to the user
         * an optional <code>responseCard</code> to display. Consider the following example
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
         * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         */
        virtual Model::PostTextOutcome PostText(const Model::PostTextRequest& request) const;

        /**
         * <p>Sends user input (text-only) to Amazon Lex. Client applications can use this
         * API to send requests to Amazon Lex at runtime. Amazon Lex then interprets the
         * user input using the machine learning model it built for the bot. </p> <p> In
         * response, Amazon Lex returns the next <code>message</code> to convey to the user
         * an optional <code>responseCard</code> to display. Consider the following example
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
         * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostTextOutcomeCallable PostTextCallable(const Model::PostTextRequest& request) const;

        /**
         * <p>Sends user input (text-only) to Amazon Lex. Client applications can use this
         * API to send requests to Amazon Lex at runtime. Amazon Lex then interprets the
         * user input using the machine learning model it built for the bot. </p> <p> In
         * response, Amazon Lex returns the next <code>message</code> to convey to the user
         * an optional <code>responseCard</code> to display. Consider the following example
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
         * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html">Managing
         * Conversation Context</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostTextAsync(const Model::PostTextRequest& request, const PostTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void PostContentAsyncHelper(const Model::PostContentRequest& request, const PostContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PostTextAsyncHelper(const Model::PostTextRequest& request, const PostTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LexRuntimeService
} // namespace Aws
