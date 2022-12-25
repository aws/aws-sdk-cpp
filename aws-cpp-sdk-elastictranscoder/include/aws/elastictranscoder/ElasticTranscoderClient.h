/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elastictranscoder/ElasticTranscoderServiceClientModel.h>

namespace Aws
{
namespace ElasticTranscoder
{
  /**
   * <fullname>AWS Elastic Transcoder Service</fullname> <p>The AWS Elastic
   * Transcoder Service.</p>
   */
  class AWS_ELASTICTRANSCODER_API ElasticTranscoderClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElasticTranscoderClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Aws::ElasticTranscoder::ElasticTranscoderClientConfiguration& clientConfiguration = Aws::ElasticTranscoder::ElasticTranscoderClientConfiguration(),
                                std::shared_ptr<ElasticTranscoderEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticTranscoderEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<ElasticTranscoderEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticTranscoderEndpointProvider>(ALLOCATION_TAG),
                                const Aws::ElasticTranscoder::ElasticTranscoderClientConfiguration& clientConfiguration = Aws::ElasticTranscoder::ElasticTranscoderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticTranscoderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<ElasticTranscoderEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticTranscoderEndpointProvider>(ALLOCATION_TAG),
                                const Aws::ElasticTranscoder::ElasticTranscoderClientConfiguration& clientConfiguration = Aws::ElasticTranscoder::ElasticTranscoderClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticTranscoderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ElasticTranscoderClient();

        /**
         * <p>The CancelJob operation cancels an unfinished job.</p>  <p>You can only
         * cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline
         * from starting to process a job while you're getting the job identifier, use
         * <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you create a job, Elastic Transcoder returns JSON data that includes the
         * values that you specified plus information about the job that is created.</p>
         * <p>If you have specified more than one output for your jobs (for example, one
         * output for the Kindle Fire and another output for the Apple iPhone 4s), you
         * currently must use the Elastic Transcoder API to list the jobs (as opposed to
         * the AWS Console).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The CreatePipeline operation creates a pipeline with settings that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The CreatePreset operation creates a preset with settings that you
         * specify.</p>  <p>Elastic Transcoder checks the CreatePreset settings
         * to ensure that they meet Elastic Transcoder requirements and to determine
         * whether they comply with H.264 standards. If your settings are not valid for
         * Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response
         * (<code>ValidationException</code>) and does not create the preset. If the
         * settings are valid for Elastic Transcoder but aren't strictly compliant with the
         * H.264 standard, Elastic Transcoder creates the preset and returns a warning
         * message in the response. This helps you determine whether your settings comply
         * with the H.264 standard while giving you greater flexibility with respect to the
         * video that Elastic Transcoder produces.</p>  <p>Elastic Transcoder
         * uses the H.264 video-compression format. For more information, see the
         * International Telecommunication Union publication <i>Recommendation ITU-T H.264:
         * Advanced video coding for generic audiovisual services</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresetOutcome CreatePreset(const Model::CreatePresetRequest& request) const;

        /**
         * A Callable wrapper for CreatePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresetOutcomeCallable CreatePresetCallable(const Model::CreatePresetRequest& request) const;

        /**
         * An Async wrapper for CreatePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresetAsync(const Model::CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeletePipeline operation removes a pipeline.</p> <p> You can only delete
         * a pipeline that has never been used or that is not currently in use (doesn't
         * contain any active jobs). If the pipeline is currently in use,
         * <code>DeletePipeline</code> returns an error. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeletePreset operation removes a preset that you've added in an AWS
         * region.</p>  <p>You can't delete the default presets that are included
         * with Elastic Transcoder.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePresetOutcome DeletePreset(const Model::DeletePresetRequest& request) const;

        /**
         * A Callable wrapper for DeletePreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePresetOutcomeCallable DeletePresetCallable(const Model::DeletePresetRequest& request) const;

        /**
         * An Async wrapper for DeletePreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePresetAsync(const Model::DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ListJobsByPipeline operation gets a list of the jobs currently in a
         * pipeline.</p> <p>Elastic Transcoder returns all of the jobs currently in the
         * specified pipeline. The response body contains one element for each job that
         * satisfies the search criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsByPipelineOutcome ListJobsByPipeline(const Model::ListJobsByPipelineRequest& request) const;

        /**
         * A Callable wrapper for ListJobsByPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsByPipelineOutcomeCallable ListJobsByPipelineCallable(const Model::ListJobsByPipelineRequest& request) const;

        /**
         * An Async wrapper for ListJobsByPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsByPipelineAsync(const Model::ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ListJobsByStatus operation gets a list of jobs that have a specified
         * status. The response body contains one element for each job that satisfies the
         * search criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsByStatusOutcome ListJobsByStatus(const Model::ListJobsByStatusRequest& request) const;

        /**
         * A Callable wrapper for ListJobsByStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsByStatusOutcomeCallable ListJobsByStatusCallable(const Model::ListJobsByStatusRequest& request) const;

        /**
         * An Async wrapper for ListJobsByStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsByStatusAsync(const Model::ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ListPipelines operation gets a list of the pipelines associated with the
         * current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ListPresets operation gets a list of the default presets included with
         * Elastic Transcoder and the presets that you've added in an AWS
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPresets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPresetsOutcome ListPresets(const Model::ListPresetsRequest& request) const;

        /**
         * A Callable wrapper for ListPresets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPresetsOutcomeCallable ListPresetsCallable(const Model::ListPresetsRequest& request) const;

        /**
         * An Async wrapper for ListPresets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPresetsAsync(const Model::ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ReadJob operation returns detailed information about a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ReadJobOutcome ReadJob(const Model::ReadJobRequest& request) const;

        /**
         * A Callable wrapper for ReadJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReadJobOutcomeCallable ReadJobCallable(const Model::ReadJobRequest& request) const;

        /**
         * An Async wrapper for ReadJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReadJobAsync(const Model::ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ReadPipeline operation gets detailed information about a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::ReadPipelineOutcome ReadPipeline(const Model::ReadPipelineRequest& request) const;

        /**
         * A Callable wrapper for ReadPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReadPipelineOutcomeCallable ReadPipelineCallable(const Model::ReadPipelineRequest& request) const;

        /**
         * An Async wrapper for ReadPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReadPipelineAsync(const Model::ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The ReadPreset operation gets detailed information about a
         * preset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPreset">AWS
         * API Reference</a></p>
         */
        virtual Model::ReadPresetOutcome ReadPreset(const Model::ReadPresetRequest& request) const;

