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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elastictranscoder/model/CancelJobResult.h>
#include <aws/elastictranscoder/model/CreateJobResult.h>
#include <aws/elastictranscoder/model/CreatePipelineResult.h>
#include <aws/elastictranscoder/model/CreatePresetResult.h>
#include <aws/elastictranscoder/model/DeletePipelineResult.h>
#include <aws/elastictranscoder/model/DeletePresetResult.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineResult.h>
#include <aws/elastictranscoder/model/ListJobsByStatusResult.h>
#include <aws/elastictranscoder/model/ListPipelinesResult.h>
#include <aws/elastictranscoder/model/ListPresetsResult.h>
#include <aws/elastictranscoder/model/ReadJobResult.h>
#include <aws/elastictranscoder/model/ReadPipelineResult.h>
#include <aws/elastictranscoder/model/ReadPresetResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsResult.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusResult.h>
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

namespace ElasticTranscoder
{

namespace Model
{
        class CancelJobRequest;
        class CreateJobRequest;
        class CreatePipelineRequest;
        class CreatePresetRequest;
        class DeletePipelineRequest;
        class DeletePresetRequest;
        class ListJobsByPipelineRequest;
        class ListJobsByStatusRequest;
        class ListPipelinesRequest;
        class ListPresetsRequest;
        class ReadJobRequest;
        class ReadPipelineRequest;
        class ReadPresetRequest;
        class UpdatePipelineRequest;
        class UpdatePipelineNotificationsRequest;
        class UpdatePipelineStatusRequest;

        typedef Aws::Utils::Outcome<CancelJobResult, Aws::Client::AWSError<ElasticTranscoderErrors>> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, Aws::Client::AWSError<ElasticTranscoderErrors>> CreateJobOutcome;
        typedef Aws::Utils::Outcome<CreatePipelineResult, Aws::Client::AWSError<ElasticTranscoderErrors>> CreatePipelineOutcome;
        typedef Aws::Utils::Outcome<CreatePresetResult, Aws::Client::AWSError<ElasticTranscoderErrors>> CreatePresetOutcome;
        typedef Aws::Utils::Outcome<DeletePipelineResult, Aws::Client::AWSError<ElasticTranscoderErrors>> DeletePipelineOutcome;
        typedef Aws::Utils::Outcome<DeletePresetResult, Aws::Client::AWSError<ElasticTranscoderErrors>> DeletePresetOutcome;
        typedef Aws::Utils::Outcome<ListJobsByPipelineResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ListJobsByPipelineOutcome;
        typedef Aws::Utils::Outcome<ListJobsByStatusResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ListJobsByStatusOutcome;
        typedef Aws::Utils::Outcome<ListPipelinesResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ListPipelinesOutcome;
        typedef Aws::Utils::Outcome<ListPresetsResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ListPresetsOutcome;
        typedef Aws::Utils::Outcome<ReadJobResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ReadJobOutcome;
        typedef Aws::Utils::Outcome<ReadPipelineResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ReadPipelineOutcome;
        typedef Aws::Utils::Outcome<ReadPresetResult, Aws::Client::AWSError<ElasticTranscoderErrors>> ReadPresetOutcome;
        typedef Aws::Utils::Outcome<UpdatePipelineResult, Aws::Client::AWSError<ElasticTranscoderErrors>> UpdatePipelineOutcome;
        typedef Aws::Utils::Outcome<UpdatePipelineNotificationsResult, Aws::Client::AWSError<ElasticTranscoderErrors>> UpdatePipelineNotificationsOutcome;
        typedef Aws::Utils::Outcome<UpdatePipelineStatusResult, Aws::Client::AWSError<ElasticTranscoderErrors>> UpdatePipelineStatusOutcome;

        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
        typedef std::future<CreatePresetOutcome> CreatePresetOutcomeCallable;
        typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
        typedef std::future<DeletePresetOutcome> DeletePresetOutcomeCallable;
        typedef std::future<ListJobsByPipelineOutcome> ListJobsByPipelineOutcomeCallable;
        typedef std::future<ListJobsByStatusOutcome> ListJobsByStatusOutcomeCallable;
        typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
        typedef std::future<ListPresetsOutcome> ListPresetsOutcomeCallable;
        typedef std::future<ReadJobOutcome> ReadJobOutcomeCallable;
        typedef std::future<ReadPipelineOutcome> ReadPipelineOutcomeCallable;
        typedef std::future<ReadPresetOutcome> ReadPresetOutcomeCallable;
        typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
        typedef std::future<UpdatePipelineNotificationsOutcome> UpdatePipelineNotificationsOutcomeCallable;
        typedef std::future<UpdatePipelineStatusOutcome> UpdatePipelineStatusOutcomeCallable;
} // namespace Model

