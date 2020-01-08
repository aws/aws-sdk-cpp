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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/translate/model/DescribeTextTranslationJobResult.h>
#include <aws/translate/model/GetTerminologyResult.h>
#include <aws/translate/model/ImportTerminologyResult.h>
#include <aws/translate/model/ListTerminologiesResult.h>
#include <aws/translate/model/ListTextTranslationJobsResult.h>
#include <aws/translate/model/StartTextTranslationJobResult.h>
#include <aws/translate/model/StopTextTranslationJobResult.h>
#include <aws/translate/model/TranslateTextResult.h>
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

namespace Translate
{

namespace Model
{
        class DeleteTerminologyRequest;
        class DescribeTextTranslationJobRequest;
        class GetTerminologyRequest;
        class ImportTerminologyRequest;
        class ListTerminologiesRequest;
        class ListTextTranslationJobsRequest;
        class StartTextTranslationJobRequest;
        class StopTextTranslationJobRequest;
        class TranslateTextRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<TranslateErrors>> DeleteTerminologyOutcome;
        typedef Aws::Utils::Outcome<DescribeTextTranslationJobResult, Aws::Client::AWSError<TranslateErrors>> DescribeTextTranslationJobOutcome;
        typedef Aws::Utils::Outcome<GetTerminologyResult, Aws::Client::AWSError<TranslateErrors>> GetTerminologyOutcome;
        typedef Aws::Utils::Outcome<ImportTerminologyResult, Aws::Client::AWSError<TranslateErrors>> ImportTerminologyOutcome;
        typedef Aws::Utils::Outcome<ListTerminologiesResult, Aws::Client::AWSError<TranslateErrors>> ListTerminologiesOutcome;
        typedef Aws::Utils::Outcome<ListTextTranslationJobsResult, Aws::Client::AWSError<TranslateErrors>> ListTextTranslationJobsOutcome;
        typedef Aws::Utils::Outcome<StartTextTranslationJobResult, Aws::Client::AWSError<TranslateErrors>> StartTextTranslationJobOutcome;
        typedef Aws::Utils::Outcome<StopTextTranslationJobResult, Aws::Client::AWSError<TranslateErrors>> StopTextTranslationJobOutcome;
        typedef Aws::Utils::Outcome<TranslateTextResult, Aws::Client::AWSError<TranslateErrors>> TranslateTextOutcome;

        typedef std::future<DeleteTerminologyOutcome> DeleteTerminologyOutcomeCallable;
        typedef std::future<DescribeTextTranslationJobOutcome> DescribeTextTranslationJobOutcomeCallable;
        typedef std::future<GetTerminologyOutcome> GetTerminologyOutcomeCallable;
        typedef std::future<ImportTerminologyOutcome> ImportTerminologyOutcomeCallable;
        typedef std::future<ListTerminologiesOutcome> ListTerminologiesOutcomeCallable;
        typedef std::future<ListTextTranslationJobsOutcome> ListTextTranslationJobsOutcomeCallable;
        typedef std::future<StartTextTranslationJobOutcome> StartTextTranslationJobOutcomeCallable;
        typedef std::future<StopTextTranslationJobOutcome> StopTextTranslationJobOutcomeCallable;
        typedef std::future<TranslateTextOutcome> TranslateTextOutcomeCallable;
} // namespace Model

  class TranslateClient;

