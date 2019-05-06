/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/transcribe/model/CreateVocabularyResult.h>
#include <aws/transcribe/model/GetTranscriptionJobResult.h>
#include <aws/transcribe/model/GetVocabularyResult.h>
#include <aws/transcribe/model/ListTranscriptionJobsResult.h>
#include <aws/transcribe/model/ListVocabulariesResult.h>
#include <aws/transcribe/model/StartTranscriptionJobResult.h>
#include <aws/transcribe/model/UpdateVocabularyResult.h>
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
        class CreateVocabularyRequest;
        class DeleteTranscriptionJobRequest;
        class DeleteVocabularyRequest;
        class GetTranscriptionJobRequest;
        class GetVocabularyRequest;
        class ListTranscriptionJobsRequest;
        class ListVocabulariesRequest;
        class StartTranscriptionJobRequest;
        class UpdateVocabularyRequest;

        typedef Aws::Utils::Outcome<CreateVocabularyResult, Aws::Client::AWSError<TranscribeServiceErrors>> CreateVocabularyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeServiceErrors>> DeleteTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranscribeServiceErrors>> DeleteVocabularyOutcome;
        typedef Aws::Utils::Outcome<GetTranscriptionJobResult, Aws::Client::AWSError<TranscribeServiceErrors>> GetTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<GetVocabularyResult, Aws::Client::AWSError<TranscribeServiceErrors>> GetVocabularyOutcome;
        typedef Aws::Utils::Outcome<ListTranscriptionJobsResult, Aws::Client::AWSError<TranscribeServiceErrors>> ListTranscriptionJobsOutcome;
        typedef Aws::Utils::Outcome<ListVocabulariesResult, Aws::Client::AWSError<TranscribeServiceErrors>> ListVocabulariesOutcome;
        typedef Aws::Utils::Outcome<StartTranscriptionJobResult, Aws::Client::AWSError<TranscribeServiceErrors>> StartTranscriptionJobOutcome;
        typedef Aws::Utils::Outcome<UpdateVocabularyResult, Aws::Client::AWSError<TranscribeServiceErrors>> UpdateVocabularyOutcome;

        typedef std::future<CreateVocabularyOutcome> CreateVocabularyOutcomeCallable;
        typedef std::future<DeleteTranscriptionJobOutcome> DeleteTranscriptionJobOutcomeCallable;
        typedef std::future<DeleteVocabularyOutcome> DeleteVocabularyOutcomeCallable;
        typedef std::future<GetTranscriptionJobOutcome> GetTranscriptionJobOutcomeCallable;
        typedef std::future<GetVocabularyOutcome> GetVocabularyOutcomeCallable;
        typedef std::future<ListTranscriptionJobsOutcome> ListTranscriptionJobsOutcomeCallable;
        typedef std::future<ListVocabulariesOutcome> ListVocabulariesOutcomeCallable;
        typedef std::future<StartTranscriptionJobOutcome> StartTranscriptionJobOutcomeCallable;
        typedef std::future<UpdateVocabularyOutcome> UpdateVocabularyOutcomeCallable;
} // namespace Model

  class TranscribeServiceClient;

    typedef std::function<void(const TranscribeServiceClient*, const Model::CreateVocabularyRequest&, const Model::CreateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteTranscriptionJobRequest&, const Model::DeleteTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::DeleteVocabularyRequest&, const Model::DeleteVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetTranscriptionJobRequest&, const Model::GetTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::GetVocabularyRequest&, const Model::GetVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVocabularyResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListTranscriptionJobsRequest&, const Model::ListTranscriptionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTranscriptionJobsResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::ListVocabulariesRequest&, const Model::ListVocabulariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVocabulariesResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::StartTranscriptionJobRequest&, const Model::StartTranscriptionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTranscriptionJobResponseReceivedHandler;
    typedef std::function<void(const TranscribeServiceClient*, const Model::UpdateVocabularyRequest&, const Model::UpdateVocabularyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVocabularyResponseReceivedHandler;

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

        inline virtual const char* GetServiceClientName() const override { return "Transcribe"; }


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
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptionFileUri</code> field.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/GetTranscriptionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTranscriptionJobOutcome GetTranscriptionJob(const Model::GetTranscriptionJobRequest& request) const;

        /**
         * <p>Returns information about a transcription job. To see the status of the job,
         * check the <code>TranscriptionJobStatus</code> field. If the status is
         * <code>COMPLETED</code>, the job is finished and you can find the results at the
         * location specified in the <code>TranscriptionFileUri</code> field.</p><p><h3>See
         * Also:</h3>   <a
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
         * location specified in the <code>TranscriptionFileUri</code> field.</p><p><h3>See
         * Also:</h3>   <a
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateVocabularyAsyncHelper(const Model::CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTranscriptionJobAsyncHelper(const Model::DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVocabularyAsyncHelper(const Model::DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTranscriptionJobAsyncHelper(const Model::GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVocabularyAsyncHelper(const Model::GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTranscriptionJobsAsyncHelper(const Model::ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVocabulariesAsyncHelper(const Model::ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTranscriptionJobAsyncHelper(const Model::StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVocabularyAsyncHelper(const Model::UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TranscribeService
} // namespace Aws