        /**
         * A Callable wrapper for ReadPreset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReadPresetOutcomeCallable ReadPresetCallable(const Model::ReadPresetRequest& request) const;

        /**
         * An Async wrapper for ReadPreset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReadPresetAsync(const Model::ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Use the <code>UpdatePipeline</code> operation to update settings for a
         * pipeline.</p>  <p>When you change pipeline settings, your changes
         * take effect immediately. Jobs that you have already submitted and that Elastic
         * Transcoder has not started to process are affected in addition to jobs that you
         * submit after you change settings. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>With the UpdatePipelineNotifications operation, you can update Amazon Simple
         * Notification Service (Amazon SNS) notifications for a pipeline.</p> <p>When you
         * update notifications for a pipeline, Elastic Transcoder returns the values that
         * you specified in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineNotificationsOutcome UpdatePipelineNotifications(const Model::UpdatePipelineNotificationsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipelineNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineNotificationsOutcomeCallable UpdatePipelineNotificationsCallable(const Model::UpdatePipelineNotificationsRequest& request) const;

        /**
         * An Async wrapper for UpdatePipelineNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineNotificationsAsync(const Model::UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that
         * the pipeline stops or restarts the processing of jobs.</p> <p>Changing the
         * pipeline status is useful if you want to cancel one or more jobs. You can't
         * cancel jobs after Elastic Transcoder has started processing them; if you pause
         * the pipeline to which you submitted the jobs, you have more time to get the job
         * IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineStatusOutcome UpdatePipelineStatus(const Model::UpdatePipelineStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipelineStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineStatusOutcomeCallable UpdatePipelineStatusCallable(const Model::UpdatePipelineStatusRequest& request) const;

        /**
         * An Async wrapper for UpdatePipelineStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineStatusAsync(const Model::UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ElasticTranscoderEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ElasticTranscoderClient>;
      void init(const ElasticTranscoderClientConfiguration& clientConfiguration);

      ElasticTranscoderClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ElasticTranscoderEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticTranscoder
} // namespace Aws