  class ElasticTranscoderClient;

    typedef std::function<void(const ElasticTranscoderClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::CreatePresetRequest&, const Model::CreatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::DeletePresetRequest&, const Model::DeletePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListJobsByPipelineRequest&, const Model::ListJobsByPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByPipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListJobsByStatusRequest&, const Model::ListJobsByStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsByStatusResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ListPresetsRequest&, const Model::ListPresetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPresetsResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadJobRequest&, const Model::ReadJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadJobResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadPipelineRequest&, const Model::ReadPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadPipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::ReadPresetRequest&, const Model::ReadPresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReadPresetResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineNotificationsRequest&, const Model::UpdatePipelineNotificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineNotificationsResponseReceivedHandler;
    typedef std::function<void(const ElasticTranscoderClient*, const Model::UpdatePipelineStatusRequest&, const Model::UpdatePipelineStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineStatusResponseReceivedHandler;

  /**
   * <fullname>AWS Elastic Transcoder Service</fullname> <p>The AWS Elastic
   * Transcoder Service.</p>
   */
  class AWS_ELASTICTRANSCODER_API ElasticTranscoderClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticTranscoderClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticTranscoderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ElasticTranscoderClient();

        inline virtual const char* GetServiceClientName() const override { return "Elastic Transcoder"; }


        /**
         * <p>The CancelJob operation cancels an unfinished job.</p> <note> <p>You can only
         * cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline
         * from starting to process a job while you're getting the job identifier, use
         * <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * <p>The CancelJob operation cancels an unfinished job.</p> <note> <p>You can only
         * cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline
         * from starting to process a job while you're getting the job identifier, use
         * <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CancelJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * <p>The CancelJob operation cancels an unfinished job.</p> <note> <p>You can only
         * cancel a job that has a status of <code>Submitted</code>. To prevent a pipeline
         * from starting to process a job while you're getting the job identifier, use
         * <a>UpdatePipelineStatus</a> to temporarily pause the pipeline.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CancelJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>When you create a job, Elastic Transcoder returns JSON data that includes the
         * values that you specified plus information about the job that is created.</p>
         * <p>If you have specified more than one output for your jobs (for example, one
         * output for the Kindle Fire and another output for the Apple iPhone 4s), you
         * currently must use the Elastic Transcoder API to list the jobs (as opposed to
         * the AWS Console).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>When you create a job, Elastic Transcoder returns JSON data that includes the
         * values that you specified plus information about the job that is created.</p>
         * <p>If you have specified more than one output for your jobs (for example, one
         * output for the Kindle Fire and another output for the Apple iPhone 4s), you
         * currently must use the Elastic Transcoder API to list the jobs (as opposed to
         * the AWS Console).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The CreatePipeline operation creates a pipeline with settings that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>The CreatePipeline operation creates a pipeline with settings that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The CreatePreset operation creates a preset with settings that you
         * specify.</p> <important> <p>Elastic Transcoder checks the CreatePreset settings
         * to ensure that they meet Elastic Transcoder requirements and to determine
         * whether they comply with H.264 standards. If your settings are not valid for
         * Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response
         * (<code>ValidationException</code>) and does not create the preset. If the
         * settings are valid for Elastic Transcoder but aren't strictly compliant with the
         * H.264 standard, Elastic Transcoder creates the preset and returns a warning
         * message in the response. This helps you determine whether your settings comply
         * with the H.264 standard while giving you greater flexibility with respect to the
         * video that Elastic Transcoder produces.</p> </important> <p>Elastic Transcoder
         * uses the H.264 video-compression format. For more information, see the
         * International Telecommunication Union publication <i>Recommendation ITU-T H.264:
         * Advanced video coding for generic audiovisual services</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresetOutcome CreatePreset(const Model::CreatePresetRequest& request) const;

        /**
         * <p>The CreatePreset operation creates a preset with settings that you
         * specify.</p> <important> <p>Elastic Transcoder checks the CreatePreset settings
         * to ensure that they meet Elastic Transcoder requirements and to determine
         * whether they comply with H.264 standards. If your settings are not valid for
         * Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response
         * (<code>ValidationException</code>) and does not create the preset. If the
         * settings are valid for Elastic Transcoder but aren't strictly compliant with the
         * H.264 standard, Elastic Transcoder creates the preset and returns a warning
         * message in the response. This helps you determine whether your settings comply
         * with the H.264 standard while giving you greater flexibility with respect to the
         * video that Elastic Transcoder produces.</p> </important> <p>Elastic Transcoder
         * uses the H.264 video-compression format. For more information, see the
         * International Telecommunication Union publication <i>Recommendation ITU-T H.264:
         * Advanced video coding for generic audiovisual services</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresetOutcomeCallable CreatePresetCallable(const Model::CreatePresetRequest& request) const;

        /**
         * <p>The CreatePreset operation creates a preset with settings that you
         * specify.</p> <important> <p>Elastic Transcoder checks the CreatePreset settings
         * to ensure that they meet Elastic Transcoder requirements and to determine
         * whether they comply with H.264 standards. If your settings are not valid for
         * Elastic Transcoder, Elastic Transcoder returns an HTTP 400 response
         * (<code>ValidationException</code>) and does not create the preset. If the
         * settings are valid for Elastic Transcoder but aren't strictly compliant with the
         * H.264 standard, Elastic Transcoder creates the preset and returns a warning
         * message in the response. This helps you determine whether your settings comply
         * with the H.264 standard while giving you greater flexibility with respect to the
         * video that Elastic Transcoder produces.</p> </important> <p>Elastic Transcoder
         * uses the H.264 video-compression format. For more information, see the
         * International Telecommunication Union publication <i>Recommendation ITU-T H.264:
         * Advanced video coding for generic audiovisual services</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The DeletePipeline operation removes a pipeline.</p> <p> You can only delete
         * a pipeline that has never been used or that is not currently in use (doesn't
         * contain any active jobs). If the pipeline is currently in use,
         * <code>DeletePipeline</code> returns an error. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>The DeletePipeline operation removes a pipeline.</p> <p> You can only delete
         * a pipeline that has never been used or that is not currently in use (doesn't
         * contain any active jobs). If the pipeline is currently in use,
         * <code>DeletePipeline</code> returns an error. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The DeletePreset operation removes a preset that you've added in an AWS
         * region.</p> <note> <p>You can't delete the default presets that are included
         * with Elastic Transcoder.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePresetOutcome DeletePreset(const Model::DeletePresetRequest& request) const;

        /**
         * <p>The DeletePreset operation removes a preset that you've added in an AWS
         * region.</p> <note> <p>You can't delete the default presets that are included
         * with Elastic Transcoder.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePresetOutcomeCallable DeletePresetCallable(const Model::DeletePresetRequest& request) const;

        /**
         * <p>The DeletePreset operation removes a preset that you've added in an AWS
         * region.</p> <note> <p>You can't delete the default presets that are included
         * with Elastic Transcoder.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/DeletePreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ListJobsByPipeline operation gets a list of the jobs currently in a
         * pipeline.</p> <p>Elastic Transcoder returns all of the jobs currently in the
         * specified pipeline. The response body contains one element for each job that
         * satisfies the search criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByPipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsByPipelineOutcomeCallable ListJobsByPipelineCallable(const Model::ListJobsByPipelineRequest& request) const;

        /**
         * <p>The ListJobsByPipeline operation gets a list of the jobs currently in a
         * pipeline.</p> <p>Elastic Transcoder returns all of the jobs currently in the
         * specified pipeline. The response body contains one element for each job that
         * satisfies the search criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByPipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ListJobsByStatus operation gets a list of jobs that have a specified
         * status. The response body contains one element for each job that satisfies the
         * search criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsByStatusOutcomeCallable ListJobsByStatusCallable(const Model::ListJobsByStatusRequest& request) const;

        /**
         * <p>The ListJobsByStatus operation gets a list of jobs that have a specified
         * status. The response body contains one element for each job that satisfies the
         * search criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListJobsByStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ListPipelines operation gets a list of the pipelines associated with the
         * current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPipelines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>The ListPipelines operation gets a list of the pipelines associated with the
         * current AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPipelines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ListPresets operation gets a list of the default presets included with
         * Elastic Transcoder and the presets that you've added in an AWS
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPresets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPresetsOutcomeCallable ListPresetsCallable(const Model::ListPresetsRequest& request) const;

        /**
         * <p>The ListPresets operation gets a list of the default presets included with
         * Elastic Transcoder and the presets that you've added in an AWS
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPresets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ReadJob operation returns detailed information about a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReadJobOutcomeCallable ReadJobCallable(const Model::ReadJobRequest& request) const;

        /**
         * <p>The ReadJob operation returns detailed information about a job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ReadPipeline operation gets detailed information about a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReadPipelineOutcomeCallable ReadPipelineCallable(const Model::ReadPipelineRequest& request) const;

        /**
         * <p>The ReadPipeline operation gets detailed information about a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The ReadPreset operation gets detailed information about a
         * preset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReadPresetOutcomeCallable ReadPresetCallable(const Model::ReadPresetRequest& request) const;

        /**
         * <p>The ReadPreset operation gets detailed information about a
         * preset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReadPresetAsync(const Model::ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Use the <code>UpdatePipeline</code> operation to update settings for a
         * pipeline.</p> <important> <p>When you change pipeline settings, your changes
         * take effect immediately. Jobs that you have already submitted and that Elastic
         * Transcoder has not started to process are affected in addition to jobs that you
         * submit after you change settings. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p> Use the <code>UpdatePipeline</code> operation to update settings for a
         * pipeline.</p> <important> <p>When you change pipeline settings, your changes
         * take effect immediately. Jobs that you have already submitted and that Elastic
         * Transcoder has not started to process are affected in addition to jobs that you
         * submit after you change settings. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p> Use the <code>UpdatePipeline</code> operation to update settings for a
         * pipeline.</p> <important> <p>When you change pipeline settings, your changes
         * take effect immediately. Jobs that you have already submitted and that Elastic
         * Transcoder has not started to process are affected in addition to jobs that you
         * submit after you change settings. </p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>With the UpdatePipelineNotifications operation, you can update Amazon Simple
         * Notification Service (Amazon SNS) notifications for a pipeline.</p> <p>When you
         * update notifications for a pipeline, Elastic Transcoder returns the values that
         * you specified in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineNotifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineNotificationsOutcomeCallable UpdatePipelineNotificationsCallable(const Model::UpdatePipelineNotificationsRequest& request) const;

        /**
         * <p>With the UpdatePipelineNotifications operation, you can update Amazon Simple
         * Notification Service (Amazon SNS) notifications for a pipeline.</p> <p>When you
         * update notifications for a pipeline, Elastic Transcoder returns the values that
         * you specified in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineNotifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>The UpdatePipelineStatus operation pauses or reactivates a pipeline, so that
         * the pipeline stops or restarts the processing of jobs.</p> <p>Changing the
         * pipeline status is useful if you want to cancel one or more jobs. You can't
         * cancel jobs after Elastic Transcoder has started processing them; if you pause
         * the pipeline to which you submitted the jobs, you have more time to get the job
         * IDs for the jobs that you want to cancel, and to send a <a>CancelJob</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineStatusOutcomeCallable UpdatePipelineStatusCallable(const Model::UpdatePipelineStatusRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineStatusAsync(const Model::UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresetAsyncHelper(const Model::CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePresetAsyncHelper(const Model::DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsByPipelineAsyncHelper(const Model::ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsByStatusAsyncHelper(const Model::ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPresetsAsyncHelper(const Model::ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReadJobAsyncHelper(const Model::ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReadPipelineAsyncHelper(const Model::ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReadPresetAsyncHelper(const Model::ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineAsyncHelper(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineNotificationsAsyncHelper(const Model::UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineStatusAsyncHelper(const Model::UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ElasticTranscoder
} // namespace Aws
