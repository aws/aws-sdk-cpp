/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribe/model/CreateCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/CreateLanguageModelResult.h>
#include <aws/transcribe/model/CreateMedicalVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyFilterResult.h>
#include <aws/transcribe/model/DeleteCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/DeleteCallAnalyticsJobResult.h>
#include <aws/transcribe/model/DescribeLanguageModelResult.h>
#include <aws/transcribe/model/GetCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/GetCallAnalyticsJobResult.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/GetMedicalVocabularyResult.h>
#include <aws/transcribe/model/GetTranscriptionJobResult.h>
#include <aws/transcribe/model/GetVocabularyResult.h>
#include <aws/transcribe/model/GetVocabularyFilterResult.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesResult.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsResult.h>
#include <aws/transcribe/model/ListLanguageModelsResult.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListMedicalVocabulariesResult.h>
#include <aws/transcribe/model/ListTagsForResourceResult.h>
#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListVocabulariesResult.h>
#include <aws/transcribe/model/ListVocabularyFiltersResult.h>
#include <aws/transcribe/model/StartCallAnalyticsJobResult.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/StartTranscriptionJobResult.h>
#include <aws/transcribe/model/TagResourceResult.h>
#include <aws/transcribe/model/UntagResourceResult.h>
#include <aws/transcribe/model/UpdateCallAnalyticsCategoryResult.h>
#include <aws/transcribe/model/UpdateMedicalVocabularyResult.h>
#include <aws/transcribe/model/UpdateVocabularyResult.h>
#include <aws/transcribe/model/UpdateVocabularyFilterResult.h>
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

namespace TranscribeService
{

namespace Model
{
        class CreateCallAnalyticsCategoryRequest;
        class CreateLanguageModelRequest;
        class CreateMedicalVocabularyRequest;
        class CreateVocabularyRequest;
        class CreateVocabularyFilterRequest;
        class DeleteCallAnalyticsCategoryRequest;
        class DeleteCallAnalyticsJobRequest;
        class DeleteLanguageModelRequest;
        class DeleteMedicalTranscriptionJobRequest;
        class DeleteMedicalVocabularyRequest;
        class DeleteTranscriptionJobRequest;
        class DeleteVocabularyRequest;
        class DeleteVocabularyFilterRequest;
        class DescribeLanguageModelRequest;
        class GetCallAnalyticsCategoryRequest;
        class GetCallAnalyticsJobRequest;
        class GetMedicalTranscriptionJobRequest;
        class GetMedicalVocabularyRequest;
        class GetTranscriptionJobRequest;
        class GetVocabularyRequest;
        class GetVocabularyFilterRequest;
        class ListCallAnalyticsCategoriesRequest;
        class ListCallAnalyticsJobsRequest;
        class ListLanguageModelsRequest;
        class ListMedicalTranscriptionJobsRequest;
        class ListMedicalVocabulariesRequest;
        class ListTagsForResourceRequest;
        class ListTranscriptionJobsRequest;
        class ListVocabulariesRequest;
        class ListVocabularyFiltersRequest;
        class StartCallAnalyticsJobRequest;
        class StartMedicalTranscriptionJobRequest;
        class StartTranscriptionJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateCallAnalyticsCategoryRequest;
        class UpdateMedicalVocabularyRequest;
        class UpdateVocabularyRequest;
        class UpdateVocabularyFilterRequest;

