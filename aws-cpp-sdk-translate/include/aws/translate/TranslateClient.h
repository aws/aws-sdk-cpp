/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/translate/TranslateServiceClientModel.h>

namespace Aws
{
namespace Translate
{
  /**
   * <p>Provides translation of the input content from the source language to the
   * target language.</p>
   */
  class AWS_TRANSLATE_API TranslateClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TranslateClient>
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
         * A Callable wrapper for CreateParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateParallelDataOutcomeCallable CreateParallelDataCallable(const Model::CreateParallelDataRequest& request) const;

        /**
         * An Async wrapper for CreateParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParallelDataOutcomeCallable DeleteParallelDataCallable(const Model::DeleteParallelDataRequest& request) const;

        /**
         * An Async wrapper for DeleteParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteTerminology that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTerminologyOutcomeCallable DeleteTerminologyCallable(const Model::DeleteTerminologyRequest& request) const;

        /**
         * An Async wrapper for DeleteTerminology that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTerminologyAsync(const Model::DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with an asynchronous batch translation job
         * including name, ID, status, source and target languages, input/output S3
         * buckets, and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/DescribeTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTextTranslationJobOutcome DescribeTextTranslationJob(const Model::DescribeTextTranslationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeTextTranslationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTextTranslationJobOutcomeCallable DescribeTextTranslationJobCallable(const Model::DescribeTextTranslationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeTextTranslationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParallelDataOutcomeCallable GetParallelDataCallable(const Model::GetParallelDataRequest& request) const;

        /**
         * An Async wrapper for GetParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParallelDataAsync(const Model::GetParallelDataRequest& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a custom terminology.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/GetTerminology">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTerminologyOutcome GetTerminology(const Model::GetTerminologyRequest& request) const;

        /**
         * A Callable wrapper for GetTerminology that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTerminologyOutcomeCallable GetTerminologyCallable(const Model::GetTerminologyRequest& request) const;

        /**
         * An Async wrapper for GetTerminology that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTerminologyAsync(const Model::GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ImportTerminology that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportTerminologyOutcomeCallable ImportTerminologyCallable(const Model::ImportTerminologyRequest& request) const;

        /**
         * An Async wrapper for ImportTerminology that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportTerminologyAsync(const Model::ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of languages (RFC-5646 codes and names) that Amazon Translate
         * supports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListLanguages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLanguagesOutcome ListLanguages(const Model::ListLanguagesRequest& request) const;

        /**
         * A Callable wrapper for ListLanguages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLanguagesOutcomeCallable ListLanguagesCallable(const Model::ListLanguagesRequest& request) const;

        /**
         * An Async wrapper for ListLanguages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLanguagesAsync(const Model::ListLanguagesRequest& request, const ListLanguagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of your parallel data resources in Amazon
         * Translate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParallelDataOutcome ListParallelData(const Model::ListParallelDataRequest& request) const;

        /**
         * A Callable wrapper for ListParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListParallelDataOutcomeCallable ListParallelDataCallable(const Model::ListParallelDataRequest& request) const;

        /**
         * An Async wrapper for ListParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListParallelDataAsync(const Model::ListParallelDataRequest& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of custom terminologies associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ListTerminologies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTerminologiesOutcome ListTerminologies(const Model::ListTerminologiesRequest& request) const;

        /**
         * A Callable wrapper for ListTerminologies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTerminologiesOutcomeCallable ListTerminologiesCallable(const Model::ListTerminologiesRequest& request) const;

        /**
         * An Async wrapper for ListTerminologies that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListTextTranslationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTextTranslationJobsOutcomeCallable ListTextTranslationJobsCallable(const Model::ListTextTranslationJobsRequest& request) const;

        /**
         * An Async wrapper for ListTextTranslationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTextTranslationJobsAsync(const Model::ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous batch translation job. Use batch translation jobs to
         * translate large volumes of text across multiple documents at once. For batch
         * translation, you can input documents with different source languages (specify
         * <code>auto</code> as the source language). You can specify one or more target
         * languages. Batch translation translates each input document into each of the
         * target languages. For more information, see <a
         * href="https://docs.aws.amazon.com/translate/latest/dg/async.html">Asynchronous
         * batch processing</a>.</p> <p>Batch translation jobs can be described with the
         * <a>DescribeTextTranslationJob</a> operation, listed with the
         * <a>ListTextTranslationJobs</a> operation, and stopped with the
         * <a>StopTextTranslationJob</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/StartTextTranslationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTextTranslationJobOutcome StartTextTranslationJob(const Model::StartTextTranslationJobRequest& request) const;

        /**
         * A Callable wrapper for StartTextTranslationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTextTranslationJobOutcomeCallable StartTextTranslationJobCallable(const Model::StartTextTranslationJobRequest& request) const;

        /**
         * An Async wrapper for StartTextTranslationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StopTextTranslationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTextTranslationJobOutcomeCallable StopTextTranslationJobCallable(const Model::StopTextTranslationJobRequest& request) const;

        /**
         * An Async wrapper for StopTextTranslationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTextTranslationJobAsync(const Model::StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for TranslateText that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TranslateTextOutcomeCallable TranslateTextCallable(const Model::TranslateTextRequest& request) const;

        /**
         * An Async wrapper for TranslateText that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TranslateTextAsync(const Model::TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a previously created parallel data resource by importing a new input
         * file from Amazon S3.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UpdateParallelData">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParallelDataOutcome UpdateParallelData(const Model::UpdateParallelDataRequest& request) const;

        /**
         * A Callable wrapper for UpdateParallelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateParallelDataOutcomeCallable UpdateParallelDataCallable(const Model::UpdateParallelDataRequest& request) const;

        /**
         * An Async wrapper for UpdateParallelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateParallelDataAsync(const Model::UpdateParallelDataRequest& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TranslateEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TranslateClient>;
      void init(const TranslateClientConfiguration& clientConfiguration);

      TranslateClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TranslateEndpointProviderBase> m_endpointProvider;
  };

} // namespace Translate
} // namespace Aws
