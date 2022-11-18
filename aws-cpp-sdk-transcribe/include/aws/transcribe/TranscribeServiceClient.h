/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribe/TranscribeServiceServiceClientModel.h>
#include <aws/transcribe/TranscribeServiceLegacyAsyncMacros.h>

namespace Aws
{
namespace TranscribeService
{
  /**
   * <p>Amazon Transcribe offers three main types of batch transcription:
   * <b>Standard</b>, <b>Medical</b>, and <b>Call Analytics</b>.</p> <ul> <li> <p>
   * <b>Standard transcriptions</b> are the most common option. Refer to for
   * details.</p> </li> <li> <p> <b>Medical transcriptions</b> are tailored to
   * medical professionals and incorporate medical terms. A common use case for this
   * service is transcribing doctor-patient dialogue into after-visit notes. Refer to
   * for details.</p> </li> <li> <p> <b>Call Analytics transcriptions</b> are
   * designed for use with call center audio on two different channels; if you're
   * looking for insight into customer service calls, use this option. Refer to for
   * details.</p> </li> </ul>
   */
  class AWS_TRANSCRIBESERVICE_API TranscribeServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration = Aws::TranscribeService::TranscribeServiceClientConfiguration(),
                                std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration = Aws::TranscribeService::TranscribeServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<TranscribeServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<TranscribeServiceEndpointProvider>(ALLOCATION_TAG),
                                const Aws::TranscribeService::TranscribeServiceClientConfiguration& clientConfiguration = Aws::TranscribeService::TranscribeServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TranscribeServiceClient();


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
         * <p>Creates a new Call Analytics category.</p> <p>All categories are
         * automatically applied to your Call Analytics jobs. Note that in order to apply
         * your categories to your jobs, you must create them before submitting your job
         * request, as categories cannot be applied retroactively.</p> <p>Call Analytics
         * categories are composed of rules. For each category, you must create between 1
         * and 20 rules. Rules can include these parameters: , , , and .</p> <p>To update
         * an existing category, see .</p> <p>To learn more about:</p> <ul> <li> <p>Call
         * Analytics categories, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html">Creating
         * categories</a> </p> </li> <li> <p>Using rules, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html#call-analytics-create-categories-rules">Rule
         * criteria</a> and refer to the data type</p> </li> <li> <p>Call Analytics, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Analyzing
         * call center audio with Call Analytics</a> </p> </li> </ul><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCallAnalyticsCategoryOutcome CreateCallAnalyticsCategory(const Model::CreateCallAnalyticsCategoryRequest& request) const;


