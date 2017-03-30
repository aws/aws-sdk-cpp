/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class PostTextRequest;

        typedef Aws::Utils::Outcome<PostTextResult, Aws::Client::AWSError<LexRuntimeServiceErrors>> PostTextOutcome;

        typedef std::future<PostTextOutcome> PostTextOutcomeCallable;
} // namespace Model

  class LexRuntimeServiceClient;

    typedef std::function<void(const LexRuntimeServiceClient*, const Model::PostTextRequest&, const Model::PostTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostTextResponseReceivedHandler;

  /**
   * <p>Amazon Lex provides both build and runtime endpoints. Each endpoint provides
   * a set of operations (API). Your application uses the runtime API to understand
   * user utterances (user input text or voice). For example, suppose user says "I
   * want pizza", your application sends this input to Amazon Lex using the runtime
   * API. Amazon Lex recognizes that the user request is for the OrderPizza intent
   * (one of the intents defined in the application). Then Amazon Lex engages in user
   * conversation on behalf of the application to elicit required information (slot
   * values, such as pizza size and crust type), and then performs fulfillment
   * activity (that you configured when you created the application). You use the
   * build-time API to create and manage your Amazon Lex applications. For a list of
   * build-time operations, see the build-time API. . </p>
   */
  class AWS_LEXRUNTIMESERVICE_API LexRuntimeServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeServiceClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexRuntimeServiceClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~LexRuntimeServiceClient();

        /**
         * <p>Sends user input text to Amazon Lex at runtime. Amazon Lex uses the machine
         * learning model that the service built for the application to interpret user
         * input. </p> <p> In response, Amazon Lex returns the next message to convey to
         * the user (based on the context of the user interaction) and whether to expect a
         * user response to the message (<code>dialogState</code>). For example, consider
         * the following response messages: </p> <ul> <li> <p>"What pizza toppings would
         * you like?" – In this case, the <code>dialogState</code> would be
         * <code>ElicitSlot</code> (that is, a user response is expected). </p> </li> <li>
         * <p>"Your order has been placed." – In this case, Amazon Lex returns one of the
         * following <code>dialogState</code> values depending on how the intent
         * fulfillment is configured (see <code>fulfillmentActivity</code> in
         * <code>CreateIntent</code>): </p> <ul> <li> <p> <code>FulFilled</code> – The
         * intent fulfillment is configured through a Lambda function. </p> </li> <li> <p>
         * <code>ReadyForFulfilment</code> – The intent's <code>fulfillmentActivity</code>
         * is to simply return the intent data back to the client application. </p> </li>
         * </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         */
        virtual Model::PostTextOutcome PostText(const Model::PostTextRequest& request) const;

        /**
         * <p>Sends user input text to Amazon Lex at runtime. Amazon Lex uses the machine
         * learning model that the service built for the application to interpret user
         * input. </p> <p> In response, Amazon Lex returns the next message to convey to
         * the user (based on the context of the user interaction) and whether to expect a
         * user response to the message (<code>dialogState</code>). For example, consider
         * the following response messages: </p> <ul> <li> <p>"What pizza toppings would
         * you like?" – In this case, the <code>dialogState</code> would be
         * <code>ElicitSlot</code> (that is, a user response is expected). </p> </li> <li>
         * <p>"Your order has been placed." – In this case, Amazon Lex returns one of the
         * following <code>dialogState</code> values depending on how the intent
         * fulfillment is configured (see <code>fulfillmentActivity</code> in
         * <code>CreateIntent</code>): </p> <ul> <li> <p> <code>FulFilled</code> – The
         * intent fulfillment is configured through a Lambda function. </p> </li> <li> <p>
         * <code>ReadyForFulfilment</code> – The intent's <code>fulfillmentActivity</code>
         * is to simply return the intent data back to the client application. </p> </li>
         * </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PostTextOutcomeCallable PostTextCallable(const Model::PostTextRequest& request) const;

        /**
         * <p>Sends user input text to Amazon Lex at runtime. Amazon Lex uses the machine
         * learning model that the service built for the application to interpret user
         * input. </p> <p> In response, Amazon Lex returns the next message to convey to
         * the user (based on the context of the user interaction) and whether to expect a
         * user response to the message (<code>dialogState</code>). For example, consider
         * the following response messages: </p> <ul> <li> <p>"What pizza toppings would
         * you like?" – In this case, the <code>dialogState</code> would be
         * <code>ElicitSlot</code> (that is, a user response is expected). </p> </li> <li>
         * <p>"Your order has been placed." – In this case, Amazon Lex returns one of the
         * following <code>dialogState</code> values depending on how the intent
         * fulfillment is configured (see <code>fulfillmentActivity</code> in
         * <code>CreateIntent</code>): </p> <ul> <li> <p> <code>FulFilled</code> – The
         * intent fulfillment is configured through a Lambda function. </p> </li> <li> <p>
         * <code>ReadyForFulfilment</code> – The intent's <code>fulfillmentActivity</code>
         * is to simply return the intent data back to the client application. </p> </li>
         * </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/PostText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PostTextAsync(const Model::PostTextRequest& request, const PostTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void PostTextAsyncHelper(const Model::PostTextRequest& request, const PostTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LexRuntimeService
} // namespace Aws
