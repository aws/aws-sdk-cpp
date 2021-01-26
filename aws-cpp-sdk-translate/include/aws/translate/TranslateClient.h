/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/translate/model/CreateParallelDataResult.h>
#include <aws/translate/model/DeleteParallelDataResult.h>
#include <aws/translate/model/DescribeTextTranslationJobResult.h>
#include <aws/translate/model/GetParallelDataResult.h>
#include <aws/translate/model/GetTerminologyResult.h>
#include <aws/translate/model/ImportTerminologyResult.h>
#include <aws/translate/model/ListParallelDataResult.h>
#include <aws/translate/model/ListTerminologiesResult.h>
#include <aws/translate/model/ListTextTranslationJobsResult.h>
#include <aws/translate/model/StartTextTranslationJobResult.h>
#include <aws/translate/model/StopTextTranslationJobResult.h>
#include <aws/translate/model/TranslateTextResult.h>
#include <aws/translate/model/UpdateParallelDataResult.h>
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
        class CreateParallelDataRequest;
        class DeleteParallelDataRequest;
        class DeleteTerminologyRequest;
        class DescribeTextTranslationJobRequest;
        class GetParallelDataRequest;
        class GetTerminologyRequest;
        class ImportTerminologyRequest;
        class ListParallelDataRequest;
        class ListTerminologiesRequest;
        class ListTextTranslationJobsRequest;
        class StartTextTranslationJobRequest;
        class StopTextTranslationJobRequest;
        class TranslateTextRequest;
        class UpdateParallelDataRequest;

        typedef Aws::Utils::Outcome<CreateParallelDataResult, TranslateError> CreateParallelDataOutcome;
        typedef Aws::Utils::Outcome<DeleteParallelDataResult, TranslateError> DeleteParallelDataOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TranslateError> DeleteTerminologyOutcome;
        typedef Aws::Utils::Outcome<DescribeTextTranslationJobResult, TranslateError> DescribeTextTranslationJobOutcome;
        typedef Aws::Utils::Outcome<GetParallelDataResult, TranslateError> GetParallelDataOutcome;
        typedef Aws::Utils::Outcome<GetTerminologyResult, TranslateError> GetTerminologyOutcome;
        typedef Aws::Utils::Outcome<ImportTerminologyResult, TranslateError> ImportTerminologyOutcome;
        typedef Aws::Utils::Outcome<ListParallelDataResult, TranslateError> ListParallelDataOutcome;
        typedef Aws::Utils::Outcome<ListTerminologiesResult, TranslateError> ListTerminologiesOutcome;
        typedef Aws::Utils::Outcome<ListTextTranslationJobsResult, TranslateError> ListTextTranslationJobsOutcome;
        typedef Aws::Utils::Outcome<StartTextTranslationJobResult, TranslateError> StartTextTranslationJobOutcome;
        typedef Aws::Utils::Outcome<StopTextTranslationJobResult, TranslateError> StopTextTranslationJobOutcome;
        typedef Aws::Utils::Outcome<TranslateTextResult, TranslateError> TranslateTextOutcome;
        typedef Aws::Utils::Outcome<UpdateParallelDataResult, TranslateError> UpdateParallelDataOutcome;

        typedef std::future<CreateParallelDataOutcome> CreateParallelDataOutcomeCallable;
        typedef std::future<DeleteParallelDataOutcome> DeleteParallelDataOutcomeCallable;
        typedef std::future<DeleteTerminologyOutcome> DeleteTerminologyOutcomeCallable;
        typedef std::future<DescribeTextTranslationJobOutcome> DescribeTextTranslationJobOutcomeCallable;
        typedef std::future<GetParallelDataOutcome> GetParallelDataOutcomeCallable;
        typedef std::future<GetTerminologyOutcome> GetTerminologyOutcomeCallable;
        typedef std::future<ImportTerminologyOutcome> ImportTerminologyOutcomeCallable;
        typedef std::future<ListParallelDataOutcome> ListParallelDataOutcomeCallable;
        typedef std::future<ListTerminologiesOutcome> ListTerminologiesOutcomeCallable;
        typedef std::future<ListTextTranslationJobsOutcome> ListTextTranslationJobsOutcomeCallable;
        typedef std::future<StartTextTranslationJobOutcome> StartTextTranslationJobOutcomeCallable;
        typedef std::future<StopTextTranslationJobOutcome> StopTextTranslationJobOutcomeCallable;
        typedef std::future<TranslateTextOutcome> TranslateTextOutcomeCallable;
        typedef std::future<UpdateParallelDataOutcome> UpdateParallelDataOutcomeCallable;
} // namespace Model

  class TranslateClient;

    typedef std::function<void(const TranslateClient*, const Model::CreateParallelDataRequest&, const Model::CreateParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DeleteParallelDataRequest&, const Model::DeleteParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DeleteTerminologyRequest&, const Model::DeleteTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::DescribeTextTranslationJobRequest&, const Model::DescribeTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::GetParallelDataRequest&, const Model::GetParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::GetTerminologyRequest&, const Model::GetTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ImportTerminologyRequest&, const Model::ImportTerminologyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportTerminologyResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListParallelDataRequest&, const Model::ListParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParallelDataResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTerminologiesRequest&, const Model::ListTerminologiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTerminologiesResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::ListTextTranslationJobsRequest&, const Model::ListTextTranslationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTextTranslationJobsResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::StartTextTranslationJobRequest&, const Model::StartTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::StopTextTranslationJobRequest&, const Model::StopTextTranslationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTextTranslationJobResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::TranslateTextRequest&, const Model::TranslateTextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TranslateTextResponseReceivedHandler;
    typedef std::function<void(const TranslateClient*, const Model::UpdateParallelDataRequest&, const Model::UpdateParallelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParallelDataResponseReceivedHandler;

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


        /**
         * <p>Creates a parallel data resource in Amazon Translate by importing an input
         * file from Amazon S3. Parallel data files contain examples of source phrases and
         * their translations from your translation memory. By adding parallel data, you
         * can influence the style, tone, and word choice in your translation
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/CreateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParallelDataOutcome CreateParallelData(const Model::CreateParallelDataRequest& request) const;

        /**
         * <p>Creates a parallel data resource in Amazon Translate by importing an input
         * file from Amazon S3. Parallel data files contain examples of source phrases and
         * their translations from your translation memory. By adding parallel data, you
         * can influence the style, tone, and word choice in your translation
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/CreateParallelData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParallelDataOutcomeCallable CreateParallelDataCallable(const Model::CreateParallelDataRequest& request) const;

        /**
         * <p>Creates a parallel data resource in Amazon Translate by importing an input
         * file from Amazon S3. Parallel data files contain examples of source phrases and
         * their translations from your translation memory. By adding parallel data, you
         * can influence the style, tone, and word choice in your translation
         * output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/CreateParallelData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateParallelDataAsync(const Model::CreateParallelDataRequest& request, const CreateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a parallel data resource in Amazon Translate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteParallelDataOutcome DeleteParallelData(const Model::DeleteParallelDataRequest& request) const;

        /**
         * <p>Deletes a parallel data resource in Amazon Translate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteParallelData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParallelDataOutcomeCallable DeleteParallelDataCallable(const Model::DeleteParallelDataRequest& request) const;

        /**
         * <p>Deletes a parallel data resource in Amazon Translate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DeleteParallelData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParallelDataAsync(const Model::DeleteParallelDataRequest& request, const DeleteParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Provides information about a parallel data resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParallelDataOutcome GetParallelData(const Model::GetParallelDataRequest& request) const;

        /**
         * <p>Provides information about a parallel data resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetParallelData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParallelDataOutcomeCallable GetParallelDataCallable(const Model::GetParallelDataRequest& request) const;

        /**
         * <p>Provides information about a parallel data resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetParallelData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParallelDataAsync(const Model::GetParallelDataRequest& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Provides a list of your parallel data resources in Amazon
         * Translate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParallelDataOutcome ListParallelData(const Model::ListParallelDataRequest& request) const;

        /**
         * <p>Provides a list of your parallel data resources in Amazon
         * Translate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListParallelData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListParallelDataOutcomeCallable ListParallelDataCallable(const Model::ListParallelDataRequest& request) const;

        /**
         * <p>Provides a list of your parallel data resources in Amazon
         * Translate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListParallelData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListParallelDataAsync(const Model::ListParallelDataRequest& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <a>StopTextTranslationJob</a> operation.</p>  <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * <p><h3>See Also:</h3>   <a
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
         * <a>StopTextTranslationJob</a> operation.</p>  <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * <p><h3>See Also:</h3>   <a
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
         * <a>StopTextTranslationJob</a> operation.</p>  <p>Amazon Translate does not
         * support batch translation of multiple source languages at once.</p>
         * <p><h3>See Also:</h3>   <a
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

        /**
         * <p>Updates a previously created parallel data resource by importing a new input
         * file from Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UpdateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParallelDataOutcome UpdateParallelData(const Model::UpdateParallelDataRequest& request) const;

        /**
         * <p>Updates a previously created parallel data resource by importing a new input
         * file from Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UpdateParallelData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateParallelDataOutcomeCallable UpdateParallelDataCallable(const Model::UpdateParallelDataRequest& request) const;

        /**
         * <p>Updates a previously created parallel data resource by importing a new input
         * file from Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UpdateParallelData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateParallelDataAsync(const Model::UpdateParallelDataRequest& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateParallelDataAsyncHelper(const Model::CreateParallelDataRequest& request, const CreateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteParallelDataAsyncHelper(const Model::DeleteParallelDataRequest& request, const DeleteParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTerminologyAsyncHelper(const Model::DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTextTranslationJobAsyncHelper(const Model::DescribeTextTranslationJobRequest& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParallelDataAsyncHelper(const Model::GetParallelDataRequest& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTerminologyAsyncHelper(const Model::GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportTerminologyAsyncHelper(const Model::ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListParallelDataAsyncHelper(const Model::ListParallelDataRequest& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTerminologiesAsyncHelper(const Model::ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTextTranslationJobsAsyncHelper(const Model::ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTextTranslationJobAsyncHelper(const Model::StartTextTranslationJobRequest& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTextTranslationJobAsyncHelper(const Model::StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TranslateTextAsyncHelper(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateParallelDataAsyncHelper(const Model::UpdateParallelDataRequest& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Translate
} // namespace Aws
