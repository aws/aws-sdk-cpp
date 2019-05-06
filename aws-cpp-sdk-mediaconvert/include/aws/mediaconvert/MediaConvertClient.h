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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/AssociateCertificateResult.h>
#include <aws/mediaconvert/model/CancelJobResult.h>
#include <aws/mediaconvert/model/CreateJobResult.h>
#include <aws/mediaconvert/model/CreateJobTemplateResult.h>
#include <aws/mediaconvert/model/CreatePresetResult.h>
#include <aws/mediaconvert/model/CreateQueueResult.h>
#include <aws/mediaconvert/model/DeleteJobTemplateResult.h>
#include <aws/mediaconvert/model/DeletePresetResult.h>
#include <aws/mediaconvert/model/DeleteQueueResult.h>
#include <aws/mediaconvert/model/DescribeEndpointsResult.h>
#include <aws/mediaconvert/model/DisassociateCertificateResult.h>
#include <aws/mediaconvert/model/GetJobResult.h>
#include <aws/mediaconvert/model/GetJobTemplateResult.h>
#include <aws/mediaconvert/model/GetPresetResult.h>
#include <aws/mediaconvert/model/GetQueueResult.h>
#include <aws/mediaconvert/model/ListJobTemplatesResult.h>
#include <aws/mediaconvert/model/ListJobsResult.h>
#include <aws/mediaconvert/model/ListPresetsResult.h>
#include <aws/mediaconvert/model/ListQueuesResult.h>
#include <aws/mediaconvert/model/ListTagsForResourceResult.h>
#include <aws/mediaconvert/model/TagResourceResult.h>
#include <aws/mediaconvert/model/UntagResourceResult.h>
#include <aws/mediaconvert/model/UpdateJobTemplateResult.h>
#include <aws/mediaconvert/model/UpdatePresetResult.h>
#include <aws/mediaconvert/model/UpdateQueueResult.h>
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

namespace MediaConvert
{

namespace Model
{
        class AssociateCertificateRequest;
        class CancelJobRequest;
        class CreateJobRequest;
        class CreateJobTemplateRequest;
        class CreatePresetRequest;
        class CreateQueueRequest;
        class DeleteJobTemplateRequest;
        class DeletePresetRequest;
        class DeleteQueueRequest;
        class DescribeEndpointsRequest;
        class DisassociateCertificateRequest;
        class GetJobRequest;
        class GetJobTemplateRequest;
        class GetPresetRequest;
        class GetQueueRequest;
        class ListJobTemplatesRequest;
        class ListJobsRequest;
        class ListPresetsRequest;
        class ListQueuesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateJobTemplateRequest;
        class UpdatePresetRequest;
        class UpdateQueueRequest;

