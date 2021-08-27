/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/polly/model/GetSpeechSynthesisTaskResult.h>
#include <aws/polly/model/ListLexiconsResult.h>
#include <aws/polly/model/ListSpeechSynthesisTasksResult.h>
#include <aws/polly/model/PutLexiconResult.h>
#include <aws/polly/model/StartSpeechSynthesisTaskResult.h>
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
        class GetSpeechSynthesisTaskRequest;
        class ListLexiconsRequest;
        class ListSpeechSynthesisTasksRequest;
        class PutLexiconRequest;
        class StartSpeechSynthesisTaskRequest;
        class SynthesizeSpeechRequest;

        typedef Aws::Utils::Outcome<DeleteLexiconResult, PollyError> DeleteLexiconOutcome;
        typedef Aws::Utils::Outcome<DescribeVoicesResult, PollyError> DescribeVoicesOutcome;
        typedef Aws::Utils::Outcome<GetLexiconResult, PollyError> GetLexiconOutcome;
        typedef Aws::Utils::Outcome<GetSpeechSynthesisTaskResult, PollyError> GetSpeechSynthesisTaskOutcome;
        typedef Aws::Utils::Outcome<ListLexiconsResult, PollyError> ListLexiconsOutcome;
        typedef Aws::Utils::Outcome<ListSpeechSynthesisTasksResult, PollyError> ListSpeechSynthesisTasksOutcome;
        typedef Aws::Utils::Outcome<PutLexiconResult, PollyError> PutLexiconOutcome;
        typedef Aws::Utils::Outcome<StartSpeechSynthesisTaskResult, PollyError> StartSpeechSynthesisTaskOutcome;
        typedef Aws::Utils::Outcome<SynthesizeSpeechResult, PollyError> SynthesizeSpeechOutcome;

        typedef std::future<DeleteLexiconOutcome> DeleteLexiconOutcomeCallable;
        typedef std::future<DescribeVoicesOutcome> DescribeVoicesOutcomeCallable;
        typedef std::future<GetLexiconOutcome> GetLexiconOutcomeCallable;
        typedef std::future<GetSpeechSynthesisTaskOutcome> GetSpeechSynthesisTaskOutcomeCallable;
        typedef std::future<ListLexiconsOutcome> ListLexiconsOutcomeCallable;
        typedef std::future<ListSpeechSynthesisTasksOutcome> ListSpeechSynthesisTasksOutcomeCallable;
        typedef std::future<PutLexiconOutcome> PutLexiconOutcomeCallable;
        typedef std::future<StartSpeechSynthesisTaskOutcome> StartSpeechSynthesisTaskOutcomeCallable;
        typedef std::future<SynthesizeSpeechOutcome> SynthesizeSpeechOutcomeCallable;
} // namespace Model

  class PollyClient;

    typedef std::function<void(const PollyClient*, const Model::DeleteLexiconRequest&, const Model::DeleteLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::DescribeVoicesRequest&, const Model::DescribeVoicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVoicesResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::GetLexiconRequest&, const Model::GetLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::GetSpeechSynthesisTaskRequest&, const Model::GetSpeechSynthesisTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSpeechSynthesisTaskResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::ListLexiconsRequest&, const Model::ListLexiconsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLexiconsResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::ListSpeechSynthesisTasksRequest&, const Model::ListSpeechSynthesisTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpeechSynthesisTasksResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::PutLexiconRequest&, const Model::PutLexiconOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLexiconResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::StartSpeechSynthesisTaskRequest&, const Model::StartSpeechSynthesisTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSpeechSynthesisTaskResponseReceivedHandler;
    typedef std::function<void(const PollyClient*, const Model::SynthesizeSpeechRequest&, Model::SynthesizeSpeechOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SynthesizeSpeechResponseReceivedHandler;

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
        PollyClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PollyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PollyClient();


        /**
         * <p>Deletes the specified pronunciation lexicon stored in an AWS Region. A
         * lexicon which has been deleted is not available for speech synthesis, nor is it
         * possible to retrieve it using either the <code>GetLexicon</code> or
         * <code>ListLexicon</code> APIs.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLexiconOutcome GetLexicon(const Model::GetLexiconRequest& request) const;

        /**
         * <p>Returns the content of the specified pronunciation lexicon stored in an AWS
         * Region. For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLexiconAsync(const Model::GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specific SpeechSynthesisTask object based on its TaskID. This
         * object contains information about the given speech synthesis task, including the
         * status of the task, and a link to the S3 bucket containing the output of the
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetSpeechSynthesisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpeechSynthesisTaskOutcome GetSpeechSynthesisTask(const Model::GetSpeechSynthesisTaskRequest& request) const;

        /**
         * <p>Retrieves a specific SpeechSynthesisTask object based on its TaskID. This
         * object contains information about the given speech synthesis task, including the
         * status of the task, and a link to the S3 bucket containing the output of the
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetSpeechSynthesisTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSpeechSynthesisTaskOutcomeCallable GetSpeechSynthesisTaskCallable(const Model::GetSpeechSynthesisTaskRequest& request) const;

        /**
         * <p>Retrieves a specific SpeechSynthesisTask object based on its TaskID. This
         * object contains information about the given speech synthesis task, including the
         * status of the task, and a link to the S3 bucket containing the output of the
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetSpeechSynthesisTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSpeechSynthesisTaskAsync(const Model::GetSpeechSynthesisTaskRequest& request, const GetSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of pronunciation lexicons stored in an AWS Region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexiconsOutcome ListLexicons(const Model::ListLexiconsRequest& request) const;

        /**
         * <p>Returns a list of pronunciation lexicons stored in an AWS Region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLexiconsAsync(const Model::ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of SpeechSynthesisTask objects ordered by their creation date.
         * This operation can filter the tasks by their status, for example, allowing users
         * to list only tasks that are completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListSpeechSynthesisTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeechSynthesisTasksOutcome ListSpeechSynthesisTasks(const Model::ListSpeechSynthesisTasksRequest& request) const;

        /**
         * <p>Returns a list of SpeechSynthesisTask objects ordered by their creation date.
         * This operation can filter the tasks by their status, for example, allowing users
         * to list only tasks that are completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListSpeechSynthesisTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSpeechSynthesisTasksOutcomeCallable ListSpeechSynthesisTasksCallable(const Model::ListSpeechSynthesisTasksRequest& request) const;

        /**
         * <p>Returns a list of SpeechSynthesisTask objects ordered by their creation date.
         * This operation can filter the tasks by their status, for example, allowing users
         * to list only tasks that are completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListSpeechSynthesisTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSpeechSynthesisTasksAsync(const Model::ListSpeechSynthesisTasksRequest& request, const ListSpeechSynthesisTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stores a pronunciation lexicon in an AWS Region. If a lexicon with the same
         * name already exists in the region, it is overwritten by the new lexicon. Lexicon
         * operations have eventual consistency, therefore, it might take some time before
         * the lexicon is available to the SynthesizeSpeech operation.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/PutLexicon">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLexiconAsync(const Model::PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the creation of an asynchronous synthesis task, by starting a new
         * <code>SpeechSynthesisTask</code>. This operation requires all the standard
         * information needed for speech synthesis, plus the name of an Amazon S3 bucket
         * for the service to store the output of the synthesis task and two optional
         * parameters (OutputS3KeyPrefix and SnsTopicArn). Once the synthesis task is
         * created, this operation will return a SpeechSynthesisTask object, which will
         * include an identifier of this task as well as the current status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeechSynthesisTaskOutcome StartSpeechSynthesisTask(const Model::StartSpeechSynthesisTaskRequest& request) const;

        /**
         * <p>Allows the creation of an asynchronous synthesis task, by starting a new
         * <code>SpeechSynthesisTask</code>. This operation requires all the standard
         * information needed for speech synthesis, plus the name of an Amazon S3 bucket
         * for the service to store the output of the synthesis task and two optional
         * parameters (OutputS3KeyPrefix and SnsTopicArn). Once the synthesis task is
         * created, this operation will return a SpeechSynthesisTask object, which will
         * include an identifier of this task as well as the current status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSpeechSynthesisTaskOutcomeCallable StartSpeechSynthesisTaskCallable(const Model::StartSpeechSynthesisTaskRequest& request) const;

        /**
         * <p>Allows the creation of an asynchronous synthesis task, by starting a new
         * <code>SpeechSynthesisTask</code>. This operation requires all the standard
         * information needed for speech synthesis, plus the name of an Amazon S3 bucket
         * for the service to store the output of the synthesis task and two optional
         * parameters (OutputS3KeyPrefix and SnsTopicArn). Once the synthesis task is
         * created, this operation will return a SpeechSynthesisTask object, which will
         * include an identifier of this task as well as the current status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSpeechSynthesisTaskAsync(const Model::StartSpeechSynthesisTaskRequest& request, const StartSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Synthesizes UTF-8 input, plain text or SSML, to a stream of bytes. SSML input
         * must be valid, well-formed SSML. Some alphabets might not be available with all
         * the voices (for example, Cyrillic might not be read at all by English voices)
         * unless phoneme mapping is used. For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
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
         * href="https://docs.aws.amazon.com/polly/latest/dg/how-text-to-speech-works.html">How
         * it Works</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesizeSpeech">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SynthesizeSpeechAsync(const Model::SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteLexiconAsyncHelper(const Model::DeleteLexiconRequest& request, const DeleteLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVoicesAsyncHelper(const Model::DescribeVoicesRequest& request, const DescribeVoicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLexiconAsyncHelper(const Model::GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSpeechSynthesisTaskAsyncHelper(const Model::GetSpeechSynthesisTaskRequest& request, const GetSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLexiconsAsyncHelper(const Model::ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSpeechSynthesisTasksAsyncHelper(const Model::ListSpeechSynthesisTasksRequest& request, const ListSpeechSynthesisTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLexiconAsyncHelper(const Model::PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartSpeechSynthesisTaskAsyncHelper(const Model::StartSpeechSynthesisTaskRequest& request, const StartSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SynthesizeSpeechAsyncHelper(const Model::SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Polly
} // namespace Aws