        /**
         * <p>Creates a new custom language model.</p> <p>When creating a new language
         * model, you must specify:</p> <ul> <li> <p>If you want a Wideband (audio sample
         * rates over 16,000 Hz) or Narrowband (audio sample rates under 16,000 Hz) base
         * model</p> </li> <li> <p>The location of your training and tuning files (this
         * must be an Amazon S3 URI)</p> </li> <li> <p>The language of your model</p> </li>
         * <li> <p>A unique name for your model</p> </li> </ul> <p>For more information,
         * see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
         * language models</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLanguageModelOutcome CreateLanguageModel(const Model::CreateLanguageModelRequest& request) const;


        /**
         * <p>Creates a new custom medical vocabulary.</p> <p>Prior to creating a new
         * medical vocabulary, you must first upload a text file that contains your new
         * entries, phrases, and terms into an Amazon S3 bucket. Note that this differs
         * from , where you can include a list of terms within your request using the
         * <code>Phrases</code> flag; <code>CreateMedicalVocabulary</code> does not support
         * the <code>Phrases</code> flag.</p> <p>Each language has a character set that
         * contains all allowed characters for that specific language. If you use
         * unsupported characters, your vocabulary request fails. Refer to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
         * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary-create.html">Creating
         * a custom vocabulary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMedicalVocabularyOutcome CreateMedicalVocabulary(const Model::CreateMedicalVocabularyRequest& request) const;


        /**
         * <p>Creates a new custom vocabulary.</p> <p>When creating a new vocabulary, you
         * can either upload a text file that contains your new entries, phrases, and terms
         * into an Amazon S3 bucket and include the URI in your request, or you can include
         * a list of terms directly in your request using the <code>Phrases</code>
         * flag.</p> <p>Each language has a character set that contains all allowed
         * characters for that specific language. If you use unsupported characters, your
         * vocabulary request fails. Refer to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
         * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary-create.html">Creating
         * a custom vocabulary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;


        /**
         * <p>Creates a new custom vocabulary filter.</p> <p>You can use vocabulary filters
         * to mask, delete, or flag specific words from your transcript. Vocabulary filters
         * are commonly used to mask profanity in transcripts.</p> <p>Each language has a
         * character set that contains all allowed characters for that specific language.
         * If you use unsupported characters, your vocabulary filter request fails. Refer
         * to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/charsets.html">Character
         * Sets for Custom Vocabularies</a> to get the character set for your language.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
         * vocabulary filtering with unwanted words</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyFilterOutcome CreateVocabularyFilter(const Model::CreateVocabularyFilterRequest& request) const;


        /**
         * <p>Deletes a Call Analytics category. To use this operation, specify the name of
         * the category you want to delete using <code>CategoryName</code>. Category names
         * are case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCallAnalyticsCategoryOutcome DeleteCallAnalyticsCategory(const Model::DeleteCallAnalyticsCategoryRequest& request) const;


        /**
         * <p>Deletes a Call Analytics job. To use this operation, specify the name of the
         * job you want to delete using <code>CallAnalyticsJobName</code>. Job names are
         * case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteCallAnalyticsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCallAnalyticsJobOutcome DeleteCallAnalyticsJob(const Model::DeleteCallAnalyticsJobRequest& request) const;


        /**
         * <p>Deletes a custom language model. To use this operation, specify the name of
         * the language model you want to delete using <code>ModelName</code>. Language
         * model names are case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLanguageModelOutcome DeleteLanguageModel(const Model::DeleteLanguageModelRequest& request) const;


        /**
         * <p>Deletes a medical transcription job. To use this operation, specify the name
         * of the job you want to delete using <code>MedicalTranscriptionJobName</code>.
         * Job names are case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcome DeleteMedicalTranscriptionJob(const Model::DeleteMedicalTranscriptionJobRequest& request) const;


        /**
         * <p>Deletes a custom medical vocabulary. To use this operation, specify the name
         * of the vocabulary you want to delete using <code>VocabularyName</code>.
         * Vocabulary names are case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalVocabularyOutcome DeleteMedicalVocabulary(const Model::DeleteMedicalVocabularyRequest& request) const;


        /**
         * <p>Deletes a transcription job. To use this operation, specify the name of the
         * job you want to delete using <code>TranscriptionJobName</code>. Job names are
         * case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTranscriptionJobOutcome DeleteTranscriptionJob(const Model::DeleteTranscriptionJobRequest& request) const;


        /**
         * <p>Deletes a custom vocabulary. To use this operation, specify the name of the
         * vocabulary you want to delete using <code>VocabularyName</code>. Vocabulary
         * names are case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;


        /**
         * <p>Deletes a vocabulary filter. To use this operation, specify the name of the
         * vocabulary filter you want to delete using <code>VocabularyFilterName</code>.
         * Vocabulary filter names are case sensitive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyFilterOutcome DeleteVocabularyFilter(const Model::DeleteVocabularyFilterRequest& request) const;


        /**
         * <p>Provides information about the specified custom language model.</p> <p>This
         * operation also shows if the base language model you used to create your custom
         * language model has been updated. If Amazon Transcribe has updated the base
         * model, you can create a new custom language model using the updated base
         * model.</p> <p>If you tried to create a new custom language model and the request
         * wasn't successful, you can use <code>DescribeLanguageModel</code> to help
         * identify the reason for this failure.</p> <p>To get a list of your custom
         * language models, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DescribeLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLanguageModelOutcome DescribeLanguageModel(const Model::DescribeLanguageModelRequest& request) const;


        /**
         * <p>Provides information about the specified Call Analytics category.</p> <p>To
         * get a list of your Call Analytics categories, use the operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCallAnalyticsCategoryOutcome GetCallAnalyticsCategory(const Model::GetCallAnalyticsCategoryRequest& request) const;


        /**
         * <p>Provides information about the specified Call Analytics job.</p> <p>To view
         * the job's status, refer to <code>CallAnalyticsJobStatus</code>. If the status is
         * <code>COMPLETED</code>, the job is finished. You can find your completed
         * transcript at the URI specified in <code>TranscriptFileUri</code>. If the status
         * is <code>FAILED</code>, <code>FailureReason</code> provides details on why your
         * transcription job failed.</p> <p>If you enabled personally identifiable
         * information (PII) redaction, the redacted transcript appears at the location
         * specified in <code>RedactedTranscriptFileUri</code>.</p> <p>If you chose to
         * redact the audio in your media file, you can find your redacted media file at
         * the location specified in <code>RedactedMediaFileUri</code>.</p> <p>To get a
         * list of your Call Analytics jobs, use the operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetCallAnalyticsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCallAnalyticsJobOutcome GetCallAnalyticsJob(const Model::GetCallAnalyticsJobRequest& request) const;


        /**
         * <p>Provides information about the specified medical transcription job.</p> <p>To
         * view the status of the specified medical transcription job, check the
         * <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in <code>TranscriptFileUri</code>. If the status is
         * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
         * transcription job failed.</p> <p>To get a list of your medical transcription
         * jobs, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalTranscriptionJobOutcome GetMedicalTranscriptionJob(const Model::GetMedicalTranscriptionJobRequest& request) const;


        /**
         * <p>Provides information about the specified custom medical vocabulary.</p> <p>To
         * view the status of the specified medical vocabulary, check the
         * <code>VocabularyState</code> field. If the status is <code>READY</code>, your
         * vocabulary is available to use. If the status is <code>FAILED</code>,
         * <code>FailureReason</code> provides details on why your vocabulary failed.</p>
         * <p>To get a list of your custom medical vocabularies, use the
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalVocabularyOutcome GetMedicalVocabulary(const Model::GetMedicalVocabularyRequest& request) const;


        /**
         * <p>Provides information about the specified transcription job.</p> <p>To view
         * the status of the specified transcription job, check the
         * <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in <code>TranscriptFileUri</code>. If the status is
         * <code>FAILED</code>, <code>FailureReason</code> provides details on why your
         * transcription job failed.</p> <p>If you enabled content redaction, the redacted
         * transcript can be found at the location specified in
         * <code>RedactedTranscriptFileUri</code>.</p> <p>To get a list of your
         * transcription jobs, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptionJobOutcome GetTranscriptionJob(const Model::GetTranscriptionJobRequest& request) const;


        /**
         * <p>Provides information about the specified custom vocabulary.</p> <p>To view
         * the status of the specified vocabulary, check the <code>VocabularyState</code>
         * field. If the status is <code>READY</code>, your vocabulary is available to use.
         * If the status is <code>FAILED</code>, <code>FailureReason</code> provides
         * details on why your vocabulary failed.</p> <p>To get a list of your custom
         * vocabularies, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyOutcome GetVocabulary(const Model::GetVocabularyRequest& request) const;


        /**
         * <p>Provides information about the specified custom vocabulary filter.</p> <p>To
         * view the status of the specified vocabulary filter, check the
         * <code>VocabularyState</code> field. If the status is <code>READY</code>, your
         * vocabulary is available to use. If the status is <code>FAILED</code>,
         * <code>FailureReason</code> provides details on why your vocabulary filter
         * failed.</p> <p>To get a list of your custom vocabulary filters, use the
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyFilterOutcome GetVocabularyFilter(const Model::GetVocabularyFilterRequest& request) const;


        /**
         * <p>Provides a list of Call Analytics categories, including all rules that make
         * up each category.</p> <p>To get detailed information about a specific Call
         * Analytics category, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListCallAnalyticsCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCallAnalyticsCategoriesOutcome ListCallAnalyticsCategories(const Model::ListCallAnalyticsCategoriesRequest& request) const;


        /**
         * <p>Provides a list of Call Analytics jobs that match the specified criteria. If
         * no criteria are specified, all Call Analytics jobs are returned.</p> <p>To get
         * detailed information about a specific Call Analytics job, use the
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListCallAnalyticsJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCallAnalyticsJobsOutcome ListCallAnalyticsJobs(const Model::ListCallAnalyticsJobsRequest& request) const;


        /**
         * <p>Provides a list of custom language models that match the specified criteria.
         * If no criteria are specified, all language models are returned.</p> <p>To get
         * detailed information about a specific custom language model, use the
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListLanguageModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLanguageModelsOutcome ListLanguageModels(const Model::ListLanguageModelsRequest& request) const;


        /**
         * <p>Provides a list of medical transcription jobs that match the specified
         * criteria. If no criteria are specified, all medical transcription jobs are
         * returned.</p> <p>To get detailed information about a specific medical
         * transcription job, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMedicalTranscriptionJobsOutcome ListMedicalTranscriptionJobs(const Model::ListMedicalTranscriptionJobsRequest& request) const;


        /**
         * <p>Provides a list of custom medical vocabularies that match the specified
         * criteria. If no criteria are specified, all custom medical vocabularies are
         * returned.</p> <p>To get detailed information about a specific custom medical
         * vocabulary, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMedicalVocabulariesOutcome ListMedicalVocabularies(const Model::ListMedicalVocabulariesRequest& request) const;


        /**
         * <p>Lists all tags associated with the specified transcription job, vocabulary,
         * model, or resource.</p> <p>To learn more about using tags with Amazon
         * Transcribe, refer to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
         * resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Provides a list of transcription jobs that match the specified criteria. If
         * no criteria are specified, all transcription jobs are returned.</p> <p>To get
         * detailed information about a specific transcription job, use the
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTranscriptionJobsOutcome ListTranscriptionJobs(const Model::ListTranscriptionJobsRequest& request) const;


        /**
         * <p>Provides a list of custom vocabularies that match the specified criteria. If
         * no criteria are specified, all custom vocabularies are returned.</p> <p>To get
         * detailed information about a specific custom vocabulary, use the
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabulariesOutcome ListVocabularies(const Model::ListVocabulariesRequest& request) const;


        /**
         * <p>Provides a list of custom vocabulary filters that match the specified
         * criteria. If no criteria are specified, all custom vocabularies are
         * returned.</p> <p>To get detailed information about a specific custom vocabulary
         * filter, use the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabularyFiltersOutcome ListVocabularyFilters(const Model::ListVocabularyFiltersRequest& request) const;


        /**
         * <p>Transcribes the audio from a customer service call and applies any additional
         * Request Parameters you choose to include in your request.</p> <p>In addition to
         * many of the standard transcription features, Call Analytics provides you with
         * call characteristics, call summarization, speaker sentiment, and optional
         * redaction of your text transcript and your audio file. You can also apply custom
         * categories to flag specified conditions. To learn more about these features and
         * insights, refer to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics.html">Analyzing
         * call center audio with Call Analytics</a>.</p> <p>If you want to apply
         * categories to your Call Analytics job, you must create them before submitting
         * your job request. Categories cannot be retroactively applied to a job. To create
         * a new category, use the operation. To learn more about Call Analytics
         * categories, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/call-analytics-create-categories.html">Creating
         * categories</a>.</p> <p>To make a <code>StartCallAnalyticsJob</code> request, you
         * must first upload your media file into an Amazon S3 bucket; you can then specify
         * the Amazon S3 location of the file using the <code>Media</code> parameter.</p>
         * <p>You must include the following parameters in your
         * <code>StartCallAnalyticsJob</code> request:</p> <ul> <li> <p>
         * <code>region</code>: The Amazon Web Services Region where you are making your
         * request. For a list of Amazon Web Services Regions supported with Amazon
         * Transcribe, refer to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html">Amazon
         * Transcribe endpoints and quotas</a>.</p> </li> <li> <p>
         * <code>CallAnalyticsJobName</code>: A custom name you create for your
         * transcription job that is unique within your Amazon Web Services account.</p>
         * </li> <li> <p> <code>DataAccessRoleArn</code>: The Amazon Resource Name (ARN) of
         * an IAM role that has permissions to access the Amazon S3 bucket that contains
         * your input files.</p> </li> <li> <p> <code>Media</code>
         * (<code>MediaFileUri</code> or <code>RedactedMediaFileUri</code>): The Amazon S3
         * location of your media file.</p> </li> </ul>  <p>With Call Analytics, you
         * can redact the audio contained in your media file by including
         * <code>RedactedMediaFileUri</code>, instead of <code>MediaFileUri</code>, to
         * specify the location of your input audio. If you choose to redact your audio,
         * you can find your redacted media at the location specified in the
         * <code>RedactedMediaFileUri</code> field of your response.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartCallAnalyticsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCallAnalyticsJobOutcome StartCallAnalyticsJob(const Model::StartCallAnalyticsJobRequest& request) const;


        /**
         * <p>Transcribes the audio from a medical dictation or conversation and applies
         * any additional Request Parameters you choose to include in your request.</p>
         * <p>In addition to many of the standard transcription features, Amazon Transcribe
         * Medical provides you with a robust medical vocabulary and, optionally, content
         * identification, which adds flags to personal health information (PHI). To learn
         * more about these features, refer to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-it-works-med.html">How
         * Amazon Transcribe Medical works</a>.</p> <p>To make a
         * <code>StartMedicalTranscriptionJob</code> request, you must first upload your
         * media file into an Amazon S3 bucket; you can then specify the S3 location of the
         * file using the <code>Media</code> parameter.</p> <p>You must include the
         * following parameters in your <code>StartMedicalTranscriptionJob</code>
         * request:</p> <ul> <li> <p> <code>region</code>: The Amazon Web Services Region
         * where you are making your request. For a list of Amazon Web Services Regions
         * supported with Amazon Transcribe, refer to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html">Amazon
         * Transcribe endpoints and quotas</a>.</p> </li> <li> <p>
         * <code>MedicalTranscriptionJobName</code>: A custom name you create for your
         * transcription job that is unique within your Amazon Web Services account.</p>
         * </li> <li> <p> <code>Media</code> (<code>MediaFileUri</code>): The Amazon S3
         * location of your media file.</p> </li> <li> <p> <code>LanguageCode</code>: This
         * must be <code>en-US</code>.</p> </li> <li> <p> <code>OutputBucketName</code>:
         * The Amazon S3 bucket where you want your transcript stored. If you want your
         * output stored in a sub-folder of this bucket, you must also include
         * <code>OutputKey</code>.</p> </li> <li> <p> <code>Specialty</code>: This must be
         * <code>PRIMARYCARE</code>.</p> </li> <li> <p> <code>Type</code>: Choose whether
         * your audio is a conversation or a dictation.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMedicalTranscriptionJobOutcome StartMedicalTranscriptionJob(const Model::StartMedicalTranscriptionJobRequest& request) const;


        /**
         * <p>Transcribes the audio from a media file and applies any additional Request
         * Parameters you choose to include in your request.</p> <p>To make a
         * <code>StartTranscriptionJob</code> request, you must first upload your media
         * file into an Amazon S3 bucket; you can then specify the Amazon S3 location of
         * the file using the <code>Media</code> parameter.</p> <p>You must include the
         * following parameters in your <code>StartTranscriptionJob</code> request:</p>
         * <ul> <li> <p> <code>region</code>: The Amazon Web Services Region where you are
         * making your request. For a list of Amazon Web Services Regions supported with
         * Amazon Transcribe, refer to <a
         * href="https://docs.aws.amazon.com/general/latest/gr/transcribe.html">Amazon
         * Transcribe endpoints and quotas</a>.</p> </li> <li> <p>
         * <code>TranscriptionJobName</code>: A custom name you create for your
         * transcription job that is unique within your Amazon Web Services account.</p>
         * </li> <li> <p> <code>Media</code> (<code>MediaFileUri</code>): The Amazon S3
         * location of your media file.</p> </li> <li> <p>One of <code>LanguageCode</code>,
         * <code>IdentifyLanguage</code>, or <code>IdentifyMultipleLanguages</code>: If you
         * know the language of your media file, specify it using the
         * <code>LanguageCode</code> parameter; you can find all valid language codes in
         * the <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
         * languages</a> table. If you don't know the languages spoken in your media, use
         * either <code>IdentifyLanguage</code> or <code>IdentifyMultipleLanguages</code>
         * and let Amazon Transcribe identify the languages for you.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTranscriptionJobOutcome StartTranscriptionJob(const Model::StartTranscriptionJobRequest& request) const;


        /**
         * <p>Adds one or more custom tags, each in the form of a key:value pair, to the
         * specified resource.</p> <p>To learn more about using tags with Amazon
         * Transcribe, refer to <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
         * resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified Amazon Transcribe resource.</p>
         * <p>If you include <code>UntagResource</code> in your request, you must also
         * include <code>ResourceArn</code> and <code>TagKeys</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the specified Call Analytics category with new rules. Note that the
         * <code>UpdateCallAnalyticsCategory</code> operation overwrites all existing rules
         * contained in the specified category. You cannot append additional rules onto an
         * existing category.</p> <p>To create a new category, see .</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCallAnalyticsCategoryOutcome UpdateCallAnalyticsCategory(const Model::UpdateCallAnalyticsCategoryRequest& request) const;


        /**
         * <p>Updates an existing custom medical vocabulary with new values. This operation
         * overwrites all existing information with your new values; you cannot append new
         * terms onto an existing vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMedicalVocabularyOutcome UpdateMedicalVocabulary(const Model::UpdateMedicalVocabularyRequest& request) const;


        /**
         * <p>Updates an existing custom vocabulary with new values. This operation
         * overwrites all existing information with your new values; you cannot append new
         * terms onto an existing vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVocabularyOutcome UpdateVocabulary(const Model::UpdateVocabularyRequest& request) const;


        /**
         * <p>Updates an existing custom vocabulary filter with a new list of words. The
         * new list you provide overwrites all previous entries; you cannot append new
         * terms onto an existing vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVocabularyFilterOutcome UpdateVocabularyFilter(const Model::UpdateVocabularyFilterRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TranscribeServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const TranscribeServiceClientConfiguration& clientConfiguration);

      TranscribeServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TranscribeServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace TranscribeService
} // namespace Aws