        typedef Aws::Utils::Outcome<AssociateCertificateResult, Aws::Client::AWSError<MediaConvertErrors>> AssociateCertificateOutcome;
        typedef Aws::Utils::Outcome<CancelJobResult, Aws::Client::AWSError<MediaConvertErrors>> CancelJobOutcome;
        typedef Aws::Utils::Outcome<CreateJobResult, Aws::Client::AWSError<MediaConvertErrors>> CreateJobOutcome;
        typedef Aws::Utils::Outcome<CreateJobTemplateResult, Aws::Client::AWSError<MediaConvertErrors>> CreateJobTemplateOutcome;
        typedef Aws::Utils::Outcome<CreatePresetResult, Aws::Client::AWSError<MediaConvertErrors>> CreatePresetOutcome;
        typedef Aws::Utils::Outcome<CreateQueueResult, Aws::Client::AWSError<MediaConvertErrors>> CreateQueueOutcome;
        typedef Aws::Utils::Outcome<DeleteJobTemplateResult, Aws::Client::AWSError<MediaConvertErrors>> DeleteJobTemplateOutcome;
        typedef Aws::Utils::Outcome<DeletePresetResult, Aws::Client::AWSError<MediaConvertErrors>> DeletePresetOutcome;
        typedef Aws::Utils::Outcome<DeleteQueueResult, Aws::Client::AWSError<MediaConvertErrors>> DeleteQueueOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointsResult, Aws::Client::AWSError<MediaConvertErrors>> DescribeEndpointsOutcome;
        typedef Aws::Utils::Outcome<DisassociateCertificateResult, Aws::Client::AWSError<MediaConvertErrors>> DisassociateCertificateOutcome;
        typedef Aws::Utils::Outcome<GetJobResult, Aws::Client::AWSError<MediaConvertErrors>> GetJobOutcome;
        typedef Aws::Utils::Outcome<GetJobTemplateResult, Aws::Client::AWSError<MediaConvertErrors>> GetJobTemplateOutcome;
        typedef Aws::Utils::Outcome<GetPresetResult, Aws::Client::AWSError<MediaConvertErrors>> GetPresetOutcome;
        typedef Aws::Utils::Outcome<GetQueueResult, Aws::Client::AWSError<MediaConvertErrors>> GetQueueOutcome;
        typedef Aws::Utils::Outcome<ListJobTemplatesResult, Aws::Client::AWSError<MediaConvertErrors>> ListJobTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<MediaConvertErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListPresetsResult, Aws::Client::AWSError<MediaConvertErrors>> ListPresetsOutcome;
        typedef Aws::Utils::Outcome<ListQueuesResult, Aws::Client::AWSError<MediaConvertErrors>> ListQueuesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<MediaConvertErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<MediaConvertErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<MediaConvertErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateJobTemplateResult, Aws::Client::AWSError<MediaConvertErrors>> UpdateJobTemplateOutcome;
        typedef Aws::Utils::Outcome<UpdatePresetResult, Aws::Client::AWSError<MediaConvertErrors>> UpdatePresetOutcome;
        typedef Aws::Utils::Outcome<UpdateQueueResult, Aws::Client::AWSError<MediaConvertErrors>> UpdateQueueOutcome;

        typedef std::future<AssociateCertificateOutcome> AssociateCertificateOutcomeCallable;
        typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
        typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
        typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;
        typedef std::future<CreatePresetOutcome> CreatePresetOutcomeCallable;
        typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
        typedef std::future<DeleteJobTemplateOutcome> DeleteJobTemplateOutcomeCallable;
        typedef std::future<DeletePresetOutcome> DeletePresetOutcomeCallable;
        typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
        typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
        typedef std::future<DisassociateCertificateOutcome> DisassociateCertificateOutcomeCallable;
        typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
        typedef std::future<GetJobTemplateOutcome> GetJobTemplateOutcomeCallable;
        typedef std::future<GetPresetOutcome> GetPresetOutcomeCallable;
        typedef std::future<GetQueueOutcome> GetQueueOutcomeCallable;
        typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListPresetsOutcome> ListPresetsOutcomeCallable;
        typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateJobTemplateOutcome> UpdateJobTemplateOutcomeCallable;
        typedef std::future<UpdatePresetOutcome> UpdatePresetOutcomeCallable;
        typedef std::future<UpdateQueueOutcome> UpdateQueueOutcomeCallable;
} // namespace Model

  class MediaConvertClient;