    typedef std::function<void(const TranslateClient*, const Model::DeleteTerminologyRequest&, const Model::DeleteTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DescribeTextTranslationJobRequest&, const Model::DescribeTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::GetTerminologyRequest&, const Model::GetTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ImportTerminologyRequest&, const Model::ImportTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTerminologiesRequest&, const Model::ListTerminologiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTerminologiesResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTextTranslationJobsRequest&, const Model::ListTextTranslationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTextTranslationJobsResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::StartTextTranslationJobRequest&, const Model::StartTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::StopTextTranslationJobRequest&, const Model::StopTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::TranslateTextRequest&, const Model::TranslateTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TranslateTextResponseReceivedHandler;

  /**
   * <p>Provides translation between one source language and another of the same set
   * of languages.</p>
   */
  class AWS_TRANSLATE_API TranslateClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TranslateClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TranslateClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TranslateClient();

        inline virtual const char* GetServiceClientName() const override { return "Translate"; }


        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTerminologyOutcome DeleteTerminology(const Model::DeleteTerminologyRequest& request) const;

        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTerminologyOutcomeCallable DeleteTerminologyCallable(const Model::DeleteTerminologyRequest& request) const;

        /**
         * <p>A synchronous action that deletes a custom terminology.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteTerminology">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTerminologyAsync(const Model::DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with an asycnhronous batch translation job
         * including name, ID, status, source and target languages, input/output S3
         * buckets, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DescribeTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTextTranslationJobOutcome DescribeTextTranslationJob(const Model::DescribeTextTranslationJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an asycnhronous batch translation job
         * including name, ID, status, source and target languages, input/output S3
         * buckets, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DescribeTextTranslationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTextTranslationJobOutcomeCallable DescribeTextTranslationJobCallable(const Model::DescribeTextTranslationJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an asycnhronous batch translation job
         * including name, ID, status, source and target languages, input/output S3
         * buckets, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DescribeTextTranslationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTextTranslationJobAsync(const Model::DescribeTextTranslationJobRequest& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTerminologyOutcome GetTerminology(const Model::GetTerminologyRequest& request) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTerminologyOutcomeCallable GetTerminologyCallable(const Model::GetTerminologyRequest& request) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTerminologyAsync(const Model::GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a custom terminology, depending on whether or not one
         * already exists for the given terminology name. Importing a terminology with the
         * same name as an existing one will merge the terminologies based on the chosen
         * merge strategy. Currently, the only supported merge strategy is OVERWRITE, and
         * so the imported terminology will overwrite an existing terminology of the same
         * name.</p> <p>If you import a terminology that overwrites an existing one, the
         * new terminology take up to 10 minutes to fully propagate and be available for
         * use in a translation due to cache policies with the DataPlane service that
         * performs the translations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportTerminologyOutcome ImportTerminology(const Model::ImportTerminologyRequest& request) const;

        /**
         * <p>Creates or updates a custom terminology, depending on whether or not one
         * already exists for the given terminology name. Importing a terminology with the
         * same name as an existing one will merge the terminologies based on the chosen
         * merge strategy. Currently, the only supported merge strategy is OVERWRITE, and
         * so the imported terminology will overwrite an existing terminology of the same
         * name.</p> <p>If you import a terminology that overwrites an existing one, the
         * new terminology take up to 10 minutes to fully propagate and be available for
         * use in a translation due to cache policies with the DataPlane service that
         * performs the translations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportTerminologyOutcomeCallable ImportTerminologyCallable(const Model::ImportTerminologyRequest& request) const;

        /**
         * <p>Creates or updates a custom terminology, depending on whether or not one
         * already exists for the given terminology name. Importing a terminology with the
         * same name as an existing one will merge the terminologies based on the chosen
         * merge strategy. Currently, the only supported merge strategy is OVERWRITE, and
         * so the imported terminology will overwrite an existing terminology of the same
         * name.</p> <p>If you import a terminology that overwrites an existing one, the
         * new terminology take up to 10 minutes to fully propagate and be available for
         * use in a translation due to cache policies with the DataPlane service that
         * performs the translations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ImportTerminology">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportTerminologyAsync(const Model::ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTerminologiesOutcome ListTerminologies(const Model::ListTerminologiesRequest& request) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTerminologiesOutcomeCallable ListTerminologiesCallable(const Model::ListTerminologiesRequest& request) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTerminologiesAsync(const Model::ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the batch translation jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTextTranslationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTextTranslationJobsOutcome ListTextTranslationJobs(const Model::ListTextTranslationJobsRequest& request) const;

        /**
         * <p>Gets a list of the batch translation jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTextTranslationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTextTranslationJobsOutcomeCallable ListTextTranslationJobsCallable(const Model::ListTextTranslationJobsRequest& request) const;

        /**
         * <p>Gets a list of the batch translation jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTextTranslationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTextTranslationJobsAsync(const Model::ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous batch translation job. Batch translation jobs can be
         * used to translate large volumes of text across multiple documents at once. For
         * more information, see <a>async</a>.</p> <p>Batch translation jobs can be
         * described with the <a>DescribeTextTranslationJob</a> operation, listed with the
         * <a>ListTextTranslationJobs</a> operation, and stopped with the
         * <a>StopTextTranslationJob</a> operation.</p> <note> <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StartTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTextTranslationJobOutcome StartTextTranslationJob(const Model::StartTextTranslationJobRequest& request) const;

        /**
         * <p>Starts an asynchronous batch translation job. Batch translation jobs can be
         * used to translate large volumes of text across multiple documents at once. For
         * more information, see <a>async</a>.</p> <p>Batch translation jobs can be
         * described with the <a>DescribeTextTranslationJob</a> operation, listed with the
         * <a>ListTextTranslationJobs</a> operation, and stopped with the
         * <a>StopTextTranslationJob</a> operation.</p> <note> <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StartTextTranslationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTextTranslationJobOutcomeCallable StartTextTranslationJobCallable(const Model::StartTextTranslationJobRequest& request) const;

        /**
         * <p>Starts an asynchronous batch translation job. Batch translation jobs can be
         * used to translate large volumes of text across multiple documents at once. For
         * more information, see <a>async</a>.</p> <p>Batch translation jobs can be
         * described with the <a>DescribeTextTranslationJob</a> operation, listed with the
         * <a>ListTextTranslationJobs</a> operation, and stopped with the
         * <a>StopTextTranslationJob</a> operation.</p> <note> <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StartTextTranslationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTextTranslationJobAsync(const Model::StartTextTranslationJobRequest& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTextTranslationJobOutcomeCallable StopTextTranslationJobCallable(const Model::StopTextTranslationJobRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTextTranslationJobAsync(const Model::StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Translates input text from the source language to the target language. For a
         * list of available languages and language codes, see
         * <a>what-is-languages</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         */
        virtual Model::TranslateTextOutcome TranslateText(const Model::TranslateTextRequest& request) const;

        /**
         * <p>Translates input text from the source language to the target language. For a
         * list of available languages and language codes, see
         * <a>what-is-languages</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TranslateTextOutcomeCallable TranslateTextCallable(const Model::TranslateTextRequest& request) const;

        /**
         * <p>Translates input text from the source language to the target language. For a
         * list of available languages and language codes, see
         * <a>what-is-languages</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TranslateText">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TranslateTextAsync(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DeleteTerminologyAsyncHelper(const Model::DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTextTranslationJobAsyncHelper(const Model::DescribeTextTranslationJobRequest& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTerminologyAsyncHelper(const Model::GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportTerminologyAsyncHelper(const Model::ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTerminologiesAsyncHelper(const Model::ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTextTranslationJobsAsyncHelper(const Model::ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTextTranslationJobAsyncHelper(const Model::StartTextTranslationJobRequest& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTextTranslationJobAsyncHelper(const Model::StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TranslateTextAsyncHelper(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Translate
} // namespace Aws
