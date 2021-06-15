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
        LexRuntimeV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns session information for a specified bot, alias, and user.</p> <p>For
         * example, you can use this operation to retrieve session information for a user
         * that has left a long-running session in use.</p> <p>If the bot, alias, or
         * session identifier doesn't exist, Amazon Lex returns a
         * <code>BadRequestException</code>. If the locale doesn't exist or is not enabled
         * for the alias, you receive a <code>BadRequestException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * <p>Returns session information for a specified bot, alias, and user.</p> <p>For
         * example, you can use this operation to retrieve session information for a user
         * that has left a long-running session in use.</p> <p>If the bot, alias, or
         * session identifier doesn't exist, Amazon Lex returns a
         * <code>BadRequestException</code>. If the locale doesn't exist or is not enabled
         * for the alias, you receive a <code>BadRequestException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/GetSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSessionOutcomeCallable GetSessionCallable(const Model::GetSessionRequest& request) const;

        /**
         * <p>Returns session information for a specified bot, alias, and user.</p> <p>For
         * example, you can use this operation to retrieve session information for a user
         * that has left a long-running session in use.</p> <p>If the bot, alias, or
         * session identifier doesn't exist, Amazon Lex returns a
         * <code>BadRequestException</code>. If the locale doesn't exist or is not enabled
         * for the alias, you receive a <code>BadRequestException</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/GetSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSessionAsync(const Model::GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new session or modifies an existing session with an Amazon Lex bot.
         * Use this operation to enable your application to set the state of the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/PutSession">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSessionOutcome PutSession(const Model::PutSessionRequest& request) const;

        /**
         * <p>Creates a new session or modifies an existing session with an Amazon Lex bot.
         * Use this operation to enable your application to set the state of the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/PutSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSessionOutcomeCallable PutSessionCallable(const Model::PutSessionRequest& request) const;

        /**
         * <p>Creates a new session or modifies an existing session with an Amazon Lex bot.
         * Use this operation to enable your application to set the state of the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/PutSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSessionAsync(const Model::PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends user input to Amazon Lex. Client applications use this API to send
         * requests to Amazon Lex at runtime. Amazon Lex then interprets the user input
         * using the machine learning model that it build for the bot.</p> <p>In response,
         * Amazon Lex returns the next message to convey to the user and an optional
         * response card to display.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeText">AWS
         * API Reference</a></p>
         */
        virtual Model::RecognizeTextOutcome RecognizeText(const Model::RecognizeTextRequest& request) const;

        /**
         * <p>Sends user input to Amazon Lex. Client applications use this API to send
         * requests to Amazon Lex at runtime. Amazon Lex then interprets the user input
         * using the machine learning model that it build for the bot.</p> <p>In response,
         * Amazon Lex returns the next message to convey to the user and an optional
         * response card to display.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecognizeTextOutcomeCallable RecognizeTextCallable(const Model::RecognizeTextRequest& request) const;

        /**
         * <p>Sends user input to Amazon Lex. Client applications use this API to send
         * requests to Amazon Lex at runtime. Amazon Lex then interprets the user input
         * using the machine learning model that it build for the bot.</p> <p>In response,
         * Amazon Lex returns the next message to convey to the user and an optional
         * response card to display.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecognizeTextAsync(const Model::RecognizeTextRequest& request, const RecognizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends user input to Amazon Lex. You can send text or speech. Clients use this
         * API to send text and audio requests to Amazon Lex at runtime. Amazon Lex
         * interprets the user input using the machine learning model built for the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeUtterance">AWS
         * API Reference</a></p>
         */
        virtual Model::RecognizeUtteranceOutcome RecognizeUtterance(const Model::RecognizeUtteranceRequest& request) const;

        /**
         * <p>Sends user input to Amazon Lex. You can send text or speech. Clients use this
         * API to send text and audio requests to Amazon Lex at runtime. Amazon Lex
         * interprets the user input using the machine learning model built for the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeUtterance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RecognizeUtteranceOutcomeCallable RecognizeUtteranceCallable(const Model::RecognizeUtteranceRequest& request) const;

        /**
         * <p>Sends user input to Amazon Lex. You can send text or speech. Clients use this
         * API to send text and audio requests to Amazon Lex at runtime. Amazon Lex
         * interprets the user input using the machine learning model built for the
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/RecognizeUtterance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RecognizeUtteranceAsync(const Model::RecognizeUtteranceRequest& request, const RecognizeUtteranceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an HTTP/2 bidirectional event stream that enables you to send audio,
         * text, or DTMF input in real time. After your application starts a conversation,
         * users send input to Amazon Lex as a stream of events. Amazon Lex processes the
         * incoming events and responds with streaming text or audio events. </p>
         * <p/><p><h3>See Also:</h3>   <a
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
        void DeleteSessionAsyncHelper(const Model::DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSessionAsyncHelper(const Model::GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSessionAsyncHelper(const Model::PutSessionRequest& request, const PutSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecognizeTextAsyncHelper(const Model::RecognizeTextRequest& request, const RecognizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RecognizeUtteranceAsyncHelper(const Model::RecognizeUtteranceRequest& request, const RecognizeUtteranceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LexRuntimeV2
} // namespace Aws
