/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/LexRuntimeV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-runtime/model/DeleteSessionResult.h>
#include <aws/lexv2-runtime/model/GetSessionResult.h>
#include <aws/lexv2-runtime/model/PutSessionResult.h>
#include <aws/lexv2-runtime/model/RecognizeTextResult.h>
#include <aws/lexv2-runtime/model/RecognizeUtteranceResult.h>
#include <aws/core/NoResult.h>
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
namespace Event
{
  class EventEncoderStream;
}

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

namespace LexRuntimeV2
{

namespace Model
{
        class DeleteSessionRequest;
        class GetSessionRequest;
        class PutSessionRequest;
        class RecognizeTextRequest;
        class RecognizeUtteranceRequest;
        class StartConversationRequest;
        class StartConversationRequestEventStream;

        typedef Aws::Utils::Outcome<DeleteSessionResult, LexRuntimeV2Error> DeleteSessionOutcome;
        typedef Aws::Utils::Outcome<GetSessionResult, LexRuntimeV2Error> GetSessionOutcome;
        typedef Aws::Utils::Outcome<PutSessionResult, LexRuntimeV2Error> PutSessionOutcome;
        typedef Aws::Utils::Outcome<RecognizeTextResult, LexRuntimeV2Error> RecognizeTextOutcome;
        typedef Aws::Utils::Outcome<RecognizeUtteranceResult, LexRuntimeV2Error> RecognizeUtteranceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LexRuntimeV2Error> StartConversationOutcome;

        typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
        typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
        typedef std::future<PutSessionOutcome> PutSessionOutcomeCallable;
        typedef std::future<RecognizeTextOutcome> RecognizeTextOutcomeCallable;
        typedef std::future<RecognizeUtteranceOutcome> RecognizeUtteranceOutcomeCallable;
        typedef std::future<StartConversationOutcome> StartConversationOutcomeCallable;
} // namespace Model

  class LexRuntimeV2Client;