    typedef std::function<void(const MediaConvertClient*, const Model::AssociateCertificateRequest&, const Model::AssociateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCertificateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreateJobTemplateRequest&, const Model::CreateJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreatePresetRequest&, const Model::CreatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeleteJobTemplateRequest&, const Model::DeleteJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeletePresetRequest&, const Model::DeletePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::DisassociateCertificateRequest&, const Model::DisassociateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCertificateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetJobTemplateRequest&, const Model::GetJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetPresetRequest&, const Model::GetPresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::GetQueueRequest&, const Model::GetQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListJobTemplatesRequest&, const Model::ListJobTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobTemplatesResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListPresetsRequest&, const Model::ListPresetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPresetsResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UpdateJobTemplateRequest&, const Model::UpdateJobTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UpdatePresetRequest&, const Model::UpdatePresetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePresetResponseReceivedHandler;
    typedef std::function<void(const MediaConvertClient*, const Model::UpdateQueueRequest&, const Model::UpdateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQueueResponseReceivedHandler;

  /**
   * AWS Elemental MediaConvert
   */
  class AWS_MEDIACONVERT_API MediaConvertClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaConvertClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaConvertClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MediaConvertClient();

        inline virtual const char* GetServiceClientName() const override { return "MediaConvert"; }


        /**
         * Associates an AWS Certificate Manager (ACM) Amazon Resource Name (ARN) with AWS
         * Elemental MediaConvert.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AssociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCertificateOutcome AssociateCertificate(const Model::AssociateCertificateRequest& request) const;

        /**
         * Associates an AWS Certificate Manager (ACM) Amazon Resource Name (ARN) with AWS
         * Elemental MediaConvert.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AssociateCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateCertificateOutcomeCallable AssociateCertificateCallable(const Model::AssociateCertificateRequest& request) const;

        /**
         * Associates an AWS Certificate Manager (ACM) Amazon Resource Name (ARN) with AWS
         * Elemental MediaConvert.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AssociateCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateCertificateAsync(const Model::AssociateCertificateRequest& request, const AssociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently cancel a job. Once you have canceled a job, you can't start it
         * again.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CancelJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * Permanently cancel a job. Once you have canceled a job, you can't start it
         * again.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CancelJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * Permanently cancel a job. Once you have canceled a job, you can't start it
         * again.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CancelJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new transcoding job. For information about jobs and job settings, see
         * the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * Create a new transcoding job. For information about jobs and job settings, see
         * the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * Create a new transcoding job. For information about jobs and job settings, see
         * the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new job template. For information about job templates see the User
         * Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobTemplateOutcome CreateJobTemplate(const Model::CreateJobTemplateRequest& request) const;

        /**
         * Create a new job template. For information about job templates see the User
         * Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJobTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobTemplateOutcomeCallable CreateJobTemplateCallable(const Model::CreateJobTemplateRequest& request) const;

        /**
         * Create a new job template. For information about job templates see the User
         * Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateJobTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobTemplateAsync(const Model::CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new preset. For information about job templates see the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresetOutcome CreatePreset(const Model::CreatePresetRequest& request) const;

        /**
         * Create a new preset. For information about job templates see the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreatePreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresetOutcomeCallable CreatePresetCallable(const Model::CreatePresetRequest& request) const;

        /**
         * Create a new preset. For information about job templates see the User Guide at
         * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreatePreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresetAsync(const Model::CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new transcoding queue. For information about queues, see Working With
         * Queues in the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * Create a new transcoding queue. For information about queues, see Working With
         * Queues in the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request) const;

        /**
         * Create a new transcoding queue. For information about queues, see Working With
         * Queues in the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CreateQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently delete a job template you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * Permanently delete a job template you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteJobTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobTemplateOutcomeCallable DeleteJobTemplateCallable(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * Permanently delete a job template you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteJobTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobTemplateAsync(const Model::DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently delete a preset you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePresetOutcome DeletePreset(const Model::DeletePresetRequest& request) const;

        /**
         * Permanently delete a preset you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePresetOutcomeCallable DeletePresetCallable(const Model::DeletePresetRequest& request) const;

        /**
         * Permanently delete a preset you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeletePreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePresetAsync(const Model::DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Permanently delete a queue you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * Permanently delete a queue you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request) const;

        /**
         * Permanently delete a queue you have created.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DeleteQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Send an request with an empty body to the regional API endpoint to get your
         * account API endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * Send an request with an empty body to the regional API endpoint to get your
         * account API endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * Send an request with an empty body to the regional API endpoint to get your
         * account API endpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Removes an association between the Amazon Resource Name (ARN) of an AWS
         * Certificate Manager (ACM) certificate and an AWS Elemental MediaConvert
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DisassociateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCertificateOutcome DisassociateCertificate(const Model::DisassociateCertificateRequest& request) const;

        /**
         * Removes an association between the Amazon Resource Name (ARN) of an AWS
         * Certificate Manager (ACM) certificate and an AWS Elemental MediaConvert
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DisassociateCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateCertificateOutcomeCallable DisassociateCertificateCallable(const Model::DisassociateCertificateRequest& request) const;

        /**
         * Removes an association between the Amazon Resource Name (ARN) of an AWS
         * Certificate Manager (ACM) certificate and an AWS Elemental MediaConvert
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DisassociateCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateCertificateAsync(const Model::DisassociateCertificateRequest& request, const DisassociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific completed transcoding job.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * Retrieve the JSON for a specific completed transcoding job.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * Retrieve the JSON for a specific completed transcoding job.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific job template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobTemplateOutcome GetJobTemplate(const Model::GetJobTemplateRequest& request) const;

        /**
         * Retrieve the JSON for a specific job template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJobTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobTemplateOutcomeCallable GetJobTemplateCallable(const Model::GetJobTemplateRequest& request) const;

        /**
         * Retrieve the JSON for a specific job template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetJobTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobTemplateAsync(const Model::GetJobTemplateRequest& request, const GetJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific preset.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPreset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPresetOutcome GetPreset(const Model::GetPresetRequest& request) const;

        /**
         * Retrieve the JSON for a specific preset.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPresetOutcomeCallable GetPresetCallable(const Model::GetPresetRequest& request) const;

        /**
         * Retrieve the JSON for a specific preset.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetPreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPresetAsync(const Model::GetPresetRequest& request, const GetPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the JSON for a specific queue.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueOutcome GetQueue(const Model::GetQueueRequest& request) const;

        /**
         * Retrieve the JSON for a specific queue.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueueOutcomeCallable GetQueueCallable(const Model::GetQueueRequest& request) const;

        /**
         * Retrieve the JSON for a specific queue.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/GetQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueueAsync(const Model::GetQueueRequest& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve a JSON array of up to twenty of your job templates. This will return
         * the templates themselves, not just a list of them. To retrieve the next twenty
         * templates, use the nextToken string returned with the array<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobTemplatesOutcome ListJobTemplates(const Model::ListJobTemplatesRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your job templates. This will return
         * the templates themselves, not just a list of them. To retrieve the next twenty
         * templates, use the nextToken string returned with the array<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobTemplatesOutcomeCallable ListJobTemplatesCallable(const Model::ListJobTemplatesRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your job templates. This will return
         * the templates themselves, not just a list of them. To retrieve the next twenty
         * templates, use the nextToken string returned with the array<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobTemplatesAsync(const Model::ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve a JSON array of up to twenty of your most recently created jobs. This
         * array includes in-process, completed, and errored jobs. This will return the
         * jobs themselves, not just a list of the jobs. To retrieve the twenty next most
         * recent jobs, use the nextToken string returned with the array.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your most recently created jobs. This
         * array includes in-process, completed, and errored jobs. This will return the
         * jobs themselves, not just a list of the jobs. To retrieve the twenty next most
         * recent jobs, use the nextToken string returned with the array.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your most recently created jobs. This
         * array includes in-process, completed, and errored jobs. This will return the
         * jobs themselves, not just a list of the jobs. To retrieve the twenty next most
         * recent jobs, use the nextToken string returned with the array.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve a JSON array of up to twenty of your presets. This will return the
         * presets themselves, not just a list of them. To retrieve the next twenty
         * presets, use the nextToken string returned with the array.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListPresets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPresetsOutcome ListPresets(const Model::ListPresetsRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your presets. This will return the
         * presets themselves, not just a list of them. To retrieve the next twenty
         * presets, use the nextToken string returned with the array.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListPresets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPresetsOutcomeCallable ListPresetsCallable(const Model::ListPresetsRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your presets. This will return the
         * presets themselves, not just a list of them. To retrieve the next twenty
         * presets, use the nextToken string returned with the array.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListPresets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPresetsAsync(const Model::ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve a JSON array of up to twenty of your queues. This will return the
         * queues themselves, not just a list of them. To retrieve the next twenty queues,
         * use the nextToken string returned with the array.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your queues. This will return the
         * queues themselves, not just a list of them. To retrieve the next twenty queues,
         * use the nextToken string returned with the array.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /**
         * Retrieve a JSON array of up to twenty of your queues. This will return the
         * queues themselves, not just a list of them. To retrieve the next twenty queues,
         * use the nextToken string returned with the array.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieve the tags for a MediaConvert resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Retrieve the tags for a MediaConvert resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Retrieve the tags for a MediaConvert resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Add tags to a MediaConvert queue, preset, or job template. For information about
         * tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * Add tags to a MediaConvert queue, preset, or job template. For information about
         * tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * Add tags to a MediaConvert queue, preset, or job template. For information about
         * tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Remove tags from a MediaConvert queue, preset, or job template. For information
         * about tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * Remove tags from a MediaConvert queue, preset, or job template. For information
         * about tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * Remove tags from a MediaConvert queue, preset, or job template. For information
         * about tagging, see the User Guide at
         * https://docs.aws.amazon.com/mediaconvert/latest/ug/tagging-resources.html<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Modify one of your existing job templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobTemplateOutcome UpdateJobTemplate(const Model::UpdateJobTemplateRequest& request) const;

        /**
         * Modify one of your existing job templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateJobTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobTemplateOutcomeCallable UpdateJobTemplateCallable(const Model::UpdateJobTemplateRequest& request) const;

        /**
         * Modify one of your existing job templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateJobTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobTemplateAsync(const Model::UpdateJobTemplateRequest& request, const UpdateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Modify one of your existing presets.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdatePreset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePresetOutcome UpdatePreset(const Model::UpdatePresetRequest& request) const;

        /**
         * Modify one of your existing presets.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdatePreset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePresetOutcomeCallable UpdatePresetCallable(const Model::UpdatePresetRequest& request) const;

        /**
         * Modify one of your existing presets.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdatePreset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePresetAsync(const Model::UpdatePresetRequest& request, const UpdatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Modify one of your existing queues.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutcome UpdateQueue(const Model::UpdateQueueRequest& request) const;

        /**
         * Modify one of your existing queues.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateQueue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateQueueOutcomeCallable UpdateQueueCallable(const Model::UpdateQueueRequest& request) const;

        /**
         * Modify one of your existing queues.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UpdateQueue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateQueueAsync(const Model::UpdateQueueRequest& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateCertificateAsyncHelper(const Model::AssociateCertificateRequest& request, const AssociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelJobAsyncHelper(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobTemplateAsyncHelper(const Model::CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresetAsyncHelper(const Model::CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQueueAsyncHelper(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobTemplateAsyncHelper(const Model::DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePresetAsyncHelper(const Model::DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQueueAsyncHelper(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointsAsyncHelper(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateCertificateAsyncHelper(const Model::DisassociateCertificateRequest& request, const DisassociateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobAsyncHelper(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobTemplateAsyncHelper(const Model::GetJobTemplateRequest& request, const GetJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPresetAsyncHelper(const Model::GetPresetRequest& request, const GetPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueueAsyncHelper(const Model::GetQueueRequest& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobTemplatesAsyncHelper(const Model::ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPresetsAsyncHelper(const Model::ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueuesAsyncHelper(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobTemplateAsyncHelper(const Model::UpdateJobTemplateRequest& request, const UpdateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePresetAsyncHelper(const Model::UpdatePresetRequest& request, const UpdatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateQueueAsyncHelper(const Model::UpdateQueueRequest& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MediaConvert
} // namespace Aws
