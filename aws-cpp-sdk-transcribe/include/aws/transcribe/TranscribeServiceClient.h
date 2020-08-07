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
#include <aws/transcribe/model/CreateLanguageModelResult.h>
#include <aws/transcribe/model/CreateMedicalVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyResult.h>
#include <aws/transcribe/model/CreateVocabularyFilterResult.h>
#include <aws/transcribe/model/DescribeLanguageModelResult.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/GetMedicalVocabularyResult.h>
#include <aws/transcribe/model/GetTranscriptionJobResult.h>
#include <aws/transcribe/model/GetVocabularyResult.h>
#include <aws/transcribe/model/GetVocabularyFilterResult.h>
#include <aws/transcribe/model/ListLanguageModelsResult.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListMedicalVocabulariesResult.h>
#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListVocabulariesResult.h>
#include <aws/transcribe/model/ListVocabularyFiltersResult.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobResult.h>
#include <aws/transcribe/model/StartTranscriptionJobResult.h>
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
        class CreateLanguageModelRequest;
        class CreateMedicalVocabularyRequest;
        class CreateVocabularyRequest;
        class CreateVocabularyFilterRequest;
        class DeleteLanguageModelRequest;
        class DeleteMedicalTranscriptionJobRequest;
        class DeleteMedicalVocabularyRequest;
        class DeleteTranscriptionJobRequest;
        class DeleteVocabularyRequest;
        class DeleteVocabularyFilterRequest;
        class DescribeLanguageModelRequest;
        class GetMedicalTranscriptionJobRequest;
        class GetMedicalVocabularyRequest;
        class GetTranscriptionJobRequest;
        class GetVocabularyRequest;
        class GetVocabularyFilterRequest;
        class ListLanguageModelsRequest;
        class ListMedicalTranscriptionJobsRequest;
        class ListMedicalVocabulariesRequest;
        class ListTranscriptionJobsRequest;
        class ListVocabulariesRequest;
        class ListVocabularyFiltersRequest;
        class StartMedicalTranscriptionJobRequest;
        class StartTranscriptionJobRequest;
        class UpdateMedicalVocabularyRequest;
        class UpdateVocabularyRequest;
        class UpdateVocabularyFilterRequest;

        typedef Aws::Utils::Outcome<CreateLanguageModelResult, TranscribeServiceError> CreateLanguageModelOutcome;
        typedef Aws::Utils::Outcome<CreateMedicalVocabularyResult, TranscribeServiceError> CreateMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<CreateVocabularyResult, TranscribeServiceError> CreateVocabularyOutcome;
        typedef Aws::Utils::Outcome<CreateVocabularyFilterResult, TranscribeServiceError> CreateVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteLanguageModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteVocabularyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeServiceError> DeleteVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<DescribeLanguageModelResult, TranscribeServiceError> DescribeLanguageModelOutcome;
        typedef Aws::Utils::Outcome<GetMedicalTranscriptionJobResult, TranscribeServiceError> GetMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetMedicalVocabularyResult, TranscribeServiceError> GetMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<GetTranscriptionJobResult, TranscribeServiceError> GetTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyResult, TranscribeServiceError> GetVocabularyOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyFilterResult, TranscribeServiceError> GetVocabularyFilterOutcome;
        typedef Aws::Utils::Outcome<ListLanguageModelsResult, TranscribeServiceError> ListLanguageModelsOutcome;
        typedef Aws::Utils::Outcome<ListMedicalTranscriptionJobsResult, TranscribeServiceError> ListMedicalTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListMedicalVocabulariesResult, TranscribeServiceError> ListMedicalVocabulariesOutcome;
        typedef Aws::Utils::Outcome<ListTranscriptionJobsResult, TranscribeServiceError> ListTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListVocabulariesResult, TranscribeServiceError> ListVocabulariesOutcome;
        typedef Aws::Utils::Outcome<ListVocabularyFiltersResult, TranscribeServiceError> ListVocabularyFiltersOutcome;
        typedef Aws::Utils::Outcome<StartMedicalTranscriptionJobResult, TranscribeServiceError> StartMedicalTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<StartTranscriptionJobResult, TranscribeServiceError> StartTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<UpdateMedicalVocabularyResult, TranscribeServiceError> UpdateMedicalVocabularyOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyResult, TranscribeServiceError> UpdateVocabularyOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyFilterResult, TranscribeServiceError> UpdateVocabularyFilterOutcome;

        typedef std::future<CreateLanguageModelOutcome> CreateLanguageModelOutcomeCallable;
        typedef std::future<CreateMedicalVocabularyOutcome> CreateMedicalVocabularyOutcomeCallable;
        typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
        typedef std::future<CreateVocabularyFilterOutcome> CreateVocabularyFilterOutcomeCallable;
        typedef std::future<DeleteLanguageModelOutcome> DeleteLanguageModelOutcomeCallable;
        typedef std::future<DeleteMedicalTranscriptionJobOutcome> DeleteMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteMedicalVocabularyOutcome> DeleteMedicalVocabularyOutcomeCallable;
        typedef std::future<DeleteTranscriptionJobOutcome> DeleteTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
        typedef std::future<DeleteVocabularyFilterOutcome> DeleteVocabularyFilterOutcomeCallable;
        typedef std::future<DescribeLanguageModelOutcome> DescribeLanguageModelOutcomeCallable;
        typedef std::future<GetMedicalTranscriptionJobOutcome> GetMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<GetMedicalVocabularyOutcome> GetMedicalVocabularyOutcomeCallable;
        typedef std::future<GetTranscriptionJobOutcome> GetTranscriptionJobOutcomeCallable;
        typedef std::future<GetVocabularyOutcome> GetVocabularyOutcomeCallable;
        typedef std::future<GetVocabularyFilterOutcome> GetVocabularyFilterOutcomeCallable;
        typedef std::future<ListLanguageModelsOutcome> ListLanguageModelsOutcomeCallable;
        typedef std::future<ListMedicalTranscriptionJobsOutcome> ListMedicalTranscriptionJobsOutcomeCallable;
        typedef std::future<ListMedicalVocabulariesOutcome> ListMedicalVocabulariesOutcomeCallable;
        typedef std::future<ListTranscriptionJobsOutcome> ListTranscriptionJobsOutcomeCallable;
        typedef std::future<ListVocabulariesOutcome> ListVocabulariesOutcomeCallable;
        typedef std::future<ListVocabularyFiltersOutcome> ListVocabularyFiltersOutcomeCallable;
        typedef std::future<StartMedicalTranscriptionJobOutcome> StartMedicalTranscriptionJobOutcomeCallable;
        typedef std::future<StartTranscriptionJobOutcome> StartTranscriptionJobOutcomeCallable;
        typedef std::future<UpdateMedicalVocabularyOutcome> UpdateMedicalVocabularyOutcomeCallable;
        typedef std::future<UpdateVocabularyOutcome> UpdateVocabularyOutcomeCallable;
        typedef std::future<UpdateVocabularyFilterOutcome> UpdateVocabularyFilterOutcomeCallable;
} // namespace Model

  class TranscribeServiceClient;

    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateLanguageModelRequest&, const Model::CreateLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateMedicalVocabularyRequest&, const Model::CreateMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyFilterRequest&, const Model::CreateVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteLanguageModelRequest&, const Model::DeleteLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalTranscriptionJobRequest&, const Model::DeleteMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteMedicalVocabularyRequest&, const Model::DeleteMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteTranscriptionJobRequest&, const Model::DeleteTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyFilterRequest&, const Model::DeleteVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DescribeLanguageModelRequest&, const Model::DescribeLanguageModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLanguageModelResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalTranscriptionJobRequest&, const Model::GetMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetMedicalVocabularyRequest&, const Model::GetMedicalVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMedicalVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetTranscriptionJobRequest&, const Model::GetTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyRequest&, const Model::GetVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyFilterRequest&, const Model::GetVocabularyFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyFilterResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListLanguageModelsRequest&, const Model::ListLanguageModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLanguageModelsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalTranscriptionJobsRequest&, const Model::ListMedicalTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListMedicalVocabulariesRequest&, const Model::ListMedicalVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMedicalVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTranscriptionJobsRequest&, const Model::ListTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabulariesRequest&, const Model::ListVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabularyFiltersRequest&, const Model::ListVocabularyFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabularyFiltersResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartMedicalTranscriptionJobRequest&, const Model::StartMedicalTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMedicalTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartTranscriptionJobRequest&, const Model::StartTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTranscriptionJobResponseReceivedHandler;
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
         * <p>Creates a new custom language model. Use Amazon S3 prefixes to provide the
         * location of your input files. The time it takes to create your model depends on
         * the size of your training data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLanguageModelOutcome CreateLanguageModel(const Model::CreateLanguageModelRequest& request) const;

        /**
         * <p>Creates a new custom language model. Use Amazon S3 prefixes to provide the
         * location of your input files. The time it takes to create your model depends on
         * the size of your training data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateLanguageModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLanguageModelOutcomeCallable CreateLanguageModelCallable(const Model::CreateLanguageModelRequest& request) const;

        /**
         * <p>Creates a new custom language model. Use Amazon S3 prefixes to provide the
         * location of your input files. The time it takes to create your model depends on
         * the size of your training data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateLanguageModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLanguageModelAsync(const Model::CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change how Amazon
         * Transcribe Medical transcribes your audio file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMedicalVocabularyOutcome CreateMedicalVocabulary(const Model::CreateMedicalVocabularyRequest& request) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change how Amazon
         * Transcribe Medical transcribes your audio file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMedicalVocabularyOutcomeCallable CreateMedicalVocabularyCallable(const Model::CreateMedicalVocabularyRequest& request) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change how Amazon
         * Transcribe Medical transcribes your audio file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMedicalVocabularyAsync(const Model::CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change the way Amazon
         * Transcribe handles transcription of an audio file. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change the way Amazon
         * Transcribe handles transcription of an audio file. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyOutcomeCallable CreateVocabularyCallable(const Model::CreateVocabularyRequest& request) const;

        /**
         * <p>Creates a new custom vocabulary that you can use to change the way Amazon
         * Transcribe handles transcription of an audio file. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyAsync(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words, such as
         * profane words, from the output of a transcription job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyFilterOutcome CreateVocabularyFilter(const Model::CreateVocabularyFilterRequest& request) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words, such as
         * profane words, from the output of a transcription job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVocabularyFilterOutcomeCallable CreateVocabularyFilterCallable(const Model::CreateVocabularyFilterRequest& request) const;

        /**
         * <p>Creates a new vocabulary filter that you can use to filter words, such as
         * profane words, from the output of a transcription job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CreateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVocabularyFilterAsync(const Model::CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom language model using its name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLanguageModelOutcome DeleteLanguageModel(const Model::DeleteLanguageModelRequest& request) const;

        /**
         * <p>Deletes a custom language model using its name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteLanguageModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLanguageModelOutcomeCallable DeleteLanguageModelCallable(const Model::DeleteLanguageModelRequest& request) const;

        /**
         * <p>Deletes a custom language model using its name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteLanguageModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLanguageModelAsync(const Model::DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a transcription job generated by Amazon Transcribe Medical and any
         * related information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcome DeleteMedicalTranscriptionJob(const Model::DeleteMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a transcription job generated by Amazon Transcribe Medical and any
         * related information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMedicalTranscriptionJobOutcomeCallable DeleteMedicalTranscriptionJobCallable(const Model::DeleteMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a transcription job generated by Amazon Transcribe Medical and any
         * related information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMedicalTranscriptionJobAsync(const Model::DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe Medical.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMedicalVocabularyOutcome DeleteMedicalVocabulary(const Model::DeleteMedicalVocabularyRequest& request) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe Medical.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMedicalVocabularyOutcomeCallable DeleteMedicalVocabularyCallable(const Model::DeleteMedicalVocabularyRequest& request) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe Medical.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMedicalVocabularyAsync(const Model::DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a previously submitted transcription job along with any other
         * generated results such as the transcription, models, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTranscriptionJobOutcome DeleteTranscriptionJob(const Model::DeleteTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a previously submitted transcription job along with any other
         * generated results such as the transcription, models, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTranscriptionJobOutcomeCallable DeleteTranscriptionJobCallable(const Model::DeleteTranscriptionJobRequest& request) const;

        /**
         * <p>Deletes a previously submitted transcription job along with any other
         * generated results such as the transcription, models, and so on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTranscriptionJobAsync(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyOutcomeCallable DeleteVocabularyCallable(const Model::DeleteVocabularyRequest& request) const;

        /**
         * <p>Deletes a vocabulary from Amazon Transcribe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyAsync(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyFilterOutcome DeleteVocabularyFilter(const Model::DeleteVocabularyFilterRequest& request) const;

        /**
         * <p>Removes a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVocabularyFilterOutcomeCallable DeleteVocabularyFilterCallable(const Model::DeleteVocabularyFilterRequest& request) const;

        /**
         * <p>Removes a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DeleteVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVocabularyFilterAsync(const Model::DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a single custom language model. Use this information
         * to see details about the language model in your AWS account. You can also see
         * whether the base language model used to create your custom language model has
         * been updated. If Amazon Transcribe has updated the base model, you can create a
         * new custom language model using the updated base model. If the language model
         * wasn't created, you can use this operation to understand why Amazon Transcribe
         * couldn't create it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DescribeLanguageModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLanguageModelOutcome DescribeLanguageModel(const Model::DescribeLanguageModelRequest& request) const;

        /**
         * <p>Gets information about a single custom language model. Use this information
         * to see details about the language model in your AWS account. You can also see
         * whether the base language model used to create your custom language model has
         * been updated. If Amazon Transcribe has updated the base model, you can create a
         * new custom language model using the updated base model. If the language model
         * wasn't created, you can use this operation to understand why Amazon Transcribe
         * couldn't create it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DescribeLanguageModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLanguageModelOutcomeCallable DescribeLanguageModelCallable(const Model::DescribeLanguageModelRequest& request) const;

        /**
         * <p>Gets information about a single custom language model. Use this information
         * to see details about the language model in your AWS account. You can also see
         * whether the base language model used to create your custom language model has
         * been updated. If Amazon Transcribe has updated the base model, you can create a
         * new custom language model using the updated base model. If the language model
         * wasn't created, you can use this operation to understand why Amazon Transcribe
         * couldn't create it. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/DescribeLanguageModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLanguageModelAsync(const Model::DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transcription job from Amazon Transcribe Medical.
         * To see the status of the job, check the <code>TranscriptionJobStatus</code>
         * field. If the status is <code>COMPLETED</code>, the job is finished. You find
         * the results of the completed job in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMedicalTranscriptionJobOutcome GetMedicalTranscriptionJob(const Model::GetMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job from Amazon Transcribe Medical.
         * To see the status of the job, check the <code>TranscriptionJobStatus</code>
         * field. If the status is <code>COMPLETED</code>, the job is finished. You find
         * the results of the completed job in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMedicalTranscriptionJobOutcomeCallable GetMedicalTranscriptionJobCallable(const Model::GetMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job from Amazon Transcribe Medical.
         * To see the status of the job, check the <code>TranscriptionJobStatus</code>
         * field. If the status is <code>COMPLETED</code>, the job is finished. You find
         * the results of the completed job in the <code>TranscriptFileUri</code>
         * field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about a medical vocabulary.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMedicalVocabularyOutcomeCallable GetMedicalVocabularyCallable(const Model::GetMedicalVocabularyRequest& request) const;

        /**
         * <p>Retrieves information about a medical vocabulary.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptFileUri</code> field. If you enable
         * content redaction, the redacted transcript appears in
         * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTranscriptionJobOutcomeCallable GetTranscriptionJobCallable(const Model::GetTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptFileUri</code> field. If you enable
         * content redaction, the redacted transcript appears in
         * <code>RedactedTranscriptFileUri</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTranscriptionJobAsync(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyOutcome GetVocabulary(const Model::GetVocabularyRequest& request) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVocabularyOutcomeCallable GetVocabularyCallable(const Model::GetVocabularyRequest& request) const;

        /**
         * <p>Gets information about a vocabulary. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVocabularyAsync(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVocabularyFilterOutcome GetVocabularyFilter(const Model::GetVocabularyFilterRequest& request) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVocabularyFilterOutcomeCallable GetVocabularyFilterCallable(const Model::GetVocabularyFilterRequest& request) const;

        /**
         * <p>Returns information about a vocabulary filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVocabularyFilterAsync(const Model::GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Provides more information about the custom language models you've created.
         * You can use the information in this list to find a specific custom language
         * model. You can then use the operation to get more information about
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListLanguageModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLanguageModelsOutcomeCallable ListLanguageModelsCallable(const Model::ListLanguageModelsRequest& request) const;

        /**
         * <p>Provides more information about the custom language models you've created.
         * You can use the information in this list to find a specific custom language
         * model. You can then use the operation to get more information about
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListLanguageModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists medical transcription jobs with a specified status or substring that
         * matches their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMedicalTranscriptionJobsOutcomeCallable ListMedicalTranscriptionJobsCallable(const Model::ListMedicalTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists medical transcription jobs with a specified status or substring that
         * matches their names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of vocabularies that match the specified criteria. If you
         * don't enter a value in any of the request parameters, returns the entire list of
         * vocabularies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalVocabularies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMedicalVocabulariesOutcomeCallable ListMedicalVocabulariesCallable(const Model::ListMedicalVocabulariesRequest& request) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If you
         * don't enter a value in any of the request parameters, returns the entire list of
         * vocabularies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListMedicalVocabularies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMedicalVocabulariesAsync(const Model::ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTranscriptionJobsOutcome ListTranscriptionJobs(const Model::ListTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTranscriptionJobsOutcomeCallable ListTranscriptionJobsCallable(const Model::ListTranscriptionJobsRequest& request) const;

        /**
         * <p>Lists transcription jobs with the specified status.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListTranscriptionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of vocabularies that match the specified criteria. If no
         * criteria are specified, returns the entire list of vocabularies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVocabulariesOutcomeCallable ListVocabulariesCallable(const Model::ListVocabulariesRequest& request) const;

        /**
         * <p>Returns a list of vocabularies that match the specified criteria. If no
         * criteria are specified, returns the entire list of vocabularies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVocabulariesAsync(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVocabularyFiltersOutcome ListVocabularyFilters(const Model::ListVocabularyFiltersRequest& request) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVocabularyFiltersOutcomeCallable ListVocabularyFiltersCallable(const Model::ListVocabularyFiltersRequest& request) const;

        /**
         * <p>Gets information about vocabulary filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/ListVocabularyFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVocabularyFiltersAsync(const Model::ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMedicalTranscriptionJobOutcome StartMedicalTranscriptionJob(const Model::StartMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Starts a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMedicalTranscriptionJobOutcomeCallable StartMedicalTranscriptionJobCallable(const Model::StartMedicalTranscriptionJobRequest& request) const;

        /**
         * <p>Starts a batch job to transcribe medical speech to text.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartMedicalTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMedicalTranscriptionJobAsync(const Model::StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTranscriptionJobOutcome StartTranscriptionJob(const Model::StartTranscriptionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTranscriptionJobOutcomeCallable StartTranscriptionJobCallable(const Model::StartTranscriptionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to transcribe speech to text. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/StartTranscriptionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTranscriptionJobAsync(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates a vocabulary with new values that you provide in a different text
         * file from the one you used to create the vocabulary. The
         * <code>UpdateMedicalVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMedicalVocabularyOutcomeCallable UpdateMedicalVocabularyCallable(const Model::UpdateMedicalVocabularyRequest& request) const;

        /**
         * <p>Updates a vocabulary with new values that you provide in a different text
         * file from the one you used to create the vocabulary. The
         * <code>UpdateMedicalVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateMedicalVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates an existing vocabulary with new values. The
         * <code>UpdateVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVocabularyOutcomeCallable UpdateVocabularyCallable(const Model::UpdateVocabularyRequest& request) const;

        /**
         * <p>Updates an existing vocabulary with new values. The
         * <code>UpdateVocabulary</code> operation overwrites all of the existing
         * information with the values that you provide in the request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabulary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a vocabulary filter with a new list of filtered words.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVocabularyFilterOutcomeCallable UpdateVocabularyFilterCallable(const Model::UpdateVocabularyFilterRequest& request) const;

        /**
         * <p>Updates a vocabulary filter with a new list of filtered words.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/UpdateVocabularyFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVocabularyFilterAsync(const Model::UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateLanguageModelAsyncHelper(const Model::CreateLanguageModelRequest& request, const CreateLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMedicalVocabularyAsyncHelper(const Model::CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVocabularyAsyncHelper(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVocabularyFilterAsyncHelper(const Model::CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLanguageModelAsyncHelper(const Model::DeleteLanguageModelRequest& request, const DeleteLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMedicalTranscriptionJobAsyncHelper(const Model::DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMedicalVocabularyAsyncHelper(const Model::DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTranscriptionJobAsyncHelper(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyAsyncHelper(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyFilterAsyncHelper(const Model::DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLanguageModelAsyncHelper(const Model::DescribeLanguageModelRequest& request, const DescribeLanguageModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMedicalTranscriptionJobAsyncHelper(const Model::GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMedicalVocabularyAsyncHelper(const Model::GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTranscriptionJobAsyncHelper(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyAsyncHelper(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyFilterAsyncHelper(const Model::GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLanguageModelsAsyncHelper(const Model::ListLanguageModelsRequest& request, const ListLanguageModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMedicalTranscriptionJobsAsyncHelper(const Model::ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMedicalVocabulariesAsyncHelper(const Model::ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTranscriptionJobsAsyncHelper(const Model::ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabulariesAsyncHelper(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabularyFiltersAsyncHelper(const Model::ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMedicalTranscriptionJobAsyncHelper(const Model::StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTranscriptionJobAsyncHelper(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMedicalVocabularyAsyncHelper(const Model::UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyAsyncHelper(const Model::UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyFilterAsyncHelper(const Model::UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TranscribeService
} // namespace Aws