        typedef Aws::Utils::Outcome<CreateCallAnalyticsCategoryResult, TranscribeServiceError> CreateCallAnalyticsCategoryOutcome;
        typedef Aws::Utils::Outcome<CreateLanguageModelResult, TranscribeServiceError> CreateLanguageModelOutcome;
        typedef Aws::Utils::Outcome<CreateMedicalVocabularyResult, TranscribeServiceError> CreateMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<CreateVocabularyResult, TranscribeServiceError> CreateVocabularyOutcome;
        typedef Aws::Utils::Outcome<CreateVocabularyFilterResult, TranscribeServiceError> CreateVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<DeleteCallAnalyticsCategoryResult, TranscribeServiceError> DeleteCallAnalyticsCategoryOutcome;
        typedef Aws::Utils::Outcome<DeleteCallAnalyticsJobResult, TranscribeServiceError> DeleteCallAnalyticsJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteLanguageModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteVocabularyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<DescribeLanguageModelResult, TranscribeServiceError> DescribeLanguageModelOutcome;
        typedef Aws::Utils::Outcome<GetCallAnalyticsCategoryResult, TranscribeServiceError> GetCallAnalyticsCategoryOutcome;
        typedef Aws::Utils::Outcome<GetCallAnalyticsJobResult, TranscribeServiceError> GetCallAnalyticsJobOutcome;
        typedef Aws::Utils::Outcome<GetMedicalTranscriptionJobResult, TranscribeServiceError> GetMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetMedicalVocabularyResult, TranscribeServiceError> GetMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<GetTranscriptionJobResult, TranscribeServiceError> GetTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyResult, TranscribeServiceError> GetVocabularyOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyFilterResult, TranscribeServiceError> GetVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<ListCallAnalyticsCategoriesResult, TranscribeServiceError> ListCallAnalyticsCategoriesOutcome;
        typedef Aws::Utils::Outcome<ListCallAnalyticsJobsResult, TranscribeServiceError> ListCallAnalyticsJobsOutcome;
        typedef Aws::Utils::Outcome<ListLanguageModelsResult, TranscribeServiceError> ListLanguageModelsOutcome;
        typedef Aws::Utils::Outcome<ListMedicalTranscriptionJobsResult, TranscribeServiceError> ListMedicalTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListMedicalVocabulariesResult, TranscribeServiceError> ListMedicalVocabulariesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, TranscribeServiceError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTranscriptionJobsResult, TranscribeServiceError> ListTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListVocabulariesResult, TranscribeServiceError> ListVocabulariesOutcome;
        typedef Aws::Utils::Outcome<ListVocabularyFiltersResult, TranscribeServiceError> ListVocabularyFiltersOutcome;
        typedef Aws::Utils::Outcome<StartCallAnalyticsJobResult, TranscribeServiceError> StartCallAnalyticsJobOutcome;
        typedef Aws::Utils::Outcome<StartMedicalTranscriptionJobResult, TranscribeServiceError> StartMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<StartTranscriptionJobResult, TranscribeServiceError> StartTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, TranscribeServiceError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, TranscribeServiceError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateCallAnalyticsCategoryResult, TranscribeServiceError> UpdateCallAnalyticsCategoryOutcome;
        typedef Aws::Utils::Outcome<UpdateMedicalVocabularyResult, TranscribeServiceError> UpdateMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyResult, TranscribeServiceError> UpdateVocabularyOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyFilterResult, TranscribeServiceError> UpdateVocabularyFilterOutcome;

        typedef std::future<CreateCallAnalyticsCategoryOutcome> CreateCallAnalyticsCategoryOutcomeCallable;
        typedef std::future<CreateLanguageModelOutcome> CreateLanguageModelOutcomeCallable;
        typedef std::future<CreateMedicalVocabularyOutcome> CreateMedicalVocabularyOutcomeCallable;
        typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
        typedef std::future<CreateVocabularyFilterOutcome> CreateVocabularyFilterOutcomeCallable;
        typedef std::future<DeleteCallAnalyticsCategoryOutcome> DeleteCallAnalyticsCategoryOutcomeCallable;
        typedef std::future<DeleteCallAnalyticsJobOutcome> DeleteCallAnalyticsJobOutcomeCallable;
        typedef std::future<DeleteLanguageModelOutcome> DeleteLanguageModelOutcomeCallable;
        typedef std::future<DeleteMedicalTranscriptionJobOutcome> DeleteMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteMedicalVocabularyOutcome> DeleteMedicalVocabularyOutcomeCallable;
        typedef std::future<DeleteTranscriptionJobOutcome> DeleteTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
        typedef std::future<DeleteVocabularyFilterOutcome> DeleteVocabularyFilterOutcomeCallable;
        typedef std::future<DescribeLanguageModelOutcome> DescribeLanguageModelOutcomeCallable;
        typedef std::future<GetCallAnalyticsCategoryOutcome> GetCallAnalyticsCategoryOutcomeCallable;
        typedef std::future<GetCallAnalyticsJobOutcome> GetCallAnalyticsJobOutcomeCallable;
        typedef std::future<GetMedicalTranscriptionJobOutcome> GetMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<GetMedicalVocabularyOutcome> GetMedicalVocabularyOutcomeCallable;
        typedef std::future<GetTranscriptionJobOutcome> GetTranscriptionJobOutcomeCallable;
        typedef std::future<GetVocabularyOutcome> GetVocabularyOutcomeCallable;
        typedef std::future<GetVocabularyFilterOutcome> GetVocabularyFilterOutcomeCallable;
        typedef std::future<ListCallAnalyticsCategoriesOutcome> ListCallAnalyticsCategoriesOutcomeCallable;
        typedef std::future<ListCallAnalyticsJobsOutcome> ListCallAnalyticsJobsOutcomeCallable;
        typedef std::future<ListLanguageModelsOutcome> ListLanguageModelsOutcomeCallable;
        typedef std::future<ListMedicalTranscriptionJobsOutcome> ListMedicalTranscriptionJobsOutcomeCallable;
        typedef std::future<ListMedicalVocabulariesOutcome> ListMedicalVocabulariesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTranscriptionJobsOutcome> ListTranscriptionJobsOutcomeCallable;
        typedef std::future<ListVocabulariesOutcome> ListVocabulariesOutcomeCallable;
        typedef std::future<ListVocabularyFiltersOutcome> ListVocabularyFiltersOutcomeCallable;
        typedef std::future<StartCallAnalyticsJobOutcome> StartCallAnalyticsJobOutcomeCallable;
        typedef std::future<StartMedicalTranscriptionJobOutcome> StartMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<StartTranscriptionJobOutcome> StartTranscriptionJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateCallAnalyticsCategoryOutcome> UpdateCallAnalyticsCategoryOutcomeCallable;
        typedef std::future<UpdateMedicalVocabularyOutcome> UpdateMedicalVocabularyOutcomeCallable;
        typedef std::future<UpdateVocabularyOutcome> UpdateVocabularyOutcomeCallable;
        typedef std::future<UpdateVocabularyFilterOutcome> UpdateVocabularyFilterOutcomeCallable;
} // namespace Model

