/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/PollyServiceClientModel.h>
#include <aws/polly/PollyLegacyAsyncMacros.h>

namespace Aws
{
namespace Polly
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Aws::Polly::PollyClientConfiguration& clientConfiguration = Aws::Polly::PollyClientConfiguration(),
                    std::shared_ptr<PollyEndpointProviderBase> endpointProvider = Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<PollyEndpointProviderBase> endpointProvider = Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Polly::PollyClientConfiguration& clientConfiguration = Aws::Polly::PollyClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PollyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<PollyEndpointProviderBase> endpointProvider = Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Polly::PollyClientConfiguration& clientConfiguration = Aws::Polly::PollyClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PollyClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PollyClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PollyClient();


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
         * <p>Deletes the specified pronunciation lexicon stored in an Amazon Web Services
         * Region. A lexicon which has been deleted is not available for speech synthesis,
         * nor is it possible to retrieve it using either the <code>GetLexicon</code> or
         * <code>ListLexicon</code> APIs.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/DeleteLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLexiconOutcome DeleteLexicon(const Model::DeleteLexiconRequest& request) const;


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
         * <p>Returns the content of the specified pronunciation lexicon stored in an
         * Amazon Web Services Region. For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/GetLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLexiconOutcome GetLexicon(const Model::GetLexiconRequest& request) const;


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
         * <p>Returns a list of pronunciation lexicons stored in an Amazon Web Services
         * Region. For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListLexicons">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexiconsOutcome ListLexicons(const Model::ListLexiconsRequest& request) const;


        /**
         * <p>Returns a list of SpeechSynthesisTask objects ordered by their creation date.
         * This operation can filter the tasks by their status, for example, allowing users
         * to list only tasks that are completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/ListSpeechSynthesisTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeechSynthesisTasksOutcome ListSpeechSynthesisTasks(const Model::ListSpeechSynthesisTasksRequest& request) const;


        /**
         * <p>Stores a pronunciation lexicon in an Amazon Web Services Region. If a lexicon
         * with the same name already exists in the region, it is overwritten by the new
         * lexicon. Lexicon operations have eventual consistency, therefore, it might take
         * some time before the lexicon is available to the SynthesizeSpeech operation.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/polly/latest/dg/managing-lexicons.html">Managing
         * Lexicons</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/PutLexicon">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLexiconOutcome PutLexicon(const Model::PutLexiconRequest& request) const;


        /**
         * <p>Allows the creation of an asynchronous synthesis task, by starting a new
         * <code>SpeechSynthesisTask</code>. This operation requires all the standard
         * information needed for speech synthesis, plus the name of an Amazon S3 bucket
         * for the service to store the output of the synthesis task and two optional
         * parameters (<code>OutputS3KeyPrefix</code> and <code>SnsTopicArn</code>). Once
         * the synthesis task is created, this operation will return a
         * <code>SpeechSynthesisTask</code> object, which will include an identifier of
         * this task as well as the current status. The <code>SpeechSynthesisTask</code>
         * object is available for 72 hours after starting the asynchronous synthesis
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeechSynthesisTaskOutcome StartSpeechSynthesisTask(const Model::StartSpeechSynthesisTaskRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PollyEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const PollyClientConfiguration& clientConfiguration);

      PollyClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PollyEndpointProviderBase> m_endpointProvider;
  };

} // namespace Polly
} // namespace Aws
