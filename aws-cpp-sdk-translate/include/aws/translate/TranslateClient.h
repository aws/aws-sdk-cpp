/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/translate/TranslateServiceClientModel.h>
#include <aws/translate/TranslateLegacyAsyncMacros.h>

namespace Aws
{
namespace Translate
{
  /**
   * <p>Provides language translation for input text in the source language to the
   * specified target language.</p>
   */
  class AWS_TRANSLATE_API TranslateClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Translate::TranslateClientConfiguration& clientConfiguration = Aws::Translate::TranslateClientConfiguration(),
                        std::shared_ptr<TranslateEndpointProviderBase> endpointProvider = Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<TranslateEndpointProviderBase> endpointProvider = Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Translate::TranslateClientConfiguration& clientConfiguration = Aws::Translate::TranslateClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranslateClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<TranslateEndpointProviderBase> endpointProvider = Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Translate::TranslateClientConfiguration& clientConfiguration = Aws::Translate::TranslateClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranslateClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TranslateClient();


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
         * <p>Creates a parallel data resource in Amazon Translate by importing an input
         * file from Amazon S3. Parallel data files contain examples that show how you want
         * segments of text to be translated. By adding parallel data, you can influence
         * the style, tone, and word choice in your translation output.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/CreateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParallelDataOutcome CreateParallelData(const Model::CreateParallelDataRequest& request) const;


        /**
         * <p>Deletes a parallel data resource in Amazon Translate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParallelDataOutcome DeleteParallelData(const Model::DeleteParallelDataRequest& request) const;


        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTerminologyOutcome DeleteTerminology(const Model::DeleteTerminologyRequest& request) const;


        /**
         * <p>Gets the properties associated with an asynchronous batch translation job
         * including name, ID, status, source and target languages, input/output S3
         * buckets, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DescribeTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTextTranslationJobOutcome DescribeTextTranslationJob(const Model::DescribeTextTranslationJobRequest& request) const;


        /**
         * <p>Provides information about a parallel data resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParallelDataOutcome GetParallelData(const Model::GetParallelDataRequest& request) const;


        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTerminologyOutcome GetTerminology(const Model::GetTerminologyRequest& request) const;


        /**
         * <p>Creates or updates a custom terminology, depending on whether one already
         * exists for the given terminology name. Importing a terminology with the same
         * name as an existing one will merge the terminologies based on the chosen merge
         * strategy. The only supported merge strategy is OVERWRITE, where the imported
         * terminology overwrites the existing terminology of the same name.</p> <p>If you
         * import a terminology that overwrites an existing one, the new terminology takes
         * up to 10 minutes to fully propagate. After that, translations have access to the
         * new terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportTerminologyOutcome ImportTerminology(const Model::ImportTerminologyRequest& request) const;


        /**
         * <p>Provides a list of languages (RFC-5646 codes and names) that Amazon Translate
         * supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListLanguages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLanguagesOutcome ListLanguages(const Model::ListLanguagesRequest& request) const;


        /**
         * <p>Provides a list of your parallel data resources in Amazon
         * Translate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParallelDataOutcome ListParallelData(const Model::ListParallelDataRequest& request) const;


        /**
         * <p>Lists all tags associated with a given Amazon Translate resource. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
         * your resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTerminologiesOutcome ListTerminologies(const Model::ListTerminologiesRequest& request) const;


        /**
         * <p>Gets a list of the batch translation jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTextTranslationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTextTranslationJobsOutcome ListTextTranslationJobs(const Model::ListTextTranslationJobsRequest& request) const;


        /**
         * <p>Starts an asynchronous batch translation job. Use batch translation jobs to
         * translate large volumes of text across multiple documents at once. For batch
         * translation, the input documents must share the same source language. You can
         * specify one or more target languages. Batch translation translates each input
         * document into each of the target languages. For more information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/async.html">Asynchronous
         * batch processing</a> </p> <p>Batch translation jobs can be described with the
         * <a>DescribeTextTranslationJob</a> operation, listed with the
         * <a>ListTextTranslationJobs</a> operation, and stopped with the
         * <a>StopTextTranslationJob</a> operation.</p>  <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StartTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTextTranslationJobOutcome StartTextTranslationJob(const Model::StartTextTranslationJobRequest& request) const;


        /**
         * <p>Stops an asynchronous batch translation job that is in progress.</p> <p>If
         * the job's state is <code>IN_PROGRESS</code>, the job will be marked for
         * termination and put into the <code>STOP_REQUESTED</code> state. If the job
         * completes before it can be stopped, it is put into the <code>COMPLETED</code>
         * state. Otherwise, the job is put into the <code>STOPPED</code> state.</p>
         * <p>Asynchronous batch translation jobs are started with the
         * <a>StartTextTranslationJob</a> operation. You can use the
         * <a>DescribeTextTranslationJob</a> or <a>ListTextTranslationJobs</a> operations
         * to get a batch translation job's <code>JobId</code>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StopTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTextTranslationJobOutcome StopTextTranslationJob(const Model::StopTextTranslationJobRequest& request) const;


        /**
         * <p>Associates a specific tag with a resource. A tag is a key-value pair that
         * adds as a metadata to a resource. For more information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
         * your resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Translates input text from the source language to the target language. For a
         * list of available languages and language codes, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/what-is-languages.html">Supported
         * languages</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslateTextOutcome TranslateText(const Model::TranslateTextRequest& request) const;


        /**
         * <p>Removes a specific tag associated with an Amazon Translate resource. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
         * your resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a previously created parallel data resource by importing a new input
         * file from Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UpdateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParallelDataOutcome UpdateParallelData(const Model::UpdateParallelDataRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TranslateEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const TranslateClientConfiguration& clientConfiguration);

      TranslateClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TranslateEndpointProviderBase> m_endpointProvider;
  };

} // namespace Translate
} // namespace Aws