  class TranscribeServiceClient;

    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateCallAnalyticsCategoryRequest&, const Model::CreateCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateLanguageModelRequest&, const Model::CreateLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateMedicalVocabularyRequest&, const Model::CreateMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyFilterRequest&, const Model::CreateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteCallAnalyticsCategoryRequest&, const Model::DeleteCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteCallAnalyticsJobRequest&, const Model::DeleteCallAnalyticsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCallAnalyticsJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteLanguageModelRequest&, const Model::DeleteLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalTranscriptionJobRequest&, const Model::DeleteMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalVocabularyRequest&, const Model::DeleteMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteTranscriptionJobRequest&, const Model::DeleteTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyFilterRequest&, const Model::DeleteVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DescribeLanguageModelRequest&, const Model::DescribeLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetCallAnalyticsCategoryRequest&, const Model::GetCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetCallAnalyticsJobRequest&, const Model::GetCallAnalyticsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCallAnalyticsJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalTranscriptionJobRequest&, const Model::GetMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalVocabularyRequest&, const Model::GetMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetTranscriptionJobRequest&, const Model::GetTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyRequest&, const Model::GetVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyFilterRequest&, const Model::GetVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListCallAnalyticsCategoriesRequest&, const Model::ListCallAnalyticsCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCallAnalyticsCategoriesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListCallAnalyticsJobsRequest&, const Model::ListCallAnalyticsJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCallAnalyticsJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListLanguageModelsRequest&, const Model::ListLanguageModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLanguageModelsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalTranscriptionJobsRequest&, const Model::ListMedicalTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalVocabulariesRequest&, const Model::ListMedicalVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTranscriptionJobsRequest&, const Model::ListTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabulariesRequest&, const Model::ListVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabularyFiltersRequest&, const Model::ListVocabularyFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabularyFiltersResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartCallAnalyticsJobRequest&, const Model::StartCallAnalyticsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCallAnalyticsJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartMedicalTranscriptionJobRequest&, const Model::StartMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartTranscriptionJobRequest&, const Model::StartTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateCallAnalyticsCategoryRequest&, const Model::UpdateCallAnalyticsCategoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCallAnalyticsCategoryResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateMedicalVocabularyRequest&, const Model::UpdateMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyRequest&, const Model::UpdateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyFilterRequest&, const Model::UpdateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyFilterResponseReceivedHandler;

  /**
   * <p>Operations and objects for transcribing speech to text.</p>
   */
  class AWS_TRANSCRIBESERVICE_API TranscribeServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranscribeServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranscribeServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TranscribeServiceClient();