    typedef std::function<void(const LexRuntimeV2Client*, const Model::DeleteSessionRequest&, const Model::DeleteSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::PutSessionRequest&, Model::PutSessionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSessionResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::RecognizeTextRequest&, const Model::RecognizeTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecognizeTextResponseReceivedHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::RecognizeUtteranceRequest&, Model::RecognizeUtteranceOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RecognizeUtteranceResponseReceivedHandler;
    typedef std::function<void(Model::StartConversationRequestEventStream&)> StartConversationStreamReadyHandler;
    typedef std::function<void(const LexRuntimeV2Client*, const Model::StartConversationRequest&, const Model::StartConversationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConversationResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_LEXRUNTIMEV2_API LexRuntimeV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexRuntimeV2Client(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexRuntimeV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LexRuntimeV2Client();


        /**
         * <p>Removes session information for a specified bot, alias, and user ID. </p>
         * <p>You can use this operation to restart a conversation with a bot. When you
         * remove a session, the entire history of the session is removed so that you can
         * start again.</p> <p>You don't need to delete a session. Sessions have a time
         * limit and will expire. Set the session time limit when you create the bot. The
         * default is 5 minutes, but you can specify anything between 1 minute and 24
         * hours.</p> <p>If you specify a bot or alias ID that doesn't exist, you receive a
         * <code>BadRequestException.</code> </p> <p>If the locale doesn't exist in the
         * bot, or if the locale hasn't been enables for the alias, you receive a
         * <code>BadRequestException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/DeleteSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request) const;

        /**
         * An Async wrapper for DeleteSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns session information for a specified bot, alias, and user.</p> <p>For
         * example, you can use this operation to retrieve session information for a user
         * that has left a long-running session in use.</p> <p>If the bot, alias, or
         * session identifier doesn't exist, Amazon Lex V2 returns a
         * <code>BadRequestException</code>. If the locale doesn't exist or is not enabled
         * for the alias, you receive a <code>BadRequestException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSessionOutcomeCallable GetSessionCallable(const Model::GetSessionRequest& request) const;

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSessionAsync(const Model::GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new session or modifies an existing session with an Amazon Lex V2
         * bot. Use this operation to enable your application to set the state of the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/PutSession">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSessionOutcome PutSession(const Model::PutSessionRequest& request) const;

        /**
         * A Callable wrapper for PutSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSessionOutcomeCallable PutSessionCallable(const Model::PutSessionRequest& request) const;

        /**
         * An Async wrapper for PutSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSessionAsync(const Model::PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends user input to Amazon Lex V2. Client applications use this API to send
         * requests to Amazon Lex V2 at runtime. Amazon Lex V2 then interprets the user
         * input using the machine learning model that it build for the bot.</p> <p>In
         * response, Amazon Lex V2 returns the next message to convey to the user and an
         * optional response card to display.</p> <p>If the optional post-fulfillment
         * response is specified, the messages are returned as follows. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_PostFulfillmentStatusSpecification.html">PostFulfillmentStatusSpecification</a>.</p>
         * <ul> <li> <p> <b>Success message</b> - Returned if the Lambda function completes
         * successfully and the intent state is fulfilled or ready fulfillment if the
         * message is present.</p> </li> <li> <p> <b>Failed message</b> - The failed
         * message is returned if the Lambda function throws an exception or if the Lambda
         * function returns a failed intent state without a message.</p> </li> <li> <p>
         * <b>Timeout message</b> - If you don't configure a timeout message and a timeout,
         * and the Lambda function doesn't return within 30 seconds, the timeout message is
         * returned. If you configure a timeout, the timeout message is returned when the
         * period times out. </p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/streaming-progress.html#progress-complete.html">Completion
         * message</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeText">AWS
         * API Reference</a></p>
         */
        virtual Model::RecognizeTextOutcome RecognizeText(const Model::RecognizeTextRequest& request) const;

        /**
         * A Callable wrapper for RecognizeText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecognizeTextOutcomeCallable RecognizeTextCallable(const Model::RecognizeTextRequest& request) const;

        /**
         * An Async wrapper for RecognizeText that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecognizeTextAsync(const Model::RecognizeTextRequest& request, const RecognizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends user input to Amazon Lex V2. You can send text or speech. Clients use
         * this API to send text and audio requests to Amazon Lex V2 at runtime. Amazon Lex
         * V2 interprets the user input using the machine learning model built for the
         * bot.</p> <p>The following request fields must be compressed with gzip and then
         * base64 encoded before you send them to Amazon Lex V2. </p> <ul> <li>
         * <p>requestAttributes</p> </li> <li> <p>sessionState</p> </li> </ul> <p>The
         * following response fields are compressed using gzip and then base64 encoded by
         * Amazon Lex V2. Before you can use these fields, you must decode and decompress
         * them. </p> <ul> <li> <p>inputTranscript</p> </li> <li> <p>interpretations</p>
         * </li> <li> <p>messages</p> </li> <li> <p>requestAttributes</p> </li> <li>
         * <p>sessionState</p> </li> </ul> <p>The example contains a Java application that
         * compresses and encodes a Java object to send to Amazon Lex V2, and a second that
         * decodes and decompresses a response from Amazon Lex V2.</p> <p>If the optional
         * post-fulfillment response is specified, the messages are returned as follows.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_PostFulfillmentStatusSpecification.html">PostFulfillmentStatusSpecification</a>.</p>
         * <ul> <li> <p> <b>Success message</b> - Returned if the Lambda function completes
         * successfully and the intent state is fulfilled or ready fulfillment if the
         * message is present.</p> </li> <li> <p> <b>Failed message</b> - The failed
         * message is returned if the Lambda function throws an exception or if the Lambda
         * function returns a failed intent state without a message.</p> </li> <li> <p>
         * <b>Timeout message</b> - If you don't configure a timeout message and a timeout,
         * and the Lambda function doesn't return within 30 seconds, the timeout message is
         * returned. If you configure a timeout, the timeout message is returned when the
         * period times out. </p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/streaming-progress.html#progress-complete.html">Completion
         * message</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeUtterance">AWS
         * API Reference</a></p>
         */
        virtual Model::RecognizeUtteranceOutcome RecognizeUtterance(const Model::RecognizeUtteranceRequest& request) const;

        /**
         * A Callable wrapper for RecognizeUtterance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecognizeUtteranceOutcomeCallable RecognizeUtteranceCallable(const Model::RecognizeUtteranceRequest& request) const;

        /**
         * An Async wrapper for RecognizeUtterance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecognizeUtteranceAsync(const Model::RecognizeUtteranceRequest& request, const RecognizeUtteranceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an HTTP/2 bidirectional event stream that enables you to send audio,
         * text, or DTMF input in real time. After your application starts a conversation,
         * users send input to Amazon Lex V2 as a stream of events. Amazon Lex V2 processes
         * the incoming events and responds with streaming text or audio events. </p>
         * <p>Audio input must be in the following format: <code>audio/lpcm
         * sample-rate=8000 sample-size-bits=16 channel-count=1;
         * is-big-endian=false</code>.</p> <p>If the optional post-fulfillment response is
         * specified, the messages are returned as follows. For more information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_PostFulfillmentStatusSpecification.html">PostFulfillmentStatusSpecification</a>.</p>
         * <ul> <li> <p> <b>Success message</b> - Returned if the Lambda function completes
         * successfully and the intent state is fulfilled or ready fulfillment if the
         * message is present.</p> </li> <li> <p> <b>Failed message</b> - The failed
         * message is returned if the Lambda function throws an exception or if the Lambda
         * function returns a failed intent state without a message.</p> </li> <li> <p>
         * <b>Timeout message</b> - If you don't configure a timeout message and a timeout,
         * and the Lambda function doesn't return within 30 seconds, the timeout message is
         * returned. If you configure a timeout, the timeout message is returned when the
         * period times out. </p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/streaming-progress.html#progress-complete.html">Completion
         * message</a>.</p> <p>If the optional update message is configured, it is played
         * at the specified frequency while the Lambda function is running and the update
         * message state is active. If the fulfillment update message is not active, the
         * Lambda function runs with a 30 second timeout. </p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/streaming-progress.html#progress-update.html">Update
         * message </a> </p> <p>The <code>StartConversation</code> operation is supported
         * only in the following SDKs: </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/goto/SdkForCpp/runtime.lex.v2-2020-08-07/StartConversation">AWS
         * SDK for C++</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/goto/SdkForJavaV2/runtime.lex.v2-2020-08-07/StartConversation">AWS
         * SDK for Java V2</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/goto/SdkForRubyV3/runtime.lex.v2-2020-08-07/StartConversation">AWS
         * SDK for Ruby V3</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/StartConversation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The responseHandler is triggered when the request is finished.
         */
        virtual void StartConversationAsync(Model::StartConversationRequest& request,
                const StartConversationStreamReadyHandler& streamReadyHandler,
                const StartConversationResponseReceivedHandler& responseHandler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LexRuntimeV2
} // namespace Aws
