﻿/*
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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/DeleteLexiconResult.h>
#include <aws/polly/model/DescribeVoicesResult.h>
#include <aws/polly/model/GetLexiconResult.h>
#include <aws/polly/model/ListLexiconsResult.h>
#include <aws/polly/model/PutLexiconResult.h>
#include <aws/polly/model/SynthesizeSpeechResult.h>
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

namespace Polly
{

namespace Model
{
        class DeleteLexiconRequest;
        class DescribeVoicesRequest;
        class GetLexiconRequest;
        class ListLexiconsRequest;
        class PutLexiconRequest;
        class SynthesizeSpeechRequest;

        typedef Aws::Utils::Outcome<DeleteLexiconResult, Aws::Client::AWSError<PollyErrors>> DeleteLexiconOutcome;
        typedef Aws::Utils::Outcome<DescribeVoicesResult, Aws::Client::AWSError<PollyErrors>> DescribeVoicesOutcome;
        typedef Aws::Utils::Outcome<GetLexiconResult, Aws::Client::AWSError<PollyErrors>> GetLexiconOutcome;
        typedef Aws::Utils::Outcome<ListLexiconsResult, Aws::Client::AWSError<PollyErrors>> ListLexiconsOutcome;
        typedef Aws::Utils::Outcome<PutLexiconResult, Aws::Client::AWSError<PollyErrors>> PutLexiconOutcome;
        typedef Aws::Utils::Outcome<SynthesizeSpeechResult, Aws::Client::AWSError<PollyErrors>> SynthesizeSpeechOutcome;

        typedef std::future<DeleteLexiconOutcome> DeleteLexiconOutcomeCallable;
        typedef std::future<DescribeVoicesOutcome> DescribeVoicesOutcomeCallable;
        typedef std::future<GetLexiconOutcome> GetLexiconOutcomeCallable;
        typedef std::future<ListLexiconsOutcome> ListLexiconsOutcomeCallable;
        typedef std::future<PutLexiconOutcome> PutLexiconOutcomeCallable;
        typedef std::future<SynthesizeSpeechOutcome> SynthesizeSpeechOutcomeCallable;
} // namespace Model

  class PollyClient;

    typedef std::function<void(const PollyClient*, const Model::DeleteLexiconRequest&, const Model::DeleteLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::DescribeVoicesRequest&, const Model::DescribeVoicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVoicesResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::GetLexiconRequest&, const Model::GetLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::ListLexiconsRequest&, const Model::ListLexiconsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLexiconsResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::PutLexiconRequest&, const Model::PutLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::SynthesizeSpeechRequest&, const Model::SynthesizeSpeechOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SynthesizeSpeechResponseReceivedHandler;

  /**
   * <p>Amazon Polly is a web service that makes it easy to synthesize speech from
   * text.</p> <p>The Amazon Polly service provides API operations for synthesizing
   * high-quality speech from plain text and Speech Synthesis Markup Language (SSML),
   * along with managing pronunciations lexicons that enable you to get the best
   * results for your application domain.</p>
   */
  class AWS_POLLY_API PollyClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PollyClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~PollyClient();

        /**
         * <p>Deletes the specified pronunciation lexicon stored in an AWS Region. A
         * lexicon which has been deleted is not available for speech synthesis, nor is it
         * possible to retrieve it using either the <code>GetLexicon</code> or
         * <code>ListLexicon</code> APIs.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DeleteLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLexiconOutcome DeleteLexicon(const Model::DeleteLexiconRequest& request) const;

        /**
         * <p>Deletes the specified pronunciation lexicon stored in an AWS Region. A
         * lexicon which has been deleted is not available for speech synthesis, nor is it
         * possible to retrieve it using either the <code>GetLexicon</code> or
         * <code>ListLexicon</code> APIs.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DeleteLexicon">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLexiconOutcomeCallable DeleteLexiconCallable(const Model::DeleteLexiconRequest& request) const;

        /**
         * <p>Deletes the specified pronunciation lexicon stored in an AWS Region. A
         * lexicon which has been deleted is not available for speech synthesis, nor is it
         * possible to retrieve it using either the <code>GetLexicon</code> or
         * <code>ListLexicon</code> APIs.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DeleteLexicon">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLexiconAsync(const Model::DeleteLexiconRequest& request, const DeleteLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of voices that are available for use when requesting speech
         * synthesis. Each voice speaks a specified language, is either male or female, and
         * is identified by an ID, which is the ASCII version of the voice name. </p>
         * <p>When synthesizing speech ( <code>SynthesizeSpeech</code> ), you provide the
         * voice ID for the voice you want from the list of voices returned by
         * <code>DescribeVoices</code>.</p> <p>For example, you want your news reader
         * application to read news in a specific language, but giving a user the option to
         * choose the voice. Using the <code>DescribeVoices</code> operation you can
         * provide the user with a list of available voices to select from.</p> <p> You can
         * optionally specify a language code to filter the available voices. For example,
         * if you specify <code>en-US</code>, the operation returns a list of all available
         * US English voices. </p> <p>This operation requires permissions to perform the
         * <code>polly:DescribeVoices</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DescribeVoices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVoicesOutcome DescribeVoices(const Model::DescribeVoicesRequest& request) const;

        /**
         * <p>Returns the list of voices that are available for use when requesting speech
         * synthesis. Each voice speaks a specified language, is either male or female, and
         * is identified by an ID, which is the ASCII version of the voice name. </p>
         * <p>When synthesizing speech ( <code>SynthesizeSpeech</code> ), you provide the
         * voice ID for the voice you want from the list of voices returned by
         * <code>DescribeVoices</code>.</p> <p>For example, you want your news reader
         * application to read news in a specific language, but giving a user the option to
         * choose the voice. Using the <code>DescribeVoices</code> operation you can
         * provide the user with a list of available voices to select from.</p> <p> You can
         * optionally specify a language code to filter the available voices. For example,
         * if you specify <code>en-US</code>, the operation returns a list of all available
         * US English voices. </p> <p>This operation requires permissions to perform the
         * <code>polly:DescribeVoices</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DescribeVoices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVoicesOutcomeCallable DescribeVoicesCallable(const Model::DescribeVoicesRequest& request) const;

        /**
         * <p>Returns the list of voices that are available for use when requesting speech
         * synthesis. Each voice speaks a specified language, is either male or female, and
         * is identified by an ID, which is the ASCII version of the voice name. </p>
         * <p>When synthesizing speech ( <code>SynthesizeSpeech</code> ), you provide the
         * voice ID for the voice you want from the list of voices returned by
         * <code>DescribeVoices</code>.</p> <p>For example, you want your news reader
         * application to read news in a specific language, but giving a user the option to
         * choose the voice. Using the <code>DescribeVoices</code> operation you can
         * provide the user with a list of available voices to select from.</p> <p> You can
         * optionally specify a language code to filter the available voices. For example,
         * if you specify <code>en-US</code>, the operation returns a list of all available
         * US English voices. </p> <p>This operation requires permissions to perform the
         * <code>polly:DescribeVoices</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DescribeVoices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVoicesAsync(const Model::DescribeVoicesRequest& request, const DescribeVoicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the content of the specified pronunciation lexicon stored in an AWS
         * Region. For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLexiconOutcome GetLexicon(const Model::GetLexiconRequest& request) const;

        /**
         * <p>Returns the content of the specified pronunciation lexicon stored in an AWS
         * Region. For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLexiconOutcomeCallable GetLexiconCallable(const Model::GetLexiconRequest& request) const;

        /**
         * <p>Returns the content of the specified pronunciation lexicon stored in an AWS
         * Region. For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLexiconAsync(const Model::GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of pronunciation lexicons stored in an AWS Region. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexiconsOutcome ListLexicons(const Model::ListLexiconsRequest& request) const;

        /**
         * <p>Returns a list of pronunciation lexicons stored in an AWS Region. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLexiconsOutcomeCallable ListLexiconsCallable(const Model::ListLexiconsRequest& request) const;

        /**
         * <p>Returns a list of pronunciation lexicons stored in an AWS Region. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLexiconsAsync(const Model::ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stores a pronunciation lexicon in an AWS Region. If a lexicon with the same
         * name already exists in the region, it is overwritten by the new lexicon. Lexicon
         * operations have eventual consistency, therefore, it might take some time before
         * the lexicon is available to the SynthesizeSpeech operation.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/PutLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLexiconOutcome PutLexicon(const Model::PutLexiconRequest& request) const;

        /**
         * <p>Stores a pronunciation lexicon in an AWS Region. If a lexicon with the same
         * name already exists in the region, it is overwritten by the new lexicon. Lexicon
         * operations have eventual consistency, therefore, it might take some time before
         * the lexicon is available to the SynthesizeSpeech operation.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/PutLexicon">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLexiconOutcomeCallable PutLexiconCallable(const Model::PutLexiconRequest& request) const;

        /**
         * <p>Stores a pronunciation lexicon in an AWS Region. If a lexicon with the same
         * name already exists in the region, it is overwritten by the new lexicon. Lexicon
         * operations have eventual consistency, therefore, it might take some time before
         * the lexicon is available to the SynthesizeSpeech operation.</p> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/PutLexicon">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLexiconAsync(const Model::PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input
         * must be valid, well-formed SSML. Some alphabets might not be available with all
         * the voices (for example, Cyrillic might not be read at all by English voices)
         * unless phoneme mapping is used. For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
         * it Works</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesizeSpeech">AWS
         * API Reference</a></p>
         */
        virtual Model::SynthesizeSpeechOutcome SynthesizeSpeech(const Model::SynthesizeSpeechRequest& request) const;

        /**
         * <p>Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input
         * must be valid, well-formed SSML. Some alphabets might not be available with all
         * the voices (for example, Cyrillic might not be read at all by English voices)
         * unless phoneme mapping is used. For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
         * it Works</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesizeSpeech">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SynthesizeSpeechOutcomeCallable SynthesizeSpeechCallable(const Model::SynthesizeSpeechRequest& request) const;

        /**
         * <p>Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input
         * must be valid, well-formed SSML. Some alphabets might not be available with all
         * the voices (for example, Cyrillic might not be read at all by English voices)
         * unless phoneme mapping is used. For more information, see <a
         * href="http://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
         * it Works</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesizeSpeech">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SynthesizeSpeechAsync(const Model::SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void DeleteLexiconAsyncHelper(const Model::DeleteLexiconRequest& request, const DeleteLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVoicesAsyncHelper(const Model::DescribeVoicesRequest& request, const DescribeVoicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLexiconAsyncHelper(const Model::GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLexiconsAsyncHelper(const Model::ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLexiconAsyncHelper(const Model::PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SynthesizeSpeechAsyncHelper(const Model::SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Polly
} // namespace Aws