        /**
         * <p>Creates a call analytics category. Amazon Transcribe applies the conditions
         * specified by your call analytics categories to your call analytics jobs. For
         * each analytics category, you must create between 1 and 20 rules. For example,
         * you can create a 'greeting' category with a rule that flags calls in which your
         * agent does not use a specified phrase (for example: "Please note this call may
         * be recorded.") in the first 15 seconds of the call. When you start a call
         * analytics job, Amazon Transcribe applies all your existing call analytics
         * categories to that job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCallAnalyticsCategoryOutcome CreateCallAnalyticsCategory(const Model::CreateCallAnalyticsCategoryRequest& request) const;

        /**
         * A Callable wrapper for CreateCallAnalyticsCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCallAnalyticsCategoryOutcomeCallable CreateCallAnalyticsCategoryCallable(const Model::CreateCallAnalyticsCategoryRequest& request) const;

        /**
         * An Async wrapper for CreateCallAnalyticsCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCallAnalyticsCategoryAsync(const Model::CreateCallAnalyticsCategoryRequest& request, const CreateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom language model. When creating a new language model, you
         * must specify if you want a Wideband (audio sample rates over 16,000 Hz) or
         * Narrowband (audio sample rates under 16,000 Hz) base model. You then include the
         * S3 URI location of your training and tuning files, the language for the model, a
         * unique name, and any tags you want associated with your model.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLanguageModelOutcome CreateLanguageModel(const Model::CreateLanguageModelRequest& request) const;

        /**
         * A Callable wrapper for CreateLanguageModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLanguageModelOutcomeCallable CreateLanguageModelCallable(const Model::CreateLanguageModelRequest& request) const;

        /**
         * An Async wrapper for CreateLanguageModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLanguageModelAsync(const Model::CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom medical vocabulary.</p> <p>When creating a new medical
         * vocabulary, you must upload a text file that contains your new entries, phrases,
         * and terms into an S3 bucket. Note that this differs from , where you can include
         * a list of terms within your request using the <code>Phrases</code> flag, as
         * <code>CreateMedicalVocabulary</code> does not support the <code>Phrases</code>
         * flag.</p> <p>For more information on creating a custom vocabulary text file, see
         * <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary-create.html">Creating
         * a custom vocabulary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMedicalVocabularyOutcome CreateMedicalVocabulary(const Model::CreateMedicalVocabularyRequest& request) const;

        /**
         * A Callable wrapper for CreateMedicalVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMedicalVocabularyOutcomeCallable CreateMedicalVocabularyCallable(const Model::CreateMedicalVocabularyRequest& request) const;

        /**
         * An Async wrapper for CreateMedicalVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMedicalVocabularyAsync(const Model::CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom vocabulary.</p> <p>When creating a new medical
         * vocabulary, you can either upload a text file that contains your new entries,
         * phrases, and terms into an S3 bucket or include a list of terms directly in your
         * request using the <code>Phrases</code> flag.</p> <p>For more information on
         * creating a custom vocabulary, see <a
         * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary-create.html">Creating
         * a custom vocabulary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;

        /**
         * A Callable wrapper for CreateVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyOutcomeCallable CreateVocabularyCallable(const Model::CreateVocabularyRequest& request) const;

        /**
         * An Async wrapper for CreateVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyAsync(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words from your
         * transcription output. For example, you can use this operation to remove
         * profanity from your transcript.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyFilterOutcome CreateVocabularyFilter(const Model::CreateVocabularyFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateVocabularyFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyFilterOutcomeCallable CreateVocabularyFilterCallable(const Model::CreateVocabularyFilterRequest& request) const;

        /**
         * An Async wrapper for CreateVocabularyFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyFilterAsync(const Model::CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a call analytics category. To use this operation, specify the name of
         * the category you want to delete using <code>CategoryName</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCallAnalyticsCategoryOutcome DeleteCallAnalyticsCategory(const Model::DeleteCallAnalyticsCategoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteCallAnalyticsCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCallAnalyticsCategoryOutcomeCallable DeleteCallAnalyticsCategoryCallable(const Model::DeleteCallAnalyticsCategoryRequest& request) const;

        /**
         * An Async wrapper for DeleteCallAnalyticsCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCallAnalyticsCategoryAsync(const Model::DeleteCallAnalyticsCategoryRequest& request, const DeleteCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a call analytics job. To use this operation, specify the name of the
         * job you want to delete using <code>CallAnalyticsJobName</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteCallAnalyticsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCallAnalyticsJobOutcome DeleteCallAnalyticsJob(const Model::DeleteCallAnalyticsJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteCallAnalyticsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCallAnalyticsJobOutcomeCallable DeleteCallAnalyticsJobCallable(const Model::DeleteCallAnalyticsJobRequest& request) const;

        /**
         * An Async wrapper for DeleteCallAnalyticsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCallAnalyticsJobAsync(const Model::DeleteCallAnalyticsJobRequest& request, const DeleteCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom language model. To use this operation, specify the name of
         * the language model you want to delete using
         * <code>ModelName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLanguageModelOutcome DeleteLanguageModel(const Model::DeleteLanguageModelRequest& request) const;

        /**
         * A Callable wrapper for DeleteLanguageModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLanguageModelOutcomeCallable DeleteLanguageModelCallable(const Model::DeleteLanguageModelRequest& request) const;

        /**
         * An Async wrapper for DeleteLanguageModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLanguageModelAsync(const Model::DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a medical transcription job, along with any related information. To
         * use this operation, specify the name of the job you want to delete using
         * <code>MedicalTranscriptionJobName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcome DeleteMedicalTranscriptionJob(const Model::DeleteMedicalTranscriptionJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteMedicalTranscriptionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcomeCallable DeleteMedicalTranscriptionJobCallable(const Model::DeleteMedicalTranscriptionJobRequest& request) const;

        /**
         * An Async wrapper for DeleteMedicalTranscriptionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMedicalTranscriptionJobAsync(const Model::DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom medical vocabulary. To use this operation, specify the name
         * of the vocabulary you want to delete using
         * <code>VocabularyName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalVocabularyOutcome DeleteMedicalVocabulary(const Model::DeleteMedicalVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DeleteMedicalVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMedicalVocabularyOutcomeCallable DeleteMedicalVocabularyCallable(const Model::DeleteMedicalVocabularyRequest& request) const;

        /**
         * An Async wrapper for DeleteMedicalVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMedicalVocabularyAsync(const Model::DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a transcription job, along with any related information. To use this
         * operation, specify the name of the job you want to delete using
         * <code>TranscriptionJobName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTranscriptionJobOutcome DeleteTranscriptionJob(const Model::DeleteTranscriptionJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteTranscriptionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTranscriptionJobOutcomeCallable DeleteTranscriptionJobCallable(const Model::DeleteTranscriptionJobRequest& request) const;

        /**
         * An Async wrapper for DeleteTranscriptionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTranscriptionJobAsync(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom vocabulary. To use this operation, specify the name of the
         * vocabulary you want to delete using <code>VocabularyName</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyOutcomeCallable DeleteVocabularyCallable(const Model::DeleteVocabularyRequest& request) const;

        /**
         * An Async wrapper for DeleteVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyAsync(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a vocabulary filter. To use this operation, specify the name of the
         * vocabulary filter you want to delete using
         * <code>VocabularyFilterName</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyFilterOutcome DeleteVocabularyFilter(const Model::DeleteVocabularyFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteVocabularyFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyFilterOutcomeCallable DeleteVocabularyFilterCallable(const Model::DeleteVocabularyFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteVocabularyFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyFilterAsync(const Model::DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a specific custom language model in your Amazon
         * Web Services account.</p> <p>This operation also shows if the base language
         * model you used to create your custom language model has been updated. If Amazon
         * Transcribe has updated the base model, you can create a new custom language
         * model using the updated base model.</p> <p>If you tried to create a new custom
         * language model and the request wasn't successful, you can use this operation to
         * help identify the reason. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DescribeLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLanguageModelOutcome DescribeLanguageModel(const Model::DescribeLanguageModelRequest& request) const;

        /**
         * A Callable wrapper for DescribeLanguageModel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLanguageModelOutcomeCallable DescribeLanguageModelCallable(const Model::DescribeLanguageModelRequest& request) const;

        /**
         * An Async wrapper for DescribeLanguageModel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLanguageModelAsync(const Model::DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a call analytics category.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCallAnalyticsCategoryOutcome GetCallAnalyticsCategory(const Model::GetCallAnalyticsCategoryRequest& request) const;

        /**
         * A Callable wrapper for GetCallAnalyticsCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCallAnalyticsCategoryOutcomeCallable GetCallAnalyticsCategoryCallable(const Model::GetCallAnalyticsCategoryRequest& request) const;

        /**
         * An Async wrapper for GetCallAnalyticsCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCallAnalyticsCategoryAsync(const Model::GetCallAnalyticsCategoryRequest& request, const GetCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a call analytics job.</p> <p>To view the job's
         * status, refer to the <code>CallAnalyticsJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished. You can then find your transcript
         * at the URI specified in the <code>TranscriptFileUri</code> field. If you enabled
         * personally identifiable information (PII) redaction, the redacted transcript
         * appears in the <code>RedactedTranscriptFileUri</code> field.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetCallAnalyticsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCallAnalyticsJobOutcome GetCallAnalyticsJob(const Model::GetCallAnalyticsJobRequest& request) const;

        /**
         * A Callable wrapper for GetCallAnalyticsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCallAnalyticsJobOutcomeCallable GetCallAnalyticsJobCallable(const Model::GetCallAnalyticsJobRequest& request) const;

        /**
         * An Async wrapper for GetCallAnalyticsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCallAnalyticsJobAsync(const Model::GetCallAnalyticsJobRequest& request, const GetCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a medical transcription job.</p> <p>To view the
         * job's status, refer to the <code>TranscriptionJobStatus</code> field. If the
         * status is <code>COMPLETED</code>, the job is finished. You can then find your
         * transcript at the URI specified in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalTranscriptionJobOutcome GetMedicalTranscriptionJob(const Model::GetMedicalTranscriptionJobRequest& request) const;

        /**
         * A Callable wrapper for GetMedicalTranscriptionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMedicalTranscriptionJobOutcomeCallable GetMedicalTranscriptionJobCallable(const Model::GetMedicalTranscriptionJobRequest& request) const;

        /**
         * An Async wrapper for GetMedicalTranscriptionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMedicalTranscriptionJobAsync(const Model::GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a medical vocabulary.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalVocabularyOutcome GetMedicalVocabulary(const Model::GetMedicalVocabularyRequest& request) const;

        /**
         * A Callable wrapper for GetMedicalVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMedicalVocabularyOutcomeCallable GetMedicalVocabularyCallable(const Model::GetMedicalVocabularyRequest& request) const;

        /**
         * An Async wrapper for GetMedicalVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMedicalVocabularyAsync(const Model::GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptFileUri</code> field. If you enable
         * content redaction, the redacted transcript appears in
         * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptionJobOutcome GetTranscriptionJob(const Model::GetTranscriptionJobRequest& request) const;

        /**
         * A Callable wrapper for GetTranscriptionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTranscriptionJobOutcomeCallable GetTranscriptionJobCallable(const Model::GetTranscriptionJobRequest& request) const;

        /**
         * An Async wrapper for GetTranscriptionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTranscriptionJobAsync(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyOutcome GetVocabulary(const Model::GetVocabularyRequest& request) const;

        /**
         * A Callable wrapper for GetVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVocabularyOutcomeCallable GetVocabularyCallable(const Model::GetVocabularyRequest& request) const;

        /**
         * An Async wrapper for GetVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVocabularyAsync(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyFilterOutcome GetVocabularyFilter(const Model::GetVocabularyFilterRequest& request) const;

        /**
         * A Callable wrapper for GetVocabularyFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVocabularyFilterOutcomeCallable GetVocabularyFilterCallable(const Model::GetVocabularyFilterRequest& request) const;

        /**
         * An Async wrapper for GetVocabularyFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVocabularyFilterAsync(const Model::GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides more information about the call analytics categories that you've
         * created. You can use the information in this list to find a specific category.
         * You can then use the operation to get more information about it.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListCallAnalyticsCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCallAnalyticsCategoriesOutcome ListCallAnalyticsCategories(const Model::ListCallAnalyticsCategoriesRequest& request) const;

        /**
         * A Callable wrapper for ListCallAnalyticsCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCallAnalyticsCategoriesOutcomeCallable ListCallAnalyticsCategoriesCallable(const Model::ListCallAnalyticsCategoriesRequest& request) const;

        /**
         * An Async wrapper for ListCallAnalyticsCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCallAnalyticsCategoriesAsync(const Model::ListCallAnalyticsCategoriesRequest& request, const ListCallAnalyticsCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List call analytics jobs with a specified status or substring that matches
         * their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListCallAnalyticsJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCallAnalyticsJobsOutcome ListCallAnalyticsJobs(const Model::ListCallAnalyticsJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCallAnalyticsJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCallAnalyticsJobsOutcomeCallable ListCallAnalyticsJobsCallable(const Model::ListCallAnalyticsJobsRequest& request) const;

        /**
         * An Async wrapper for ListCallAnalyticsJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCallAnalyticsJobsAsync(const Model::ListCallAnalyticsJobsRequest& request, const ListCallAnalyticsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides more information about the custom language models you've created.
         * You can use the information in this list to find a specific custom language
         * model. You can then use the operation to get more information about
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListLanguageModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLanguageModelsOutcome ListLanguageModels(const Model::ListLanguageModelsRequest& request) const;

        /**
         * A Callable wrapper for ListLanguageModels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLanguageModelsOutcomeCallable ListLanguageModelsCallable(const Model::ListLanguageModelsRequest& request) const;

        /**
         * An Async wrapper for ListLanguageModels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLanguageModelsAsync(const Model::ListLanguageModelsRequest& request, const ListLanguageModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists medical transcription jobs with a specified status or substring that
         * matches their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMedicalTranscriptionJobsOutcome ListMedicalTranscriptionJobs(const Model::ListMedicalTranscriptionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMedicalTranscriptionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMedicalTranscriptionJobsOutcomeCallable ListMedicalTranscriptionJobsCallable(const Model::ListMedicalTranscriptionJobsRequest& request) const;

        /**
         * An Async wrapper for ListMedicalTranscriptionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMedicalTranscriptionJobsAsync(const Model::ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If you
         * don't enter a value in any of the request parameters, returns the entire list of
         * vocabularies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMedicalVocabulariesOutcome ListMedicalVocabularies(const Model::ListMedicalVocabulariesRequest& request) const;

        /**
         * A Callable wrapper for ListMedicalVocabularies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMedicalVocabulariesOutcomeCallable ListMedicalVocabulariesCallable(const Model::ListMedicalVocabulariesRequest& request) const;

        /**
         * An Async wrapper for ListMedicalVocabularies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMedicalVocabulariesAsync(const Model::ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with a given transcription job, vocabulary, or
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTranscriptionJobsOutcome ListTranscriptionJobs(const Model::ListTranscriptionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListTranscriptionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTranscriptionJobsOutcomeCallable ListTranscriptionJobsCallable(const Model::ListTranscriptionJobsRequest& request) const;

        /**
         * An Async wrapper for ListTranscriptionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTranscriptionJobsAsync(const Model::ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If no
         * criteria are specified, returns the entire list of vocabularies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabulariesOutcome ListVocabularies(const Model::ListVocabulariesRequest& request) const;

        /**
         * A Callable wrapper for ListVocabularies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVocabulariesOutcomeCallable ListVocabulariesCallable(const Model::ListVocabulariesRequest& request) const;

        /**
         * An Async wrapper for ListVocabularies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVocabulariesAsync(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabularyFiltersOutcome ListVocabularyFilters(const Model::ListVocabularyFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListVocabularyFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVocabularyFiltersOutcomeCallable ListVocabularyFiltersCallable(const Model::ListVocabularyFiltersRequest& request) const;

        /**
         * An Async wrapper for ListVocabularyFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVocabularyFiltersAsync(const Model::ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous analytics job that not only transcribes the audio
         * recording of a caller and agent, but also returns additional insights. These
         * insights include how quickly or loudly the caller or agent was speaking. To
         * retrieve additional insights with your analytics jobs, create categories. A
         * category is a way to classify analytics jobs based on attributes, such as a
         * customer's sentiment or a particular phrase being used during the call. For more
         * information, see the operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartCallAnalyticsJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCallAnalyticsJobOutcome StartCallAnalyticsJob(const Model::StartCallAnalyticsJobRequest& request) const;

        /**
         * A Callable wrapper for StartCallAnalyticsJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCallAnalyticsJobOutcomeCallable StartCallAnalyticsJobCallable(const Model::StartCallAnalyticsJobRequest& request) const;

        /**
         * An Async wrapper for StartCallAnalyticsJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCallAnalyticsJobAsync(const Model::StartCallAnalyticsJobRequest& request, const StartCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMedicalTranscriptionJobOutcome StartMedicalTranscriptionJob(const Model::StartMedicalTranscriptionJobRequest& request) const;

        /**
         * A Callable wrapper for StartMedicalTranscriptionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMedicalTranscriptionJobOutcomeCallable StartMedicalTranscriptionJobCallable(const Model::StartMedicalTranscriptionJobRequest& request) const;

        /**
         * An Async wrapper for StartMedicalTranscriptionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMedicalTranscriptionJobAsync(const Model::StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTranscriptionJobOutcome StartTranscriptionJob(const Model::StartTranscriptionJobRequest& request) const;

        /**
         * A Callable wrapper for StartTranscriptionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTranscriptionJobOutcomeCallable StartTranscriptionJobCallable(const Model::StartTranscriptionJobRequest& request) const;

        /**
         * An Async wrapper for StartTranscriptionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTranscriptionJobAsync(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags an Amazon Transcribe resource with the given list of tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes specified tags from a specified Amazon Transcribe
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the call analytics category with new values. The
         * <code>UpdateCallAnalyticsCategory</code> operation overwrites all of the
         * existing information with the values that you provide in the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateCallAnalyticsCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCallAnalyticsCategoryOutcome UpdateCallAnalyticsCategory(const Model::UpdateCallAnalyticsCategoryRequest& request) const;

        /**
         * A Callable wrapper for UpdateCallAnalyticsCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCallAnalyticsCategoryOutcomeCallable UpdateCallAnalyticsCategoryCallable(const Model::UpdateCallAnalyticsCategoryRequest& request) const;

        /**
         * An Async wrapper for UpdateCallAnalyticsCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCallAnalyticsCategoryAsync(const Model::UpdateCallAnalyticsCategoryRequest& request, const UpdateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a vocabulary with new values that you provide in a different text
         * file from the one you used to create the vocabulary. The
         * <code>UpdateMedicalVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMedicalVocabularyOutcome UpdateMedicalVocabulary(const Model::UpdateMedicalVocabularyRequest& request) const;

        /**
         * A Callable wrapper for UpdateMedicalVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMedicalVocabularyOutcomeCallable UpdateMedicalVocabularyCallable(const Model::UpdateMedicalVocabularyRequest& request) const;

        /**
         * An Async wrapper for UpdateMedicalVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMedicalVocabularyAsync(const Model::UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing vocabulary with new values. The
         * <code>UpdateVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVocabularyOutcome UpdateVocabulary(const Model::UpdateVocabularyRequest& request) const;

        /**
         * A Callable wrapper for UpdateVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVocabularyOutcomeCallable UpdateVocabularyCallable(const Model::UpdateVocabularyRequest& request) const;

        /**
         * An Async wrapper for UpdateVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVocabularyAsync(const Model::UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a vocabulary filter with a new list of filtered words.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVocabularyFilterOutcome UpdateVocabularyFilter(const Model::UpdateVocabularyFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateVocabularyFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVocabularyFilterOutcomeCallable UpdateVocabularyFilterCallable(const Model::UpdateVocabularyFilterRequest& request) const;

        /**
         * An Async wrapper for UpdateVocabularyFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVocabularyFilterAsync(const Model::UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCallAnalyticsCategoryAsyncHelper(const Model::CreateCallAnalyticsCategoryRequest& request, const CreateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLanguageModelAsyncHelper(const Model::CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMedicalVocabularyAsyncHelper(const Model::CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVocabularyAsyncHelper(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVocabularyFilterAsyncHelper(const Model::CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCallAnalyticsCategoryAsyncHelper(const Model::DeleteCallAnalyticsCategoryRequest& request, const DeleteCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCallAnalyticsJobAsyncHelper(const Model::DeleteCallAnalyticsJobRequest& request, const DeleteCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLanguageModelAsyncHelper(const Model::DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMedicalTranscriptionJobAsyncHelper(const Model::DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMedicalVocabularyAsyncHelper(const Model::DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTranscriptionJobAsyncHelper(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyAsyncHelper(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyFilterAsyncHelper(const Model::DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLanguageModelAsyncHelper(const Model::DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCallAnalyticsCategoryAsyncHelper(const Model::GetCallAnalyticsCategoryRequest& request, const GetCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCallAnalyticsJobAsyncHelper(const Model::GetCallAnalyticsJobRequest& request, const GetCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMedicalTranscriptionJobAsyncHelper(const Model::GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMedicalVocabularyAsyncHelper(const Model::GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTranscriptionJobAsyncHelper(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyAsyncHelper(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyFilterAsyncHelper(const Model::GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCallAnalyticsCategoriesAsyncHelper(const Model::ListCallAnalyticsCategoriesRequest& request, const ListCallAnalyticsCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCallAnalyticsJobsAsyncHelper(const Model::ListCallAnalyticsJobsRequest& request, const ListCallAnalyticsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLanguageModelsAsyncHelper(const Model::ListLanguageModelsRequest& request, const ListLanguageModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMedicalTranscriptionJobsAsyncHelper(const Model::ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMedicalVocabulariesAsyncHelper(const Model::ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTranscriptionJobsAsyncHelper(const Model::ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabulariesAsyncHelper(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabularyFiltersAsyncHelper(const Model::ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCallAnalyticsJobAsyncHelper(const Model::StartCallAnalyticsJobRequest& request, const StartCallAnalyticsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMedicalTranscriptionJobAsyncHelper(const Model::StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTranscriptionJobAsyncHelper(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCallAnalyticsCategoryAsyncHelper(const Model::UpdateCallAnalyticsCategoryRequest& request, const UpdateCallAnalyticsCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMedicalVocabularyAsyncHelper(const Model::UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyAsyncHelper(const Model::UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyFilterAsyncHelper(const Model::UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TranscribeService
} // namespace Aws
